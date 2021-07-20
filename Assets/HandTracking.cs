using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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


//using Windows.Networking.Sockets;

public class HandTracking : MonoBehaviour
{

    public GameObject sphereMarker;
    public GameObject PIcube;
    //Renderer sr;
    public float timer_1 = 0;
    public float timer_2 = 0;
    public float timer_3 = 0;
    public float timer_stop = 0;
    Boolean stop = false;
    float d_click_t = 0.5f;
    Boolean IsOneClick = false;
    Boolean IsDoubleClick = false;
    Boolean Pressed = true;
    Boolean Depressed = false;
    double pos_2 = -100;   // for mode 4 deciding whether right-click or not

    public TMP_Text CLK;
    TMP_Text click;
    double past_point_1 = 0;
    double past_point_2 = 0;
    double past_point_3 = 0;

    GameObject indexObject1;
    GameObject indexObject2;
    GameObject indexObject3;
    GameObject indexObject4;
    public static Vector3 cube;

    MixedRealityPose pose;

    // for communication with Arduino
    public double data = 1.0;

    private double tot_len = 1.0;

    public static Vector3 indextip;
    public static Vector3 point_1;
    public static Vector3 point_2;
    public static Vector3 point_3;

    // for various interaction design
    int mode = 1;   // 1:ID_1(depth에 따라), 2:ID_2(depth에 맞춰 큐브 뒤로 이동), 3:ID_3(직관적 디자인), 4:ID_4(z방향 + x방향)

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

    // Start is called before the first frame update
    void Start()
    {
        indexObject1 = Instantiate(sphereMarker, this.transform);   // for IndexTip
        indexObject2 = Instantiate(sphereMarker, this.transform);   // for IndextDistalJoint
        indexObject3 = Instantiate(sphereMarker, this.transform);   // for IndexMiddleJoint
        indexObject4 = Instantiate(sphereMarker, this.transform);   // for IndexKnuckle

        click = Instantiate(CLK, this.transform);

#if UNITY_EDITOR
        formatter = new BinaryFormatter();
        Task.Factory.StartNew(ListenBackground);
#endif
    }
    // Update is called once per frame
    void Update()
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
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexMiddleJoint, Handedness.Right, out pose))
        {
            indexObject3.GetComponent<Renderer>().enabled = true;
            indexObject3.transform.position = pose.Position;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexKnuckle, Handedness.Right, out pose))
        {
            indexObject4.GetComponent<Renderer>().enabled = true;
            indexObject4.transform.position = pose.Position;
        }

        point_1 = (indexObject1.transform.position + indexObject2.transform.position) / 2;
        point_2 = (indexObject2.transform.position + indexObject3.transform.position) / 2;
        point_3 = (indexObject3.transform.position + indexObject4.transform.position) / 2;

        // Calculating Depth data
        if (indexObject1.transform.position.z > indexObject2.transform.position.z && indexObject2.transform.position.z > indexObject3.transform.position.z && indexObject3.transform.position.z > indexObject4.transform.position.z)    // valid posture
        {
            if (indexObject1.transform.position.z >= cube.z - 0.1 && (indexObject1.transform.position.x >= 0.1 && indexObject1.transform.position.x <= 0.3 && indexObject1.transform.position.y >= -0.1 && indexObject1.transform.position.y <= 0.1)) // 손끝 들어옴
            {
                data = 2;
                tot_len = indexObject1.transform.position.z - indexObject4.transform.position.z;
                if (point_1.z >= cube.z - 0.1 && (point_1.x >= 0.1 && point_1.x <= 0.3 && point_1.y >= -0.1 && point_1.y <= 0.1)) // 첫째 마디 들어옴
                {
                    data = 2 - ((indexObject1.transform.position.z - point_1.z) / tot_len) * 2;  // max_data = 2

                    if (point_2.z >= cube.z - 0.1 && (point_2.x >= 0.1 && point_2.x <= 0.3 && point_2.y >= -0.1 && point_2.y <= 0.1)) // 둘째 마디 들어옴
                    {
                        data = 2 - ((indexObject1.transform.position.z - point_2.z) / tot_len) * 2;

                        if (point_3.z >= cube.z - 0.1 && (point_3.x >= 0.1 && point_3.x <= 0.3 && point_3.y >= -0.1 && point_3.y <= 0.1)) // 셋째 마디 들어옴
                        {
                            data = 2 - ((indexObject1.transform.position.z - point_3.z) / tot_len) * 2;
                        }

                        if (indexObject4.transform.position.z >= cube.z - 0.1 && (indexObject4.transform.position.x >= 0.1 && indexObject4.transform.position.x <= 0.3 && indexObject4.transform.position.y >= -0.1 && indexObject4.transform.position.y <= 0.1))
                        {
                            data = 0;
                        }
                    }
                }
            }
            else
            {
                data = -1;
            }
        }
        else
        {
            data = -1;
        }


        // for interaction design
        if (mode == 1)  // ID_1
        {
            // Recognizing Click Operation
            if (stop == false)
            {
                if (indexObject1.transform.position.z > indexObject2.transform.position.z && indexObject2.transform.position.z > indexObject3.transform.position.z && indexObject3.transform.position.z > indexObject4.transform.position.z)
                {
                    if (indexObject1.transform.position.z >= cube.z - 0.1 && (indexObject1.transform.position.x >= 0.1 && indexObject1.transform.position.x <= 0.3 && indexObject1.transform.position.y >= -0.1 && indexObject1.transform.position.y <= 0.1))
                    {
                        if (point_3.z >= 0.6 && point_3.z <= 0.62 && past_point_3 >= 0.6 && past_point_3 <= 0.62)
                        {
                            timer_3 += Time.deltaTime;
                            if (timer_3 >= 1f)
                            {
                                click.text = "Right Click!";
                                stop = true;
                                timer_3 = 0;
                            }
                        }
                        else
                        {
                            timer_3 = 0;
                        }

                        if (point_2.z >= 0.6 && point_2.z <= 0.62 && past_point_2 >= 0.6 && past_point_2 <= 0.62)
                        {
                            timer_2 += Time.deltaTime;
                            if (timer_2 >= 1f)
                            {
                                click.text = "Double Click!";
                                stop = true;
                                timer_2 = 0;
                            }
                        }
                        else
                        {
                            timer_2 = 0;
                        }

                        if (point_1.z >= 0.6 && point_1.z <= 0.62 && past_point_1 >= 0.6 && past_point_1 <= 0.62)
                        {
                            timer_1 += Time.deltaTime;
                            if (timer_1 >= 1f)
                            {
                                click.text = "One Click!";
                                stop = true;
                                timer_1 = 0;
                            }
                        }
                        else
                        {
                            timer_1 = 0;
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
                    click.text = "CLK";
                }
            }

        }
        else if (mode == 2) // ID_2
        {
            if (stop == false)
            {
                if (indexObject1.transform.position.z > indexObject2.transform.position.z && indexObject2.transform.position.z > indexObject3.transform.position.z && indexObject3.transform.position.z > indexObject4.transform.position.z)
                {
                    if (indexObject1.transform.position.z >= cube.z - 0.1 && (indexObject1.transform.position.x >= 0.1 && indexObject1.transform.position.x <= 0.3 && indexObject1.transform.position.y >= -0.1 && indexObject1.transform.position.y <= 0.1))
                    {
                        if (point_3.z >= cube.z - 0.1 && point_3.z <= cube.z - 0.08 && past_point_3 >= cube.z - 0.1 && past_point_3 <= cube.z - 0.08)
                        {
                            PIcube.transform.position = new Vector3(0.2f, 0, (float)PIcube.transform.position.z + 0.00002f);
                            timer_3 += Time.deltaTime;
                            if (timer_3 >= 1f)
                            {
                                click.text = "Right Click!";
                                stop = true;
                                timer_3 = 0;
                            }
                        }
                        else
                        {
                            timer_3 = 0;
                        }

                        if (point_2.z >= cube.z - 0.1 && point_2.z <= cube.z - 0.08 && past_point_2 >= cube.z - 0.1 && past_point_2 <= cube.z - 0.08)
                        {
                            PIcube.transform.position = new Vector3(0.2f, 0, (float)PIcube.transform.position.z + 0.00002f);
                            timer_2 += Time.deltaTime;
                            if (timer_2 >= 1f)
                            {
                                click.text = "Double Click!";
                                stop = true;
                                timer_2 = 0;
                            }
                        }
                        else
                        {
                            timer_2 = 0;
                        }

                        if (point_1.z >= cube.z - 0.1 && point_1.z <= cube.z - 0.08 && past_point_1 >= cube.z - 0.1 && past_point_1 <= cube.z - 0.08)
                        {
                            PIcube.transform.position = new Vector3(0.2f, 0, (float)PIcube.transform.position.z + 0.00002f);
                            timer_1 += Time.deltaTime;
                            if (timer_1 >= 1f)
                            {
                                click.text = "One Click!";
                                stop = true;
                                timer_1 = 0;
                            }
                        }
                        else
                        {
                            timer_1 = 0;
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
                    click.text = "CLK";
                }
                PIcube.transform.position = new Vector3(0.2f, 0, 0.7f);
            }
        }
        else if (mode == 3) // ID_3
        {
            if (stop == false)
            {
                // implement ID_3
                if (indexObject1.transform.position.z > indexObject2.transform.position.z && indexObject2.transform.position.z > indexObject3.transform.position.z && indexObject3.transform.position.z > indexObject4.transform.position.z)
                {
                    if (indexObject1.transform.position.z >= cube.z - 0.1 && (indexObject1.transform.position.x >= 0.1 && indexObject1.transform.position.x <= 0.3 && indexObject1.transform.position.y >= -0.1 && indexObject1.transform.position.y <= 0.1))
                    {
                        if (point_2.z >= 0.6 && past_point_2 >= 0.6)
                        {
                            Pressed = true;
                            Depressed = false;
                            timer_3 += Time.deltaTime;

                            if (timer_3 >= 1.5f)
                            {
                                click.text = "Right Click!";
                                stop = true;
                                timer_3 = 0;
                                Pressed = false;
                            }
                        }
                        else
                        {
                            Pressed = false;
                            if (IsOneClick && ((Time.time - timer_2) > d_click_t) && Depressed == true)
                            {
                                click.text = "One Click!";
                                IsOneClick = false;
                                Pressed = true;
                                stop = true;
                                timer_2 = 0;
                            }

                            if (point_2.z >= 0.6 && Pressed == false)
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
                                    click.text = "Double Click!";
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
                    click.text = "CLK";
                    Pressed = true;
                    Depressed = true;
                    IsOneClick = false;
                }
            }
        }
        else // mode == 4, ID_4
        {
            if (stop == false)
            {
                // implement ID_4
                if (indexObject1.transform.position.z > indexObject2.transform.position.z && indexObject2.transform.position.z > indexObject3.transform.position.z && indexObject3.transform.position.z > indexObject4.transform.position.z)
                {
                    if (indexObject1.transform.position.z >= cube.z - 0.1 && (indexObject1.transform.position.x >= 0.1 && indexObject1.transform.position.x <= 0.3 && indexObject1.transform.position.y >= -0.1 && indexObject1.transform.position.y <= 0.1))
                    {
                        if (point_3.z >= 0.6 && point_3.z <= 0.62 && past_point_3 >= 0.6 && past_point_3 <= 0.62)
                        {
                            timer_2 += Time.deltaTime;
                            if (timer_2 >= 1f)
                            {
                                click.text = "Double Click!";
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
                            if (pos_2 == -100)
                            {
                                pos_2 = point_2.x;
                            }
                            if (timer_3 >= 1f && (point_2.x - pos_2) >= 0.1)
                            {
                                click.text = "Right Click!";
                                stop = true;
                                timer_3 = 0;
                                pos_2 = -100;
                            }

                            if (point_2.z >= 0.6 && point_2.z <= 0.62 && past_point_2 >= 0.6 && past_point_2 <= 0.62)
                            {
                                timer_1 += Time.deltaTime;

                                if (timer_1 >= 1f && timer_3 == 0)
                                {
                                    click.text = "One Click!";
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
                    timer_stop = 0;
                    click.text = "CLK";
                }
            }
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
