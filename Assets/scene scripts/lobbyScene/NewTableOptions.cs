using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;

public class NewTableOptions : MonoBehaviour
{
	[SerializeField]
	Text
		title;
	[SerializeField]
	Text
		stakeValues;
	[SerializeField]
	Text
		stakeText;
	[SerializeField]
	Text
		createNewTableText;
	[SerializeField]
	Slider
		slider;

	public Text text_taoban, text_songuoichoi;

	public Button newTableBtn;

	public Slider capacitySlider;
	public ToggleGroup toogleGroup;
	public Text banlance;
	public GameObject chanFunctions, xitoFunctions;
	public Toggle tg_ga, tg_hgdan, tg_denlang, tg_xito_tt, tg_xito_cbt;
	List<TableOptionItem> optionsList;
	List<int> songuoichois;
	float increasePercent = 0f;
	float increaseCapPercent = 0f;
	int selectedCap = 4;
	public Text tvSelectedCap;

	bool capOptionOnDrag = false;
	public void setCapOptionOnDrag(){
		capOptionOnDrag  = true;
	}
	public void setCapOptionEndDrag(){
		capOptionOnDrag  = false;
	}
	// Use this for initialization
	void Start ()
	{
		slider.value = 0f;
		capacitySlider.value = 1f;

		// lam giao dien
		title.text = Strings.instance.common_tableoptions_title;
		createNewTableText.text = Strings.instance.common_tableoptions_create_button_text;
		stakeText.text = Strings.instance.common_tableoptions_stake_text;

		if(GameApplication.cubeia.gameId == GameType.CHAN){
			chanFunctions.SetActive(true);
		} else if(GameApplication.cubeia.gameId == GameType.XITO){
			xitoFunctions.SetActive(true);
		} else {
			chanFunctions.SetActive(false);
			xitoFunctions.SetActive(false);
		}

		if (text_taoban != null)
			text_taoban.text = Strings.instance.common_tableoptions_title;

		if (text_taoban != null)
			text_songuoichoi.text = Strings.instance.common_tableoptions_create_button_sonnguoichoi;
	}

	public void newTable ()
	{
		SoundManager.instance.playButtonClicked ();
		TableOptionItem item = getCurrentOption ();
		if (item.ennable) {
			List<Param> adparams = new List<Param>();
			if(GameApplication.cubeia.gameId == GameType.CHAN){
				adparams.Add (new Param ("Type", (byte)Enums.ParameterType.INT, Utils.IntToByteArray ((tg_ga != null && tg_ga.isOn) ? 1: 0)));
				adparams.Add (new Param ("Guide", (byte)Enums.ParameterType.INT, Utils.IntToByteArray ((tg_hgdan != null && tg_hgdan.isOn) ? 1: 0)));
				adparams.Add (new Param ("Fail", (byte)Enums.ParameterType.INT, Utils.IntToByteArray ((tg_denlang != null && tg_denlang.isOn) ? 1: 0)));
			}

			if(GameApplication.cubeia.gameId == GameType.XITO){
				adparams.Add (new Param ("Type", (byte)Enums.ParameterType.INT, Utils.IntToByteArray ((tg_xito_cbt != null && tg_xito_cbt.isOn) ? 3: 0)));
			}

			GameApplication.cubeia.sendCreateGame (item.stakevalue, selectedCap, adparams);

			SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
		} else {
			SDialog dialog = SuperScene.instance.showDialog (DialogInfo.OneChoiceDialog);
			dialog.content.text = Strings.instance.dialog_common_tableoptions_error_not_enough_gold;
			dialog.positiveText.text = Strings.instance.dialog_common_ok;
			dialog.positive.onClick.AddListener (delegate {
				dialog.dismiss ();
			});
		}
	}

	public void updateCapacity(float value){
		int count = songuoichois.Count;
		increasePercent = 1f / count;
//		increaseCapPercent = 1f / (count);
		int index = (int)(value / increasePercent);
		if (index < 0)
			index = 0;
		if (index > count - 1)
			index = count - 1;
		selectedCap = songuoichois [index];

		float vi = (float)index/(count-1);
		// kiem tra khi khong cham thi nhay ve vi tri nay
		capacitySlider.value = vi;

		tvSelectedCap.text = "" + selectedCap;
	}

	public void plus ()
	{
		float cvalue = slider.value;
		if (increasePercent > 0f)
			cvalue = cvalue + increasePercent;
		if (cvalue > 1f)
			cvalue = 1f;
		slider.value = cvalue;
	}

	public void plusCapacity()
	{
		float cvalue = capacitySlider.value;
		if (increaseCapPercent > 0f)
			cvalue = cvalue + increaseCapPercent;
		if (cvalue > 1f)
			cvalue = 1f;
		capacitySlider.value = cvalue;
	}

	public void minus ()
	{
		float cvalue = slider.value;
		if (increasePercent > 0f)
			cvalue = cvalue - increasePercent;
		if (cvalue < 0f)
			cvalue = 0f;
		slider.value = cvalue;
	}

	public void minusCapacity ()
	{
		float cvalue = capacitySlider.value;
		Debug.Log ("cvalue truoc==> " + cvalue);
		if (increaseCapPercent > 0f)
			cvalue = cvalue - increaseCapPercent;
		if (cvalue < 0f)
			cvalue = 0f;
		Debug.Log ("cvalue sau==> " + cvalue);
		capacitySlider.value = cvalue;
	}

	private void setTestValues ()
	{
		List<TableOptionItem> list = new List<TableOptionItem> ();
		list.Add (new TableOptionItem (100, true, false));
		list.Add (new TableOptionItem (200, true, true));
		list.Add (new TableOptionItem (500, true, false));
		list.Add (new TableOptionItem (1000, true, false));
		list.Add (new TableOptionItem (2000, true, false));
		list.Add (new TableOptionItem (5000, true, false));
		list.Add (new TableOptionItem (10000, false, false));
		list.Add (new TableOptionItem (20000, false, false));
		setValues (list);
	}

	public void setValues (List<TableOptionItem> inputList)
	{
		optionsList = new List<TableOptionItem> ();
		optionsList.AddRange (inputList);
	}

	TableOptionItem getCurrentOption (float value)
	{
		increasePercent = 1f / optionsList.Count;
		increaseCapPercent = 1f / (songuoichois.Count-1);
		int index = (int)(value / increasePercent);
		if (index < 0)
			index = 0;
		if (index > optionsList.Count - 1)
			index = optionsList.Count - 1;
		return ((TableOptionItem)optionsList [index]);
	}

	TableOptionItem getCurrentOption ()
	{
		return getCurrentOption (slider.value);
	}

	public void updateSliderValue (float value)
	{
		if (optionsList == null || optionsList.Count < 1)
			return;

		TableOptionItem item = getCurrentOption (value);
		stakeValues.text = Utils.formatCurrency (item.stakevalue);

		if (item.ennable) {
			if(GameApplication.gameApp==GameApplication.GameApp.DauTruong){
				stakeValues.color = new Color32 (255, 255, 0, 255);
				newTableBtn.GetComponent<Image>().color = new Color32(255,255,255,255);
			} else {
				stakeValues.color = new Color32 (251, 255, 0, 255);
				newTableBtn.GetComponent<Image>().color = new Color32(255,255,255,255);
			}
		} else {
			if(GameApplication.gameApp==GameApplication.GameApp.DauTruong){
				stakeValues.color = new Color32 (165, 165, 165, 255);
				newTableBtn.GetComponent<Image>().color = new Color32(255,255,255,45);
			} else {
				stakeValues.color = new Color32 (255, 255, 255, 255);
				newTableBtn.GetComponent<Image>().color = new Color32(0,0,0,255);
			}
		}

		if(item.stakevalue >= 2000) {
			tg_hgdan.isOn = false;
		} else {
			tg_hgdan.isOn = true;
		}
	}

	public void show ()
	{
		gameObject.SetActive (true);
		toogleGroup.SetAllTogglesOff ();

		int size = 4;
		songuoichois = new List<int>{2,3,4};
		if (GameApplication.cubeia.gameId == GameType.XITO || GameApplication.cubeia.gameId == GameType.SAM){
			songuoichois = new List<int>{2,3,4,5};
			size = 5;
		}
		if (GameApplication.cubeia.gameId == GameType.LIENG || GameApplication.cubeia.gameId == GameType.POKER || GameApplication.cubeia.gameId == GameType.BACAY||GameApplication.cubeia.gameId == GameType.XOCDIA||GameApplication.cubeia.gameId == GameType.G9K)
		{
			songuoichois = new List<int>{2,3,4,5,6,7,8,9};
			size = 9;
		}


		banlance.text = Strings.instance.lobby_newtable_account_balance + "$" + Utils.formatNumber (GameApplication.user.ag);
	}

	public void dismiss ()
	{
		SoundManager.instance.playButtonClicked ();
		gameObject.SetActive (false);
	}
}

public class TableOptionItem
{
	public int stakevalue;
	public bool ennable;
	public bool suggest;

	public TableOptionItem (int stakevalue, bool ennable, bool suggest)
	{
		this.stakevalue = stakevalue;
		this.ennable = ennable;
		this.suggest = suggest;
	}
}