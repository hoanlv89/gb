using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleJSON;

public class PaymentOption : MonoBehaviour {

	public Sprite activeSprite;
	public Sprite deactiveSprite;

	PaymentItemListView paymentItemListView;
	JSONClass itemFormat;
	JSONArray jsondata;

	public string type;
	public string selectedProviderName;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void active(int providerindex){
		Image image = GetComponent<Image> ();
		image.sprite = activeSprite;
		string type = itemFormat ["type"];
		if (type.Equals("IAP")) {
			paymentItemListView.setContent (jsondata, itemFormat, selectedProviderName);
		} else {
			activeProvider (providerindex);
		}
	}

	public void deactive(){
		Image image = GetComponent<Image> ();
		image.sprite = deactiveSprite;
	}

	public void setData(JSONArray jsondata, JSONClass format, PaymentItemListView view){
		this.itemFormat = format;
		this.paymentItemListView = view;
		this.jsondata = jsondata;

		this.type = itemFormat ["type"];
	}

	public void activeProvider(int providerindex){
		string type = itemFormat ["type"];
		if (!type.Equals ("IAP")) {
			// IAP ko bao h thay doi content View
			selectedProviderName = jsondata [providerindex] ["op"];
			paymentItemListView.setContent (jsondata [providerindex] ["items"].AsArray, itemFormat, selectedProviderName);
		}
	}
}
