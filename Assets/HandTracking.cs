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


//using Windows.Networking.Sockets;

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

    public double data = 1.0;    // for communication with Arduino

    private float tot_len = 1.0f;

    public static Vector3 indextip;
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

    public Dropdown Select;
    public GameObject sphere;
    Renderer C;
    Boolean IsOpened = false;
    private int whatItem = -1;   // -1:parent, 0:None, 1:R, 2:G, 3:B
    public Toggle item;

    public float timer_1 = 0;
    public float timer_2 = 0;
    public float timer_3 = 0;
    public float timer_stop = 0;
    Boolean stop = false;

    public TMP_Text CLK;
    TMP_Text click;

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

        click = Instantiate(CLK, this.transform);
        C = sphere.GetComponent<Renderer>();

#if UNITY_EDITOR
        formatter = new BinaryFormatter();
        Task.Factory.StartNew(ListenBackground);
#endif
    }


    void Update()
    {
        VisualizeHand();

        DepthData();

        // for interaction design
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
    }

    private void DepthData()
    {
        point_1 = 0.5f * (indexObject1.transform.position + indexObject2.transform.position);
        point_2 = 0.5f * (indexObject2.transform.position + indexObject3.transform.position);
        point_3 = 0.5f * (indexObject3.transform.position + indexObject4.transform.position);

        if (indexObject1.transform.position.z > indexObject2.transform.position.z && indexObject2.transform.position.z > indexObject3.transform.position.z && indexObject3.transform.position.z > indexObject4.transform.position.z)    // valid posture
        {
            if (indexObject1.transform.position.z >= cube.z - 0.1 && (indexObject1.transform.position.x >= 0.1 && indexObject1.transform.position.x <= 0.3 && indexObject1.transform.position.y >= -0.1 && indexObject1.transform.position.y <= 0.1)) // 손끝 들어옴
            {
                data = 2;
                tot_len = indexObject1.transform.position.z - indexObject4.transform.position.z;
                if (point_1.z >= cube.z - 0.1 && (point_1.x >= 0.1 && point_1.x <= 0.3 && point_1.y >= -0.1 && point_1.y <= 0.1)) // 첫째 마디 들어옴
                {
                    data = 2 - ((indexObject1.transform.position.z - point_1.z) * Mathf.Pow(tot_len, -1)) * 2;  // max_data = 2

                    if (point_2.z >= cube.z - 0.1 && (point_2.x >= 0.1 && point_2.x <= 0.3 && point_2.y >= -0.1 && point_2.y <= 0.1)) // 둘째 마디 들어옴
                    {
                        data = 2 - ((indexObject1.transform.position.z - point_2.z) * Mathf.Pow(tot_len, -1)) * 2;

                        if (point_3.z >= cube.z - 0.1 && (point_3.x >= 0.1 && point_3.x <= 0.3 && point_3.y >= -0.1 && point_3.y <= 0.1)) // 셋째 마디 들어옴
                        {
                            data = 2 - ((indexObject1.transform.position.z - point_3.z) * Mathf.Pow(tot_len, -1)) * 2;
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
    }

    private void ID_1()
    {
        // Recognizing Click Operation
        if (stop.Equals(false))
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
                            StartCoroutine("RightClick");
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
                            DoubleClick();

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
                            OneClick();
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
            }
        }
    }

    private void ID_2()
    {
        if (stop.Equals(false))
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
                            StartCoroutine("RightClick");
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
                            DoubleClick();
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
                            OneClick();
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
            }
            PIcube.transform.position = new Vector3(0.2f, 0, 0.7f);
        }
    }

    private void ID_3()
    {
        if (stop.Equals(false))
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
                            StartCoroutine("RightClick");
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
                            OneClick();
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
                                DoubleClick();
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
                            DoubleClick();
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
                            StartCoroutine("RightClick");
                            stop = true;
                            timer_3 = 0;
                            pos_2 = -100;
                        }

                        if (point_2.z >= 0.6 && point_2.z <= 0.62 && past_point_2 >= 0.6 && past_point_2 <= 0.62)
                        {
                            timer_1 += Time.deltaTime;

                            if (timer_1 >= 1f && timer_3.Equals(0))
                            {
                                OneClick();
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
            }
        }
    }

    private void OneClick()
    {
        /*if (IsOpened.Equals(true))
        {*/
            //click.text = "One Click!";

            if (whatItem.Equals(-1))
            {
                whatItem += 1;
            }
            whatItem = (whatItem + 1) % 4;
        if (whatItem.Equals(0))
        {
            whatItem += 1;
        }

            Select.value = whatItem;
           // Select.Select();
            /*for (int i = 0; i < Select.options.Count; i++)
            {
                if (i.Equals(whatItem))
                {
                    
                    var texture = new Texture2D(1, 1); // creating texture with 1 pixel
                    texture.SetPixel(0, 0, Color.gray); // setting to this pixel some color
                    texture.Apply(); //applying texture. necessarily

                    Select.options[i].sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0, 0));

                    Debug.Log(i);
                    Select.Select();
                }
                else
                {
                    var texture = new Texture2D(1, 1); // creating texture with 1 pixel
                    texture.SetPixel(0, 0, Color.white); // setting to this pixel some color
                    texture.Apply(); //applying texture. necessarily

                    Select.options[i].image = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0, 0));
                }
            }*/
            //Select.RefreshShownValue();
        //}
    }

    private void DoubleClick()
    {
        //click.text = "Double Click!";

        /*if (!IsOpened && whatItem.Equals(-1))
        {
            IsOpened = true;
            Select.Show();
        }
        else if (IsOpened && whatItem.Equals(-1))
        {
            IsOpened = false;
            Select.Hide();
        }
        else
        {
            Select.value = whatItem;*/
            //whatItem = -1;
            if (Select.value.Equals(1))
            {
                C.material.color = Color.red;
            }
            else if (Select.value.Equals(2))
            {
                C.material.color = Color.green;
            }
            else if (Select.value.Equals(3))
            {
                C.material.color = Color.blue;
            }
            else
            {
                C.material.color = Color.white;
            }
        //}
    }

    IEnumerator RightClick()
    {
        click.text = "Enter mode (1~4)";
        
        while (Input.inputString.Equals(""))
        {
            yield return new WaitForSeconds(0.02f);
        }
        switch (Input.inputString)
        {
            case "1":
                mode = 1;
                click.text = "mode 1";
                Select.Hide();
                Select.value = 0;
                whatItem = -1;
                IsOpened = false;
                C.material.color = Color.white;
                break;

            case "2":
                click.text = "mode 2";
                mode = 2;
                Select.Hide();
                Select.value = 0;
                whatItem = -1;
                IsOpened = false;
                C.material.color = Color.white;
                break;

            case "3":
                click.text = "mode 3";
                mode = 3;
                Select.Hide();
                Select.value = 0;
                whatItem = -1;
                IsOpened = false;
                C.material.color = Color.white;
                break;
            case "4":
                click.text = "mode 4";
                mode = 4;
                Select.Hide();
                Select.value = 0;
                whatItem = -1;
                IsOpened = false;
                C.material.color = Color.white;
                break;
        }
        Debug.Log(Input.inputString);
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
