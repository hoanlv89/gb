using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class RoomLoadView : MonoBehaviour
{
	public int roomID;
	Slider slider;

	// Use this for initialization
	void Start ()
	{
		slider = GetComponent<Slider> ();
		slider.value = 0.04f;

		float capa = 0.04f;
		if(GameApplication.cubeia != null && GameApplication.cubeia.roomList != null){
			int count = GameApplication.cubeia.roomList.Length;
			if(roomID < count){
				if(GameApplication.cubeia.roomList[roomID].curPlay > 380)
					capa = 1f;
				else
					capa = GameApplication.cubeia.roomList[roomID].curPlay / 380f;
			}
		}

		LeanTween.value (gameObject, delegate(float value) {
			slider.value = value;
		}, 0f, capa, 0.8f);
	}

}
