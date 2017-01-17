using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Collections.Generic;

public class testlist : MonoBehaviour {
	public RectTransform vungcuon;
	Vector2 start;
	public RectTransform ilist;
	List<RectTransform> list = new List<RectTransform>();
	float denta = 0;
	// Use this for initialization
	void Start () {
//		for(int i=0;i<15;i++){
//			list.Add(ilist);
//			RectTransform a =  Instantiate(list[i]);
//			a.SetParent(vungcuon);
//			a.anchoredPosition = ilist.anchoredPosition;
//			a.localScale = ilist.localScale;
//			a.FindChild("Text").GetComponent<Text>().text = i.ToString();
//		}
		Debug.Log (vungcuon.anchoredPosition.x);
		start = vungcuon.anchoredPosition;

	}
	
	// Update is called once per frame
	void Update () {
		float save = vungcuon.anchoredPosition.x;
	//	Debug.Log (vungcuon.anchoredPosition.x);
		if(vungcuon.anchoredPosition.x < -100){
			vungcuon.anchoredPosition = start;
		}
	}
	public void onchangevaluescrollrect(Vector2 vec){
		Debug.Log (vec);
	}
}
