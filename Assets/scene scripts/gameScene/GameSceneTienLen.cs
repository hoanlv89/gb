using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using UnityEngine.UI;
using System.Collections.Generic;

public class GameSceneTienLen : GameScene
{

	public override void Start()
	{
		base.Start();
		Debug.Log("GameSceneTienLen onStart");
	}
	
	protected override void initializeView()
	{
		base.initializeView();
		buttonLeaveTable.GetComponent<Button>().onClick.AddListener(delegate {
			LeaveRequestPacket packet = new LeaveRequestPacket();
			packet.tableid = game.id;
			cubeia.sendPacket(packet);
		});
	}
	
	
	public override void initializeViewOfPlayers()
	{
		base.initializeViewOfPlayers();
		if (game.thisPlayer != null)
			game.thisPlayer.initializeTienlenButtons();
	}
	
	public override void startDealing()
	{
		base.startDealing();
		List<Card> thisPlayerCards = game.thisPlayer.cards;
		int length = game.thisPlayer.cards.Count;
		
		foreach (Player player in game.players) {
			if (player is OtherPlayer) {
				OtherPlayer otherPlayer = (OtherPlayer)player;
				otherPlayer.setCardTransform((RectTransform)Instantiate(TransformCardBackWithNumber));
			}
		}
		for (int i = 0; i < length; i++) {
			Card card = thisPlayerCards [i];
			card.rectTransform = (RectTransform)Instantiate(TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(cardLayer.transform, false);
			card.rectTransform.anchoredPosition = new Vector2(0, 0);
			
			Button button = card.rectTransform.GetComponent<Button>();
			button.onClick.AddListener(delegate {
				card.invertSelected();
//				Debug.Log(card.getResourceName() + " is " + (card.isSelected ? "isSelected" : "isUnSelected"));
			});
			
			// this player dealing effect
			//			float x = -Game.WIDTH * 0.5f * 0.60f + i * Card.WIDTH * Card.thisPlayerScale * 0.65f;
			float x = game.thisPlayer.getInHandCardsPos(card);
			float y = thisPlayerCardInHandPosY;
			LeanTween.scale(card.rectTransform.gameObject, new Vector3(Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f);
			LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(x, y, 0f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f);
			
			// other players dealing
			foreach (Player player in game.players) {
				if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					
					RectTransform movingCard = (RectTransform)Instantiate(TransformCard);
					movingCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					movingCard.SetParent(cardLayer.transform);
					movingCard.anchoredPosition = new Vector2(0, 0);
					movingCard.localScale = new Vector3(1, 1, 1);

					Vector3 target = new Vector3(otherPlayer.rectTransform.anchoredPosition.x + otherPlayer.cardTransform.anchoredPosition.x, otherPlayer.rectTransform.anchoredPosition.y + otherPlayer.cardTransform.anchoredPosition.y, 0f);
					LeanTween.moveLocal(movingCard.gameObject, target, 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f).setDestroyOnComplete(true);
					
					otherPlayer.setCards(i + 1);
				}
			}
		}
	}
}