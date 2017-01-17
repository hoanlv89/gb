using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CardAction2 : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
		pos = GameApplication.game.thisPlayer.cards.IndexOf (card);
		y1 = GameApplication.game.thisPlayer.cards [0].orgPos.y;
		y2 = GameApplication.game.thisPlayer.cards [3].orgPos.y;
		y3 = GameApplication.game.thisPlayer.cards [8].orgPos.y;
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
	int index=100;
	int pos;
	public Card card;
	Vector3 mouseDown;
	float y1;
	float y2;
	float y3;
	public void onMoving () //Bat dau di chuyen
	{
		if (GameApplication.cubeia.gameId == GameType.BINH && ((GameSceneBinh)GameApplication.gameScene).isMovable) {
			mouseDown = Input.mousePosition;
			this.gameObject.transform.position = mouseDown;
			this.gameObject.transform.SetAsLastSibling();
			setBackColor();
		}

	}

	public void setBackColor(){
		for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
			GameApplication.game.thisPlayer.cards [i].rectTransform.GetComponent<Image> ().color = new Color32 (255, 255, 255, 255);
		}
		for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
			Card icard = GameApplication.game.thisPlayer.cards[i];
			float x = card.rectTransform.anchoredPosition.x;
			float y = card.rectTransform.anchoredPosition.y;
			if((x - icard.orgPos.x)	<=(Card.WIDTH*Card.thisPlayerScaleBinh/(2)) &&( x-icard.orgPos.x)>=0 &&
			   (y - icard.orgPos.y)	>=-(Card.HEIGHT*Card.thisPlayerScaleBinh/(2)) &&( y-icard.orgPos.y)<=0)
			{
				index=i;
				GameApplication.game.thisPlayer.cards [index].rectTransform.GetComponent<Image> ().color = new Color32 (160, 160, 160, 255);
				break;
			}
		}
	}

	public void endMoving(){
		if (index != 100) {
			Card.swapCardPos_Binh (pos, index);
			((GameSceneBinh)GameApplication.gameScene).updateTextBinh();
		} else {
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3(GameApplication.game.thisPlayer.getInHandCardsPosBinh(pos).x, GameApplication.game.thisPlayer.getInHandCardsPosBinh(pos).y, 0), 0.1f);
		}

		for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
			GameApplication.game.thisPlayer.cards [i].rectTransform.GetComponent<Image> ().color = new Color32 (255, 255, 255, 255);
		}
		foreach(Card card in GameApplication.game.thisPlayer.cards){
//			card.removeEventTriggerBinh();
			card.addEventTriggerBinh();
			card.rectTransform.SetAsLastSibling();
		}

	}

	public void swapThisPlayerCardOnHand (int  index1, int index2)
	{
		Card tmp = GameApplication.game.thisPlayer.cards[index1];
		GameApplication.game.thisPlayer.cards[index1] = GameApplication.game.thisPlayer.cards[index2];
		GameApplication.game.thisPlayer.cards[index2] = tmp;
		
		Card card1 = GameApplication.game.thisPlayer.cards [index1];
		Card card2 = GameApplication.game.thisPlayer.cards [index2];
		
		Vector3 vtmp = card1.orgPos;
		card1.orgPos = card2.orgPos;
		card2.orgPos = vtmp;
		
		LeanTween.moveLocal (card1.rectTransform.gameObject, new Vector3(card1.orgPos.x, card1.orgPos.y, 0), 0.1f);
		LeanTween.moveLocal (card2.rectTransform.gameObject, new Vector3(card2.orgPos.x, card2.orgPos.y, 0), 0.1f);
	}
}

