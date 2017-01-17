using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class TableList : MonoBehaviour
{
	public RectTransform pfItem;
	public RectTransform gridView;
	public Sprite point_wait;
	public Sprite point_wait_xd;
	public Sprite table_xocdia;
	public ShowHideTable showHideTable;
	public ScrollRect scrollRect;
//	public ScrollRect scrollRect;

	List<TableGame> tableList = new List<TableGame> ();
	public Text status;
	const int VIEW_RANGE = 12;
	int lastCenterIndex = 0;

	// Use this for initialization
	Image[] pl = new Image[9];
	Image[] pl_xocdia = new Image[9];
	GridLayoutGroup gridview;

	void Start ()
	{
		// unity 5.2 phai lam cai tro nay, scroll rect de ngay tu dau thi grid view ko view dung
		if(GameApplication.gameApp.Equals(GameApplication.GameApp.G52Fun)){
			if(scrollRect == null)
				scrollRect = GetComponentInParent<ScrollRect>();
			scrollRect.enabled = false;
			gridview = GetComponent<GridLayoutGroup> ();
			float designWidth = SuperScene.instance.mainCanvas.GetComponent<CanvasScaler> ().referenceResolution.x;
			float ratio = Screen.width / (float)Screen.height;
			int designHeight = (int)(designWidth / ratio);

			int deltaHeight = designHeight - 720;
			gridview.spacing = new Vector2 (20, ((deltaHeight / 2 < 15) ? 15 : (deltaHeight / 2)  ));
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void addTable (List<TableGame> tableList)
	{
		this.tableList = tableList;
		foreach (Transform child in transform) {
			GameObject.Destroy (child.gameObject);
		}
		for (int i = 0; i<tableList.Count - 1; i++) {
			for (int j = i; j<tableList.Count; j++) {
				TableGame iTableGame = tableList [i];
				TableGame jTableGame = tableList [j];
				if ((iTableGame.mark < jTableGame.mark) 
					|| ((iTableGame.mark == jTableGame.mark) && 
					((float)iTableGame.plNames.Count / iTableGame.capacity > (float)jTableGame.plNames.Count / jTableGame.capacity))) {
					TableGame tTableGame = jTableGame;
					tableList [j] = tableList [i];
					tableList [i] = tTableGame;
				}
			}
		}

		for (int i = 0; i < tableList.Count; i++) {
			AddNewItem (tableList [i], i);
		}

		scrollRect.enabled = true;
		scrollRect.horizontalScrollbar.value = 0f;
	}

	void AddNewItem (TableGame tableGame, int index)
	{
		RectTransform rect = (RectTransform)Instantiate (pfItem);
		rect.transform.SetParent (this.transform, false);
		tableGame.view = rect;

		Text tv_stake = rect.Find ("stake").GetComponent<Text> ();
		tv_stake.text = Utils.formatCurrency (tableGame.mark);
		Text tv_load = rect.Find ("info").GetComponent<Text> ();
		tv_load.text = tableGame.plNames.Count + "/" + tableGame.capacity;
		for (int i=0; i<pl.Length; i++) {
			pl [i] = rect.Find ("pl" + (i + 1)).GetComponent<Image> ();
			pl_xocdia [i] = rect.Find ("p" + (i + 1)).GetComponent<Image> ();
		}
		int size = tableGame.plNames.Count;
		int max = tableGame.capacity;
		if (GameApplication.cubeia.gameId == GameType.XOCDIA) {
			for (int i=0; i<9; i++) {
				pl [i].GetComponent<Image> ().enabled = false;
				pl_xocdia [i].GetComponent<Image> ().enabled = true;
			}
			if (max < 5) {
				for (int i=4; i<9; i++) {
					pl_xocdia [i].GetComponent<Image> ().enabled = false;
				}
			}
			if (max == 5) {
				for (int i=5; i<9; i++) {
					pl_xocdia [i].GetComponent<Image> ().enabled = false;
				}
			}
			
			for (int i=0; i<9; i++) {
				if (i > size - 1) {
					pl_xocdia [i].GetComponent<Image> ().sprite = point_wait_xd;
				}
			}
			rect.Find ("table").GetComponent<Image> ().enabled = false;
			rect.Find ("tableXD").GetComponent<Image> ().enabled = true;
			tv_stake.rectTransform.anchoredPosition = new Vector3 (0, 0, 0);
			tv_load.enabled = false;
		} else {
			rect.Find ("tableXD").GetComponent<Image> ().enabled = false;
			for (int i=0; i<9; i++) {
				pl_xocdia [i].GetComponent<Image> ().enabled = false;
			}
			if (max < 5) {
				for (int i=4; i<9; i++) {
					pl [i].GetComponent<Image> ().enabled = false;
				}
			}
			if (max == 5) {
				for (int i=5; i<9; i++) {
					pl [i].GetComponent<Image> ().enabled = false;
				}
			}
			
			for (int i=0; i<9; i++) {
				if (i > size - 1) {
					pl [i].GetComponent<Image> ().sprite = point_wait;
				}
			}
		}
		Button button = rect.GetComponent<Button> ();
		button.onClick.AddListener (delegate {
			SoundManager.instance.playButtonClicked ();
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

		// an nhung ban co index lon
		if (index > VIEW_RANGE - 1) {
			setShowTable (index, false);
		}

	}

	public void onScrollRectValueChange (Vector2 vec2)
	{
		if (tableList.Count < VIEW_RANGE)
			return;

		int centerIndex = (int)(vec2.x * (tableList.Count - VIEW_RANGE)) + 6;
		status.text = "pos: " + vec2.x + " a: " + lastCenterIndex + " b: " + centerIndex;

		if (centerIndex != lastCenterIndex) {
			int delta = centerIndex - lastCenterIndex;

			int max = lastCenterIndex + 6;
			int min = centerIndex - 6;
			if (delta > 0) {
				max = centerIndex + 6;
				min = lastCenterIndex - 6;
			}

			for (int i = min; i <= max; i++) {
				// an nhung ban thuoc vung hien thi cu nhung khong thuoc vung hien thi moi
				if ((i >= lastCenterIndex - 6 && i <= lastCenterIndex + 6) &&
					!(i >= centerIndex - 6 && i <= centerIndex + 6)) {
					setShowTable (i, false);
				}

				// show nhung ban thuoc vung hien thi moi nhung ko thuoc vung hien thi cu
				if (!(i >= lastCenterIndex - 6 && i <= lastCenterIndex + 6) &&
					(i >= centerIndex - 6 && i <= centerIndex + 6)) {
					setShowTable (i, true);
				}
			}


			// gan lastCenterIndex moi
			lastCenterIndex = centerIndex;
		}

	}

	bool setShowTable (int index, bool isShow)
	{
		if (index < tableList.Count && index >= 0) {
//			tableList[index].view.gameObject.SetActive(isShow);
			foreach (RectTransform rtf in tableList[index].view) {
				rtf.gameObject.SetActive (isShow);
			}
			return true;
		} else {
			return false;
		}
	}

	public List<TableGame> sortTable (List<TableGame> tableList)
	{
		List<TableGame> sortTable = new List<TableGame> ();
		for (int j = 0; j<tableList.Count; j++) {
			if (tableList [j].capacity != tableList [j].plNames.Count) {
				sortTable.Add (tableList [j]);
			}
		}
		return sortTable;
	}
}

