using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RoomList3C : MonoBehaviour
{

	public Image[] img_room = new Image[4];
	// Use this for initialization
	public Sprite[]room1 = new Sprite [4];
	public Sprite[]room2 = new Sprite [4];
	public Sprite[]room1Xocdia = new Sprite [4];
	public Sprite[]room2Xocdia = new Sprite [4];

	void Start ()
	{
//		for (int i=0; i<4; i++) {
//			if(GameApplication.cubeia.gameId==GameType.XOCDIA){
//				img_room[i].GetComponent<Image>().sprite=room2Xocdia[i];
//			}else{
//				img_room[i].GetComponent<Image>().sprite=room2[i];
//			}
//		}
	}
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void choseRoom (int pos)
	{
		Debug.LogError ("choseRoom "+pos);
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
				if (GameApplication.cubeia.gameId == GameType.XOCDIA) {
					img_room [i].GetComponent<Image> ().sprite = room1Xocdia [i];
				} else {
					img_room [i].GetComponent<Image> ().sprite = room1 [i];
				}
			} else {
				if (GameApplication.cubeia.gameId == GameType.XOCDIA) {
					img_room [i].GetComponent<Image> ().sprite = room2Xocdia [i];
				} else {
					img_room [i].GetComponent<Image> ().sprite = room2 [i];
				}
			}
		}
		int index = pos;
		if (index > size) {
			Debug.LogError ("index "+index);
			Debug.LogError ("size "+size);
		} else {
			RoomGame roomGame = GameApplication.cubeia.roomList [index];
			getListGamesOfRoom (roomGame);
		}
	}

	private void getListGamesOfRoom (RoomGame roomGame)
	{
		Debug.LogError ("getListGamesOfRoom");
		// TODO: can optimize lai viec find GameObject, co the dat vao CubeiaClient
		CubeiaClient cubeia = GameApplication.cubeia;
		GameObject tableListObject = GameObject.Find ("TableList");
		TableList table3C = (TableList)tableListObject.GetComponent (typeof(TableList));
		cubeia.currentRoom = roomGame;
//		 enter room default
		cubeia.tableList.Clear ();
//		tableListControl.updateListItem (cubeia.tableList);
		table3C.addTable (cubeia.tableList);
		cubeia.sendSelectR (roomGame);
	}
}

