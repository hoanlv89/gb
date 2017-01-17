using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class CardAction_Swapable : MonoBehaviour
{
	// khoang cach giua chuot va cay bai
	Vector3 dis_input = Vector3.zero;
	bool isSelected;
	bool onMoving;
	Vector2 pos_range;

	public bool clickAction;

	// anh xa nguoc lai Card
	public Card card;
	public Card leftSidecard;
	public Card rightSidecard;

	SwapCardableGame game;

	// Use this for initialization
	void Start ()
	{
		onMoving = false;
		clickAction = true;
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	ThisPlayer thisPlayer {
		get {
			return ((Game)game).thisPlayer;
		}
	}

	void updateSiblingIndex (int newIndex)
	{
		this.gameObject.transform.SetSiblingIndex (newIndex);
	}

	public void moving () //Bat dau di chuyen
	{
		if (!onMoving) {
			onMoving = true;
			clickAction = true;
			isSelected = card.isSelected;
			dis_input = Input.mousePosition - transform.position;

			game = (SwapCardableGame)GameApplication.game;
			pos_range = game.getCardPosRange (card);
			leftSidecard = game.getLeftSideCard (card);
			rightSidecard = game.getRightSideCard (card);

//			game.printAllCards();

			transform.SetAsLastSibling ();
//			Debug.LogWarning("onMoving : " + card.getResourceName());
		}

		Vector3 mouseDown = Input.mousePosition;
		transform.position = mouseDown - dis_input;

		if (leftSidecard != null && transform.localPosition.x < pos_range.x) {
			clickAction = false;

			// doi cho logic
			game.swapThisPlayerCardOnHand (card, leftSidecard);

			// doi cho tren view
			float x = thisPlayer.getInHandCardsPos (leftSidecard);
			LeanTween.moveLocalX (leftSidecard.rectTransform.gameObject, x, 0.4f).setEase (LeanTweenType.easeOutQuart);

			// tinh lai pos_range
			pos_range = game.getCardPosRange (card);

			// tinh lai left/right card
			leftSidecard = game.getLeftSideCard (card);
			rightSidecard = game.getRightSideCard (card);

//			game.printAllCards();

		} else if (rightSidecard != null && transform.localPosition.x > pos_range.y) {
			clickAction = false;

			// doi cho logic
			game.swapThisPlayerCardOnHand (card, rightSidecard);
			
			// doi cho tren view
			float x = thisPlayer.getInHandCardsPos (rightSidecard);
			LeanTween.moveLocalX (rightSidecard.rectTransform.gameObject, x, 0.4f).setEase (LeanTweenType.easeOutQuart);

			// tinh lai pos_range
			pos_range = game.getCardPosRange (card);

			// tinh lai left/right card
			leftSidecard = game.getLeftSideCard (card);
			rightSidecard = game.getRightSideCard (card);

//			game.printAllCards();
		}

	}
	
	public void endMoving () //Ket thuc di chuyen
	{
		onMoving = false;
		Debug.LogWarning ("endMoving");

		if (!clickAction) {
			float delta = 0f;
			if (card.isSelected) {
				delta = 20;
			}
			float x = thisPlayer.getInHandCardsPos (card);
			float y = GameSceneTaLa.thisPlayerCardInHandPosY + delta;
			LeanTween.moveLocalX (card.rectTransform.gameObject, x, 0.3f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocalY (card.rectTransform.gameObject, y, 0.3f).setEase (LeanTweenType.easeOutQuart);
		}
		clickAction = true;

		foreach (Card c in thisPlayer.cards) {
			c.rectTransform.SetAsLastSibling ();
		}
	}

	void resetCardColor ()
	{
		if (Card.checkCards_Binh ()) {
			for (int i=0; i<thisPlayer.cards.Count; i++) {
				if (thisPlayer.cards [i].rectTransform.GetComponent<Image> ().color.r != 255)
					thisPlayer.cards [i].rectTransform.GetComponent<Image> ().color = new Color32 (255, 255, 255, 255);
			}
		}
	}

	int getMinDistance (List<float> d)
	{
		int indexMin = 0;
		float mind = d [0];
		for (int i=1; i<d.Count; i++) {
			if (mind > d [i]) {
				mind = d [i];
				indexMin = i;
			}
		}
		Debug.Log ("Distance min is " + mind);
		Debug.Log ("Index min is " + indexMin);
		return indexMin;
	}
}
