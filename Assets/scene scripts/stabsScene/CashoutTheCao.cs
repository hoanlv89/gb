using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;

public class CashoutTheCao : MonoBehaviour
{
	public RectTransform pfTheCaoView,pfTheCaoViewDT;
	public RectTransform gridView;
	public Sprite Viettel;
	public Sprite Mobifone;
	public Sprite Vinaphone;

	public static string selectedType = "";
	public static string selectedValue = "";
	public Sprite bg_dautruong;
	// Use this for initialization
	void Start ()
	{
		getData ();
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void getData(){
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			var data = JSONNode.Parse (result).AsArray;
			for(int i=0;i<data.Count;i++){
				int vnd = data[i]["name"].AsInt;
				int gold = data[i]["cost"].AsInt;
				string type = data[i]["type"];
				addItem(vnd,type,gold);
			}
		};
		Utils.Executor onFailed = delegate {
			SuperScene.instance.showToast(Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest (GameApplication.url_cashout_thecao, onSuccess, onFailed);
	}

	public void addItem(int vnd,string type,int gold){
		RectTransform rect = null;
		if(GameApplication.gameApp==GameApplication.GameApp.DauTruong){
			rect = (RectTransform)Instantiate(pfTheCaoViewDT);
		} else 
		rect = (RectTransform)Instantiate(pfTheCaoView);
		rect.transform.SetParent(gridView, false);
		Sprite s_img=null;
		if (type == "VIETTEL") {
			s_img=Viettel;
		}
		if (type == "MOBIFONE") {
			s_img=Mobifone;
		}
		if (type == "VINAPHONE") {
			s_img=Vinaphone;
		}
		Text tv_stake = rect.Find("vnd").GetComponent<Text>();
		tv_stake.text = Utils.formatCurrency(vnd);

		Text tv_load = rect.Find("gold").GetComponent<Text>();
		tv_load.text = Utils.formatCurrency(gold) + " " + GameApplication.COIN;
		Image img_logo = rect.Find ("logo").GetComponent<Image> ();
		img_logo.sprite = s_img;
//
//		if(GameApplication.gameApp==GameApplication.GameApp.DauTruong){
//			rect.GetComponent<Image>().sprite=bg_dautruong;
//			tv_stake.rectTransform.anchoredPosition= new Vector2(0,-60);
//			tv_load.rectTransform.anchoredPosition= new Vector2(0,60);
//			tv_stake.color=Color.black;
//			tv_load.color=Color.black;
//		}

		rect.Find("Button").GetComponent<Button> ().onClick.AddListener (delegate() {
			var data = new JSONClass ();
			data ["evt"] = "cashout";
			data ["M"].AsInt = vnd;
			data ["T"] = type;

			selectedValue = Utils.formatNumber(vnd) + "VND";
			selectedType = type;

			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityCashOutBlock, (float)1f, DSTFBEvent.defaultParams);

			SDialog dialog = SuperScene.instance.showDialog(DialogInfo.OKCancelDialog);
			dialog.content.text = "Bạn có chắc chắn đổi thẻ này không?";
			dialog.positive.onClick.AddListener(delegate {
				SuperScene.instance.showWaittingDialog(Strings.instance.common_waitingdialog_loading);
				GameApplication.cubeia.sendService (data);
				DSTFBEvent.LogAppEvent(DSTFBEvent.UnityCashOutConfirm, (float)1f, DSTFBEvent.defaultParams);
			});
			dialog.negative.onClick.AddListener(delegate {
				dialog.dismiss();
			});
//
//			LeanTween.delayedCall(1f, delegate(object obj) {
//				JSONClass jobj = new JSONClass();
//				jobj["evt"] = "cashout";
//				jobj["C"] = "0924353561738";
//				jobj["S"] = "92743903786";
//				Debug.Log("doithe: "+ jobj.ToString());
//				ServiceTransportPacket servicePacket = new ServiceTransportPacket ();
//				servicePacket.idtype = 1;
//				servicePacket.pid = 11111;
//				servicePacket.seq = 1;
//				servicePacket.service = "com.athena.services.api.ServiceContract";
//				servicePacket.servicedata = Utils.getBytesUTF8 (jobj.ToString ());
//				ServiceTransportPacketProcessor.handleServiceTransportPacket(servicePacket);
//			});
		});
	}
}

