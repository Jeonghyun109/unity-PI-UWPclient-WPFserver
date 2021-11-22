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

    /* UI */
    public List<GameObject> buttons;

    List<Vector3> b = new List<Vector3>();  // store position information of 9 buttons
    int b_num = -1; // what button which user is interacting with, uf there's no interaction wih any button, then the value becomes -1

    List<Renderer> sr = new List<Renderer>();   // for highlighting each button
    /* UI end */

    /* data for transfer through UDP communcation */
    public double data = 1.0;    // for communication with Arduino
    int minusNum = 0;   // for minimizing the delay of UDP communication wih desktop (too much data transfer occurs panic of communication)
    /* data for transfer through UDP communcation end */

    /* for calculating depth data of index finger */
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
    /* for calculating depth data of index finger end */

    /* for UDP communication */
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
    /* for UDP communication end */

    // for interaction design

    // mode #1
    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;
    int num_0 = 0;

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
    List<String> keyword = new List<string>();


    void Start()
    {
        for (int i = 0; i< 9; i++)
        {
            sr.Add(buttons[i].GetComponent<Renderer>());
            sr[i].material.color = Color.green;
            b.Add(buttons[i].transform.position);
        }
        instruction.enabled = false;

        /* 99 trials for each experiment */
        for (int i = 1; i <= 33; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                operations.Add(i);
            }
        }

        /* 3 keywords */
        keyword.Add("연필");
        keyword.Add("지우개");
        keyword.Add("볼펜");

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

        for (int i = 0; i < 9; i++)
        {
            DepthData(b[i]);
            if (data != -1)
            {
                b_num = i + 1;
                break;
            }
        }
        if (b_num != -1) Debug.Log("b_num is ... " + b_num + "& b size is  ... " + b.Count);    // for checking whether intended button was recognized or not

        past_point_1 = point_1.z;
        past_point_2 = point_2.z;
        past_point_3 = point_3.z;
        Scenario_1();

        if (Input.inputString != null)
        {
            ChangeMode(Input.inputString);
        }

#if UNITY_EDITOR
        // for UDP
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
#endif
    }

    private void VisualizeHand()
    {
        for (int i = 0; i < 9; i++)
        {
            b[i] = buttons[i].transform.position;
        }

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

        point_1 = 0.5f * (indextip + indexdistal);
        //point_2 = 0.5f * (indexdistal + indexmiddle);
        point_3 = 0.5f * (indexmiddle + indexknuckle); 

    }

    private void DepthData(Vector3 b)
    {


        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)    // valid posture
        {
            if (point_1.z >= b.z && (point_1.x >= b.x - 0.025 && point_1.x <= b.x + 0.025 && point_1.y >= b.y - 0.025 && point_1.y <= b.y + 0.025)) // 손끝 들어옴
            {
                tot_len = indextip.z - indexknuckle.z;
                data = 2 - ((point_1.z - b.z + 0.05) * Mathf.Pow(tot_len, -1)) * 2;

                if (point_3.z >= b.z && (point_3.x >= b.x - 0.025 && point_3.x <= b.x + 0.025 && point_3.y >= b.y - 0.025 && point_3.y <= b.y + 0.025)) // 셋째 마디 들어옴
                {
                    data = 2 - ((point_3.z - b.z + 0.05) * Mathf.Pow(tot_len, -1)) * 2;
                    if (indexknuckle.z >= b.z && (point_1.x >= b.x - 0.025 && point_1.x <= b.x + 0.025 && point_1.y >= b.y - 0.025 && point_1.y <= b.y + 0.025))
                    {
                        data = -1;
                        b_num = -1;
                    }
                }
            }
            else
            {
                data = -1;
                b_num = -1;
            }
        }
        else
        {
            data = -1;
            b_num = -1;
        }
    }

    private void Scenario_1()
    {
        if (b_num == -1) return;
        Vector3 btn = b[b_num - 1];

        if (indextip.z > indexdistal.z && indexdistal.z > indexmiddle.z && indexmiddle.z > indexknuckle.z)
        {
            if (point_1.x >= btn.x - 0.025 && point_1.x <= btn.x + 0.025 && point_1.y >= btn.y - 0.025 && point_1.y <= btn.y + 0.025)
            {
                if (point_3.z >= btn.z && point_3.z <= btn.z + 0.02)   // action state
                {
                    // button select!!
                    State_Action();
                    Debug.Log("action");
                }

                if (point_1.z >= btn.z && point_1.z <= btn.z + 0.02)   // preview state
                {
                    // tooltip visibility enabled
                    State_Preview();
                    Debug.Log("preview");
                }
            }
        }
    }
    private void State_Preview()
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

    private void State_Action()
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
        if (m.Equals("7")) // start
        {
            if (start.Equals(1))
            {
                instruction.enabled = true;
                instruction.SetText("Please press reset button.");
            }
            else
            {
                instruction.enabled = true;
                instruction.SetText("Start!");

                GetTime();
                exp_log = experiment_t.ToString() + ",0,1,select,0,0,1";
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
            exp_log = experiment_t.ToString() + ",0,0,reset," + try_num.ToString() + ",0," + user_choice.ToString();
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
            //random_delay = (float) UnityEngine.Random.Range(4, 7);
            yield return new WaitForSeconds((float) 3);
            WaitNextInstruction = 0;
            instruction.enabled = true;
            //instruction.SetText("Mode " + mode + ": Do Operation " + operations[i]);

            instruction.SetText(keyword[operations[i] - 1]);
            
            instruction.color = Color.white;

            GetTime();
            exp_log = experiment_t.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",start,0,0,0";
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
                    instruction.color = Color.magenta;
                    try_num += 1;
                    GetTime();
                    exp_log = experiment_t.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",doing," + try_num.ToString() + ",0," + user_choice.ToString();
                    //Debug.Log(exp_log);
#if !UNITY_EDITOR
                    SendInformation(exp_log);
#endif

                    yield return new WaitForSeconds(0.5f);
                    OneClick = false;
                    instruction.color = Color.white;

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
                exp_log = experiment_t.ToString() + "," + (i + 1).ToString() + "," + operations[i].ToString() + ",end," + try_num.ToString() + ",1," + user_choice.ToString();
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
            instruction.SetText("Finish !!");
        
            //Debug.Log("Please change mode!");

            GetTime();
            exp_log = experiment_t.ToString() + "," + operations.Count.ToString() + "," + operations[operations.Count - 1].ToString() + ",finish," + try_num.ToString() + ",1," + user_choice.ToString();
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
        var span = (now - new DateTime(2021, 11, 22, 0, 0, 0, 0).ToLocalTime());    // timespan을 위한 new DateTime을 최대한 가까운 시간으로 수정하지 않으면 -값이 나옴!! 주의하자 이 부분 (in 범위 벗어나서 overflow)
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
