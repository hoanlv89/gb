using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using System.Collections.Generic;

public class GameScenePoker : GameScene, IPokerSceneLiked
{
	public RectTransform BestPokerHand;
	public List<Card> communityCards = new List<Card>();
	RectTransform bestHandTransform;
	
	public override void Start()
	{
		base.Start();
		Debug.Log("GameScenePoker onStart");
	}
	
	protected override void initializeView()
	{
		base.initializeView();
		BestPokerHand = Resources.Load("prefabs/BestPokerHand", typeof(RectTransform)) as RectTransform;
		buttonLeaveTable.GetComponent<Button>().onClick.AddListener(delegate {
			var jsonData = new JSONClass();
			jsonData ["evt"] = "autoExit";
			cubeia.sendDataGame(jsonData);
		});
	}
	
	public override void initializeViewOfPlayers()
	{
		base.initializeViewOfPlayers();
		// initialize  khi start game
		//		if (game.thisPlayer != null)
		//			game.thisPlayer.initializePokerButtons();
	}
	
	public override void startDealing()
	{
		base.startDealing();
		removeBestHand();
		List<Card> thisPlayerCards = game.thisPlayer.cards;
		int length = game.thisPlayer.cards.Count;
		foreach (Player player in game.players) {
			if (player is OtherPlayer)
				((OtherPlayer)player).cardsInHandList.Clear();
		}
		
		int startSiblingIndex = game.thisPlayer.image_curtain.transform.GetSiblingIndex() + 1;
		
		for (int i = 0; i < length; i++) {
			Card card = thisPlayerCards [i];
			card.rectTransform = (RectTransform)Instantiate(TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(game.thisPlayer.rectTransform, false);
			card.rectTransform.SetSiblingIndex(startSiblingIndex + i);
			card.rectTransform.anchoredPosition = new Vector2(0, 190) - game.thisPlayer.rectTransform.anchoredPosition;
			
			// other players dealing
			for (int j = 0; j< game.players.Count; j++) {
				Player player = game.players [j];
				if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					
					RectTransform movingCard = (RectTransform)Instantiate(TransformCard);
					movingCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					movingCard.SetParent(cardOnHandLayer.transform, false);
					movingCard.localScale = new Vector3(0.7f, 0.7f, 1);
					movingCard.anchoredPosition = new Vector2(0f, 190f);
					if (i < 1) {
						movingCard.Rotate(new Vector3(36f, 0, 10f));
					} else {
						movingCard.anchoredPosition = movingCard.anchoredPosition + new Vector2(5f, 0.5f);
						movingCard.Rotate(new Vector3(36f, 0, -6f));
					}
					
					Vector2 target = ((GamePoker)game).getViewPositionOfOtherPlayersCard(player);
					LeanTween.moveLocal(movingCard.gameObject, new Vector3(target.x, target.y, 0f), 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +(j + i * game.players.Count) * 0.2f);
					
					otherPlayer.cardsInHandList.Add(movingCard);
				}
			}
		}
		
		GameObject card1 = thisPlayerCards [0].rectTransform.gameObject;
		LeanTween.scale(card1, new Vector3(1.2f, 1.2f, 1f), 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +0 * 0.2f);
		LeanTween.moveLocal(card1, new Vector3(60, 0, 0), 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +0 * 0.2f);
		LeanTween.rotateZ(card1, 15, 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +0 * 0.2f);

		GameObject card2 = thisPlayerCards [1].rectTransform.gameObject;
		LeanTween.scale(card2, new Vector3(1.2f, 1.2f, 1f), 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +1 * 0.2f);
		LeanTween.moveLocal(card2, new Vector3(90, 0, 0), 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +1 * 0.2f);
		LeanTween.rotateZ(card2, 350, 0.6f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +1 * 0.2f);
	}
	
	public void dealCommunityCards(JSONArray jcards)
	{
		float totalWitdh = Card.WIDTH * 7.5f; // 5 * 1.5f
		float startPos = -totalWitdh * 0.5f + Card.WIDTH * 0.5f * 1.5f;
		
		for (int i = communityCards.Count; i < jcards.Count; i++) {
			Card card = Card.decode_poker(jcards [i].AsInt);
			card.rectTransform = (RectTransform)Instantiate(TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(cardLayer.transform, false);
			card.rectTransform.localScale = new Vector3(1.5f, 1.5f, 1f);
			
			card.rectTransform.anchoredPosition = new Vector2(startPos + i * Card.WIDTH * 1.5f, 0);
			communityCards.Add(card);
		}
	}
	
	public void showOnTurnRequest(string str)
	{
		if (str != null & str.Length > 0) {
			bestHandTransform = Instantiate(BestPokerHand);
			bestHandTransform.SetParent(controllerControl.transform, false);
			bestHandTransform.SetSiblingIndex(0);
			bestHandTransform.anchoredPosition = new Vector2(0, -30);
			Transform text = bestHandTransform.Find("Text");
			text.GetComponent<Text>().text = str;
			text.GetComponent<Gradient>().enabled = false;
			text.GetComponent<Shadow>().enabled = false;
		}
	}
	
	public void removeOnTurnRequest()
	{
		removeBestHand();
		controllerControl.raiseOptionControl.gameObject.SetActive(false);
	}
	
	public void showBestHand(string str)
	{
		if (str != null & str.Length > 0) {
			bestHandTransform = Instantiate(BestPokerHand);
			bestHandTransform.SetParent(cardLayer, false);
			bestHandTransform.anchoredPosition = new Vector2(0, -30);
			Transform text = bestHandTransform.Find("Text");
			text.GetComponent<Text>().text = str;
			text.GetComponent<Gradient>().enabled = true;
			text.GetComponent<Shadow>().enabled = true;
		}
	}
	
	public void removeBestHand()
	{
		if (bestHandTransform != null) {
			Destroy(bestHandTransform.gameObject);
			bestHandTransform = null;
		}
	}
}

