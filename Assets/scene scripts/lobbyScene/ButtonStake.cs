using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class ButtonStake : MonoBehaviour
{

	// Use this for initialization
	public Button button;
	public Text s_stake;
	public Text s_ccus;
	int stake;

	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void setData(int i_stake , int i_ccus , Sprite s){
		s_stake.text = Utils.formatNumber (i_stake);
		s_ccus.text = "" + i_ccus;
		button.GetComponent<Image> ().sprite = s;
		stake = i_stake;
	}

	public void joinTable(){
		SoundManager.instance.playButtonClicked ();
		if (GameApplication.user.ag < stake * 10) {
			SuperScene.instance.showInfoDialog ("Bạn không đủ tiền tham gia bàn chơi!");
		}else{
			var json = new JSONClass ();
			json ["evt"] = "playnow";
			json ["D"].AsInt = 0;
			json ["M"].AsInt = stake;
			json ["S"].AsInt = 0;
			GameApplication.cubeia.sendService (json);
			SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
		}
	}
}

