using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using System.Collections.Generic;

public class RoomListControl : MonoBehaviour
{
	public Transform RoomItem;
	public Sprite redButtonBg, goldButtonBg;
	Color32 color_gold = new Color32 (251, 204, 120, 255);
	Color32 color_red = new Color32 (218, 22, 0, 255);
	
	// Use this for initialization
	void Start ()
	{
		foreach(Transform rect in this.transform){
			GameObject.Destroy(rect.gameObject);
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
	
	public void AddNewItem (RoomGame roomGame, int pos)
	{
		RectTransform rect = (RectTransform)Instantiate (RoomItem);
		rect.transform.SetParent (this.transform, false);

		Button button = rect.GetComponent<Button> ();
		button.onClick.AddListener (delegate {
			SoundManager.instance.playButtonClicked();
			viewEffectSelectRoomButton (pos);
			if (!roomGame.isFree)
				getListGamesOfRoom (roomGame);
			else if (GameApplication.user.ag > getMinGold ()) {
				string message = Strings.instance.lobby_message_cant_join_free_room;
				message = message.Replace ("%value1%", Utils.formatCurrency (getMinGold ()));
				SuperScene.instance.showInfoDialog (message);
			} else
				getListGamesOfRoom (roomGame);
		});
		
		RectTransform textTransform = (RectTransform)rect.FindChild ("Text");
		Text text = textTransform.GetComponent<Text> ();
		text.text = Strings.instance.getLocalString (roomGame.name);
		//rect.FindChild("Fill").GetComponent<Image>().color = Color.red;
		RectTransform slider = (RectTransform)rect.FindChild ("Slider");
		if(slider!=null){
			slider.GetComponent<Slider> ().value = (float)(roomGame.curPlay)/(380);
			if(slider.GetComponent<Slider> ().value>=0.9f){
				slider.FindChild("Fill Area").FindChild("Fill").GetComponent<Image>().color = Color.red;
			}
		}
	}

	public void viewEffectSelectRoomButton (int pos)
	{
		Debug.Log ("viewEffectSelectRoomButton " + pos + " clicked");
		for (int i = 0; i < this.transform.childCount; i++) {
			Transform tf = this.transform.GetChild (i);
			Image image = tf.GetComponent<Image> ();
			Text text = tf.FindChild("Text").GetComponent<Text> ();
			if (i == pos) {
				image.sprite = goldButtonBg;
			} else {
				image.sprite = redButtonBg;
			}
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.DauTruong)){
				if (i == pos) {
					text.color = color_red; 
				} else {
					text.color = color_gold; 
				}
			} else if(GameApplication.gameApp.Equals(GameApplication.GameApp.G3C)){
			} else if(GameApplication.gameApp.Equals(GameApplication.GameApp.G52Fun)){

			}

		}
	}
	
	private void getListGamesOfRoom (RoomGame roomGame)
	{
		// TODO: can optimize lai viec find GameObject, co the dat vao CubeiaClient
		CubeiaClient cubeia = GameApplication.cubeia;
		GameObject tableListObject = GameObject.Find ("TableList");
		TableListControl tableListControl = (TableListControl)tableListObject.GetComponent (typeof(TableListControl));
		cubeia.currentRoom = roomGame;
		// enter room default
		cubeia.tableList.Clear ();
		tableListControl.updateListItem (cubeia.tableList);
		cubeia.sendSelectR (roomGame);
	}

	private int getMinGold ()
	{
		if (RoomGame.visibleList == null || RoomGame.visibleList.Count < 1)
			return 100;
		else
			return RoomGame.visibleList [0] * 10;
	}
}