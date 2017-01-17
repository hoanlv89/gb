using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class TableListControl : MonoBehaviour
{
	public Transform TableItem;

	[SerializeField] Text tt_name, tt_id, tt_stake, tt_load;
	
	// Use this for initialization
	void Start()
	{
		init();
	}

	void init()
	{
		tt_name.text = Strings.instance.lobby_tablelist_name;
		tt_id.text = Strings.instance.lobby_tablelist_id;
		tt_stake.text = Strings.instance.lobby_tablelist_stake;
		tt_load.text = Strings.instance.lobby_tablelist_load;
	}

	public void updateListItem(List<TableGame> tableList)
	{
		foreach (Transform child in transform) {
			GameObject.Destroy(child.gameObject);
		}
		for (int i = 0; i<tableList.Count - 1; i++) {
			for (int j = i; j<tableList.Count; j++) {
				TableGame iTableGame = tableList[i];
				TableGame jTableGame = tableList[j];
				if ((iTableGame.mark < jTableGame.mark) 
				    || ((iTableGame.mark == jTableGame.mark) && 
				    ((float)iTableGame.plNames.Count/iTableGame.capacity > (float)jTableGame.plNames.Count/jTableGame.capacity))) {
					TableGame tTableGame = jTableGame;
					tableList[j] = tableList[i];
					tableList[i] = tTableGame;
				}
			}
		}
		for (int i = 0; i<tableList.Count; i++) {
			AddNewItem(tableList [i], i);
		}
	}
	
	void AddNewItem(TableGame tableGame, int index)
	{
		RectTransform rect = (RectTransform)Instantiate(TableItem);
		rect.transform.SetParent(this.transform, false);


		Text tv_name = rect.Find("name").GetComponent<Text>();
		tv_name.text = tableGame.name;
		Text tv_id = rect.Find("id").GetComponent<Text>();
		tv_id.text = "" + tableGame.id;
		Text tv_stake = rect.Find("stake").GetComponent<Text>();
		tv_stake.text = Utils.formatCurrency(tableGame.mark);
		Text tv_load = rect.Find("load").GetComponent<Text>();
		tv_load.text = tableGame.plNames.Count + "/" + tableGame.capacity;

		if(GameApplication.gameApp.Equals(GameApplication.GameApp.DauTruong)){
			if (index % 2 == 0) {
				rect.GetComponent<Image>().color = new Color32(69, 69, 69, 180);
			} else {
				rect.GetComponent<Image>().color = new Color32(111, 92, 82, 180);
			}

			if (index % 2 == 0) {
				rect.GetComponent<Image>().color = new Color32(0, 0, 0, 0);
			} else {
				rect.GetComponent<Image>().color = new Color32(0, 0, 0, 80);
			}
		} else if(GameApplication.gameApp.Equals(GameApplication.GameApp.G3C)){
		} else if(GameApplication.gameApp.Equals(GameApplication.GameApp.G52Fun)){
			if (index % 2 == 0) {
				rect.GetComponent<Image>().color = new Color32(255, 255, 255, 20);
			} else {
				rect.GetComponent<Image>().color = new Color32(30, 30, 30, 80);
			}
		}

		Button button = rect.GetComponent<Button>();
		button.onClick.AddListener(delegate {
			SoundManager.instance.playButtonClicked();
			if (GameApplication.user.ag < tableGame.agmin) {
				SDialog dialog = SuperScene.instance.showDialog (DialogInfo.ThreeChoicesDialog);
				string content = Strings.instance.dialog_common_join_game_not_enough_gold;
				dialog.content.text = content.Replace ("%gold%", Utils.formatNumber (tableGame.agmin) + " " + GameApplication.COIN); 
				dialog.cancel.onClick.AddListener (delegate {
					dialog.dismiss ();
				});
				dialog.negativeText.text = Strings.instance.dialog_common_join_game_dialog_op1;
				dialog.negative.onClick.AddListener (delegate {
					dialog.dismiss ();
				});
				// moi ban be
				dialog.neutralText.text = Strings.instance.dialog_common_join_game_dialog_op2;
				dialog.neutral.onClick.AddListener (delegate {
					dialog.dismiss ();
					SceneControl.showInviteFriendOnStart = true;
					Application.LoadLevel (GameApplication.HOMESCENE);
				});
				// mua gold
				dialog.positiveText.text = Strings.instance.dialog_common_join_game_dialog_op3;
				dialog.positive.onClick.AddListener (delegate {
					dialog.dismiss ();
					((LobbyScene)SuperScene.instance).gotoPaymentScreen ();
				});
			} else {
				GameApplication.cubeia.sendJoinTable (tableGame.id); 
				SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
				//			Debug.Log("request join table : " + tableGame.id); 
			}
		}); 

	}
}
