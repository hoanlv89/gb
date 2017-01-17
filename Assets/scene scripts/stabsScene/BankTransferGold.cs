using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using System.Collections.Generic;
using System;

public class BankTransferGold : MonoBehaviour
{
	public static List<int> valuesList;
	public static int vipmin;
	public static List<int> fees;

	private int selectedValue = 0;

	public InputField input;
	public RectTransform content;
	public Button confirm;
	public Text lb_acc, lb_value, lb_fee, lb_select_item, lb_btn_confirm;

	//prefab
	public RectTransform pfBankTransferItem;

	public void Start ()
	{
		init ();
//		if(GameApplication.user.vip >= vipmin) {
			updateView();
//			msg.SetActive(false);
//		} else {
//			foreach(Transform tr in transform){
//				tr.gameObject.SetActive(false);
//			}
//			msg.SetActive(true);
//		}
	}

	void init ()
	{
		// chinh ve vi tri giua
		((RectTransform)transform).anchoredPosition = new Vector2(0,0);

		lb_acc.text = Strings.instance.stabs_bank_acc;
		lb_value.text = Strings.instance.stabs_bank_value;
		lb_fee.text = Strings.instance.stabs_bank_fee;
		lb_select_item.text = Strings.instance.stabs_bank_select;
		lb_btn_confirm.text = Strings.instance.stabs_bank_btn_confirm;

		confirm.onClick.AddListener (delegate {
			transfer();
		});
	}

	private void transfer ()
	{
		JSONClass data = new JSONClass ();
		data ["evt"] = "10";
		data ["AG"].AsInt = selectedValue; // 10.11.12
		data ["Name"] = input.text;
		if(selectedValue < 1 || string.IsNullOrEmpty(input.text)){
			SuperScene.instance.showInfoDialog(Strings.instance.stabs_bank_error);
			return;
		}
		SuperScene.instance.showWaittingDialog("");
		if (GameApplication.cubeia != null)
			GameApplication.cubeia.sendService (data);
	}

	public void updateView ()
	{
		if(GameApplication.user == null || fees == null || valuesList == null)
			return;
			
		lb_fee.text = Strings.instance.stabs_bank_fee + fees[GameApplication.user.vip] + "%";

		for (int i = 0; i<content.childCount; i++) {
			Transform child = content.GetChild (i);
			Destroy (child.gameObject);
		}

		foreach (int item in valuesList) {
			int value = item;
			RectTransform rect = GameObject.Instantiate (pfBankTransferItem);
			rect.SetParent (content, false);

			rect.FindChild("Text").GetComponent<Text>().text = Utils.formatNumber(value)+ " " + GameApplication.COIN;

			rect.GetComponent<Button> ().onClick.AddListener (delegate {
				selectedValue = value;
				lb_value.text = Utils.formatNumber(value) + " " + GameApplication.COIN;
			});
		}
	}
}

