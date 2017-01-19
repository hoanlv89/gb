using UnityEngine;
using System.Collections;
using System.Net.Sockets;
using System.Threading;
using Styx;
using com.cubeia.firebase.io.protocol;
using StyxTest;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;
using SimpleJSON;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;
using System.Text;
using Facebook.Unity;

public class CubeiaClient
{
	// const stuff
	public static string HOST = "203.162.166.104";
	//  public static string HOST = "203.162.166.19";
	//	public static string HOST = "10.79.151.115";
	public readonly int PORT = 4123;
	public readonly string accesstoken = "123456";
	public readonly int levelId = 0;

	// logic variable stuff
	public string connectedIP;
	public int gameId;
	public int tableId;
	public RoomGame currentRoom;
	public RoomGame[] roomList;
	public List<TableGame> tableList;

	// network stuff
	public Socket socket;
	private ManualResetEvent connected;
	private StyxSerializer serializer;
	private volatile Queue<ProtocolObject> protocalObjectQueue;
	private volatile bool pauseReceiving;
	private volatile bool onConnecting;
	
	public CubeiaClient ()
	{
		connected = new ManualResetEvent (false);
		protocalObjectQueue = new Queue<ProtocolObject> ();
		socket = new Socket (AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		serializer = new StyxSerializer (new ProtocolObjectFactory ());
		pauseReceiving = false;
		onConnecting = false;
 
		// initialize network stuff
		gameId = GameType.TALA;
		tableList = new List<TableGame> ();

	}

	public bool isConnected(){
		return socket.Connected;
	}

	public bool isOnConnecting(){
		return onConnecting;
	}

	public void processEvents ()
	{
		// TODO: should be implement synchronize the protocalObjectQueue
		try{
			if (protocalObjectQueue.Any () && !pauseReceiving) {
				ProtocolObject protocolObject = protocalObjectQueue.Dequeue ();
				handlePacket (protocolObject);
			}
		} catch(System.InvalidOperationException e) {
			Debug.Log("******************************************");
			Debug.Log("catched System.InvalidOperationException in processEvents");

		}
	}

	public void ignoreAllEvents ()
	{
		protocalObjectQueue.Clear();
	}

	public void lockProcessing ()
	{
		Debug.Log ("lockProcessing");
		pauseReceiving = true;
	}

	public void unLockProcessing ()
	{
		Debug.Log ("unLockProcessing");
		pauseReceiving = false;
	}

	public void login (LoginInfo loginInfo, bool reg = false)
	{
		SThread loginThread = new SThread (delegate {
			// Do your threaded task. DON'T use the Unity API here
			onConnecting = true;
			Thread.Sleep(1000);

			if (!socket.Connected) {
				LogoutPacket logoutPacket = new LogoutPacket();
				sendPacket(logoutPacket);
//				socket.Disconnect(reuseSocket:false);
				connected.Reset ();

//				if(Tester.intestEv){
				// 203.162.166.23
				// 203.162.166.14
				// 203.162.166.33
				// 203.162.166.46
				// 203.162.166.76
				// 203.162.166.104
				// 203.162.121.174
				// thai: 203.150.82.49
//				if(GameApplication.DEBUG_ON){
					string IP = loginInfo.host;
					if(IPCHOSEN.IP != null)
						IP = IPCHOSEN.IP;
//////
					socket.BeginConnect (IP, PORT, new System.AsyncCallback (onConnect), socket);
					connectedIP = IP;
					Debug.Log("login host: "+ connectedIP);
//				} else {
//					Debug.Log("login host: "+ loginInfo.host);
//					socket.BeginConnect (loginInfo.host, PORT, new System.AsyncCallback (onConnect), socket);
//					connectedIP = loginInfo.host;
//				}

				connected.WaitOne ();
				StyxPacketInfo packetInfo = new StyxPacketInfo ();
				packetInfo.socket = socket;
				socket.BeginReceive (packetInfo.headerBuffer, 0, StyxPacketInfo.HEADER_SIZE, 0, new System.AsyncCallback (Read_Callback), packetInfo);		
			}

			gameId = loginInfo.gameID;
//			gameId = GameType.G9K;

			LoginRequestPacket loginRequestPacket = new LoginRequestPacket ();
			var jsonUser = new JSONClass ();
			jsonUser ["Userid"].AsInt = 1;
			jsonUser ["Username"] = loginInfo.name;
//			jsonUser ["Username"] = "3";
			jsonUser ["From"] = "mbacay";

			int GID = gameId;
			if(IPCHOSEN.GAMEID != null)
				GID = Int32.Parse (IPCHOSEN.GAMEID);;
			Debug.Log("GID ==> "+ GID);
			jsonUser ["gameid"].AsInt = GID; // 8004 gameId
//			jsonUser ["gameid"].AsInt = 8011; // 8004
			jsonUser ["deviceId"] = GameApplication.getUniqueIdentifier();
//			jsonUser ["deviceId"] = "234567875432ssdsads";
			jsonUser ["Signid"] = "qazwsxedcrfv123$%^789";
			if(reg)	jsonUser ["Reg"].AsInt = 1;
			
			loginRequestPacket.user = jsonUser.ToString ();
			loginRequestPacket.password = loginInfo.password;
//			loginRequestPacket.password = "Thaygiaotre";
			int OPE = loginInfo.operatorID;
			if(IPCHOSEN.OPE != null)
				OPE = Int32.Parse (IPCHOSEN.OPE);;
			loginRequestPacket.operatorid = OPE;
//			loginRequestPacket.operatorid = 5200;
			sendPacket (loginRequestPacket);
		});

		loginThread.Start ();
	}

	public void sendPacket (ProtocolObject protocolObject)
	{
		
		Debug.Log ("---------> send: " + protocolObject.ToString ());
		byte[] buffer = serializer.pack (protocolObject);
		new SThread (delegate {
			try {
				if(socket!=null && socket.Connected) {
					socket.Send (buffer, 0, buffer.Length, SocketFlags.None);
				} else {
					Debug.Log ("socket not sent");
				}
			} catch (SocketException e) {
				Debug.LogException (e);
				SuperScene.instance.forcedReconnect ();
			}
		}).Start ();

		if (protocolObject is ServiceTransportPacket) {
			ServiceTransportPacket sp = (ServiceTransportPacket)protocolObject;
			string serviceData = System.Text.Encoding.UTF8.GetString (sp.servicedata);
			Debug.Log ("send: " + serviceData);
		}
		if (protocolObject is GameTransportPacket) {
			GameTransportPacket gp = (GameTransportPacket)protocolObject;
			string gameData = System.Text.Encoding.UTF8.GetString (gp.gamedata);
			Debug.Log ("send: " + gameData);
		}
		
	}
	
	private void onConnect (System.IAsyncResult ar)
	{
		connected.Set ();
		Socket s = (Socket)ar.AsyncState;
		s.EndConnect (ar);
	}

	public bool sendService (JSONClass ojbect)
	{
		try {
			ServiceTransportPacket servicePacket = new ServiceTransportPacket ();
			servicePacket.idtype = 1;
			servicePacket.pid = 11111;
			servicePacket.seq = 1;
			servicePacket.service = "com.athena.services.api.ServiceContract";
			servicePacket.servicedata = Utils.getBytesUTF8 (ojbect.ToString ());
			sendPacket (servicePacket);
			return true;
		} catch (Exception e) {
			Debug.LogException (e);
		}
		return false;
	}

	public void sendDataGame (JSONClass ojbect)
	{
		try {
			GameTransportPacket gameTransportPacket = new GameTransportPacket ();
			gameTransportPacket.pid = GameApplication.user.id;
			gameTransportPacket.tableid = tableId;
			byte[] gdata = Utils.getBytesUTF8 (ojbect.ToString ());
			gameTransportPacket.gamedata = gdata;
			sendPacket (gameTransportPacket);
		} catch (Exception e) {
			Debug.LogException (e);
		}
	}

	private void Read_Callback (System.IAsyncResult ar)
	{
		StyxPacketInfo packetInfo = (StyxPacketInfo)ar.AsyncState;
		Socket s = packetInfo.socket;
		
		int read = s.EndReceive (ar);
		
		if (read > 0) {
			if (packetInfo.state == StyxPacketInfo.STATE.header) {
				packetInfo.readHeader ();
				packetInfo.state = StyxPacketInfo.STATE.packet;
				s.BeginReceive (packetInfo.packetBuffer, StyxPacketInfo.HEADER_SIZE, packetInfo.packetLength - StyxPacketInfo.HEADER_SIZE, 0,
				               new System.AsyncCallback (Read_Callback), packetInfo);
			} else {
				packetInfo.bytesLeft -= read;
				if (packetInfo.bytesLeft == 0) {
					handlePacketBuffer (packetInfo.packetBuffer);
					StyxPacketInfo newPacketInfo = new StyxPacketInfo ();
					newPacketInfo.socket = s;
					s.BeginReceive (newPacketInfo.headerBuffer, 0, StyxPacketInfo.HEADER_SIZE, 0, new System.AsyncCallback (Read_Callback), newPacketInfo);
				} else {
					s.BeginReceive (packetInfo.packetBuffer, packetInfo.packetLength - packetInfo.bytesLeft, packetInfo.bytesLeft, 0, new AsyncCallback (Read_Callback), packetInfo);
				}
			}
		}		
	}
	
	private void handlePacketBuffer (byte[] buffer)
	{
		ProtocolObject protocolObject = serializer.unpack (buffer);
		protocalObjectQueue.Enqueue (protocolObject);
	}

	/// <summary>
	/// Process all packet from cubeia server.
	/// </summary>
	/// <param name="protocolObject">Protocol object.</param>
	
	private void handlePacket (ProtocolObject protocolObject)
	{
		Debug.Log ("<--------- receive: " + protocolObject.ToString ());
//		SuperScene.instance.dismissWaittingDialog ();

		switch (protocolObject.classId ()) {
		case LoginResponsePacket.CLASSID:		
			handleLoginResponsePacket ((LoginResponsePacket)protocolObject);
			break;
		case TableSnapshotListPacket.CLASSID:
			handleTableSnapshotListPacket ((TableSnapshotListPacket)protocolObject);
			break;
		case ServiceTransportPacket.CLASSID:
			ServiceTransportPacketProcessor.handleServiceTransportPacket ((ServiceTransportPacket)protocolObject);
			break;
		case GameTransportPacket.CLASSID:
			GameTransportPacketProcessor.handleGameTransportPacket ((GameTransportPacket)protocolObject);
			break;
		case JoinResponsePacket.CLASSID:
			handleJoinResponsePacket ((JoinResponsePacket)protocolObject);
			break;
		case LeaveResponsePacket.CLASSID:
			handleLeaveResponsePacket ((LeaveResponsePacket)protocolObject);
			break;
		case PingPacket.CLASSID:
			handlePingPacket ((PingPacket)protocolObject);
			break;
		case CreateTableResponsePacket.CLASSID:
			handleCreateTableResponsePacket ((CreateTableResponsePacket)protocolObject);
			break;
		case ForcedLogoutPacket.CLASSID:
			handleForcedLogoutPacket ((ForcedLogoutPacket)protocolObject);
			break;

		}
	}

	void handleForcedLogoutPacket (ForcedLogoutPacket forcedLogoutPacket)
	{
		SuperScene.instance.forcedReconnect(forcedLogoutPacket.message);
	}

	public void handleJoinResponsePacket (JoinResponsePacket joinResponsePacket)
	{
		if (joinResponsePacket.status == Enums.JoinResponseStatus.OK) {
			// go to the game scene
			if (Application.loadedLevelName.Equals (GameApplication.GAMESCENE) == false) {
				// lock o day rat quan trong. Ngan viec xu ly du lieu khi chua thuc hien Start() o GameScene
				// unlock o GameScene
				lockProcessing ();
				SuperScene.instance.dismissWaittingDialog ();
				if (SuperScene.instance is LobbyScene) {
					LobbyScene lobby = (LobbyScene)SuperScene.instance;
					lobby.newTableOption.dismiss ();
				}
				// bat dau luu lai log van moi
				GamesLogs.newLog();
				LevelManager.Load (GameApplication.GAMESCENE);
				DSTFBEvent.LogAppEvent(DSTFBEvent.UnityJoinTableSuccess, (float)1f, DSTFBEvent.defaultParams);
				Tracking.sendJoinTable(joinResponsePacket.tableid);
				Tracking.changeScene(GameApplication.GAMESCENE);
			}
		} else {
			SuperScene.instance.dismissWaittingDialog ();
			String msg = Strings.instance.error1;
			if (joinResponsePacket.code == -1) {
				msg = Strings.instance.error2;
				SuperScene.instance.showToast (msg);
			} else if (joinResponsePacket.code == -2) {
				msg = Strings.instance.error3;
				var json = new JSONClass ();
				json ["evt"] = "searchTRe";
				sendService (json);
				SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
			}
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityJoinTableFailed, (float)1f, DSTFBEvent.defaultParams);
		}
	}

	void handleLeaveResponsePacket (LeaveResponsePacket leaveResponsePacket)
	{
		if (leaveResponsePacket.status == Enums.ResponseStatus.OK) {
			if (SuperScene.instance is GameScene) {
				LeanTween.cancelAll(callComplete:false);
				Tracking.sendLeaveTable (GameApplication.user.ag, GameApplication.user.dm, GameApplication.game.stake);
				GameApplication.game.leaveTable ();
			}
		}
	}

	private void handlePingPacket (PingPacket pingPacket)
	{
		// reply pingPacket
		int id = pingPacket.id;
		sendPacket (new PingPacket (id));
	}

	private void handleTableSnapshotListPacket (TableSnapshotListPacket tableSnapshotListPacket)
	{
		unsubcribeRoom (currentRoom);
		tableList.Clear ();

		GameObject tableListObject = GameObject.Find ("TableList");
		if (tableListObject == null)
			return;


		Debug.Log ("Get " + tableSnapshotListPacket.snapshots.Count + " tables");
		foreach (TableSnapshotPacket tableSnapshotPacket in tableSnapshotListPacket.snapshots) {
			TableGame tableGame = new TableGame (tableSnapshotPacket);
			if (tableGame.capacity > 0 && (tableGame.mark >= 0 || GameApplication.DEBUG_ON)) {
				tableList.Add (tableGame);
			}
		}

		Comparison<TableGame> comparator = delegate(TableGame x, TableGame y) {
			if (x.disable && !y.disable) return 1;
			if (!x.disable && y.disable) return -1;
			if (x.mark == y.mark) return 0;

			if (GameApplication.user.vip == 0) {
				if (x.mark > y.mark) return 1;
				return -1;
			} else {
				if (x.mark > y.mark) return -1;
				return 1;
			}
		};

		tableList.Sort (comparator);

		// update to the view
		if (GameApplication.gameApp.Equals (GameApplication.GameApp.G3C)) {
			TableList table3C = (TableList)tableListObject.GetComponent (typeof(TableList));
			table3C.addTable (tableList);
		} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.DauTruong)) {
//			TableListDT tableDT = (TableListDT)tableListObject.GetComponent (typeof(TableListDT));
//			tableDT.addTable (tableList);
			ScreenList screen = (ScreenList)tableListObject.GetComponent (typeof(ScreenList));
			screen.revListTable(tableList);
		} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.G52Fun)) {
			ScreenList52 screen = (ScreenList52)tableListObject.GetComponent (typeof(ScreenList52));
			screen.revListTable(tableList);
		} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.GTL)) {
//			TableList table3C = (TableList)tableListObject.GetComponent (typeof(TableList));
//			table3C.addTable (tableList);
			ScreenListTL screen = (ScreenListTL)tableListObject.GetComponent (typeof(ScreenListTL));
			screen.revListTable(tableList);
		} else {
			TableListControl tableListControl = (TableListControl)tableListObject.GetComponent (typeof(TableListControl));
			tableListControl.updateListItem (tableList);
		}
	}
	
	private void handleLoginResponsePacket (LoginResponsePacket loginResponsePacket)
	{
		onConnecting = false;
		if (loginResponsePacket.status == Enums.ResponseStatus.OK &&
			loginResponsePacket.pid > 0) {
			// make a referrence to the CubeiaClient
			GameApplication.cubeia = this;
			GameApplication.user.id = loginResponsePacket.pid;
			if (!GameApplication.user.loginInfo.name.Equals ("1"))
				GameApplication.user.displayName = null;

			sendSelectGame ();
//			SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
//				sendSelectGame ();
//			});
		} else {
			if(FB.IsInitialized && FB.IsLoggedIn) FB.LogOut();
			SuperScene.instance.dismissWaittingDialog ();

			SDialog dialog = null;
			if(loginResponsePacket.message.Length > 0) {
				dialog = SuperScene.instance.showInfoDialog (loginResponsePacket.message);
			} else {
				int code = loginResponsePacket.code;

				if(code == -1)
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_login_error_1);
				else if(code == -2)
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_login_error_2);
				else if(code == -3)
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_login_error_3);
				else if(code == -4)
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_login_error_4);
				else if(code == -5)
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_login_error_5);
				else if(code == -6)
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_login_error_6);
				else
					dialog = SuperScene.instance.showInfoDialog (Strings.instance.common_sign_error);
			}

			dialog.onDismiss = delegate {
				if(SuperScene.instance is LoginScene){
					// do nothing
				} else {
					Application.LoadLevel (GameApplication.LOGINSCENE);
				}
			};
		}
	}

	void handleCreateTableResponsePacket (CreateTableResponsePacket createTableResponsePacket)
	{
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameCreatetableSuccess, (float)1f, DSTFBEvent.defaultParams);
		SuperScene.instance.dismissWaittingDialog ();
	}

	public void disconnect ()
	{
//		LogoutPacket logoutPacket = new LogoutPacket();
//		sendPacket(logoutPacket);
//		if (socket.Connected) 
//		{
//			socket.Shutdown(SocketShutdown.Both);
//		}
		if(GameApplication.DEBUG_ON)
			Debug.LogWarning("cubeia disconnect");
		if(socket.Connected)
			socket.Disconnect (reuseSocket: false);
	}


	///
	/// 
	/// 
	/// 
	
	public void sendUAG ()
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "uag";
		
		sendService (jsonData);
	}

	public void sendSelectGame ()
	{
		sendSelectGame(gameId);
	}

	public void sendSelectGame (int gid)
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "selectG";
		jsonData ["gameid"].AsInt = gid;
//		jsonData ["gameid"].AsInt = 8020;

		sendService (jsonData);
	}

	enum Polygon
	{
		Triangle = 3,
		Quadrilateral,
		Pentagon,
		Hexagon
	}

	
	public void sendCreateGame (int stake, int capacity, List<Param> adparams = null)
	{
		CreateTableRequestPacket createTableRequestPacket = new CreateTableRequestPacket ();
		createTableRequestPacket.gameid = gameId;
		createTableRequestPacket.seats = (byte)capacity;
		createTableRequestPacket.seq = 1;
		createTableRequestPacket.parameters.Clear ();
		
		createTableRequestPacket.parameters.Add (new Param ("gameId", (byte)Enums.ParameterType.INT, Utils.IntToByteArray (gameId)));
		createTableRequestPacket.parameters.Add (new Param ("Name", (byte)Enums.ParameterType.STRING, Utils.ObjectToByteArray ("nhao` zo^")));
		createTableRequestPacket.parameters.Add (new Param ("Mark", (byte)Enums.ParameterType.INT, Utils.IntToByteArray (stake)));
		createTableRequestPacket.parameters.Add (new Param ("AG", (byte)Enums.ParameterType.INT, Utils.IntToByteArray (10 * stake)));
		createTableRequestPacket.parameters.Add (new Param ("Vip", (byte)Enums.ParameterType.INT, Utils.IntToByteArray (0)));
		createTableRequestPacket.parameters.Add (new Param ("Player", (byte)Enums.ParameterType.INT, Utils.IntToByteArray (capacity)));

		if(adparams != null)
			foreach (Param param in adparams)
				createTableRequestPacket.parameters.Add (param);
		
		sendPacket (createTableRequestPacket);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameCreatetableConfirm, (float)1f, DSTFBEvent.defaultParams);
	}

	public void sendSelectR (RoomGame room)
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "selectR";
		jsonData ["gameid"].AsInt = gameId;
		jsonData ["id"].AsInt = room.id;
		
		sendService (jsonData);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameRoomClick, (float)1f, DSTFBEvent.defaultParams);
		if (SuperScene.instance is LobbyScene) {
			LobbyScene lobby = (LobbyScene)SuperScene.instance;
			lobby.showTableListWaitingDialog ();
		}
	}

	public void unsubcribeRoom (RoomGame room)
	{
		string lobbyAddress = levelId + "/" + room.id;
		if (lobbyAddress.Length > 0) {
			LobbyUnsubscribePacket packet = new LobbyUnsubscribePacket ();
			packet.type = Enums.LobbyType.REGULAR;
			packet.gameid = gameId;
			packet.address = lobbyAddress;
			sendPacket (packet);
		}
	}

	public void subcribeRoom (RoomGame room)
	{
		string lobbyAddress = levelId + "/" + room.id;
		LobbySubscribePacket packet = new LobbySubscribePacket ();
		packet.type = Enums.LobbyType.REGULAR;
		packet.gameid = gameId;
		packet.address = lobbyAddress;
		sendPacket (packet);
	}

	public void sendJoinTable (int id)
	{
		unsubcribeRoom (currentRoom);
		JoinRequestPacket packet = new JoinRequestPacket ();
		packet.tableid = id;
		int seat = -1;
		packet.seat = (byte)seat;
		sendPacket (packet);
	}

	public void sendQueryEmails ()
	{
		sendQueryEmails (10, 1);
	}

	public void sendQueryEmails (int t, int p)
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "15";
		jsonData ["T"].AsInt = t;
		jsonData ["P"].AsInt = p;

		sendService (jsonData);
		SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
	}



	// ingame
	public void sendLeaveTable ()
	{	
		LeaveRequestPacket packet = new LeaveRequestPacket ();
		packet.tableid = tableId;
		sendPacket (packet);
	}

	public void sendReadyGame ()
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "rtable";
		sendDataGame (jsonData);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPlayReadyClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void sendStartGame ()
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "sgame";
		sendDataGame (jsonData);
	}

	public void sendKickPlayer (string name)
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "ktable";
		jsonData ["Name"] = name;
		sendDataGame (jsonData);
	}

	public void sendChatInGame (string thisPlayerName, string content,string type,string nname)
	{
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "chattable";
		jsonData ["Name"] = thisPlayerName;
		jsonData ["NName"] = nname;
		jsonData ["Data"] = content;
		jsonData ["T"] = type;

		Debug.Log (jsonData.ToString());
		sendDataGame (jsonData);
	}
}

