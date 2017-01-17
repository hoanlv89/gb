using UnityEngine;
using System.Collections;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;
using System.Collections.Generic;

public class MyPacket:MonoBehaviour
{
		void Start ()
		{
		}

		void Update ()
		{
		}

		//{"evt":"ctable", "data":"{\"N\":\"\\u0000\",\"M\":100,
		//\"ArrP\":[{\"N\":\"ann2005\",\"Url\":\"ann2005\",\"AG\":98,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"sIP\":\"14.162.139.169\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0}],
		//\"Id\":9275,\"T\":0,\"V\":0,\"AG\":10,\"S\":9}"}
		public void goToGameScene ()
		{
				LevelManager.Load (GameApplication.GAMESCENE);
		}

		//{"evt":"lc", "data":"[26,23,49,18,20,34,10,21,36,4,12,17,42]"}
		public void sendLCTable ()
		{
				var json = new JSONClass ();
				json ["evt"] = "lc";
				//json ["data"] = "[16,20,25,22,21,27,50,15,37,2,34,32,45]";
				json ["data"] = "[41,3,47,17,19,14,9,6,12,13,20,26,50]";
				//for (int i=0; i<13; i++)
				//		json ["data"] [i].AsInt = i + 1;
		
				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

		//{"evt":"rtable", "Name":"princess"}
		public void sendRTable ()
		{
				var json = new JSONClass ();
				json ["evt"] = "rtable";
				json ["Name"] = "princess";
		
				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

		//{"evt":"jtable", "data":"{\"N\":\"princess\",\"Url\":\"estronema\",\"AG\":1165086,\"LQ\":7000,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.139.169\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0}"}
		public void sendJTable ()
		{
				var item = new JSONClass ();
				item ["N"] = "princess";
				item ["Url"] = "estronema";
				item ["sIP"] = "14.162.139.169";
				item ["AG"].AsInt = 1165086;
				item ["LQ"].AsInt = 7000;
				item ["VIP"].AsInt = 1;
				item ["isStart"].AsBool = false;
				item ["IK"].AsInt = 0;
				item ["G"].AsInt = 3;
				item ["Av"].AsInt = 0;
				item ["FId"].AsInt = 0;
				item ["GId"].AsInt = 0;

				var json = new JSONClass ();
				json ["evt"] = "jtable";
				json ["data"] = item.ToString ();

				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

		public void sendCTable ()
		{
				User user = GameApplication.user;
				Debug.Log (" +++++ send stable()");
		
				var item = new JSONClass ();
				item ["N"] = "ann2005";
				item ["Url"] = "ann2005";
				item ["sIP"] = "14.162.139.169";
				item ["AG"].AsInt = 98;
				item ["LQ"].AsInt = 0;
				item ["VIP"].AsInt = 1;
				item ["isStart"].AsBool = true;
				item ["IK"].AsInt = 0;
				item ["G"].AsInt = 3;
				item ["Av"].AsInt = 31;
				item ["FId"].AsInt = 0;
				item ["GId"].AsInt = 0;
				// ____________________________
		
				JSONArray jarr = new JSONArray ();
				jarr [-1] = item;
		
				var jsonData = new JSONClass ();
				jsonData ["N"] = "u0000";
				jsonData ["M"].AsInt = 100;
				jsonData ["Id"].AsInt = 9275;
				jsonData ["T"].AsInt = 0;
				jsonData ["V"].AsInt = 0;
				jsonData ["AG"].AsInt = 10;
				jsonData ["S"].AsInt = 9;
				jsonData ["ArrP"] = jarr;

		
				var json = new JSONClass ();
				json ["evt"] = "ctable";
				json ["data"] = jsonData.ToString ();
		
				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

		public void swapCard () //chua xong - 20-1-2015 lam tiep
		{
				//BL = Binh Lung
				//MB = Mau Binh - PlayingTableBinh : 2172-2196
				/*{"evt":"finish",
				"data":"[{\"N\":\"ann2005\",\"M\":-102,\"BL\":false,\"MB\":0,\"AG\":94,\"ArrCard\":[29,5,25,12,19,47,41,22,40,33,3,13,21]},
				{\"N\":\"princess\",\"M\":96,\"BL\":false,\"MB\":0,\"AG\":1168371,\"ArrCard\":[28,18,45,14,15,34,11,51,26,52,35,48,46]}]"}*/

				

				var item = new JSONClass ();
				item ["N"] = "ann2005";
				item ["M"].AsInt = -102;
				item ["BL"].AsBool = false;
				item ["MB"].AsInt = 0;
				item ["AG"].AsInt = 94;
				item ["ArrCard"] = JSONNode.Parse ("[29,5,25,12,19,47,41,22,40,33,3,13,21]");

				var item1 = new JSONClass ();
				item1 ["N"] = "princess";
				item1 ["M"].AsInt = 96;
				item1 ["BL"].AsBool = false;
				item1 ["MB"].AsInt = 0;
				item1 ["AG"].AsInt = 1168371;
				item1 ["ArrCard"] = JSONNode.Parse ("[28,18,45,14,15,34,11,51,26,52,35,48,46]");

				// ____________________________
				JSONClass json = new JSONClass ();
				json ["evt"] = "finish";
				var dataarr = new JSONArray ();
				dataarr.Add (item);
				dataarr.Add (item1);
				json ["data"] = dataarr.ToString ();

				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
				Debug.Log (json.ToString ());
		}

		public void fsc ()
		{
				//{"evt":"fsc", "Name":"ann2005"}
				var json = new JSONClass ();
				json ["evt"] = "fsc";
				json ["Name"] = "princess";
		
				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

		public void ufsc ()
		{
				var json = new JSONClass ();
				json ["evt"] = "ufsc";
				json ["Name"] = "princess";
		
				GameTransportPacket gameTransportPacket = new GameTransportPacket ();
				gameTransportPacket.tableid = 9275;
				gameTransportPacket.gamedata = Utils.getBytes (json.ToString ());
		
		
				GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

		public void clearCard ()
		{
				Player p = GameApplication.game.getPlayer ("princess");
				if (p != null && p is OtherPlayer) {
						List<RectTransform> cardInHand = ((OtherPlayer)p).cardsInHandList;
						if (cardInHand != null) {
								for (int j=0; j<cardInHand.Count; j++) {
										GameObject.Destroy (cardInHand [j].gameObject);
								}
								cardInHand = new List<RectTransform> ();
						}
				}
		}

		//**************************************Moving******************************************
		public void onMoving ()
		{
				Vector3 mouseDown = Input.mousePosition;
				GameObject testBinh = GameObject.Find ("TestBinh");
				testBinh.transform.position = mouseDown;
		}

		public void endMoving ()
		{
				GameObject testBinh = GameObject.Find ("TestBinh");
				testBinh.transform.position = new Vector3 (100, 100);
		}
}
