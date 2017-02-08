using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleJSON;

public class PaymentScene : SuperScene {

	public static string rawData;

	public const string IAP = "IAP";
	public const string CARD = "card";
	public const string SMS = "sms";

	public Image avatar;
	public Text username;
	public Text balance;

	public PaymentOption PO_IAP, PO_SMS, PO_Card;
	public ProviderOption ProviderOption1, ProviderOption2, ProviderOption3;
	public PaymentItemListView paymentItemListView;
	public GameObject providerOptionView, cardInputView;

	public InputField input_card_seri, input_card_code;

	PaymentOption[] paymentOptions;
	PaymentOption selectedPaymentOption;
	int selectedProviderIndex = 0;

	public override void Start ()
	{
		base.Start ();
		if (GameApplication.IsInitialized == false) {
			// go to the login scene
			Application.LoadLevel (GameApplication.LOGINSCENE);
			return;
		}

		LoadUserInfo ();

		IOSInAppPurchaseManager.OnPurchasesStateSettingsLoaded += OnPurchasesStateSettingsLoaded;

		if (rawData != null && rawData.Length > 0) {
			setData (rawData);
			paymentOptions = new [] {PO_IAP, PO_SMS, PO_Card};
			selectPaymentOptions (paymentOptions[0]);
		} else {
			Debug.LogError ("empty data");
		}
		// test
//		string rawData = "{ \"iap_items\": [ { \"itemid\": \"g88club.gold.tier1\", \"USD\": \"0.99 USD\", \"Chip\": \"60K Gold\", \"amount\": \"35\", \"oldChip\": \"50K\", \"plus\": \"+10K\", \"ccost\": 1, \"value\": 60000 }, { \"itemid\": \"g88club.gold.tier5\", \"USD\": \"4.99 USD\", \"Chip\": \"300K Gold\", \"amount\": \"177\", \"oldChip\": \"250K\", \"plus\": \"+50K\", \"ccost\": 5, \"value\": 300000 }, { \"itemid\": \"g88club.gold.tier10\", \"USD\": \"9.99 USD\", \"Chip\": \"600K Gold\", \"amount\": \"354\", \"oldChip\": \"500K\", \"plus\": \"+100K\", \"ccost\": 10, \"value\": 600000 }, { \"itemid\": \"g88club.gold.tier20\", \"USD\": \"19.99 USD\", \"Chip\": \"1.2M Gold\", \"amount\": \"709\", \"oldChip\": \"1M\", \"plus\": \"+200K\", \"ccost\": 20, \"value\": 1200000 }, { \"itemid\": \"g88club.gold.tier50\", \"USD\": \"49.99 USD\", \"Chip\": \"3M Gold\", \"amount\": \"1774\", \"oldChip\": \"2.5M\", \"plus\": \"+500K\", \"ccost\": 50, \"value\": 3000000 }, { \"itemid\": \"g88club.gold.tier100\", \"USD\": \"99.99 USD\", \"Chip\": \"6M Gold\", \"amount\": \"3549\", \"oldChip\": \"5M\", \"plus\": \"+1M\", \"ccost\": 100, \"value\": 6000000 } ], \"card_items\": [ { \"op\": \"VIETTEL\", \"items\": [ { \"old\": \"50K\", \"new\": \"60K Gold\", \"p\": \"+10K\", \"cost\": \"10K VND\", \"ccost\": 10000, \"value\": 60000 }, { \"old\": \"100K\", \"new\": \"120K Gold\", \"p\": \"+20K\", \"cost\": \"20K VND\", \"ccost\": 20000, \"value\": 120000 }, { \"old\": \"250K\", \"new\": \"300K Gold\", \"p\": \"+50K\", \"cost\": \"50K VND\", \"ccost\": 50000, \"value\": 300000 }, { \"old\": \"500K\", \"new\": \"605K Gold\", \"p\": \"+105K\", \"cost\": \"100K VND\", \"ccost\": 100000, \"value\": 605000 }, { \"old\": \"1M\", \"new\": \"1.22M Gold\", \"p\": \"+220K\", \"cost\": \"200K VND\", \"ccost\": 200000, \"value\": 1220000 }, { \"old\": \"2.5M\", \"new\": \"3.1M Gold\", \"p\": \"+600K\", \"cost\": \"500K VND\", \"ccost\": 500000, \"value\": 3100000 } ] }, { \"op\": \"MOBIFONE\", \"items\": [ { \"old\": \"50K\", \"new\": \"60K Gold\", \"p\": \"+10K\", \"cost\": \"10K VND\", \"ccost\": 10000, \"value\": 60000 }, { \"old\": \"100K\", \"new\": \"120K Gold\", \"p\": \"+20K\", \"cost\": \"20K VND\", \"ccost\": 20000, \"value\": 120000 }, { \"old\": \"250K\", \"new\": \"300K Gold\", \"p\": \"+50K\", \"cost\": \"50K VND\", \"ccost\": 50000, \"value\": 300000 }, { \"old\": \"500K\", \"new\": \"605K Gold\", \"p\": \"+105K\", \"cost\": \"100K VND\", \"ccost\": 100000, \"value\": 605000 }, { \"old\": \"1M\", \"new\": \"1.22M Gold\", \"p\": \"+220K\", \"cost\": \"200K VND\", \"ccost\": 200000, \"value\": 1220000 }, { \"old\": \"2.5M\", \"new\": \"3.1M Gold\", \"p\": \"+600K\", \"cost\": \"500K VND\", \"ccost\": 500000, \"value\": 3100000 } ] }, { \"op\": \"VINAPHONE\", \"items\": [ { \"old\": \"50K\", \"new\": \"60K Gold\", \"p\": \"+10K\", \"cost\": \"10K VND\", \"ccost\": 10000, \"value\": 60000 }, { \"old\": \"100K\", \"new\": \"120K Gold\", \"p\": \"+20K\", \"cost\": \"20K VND\", \"ccost\": 20000, \"value\": 120000 }, { \"old\": \"250K\", \"new\": \"300K Gold\", \"p\": \"+50K\", \"cost\": \"50K VND\", \"ccost\": 50000, \"value\": 300000 }, { \"old\": \"500K\", \"new\": \"605K Gold\", \"p\": \"+105K\", \"cost\": \"100K VND\", \"ccost\": 100000, \"value\": 605000 }, { \"old\": \"1M\", \"new\": \"1.22M Gold\", \"p\": \"+220K\", \"cost\": \"200K VND\", \"ccost\": 200000, \"value\": 1220000 }, { \"old\": \"2.5M\", \"new\": \"3.1M Gold\", \"p\": \"+600K\", \"cost\": \"500K VND\", \"ccost\": 500000, \"value\": 3100000 } ] } ], \"sms_items\": [ { \"op\": \"VIETTEL\", \"items\": [ { \"old\": \"25K\", \"new\": \"30K Gold\", \"p\": \"+5K\", \"cost\": \"10K VND\", \"add\": \"+9029\", \"content\": \"Qk 10000 bp2 %user% nap dautruong\", \"ccost\": 10000, \"value\": 30000 }, { \"old\": \"37.5K\", \"new\": \"45K Gold\", \"p\": \"+7.5K\", \"cost\": \"15K VND\", \"add\": \"+9029\", \"content\": \"mQk 15000 bp2 %user% nap dautruong\", \"ccost\": 15000, \"value\": 45000 }, { \"old\": \"50K\", \"new\": \"60K Gold\", \"p\": \"+10K\", \"cost\": \"20K VND\", \"add\": \"+9029\", \"content\": \"Qk 20000 bp2 %user% nap dautruong\", \"ccost\": 20000, \"value\": 60000 }, { \"old\": \"75K\", \"new\": \"90K Gold\", \"p\": \"+15K\", \"cost\": \"30K VND\", \"add\": \"+9029\", \"content\": \"Qk 30000 bp2 %user% nap dautruong\", \"ccost\": 30000, \"value\": 90000 }, { \"old\": \"125K\", \"new\": \"155K Gold\", \"p\": \"+30K\", \"cost\": \"50K VND\", \"add\": \"+9029\", \"content\": \"Qk 50000 bp2 %user% nap dautruong\", \"ccost\": 50000, \"value\": 155000 }, { \"old\": \"250K\", \"new\": \"320K Gold\", \"p\": \"+70K\", \"cost\": \"100K VND\", \"add\": \"+9029\", \"content\": \"Qk 100000 bp2 %user% nap dautruong\", \"ccost\": 100000, \"value\": 320000 } ] }, { \"op\": \"MOBIFONE\", \"items\": [ { \"old\": \"25K\", \"new\": \"30K\", \"p\": \"+5K\", \"cost\": \"10K VND\", \"add\": \"+9029\", \"content\": \"BX bp nap10 %user%\", \"ccost\": 10000, \"value\": 30000 }, { \"old\": \"37.5K\", \"new\": \"45K Gold\", \"p\": \"+7.5K\", \"cost\": \"15K VND\", \"add\": \"+9029\", \"content\": \"BX bp nap15 %user%\", \"ccost\": 15000, \"value\": 45000 }, { \"old\": \"50K\", \"new\": \"60K Gold\", \"p\": \"+10K\", \"cost\": \"20K VND\", \"add\": \"+9029\", \"content\": \"BX bp nap20 %user%\", \"ccost\": 20000, \"value\": 60000 }, { \"old\": \"75K\", \"new\": \"90K Gold\", \"p\": \"+15K\", \"cost\": \"30K VND\", \"add\": \"+9029\", \"content\": \"BX bp nap30 %user%\", \"ccost\": 30000, \"value\": 90000 }, { \"old\": \"125K\", \"new\": \"155K Gold\", \"p\": \"+30K\", \"cost\": \"50K VND\", \"add\": \"+9029\", \"content\": \"BX bp nap50 %user%\", \"ccost\": 50000, \"value\": 155000 }, { \"old\": \"250K\", \"new\": \"320K Gold\", \"p\": \"+70K\", \"cost\": \"100K VND\", \"add\": \"+9029\", \"content\": \"BX bp nap100 %user%\", \"ccost\": 100000, \"value\": 320000 } ] }, { \"op\": \"VINAPHONE\", \"items\": [ { \"old\": \"25K\", \"new\": \"30K Gold\", \"p\": \"+5K\", \"cost\": \"10K VND\", \"add\": \"+9029\", \"content\": \"Bx bp2 nap10 %user%\", \"ccost\": 10000, \"value\": 30000 }, { \"old\": \"25K\", \"new\": \"30K Gold\", \"p\": \"+5K\", \"cost\": \"10K VND\", \"add\": \"+9029\", \"content\": \"Bx bp2 nap10 %user%\", \"ccost\": 10000, \"value\": 30000 }, { \"old\": \"37.5K\", \"new\": \"45K Gold\", \"p\": \"+7.5K\", \"cost\": \"15K VND\", \"add\": \"+9029\", \"content\": \"Bx bp2 nap15 %user%\", \"ccost\": 15000, \"value\": 45000 }, { \"old\": \"50K\", \"new\": \"60K Gold\", \"p\": \"+10K\", \"cost\": \"20K VND\", \"add\": \"+9029\", \"content\": \"Bx bp2 nap20 %user%\", \"ccost\": 20000, \"value\": 60000 }, { \"old\": \"75K\", \"new\": \"90K Gold\", \"p\": \"+15K\", \"cost\": \"30K VND\", \"add\": \"+9029\", \"content\": \"Bx bp2 nap30 %user%\", \"ccost\": 30000, \"value\": 90000 }, { \"old\": \"125K\", \"new\": \"155K Gold\", \"p\": \"+30K\", \"cost\": \"50K VND\", \"add\": \"+9029\", \"content\": \"Bx bp2 nap50 %user%\", \"ccost\": 50000, \"value\": 155000 } ] } ] }";
//		setData (rawData);
//		selectPaymentOptions (PO_IAP);
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		
	}

	void LoadUserInfo(){
		User user = GameApplication.user;
		if (user.avatarSprite != null){
			avatar.enabled = true;
			avatar.sprite = user.avatarSprite;
		} else {
			loadImage (GameApplication.user.avatarUrl, avatar, delegate(Sprite sprite) {
				avatar.enabled = true;
				GameApplication.user.avatarSprite = sprite;
			});
		}

		this.username.text = user.displayName;
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			this.balance.text = Utils.formatNumber (user.ag);//+ " Gold";
//			this.vip.text = "VIP" + (user.vip) / 1; 
		}

	} 

	public void setData(string rawData){
		JSONClass formatCard = new JSONClass ();
		//		"old": "50K",
		//		"new": "60K Gold",
		//		"p": "+10K",
		//		"cost": "10K VND",
		//		"ccost": 10000,
		//		"value": 60000
		formatCard ["type"] = CARD;
		formatCard ["cost"] = "cost";
		formatCard ["value1"] = "old";
		formatCard ["value2"] = "p";

		JSONClass formatSMS = new JSONClass ();
		//		old": "25K",
		//		"new": "30K Gold",
		//		"p": "+5K",
		//		"cost": "10K VND",
		//		"add": "+9029",
		//		"content": "Qk 10000 bp2 %user% nap dautruong",
		//		"ccost": 10000,
		//		"value": 30000
		formatSMS ["type"] = SMS;
		formatSMS ["cost"] = "cost";
		formatSMS ["value1"] = "old";
		formatSMS ["value2"] = "p";

		JSONClass formatIAP = new JSONClass ();
		//		"itemid": "g88club.gold.tier1",
		//		"USD": "0.99 USD",
		//		"Chip": "60K Gold",
		//		"amount": "35",
		//		"oldChip": "50K",
		//		"plus": "+10K",
		//		"ccost": 1,
		//		"value": 60000
		formatIAP ["type"] = IAP;
		formatIAP ["cost"] = "USD";
		formatIAP ["value1"] = "oldChip";
		formatIAP ["value2"] = "plus";
		// # test

		JSONNode jsondata = JSONClass.Parse (rawData);

		//		JSONArray IAPList = jsondata["iap_items"].AsArray;
		//		JSONArray SMSVinaList = jsondata["sms_items"][2]["items"].AsArray;
		//		JSONArray CardViettelList = jsondata["card_items"][0]["items"].AsArray;


		// TODO: need to check option is valid


		PO_Card.gameObject.SetActive (PaymentManager.card_enable);
		PO_SMS.gameObject.SetActive (PaymentManager.sms_enable);

		if (PaymentManager.card_enable == false == PaymentManager.sms_enable == false) {
			PO_IAP.gameObject.SetActive (false);
		} else {
			PO_IAP.gameObject.SetActive (PaymentManager.iap_ios_enable);
		}

		PO_IAP.setData (jsondata["iap_items"].AsArray, formatIAP, paymentItemListView);
		PO_SMS.setData (jsondata["sms_items"].AsArray, formatSMS, paymentItemListView);
		PO_Card.setData (jsondata["card_items"].AsArray, formatCard, paymentItemListView);

		PO_IAP.transform.GetComponent<Button> ().onClick.AddListener(delegate {
			selectPaymentOptions(PO_IAP);
		});
		PO_SMS.transform.GetComponent<Button> ().onClick.AddListener(delegate {
			selectPaymentOptions(PO_SMS);
		});
		PO_Card.transform.GetComponent<Button> ().onClick.AddListener(delegate {
			selectPaymentOptions(PO_Card);
		});

		ProviderOption1.transform.GetComponent<Button> ().onClick.AddListener (delegate {
			selectProviderOptions(0);
		});
		ProviderOption2.transform.GetComponent<Button> ().onClick.AddListener (delegate {
			selectProviderOptions(1);
		});
		ProviderOption3.transform.GetComponent<Button> ().onClick.AddListener (delegate {
			selectProviderOptions(2);
		});

	} 

	public void selectPaymentOptions(PaymentOption paymentOption){
		selectedPaymentOption = paymentOption;
		foreach (PaymentOption po in paymentOptions) {
			if (po != paymentOption)
				po.deactive();
			else
				po.active (selectedProviderIndex);
		}

		if (selectedPaymentOption.type.Equals (IAP)) {
			// an thanh provider
			providerOptionView.SetActive (false);
		} else {
			providerOptionView.SetActive(true);
		}

		RectTransform rect = paymentItemListView.GetComponent<RectTransform> ();
		if (selectedPaymentOption.type.Equals (CARD)) {
			// an thanh provider
			cardInputView.SetActive (true);
//			rect.offsetMin = new Vector2(rect.offsetMin.x, bottom);
			rect.offsetMax = new Vector2(rect.offsetMax.x, -230);
		} else {
			cardInputView.SetActive(false);
			rect.offsetMax = new Vector2(rect.offsetMax.x, -150);
		}
	}

	public void selectProviderOptions(int index){
		selectedProviderIndex = index;
		ProviderOption[] providers = new []{ProviderOption1, ProviderOption2, ProviderOption3};

		for(int i = 0; i < providers.Length; i++){
			if (i != selectedProviderIndex)
				providers[i].deactive();
			else
				providers[i].active ();
		}

		if(selectedPaymentOption != null){
			selectedPaymentOption.activeProvider(selectedProviderIndex);	
		}
	}

	public void doPaymentCard(){
		string serial = input_card_seri.text;
		string pin = input_card_code.text;
		string type = selectedPaymentOption.selectedProviderName;

		if (pin == null || pin.Length < 1) {
			SuperScene.instance.showInfoDialog (Strings.instance.dialog_alert_payment_miss_pin);
			return;
		}

		if (serial == null || serial.Length < 1) {
			SuperScene.instance.showInfoDialog (Strings.instance.dialog_alert_payment_miss_serial);
			return;
		}

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

			Debug.Log (url + " result: " + result);
			string msg = "";
//			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong || 
//				GameApplication.gameApp == GameApplication.GameApp.G52Fun ){
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

//					logFBEventPaymentOK(type);
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
//			}
//			else if(GameApplication.gameApp == GameApplication.GameApp.G3C){
//				if (result.Equals("00", System.StringComparison.CurrentCultureIgnoreCase)) {
//					msg = Strings.instance.error_payment_card_OK;
//					GameApplication.cubeia.sendUAG();
//					logFBEventPaymentOK(type);
//				} else if (result.Equals("0", System.StringComparison.CurrentCultureIgnoreCase)) {
//					msg = Strings.instance.error_payment_card_invalid;
//				} else if (result.Equals("-1", System.StringComparison.CurrentCultureIgnoreCase)) {
//					msg = Strings.instance.error_payment_card_banned_account;
//				} else if (result.Equals("2", System.StringComparison.CurrentCultureIgnoreCase)) {
//					msg = Strings.instance.error_payment_card_wrong_info;
//				} else {
//					msg = Strings.instance.error_payment_card_invalid;
//				}
//			} else {
//				Debug.LogError("Chua lam thanh toan");
//			}
			SuperScene.instance.showInfoDialog (msg);
		};
		Utils.Executor onFailed = delegate {
			SuperScene.instance.showInfoDialog (Strings.instance.error_payment_card_cant_do_request);
		};
		SuperScene.instance.doHTTPRequest (url, onSuccess, onFailed);
	}

	public void backToHome ()
	{
		SoundManager.instance.playButtonClicked ();
		if (previousScene != null && previousScene != GameApplication.PAYMENTSCENE) {
			Application.LoadLevel (previousScene);
			Tracking.changeScene (previousScene);
		} else {
			Application.LoadLevel (GameApplication.HOMESCENE);
			Tracking.changeScene (previousScene);
		}

		previousScene = GameApplication.PAYMENTSCENE;
	}

	void OnPurchasesStateSettingsLoaded (bool IsInAppPurchasesEnabled) {
		IOSInAppPurchaseManager.OnPurchasesStateSettingsLoaded -= OnPurchasesStateSettingsLoaded;
		if(IsInAppPurchasesEnabled){
			PaymentManager.init();
		} else {
			IOSNativePopUpManager.showMessage("Payments Settings State", "In-App Purchase is disabled");
		}
	}
}