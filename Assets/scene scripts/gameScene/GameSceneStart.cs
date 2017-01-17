using UnityEngine;
using System.Collections;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;
using UnityEngine.UI;

public class GameSceneStart : MonoBehaviour
{
	Game game;
	RectTransform binhfunctions;

	CubeiaClient cubeia;

	// Use this for initialization
	public void Start ()
	{
		// duy nhat GameSceneStart ko goi base.Start().
		// nham loai bo sinh nhieu COMMON object 
		// base.Start();

//		if (GameApplication.DEBUG_ON) {
//			GameApplication.cubeia = new CubeiaClient();
//			GameApplication.cubeia.gameId = GameType.DUMMY;
//			Strings.currentLanguage = Strings.LANGUAGE_TH;
//		} else {
			if (GameApplication.IsInitialized == false) {
				// go to the login scene
				Application.LoadLevel (GameApplication.LOGINSCENE);
				return;
			}
//		}
		int gameID = GameApplication.cubeia.gameId;
		if (gameID == GameType.TIENLEN)
			gameObject.AddComponent (typeof(GameSceneTienLen));
		else if (gameID == GameType.POKER)
			gameObject.AddComponent (typeof(GameScenePoker));
		else if (gameID == GameType.XITO)
			gameObject.AddComponent (typeof(GameSceneXiTo));
		else if (gameID == GameType.BINH)
			gameObject.AddComponent (typeof(GameSceneBinh));
		else if (gameID == GameType.LIENG)
			gameObject.AddComponent (typeof(GameSceneLieng));
		else if (gameID == GameType.SAM)
			gameObject.AddComponent (typeof(GameSceneSam));
		else if (gameID == GameType.XOCDIA)
			gameObject.AddComponent (typeof(GameSceneXocDia));
		else if (gameID == GameType.TALA)
			gameObject.AddComponent (typeof(GameSceneTaLa));
		else if (gameID == GameType.CHAN)
			gameObject.AddComponent (typeof(GameSceneChan));
		else if (gameID == GameType.G9K)
			gameObject.AddComponent (typeof(GameScene9K));
		else if (gameID == GameType.DUMMY)
			gameObject.AddComponent (typeof(GameSceneDummy));
		else 
			gameObject.AddComponent (typeof(GameScene));

		game = GameApplication.game;
		cubeia = GameApplication.cubeia;
	}

	public void checkConnection ()
	{
		if (cubeia.isConnected ()) {
			SuperScene.instance.showInfoDialog ("connected");
		} else {
			SuperScene.instance.showInfoDialog ("not connected");
		}
	}

	public void backToLobby(){
		GameApplication.game.backToLobby();
		GameApplication.game = null;
		GameApplication.gameScene = null;
	}

	public void disconnect ()
	{
		cubeia.disconnect();
	}

	// TDDO: fortest
	public void sendChat ()
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		
		var jsonData = new JSONClass ();
		jsonData ["evt"] = "chattable";
		jsonData ["Name"] = game.thisPlayer.name;
		//		jsonData ["Data"] = "nhường mình phát đê,ăn gì lắm thế!";
		jsonData ["Data"] = textSelectedPlayer.text;
		//		textSelectedPlayer.text;
		//		GameTransportPacket gameTransportPacket = new GameTransportPacket();
		//		gameTransportPacket.tableid = cubeia.tableId;
		//		gameTransportPacket.gamedata = Utils.getBytes(jsonData.ToString());
		//		
		//		GameTransportPacketProcessor.handleGameTransportPacket(gameTransportPacket);
		
		cubeia.sendDataGame (jsonData);
	}
	
	public void sendVtable (int tableid)
	{
		Debug.Log (" +++++ send vtable()");
		
		var item = new JSONClass ();
		item ["N"] = "getbonannon";
		item ["Url"] = "getbonannon";
		item ["sIP"] = "113.163.13.165";
		item ["AG"].AsInt = 2309;
		item ["LQ"].AsInt = 0;
		item ["VIP"].AsInt = 1;
		item ["isStart"].AsBool = true;
		item ["IK"].AsInt = 0;
		item ["G"].AsInt = 3;
		item ["Av"].AsInt = 0;
		item ["FId"].AsInt = 0;
		item ["GId"].AsInt = 0;
		// doan nay danh cho ta la ____
		item ["Arr"] = JSONArray.Parse ("[0,0,0,0,0,0,0,0,21]");
		item ["ArrD"] = JSONArray.Parse ("[12,48]");
		item ["ArrH"] = new JSONArray ();
		// ____________________________
		
		JSONArray jarr = new JSONArray ();
		jarr [-1] = item;
		
		item = (JSONClass)JSONNode.Parse (item.ToString ());
		item ["N"] = "dongthaocho";
		item ["Url"] = "dongthaocho";
		item ["AG"].AsInt = 503;
		item ["VIP"].AsInt = 4;
		item ["sIP"] = "117.6.124.206";
		item ["Arr"] = JSONArray.Parse ("[0,0,0,16,0,0,0,0,0]");
		item ["ArrD"] = JSONArray.Parse ("[32,35]");
		jarr [-1] = item;
		
		item = (JSONClass)JSONNode.Parse (item.ToString ());
		item ["N"] = "loveyou.lan.anh";
		item ["Url"] = "loveyou.lan.anh";
		item ["AG"].AsInt = 412;
		item ["VIP"].AsInt = 1;
		item ["sIP"] = "42.112.192.166";
		item ["Arr"] = JSONArray.Parse ("[0,0,0,0,0,25,0,0,26]");
		item ["ArrD"] = JSONArray.Parse ("[11]");
		jarr [-1] = item;
		
		var jsonData = new JSONClass ();
		jsonData ["N"] = "abc";
		jsonData ["M"].AsInt = 10;
		jsonData ["Id"].AsInt = tableid;
		jsonData ["T"].AsInt = 0;
		jsonData ["V"].AsInt = 0;
		jsonData ["AG"].AsInt = 10;
		jsonData ["S"].AsInt = 4;
		jsonData ["ArrP"] = jarr;
		
		var json = new JSONClass ();
		json ["evt"] = "vtable";
		json ["data"] = jsonData.ToString ();
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = tableid;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendStable (int tableid)
	{
		User user = GameApplication.user;
		Debug.Log (" +++++ send stable()");
		
		var item = new JSONClass ();
		item ["N"] = "getbonannon";
		item ["Url"] = "getbonannon";
		item ["sIP"] = "113.163.13.165";
		item ["AG"].AsInt = 82309;
		item ["LQ"].AsInt = 0;
		item ["VIP"].AsInt = 3;
		item ["isStart"].AsBool = true;
		item ["IK"].AsInt = 0;
		item ["G"].AsInt = 1;
		item ["Av"].AsInt = 0;
		item ["FId"].AsInt = 0;
		item ["GId"].AsInt = 0;
		// doan nay danh cho ta la ____
		item ["Arr"] = JSONArray.Parse ("[0,0,0,0,0,0,0,0,21]");
		item ["ArrD"] = JSONArray.Parse ("[12,48]");
		item ["ArrH"] = new JSONArray ();
		// ____________________________
		
		JSONArray jarr = new JSONArray ();
		jarr [-1] = item;
		
		item = (JSONClass)JSONNode.Parse (item.ToString ());
		item ["N"] = "loveyou.lan.anh";
		item ["Url"] = "loveyou.lan.anh";
		item ["AG"].AsInt = 32412;
		item ["VIP"].AsInt = 6;
		item ["sIP"] = "42.112.192.166";
		item ["isStart"].AsBool = false;
		item ["Arr"] = JSONArray.Parse ("[0,0,0,0,0,25,0,0,26]");
		item ["ArrD"] = JSONArray.Parse ("[11]");
		jarr [-1] = item;
		
		item = (JSONClass)JSONNode.Parse (item.ToString ());
		item ["N"] = user.inGameName;
		item ["Url"] = user.avatarUrl;
		item ["AG"].AsInt = user.ag;
		item ["VIP"].AsInt = user.vip;
		item ["isStart"].AsBool = false;
		item ["sIP"] = "117.6.124.206";
		item ["Arr"] = JSONArray.Parse ("[0,0,0,16,0,0,0,0,0]");
		item ["ArrD"] = JSONArray.Parse ("[32,35]");
		jarr [-1] = item;
		
		item = (JSONClass)JSONNode.Parse (item.ToString ());
		item ["N"] = "hoanlv89";
		item ["Url"] = "hoanlv89";
		item ["AG"].AsInt = 42412;
		item ["VIP"].AsInt = 9;
		item ["sIP"] = "42.112.192.116";
		item ["isStart"].AsBool = false;
		item ["Arr"] = JSONArray.Parse ("[0,0,0,0,0,25,0,0,26]");
		item ["ArrD"] = JSONArray.Parse ("[11]");
		jarr [-1] = item;
		
		var jsonData = new JSONClass ();
		jsonData ["N"] = "abc";
		jsonData ["M"].AsInt = 10;
		jsonData ["Id"].AsInt = tableid;
		jsonData ["T"].AsInt = 0;
		jsonData ["V"].AsInt = 0;
		jsonData ["AG"].AsInt = 10;
		jsonData ["S"].AsInt = 4;
		jsonData ["ArrP"] = jarr;
		
		var json = new JSONClass ();
		json ["evt"] = "stable";
		json ["data"] = jsonData.ToString ();
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = tableid;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendCtable (int tableid)
	{
		User user = GameApplication.user;
		Debug.Log (" +++++ send stable()");
		
		var item = new JSONClass ();
		item ["N"] = user.inGameName;
		item ["Url"] = user.avatarUrl;
		item ["sIP"] = "113.163.13.165";
		item ["AG"].AsInt = user.ag;
		item ["LQ"].AsInt = user.lq;
		item ["VIP"].AsInt = user.vip;
		item ["isStart"].AsBool = true;
		item ["IK"].AsInt = 0;
		item ["G"].AsInt = 1;
		item ["Av"].AsInt = 0;
		item ["FId"].AsInt = 0;
		item ["GId"].AsInt = 0;
		// doan nay danh cho ta la ____
		item ["Arr"] = JSONArray.Parse ("[0,0,0,0,0,0,0,0,21]");
		item ["ArrD"] = JSONArray.Parse ("[12,48]");
		item ["ArrH"] = new JSONArray ();
		// ____________________________
		
		JSONArray jarr = new JSONArray ();
		jarr [-1] = item;
		
		var jsonData = new JSONClass ();
		jsonData ["N"] = "abc";
		jsonData ["M"].AsInt = 65535;
		jsonData ["Id"].AsInt = tableid;
		jsonData ["T"].AsInt = 0;
		jsonData ["V"].AsInt = 65536;
		jsonData ["AG"].AsInt = 100;
		jsonData ["S"].AsInt = 65536;
		jsonData ["ArrP"] = jarr;
		
		var json = new JSONClass ();
		json ["evt"] = "ctable";
		json ["data"] = jsonData.ToString ();
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = tableid;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendLtable ()
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		var json = new JSONClass ();
		json ["evt"] = "ltable";
		json ["Name"] = textSelectedPlayer.text;
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendRtable ()
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		var json = new JSONClass ();
		json ["evt"] = "rtable";
		json ["Name"] = textSelectedPlayer.text;
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendJtable ()
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		var item = new JSONClass ();
		item ["N"] = textSelectedPlayer.text;
		item ["Url"] = textSelectedPlayer.text;
		item ["sIP"] = "113.163.13.161";
		item ["AG"].AsInt = 2309;
		item ["LQ"].AsInt = 0;
		item ["VIP"].AsInt = 3;
		item ["isStart"].AsBool = false;
		item ["IK"].AsInt = 0;
		item ["G"].AsInt = 1;
		item ["Av"].AsInt = 0;
		item ["FId"].AsInt = 0;
		item ["GId"].AsInt = 0;
		
		var json = new JSONClass ();
		json ["evt"] = "jtable";
		json ["data"] = item.ToString ();
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendLc (string cards)
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		//{"evt":"lc","Dealer":"ann2005","Arr":"[48,7]"}
		var json = new JSONClass ();
		json ["evt"] = "lc";
		//		json ["NName"] = textSelectedPlayer.text;
//		json ["Dealer"] = textSelectedPlayer.text;
		json ["data"] = cards;// JSONNode.Parse(cards).AsArray;
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);

//		StartCoroutine(Utils.cr_runDelayed(3f, delegate {
//			game.thisPlayer.showCardXiTo(game.thisPlayer.cards[1].encode_xito());
//		}));
//		StartCoroutine(Utils.cr_runDelayed(5f, delegate {
//			game.players[0].showCardXiTo(11);
//		}));
	}
	
	public void sendbm (string cards)
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		//{"evt":"lc","Dealer":"ann2005","Arr":"[48,7]"}
		var json = new JSONClass ();
		json ["evt"] = "bm";
		//		json ["NName"] = textSelectedPlayer.text;
		json ["N"] = textSelectedPlayer.text;
		json ["NN"] = textSelectedPlayer.text;
		json ["Arr"] = JSONNode.Parse (cards).AsArray;
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendDc (string cards)
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		string name = textSelectedPlayer.text;
		int index = game.players.IndexOf (game.getPlayer (name));
		index = (index + 1) % game.players.Count;
		
		var json = new JSONClass ();
		json ["evt"] = "dc";
		json ["N"] = name;
		json ["NN"] = game.players [index].name;
		json ["MC"].AsInt = 0;
		json ["Arr"] = JSONNode.Parse (cards).AsArray;
		
		textSelectedPlayer.text = game.players [index].name;
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendCc ()
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		string name = textSelectedPlayer.text;
		int index = game.players.IndexOf (game.getPlayer (name));
		index = (index + 1) % game.players.Count;
		
		var json = new JSONClass ();
		json ["evt"] = "cc";
		json ["N"] = name;
		json ["NN"] = game.players [index].name;
		
		textSelectedPlayer.text = game.players [index].name;
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
	
	public void sendFinish ()
	{
		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
		string name = textSelectedPlayer.text;
		
		JSONArray jarr = new JSONArray ();
		foreach (Player player in game.players) {
			bool winner = false;
			if (player.name.Equals (name)) {
				winner = true;
			}
			var item = new JSONClass ();
			item ["N"] = player.name;
			item ["M"].AsInt = Random.Range (-50, 50) * 1000;
			item ["V"].AsInt = winner ? 0 : 10;
			item ["AG"].AsInt = Random.Range (-50, 50) * 1000;
			item ["D"].AsInt = Random.Range (1, 20);
			item ["Arr"] = winner ? new JSONArray () : JSONArray.Parse ("[14,41,16,29,17,5,23,36,11]");
			jarr [-1] = item;
		}
		
		var json = new JSONClass ();
		json ["evt"] = "finish";
		json ["data"] = jarr.ToString ();
		
		GameTransportPacket gameTransportPacket = new GameTransportPacket ();
		gameTransportPacket.tableid = cubeia.tableId;
		gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
	}
}
