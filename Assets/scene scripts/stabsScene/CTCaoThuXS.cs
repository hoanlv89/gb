using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class CTCaoThuXS : MonoBehaviour {
	public Text lb, lb_stt, lb_taikhoan, lb_sogold, lb_thoigian;

	public RectTransform content;
	public RectTransform pfItem;

	// Use this for initialization
	void Start () {
		if(GameApplication.IsInitialized)
			UpdateTopCaoThu();
	}
	
	void UpdateTopCaoThu () {
		foreach(RectTransform rect in content){
			Destroy(rect.gameObject);
		}

		string url = GameApplication.url_topcaothu_xoso;
		Utils.ExeOneStringParam onSuccess = delegate(string data) {
			Debug.Log(data);
			try{
				// {"N":"tuanbon","AG":2100000,"T":"06/15/2015"}
				JSONArray jArr = JSONClass.Parse (data).AsArray;
				for (int i=0; i<jArr.Count; i++) {
					RectTransform rect = GameObject.Instantiate<RectTransform>(pfItem);
					rect.SetParent(content, false);

					if(i%2==0) rect.GetComponent<Image>().color = new Color32(0,0,0,95);

					rect.Find("STT").GetComponent<Text>().text = ""+ (i + 1);
					rect.Find("Name").GetComponent<Text>().text = jArr[i]["N"];
					rect.Find("Gold").GetComponent<Text>().text = Utils.formatNumber(jArr[i]["AG"].AsInt) + " " + GameApplication.COIN;
					rect.Find("Date").GetComponent<Text>().text = jArr[i]["T"];

				}
			} catch(UnityException e){
				Debug.LogException(e);
			}
		};
		Utils.Executor onFailed = delegate() {
			SuperScene.instance.showToast (Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest(url, onSuccess, onFailed);
	}
}
