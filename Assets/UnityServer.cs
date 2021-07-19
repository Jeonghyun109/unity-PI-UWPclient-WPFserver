using System;
using System.Net;
using System.Net.Sockets;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Threading.Tasks;
using UnityEngine;

public class UnityServer : MonoBehaviour
{
	public double data = 1.0;

	private string serverIP;
	private int serverPort = 5050;

	private TcpClient client;
	private NetworkStream stream;

	IFormatter formatter;

	// Start is called before the first frame update
	void Start()
	{
		formatter = new BinaryFormatter();
		Task.Factory.StartNew(ListenBackground);
	}

	void Update()
	{
		if (stream != null && stream.CanWrite)
		{
			formatter.Serialize(stream, data);
		}
	}

	private void ListenBackground()
	{
		Debug.Log("Starting TCP server..\n");

		serverIP = GetLocalIPAddress();
		Debug.Log("IP: " + serverIP);
		Debug.Log("Port: " + serverPort + "\n");

		TcpListener listener = new TcpListener(IPAddress.Parse(serverIP), serverPort);
		listener.Start();

		while (true)
		{
			client = listener.AcceptTcpClient();
			stream = client.GetStream();
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
}
