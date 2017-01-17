using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using System;

public class CardChan
{
	// view stuff
	private RectTransform _rectTransform;
	public static int WIDTH = 44;
	public static int HEIGHT = 148;

	public static readonly float thisPlayerScale = 1.25f;
	public static readonly Vector3 lastCardScale = new Vector3(1.15f, 1.15f, 1);
	
	public Image image { get; set; }

	public RectTransform rectTransform {
		get {
			return _rectTransform;
		}
		set {
			_rectTransform = value;
			image = _rectTransform.GetComponent<Image> ();
			image.sprite = getSprite ();
		}
	}


	// logic stuff
	public enum CType {
		ven, van, sach
	}

	public int code;
	public CType S;
	public int N;

	private bool _isSelected;
	public bool isSelected {
		get{
			return _isSelected;
		}
		set {
			_isSelected = value;
			if(_isSelected){
//				Debug.LogError("Chon "+ getResourceName());
				rectTransform.anchoredPosition += getSelectedVector(-rectTransform.localRotation.eulerAngles.z);
				GameApplication.gameScene.controllerControl.chanFuntions.selectedCard = this;
			} else {
				if(GameApplication.gameScene.controllerControl.chanFuntions.selectedCard == this){
//					Debug.LogError("chanFuntions.selectedCard = null");
					GameApplication.gameScene.controllerControl.chanFuntions.selectedCard = null;
				}
				rectTransform.anchoredPosition -= getSelectedVector(-rectTransform.localRotation.eulerAngles.z);
			}

		}
	}

	public Vector2 getSelectedVector(float alpha){
		float d = 30;
		//		showToast("alpha: "+ alpha);
		float dx = d * (float)Math.Sin((alpha / 180) * Math.PI);
		float dy = d * (float)Math.Cos((alpha / 180) * Math.PI);
		
		return new Vector2(dx, dy);
	}


	private bool equalCode(int c){
		int cc = ((c - 1) / 4) * 4;
		if(code > cc && code <= cc+4)
			return true;
		return false;
	}

	public CardChan ()
	{
		
	}

	// dat _ vao ten tham so de tranh nham lan voi property code cua CardChan
	public static CardChan decode (int code)
	{
		CardChan card = new CardChan();
		int _code = (code - 1) / 4 + 1;
		if (_code == 25) {
			card.S = CType.ven;
			card.N = 0;
		} else {
			card.N = ((_code - 1) % 8 + 1) + 1;
			card.S = CType.ven;
			if ((_code - 1) / 8 == 1)
				card.S = CType.van;
			else if ((_code - 1) / 8 == 2)
				card.S = CType.sach;
		}

		card.code = code;
		return card;
	}

	public Sprite getSprite ()
	{
		return GameApplication.resource.getCardChanSprite (code);
	}
	
	public string getResourceName ()
	{
		return getSuitInVietnamese() + N;
	}
	
	public string getSuitInVietnamese ()
	{
		if (S == CType.ven)
			return "ven";
		else if (S == CType.van)
			return "van";
		else if (S == CType.sach)
			return "sach";
		return "-1";
	}

	public static string getName(int code) {
		code = (code - 1) / 4 + 1;
		int xN;
		CType xS;
		if (code == 25) {
			xS = CType.ven;
			xN = 0;
		} else {
			xN = ((code - 1) % 8 + 1) + 1;
			xS = CType.ven;
			if ((code - 1) / 8 == 1)
				xS = CType.van;
			else if ((code - 1) / 8 == 2)
				xS = CType.sach;
		}
		string str = "";
		string s2 = "";
		if (xS == CType.ven)
			str = "văn";
		else if (xS == CType.van)
			str = "vạn";
		else if (xS == CType.sach)
			str = "sách";
		
		if (xN == 2)
			s2 = "nhị";
		else if (xN == 3)
			s2 = "tam";
		else if (xN == 4)
			s2 = "tứ";
		else if (xN == 5)
			s2 = "ngũ";
		else if (xN == 6)
			s2 = "lục";
		else if (xN == 7)
			s2 = "thất";
		else if (xN == 8)
			s2 = "bát";
		else if (xN == 9)
			s2 = "cửu";
		
		if (xN == 0)
			return "chi chi";
		else
			return s2 + " " + str;
	}

}

