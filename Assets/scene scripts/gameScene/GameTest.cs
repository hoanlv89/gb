using UnityEngine;
using System.Collections;

public class GameTest : SuperScene {

	// Use this for initialization
	public override void Start () {
		base.Start ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void showNotification(){
		if(SuperScene.instance is GameScene){
			GameScene gameScene = (GameScene)SuperScene.instance;
			gameScene.controllerControl.gameNotification.showNotification(Strings.instance.ingame_common_kick);
		}
	}
}