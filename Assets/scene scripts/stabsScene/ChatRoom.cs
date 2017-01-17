using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class ChatRoom : MonoBehaviour
{
	public Text title;
	public RectTransform itemList;
	public RectTransform pfChatItem;
	public InputField inputField;
	public Button send;
	public Scrollbar scrollbar;

	int current=0;
	int type;
	// Use this for initialization
	void Start ()
	{	
		send.onClick.AddListener (delegate() {
			string msg = inputField.text;
			
			if(type==4){
				if(!msg.Contains("@")||!msg.Contains(" ")||msg.IndexOf(' ')==1){
					string noti = "cú pháp chat riêng @tên_người_nhận \'khoảng cách\' nội_dung";
					((STabsScene)SuperScene.instance).showToast(noti);
					inputField.text="";
					return;
				}
			}
			if(msg.IndexOf("@")==0 && msg.IndexOf(' ')>1){
				sendChat(msg,4);
			}else{
				sendChat(msg,type);
			}
			inputField.text="";
		});
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void init(){
		for (int i = 0; i<itemList.childCount; i++) {
			Transform child = itemList.GetChild (i);
			Destroy (child.gameObject);
		}
		if (STabsScene.currentTabPos == STabsScene.CHATROOM_GAME) {
			title.text=Strings.instance.chatroom_game;
			current=STabsScene.CHATROOM_GAME;
			type=2;
			foreach(MsgChat msg in MsgChat.game){
				addItem(msg);
			}
		}
		if (STabsScene.currentTabPos == STabsScene.CHATROOM_THEGIOI) {
			title.text=Strings.instance.chatroom_thegioi;
			current=STabsScene.CHATROOM_THEGIOI;
			type=1;
			foreach(MsgChat msg in MsgChat.thegio){
				addItem(msg);
			}
		}
		if (STabsScene.currentTabPos == STabsScene.CHATROOM_RIENG) {
			title.text=Strings.instance.chatroom_rieng;
			current=STabsScene.CHATROOM_RIENG;
			type=4;
			foreach(MsgChat msg in MsgChat.rieng){
				addItem(msg);
			}
		}
		if (STabsScene.currentTabPos == STabsScene.CHATROOM_TATCA) {
			if(current==0){
				title.text=Strings.instance.chatroom_game;
				current=STabsScene.CHATROOM_GAME;
				type=2;
			}
			if(current==STabsScene.CHATROOM_GAME){
				title.text=Strings.instance.chatroom_game;
				type=2;
			}
			if(current==STabsScene.CHATROOM_THEGIOI){
				title.text=Strings.instance.chatroom_thegioi;
				type=1;
			}
			if(current==STabsScene.CHATROOM_RIENG){
				title.text=Strings.instance.chatroom_rieng;
				type=4;
			}
			current=STabsScene.CHATROOM_TATCA;
			foreach(MsgChat msg in MsgChat.all){
				addItem(msg);
			}
		}
	}

	public void addItem(MsgChat msgChat){
		RectTransform rect = GameObject.Instantiate<RectTransform> (pfChatItem);
		rect.transform.SetParent (itemList, false);
		Text tvtime = rect.FindChild ("content").GetComponent<Text> ();
		string msg="";
		if(msgChat.type==4&&msgChat.name.Equals("Hệ thống")){
			msg = "[" + "<color=#ffff00ff>" + msgChat.name + "</color>" + "]:" + msgChat.msg;
			tvtime.text = msg;
			return;
		}else{
			msg = "V" + msgChat.vip + "-[" + "<color=#ffff00ff>" + msgChat.name + "</color>" + "]:" + msgChat.msg;
			tvtime.text = msg;
		}
		Button bt = rect.FindChild ("Button").GetComponent<Button> ();
		bt.onClick.AddListener (delegate {
			STabsScene.currentTabPos = STabsScene.CHATROOM_RIENG;
			((STabsScene)SuperScene.instance).selectTab(STabsScene.currentTabPos);
			inputField.text="@"+msgChat.name+" ";
		});


		scrollbar.value = 0f;
	}

	public void sendChat(string msg , int type){
		if (msg.Length < 1) {
			return;
		} else {
			var data = new JSONClass ();
			data ["evt"] = "16";
			data ["T"].AsInt = type;
			data["N"]=GameApplication.user.name+(GameApplication.user.vip<10? "#0":"#")+GameApplication.user.vip;
			if(type==2){
				data["G"].AsInt=GameApplication.cubeia.gameId;
			}
			if(type==4){
				int i = msg.IndexOf(' ');
				string toname = msg.Substring(1,i);
				msg = msg.Substring(i+1);
				data["NN"]=toname;
			}
			data ["D"] = msg;
			GameApplication.cubeia.sendService (data);
		}
	}
}

