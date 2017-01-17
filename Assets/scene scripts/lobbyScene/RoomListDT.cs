using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RoomListDT : MonoBehaviour {
	public Image[] img_room = new Image[4];
	// Use this for initialization
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
				img_room[i].gameObject.SetActive(true);
			} else {
				img_room[i].gameObject.SetActive(false);
			}
		}
		int index = pos;
		if (index > size) {
		} else {
			RoomGame roomGame = GameApplication.cubeia.roomList [index];
			getListGamesOfRoom2 (roomGame);
		}
	}
	
	private void getListGamesOfRoom (RoomGame roomGame)
	{
		// TODO: can optimize lai viec find GameObject, co the dat vao CubeiaClient
		CubeiaClient cubeia = GameApplication.cubeia;
		GameObject tableListObject = GameObject.Find ("TableList");
		TableListDT tableDT = (TableListDT)tableListObject.GetComponent (typeof(TableListDT));
		cubeia.currentRoom = roomGame;
		//		 enter room default
		cubeia.tableList.Clear ();
		//		tableListControl.updateListItem (cubeia.tableList);
		tableDT.addTable (cubeia.tableList);
		cubeia.sendSelectR (roomGame);
	}
	private void getListGamesOfRoom2 (RoomGame roomGame)
	{
		// TODO: can optimize lai viec find GameObject, co the dat vao CubeiaClient
		CubeiaClient cubeia = GameApplication.cubeia;
		GameObject tableListObject = GameObject.Find ("TableList");
		ScreenList screen = (ScreenList)tableListObject.GetComponent (typeof(ScreenList));
		cubeia.currentRoom = roomGame;
		//		 enter room default
		cubeia.tableList.Clear ();
		//		tableListControl.updateListItem (cubeia.tableList);
		screen.revListTable (cubeia.tableList);
		cubeia.sendSelectR (roomGame);
	}
}
