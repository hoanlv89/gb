using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Collections.Generic;

public class TestDrap : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {


	public RectTransform a;
	Vector2 start;
	bool check = true;
	List<RectTransform> list = new List<RectTransform>();
	List<Vector2> pos = new List<Vector2> ();

	public void OnDrag (PointerEventData eventData)
	{
		Debug.Log ("on drag");
	}




	
	public void OnEndDrag (PointerEventData eventData)
	{
		Debug.Log ("end drag");

	}
	

	public void OnBeginDrag (PointerEventData eventData)
	{
		Debug.Log ("begin drag");

	}

	void Start(){
		Debug.Log ("Dropped object was: ");
		//a= (RectTransform)transform.FindChild ("vungcuon");
//		Debug.Log (a.anchoredPosition);
//		start = a.anchoredPosition;
//		for(int i=0;i<20;i++){
//			RectTransform rect = (RectTransform)a.GetChild(i);
//			list.Add(rect);
//			rect.FindChild("Text").GetComponent<Text>().text = i.ToString();
//			pos.Add(rect.anchoredPosition);
//		}
//		foreach(RectTransform r in list){
//			Debug.Log (r.name);
//		}

	}

	void Update () {

		//	Debug.Log (vungcuon.anchoredPosition.x);

	}


}
