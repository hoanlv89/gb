using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Facebook.Unity;
using System.Collections.Generic;

public class CTPaymentCard : MonoBehaviour
{

	public Button BtnViettel, BtnMobi, BtnVina;
	public Button BtnBuy;
	public Text TextPIN, TextSerial, TextBuy, inputPIN, inputSerial;
	public Text message;
	Image ImgViettel, ImgMobi, ImgVina;
	string selectedProvider;

	// Use this for initialization
	void Start ()
	{
		init ();
	}
	
	void init ()
	{
		if(PaymentManager.kmMessage.Length> 5 && message != null)
			message.text = PaymentManager.kmMessage;

		ImgViettel = BtnViettel.GetComponent<Image> ();
		ImgMobi = BtnMobi.GetComponent<Image> ();
		ImgVina = BtnVina.GetComponent<Image> ();

		TextPIN.text = Strings.instance.gameplay_payment_card_pin;
		TextSerial.text = Strings.instance.gameplay_payment_card_serial;
		TextBuy.text = Strings.instance.gameplay_payment_card_buy;

		setSelectedImg (null);

		BtnViettel.onClick.AddListener (delegate {
			selectedProvider = "VIETTEL";
			setSelectedImg (ImgViettel);
		});
		BtnMobi.onClick.AddListener (delegate {
			selectedProvider = "MOBIFONE";
			setSelectedImg (ImgMobi);
		});
		BtnVina.onClick.AddListener (delegate {
			selectedProvider = "VINAPHONE";
			setSelectedImg (ImgVina);
		});

		BtnBuy.onClick.AddListener (delegate {
			if (selectedProvider == null) {
				SuperScene.instance.showInfoDialog (Strings.instance.dialog_alert_payment_miss_provider);
				return;
			}
			string pin = inputPIN.text;
			string serial = inputSerial.text;
			if (pin == null || pin.Length < 1) {
				SuperScene.instance.showInfoDialog (Strings.instance.dialog_alert_payment_miss_pin);
				return;
			}
			if (serial == null || serial.Length < 1) {
				SuperScene.instance.showInfoDialog (Strings.instance.dialog_alert_payment_miss_serial);
				return;
			}

			napthe (pin, serial, selectedProvider);
		});
	}

	void setSelectedImg (Image img)
	{
		byte alpha = 80;
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
			alpha = 125;
		}
		if(GameApplication.gameApp == GameApplication.GameApp.G3C){
			alpha = 80;
		}
		ImgViettel.color = new Color32 (255, 255, 255, alpha);
		ImgMobi.color = new Color32 (255, 255, 255, alpha);
		ImgVina.color = new Color32 (255, 255, 255, alpha);
		if (img != null)
			img.color = new Color (255, 255, 255, 255);
	}

	void napthe (string pin, string serial, string type)
	{
		if(string.IsNullOrEmpty(PaymentManager.url_payment_card))
		{
			Debug.LogError("Loi link nap card.");
			return;
		}

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPurchaseCardConfirm, (float)1f, DSTFBEvent.defaultParams);

		string url = PaymentManager.url_payment_card
				.Replace("%name%", GameApplication.user.name)
				.Replace("%pin%", pin)
				.Replace("%serial%", serial)
				.Replace("%type%", type);

		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			Dictionary<string, object> fbparams = new Dictionary<string, object>();
			fbparams.Add("username", GameApplication.user.name);
			fbparams.Add("vip", GameApplication.user.vip);
			fbparams.Add("gold", GameApplication.user.ag);
			fbparams.Add("type", "Card "+ type);

//			FB.LogAppEvent(Facebook.Unity.AppEventName.Purchased, 1, fbparams);
//			if(GameApplication.DEBUG_ON)
//				result = pin.Substring(pin.Length - 2, 2);
			Debug.Log (url + " result: " + result);
			string msg = "";
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong || 
			   	GameApplication.gameApp == GameApplication.GameApp.G52Fun ){
				int iresult = 0;
				if(result.Length > 2)
					result = result.Substring (0, 2);
				if (int.TryParse (result, out iresult) == false) {
					iresult = 10;
					SuperScene.instance.showInfoDialog (Strings.instance.error_payment_card_cant_do_request);
					return;
				}
				if (iresult == 0) {
					msg = Strings.instance.error_payment_card_OK;
					GameApplication.cubeia.sendUAG ();

					logFBEventPaymentOK(type);
				} else if (iresult == 2) {
					msg = Strings.instance.error_payment_card_wrong_info;
				} else if (iresult == 3) {
					msg = Strings.instance.error_payment_card_has_been_used;
				} else if (iresult == 8) {
					msg = Strings.instance.error_payment_card_invalid;
				} else if (iresult == 9) {
					msg = Strings.instance.error_payment_card_banned_account;
				} else {
					msg = Strings.instance.error_payment_card_invalid;
				}
			} else if(GameApplication.gameApp == GameApplication.GameApp.G3C){
				if (result.Equals("00", System.StringComparison.CurrentCultureIgnoreCase)) {
					msg = Strings.instance.error_payment_card_OK;
					GameApplication.cubeia.sendUAG();
					logFBEventPaymentOK(type);
				} else if (result.Equals("0", System.StringComparison.CurrentCultureIgnoreCase)) {
					msg = Strings.instance.error_payment_card_invalid;
				} else if (result.Equals("-1", System.StringComparison.CurrentCultureIgnoreCase)) {
					msg = Strings.instance.error_payment_card_banned_account;
				} else if (result.Equals("2", System.StringComparison.CurrentCultureIgnoreCase)) {
					msg = Strings.instance.error_payment_card_wrong_info;
				} else {
					msg = Strings.instance.error_payment_card_invalid;
				}
			} else {
				Debug.LogError("Chua lam thanh toan");

			}
			SuperScene.instance.showInfoDialog (msg);
		};
		Utils.Executor onFailed = delegate {
			SuperScene.instance.showInfoDialog (Strings.instance.error_payment_card_cant_do_request);
		};
		SuperScene.instance.doHTTPRequest (url, onSuccess, onFailed);

//		logFBEventStartPaymentCard (type);
	}

	public void logFBEventPaymentOK(string type) {
		var fbparams = new Dictionary<string, object>();
		fbparams["type"] = type;
		fbparams.Add("username", GameApplication.user.name);
		fbparams.Add("vip", GameApplication.user.vip);
		fbparams.Add("gold", GameApplication.user.ag);
//		FB.LogAppEvent("payment_card_done", (float)1, fbparams);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPurchaseCardSuccess, (float)1f, DSTFBEvent.defaultParams);
	}

	public void logFBEventStartPaymentCard(string type) {
		var fbparams = new Dictionary<string, object>();
		fbparams["type"] = type;
		fbparams.Add("username", GameApplication.user.name);
		fbparams.Add("vip", GameApplication.user.vip);
		fbparams.Add("gold", GameApplication.user.ag);
		FB.LogAppEvent("payment_card_call", (float)1, fbparams);
	}
}
