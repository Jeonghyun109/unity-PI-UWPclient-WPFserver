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
    //int what_color; // 0 : grey, 1 : red, 2 : green, 3 : blue, 4 : black
    //int past_color = 0;

    public double data = 1.0;    // for communication with Arduino
    int minusNum = 0;

    private float tot_len = 1.0f;

    Vector3 indextip;
    Vector3 indexdistal;
    Vector3 indexmiddle;
    Vector3 indexknuckle;
    Vector3 point_1;
    Vector3 point_2;
    Vector3 point_3;

    double past_point_1 = 0;
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
    private DatagramSocket clientDatagramSocket;
    private HostName hostName;
#endif

    // for interaction design

    int mode = 1;   // 1:ID_1(depth에 따라), 2:ID_2(depth에 맞춰 큐브 뒤로 이동), 3:ID_3(직관적 디자인), 4:ID_4(z방향 + x방향)

    double peak_tip = 0.3;
    int peak_z = 0; // 0: out of range, 1: operation_1, 2: operation_2, 3: operation_3

    public float timer_1 = 0;
    public float timer_2 = 0;
    public float timer_3 = 0;
    public float timer_stop = 0;
    Boolean stop = false;

    // mode #1
    bool discrete_feed_1 = false;
    bool discrete_feed_2 = false;
    bool discrete_feed_3 = false;
    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;
    int num_0 = 0;

    // mode #3
    float d_click_t = 0.75f; // recognition time for operation #2
    Boolean IsOneClick = false;
    Boolean IsDoubleClick = false;
    Boolean Depressed = false;  // for operation #1, #2 => Recognize each operation when depressing finger from the cube
    Boolean third = false;
    Boolean already = false;

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
    float random_delay;
    Boolean selected = false;
    int reset = 0;
    string exp_log;
    int WaitNextInstruction = 0;  // 1 if waiting for next instruction (don't recognize operation for a few seconds)
    Boolean OneClick = false;
    List<String> instruction_ex = new List<string>();


    void Start()
    {            
        sr = PIcube.GetComponent<Renderer>();
        sr.material.color = Color.green;

        instruction.enabled = false;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                operations.Add(i);
            }
        }

        instruction_ex.Add("Point 1."); // mode 1 && operation 1
        instruction_ex.Add("Point 2."); // mode 1 && operation 2
        instruction_ex.Add("Point 3."); // mode 1 && operation 3

        instruction_ex.Add("One Touch."); // mode 3 && operation 1
        instruction_ex.Add("Double Touch."); // mode 3 && operation 2
        instruction_ex.Add("Long Touch."); // mode 3 && operation 3

#if UNITY_EDITOR
        formatter = new BinaryFormatter();
        Task.Factory.StartNew(ListenBackground);
#endif

#if !UNITY_EDITOR
        StartClientAsync();
#endif

    }


    void Update()
    {
        VisualizeHand();

        DepthData();

        if (mode.Equals(1))
        {
            past_point_1 = point_1.z;
            past_point_2 = point_2.z;
            past_point_3 = point_3.z;
            ID_1();
        }/*
        else if (mode.Equals(2))
        {
            ID_2();
        }*/
        else if (mode.Equals(3))
        {
            // update past_points to rememeber the present z postision values of 3 points
            past_point_1 = point_1.z;
            past_point_2 = point_2.z;
            past_point_3 = point_3.z;
            ID_3();
        }

        if (Input.inputString != null)
        {
            ChangeMode(Input.inputString);
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
        if (data != past_data || data != -1)
        {
            if (past_data.Equals(-1))
            {
                minusNum = 0;
            }
            SendInformation(data.ToString());    // for TCP connection
            past_data = data;
        }
        else if (data.Equals(-1) && minusNum < 10)
        {
            SendInformation(data.ToString());
            past_data = data;
            minusNum++;
        }

        if (discrete_feed_1) {
            if (num_1 < 10) {
                SendInformation("11");
                num_1++;
            }
            num_2 = 0;
            num_3 = 0;
            num_0 = 0;
        }
        else if (discrete_feed_2) {
            if (num_2 < 10) {
                SendInformation("22");
                num_2++;
            }
            num_1 = 0;
            num_3 = 0;
            num_0 = 0;
        }
        else if (discrete_feed_3) {
            if (num_3 < 10) {
                SendInformation("33");
                num_3++;
            }
            num_1 = 0;
            num_2 = 0;
            num_0 = 0;
        }
        else {
            if (num_0 < 10) {
                SendInformation("44");
                num_0++;
            }
            num_1 = 0;
            num_2 = 0;
            num_3 = 0;
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
            if (point_1.z >= cube.z - 0.05 && (point_1.x >= 0.05 && point_1.x <= 0.15 && point_1.y >= -0.18 && point_1.y <= -0.08)) // 손끝 들어옴
            {
                tot_len = indextip.z - indexknuckle.z;
                data = 2 - ((point_1.z - cube.z + 0.05) * Mathf.Pow(tot_len, -1)) * 2;

                if (point_3.z > cube.z - 0.03 && (point_3.x >= 0.05 && point_3.x <= 0.15 && point_3.y >= -0.18 && point_3.y <= -0.08)) // 셋째 마디 들어옴
                {
                    data = 0;
                }
            }
            else
            {
                data = -1;
                //what_color = 0;
            }
        }
        else
        {
            data = -1;
            //what_color = 0;
        }
    }

    private void ID_1()
    {
        if (stop == false)
        {
            if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
            {
                if (indextip.x >= 0.05 && indextip.x <= 0.15 && indextip.y >= -0.18 && indextip.y <= -0.08)
                {
                    if (point_3.z >= 0.3 && point_3.z <= 0.32 && past_point_3 >= 0.3 && past_point_3 <= 0.32)
                    {
                        discrete_feed_3 = true;
                        timer_3 += Time.deltaTime;
                        if (timer_3 >= 0.5f)
                        {
                            Operate_3();
                            stop = true;
                            timer_3 = 0;
                        }
                    }
                    else
                    {
                        discrete_feed_3 = false;
                        timer_3 = (float)0;
                    }

                    if (point_2.z >= 0.3 && point_2.z <= 0.32 && past_point_2 >= 0.3 && past_point_2 <= 0.32)
                    {
                        discrete_feed_2 = true;
                        timer_2 += Time.deltaTime;
                        if (timer_2 >= 0.5f)
                        {
                            Operate_2();
                            stop = true;
                            timer_2 = 0;
                        }
                    }
                    else
                    {
                        discrete_feed_2 = false;
                        timer_2 = (float)0;
                    }

                    if (point_1.z >= 0.3 && point_1.z <= 0.32 && past_point_1 >= 0.3 && past_point_1 <= 0.32)
                    {
                        discrete_feed_1 = true;
                        timer_1 += Time.deltaTime;
                        if (timer_1 >= 0.5f)
                        {
                            Operate_1();
                            stop = true;
                            timer_1 = 0;
                        }
                    }
                    else
                    {
                        discrete_feed_1 = false;
                        timer_1 = (float)0;
                    }
                }
                else
                {
                    discrete_feed_1 = false;
                    discrete_feed_2 = false;
                    discrete_feed_3 = false;
                }
            }
            else
            {
            discrete_feed_1 = false;
            discrete_feed_2 = false;
            discrete_feed_3 = false;
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

    private void ID_2()
    {
        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
        {
            if (indextip.x >= 0.05 && indextip.x <= 0.15 && indextip.y >= -0.18 && indextip.y <= -0.08)
            {
                if (indextip.z >= cube.z - 0.05)
                {
                    if (peak_z.Equals(3))
                    {
                        PIcube.transform.position = new Vector3(0.1f, -0.13f, (float)cube.z + 0.00005f);
                    }
                    else
                    {
                        PIcube.transform.position = new Vector3(0.1f, -0.13f, (float)cube.z + 0.0001f);    // Cube is moving backward
                    }
                }

                if (peak_tip < indextip.z)
                {
                    peak_tip = indextip.z;

                    if (point_3.z > cube.z - 0.03)
                    {
                        peak_z = 0;
                        //what_color = 4;
                    }
                    else if (point_3.z >= cube.z - 0.05 && point_3.z <= cube.z - 0.03)
                    {
                        peak_z = 3;
                        //what_color = 3;
                    }
                    else if (point_2.z >= cube.z - 0.05 && point_2.z <= cube.z - 0.03)
                    {
                        peak_z = 2;
                        //what_color = 2;
                    }
                    else if (point_1.z >= cube.z - 0.05 && point_1.z <= cube.z - 0.03)
                    {
                        peak_z = 1;
                        //what_color = 1;
                    }
                }

                if (peak_tip != 0.3 && indextip.z < 0.3)
                {
                    switch (peak_z)
                    {
                        case 1:
                            Operate_1();
                            peak_tip = 0.3;
                            peak_z = 0;
                            break;
                        case 2:
                            Operate_2();
                            peak_tip = 0.3;
                            peak_z = 0;
                            break;
                        case 3:
                            Operate_3();
                            peak_tip = 0.3;
                            peak_z = 0;
                            break;
                        case 0:
                            peak_tip = 0.3;
                            break;
                    }

                    PIcube.transform.position = new Vector3(0.1f, -0.13f, 0.35f);
                }
            }
        }
    }

    private void ID_3()
    {
        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
        {
            if (indextip.x >= 0.05 && indextip.x <= 0.15 && indextip.y >= -0.18 && indextip.y <= -0.08)
            {
                timer_3 = 0;

                if (point_1.z >= 0.3)
                {
                    //what_color = 1;

                    if (!IsOneClick && !third)
                    {
                        timer_2 = Time.time;
                        IsOneClick = true;
                    }

                    else if (IsOneClick && ((Time.time - timer_2) < d_click_t) && Depressed.Equals(true))
                    {
                        //what_color = 2;
                        IsDoubleClick = true;
                    }
                    else if (IsOneClick && ((Time.time - timer_2) > d_click_t) && Depressed.Equals(false))
                    {
                        Operate_3();
                        IsOneClick = false;
                        IsDoubleClick = false;
                        timer_2 = 0;
                        third = true;
                        already = false;
                    }
                }
                else
                {
                    if (IsOneClick && !already)
                    {
                        Depressed = true;
                        Operate_1(); //
                        IsDoubleClick = false; //
                        already = true;
                    }

                    if (IsOneClick && ((Time.time - timer_2) > d_click_t))
                    {
                        already = false;
                        timer_2 = 0;
                        IsOneClick = false;
                        IsDoubleClick = false;
                        Depressed = false;
                    }

                    else if (IsDoubleClick && ((Time.time - timer_2) < d_click_t))
                    {
                        Operate_2();
                        IsOneClick = false;
                        IsDoubleClick = false;
                        Depressed = false;
                        timer_2 = 0;
                        already = false;
                    }
                    
                    third = false;
                }
            }
        }
    }
    private void Operate_1()
    {
        if (start == 0 || (start == 1 && WaitNextInstruction == 0))
        {
            //Debug.Log("Mode " + mode + " : Operation 1");
            user_choice = 1;
            selected = true;
        }
        else
        {
            user_choice = 0;
        }

    }

    private void Operate_2()
    {
        if (start == 0 || (start == 1 && WaitNextInstruction == 0))
        {
            //Debug.Log("Mode " + mode + " : Operation 2");
            user_choice = 2;
            selected = true;
        }
        else
        {
            user_choice = 0;
        }

    }

    private void Operate_3()
    {
        if (start == 0 || (start == 1 && WaitNextInstruction == 0))
        {
            //Debug.Log("Mode " + mode + " : Operation 3");
            user_choice = 3;
            selected = true;
        }
        else
        {
            user_choice = 0;
        }
    }

    public void ChangeMode (string m)
    {
        if (m.Equals("1") || m.Equals("2") || m.Equals("3") || m.Equals("4"))
        {
            Debug.Log("The mode is " + m + " now!");

            instruction.enabled = false;
            mode = int.Parse(m);

            start = 0;
        }
        else if (m.Equals("7")) // start
        {
            if (start.Equals(1))
            {
                instruction.enabled = true;
                instruction.SetText("Please press reset button.");
            }
            else
            {
                instruction.enabled = true;
                instruction.SetText("Start Mode " + mode);

                GetTime();
                exp_log = experiment_t.ToString() + "," + mode + ",0,1,select,0,0,1";
                //Debug.Log(exp_log);
#if !UNITY_EDITOR
                SendInformation(exp_log);
#endif
                start = 1;

                // Debug.Log("Operations order is ... " + string.Join(",", operations.ToArray()));
                Shuffle(operations);
                StartCoroutine(RandomInstruction(operations));
            }
            try_num = 0;
            success = 0;
            selected = false;
        }
        else if (m.Equals("6")) // reset
        {
            reset = 1;
            start = 0;
            GetTime();
            exp_log = experiment_t.ToString() + "," + mode.ToString() + ",0,0,reset," + try_num.ToString() + ",0," + user_choice.ToString();
            //Debug.Log(exp_log);
#if !UNITY_EDITOR
            SendInformation(exp_log);
#endif
            instruction.enabled = false;

            try_num = 0;
            success = 0;
            selected = false;
            user_choice = 0;
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
            OneClick = false;
            user_choice = 0;
            random_delay = (float) UnityEngine.Random.Range(4, 7);
            yield return new WaitForSeconds(random_delay);
            WaitNextInstruction = 0;
            instruction.enabled = true;
            //instruction.SetText("Mode " + mode + ": Do Operation " + operations[i]);
            if (mode == 1)
            {
                instruction.SetText(instruction_ex[operations[i] - 1]);
            }
            else
            {
                instruction.SetText(instruction_ex[2 + operations[i]]);
            }
            
            instruction.color = Color.white;

            GetTime();
            exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",start,0,0,0";
            //Debug.Log(exp_log);
#if !UNITY_EDITOR
            SendInformation(exp_log);
#endif
            while (success.Equals(0) && reset.Equals(0))
            {
                if (user_choice.Equals(operations[i]) && selected.Equals(true))
                {
                    success = 1;
                    WaitNextInstruction = 1;
                }
                else if (user_choice != operations[i] && selected.Equals(true)) // fail
                {
                    if (mode == 3 && user_choice == 1 && operations[i] == 2 && !OneClick)
                    {
                        OneClick = true;
                    }
                    else
                    {
                        instruction.color = Color.magenta;
                        try_num += 1;
                        GetTime();
                        exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",doing," + try_num.ToString() + ",0," + user_choice.ToString();
                       //Debug.Log(exp_log);
#if !UNITY_EDITOR
                        SendInformation(exp_log);
#endif

                        yield return new WaitForSeconds(0.5f);
                        OneClick = false;
                        instruction.color = Color.white;
                    }

                    selected = false;
                }

                yield return new WaitForSeconds(0.1f);  // Coroutine을 사용할 때, while 문 내부에 WaitForSeconds를 추가하지 않으면 Unity가 프로그램 중에 멈추고 응답하지 않는 문제 발생
            }

            if (reset.Equals(1))
            {
                instruction.SetText("Reset : Press start button");
                WaitNextInstruction = 0;
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
                //Debug.Log(exp_log);
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
            instruction.SetText("You finished all instructions of mode " + mode);
        
            //Debug.Log("Please change mode!");

            GetTime();
            exp_log = experiment_t.ToString() + "," + mode.ToString() + "," + operations.Count.ToString() + "," + operations[operations.Count - 1].ToString() + ",finish," + try_num.ToString() + ",1," + user_choice.ToString();
            //Debug.Log(exp_log);
#if !UNITY_EDITOR
            SendInformation(exp_log);
#endif
        }
        else
        {
            reset = 0;
        }


    }

    private void GetTime()
    {
        var now = DateTime.Now.ToLocalTime();
        var span = (now - new DateTime(2021, 07, 30, 0, 0, 0, 0).ToLocalTime());    // timespan을 위한 new DateTime을 최대한 가까운 시간으로 수정하지 않으면 -값이 나옴!! 주의하자 이 부분 (in 범위 벗어나서 overflow)
        experiment_t = (int)span.TotalMilliseconds;
    }

#if !UNITY_EDITOR
    public async void StartClientAsync()
    {
        try
        {
            // Create the DatagramSocket and establish a connection to the server.
            clientDatagramSocket = new Windows.Networking.Sockets.DatagramSocket();

            // The server hostname that we will be establishing a connection to. In this example, the server and client are in the same process.
            hostName = new Windows.Networking.HostName("10.0.1.7");

            await clientDatagramSocket.BindServiceNameAsync("49999");

        }
        catch (Exception ex)
        {
            Windows.Networking.Sockets.SocketErrorStatus webErrorStatus = Windows.Networking.Sockets.SocketError.GetStatus(ex.GetBaseException().HResult);
        }
    }

    public async void SendInformation (string request)
    {
        using (var serverDatagramSocket = new Windows.Networking.Sockets.DatagramSocket())
        {
            using (Stream outputStream = (await serverDatagramSocket.GetOutputStreamAsync(hostName, "50000")).AsStreamForWrite())
            {
                using (var streamWriter = new StreamWriter(outputStream))
                {
                    await streamWriter.WriteLineAsync(request);
                    await streamWriter.FlushAsync();
                }
            }            
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
