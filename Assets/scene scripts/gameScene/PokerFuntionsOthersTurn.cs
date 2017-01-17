using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class PokerFuntionsOthersTurn : MonoBehaviour
{
	[SerializeField]
	Button
		f1, f2, f3, f4;
	[SerializeField]
	Sprite
		sprite_sbtn_fold, sprite_sbtn_fold_selected;
	[SerializeField]
	Sprite
		sprite_sbtn_check, sprite_sbtn_check_selected;
	[SerializeField]
	Sprite
		sprite_sbtn_checkfold, sprite_sbtn_checkfold_selected;
	[SerializeField]
	Sprite
		sprite_sbtn_call, sprite_sbtn_call_selected;
	[SerializeField]
	Sprite
		sprite_sbtn_raise, sprite_sbtn_raise_selected;
	[SerializeField]
	Sprite
		sprite_allin, sprite_allin_selected;
	int CheckCallOrAllIn;
	public enum AutoState
	{
		none,
		fold,
		checkorask,
		checkorfold,
		callany,
		allin
	}

	public AutoState autoState = AutoState.none;

	public void show(int CheckCallOrAllIn)
	{
		this.CheckCallOrAllIn = CheckCallOrAllIn;
		if (gameObject.activeSelf) {
			// cap nhat lai trang thai cac nut theo CheckCallOrAllIn
//			applySpriteState();

			// 
			if(autoState == AutoState.callany)
				auto_callany();
			if(autoState == AutoState.checkorask)
				auto_check();
			if(autoState == AutoState.fold)
				auto_fold();
			if(autoState == AutoState.checkorfold)
				auto_checkorfold();
		} else {
			gameObject.SetActive(true);
			autoState = AutoState.none;
			applySpriteState();
		}
	}

	void applySpriteState()
	{
		f1.onClick.RemoveAllListeners();
		f2.onClick.RemoveAllListeners();
		f3.onClick.RemoveAllListeners();
		f4.onClick.RemoveAllListeners();
		f1.gameObject.SetActive(true);
		f2.gameObject.SetActive(true);
		f3.gameObject.SetActive(true);
		f4.gameObject.SetActive(true);
		
		f1.GetComponent<Image>().sprite = sprite_sbtn_fold;
		f1.GetComponentInChildren<Text>().text = Strings.instance.gameplay_poker_fold;
		f1.onClick.AddListener(delegate {
			auto_fold();
		});
		
		f2.GetComponent<Image>().sprite = sprite_sbtn_checkfold;
		f2.GetComponentInChildren<Text>().text = Strings.instance.gameplay_poker_checkfold;
		f2.onClick.AddListener(delegate {
			auto_checkorfold();
		});
		
		f3.GetComponent<Image>().sprite = sprite_sbtn_check;
		f3.GetComponentInChildren<Text>().text = Strings.instance.gameplay_poker_check;
		f3.onClick.AddListener(delegate {
			auto_check();
		});
		
		f4.GetComponent<Image>().sprite = sprite_sbtn_call;
		f4.GetComponentInChildren<Text>().text = Strings.instance.gameplay_poker_callany;
		f4.onClick.AddListener(delegate {
			auto_callany();
		});

		if (CheckCallOrAllIn == 0) {
			// Debug.Log("Check or Bet");
		} else if (CheckCallOrAllIn == 1) {
			// Debug.Log("Call or Raise");
			f3.GetComponent<Image>().sprite = sprite_sbtn_call;
			f3.GetComponentInChildren<Text>().text = Strings.instance.gameplay_poker_call;
		} else if (CheckCallOrAllIn == 2) {
			// Debug.Log("All in");
			f2.gameObject.SetActive(false);
			f3.gameObject.SetActive(false);
			
			f4.GetComponent<Image>().sprite = sprite_allin;
			f4.GetComponentInChildren<Text>().text = Strings.instance.gameplay_poker_allin;
		}
	}

	public void hide()
	{
		gameObject.SetActive(false);
	}

	public void auto_callany()
	{
		applySpriteState();
		f4.GetComponent<Image>().sprite = sprite_sbtn_call_selected;
		f4.onClick.RemoveAllListeners();
		f4.onClick.AddListener(delegate {
			cancel_auto_callany();
		});
		autoState = AutoState.callany;
	}
	
	public void cancel_auto_callany()
	{
		applySpriteState();
		autoState = AutoState.none;
	}
	
	public void auto_fold()
	{
		applySpriteState();
		f1.GetComponent<Image>().sprite = sprite_sbtn_fold_selected;
		f1.onClick.RemoveAllListeners();
		f1.onClick.AddListener(delegate {
			cancel_auto_fold();
		});
		autoState = AutoState.fold;
	}
	
	public void cancel_auto_fold()
	{
		applySpriteState();
		autoState = AutoState.none;
	}
	
	public void auto_check()
	{
		applySpriteState();
		f3.GetComponent<Image>().sprite = sprite_sbtn_check_selected;
		f3.onClick.RemoveAllListeners();
		f3.onClick.AddListener(delegate {
			cancel_auto_check();
		});
		autoState = AutoState.checkorask;
	}
	
	public void cancel_auto_check()
	{
		applySpriteState();	
		autoState = AutoState.none;
	}

	public void auto_checkorfold()
	{
		applySpriteState();
		f2.GetComponent<Image>().sprite = sprite_sbtn_checkfold_selected;
		f2.onClick.RemoveAllListeners();
		f2.onClick.AddListener(delegate {
			cancel_auto_checkorfold();
		});
		autoState = AutoState.checkorfold;
	}
	
	public void cancel_auto_checkorfold()
	{
		applySpriteState();	
		autoState = AutoState.none;
	}
	/// <summary>
	/// ///
	/// </summary>

//	public void send_auto_callany()
//	{
////		var json = new JSONClass();
////		json ["evt"] = "autoAnyCall";
////		GameApplication.cubeia.sendDataGame(json);
//
//		autoState = AutoState.callany;
//	}
//
//	public void send_cancel_auto_callany()
//	{
////		var json = new JSONClass();
////		json ["evt"] = "un_autoAnyCall";
////		GameApplication.cubeia.sendDataGame(json);
//
//		autoState = AutoState.none;
//	}
//
//	public void send_auto_fold()
//	{
//		var json = new JSONClass();
//		json ["evt"] = "autoFold";
//		GameApplication.cubeia.sendDataGame(json);
//	}
//
//	public void send_cancel_auto_fold()
//	{
//		var json = new JSONClass();
//		json ["evt"] = "un_autoFold";
//		GameApplication.cubeia.sendDataGame(json);
//	}
//
//	public void send_auto_check()
//	{
//		var json = new JSONClass();
//		json ["evt"] = "autoCheck";
//		GameApplication.cubeia.sendDataGame(json);
//	}
//
//	public void send_cancel_auto_check()
//	{
//		var json = new JSONClass();
//		json ["evt"] = "un_autoCheck";
//		GameApplication.cubeia.sendDataGame(json);		
//	}
}
