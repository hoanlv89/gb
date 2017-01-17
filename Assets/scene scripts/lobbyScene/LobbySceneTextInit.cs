using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LobbySceneTextInit : MonoBehaviour
{
	public Text napGold, taoban, choingay, chat,room1,room2,room3,room4;
	
	void Start ()
	{
		initText();
	}
	
	public void initText(){
		// chung
		napGold.text = Strings.instance.dialog_common_join_game_dialog_op3;
		taoban.text = Strings.instance.lobby_newtable;

		choingay.text = Strings.instance.lobby_quickjoin;
//		chat.text = Strings.instance.lobby_newtable;
//		room1.text = Strings.instance.dialog_common_join_game_dialog_op3;
//		room2.text = Strings.instance.lobby_newtable;
//		room3.text = Strings.instance.dialog_common_join_game_dialog_op3;
//		room4.text = Strings.instance.lobby_newtable;
	}
}
