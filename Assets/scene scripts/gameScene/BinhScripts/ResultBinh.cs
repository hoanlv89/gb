
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class ResultBinh : MonoBehaviour
{
	public Image close;
	public RectTransform itemList;
	public RectTransform pfBinhItem;
	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void init(List<ItemResult> listItem){
		close.rectTransform.GetComponent<Button> ().onClick.AddListener (delegate {
			gameObject.SetActive(false);
		});
		for (int i = 0; i<itemList.childCount; i++) {
			Transform child = itemList.GetChild (i);
			Destroy (child.gameObject);
		}
		foreach (ItemResult item in listItem) {
			addItem(item);
		}
	}

	public void addItem(ItemResult item){
		RectTransform rect = GameObject.Instantiate<RectTransform> (pfBinhItem);
		rect.transform.SetParent (itemList, false);
		Text player = rect.FindChild ("player").GetComponent<Text> ();
		Text mark = rect.FindChild ("mark").GetComponent<Text> ();
		Text note = rect.FindChild ("note").GetComponent<Text> ();
		player.text = item.name;
		mark.text = Utils.formatNumber(item.ag);
		note.text = item.note.ToString();
	}

	public void closePop(){
		gameObject.SetActive(false);
	}
}

