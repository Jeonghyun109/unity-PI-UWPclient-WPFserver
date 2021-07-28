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
    public GameObject sphereMarker;
    GameObject indexObject1;
    GameObject indexObject2;
    GameObject indexObject3;
    GameObject indexObject4;
    MixedRealityPose pose;

    // for DepthData
    public GameObject PIcube;
    public static Vector3 cube;
    Renderer sr;

    public double data = 1.0;    // for communication with Arduino

    private float tot_len = 1.0f;

    public static Vector3 indextip;
    Vector3 indexdistal;
    Vector3 indexmiddle;
    Vector3 indexknuckle;
    public static Vector3 point_1;
    public static Vector3 point_2;
    public static Vector3 point_3;

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
    private Windows.Networking.Sockets.StreamSocket socket;
    private StreamSocketListener listener;
#endif

    // for interaction design

    int mode = 1;   // 1:ID_1(depth에 따라), 2:ID_2(depth에 맞춰 큐브 뒤로 이동), 3:ID_3(직관적 디자인), 4:ID_4(z방향 + x방향)

    public GameObject sphere_1;
    public GameObject sphere_2;
    public GameObject sphere_3;
    Renderer C_1;
    Renderer C_2;
    Renderer C_3;

    double peak_tip = 0.6;
    int peak_z = 0; // 0: out of range, 1: operation_1, 2: operation_2, 3: operation_3

    public float timer_1 = 0;
    public float timer_2 = 0;
    public float timer_3 = 0;
    public float timer_stop = 0;
    Boolean stop = false;

    // mode #3
    float d_click_t = 0.5f;
    Boolean IsOneClick = false;
    Boolean IsDoubleClick = false;
    Boolean Pressed = true;
    Boolean Depressed = false;

    // mode #4
    double pos_2 = -100;   // for mode 4 deciding whether right-click or not


    void Start()
    {
        indexObject1 = Instantiate(sphereMarker, this.transform);   // for IndexTip
        indexObject2 = Instantiate(sphereMarker, this.transform);   // for IndextDistalJoint
        indexObject3 = Instantiate(sphereMarker, this.transform);   // for IndexMiddleJoint
        indexObject4 = Instantiate(sphereMarker, this.transform);   // for IndexKnuckle

        sr = PIcube.GetComponent<Renderer>();
        sr.material.color = Color.white;

        C_1 = sphere_1.GetComponent<Renderer>();
        C_2 = sphere_2.GetComponent<Renderer>();
        C_3 = sphere_3.GetComponent<Renderer>();
        C_1.material.color = Color.white;
        C_2.material.color = Color.white;
        C_3.material.color = Color.white;

#if UNITY_EDITOR
        formatter = new BinaryFormatter();
        Task.Factory.StartNew(ListenBackground);
#endif
    }


    void Update()
    {
        VisualizeHand();

        DepthData();

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
            ID_3();
        }
        else
        {
            ID_4();
        }

        // update past_points to rememeber the present z postision values of 3 points
        past_point_1 = point_1.z;
        past_point_2 = point_2.z;
        past_point_3 = point_3.z;

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
            SendDepth();    // for TCP connection
            past_data = data;
        }
#endif
    }

    private void VisualizeHand()
    {
        indexObject1.GetComponent<Renderer>().enabled = false;
        indexObject2.GetComponent<Renderer>().enabled = false;
        indexObject3.GetComponent<Renderer>().enabled = false;
        indexObject4.GetComponent<Renderer>().enabled = false;
        cube = PIcube.transform.position;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            indexObject1.GetComponent<Renderer>().enabled = true;
            indexObject1.transform.position = pose.Position;
            indextip = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexDistalJoint, Handedness.Right, out pose))
        {
            indexObject2.GetComponent<Renderer>().enabled = true;
            indexObject2.transform.position = pose.Position;
            indexdistal = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexMiddleJoint, Handedness.Right, out pose))
        {
            indexObject3.GetComponent<Renderer>().enabled = true;
            indexObject3.transform.position = pose.Position;
            indexmiddle = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexKnuckle, Handedness.Right, out pose))
        {
            indexObject4.GetComponent<Renderer>().enabled = true;
            indexObject4.transform.position = pose.Position;
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

                if (peak_tip != 0.6 && indextip.z < 0.6 && peak_z != 0)
                {
                    Debug.Log(peak_z);
                    switch (peak_z)
                    {
                        case 1:
                            Operate_1 ();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 2:
                            Operate_2 ();
                            peak_tip = 0.6;
                            peak_z = 0;
                            break;
                        case 3:
                            Operate_3 ();
                            peak_tip = 0.6;
                            peak_z = 0;
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
                    PIcube.transform.position = new Vector3(0.2f, 0, (float) PIcube.transform.position.z + 0.00002f);    // Cube is moving backward
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

                if (peak_tip != 0.6 && indextip.z < 0.6 && peak_z != 0)
                {
                    Debug.Log(peak_z);

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
                if (indextip.z >= cube.z - 0.1 && (indextip.x >= 0.1 && indextip.x <= 0.3 && indextip.y >= -0.1 && indextip.y <= 0.1))
                {
                    if (point_2.z >= 0.6 && past_point_2 >= 0.6)
                    {
                        Pressed = true;
                        Depressed = false;
                        timer_3 += Time.deltaTime;

                        if (timer_3 >= 1.5f)
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
            timer_stop += Time.deltaTime;

            if (timer_stop >= 0.5f)
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

    private void Operate_1 ()
    {
        C_1.material.color = Color.green;
        C_2.material.color = Color.white;
        C_3.material.color = Color.white;
    }

    private void Operate_2 ()
    {
        C_2.material.color = Color.green;
        C_1.material.color = Color.white;
        C_3.material.color = Color.white;
    }

    private void Operate_3 ()
    {
        C_3.material.color = Color.green;
        C_1.material.color = Color.white;
        C_2.material.color = Color.white;
    }

    public void ChangeMode (int m)
    {
        Debug.Log("mode " + m);
        mode = m;
        C_1.material.color = Color.white;
        C_2.material.color = Color.white;
        C_3.material.color = Color.white;
    }

#if !UNITY_EDITOR
    private async void SendDepth()
    {
        try
        {
            // Create the StreamSocket and establish a connection to the echo server.
            using (var streamSocket = new Windows.Networking.Sockets.StreamSocket())
            {
                // The server hostname that we will be establishing a connection to. In this example, the server and client are in the same process.
                var hostName = new Windows.Networking.HostName("10.0.1.7"); // Server 위치 바뀔 때마다 매번 ip address를 바꿔야 하나?

                await streamSocket.ConnectAsync(hostName, "50000");

                //Debug.Log(data);
                string request = data.ToString();
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
