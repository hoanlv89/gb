using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameName : MonoBehaviour {
	Text text;

	// Use this for initialization
	void Start () {
		text = GetComponent<Text>();
		if(GameApplication.cubeia == null){
			return;
		}
		switch(GameApplication.cubeia.gameId){
		case GameType.BACAY:
			text.text = "Ba Cây";
			break;
		case GameType.TIENLEN:
			text.text = "Tiến Lên";
			break;
		case GameType.TALA:
			text.text = "Phỏm";
			break;
		case GameType.SAM:
			text.text = "Sâm Lốc";
			break;
		case GameType.BINH:
			text.text = "Mậu Binh";
			break;
		case GameType.XITO:
			text.text = "Xì Tố";
			break;
		case GameType.XOCDIA:
			text.text = "Xóc Đĩa";
			break;
		case GameType.CHAN:
			text.text = "Chắn";
			break;
		case GameType.LIENG:
			text.text = "Liêng";
			break;
		case GameType.POKER:
			text.text = "Poker";
			break;
		case GameType.G9K:
			text.text = "9K";
			break;
		case GameType.DUMMY:
			text.text = "Dummy";
			break;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
