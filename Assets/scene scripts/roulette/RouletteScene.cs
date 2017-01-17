using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;

public class RouletteScene: SuperScene
{

	// Use this for initialization
	public override void Start()
	{
		if (GameApplication.IsInitialized == false) {
			// go to the login scene
			Application.LoadLevel(GameApplication.LOGINSCENE);
			return;
		}
		base.Start();
//		addRLEvents();
		
	}
	
//	void addRLEvents()
//	{
//		EventSink.onSendSpin += new SendSpinEventHandle(sendSpin);
//		EventSink.onSendFinish += new SendFinishEventHandle(sendFinish);
//		EventSink.onRouletteExit += new Quit(backtoHome);
//	}
	
	void sendSpin(string nums, string values)
	{
		var data = new JSONClass();
		data ["evt"] = "rlm";
		data ["LQ"] = values;
		data ["Num"] = nums;
		cubeia.sendService(data);
	}

	void sendFinish(int id)
	{
		var data = new JSONClass();
		data ["evt"] = "frl";
		data ["id"].AsInt = id;
		cubeia.sendService(data);
	}

	void backtoHome()
	{
		Application.LoadLevel(GameApplication.HOMESCENE);
	}
}
