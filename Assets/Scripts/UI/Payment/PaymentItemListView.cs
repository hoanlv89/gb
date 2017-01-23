using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;
using Facebook.Unity;

public class PaymentItemListView : MonoBehaviour {
	public Sprite[] icongolds;
	public RectTransform contentView;

	// prefabs
	public RectTransform paymentItemPrefab;

	string selectedProviderName;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void setContent(JSONArray items, JSONClass format, string selectedProviderName){
		this.selectedProviderName = selectedProviderName;
		string type = format ["type"];
		foreach (Transform child in contentView) {
			GameObject.Destroy(child.gameObject);
		}

		for (int i = 0; i < items.Count; i++) {
			PaymentItemView paymentItemView = GameObject.Instantiate<RectTransform> (paymentItemPrefab).GetComponent<PaymentItemView>();
			paymentItemView.transform.SetParent (contentView, false);

			JSONClass item = items[i].AsObject;

			// # Set VIEW
			if (icongolds.Length > 0) {
				if (i < icongolds.Length) {
					paymentItemView.iconGold.sprite = icongolds [i];
				}
				if (i >= icongolds.Length) {
					paymentItemView.iconGold.sprite = icongolds [icongolds.Length-1];
				}
			}

			string value2 = item [format ["value2"]];
			if (value2.Length < 1) {
				paymentItemView.value2.enabled = false;
				// chinh lai toa do cua value1

				Vector2 pos = paymentItemView.value1.rectTransform.anchoredPosition;
				paymentItemView.value1.rectTransform.anchoredPosition = new Vector2 (pos.x, pos.y - 20);
			} else {
				paymentItemView.value2.text = value2;
			}

			paymentItemView.cost.text = item [format ["cost"]];
			paymentItemView.value1.text = item [format ["value1"]];

			// # Set Listener
			paymentItemView.button.onClick.AddListener(delegate {
				if(type.Equals(PaymentScene.IAP)){
					PaymentManager.buyItem(item["itemid"]);	
				}

				if(type.Equals(PaymentScene.SMS)){
					doPaymentSMS(item);
				}
			});
		}
	}

	public void doPaymentSMS(JSONClass item){
		//		old": "25K",
		//		"new": "30K Gold",
		//		"p": "+5K",
		//		"cost": "10K VND",
		//		"add": "+9029",
		//		"content": "Qk 10000 bp2 %user% nap dautruong",
		//		"ccost": 10000,
		//		"value": 30000

		SDialog sdialog = SuperScene.instance.showDialog (DialogInfo.OKCancelDialog);
		string value = item["new"];//Utils.formatNumber (smsItem.value) + " " + GameApplication.COIN;
		string cost = item["cost"];//Utils.formatNumber (smsItem.cost) + " VND";
		string syntax = item["content"];
		string address = item["add"];
		string content = "soạn: " + syntax.Replace ("%user%", GameApplication.user.name);
		sdialog.content.text = Strings.instance.common_confirm_payment_sms.Replace ("%value%", value).Replace ("%cost%", cost) 
			+ "\n" + content + " -> " + address;


//		string message = "This is a test from Unity *^#$#$((*&& Test Symbols";
		string body = syntax.Replace ("%user%", GameApplication.user.name);

		#if UNITY_ANDROID
		//Android SMS URL - doesn't require encoding for sms call to work
		string URL = string.Format("sms:{0}?body={1}",address,System.Uri.EscapeDataString(body));
		#endif

		#if UNITY_IOS
		//ios SMS URL - ios requires encoding for sms call to work
		//string URL = string.Format("sms:{0}?&body={1}",address,WWW.EscapeURL(body)); //Method1 - Works but puts "+" for spaces
		//string URL ="sms:"+address+"?&body="+WWW.EscapeURL(body); //Method2 - Works but puts "+" for spaces
		//string URL = string.Format("sms:{0}?&body={1}",address,System.Uri.EscapeDataString(body)); //Method3 - Works perfect
		string URL ="sms:"+address+"?&body="+ System.Uri.EscapeDataString(body); //Method4 - Works perfectly
		#endif

		//Execute Text Message
		Application.OpenURL(URL);

//		body = body.Replace(" ","%20");
//		string spliter = ";";
//		if(GameApplication.iOSVersion >= 8)
//			spliter = "&";
//		string smsText = "sms:" + address + spliter + "body=" +body;
//		#if UNITY_ANDROID
//		spliter = "?";
//		if(SystemInfo.deviceModel.Contains("OPPO")){
//			smsText = "sms:" + spliter + "body=" + body;
//		} else {
//			smsText = "sms:" + address + spliter + "body=" + body;
//		}
//		#endif

		Debug.Log("SMSTEXT " + URL);
		sdialog.positive.onClick.AddListener (delegate {
			Dictionary<string, object> fbparams = new Dictionary<string, object>();
			fbparams.Add("username", GameApplication.user.name);
			fbparams.Add("vip", GameApplication.user.vip);
			fbparams.Add("gold", GameApplication.user.ag);
			fbparams.Add("type", "SMS "+ cost + " " + selectedProviderName);

			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPurchaseSMSBlock, (float)1f, DSTFBEvent.defaultParams);
								FB.LogAppEvent(Facebook.Unity.AppEventName.Purchased, 1, fbparams);

			Application.OpenURL(URL);
			sdialog.dismiss();
			//					IOSSharedApplication.instance.OpenUrl ("sms:" + smsItem.address);
			//					IOSSocialManager.instance.SendMessage
			//					IOSNativeUtility.
		});
		sdialog.negative.onClick.AddListener (delegate {
			sdialog.dismiss ();
			//					SuperScene.instance.showInfoDialog ("deviceName: "+ SystemInfo.deviceName+ ". deviceType: "+ SystemInfo.deviceType+ ". deviceModel: "+ SystemInfo.deviceModel);
		});
	}
}
