using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class ControlNumberButton : SlotomaniaScene {
	//ControlPlay controlplay = new ControlPlay();
	string number;
	Button numberButton;
	Image img;

	RectTransform[] list=new RectTransform[10];


	void Start(){
	
		int oldnuberRow = numberRow;
		numberButton = GetComponent<Button>();
		number = numberButton.GetComponentInChildren<Text>().text;
		//Lline.GetComponent<Image> ();
		numberButton.onClick.AddListener (delegate {
			numberRow = int.Parse(number);
			showChooseLine(int.Parse(number));
			Lines.GetComponent<Text>().text = numberRow.ToString();

			if(numberRow - oldnuberRow>0){
//				audioSlot.asource.clip = Resources.Load ("Sounds/betup")  as AudioClip;
//				audioSlot.asource.Play();
				AudioSlot.audioslot.audioBetup2();
			} else {
//				audioSlot.asource.clip = Resources.Load ("Sounds/betdown")  as AudioClip;
//				audioSlot.asource.Play();
				AudioSlot.audioslot.audioBetup2();
			}
		});

	}
}
