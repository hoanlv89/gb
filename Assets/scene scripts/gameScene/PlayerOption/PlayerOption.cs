using UnityEngine;
using System.Collections;
using SimpleJSON;

public class PlayerOption : MonoBehaviour {
	RectTransform rect;
	public Player selectedPlayer;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void show(){
		gameObject.SetActive(true);
		rect = (RectTransform)transform;

		Vector2 vend = selectedPlayer.rectTransform.anchoredPosition;
		Vector2 pos = 0.8f * vend;
		rect.anchoredPosition = pos;
	}

	public void dismiss(){
		gameObject.SetActive(false);
	}

	public void confirmKick(){
		Game game = GameApplication.game;
		GameScene gameScene = GameApplication.gameScene;
		int vip = selectedPlayer.vip;
		int ag = selectedPlayer.ag;
		string pname = selectedPlayer.name;

		dismiss();

		if(!game.thisPlayer.Equals (game.hostPlayer)){
			gameScene.showInfoDialog("Bạn phải là người chủ bàn mới được kick người chơi cùng.");
			return;
		}
	
		if (game.thisPlayer.vip > vip || (game.thisPlayer.vip == vip && game.thisPlayer.ag >= 2 * ag)) {
			JSONClass o = new JSONClass ();
			o ["evt"] = "ktable";
			o ["Name"] = pname;
			GameApplication.cubeia.sendDataGame (o);
		} else {
			gameScene.showInfoDialog (Strings.instance.ingame_common_deny_kick);
		}

	}
}
