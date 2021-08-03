using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TMPro;

using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;

using System;
using System.Net;

#if UNITY_EDITOR
using System.Net.Sockets;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Threading.Tasks;
#endif

#if !UNITY_EDITOR
using Windows.Networking;
using Windows.Networking.Sockets;
using Windows.Networking.Connectivity;
using Windows.Storage.Streams;
using System.IO;
using System.Text;
#endif


public class HandTracking : MonoBehaviour
{
    // for VisualizeHand
    MixedRealityPose pose;

    // for DepthData
    public GameObject PIcube;
    public static Vector3 cube;
    Renderer sr;

    public double data = 1.0;    // for communication with Arduino

    private float tot_len = 1.0f;

    Vector3 indextip;
    Vector3 indexdistal;
    Vector3 indexmiddle;
    Vector3 indexknuckle;
    Vector3 point_1;
    Vector3 point_2;
    Vector3 point_3;

    double past_point_2 = 0;
    double past_point_3 = 0;

    private string serverIP;

#if UNITY_EDITOR
    private TcpClient client;
    private int serverPort = 8000;
    private NetworkStream stream;
    IFormatter formatter;
#endif

#if !UNITY_EDITOR
    private double past_data = 0;
    private Windows.Networking.Sockets.StreamSocket socket;
    private StreamSocketListener listener;
#endif

    // for interaction design

    int mode = 1;   // 1:ID_1(depth에 따라), 2:ID_2(depth에 맞춰 큐브 뒤로 이동), 3:ID_3(직관적 디자인), 4:ID_4(z방향 + x방향)

    public GameObject sphere_1;
    public GameObject sphere_2;
    public GameObject sphere_3;
    Renderer C_1, C_2, C_3;
    Color c1, c2, c3;

    double peak_tip = 0.6;
    int peak_z = 0; // 0: out of range, 1: operation_1, 2: operation_2, 3: operation_3

    public float timer_1 = 0;
    public float timer_2 = 0;
    public float timer_3 = 0;
    public float timer_stop = 0;
    Boolean stop = false;

    // mode #3
    float d_click_t = 0.5f; // recognition time for operation #2
    Boolean IsOneClick = false;
    Boolean IsDoubleClick = false;
    Boolean Pressed = true; // (Pressed) ? operation #3 : operation #1 or #2
    Boolean Depressed = false;  // for operation #1, #2 => Recognize each operation when depressing finger from the cube

    // mode #4
    double pos_2 = -100;   // for mode 4 deciding whether operation #3 or not

    // for experimental interface
    List<int> operations = new List<int>();
    public TextMeshPro instruction;
    int start = 0;
    int user_choice;
    int success = 0;
    int try_num = 0;    // # of tries of each instruction
    int experiment_t = 0;   // for experiment time log
    int past_mode = 1;
    float random_delay;
    Boolean selected = false;
    int reset = 0;
    Boolean part_end = false;   // whether all the instructions of each mode finished or not
    string past_instruction;
    string exp_log;

    void Start()
    {
        sr = PIcube.GetComponent<Renderer>();
        sr.material.color = Color.white;

        C_1 = sphere_1.GetComponent<Renderer>();
        C_2 = sphere_2.GetComponent<Renderer>();
        C_3 = sphere_3.GetComponent<Renderer>();
        C_1.material.color = Color.white;
        C_2.material.color = Color.white;
        C_3.material.color = Color.white;

        instruction.enabled = false;

#if UNITY_EDITOR
        formatter = new BinaryFormatter();
        Task.Factory.StartNew(ListenBackground);
#endif
    }


    void Update()
    {
        VisualizeHand();

        DepthData();

        c1 = C_1.material.color;
        c2 = C_2.material.color;
        c3 = C_3.material.color;

        if (mode.Equals(1))
        {
            ID_1();
        }
        else if (mode.Equals(2))
        {
            ID_2();
        }
        else if (mode.Equals(3))
        {
            // update past_points to rememeber the present z postision values of 3 points
            past_point_2 = point_2.z;
            past_point_3 = point_3.z;
            ID_3();
        }
        else
        {
            ID_4();
        }



#if UNITY_EDITOR
        // for TCP
        if (stream != null && stream.CanWrite)
        {
            formatter.Serialize(stream, data);  // sending data to Arduino
        }
#endif

#if !UNITY_EDITOR
        // don't send the same depth value considering effectivity
        if (data != past_data)
        {
            SendInformation(data.ToString());    // for TCP connection
            past_data = data;
        }
#endif
    }

    private void VisualizeHand()
    {
        cube = PIcube.transform.position;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            indextip = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexDistalJoint, Handedness.Right, out pose))
        {
            indexdistal = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexMiddleJoint, Handedness.Right, out pose))
        {
            indexmiddle = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexKnuckle, Handedness.Right, out pose))
        {
            indexknuckle = pose.Position;
        }
    }

    private void DepthData()
    {
        point_1 = 0.5f * (indextip + indexdistal);
        point_2 = 0.5f * (indexdistal + indexmiddle);
        point_3 = 0.5f * (indexmiddle + indexknuckle);

        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)    // valid posture
        {
            if (indextip.z >= cube.z - 0.1 && (indextip.x >= 0.1 && indextip.x <= 0.3 && indextip.y >= -0.1 && indextip.y <= 0.1)) // 손끝 들어옴
            {
                data = 2;
                tot_len = indextip.z - indexknuckle.z;
                sr.material.color = Color.black;

                if (point_1.z >= cube.z - 0.1 && (point_1.x >= 0.1 && point_1.x <= 0.3 && point_1.y >= -0.1 && point_1.y <= 0.1)) // 첫째 마디 들어옴
                {
                    data = 2 - ((indextip.z - point_1.z) * Mathf.Pow(tot_len, -1)) * 2;  // max_data = 2
                    sr.material.color = Color.red;

                    if (point_2.z >= cube.z - 0.1 && (point_2.x >= 0.1 && point_2.x <= 0.3 && point_2.y >= -0.1 && point_2.y <= 0.1)) // 둘째 마디 들어옴
                    {
                        data = 2 - ((indextip.z - point_2.z) * Mathf.Pow(tot_len, -1)) * 2;
                        sr.material.color = Color.green;

                        if (point_3.z >= cube.z - 0.1 && (point_3.x >= 0.1 && point_3.x <= 0.3 && point_3.y >= -0.1 && point_3.y <= 0.1)) // 셋째 마디 들어옴
                        {
                            data = 2 - ((indextip.z - point_3.z) * Mathf.Pow(tot_len, -1)) * 2;
                            sr.material.color = Color.blue;
                        }

                        if (indexknuckle.z >= cube.z - 0.1 && (indexknuckle.x >= 0.1 && indexknuckle.x <= 0.3 && indexknuckle.y >= -0.1 && indexknuckle.y <= 0.1))
                        {
                            data = 0;
                            sr.material.color = Color.black;
                        }
                    }
                }
            }
            else
            {
                data = -1;
                sr.material.color = Color.white;
            }
        }
        else
        {
            data = -1;
            sr.material.color = Color.white;
        }
    }

    private void ID_1()
    {
        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
        {
            if (indextip.x >= 0.1 && indextip.x <= 0.3 && indextip.y >= -0.1 && indextip.y <= 0.1)
            {
                if (peak_tip < indextip.z)
                {
                    peak_tip = indextip.z;

                    if (point_3.z > 0.62)
                    {
                        peak_z = 0;
                    }
                    else if (point_3.z >= 0.6 && point_3.z <= 0.62)
                    {
                        peak_z = 3;
                    }
                    else if (point_2.z >= 0.6 && point_2.z <= 0.62)
                    {
                        peak_z = 2;
                    }
                    else if (point_1.z >= 0.6 && point_1.z <= 0.62)
                    {
                        peak_z = 1;
                    }
                }

                if (peak_tip != 0.6 && indextip.z < 0.6)
                {
                    switch (peak_z)
                    {
                        case 1:
                            Operate_1();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 2:
                            Operate_2();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 3:
                            Operate_3();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 0:
                            peak_tip = 0.6;
                            break;
                    }
                }
            }
        }
    }

    private void ID_2()
    {
        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
        {
            if (indextip.x >= 0.1 && indextip.x <= 0.3 && indextip.y >= -0.1 && indextip.y <= 0.1)
            {
                if (indextip.z >= cube.z - 0.1)
                {
                    PIcube.transform.position = new Vector3(0.2f, 0, (float)cube.z + 0.00005f);    // Cube is moving backward
                }

                if (peak_tip < indextip.z)
                {
                    peak_tip = indextip.z;

                    if (point_3.z > cube.z - 0.08)
                    {
                        peak_z = 0;
                    }
                    else if (point_3.z >= cube.z - 0.1 && point_3.z <= cube.z - 0.08)
                    {
                        peak_z = 3;
                    }
                    else if (point_2.z >= cube.z - 0.1 && point_2.z <= cube.z - 0.08)
                    {
                        peak_z = 2;
                    }
                    else if (point_1.z >= cube.z - 0.1 && point_1.z <= cube.z - 0.08)
                    {
                        peak_z = 1;
                    }
                }

                if (peak_tip != 0.6 && indextip.z < 0.6)
                {
                    switch (peak_z)
                    {
                        case 1:
                            Operate_1();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 2:
                            Operate_2();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 3:
                            Operate_3();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 0:
                            peak_tip = 0.6;
                            break;
                    }

                    PIcube.transform.position = new Vector3(0.2f, 0, 0.7f);
                }
            }
        }
    }

    private void ID_3()
    {
        if (stop.Equals(false))
        {
            if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
            {
                if (indextip.x >= 0.1 && indextip.x <= 0.3 && indextip.y >= -0.1 && indextip.y <= 0.1)
                {
                    if (point_2.z >= 0.6 && past_point_2 >= 0.6)
                    {
                        Pressed = true;
                        Depressed = false;
                        timer_3 += Time.deltaTime;

                        if (timer_3 >= 1f)
                        {
                            Operate_3();
                            stop = true;
                            timer_3 = 0;
                            Pressed = false;
                        }
                    }
                    else
                    {
                        Pressed = false;
                        if (IsOneClick && ((Time.time - timer_2) > d_click_t) && Depressed.Equals(true))
                        {
                            Operate_1();
                            IsOneClick = false;
                            Pressed = true;
                            stop = true;
                            timer_2 = 0;
                        }

                        if (point_2.z >= 0.6 && Pressed.Equals(false))
                        {
                            Depressed = false;
                            IsDoubleClick = false;
                            if (!IsOneClick)
                            {
                                timer_2 = Time.time;
                                IsOneClick = true;
                            }

                            else if (IsOneClick && ((Time.time - timer_2) < d_click_t))
                            {
                                IsDoubleClick = true;
                            }
                        }
                        else if (point_2.z < 0.6)
                        {
                            Depressed = true;

                            if (IsDoubleClick)
                            {
                                Operate_2();
                                IsOneClick = false;
                                IsDoubleClick = false;
                                Pressed = true;
                                stop = true;
                                timer_2 = 0;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            stop = false;
            timer_2 = 0;
            timer_3 = 0;
            timer_stop = 0;
            Pressed = true;
            Depressed = true;
            IsOneClick = false;
        }
    }

    private void ID_4()
    {
        if (stop.Equals(false))
        {
            if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
            {
                if (indextip.z >= cube.z - 0.1 && (indextip.x >= 0.1 && indextip.x <= 0.3 && indextip.y >= -0.1 && indextip.y <= 0.1))
                {
                    if (point_3.z >= 0.6 && point_3.z <= 0.62 && past_point_3 >= 0.6 && past_point_3 <= 0.62)
                    {
                        timer_2 += Time.deltaTime;
                        if (timer_2 >= 1f)
                        {
                            Operate_2();
                            stop = true;
                            timer_2 = 0;
                        }
                    }
                    else
                    {
                        timer_2 = 0;
                    }
                    if (point_2.z >= 0.6 && point_3.z <= 0.62 && past_point_2 >= 0.6 && past_point_3 <= 0.62)
                    {
                        timer_3 += Time.deltaTime;
                        if (pos_2.Equals(-100))
                        {
                            pos_2 = point_2.x;
                        }
                        if (timer_3 >= 1f && (point_2.x - pos_2) >= 0.1)
                        {
                            Operate_3();
                            stop = true;
                            timer_3 = 0;
                            pos_2 = -100;
                        }

                        if (point_2.z >= 0.6 && point_2.z <= 0.62 && past_point_2 >= 0.6 && past_point_2 <= 0.62)
                        {
                            timer_1 += Time.deltaTime;

                            if (timer_1 >= 1f && timer_3.Equals(0))
                            {
                                Operate_1();
                                stop = true;
                                timer_1 = 0;
                            }
                        }
                        else
                        {
                            timer_1 = 0;
                        }
                    }
                    else
                    {
                        timer_1 = 0;
                        timer_3 = 0;
                        pos_2 = -100;
                    }
                }
            }
        }
        else
        {
            timer_stop += Time.deltaTime;

            if (timer_stop >= 0.5f)
            {
                stop = false;

                timer_1 = 0;
                timer_2 = 0;
                timer_3 = 0;
                timer_stop = 0;
            }
        }
    }

    private void Operate_1()
    {
        Debug.Log("Mode " + mode + " : Operation 1");
        user_choice = 1;
        selected = true;

        if (c1 == Color.green)
        {
            C_1.material.color = Color.blue;
        }
        else if (c1 == Color.blue)
        {
            C_1.material.color = Color.green;
        }
        else
        {
            C_1.material.color = Color.green;
            C_2.material.color = Color.white;
            C_3.material.color = Color.white;
        }
    }

    private void Operate_2()
    {
        Debug.Log("Mode " + mode + " : Operation 2");
        user_choice = 2;
        selected = true;

        if (c2 == Color.green)
        {
            C_2.material.color = Color.blue;
        }
        else if (c2 == Color.blue)
        {
            C_2.material.color = Color.green;
        }
        else
        {
            C_2.material.color = Color.green;
            C_1.material.color = Color.white;
            C_3.material.color = Color.white;
        }
    }

    private void Operate_3()
    {
        Debug.Log("Mode " + mode + " : Operation 3");
        user_choice = 3;
        selected = true;

        if (c3 == Color.green)
        {
            C_3.material.color = Color.blue;
        }
        else if (c3 == Color.blue)
        {
            C_3.material.color = Color.green;
        }
        else
        {
            C_3.material.color = Color.green;
            C_1.material.color = Color.white;
            C_2.material.color = Color.white;
        }
    }
    private void return_instruction () {
        instruction.SetText(past_instruction);
    }

    public void ChangeMode (int m)
    {

        if (m.Equals(1))
        {
            Debug.Log("Reset experiment!");
            part_end = false;
            instruction.enabled = false;
            past_mode = 1;
            mode = m;
            if (c1 != Color.white)
            {
                C_1.material.color = Color.white;
            }
            else if (c2 != Color.white)
            {
                C_2.material.color = Color.white;
            }
            else
            {
                C_3.material.color = Color.white;
            }
        }
        else if (past_mode != (m - 1) && part_end.Equals(true))
        {
            instruction.enabled = true;
            past_instruction = instruction.text;
            instruction.SetText("You have to choose mode " + (past_mode + 1));
        }
        else if (part_end.Equals(false))
        {
            instruction.enabled = true;
            past_instruction = instruction.text;
            instruction.SetText("You can't change mode!");
            Invoke("return_instruction", 1f);
        }
        else if (part_end.Equals(true))
        {
            Debug.Log("The mode is " + m + " now!");
            instruction.enabled = false;
            part_end = false;
            past_mode = m;
            mode = m;
            if (c1 != Color.white)
            {
                C_1.material.color = Color.white;
            }
            else if (c2 != Color.white)
            {
                C_2.material.color = Color.white;
            }
            else
            {
                C_3.material.color = Color.white;
            }
            Shuffle(operations);
            StartCoroutine(RandomInstruction(operations));
        }
    }

    private void Shuffle(List<int> operations)
    {
        for (int i = 0; i < operations.Count; i++)
        {
            int temp = operations[i];
            int randomIndex = UnityEngine.Random.Range(0, operations.Count);
            operations[i] = operations[randomIndex];
            operations[randomIndex] = temp;
        }
    }

    IEnumerator RandomInstruction(List<int> operations)
    {
        for (int i = 0; i < operations.Count; i++)
        {
            random_delay = (float) UnityEngine.Random.Range(5, 10);
            yield return new WaitForSeconds(random_delay);
            instruction.enabled = true;
            instruction.SetText("Mode " + mode + ": Do Operation " + operations[i]);
            instruction.color = Color.white;
            user_choice = 0;

            GetTime();
            exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",start,0,0,0";
            Debug.Log(exp_log);
#if !UNITY_EDITOR
            SendInformation(exp_log);
#endif
            while (success.Equals(0) && reset.Equals(0))
            {
                if (user_choice.Equals(operations[i]) && selected.Equals(true))
                {
                    success = 1;
                }
                else if (user_choice != operations[i] && selected.Equals(true)) // fail
                {
                    instruction.color = Color.red;
                    try_num += 1;
                    GetTime();
                    exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",doing," + try_num.ToString() + ",0," + user_choice.ToString();
                    Debug.Log(exp_log);
#if !UNITY_EDITOR
                    SendInformation(exp_log);
#endif

                    yield return new WaitForSeconds(0.5f);

                    instruction.color = Color.white;
                    selected = false;
                }
                yield return new WaitForSeconds(0.1f);  // Coroutine을 사용할 때, while 문 내부에 WaitForSeconds를 추가하지 않으면 Unity가 프로그램 중에 멈추고 응답하지 않는 문제 발생
            }

            if (reset.Equals(1))
            {
                instruction.SetText("Reset : Press start button");
                yield return new WaitForSeconds(0.1f);
                break;
            }
            else // success
            {
                try_num += 1;
                instruction.color = Color.blue;
                yield return new WaitForSeconds(0.5f);
                GetTime();
                exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",end," + try_num.ToString() + ",1," + user_choice.ToString();
                Debug.Log(exp_log);
#if !UNITY_EDITOR
                SendInformation(exp_log);
#endif
            }
            success = 0;
            try_num = 0;
            user_choice = 0;
            selected = false;
        }

        if (reset != 1) 
        {
            instruction.color = Color.white;
            Debug.Log("You finished all instructions of mode " + mode);
        
            if (mode.Equals(4))
            {
                instruction.SetText("Your experiment is finished!");
                start = 0;
            }
            else
            {
                instruction.SetText("Change mode to " + (mode + 1));
                part_end = true;
            }
            GetTime();
            exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + operations.Count.ToString() + "," + operations[operations.Count - 1].ToString() + ",finish," + try_num.ToString() + ",1," + user_choice.ToString();
            Debug.Log(exp_log);
#if !UNITY_EDITOR
            SendInformation(exp_log);
#endif
        }

        reset = 0;

    }

    private void GetTime()
    {
        var now = DateTime.Now.ToLocalTime();
        var span = (now - new DateTime(2021, 07, 30, 0, 0, 0, 0).ToLocalTime());    // timespan을 위한 new DateTime을 최대한 가까운 시간으로 수정하지 않으면 -값이 나옴!! 주의하자 이 부분 (in 범위 벗어나서 overflow)
        experiment_t = (int)span.TotalMilliseconds;
    }

    public void ExperimentState (string state)
    {
        if (state.Equals("start"))
        {
            if (start.Equals(1))
            {
                instruction.enabled = true;
                instruction.SetText("Please press reset button.");
            }
            else
            {
                instruction.enabled = true;
                instruction.SetText("Start Experiment!");
                GetTime();
                exp_log = experiment_t.ToString() + ",1,0,1,select,0,0,1";
                Debug.Log(exp_log);
#if !UNITY_EDITOR
                SendInformation(exp_log);
#endif

                for (int i = 1; i <= 3; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        operations.Add(i);
                    }
                }
                Debug.Log("Start clicked!");
                start = 1;

                Shuffle(operations);
                // Debug.Log("Operations order is ... " + string.Join(",", operations.ToArray()));
                StartCoroutine(RandomInstruction(operations));
            }
        }
        else
        {   // "reset"
            reset = 1;
            GetTime();
            exp_log = experiment_t.ToString() + "," + mode.ToString() + ",0,0,reset," + try_num.ToString() + ",0," + user_choice.ToString();
            Debug.Log(exp_log);
#if !UNITY_EDITOR
            SendInformation(exp_log);
#endif
            start = 0;
            instruction.enabled = false;
            ChangeMode(1);
        }
        try_num = 0;
        success = 0;
        selected = false;
    }

#if !UNITY_EDITOR
    public async void SendInformation (string request)
    {
        try
        {
            // Create the StreamSocket and establish a connection to the echo server.
            using (var streamSocket = new Windows.Networking.Sockets.StreamSocket())
            {
                // The server hostname that we will be establishing a connection to. In this example, the server and client are in the same process.
                var hostName = new Windows.Networking.HostName("10.0.1.7"); // Server 위치 바뀔 때마다 매번 ip address를 바꿔야 하나?

                await streamSocket.ConnectAsync(hostName, "50000");

                using (Stream outputStream = streamSocket.OutputStream.AsStreamForWrite())
                {
                    using (var streamWriter = new StreamWriter(outputStream))
                    {
                        await streamWriter.WriteLineAsync(request);
                        await streamWriter.FlushAsync();
                    }
                }   
            }
        }
        catch (Exception ex)
        {
            Windows.Networking.Sockets.SocketErrorStatus webErrorStatus = Windows.Networking.Sockets.SocketError.GetStatus(ex.GetBaseException().HResult);
        }
    }
#endif

#if UNITY_EDITOR
    // for TCP connection
    private void ListenBackground()
    {
        try
        {
            Debug.Log("Starting TCP server...\n");

            serverIP = GetLocalIPAddress();
            Debug.Log("IP: " + serverIP);
            Debug.Log("Port: " + serverPort + "\n");

            TcpListener listener = new TcpListener(IPAddress.Parse(serverIP), serverPort);
            listener.Start();

            while(true)
            {
                client = listener.AcceptTcpClient();
                stream = client.GetStream();
            }
        }
        
        catch (SocketException socketException)
        {
            Debug.Log("SocketException " + socketException.ToString());
        }
    }

    private string GetLocalIPAddress()
    {
        var host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                return ip.ToString();
            }
        }
        throw new Exception("No network adapters with an IPv4 address in the system!");
    }
#endif
}
