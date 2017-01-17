using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using Facebook.Unity;

public class PaymentSMS : MonoBehaviour
{

	public RectTransform SMSPaymentItem;
	public RectTransform itemsContainer;
	public Text message;

	// Use this for initialization
	void Start ()
	{
		if(PaymentManager.kmMessage.Length> 5 && message != null)
			message.text = PaymentManager.kmMessage;

		List<SMSSyntax> smslist = SMSSyntax.viettel;


		string Carrier = "Viettel";
		try {
			Debug.Log("xac dinh nha mang.");
			Carrier = Countly.Bindings.GetCarrierName();
		} catch(UnityException e){
		}
		Debug.Log("Nha mang: " + Carrier);
		if(Carrier != null){
			if (Carrier.Equals("Mobifone") || Carrier.Equals("Carrier"))
				smslist = SMSSyntax.mobifone;
			else if (Carrier.Equals("VinaPhone"))
				smslist = SMSSyntax.vinaphone;
		}

		for (int i = 0; i < smslist.Count; i++) {
			SMSSyntax smsItem = smslist [i];

			RectTransform rectItem = GameObject.Instantiate (SMSPaymentItem);
			rectItem.SetParent (itemsContainer, false);

			rectItem.Find ("TextCost").GetComponent<Text> ().text = Utils.formatNumber (smsItem.cost) + " VND";
			rectItem.Find ("TextValue").GetComponent<Text> ().text = Utils.formatNumber (smsItem.value) + " " + GameApplication.COIN;

			rectItem.GetComponent<Button> ().onClick.AddListener (delegate {
				SDialog sdialog = SuperScene.instance.showDialog (DialogInfo.OKCancelDialog);
				string value = Utils.formatNumber (smsItem.value) + " " + GameApplication.COIN;
				string cost = Utils.formatNumber (smsItem.cost) + " VND";
				string content = "soạn: " + smsItem.syntax.Replace ("%user%", GameApplication.user.name);
				sdialog.content.text = Strings.instance.common_confirm_payment_sms.Replace ("%value%", value).Replace ("%cost%", cost) 
					+ "\n" + content + " -> " + smsItem.address;
				string body = smsItem.syntax.Replace ("%user%", GameApplication.user.name);
				body = body.Replace(" ","%20");
				string spliter = ";";
				if(GameApplication.iOSVersion >= 8)
					spliter = "&";
				string smsText = "sms:" + smsItem.address + spliter + "body=" +body;
#if UNITY_ANDROID
				spliter = "?";
				if(SystemInfo.deviceModel.Contains("OPPO")){
					smsText = "sms:" + spliter + "body=" + body;
				} else {
					smsText = "sms:" + smsItem.address + spliter + "body=" + body;
				}
#endif

				Debug.Log("SMSTEXT " + smsText);
				sdialog.positive.onClick.AddListener (delegate {
					Dictionary<string, object> fbparams = new Dictionary<string, object>();
					fbparams.Add("username", GameApplication.user.name);
					fbparams.Add("vip", GameApplication.user.vip);
					fbparams.Add("gold", GameApplication.user.ag);
					fbparams.Add("type", "SMS "+ cost + " " + Carrier);

					DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPurchaseSMSBlock, (float)1f, DSTFBEvent.defaultParams);
//					FB.LogAppEvent(Facebook.Unity.AppEventName.Purchased, 1, fbparams);

					Application.OpenURL(smsText);
					sdialog.dismiss();
//					IOSSharedApplication.instance.OpenUrl ("sms:" + smsItem.address);
//					IOSSocialManager.instance.SendMessage
//					IOSNativeUtility.
				});
				sdialog.negative.onClick.AddListener (delegate {
					sdialog.dismiss ();
//					SuperScene.instance.showInfoDialog ("deviceName: "+ SystemInfo.deviceName+ ". deviceType: "+ SystemInfo.deviceType+ ". deviceModel: "+ SystemInfo.deviceModel);
				});
			});
		}
	}
#if UNITY_ANDROID
	public void launchApp(string packageName)
	{
		string bundleId = "android.intent.action.VIEW";
		AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaObject ca = up.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaObject packageManager = ca.Call<AndroidJavaObject>("getPackageManager");
		
		AndroidJavaObject launchIntent = null;

		try
		{
			launchIntent = packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", bundleId);
			ca.Call("startActivity",launchIntent);
		}
		catch (System.Exception e)
		{
//			Application.OpenURL("https://google.com");
		}

	}
#endif
}
