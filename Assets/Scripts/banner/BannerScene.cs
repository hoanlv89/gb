using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class BannerScene : MonoBehaviour {

	public Button close;
	public Image bg;
	public int index;
	public Button	[] buttons;

	// Use this for initialization
	void Start () {
		close.gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showBanner(int index){
		this.index = index;
		BannerData bannerData = GameApplication.bannerData [index];
		int sizeButton = bannerData.arrValue_type20.Count;
		int size = bannerData.arrValue_type20.Count;
		if (size > 3)
			size = 3;
		if (sizeButton > 3)
			sizeButton = 3;
		SuperScene.instance.loadImage (bannerData.url, bg, delegate(Sprite sprite) {
			bg.sprite = sprite;
			bg.color = new Color32(255,255,255,255);
//			Debug.LogError ("KAKAKA11 =====> " + sprite.texture.width);
//			Debug.LogError ("KAKAKA22 =====> " + sprite.texture.height);
		});
		for (int i = 0; i < 3; i++) {
			buttons [i].gameObject.SetActive (false);
		}

		for (int i = 0; i < size; i++) {
			

			int k = i;
			BannerItem item = bannerData.arrValue_type20 [k];
			SuperScene.instance.loadImage (item.btn, buttons [k].GetComponent<Image>(), delegate(Sprite sprite) {
				sizeButton--;
				if(sizeButton == 0){
					if(bannerData.allowClose)
						close.gameObject.SetActive(true);
					else
						close.gameObject.SetActive(false);
				}
				buttons [k].gameObject.SetActive (true);
				buttons [k].GetComponent<RectTransform>().sizeDelta = new Vector2(sprite.texture.width,sprite.texture.height);
				buttons [k].GetComponent<Image>().sprite = sprite;
				buttons [k].GetComponent<RectTransform>().anchoredPosition = new Vector2(item.pos.x * 937,sprite.texture.height/2);
				if (item.showTextButton) {
					if (!String.IsNullOrEmpty(item.value)) {
						buttons [k].transform.FindChild ("values").GetComponent<Text> ().text = item.value;
						buttons [k].transform.FindChild ("values").gameObject.SetActive (true);
					}
					if (!String.IsNullOrEmpty(item.bonus)) {
						buttons [k].transform.FindChild ("bonus").GetComponent<Text> ().text = item.bonus;
						buttons [k].transform.FindChild ("bonus").gameObject.SetActive (true);
					}
					if (!String.IsNullOrEmpty(item.cost)) {
						buttons [k].transform.FindChild ("cost").GetComponent<Text> ().text = item.cost;
						buttons [k].transform.FindChild ("cost").gameObject.SetActive (true);
					}
				}
				int j = k ;
				buttons[k].onClick.AddListener(
					delegate() {
						exitBanner();
					}
				);
			});
		}
	}

	public void exitBanner(){
		if (gameObject != null && gameObject.activeSelf == true) {
			gameObject.SetActive(false);
		}
	}
}
