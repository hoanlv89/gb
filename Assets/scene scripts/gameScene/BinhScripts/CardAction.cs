using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class CardAction : MonoBehaviour
{
	int orgSiblingIndex = 0;
	int stt = 0; //So thu tu trong list quan bai
	//List<Card> listCard;
	int indexSwap = -1;
	float dPos = 1000000;
	Card card;

	// Use this for initialization
	void Start ()
	{
		orgSiblingIndex = transform.GetSiblingIndex ();
		if (Card.checkCards_Binh ()) {
			//listCard = GameApplication.game.thisPlayer.cards;
			for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
				if (this.gameObject.GetComponent<RectTransform> () == GameApplication.game.thisPlayer.cards [i].rectTransform) {
					stt = i;
					break;
				}
			}
		}
		//GameSceneBinh.isMovable = true;
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
	void updateSiblingIndex (int newIndex)
	{
		this.gameObject.transform.SetSiblingIndex (newIndex);
		orgSiblingIndex = newIndex;
	}

	public void onMoving () //Bat dau di chuyen
	{
		if (GameApplication.cubeia.gameId == GameType.BINH && ((GameSceneBinh)GameApplication.gameScene).isMovable) {
			Vector3 mouseDown = Input.mousePosition;
			this.gameObject.transform.position = mouseDown;
			this.gameObject.transform.SetSiblingIndex (14);

			getOverlapIndex ();
		}
	}
	
	public void endMoving () //Ket thuc di chuyen
	{
		if (GameApplication.gameScene is GameSceneBinh) {
			GameSceneBinh gameSceneBinh = (GameSceneBinh)GameApplication.gameScene;
			ThisPlayer thisPlayer = GameApplication.game.thisPlayer;

			if (gameSceneBinh.isMovable) {
				this.gameObject.transform.SetSiblingIndex (orgSiblingIndex);
				if (dPos == 1000000) {
					Debug.Log("chay vao day");
					this.gameObject.transform.SetSiblingIndex (orgSiblingIndex);
					LeanTween.moveLocal (gameObject, new Vector3 (thisPlayer.cards [stt].orgPos.x, thisPlayer.cards [stt].orgPos.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.05f);
				} else {
					Debug.Log("hay chay vao day");
					if (indexSwap >= 0){
						Card.swapCardPos_Binh (stt, indexSwap);
//						Card temp = GameApplication.game.thisPlayer.cards[indexSwap];
//						LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3(GameApplication.game.thisPlayer.getInHandCardsPosBinh(indexSwap).x, GameApplication.game.thisPlayer.getInHandCardsPosBinh(indexSwap).y, 0), 0.1f);
//						LeanTween.moveLocal (temp.rectTransform.gameObject, new Vector3(GameApplication.game.thisPlayer.getInHandCardsPosBinh(stt).x, GameApplication.game.thisPlayer.getInHandCardsPosBinh(stt).y, 0), 0.1f);
//						swapThisPlayerCardOnHand(stt,indexSwap);
					}
				}
			
				gameSceneBinh.updateTextBinh ();
				resetCardColor ();
				indexSwap = -1;
				dPos = 1000000;
			}
		}
	}

	public void onDrop(){
		SuperScene.instance.showToast("On Drop");
	}

	void resetCardColor ()
	{
		if (Card.checkCards_Binh ()) {
			for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
				if (GameApplication.game.thisPlayer.cards [i].rectTransform.GetComponent<Image> ().color.r != 255)
					GameApplication.game.thisPlayer.cards [i].rectTransform.GetComponent<Image> ().color = new Color32 (255, 255, 255, 255);
			}
		}
	}
	void getOverlapIndex ()
	{
		if (GameApplication.game.thisPlayer.cards != null && GameApplication.game.thisPlayer.cards.Count > 0) {
			resetCardColor ();
			int countOverlapse = 0;
			List<int> idexCardOver = new List<int> ();
			List<float> distances = new List<float> ();
			for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
				if (stt != i) {
					if (GameApplication.game.thisPlayer.cards [stt].isOverlapse_Binh (GameApplication.game.thisPlayer.cards [i])) {
						idexCardOver.Add (i);
						countOverlapse++;
					}
				}
			}
			if (countOverlapse <= 0) {//Khong co va cham
				resetCardColor ();
				indexSwap = -1;
				dPos = 1000000;
			} else {
				for (int i=0; i<idexCardOver.Count; i++) {
					float d = Card.getSpaceOf2Cards_Binh (stt, idexCardOver [i]);
					distances.Add (d);
					dPos=d;
				}
				GameApplication.game.thisPlayer.cards [idexCardOver [getMinDistance (distances)]].rectTransform.GetComponent<Image> ().color = new Color32 (160, 160, 160, 255);
				indexSwap = idexCardOver [getMinDistance (distances)];
			}
		}
	}
	int getMinDistance(List<float> d){
		int indexMin=0;
		float mind = d [0];
		for(int i=1; i<d.Count; i++){
			if(mind>d[i]){
				mind=d[i];
				indexMin=i;
			}
		}
		Debug.Log("Distance min is " + mind);
		Debug.Log("Index min is " + indexMin);
		return indexMin;
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
	}
}
