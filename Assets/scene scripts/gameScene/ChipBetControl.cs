using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ChipBetControl : MonoBehaviour
{
	public Text text;
	public Image image;
	public Sprite Check_Left;
	public Sprite Check_Right;
	public Sprite SB_Left;
	public Sprite SB_Right;
	public Sprite BB_Left;
	public Sprite BB_Right;
	public Sprite Call_Left;
	public Sprite Call_Right;
	public Sprite Raise_Left;
	public Sprite Raise_Right;
	public Sprite Fold_Left;
	public Sprite Fold_Right;
	public Sprite Allin_Left;
	public Sprite Allin_Right;
	float cheight = 35;
	public int totalValue;

	// Use this for initialization
	void Start()
	{
	
	}
	
	// Update is called once per frame
	void Update()
	{
	
	}

	public void setPosition(Vector2 vec2)
	{
		transform.localPosition = new Vector3(vec2.x, vec2.y, transform.localPosition.z);
	}

	public void updateValue(string code, int plusValue)
	{
		totalValue += plusValue;
		updateValue(code, Utils.formatCurrency(totalValue));
	}

	public void updateValue(string code, string value)
	{
		float posX = transform.localPosition.x;
		float left;
		if (posX >= 0) {
			left = cheight / 2f;
			if (code.Equals("Check")) {
				image.sprite = Check_Left;
			} else if (code.Equals("SmallBlind")) {
				image.sprite = SB_Left;
			} else if (code.Equals("BigBlind")) {
				image.sprite = BB_Left;
			} else if (code.Equals("Call")) {
				image.sprite = Call_Left;
			} else if (code.Equals("Raise")) {
				image.sprite = Raise_Left;
			} else if (code.Equals("Fold")) {
				image.sprite = Fold_Left;
			} else if (code.Equals("AllIn")) {
				image.sprite = Allin_Left;
			}
		} else {
			left = -cheight / 2f;
			if (code.Equals("Check")) {
				image.sprite = Check_Right;
			} else if (code.Equals("SmallBlind")) {
				image.sprite = SB_Right;
			} else if (code.Equals("BigBlind")) {
				image.sprite = BB_Right;
			} else if (code.Equals("Call")) {
				image.sprite = Call_Right;
			} else if (code.Equals("Raise")) {
				image.sprite = Raise_Right;
			} else if (code.Equals("Fold")) {
				image.sprite = Fold_Right;
			} else if (code.Equals("AllIn")) {
				image.sprite = Allin_Right;
			}
		}
		text.text = value;
		text.rectTransform.anchoredPosition = new Vector2(left, 0);
		text.rectTransform.sizeDelta = new Vector2(95, cheight);
	}

	public void destroy()
	{
		if (transform != null)
			GameObject.Destroy(transform.gameObject);
	}
}
