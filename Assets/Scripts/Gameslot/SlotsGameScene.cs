using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class SlotsGameScene : SuperScene {

	public Text playerName;
	public Text playerGold;
	public static int gold;
	public Image avatar;
	User user;

	public SlotsGameScene(){}
	// Use this for initialization
	public override void Start () {
		base.Start();
		if (GameApplication.IsInitialized == false) {
			// go to the login scene
			Application.LoadLevel (GameApplication.LOGINSCENE);
			return;
		}

		user = GameApplication.user;
		playerName.text = user.name;
		playerGold.text = "$"+Utils.formatNumber(user.ag);
	}
	public int updateGold(){
		user = GameApplication.user;
		return user.ag;
	}

}
