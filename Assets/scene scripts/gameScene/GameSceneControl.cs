using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class GameSceneControl : MonoBehaviour
{
	public GameNotification gameNotification;
	public BGControl bgControl;
	public ChatPanel chatPanel;
	public RaiseOptionControl raiseOptionControl;
	public TienLenFunctions tienlenFunctions;
	public TalaFunction talaFuntions;
	public DummyFunction dummyFuntions;
	public ChanFunction chanFuntions;
	public PokerFuntionsOthersTurn pokerFuntionsOthersTurn;
	public FunctionsXocDia xocDiaFunction;
	public RectTransform samFunction;
	public InvitePlayerBoxControl inviteBoxControl;
	public GameObject gameSettingPanel;
	public ResultBinh resultBinh;
	public PlayerOption PlayerOption;
	public FlyEmo flyEmo;
	public TopControler topControler;
	//public BinhFunction binhFunction;
	public RectTransform PokerFuntionsOnTurn;
	public Button btn_start;
	public Button btn_f1, btn_f2, btn_f3;
	public Sprite sprite_btn_fold;
	public Sprite sprite_btn_check;
	public Sprite sprite_btn_call;
	public Sprite sprite_btn_bet;
	public Sprite sprite_btn_raise;
	public Sprite sprite_btn_confirm;
	public Sprite sprite_btn_allin;
	public Sprite s_back_c3gold;
	public Sprite s_back_c3gold_invi;
	public Sprite s_invite_c3gold;
	public Sprite s_chat_c3gold;
	public Text gameName;
	public Sprite s_btn_back_3c_xd;
	public Sprite s_btn_chat_3c_xd;
	public Sprite s_btn_setting_3c_xd;

	public Sprite s_back_dautruong;
	public Sprite s_chat_dautruong;
	public Sprite s_setting_dautruong;
	public Sprite s_back_dautruong_xd;
	public Sprite s_chat_dautruong_xd;
	public Sprite s_setting_dautruong_xd;

	public Sprite s_back_52fun;
	public Sprite s_chat_52fun;
	public Sprite s_setting_52fun;
	public Sprite bgInfo_dautruong;

	int newStake = 0;

	// Use this for initialization
	void Start ()
	{
	}

	// call/raise or check/bet
	public void showPokerFuntionsOnTurn (int CheckCallOrAllIn)
	{
		PokerFuntionsOnTurn.gameObject.SetActive (true);
		btn_f1.gameObject.SetActive (true);
		btn_f2.gameObject.SetActive (true);
		btn_f3.gameObject.SetActive (true);

		switch (CheckCallOrAllIn) {
		case 0:
//				Debug.Log("Check or Bet");
			btn_f2.GetComponent<Image> ().sprite = sprite_btn_check;
			btn_f3.GetComponent<Image> ().sprite = sprite_btn_bet;
			break;
		case 1:
//				Debug.Log("Call or Raise");
			btn_f2.GetComponent<Image> ().sprite = sprite_btn_call;
			btn_f3.GetComponent<Image> ().sprite = sprite_btn_raise;
			break;
		case 2:
//				Debug.Log("All in");
			btn_f2.gameObject.SetActive (false);
			btn_f3.GetComponent<Image> ().sprite = sprite_btn_allin;
			break;
		default:
			break;
		}
	}

	public void showPokerFuntionsOthersTurn (int CheckCallOrAllIn)
	{
		PokerFuntionsOnTurn.gameObject.SetActive (false);
		pokerFuntionsOthersTurn.show (CheckCallOrAllIn);
	}

	public void hidePokerFunctionsOnFinish ()
	{
		PokerFuntionsOnTurn.gameObject.SetActive (false);
		pokerFuntionsOthersTurn.hide ();
	}

	public void updateRaiseOptionPoker (int minStake, int maxStake)
	{
		raiseOptionControl.updateValues (minStake, maxStake);
	}

	public int getPokerStakeValue ()
	{
		return raiseOptionControl.getStakeValue ();
	}

	public PokerFuntionsOthersTurn.AutoState getAutoState ()
	{
		return pokerFuntionsOthersTurn.autoState;
	}

	public void sendShowGameSettingPanel(){
		SoundManager.instance.playButtonClicked ();
		Game game = GameApplication.game;
		if(game.thisPlayer.Equals(game.hostPlayer)){
			if(game.state == Game.State.WAITING){
				var data = new JSONClass ();
				data ["evt"] = "pctable";
				GameApplication.cubeia.sendService (data);
				SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
			} else {
				SuperScene.instance.showInfoDialog("Mức cược bàn chỉ được thay đổi khi ván bài chưa bắt đầu.");
			}
		} else {
			SuperScene.instance.showInfoDialog("Bạn phải là chủ bàn mới chỉnh sửa được mức cược bàn chơi.");
		}
	}

	public void showGameSettingPanel(){
		Debug.Log("showGameSettingPanel");
		SuperScene.instance.dismissWaittingDialog ();
		LeanTween.moveLocalX(gameSettingPanel, - 640f, 0.3f);
		Game game = GameApplication.game;
		GameScene gameScene = GameApplication.gameScene;
		gameSettingPanel.transform.Find("Value").GetComponent<Text>().text = "$" + Utils.formatNumber(game.stake);
		Slider slider = gameSettingPanel.transform.Find("Slider").GetComponent<Slider>();

		int count = TableGame.tableOptionList.Count;
		float step = 1f/(count-1);
		int selectedIndex = 0;
		for(int i = 0; i<count; i++){
			if(TableGame.tableOptionList[i].stakevalue.Equals(game.stake))
		    {
				selectedIndex = i;
				break;
			}
		}

		slider.value = step * selectedIndex;
	}

	public void hideGameSettingPanel(){
		LeanTween.moveLocalX(gameSettingPanel, -600f - 640f, 0.3f);
	}

	public void updateGameSettingSliderValue(float value){
		try {
			Slider slider = gameSettingPanel.transform.Find("Slider").GetComponent<Slider>();
			
			int count = TableGame.tableOptionList.Count;
			float step = 1f/(count-1);
			int selectedIndex = (int)(value/step + 0.5f);

			newStake = TableGame.tableOptionList[selectedIndex].stakevalue;
			gameSettingPanel.transform.Find("Value").GetComponent<Text>().text = "$" + Utils.formatNumber(newStake);
			
			slider.value = step * selectedIndex;
		} catch (System.ArgumentOutOfRangeException e) {
			Debug.LogWarning("ArgumentOutOfRangeException");
		} catch (System.IndexOutOfRangeException e) {
			Debug.LogWarning("IndexOutOfRangeException");
		} catch (UnityException e) {
			Debug.LogWarning("UnityException");
		}
	}

	public void newTableSettingRequest ()
	{
		JSONClass o = new JSONClass();
		o["evt"] = "setting";
		o["M"].AsInt = newStake;
		o["AG"].AsInt = newStake * 10;
		o["Vip"].AsInt = 0;
		o["T"].AsInt = 0;
		if(GameApplication.game is GameChan){
			o["F"].AsInt = ((GameChan)GameApplication.game).denlang;
			o["G"].AsInt = ((GameChan)GameApplication.game).huongdan;
		}
		GameApplication.cubeia.sendDataGame(o);
	}

	public void showTableGameDT(int mark){
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
//			if(mark >= ScreenList.markvip){
//			GameApplication.gameScene.controllerControl.bgControl.bg_tienlen.FindChild("Ban vip").gameObject.SetActive(true);
//			}
		}
	}
}
