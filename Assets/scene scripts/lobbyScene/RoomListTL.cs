using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RoomListTL : MonoBehaviour
{

	public Image[] img_room = new Image[4];
	// Use this for initialization
	public Sprite[]room1 = new Sprite [4];
//	public Sprite[]room2 = new Sprite [4];
//	public Sprite[]room1Xocdia = new Sprite [4];
//	public Sprite[]room2Xocdia = new Sprite [4];

	public Image img_temp;
	Vector3[] postion_temp = new Vector3[4];

	void Start ()
	{

	}
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void choseRoom (int pos)
	{
		postion_temp [0] = new Vector3 (75f, 4f,0f);
		postion_temp [1] = new Vector3 (203f, 4f,0f);
		postion_temp [2] = new Vector3 (333f, 4f,0f);
		postion_temp [3] = new Vector3 (462f, 4f,0f);
		img_room[0].rectTransform.FindChild("Text").GetComponent<Text>().text=Strings.instance.lobby_room1;
		img_room[1].rectTransform.FindChild("Text").GetComponent<Text>().text=Strings.instance.lobby_room2;
		img_room[2].rectTransform.FindChild("Text").GetComponent<Text>().text=Strings.instance.lobby_room3;
		img_room[3].rectTransform.FindChild("Text").GetComponent<Text>().text=Strings.instance.lobby_room4;
		SoundManager.instance.playButtonClicked ();
		int size = 0;
		if (GameApplication.cubeia.gameId == GameType.XOCDIA || GameApplication.cubeia.gameId == GameType.BINH
			|| GameApplication.cubeia.gameId == GameType.LIENG || GameApplication.cubeia.gameId == GameType.XITO) {
			size = GameApplication.cubeia.roomList.Length - 2;
		} else {
			size = GameApplication.cubeia.roomList.Length - 1;
		}
		for (int i=0; i<4; i++) {
			if (pos > size) {
				break;
			} else if (pos == i) {
				LeanTween.moveLocalX(img_temp.rectTransform.gameObject,postion_temp[pos].x,0.2f);
				if(pos==0){
					LeanTween.moveLocalX(img_temp.rectTransform.gameObject,75.0f,0.2f);
				}
			} 
		}
		int index = pos;
		if (index > size) {
		} else {
			if(pos==0){
				LeanTween.moveLocalX(img_temp.rectTransform.gameObject,75.0f,0.2f);
			}
			RoomGame roomGame = GameApplication.cubeia.roomList [index];
			getListGamesOfRoom (roomGame);
		}
//		LeanTween.moveLocalY(img_temp.rectTransform.gameObject,4,0.2f);
	}

	private void getListGamesOfRoom (RoomGame roomGame)
	{
		// TODO: can optimize lai viec find GameObject, co the dat vao CubeiaClient
		CubeiaClient cubeia = GameApplication.cubeia;
		GameObject tableListObject = GameObject.Find ("TableList");
		ScreenListTL screen = (ScreenListTL)tableListObject.GetComponent (typeof(ScreenListTL));
		cubeia.currentRoom = roomGame;
		//		 enter room default
		cubeia.tableList.Clear ();
		//		tableListControl.updateListItem (cubeia.tableList);
		screen.revListTable (cubeia.tableList);
		cubeia.sendSelectR (roomGame);
	}
}

