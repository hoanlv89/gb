using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using System.Collections.Generic;

public class ChatPanel : MonoBehaviour
{
	public Text sendText, placeHolder;
//	public Text closeText;
	public InputField inputField;
	public RectTransform quickChatPanelScrollPanel, chatLogScrollPanel,closePanel, quickEmoPanelScrollPanel;

	public Sprite[] emoS;
//	TouchScreenKeyboard touchkeyboard;
	//prefabs
	public RectTransform QuickChatItem;
	public RectTransform PFEmo;
	List<string> quickChatList = new List<string> ();
	List<string> quickEMO = new List<string> ();


	// Use this for initialization
	void Start ()
	{
		sendText.text = Strings.instance.gamescene_chatpanel_send;
//		closeText.text = Strings.instance.dialog_common_cancel;
		placeHolder.text = Strings.instance.gamescene_chatpanel_placeholder_enter_text;

		quickChatList.Clear ();
		if (GameApplication.cubeia.gameId == GameType.XOCDIA) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xocdia_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.CHAN) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chan_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.TIENLEN) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tienlen_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.SAM) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_sam_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.TALA) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.DUMMY) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_tala_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.BINH) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_binh_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.POKER) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_poker_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.LIENG) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_lieng_chat10);
		} else if (GameApplication.cubeia.gameId == GameType.XITO) {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_xito_chat10);
		} else {
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat1);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat2);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat3);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat4);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat5);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat6);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat7);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat8);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat9);
			quickChatList.Add (Strings.instance.gamescene_chatpanel_quickchat_chat10);
		}

		for (int i = 0; i < quickChatList.Count; i++) {
			string message = quickChatList [i];
			RectTransform rect_quickchat_item = GameObject.Instantiate<RectTransform> (QuickChatItem);
			rect_quickchat_item.SetParent (quickChatPanelScrollPanel, false);
			rect_quickchat_item.Find ("Text").GetComponent<Text> ().text = message;
			rect_quickchat_item.GetComponent<Button> ().onClick.AddListener (delegate {
				if (GameApplication.IsInitialized) {
					GameApplication.cubeia.sendChatInGame (GameApplication.game.thisPlayer.name, message,"","");
					dismiss ();
				}
			});
		}

		quickEMO.Clear();
		quickEMO.Add("*e1");
		quickEMO.Add("*e2");
		quickEMO.Add("*e3");
		quickEMO.Add("*e4");
		quickEMO.Add("*e5");
		quickEMO.Add("*e6");
		quickEMO.Add("*e7");
		quickEMO.Add("*e8");
		quickEMO.Add("*e9");
		quickEMO.Add("*e10");
		quickEMO.Add("*e11");
		quickEMO.Add("*e12");

		for (int i = 0; i < quickEMO.Count; i++) {
			string message = quickEMO [i];
			RectTransform rect_quickchat_item = GameObject.Instantiate<RectTransform> (PFEmo);
			rect_quickchat_item.SetParent (quickEmoPanelScrollPanel, false);
			rect_quickchat_item.GetComponent<Image> ().sprite = getSpriteFromString(message);
			rect_quickchat_item.GetComponent<Button> ().onClick.AddListener (delegate {
				if (GameApplication.IsInitialized) {
					GameApplication.cubeia.sendChatInGame (GameApplication.game.thisPlayer.name,"", message,"");
					dismiss ();
				}
			});
		}
	}

	public Sprite getSpriteFromString (string message)
	{
		if(message.Equals("*e1")){
			return emoS[0];
		} else if(message.Equals("*e2")){
			return emoS[1];
		} else if(message.Equals("*e3")){
			return emoS[2];
		} else if(message.Equals("*e4")){
			return emoS[3];
		} else if(message.Equals("*e5")){
			return emoS[4];
		} else if(message.Equals("*e6")){
			return emoS[5];
		} else if(message.Equals("*e7")){
			return emoS[6];
		} else if(message.Equals("*e8")){
			return emoS[7];
		} else if(message.Equals("*e9")){
			return emoS[8];
		} else if(message.Equals("*e10")){
			return emoS[9];
		} else if(message.Equals("*e11")){
			return emoS[10];
		} else if(message.Equals("*e12")){
			return emoS[11];
		}
		return null;
	}

//	public void FixedUpdate ()
//	{
//		if (gameObject.activeSelf && touchkeyboard != null) {
//			if (touchkeyboard.done) {
//				Debug.Log ("chat touchkeyboard.done");
//				string message = touchkeyboard.text.Trim ();
//				if (GameApplication.IsInitialized && message.Length > 0) {
//					string playername = GameApplication.game.thisPlayer.name;
//					GameApplication.cubeia.sendChatInGame (playername, message);
//					touchkeyboard = null;
//				}
//			}
//		}
//	}

	public void toggle ()
	{
		if (gameObject.activeSelf) {
			dismiss ();
		} else {
			show ();
		}
	}

	public void show ()
	{
		gameObject.SetActive (true);
	}

	public void dismiss ()
	{
		gameObject.SetActive (false);
	}

//	public void showInput ()
//	{
//		touchkeyboard = TouchScreenKeyboard.Open ("");
//	}

	public void sendChat(){
		string message = inputField.text;
		if (GameApplication.IsInitialized && message.Length > 0) {
			string playername = GameApplication.game.thisPlayer.name;
			GameApplication.cubeia.sendChatInGame (playername, message,"","");
			dismiss ();
			inputField.text = "";
		}
	}
}

