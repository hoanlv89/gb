using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Blinking2 : MonoBehaviour {
	Image img;
//	float startTime;
	float countTime;
	float dtime;
	float maxTime = 0.25f;

	public bool blinking = true;
	public Sprite s1;
	public Sprite s2;

	// Use this for initialization
	void Start () {
		img = GetComponent<Image> ();
		img.sprite=s1;
		//startTime = Time.deltaTime;
	}

	// Update is called once per frame
	void Update () {
		dtime += Time.deltaTime;
		if (!blinking) 
			return;

//		byte a = (byte)(( 1 - dtime/maxTime) * 255);
//		Color32 color = img.color;
//		color.a = a;
//		img.color = color;

		// doi trang thai
		if(dtime > maxTime){
			if(img.sprite == s1)
				img.sprite = s2;
			else 
				img.sprite = s1;

			dtime = 0;
		}

	}

	public void setBlinking(bool blinking){
		this.blinking = blinking;
		if(!blinking)
		{
			GetComponent<Image>().sprite = s1;
		}
	}
		
}
