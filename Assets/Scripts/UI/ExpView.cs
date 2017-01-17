using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class ExpView : MonoBehaviour
{
	Slider slider;
	public RectTransform textEx;

	public static int evalue = 0;
	// Use this for initialization
	void Start ()
	{
		slider = GetComponent<Slider> ();
		slider.value = 0f;

		LeanTween.value (gameObject, delegate(float value) {
			slider.value = value * 0.01f;
		}, 0f, (float)evalue, 0.8f);

//		string url = GameApplication.url_exp + GameApplication.user.id;
//		Utils.ExeOneStringParam onSuccess = delegate(string result) {
//			int intresult = 0;
//			int.TryParse (result, out intresult);
//			textEx.GetComponent<Text>().text = result + "%";
//			LeanTween.value (gameObject, delegate(float value) {
//				slider.value = value * 0.01f;
//			}, 0f, (float)intresult, 0.8f);
//		};
//		Utils.Executor onFailed = delegate() {
//
//		};
//		if(SuperScene.instance != null){
//			SuperScene.instance.doHTTPRequest (url, onSuccess, onFailed);
//		}
	}

}
