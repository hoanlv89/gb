using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;

public class CashoutVatPham : MonoBehaviour
{
	public	RectTransform pfVatPhamView,pfVatPhamViewDT;
	public RectTransform gridView;
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
				string name = data[i]["name"];
				string url=data[i]["type"];
				int gold = data[i]["cost"].AsInt;
				int minag=data[i]["minag"].AsInt;
				int minvip=data[i]["minvip"].AsInt;
				string msg_ok=data[i]["ok"];
				string msg_false=data[i]["false"];
				string msg_false2=data[i]["false2"];
//				url="http://mservices.game3c.info/images_cashout/iphone6.png";
				addItem(name,url,gold,minag,minvip,msg_ok,msg_false,msg_false2);
			}
		};
		Utils.Executor onFailed = delegate {
			GameApplication.gameScene.showToast(Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest (GameApplication.url_cashout_vatpham, onSuccess, onFailed);
	}

	public void addItem(string name,string url,int gold,int minag,int minvip,string msg_ok,string msg_false,string msg_false2){
		RectTransform rect;
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			rect = (RectTransform)Instantiate(pfVatPhamViewDT);
		} else
		rect = (RectTransform)Instantiate(pfVatPhamView);
		rect.transform.SetParent(gridView, false);
		
		Text tv_stake = rect.Find("vnd").GetComponent<Text>();
		tv_stake.text = name;
		Text tv_load = rect.Find("gold").GetComponent<Text>();
		tv_load.text = Utils.formatCurrency(gold)+ " " +GameApplication.COIN;
		Image img_logo = rect.Find ("logo").GetComponent<Image> ();
		SuperScene.instance.loadImage (url, img_logo, null);
//		if(GameApplication.gameApp==GameApplication.GameApp.DauTruong){
//			rect.GetComponent<Image>().sprite=bg_dautruong;
////			rect.sizeDelta= new Vector2(330,330);
//			tv_stake.rectTransform.anchoredPosition= new Vector2(0,-60);
//			tv_load.rectTransform.anchoredPosition= new Vector2(0,60);
//			tv_stake.color=Color.black;
//			tv_load.color=Color.black;
//		}
		rect.Find("Button").GetComponent<Button> ().onClick.AddListener (delegate() {
			if(minvip>GameApplication.user.vip){
				string msg=Utils.getlocalstring(msg_false2)+""+minvip;
				SuperScene.instance.showInfoDialog(msg);
			}else{
				if(GameApplication.user.vip-gold<minag){
					string msg=Utils.getlocalstring(msg_false).Replace("%minag%",""+minag).Replace("%GOLD%",GameApplication.COIN);
					SuperScene.instance.showInfoDialog(msg);
				}else{
					string msg=Utils.getlocalstring(msg_ok).Replace("%mobile%",GameApplication.HOTLINE);
					SuperScene.instance.showInfoDialog(msg);
				}
			}
		});
	}
}

