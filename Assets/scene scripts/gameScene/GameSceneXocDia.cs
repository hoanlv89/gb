using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using UnityEngine.UI;
using System.Collections.Generic;
using SimpleJSON;

public class GameSceneXocDia : GameScene
{

	public Sprite[] sxus = new Sprite[5];
	public List<RectTransform> listXuDatCuocTrenBan = new List<RectTransform>();
	public Dictionary<string, string> betTotal =
		new Dictionary<string, string>();

	public override void Start ()
	{
		base.Start ();
		Debug.Log ("GameSceneXocDia onStart");

		sxus[0] = controllerControl.xocDiaFunction.img_s1;
		sxus[1] = controllerControl.xocDiaFunction.img_s2;
		sxus[2] = controllerControl.xocDiaFunction.img_s3;
		sxus[3] = controllerControl.xocDiaFunction.img_s4;
		sxus[4] = controllerControl.xocDiaFunction.img_s5;
	}
	
	protected override void initializeView ()
	{
		base.initializeView ();
		controllerControl.bgControl.bg_tienlen.gameObject.SetActive(false);
		controllerControl.bgControl.bg_xocdia.gameObject.SetActive(true);

		buttonLeaveTable.GetComponent<Button> ().onClick.AddListener (delegate {
			var jsonData = new JSONClass ();
			jsonData ["evt"] = "autoExit";
			cubeia.sendDataGame (jsonData);
		});
		controllerControl.xocDiaFunction.gameObject.SetActive(true);
	}
	
	public override void initializeViewOfPlayers ()
	{
		base.initializeViewOfPlayers ();
		if (game.thisPlayer != null)
			game.thisPlayer.initializeTienlenButtons ();
	}
	
	public override void startDealing ()
	{
		base.startDealing ();
		List<Card> thisPlayerCards = game.thisPlayer.cards;
		int length = game.thisPlayer.cards.Count;
		
		foreach (Player player in game.players) {
			if (player is OtherPlayer) {
				OtherPlayer otherPlayer = (OtherPlayer)player;
				otherPlayer.setCardTransform ((RectTransform)Instantiate (TransformCardBackWithNumber));
			}
		}
		for (int i = 0; i < length; i++) {
			Card card = thisPlayerCards [i];
			card.rectTransform = (RectTransform)Instantiate (TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (cardLayer.transform, false);
			card.rectTransform.anchoredPosition = new Vector2 (0, 0);
			
			Button button = card.rectTransform.GetComponent<Button> ();
			button.onClick.AddListener (delegate {
				card.invertSelected ();
				Debug.Log (card.getResourceName () + " is " + (card.isSelected ? "isSelected" : "isUnSelected"));
			});
			
			// this player dealing effect
			//			float x = -Game.WIDTH * 0.5f * 0.60f + i * Card.WIDTH * Card.thisPlayerScale * 0.65f;
			float x = game.thisPlayer.getInHandCardsPos (card);
			float y = GameScene.thisPlayerCardInHandPosY;
			LeanTween.scale (card.rectTransform.gameObject, new Vector3 (Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.1f + i * 0.1f);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (x, y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.1f + i * 0.1f);
			
			// other players dealing
			foreach (Player player in game.players) {
				if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					
					RectTransform movingCard = (RectTransform)Instantiate (TransformCard);
					movingCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					movingCard.SetParent (cardLayer.transform);
					movingCard.anchoredPosition = new Vector2 (0, 0);
					movingCard.localScale = new Vector3 (1, 1, 1);

					Vector3 target = new Vector3 (otherPlayer.rectTransform.anchoredPosition.x + otherPlayer.cardTransform.anchoredPosition.x, otherPlayer.rectTransform.anchoredPosition.y + otherPlayer.cardTransform.anchoredPosition.y, 0f);
					LeanTween.moveLocal (movingCard.gameObject, target, 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.1f + i * 0.1f).setDestroyOnComplete (true);
					
					int ncards = i + 1;
					otherPlayer.cardsInHand = ncards;
					otherPlayer.cardTransform.Find ("Text").GetComponent<Text> ().text = "" + ncards;
				}
			}
		}
	}

	public void xoaXuDatCuocTrenBan ()
	{
		foreach(RectTransform rect in listXuDatCuocTrenBan)
			Destroy(rect.gameObject);
	}
}