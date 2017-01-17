using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class FlyEmo : MonoBehaviour
{
	public RectTransform rect;
	public Player selectedPlayer;

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void show(){
		selectedPlayer.isClickPlayer = true;
		gameObject.SetActive(true);
		rect = (RectTransform)transform;
		
		Vector2 vend = selectedPlayer.rectTransform.anchoredPosition;
		Vector2 pos = 1.0f * vend;
		rect.anchoredPosition = pos;
		rect.rotation = Quaternion.identity;
		if (pos.y < -250) {

		} else if (pos.x > 500) {
			rect.Rotate(new Vector3(0f,0f,90));
		} else if (pos.y > 250) {
			rect.Rotate(new Vector3(0f,0f,180));
		} else if (pos.x < - 500) {
			rect.Rotate(new Vector3(0f,0f,-90));
		} 
	}
	
	public void dismiss(){
		gameObject.SetActive(false);
		selectedPlayer.isClickPlayer = false;
	}

	public void sendMsg(int i){
		string type = "*f" + i;
		string nname = selectedPlayer.name;
		GameApplication.cubeia.sendChatInGame (GameApplication.game.thisPlayer.name, "", type, nname);
		dismiss ();
	}

	public void confirmKick(){
		Game game = GameApplication.game;
		GameScene gameScene = GameApplication.gameScene;
		if (GameApplication.game.state == Game.State.WAITING){
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
}

