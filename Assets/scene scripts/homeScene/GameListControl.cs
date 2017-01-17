using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Threading;
using SimpleJSON;
using System.Collections.Generic;
using System;

public class GameListControl : MonoBehaviour
{
	public RectTransform pfGameItem;
	public RectTransform rectTransform;
	public Sprite[] gamelogo;

	void Start(){
		// chinh layout gridview o 52fun
		if(GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
			GridLayoutGroup glg = GetComponent<GridLayoutGroup>();

			float y = 1280 * Screen.height/ (float)Screen.width;
			glg.spacing = new Vector2(90, (y - 420)/4);
		}
	}

	public void addGameItem(int gameID){
		if(!gameIsAvalable(gameID))
			return;

		RectTransform rect = GameObject.Instantiate<RectTransform>(pfGameItem);
		rect.SetParent(rectTransform, false);
		rect.GetComponent<Button>().onClick.AddListener(delegate() {
			SoundManager.instance.playButtonClicked ();
			((HomeScene)SuperScene.instance).loginToGame(gameID);
		});

		rect.GetComponent<Image>().sprite = getSpriteByGameID(gameID);
		if(rect.FindChild("Text")!=null){
			rect.FindChild ("Text").GetComponent<Text> ().text = getNameGameByID (gameID);
		}
	}

	bool gameIsAvalable (int gameID)
	{
		switch(gameID){
		case GameType.XOSO:
			return true;
		case GameType.BINH:
			return true;
		case GameType.BONGDA:
			return true;
		case GameType.CHAN:
			return true;
		case GameType.LIENG:
			return true;
		case GameType.POKER:
			return true;
		case GameType.ROULETTE:
			return true;
		case GameType.SAM:
			return true;
		case GameType.TALA:
			return true;
		case GameType.TIENLEN:
			return true;
		case GameType.XITO:
			return true;
		case GameType.XOCDIA:
			return true;
		case GameType.DUMMY:
			return true;
		case GameType.G9K:
			return true;
			// khong ton tai icon Bank o dau truong nua.
//		case GameType.BANK_DAUTRUONG:
//			if(GameApplication.gameApp.Equals(GameApplication.GameApp.DauTruong))
//				return true;
//			return false;
		case GameType.SLOTS:
			return false;
		}
		return false;
	}

	Sprite getSpriteByGameID (int gameID)
	{
		switch(gameID){
		case GameType.XOSO:
			return gamelogo[0];
		case GameType.BINH:
			return gamelogo[1];
		case GameType.BONGDA:
			return gamelogo[2];
		case GameType.CHAN:
			return gamelogo[3];
		case GameType.LIENG:
			return gamelogo[4];
		case GameType.POKER:
			if(GameApplication.gameApp==GameApplication.GameApp.GTL){
				return gamelogo[2];
			}
			return gamelogo[5];
		case GameType.ROULETTE:
			if(GameApplication.gameApp==GameApplication.GameApp.GTL){
				return gamelogo[3];
			}
			return gamelogo[6];
		case GameType.SAM:
			return gamelogo[7];
		case GameType.TALA:
			return gamelogo[8];
		case GameType.TIENLEN:
			return gamelogo[9];
		case GameType.XITO:
			return gamelogo[10];
		case GameType.XOCDIA:
			if(GameApplication.gameApp==GameApplication.GameApp.GTL){
				return gamelogo[4];
			}
			return gamelogo[11];
		case GameType.BANK_DAUTRUONG:
			return gamelogo[12];
		case GameType.G9K:
			return gamelogo[0];
		case GameType.DUMMY:
			return gamelogo[1];
		case GameType.SLOTS:
			return gamelogo[11];
		}
		return gamelogo[0];
	}

	String getNameGameByID(int gameID){
		switch(gameID){
		case GameType.XOSO:
			return "Xổ số";
		case GameType.BINH:
			return "Binh";
		case GameType.BONGDA:
			return "Bóng đá";
		case GameType.CHAN:
			return "Chắn";
		case GameType.LIENG:
			return "Liêng";
		case GameType.POKER:
			return "Poker";
		case GameType.ROULETTE:
			return "Roulette";
		case GameType.SAM:
			return "Sâm lốc";
		case GameType.TALA:
			return "Tá lả";
		case GameType.TIENLEN:
			return "Tiến lên";
		case GameType.XITO:
			return "Xì tố";
		case GameType.XOCDIA:
			return "Xóc đĩa";
		case GameType.BANK_DAUTRUONG:
			return "Bank";
		case GameType.SLOTS:
			return "Slots";
		case GameType.G9K:
			return "9K";
		case GameType.DUMMY:
			return "Dummy";
		}
		return "";
	}
	public void clearAll(){
		foreach(RectTransform rect in rectTransform){
			Destroy(rect.gameObject);
		}
	}
}
