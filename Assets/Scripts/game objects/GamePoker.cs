using UnityEngine;
using System.Collections;
using SimpleJSON;


public class GamePoker: Game, IPokerGameLiked, IAutoReadyGame
{
	public Vector2[]  StaticPos9 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2(0, -235*y/720),
				new Vector2(-280, -210*y/720),
				new Vector2(-500, -110*y/720),
				new Vector2(-500, 120*y/720),
				new Vector2(-300, 265*y/720),
				new Vector2(300, 265*y/720),
				new Vector2(500, 120*y/720),
				new Vector2(500, -110*y/720),
				new Vector2(280, -210*y/720)
			};
		}
	}
	
	public override Vector2[] POS2 {
		get {
			return new Vector2[]{
				StaticPos9 [0],
				StaticPos9 [3]
			};
		}
	}
	
	public override Vector2[] POS4 {
		get {
			return new Vector2[]{
				StaticPos9 [0],
				StaticPos9 [2],
				StaticPos9 [4],
				StaticPos9 [7] 
			};
		}
	}
	
	public override Vector2[] POS5 {
		get {
			return new Vector2[]{
				StaticPos9 [0],
				StaticPos9 [2],
				StaticPos9 [4],
				StaticPos9 [5], 
				StaticPos9 [7] 
			};
		}
	}
	
	public override Vector2[] POS9 {
		get {
			return StaticPos9;
		}
	}
	
	public static Vector2[] StaticPosBet9 = {
		new Vector2(0, -100),
		new Vector2(-240, -100),
		new Vector2(-350, -20),
		new Vector2(-338, 75),
		new Vector2(-230, 150),
		new Vector2(230, 150),
		new Vector2(338, 75),
		new Vector2(350, -20),
		new Vector2(240, -100)
		
	};
	public Vector2[] POSBet2 = {
		StaticPosBet9 [0],
		StaticPosBet9 [3]
	};
	public Vector2[] POSBet4 = {
		StaticPosBet9 [0],
		StaticPosBet9 [2],
		StaticPosBet9 [4],
		StaticPosBet9 [7] 
	};
	public Vector2[] POSBet5 = {
		StaticPosBet9 [0],
		StaticPosBet9 [2],
		StaticPosBet9 [4],
		StaticPosBet9 [5], 
		StaticPosBet9 [7] 
	};
	public Vector2[] POSBet9 = StaticPosBet9;
	public static Vector2[] StaticPosOtherCard9 = {
		new Vector2(0, -100),
		new Vector2(-210, -150),
		new Vector2(-400, -75),
		new Vector2(-370, 120),
		new Vector2(-160, 196),
		new Vector2(160, 196),
		new Vector2(370, 120),
		new Vector2(400, -75),
		new Vector2(205, -150)
		
	};
	public Vector2[] POSOtherCard2 = {
		StaticPosOtherCard9 [0],
		StaticPosOtherCard9 [3]
	};
	public Vector2[] POSOtherCard4 = {
		StaticPosOtherCard9 [0],
		StaticPosOtherCard9 [2],
		StaticPosOtherCard9 [4],
		StaticPosOtherCard9 [7] 
	};
	public Vector2[] POSOtherCard5 = {
		StaticPosOtherCard9 [0],
		StaticPosOtherCard9 [2],
		StaticPosOtherCard9 [4],
		StaticPosOtherCard9 [5], 
		StaticPosOtherCard9 [7] 
	};
	public Vector2[] POSOtherCard9 = StaticPosOtherCard9;
	//**************************************
	private int _maxTotalBetChipOfAPlayer;
	public int maxTotalBetChipOfAPlayer{
		get{
			return _maxTotalBetChipOfAPlayer;
		}
		set{
			_maxTotalBetChipOfAPlayer = value;
		}
	}
	public int totalBetInPot;
	public ChipBetControl chipPotControl;
	Player dealer;
	public bool hasOnePlayerBetOnTurn;
	
	public override void startGame(JSONArray jcards)
	{
		base.startGame(jcards);
		foreach (Card card in thisPlayer.cards) {
			GameObject.Destroy(card.rectTransform.gameObject);
		}
		thisPlayer.cards.Clear();
		thisPlayer.initializePokerButtons();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add(Card.decode_poker(jcards [i].AsInt));
		}
		foreach (Player player in players) {
			player.totalBetChip = 0;
		}
		hasOnePlayerBetOnTurn = false;
		totalBetInPot = 0;
		maxTotalBetChipOfAPlayer = 2 * stake;
		gameScene.startDealing();
		((GameScenePoker)gameScene).communityCards.Clear();
	}
	
	public void setDealer(string dealerName)
	{
		dealer = getPlayer(dealerName);
		dealer.text_name.text = "(D)" + dealer.displayName;
		
		int dealerIndex = players.IndexOf(dealer);
		int smallBlindIndex = (dealerIndex + 1) % players.Count;
		int bigBlindIndex = (dealerIndex + 2) % players.Count;
		int firstBet = (dealerIndex + 3) % players.Count;
		
		players [smallBlindIndex].smallBlind(stake);
		players [bigBlindIndex].bigBlind(stake);
		players [firstBet].onTurnPoker();
		
		updateMaxTotalBetChipOfAPlayer(2 * stake);
	}
	
	public override void updateReadyStatus()
	{
		// do nothing
		//		base.updateReadyStatus();
	}
	
	public void updateMaxTotalBetChipOfAPlayer(int totalBetChip)
	{
		if (maxTotalBetChipOfAPlayer < totalBetChip)
			maxTotalBetChipOfAPlayer = totalBetChip;	
	}

	public override void onReconnection(){
		base.onReconnection();
		
	}

	public override void finishThisGame(JSONArray finishArray)
	{
		gatherChipBetsIntoPot();
		gameScene.StartCoroutine(Utils.cr_runDelayed(0.8f, delegate {
			base.finishThisGame(finishArray);
			gameScene.controllerControl.hidePokerFunctionsOnFinish();
			if (dealer != null && dealer.text_name != null)
				dealer.text_name.text = dealer.displayName;
			
			for (int i = 0; i < finishArray.Count; i++) {
				var jobj = finishArray [i];
				string name = jobj ["N"];
				int winnings = jobj ["M"].AsInt;
				int s = jobj ["S"].AsInt;
				int ag = jobj ["AG"].AsInt;
				JSONArray jcards = jobj ["ArrCard"].AsArray;
				JSONArray jcardsWin = jobj ["ArrWin"].AsArray;
				
				Player player = getPlayer(name);
				player.finishPoker(s, ag, winnings, jcards, jcardsWin);
				
				if (winnings > 0) {
					// chuyen tien tu pot cho winner animation 0.6s
					transferChipToWinner(player);
				}
			}
		}));
		
		gameScene.StartCoroutine(Utils.cr_runDelayed(6f, delegate {
			foreach (Card card in ((GameScenePoker)gameScene).communityCards) {
				if (card != null)
					GameObject.Destroy(card.rectTransform.gameObject);
			}
		}));
	}
	
	public Vector2 getViewPositionOfChipBetPlayer(Player player)
	{
		int maxsize = 4;
		if(this is GameSam || this is GameXiTo ){
			maxsize = 5;
		} else if(this is GamePoker || this is GameXocDia || this is GameLieng ){
			maxsize = 9;
		}

		int size = players.Count;
		Vector2[] POSBet = POSBet2;
		if (size > 5 || (size == 5 && maxsize > 5))
			POSBet = POSBet9;
		else if (size > 4 || (size == 4 && maxsize > 4))
			POSBet = POSBet5;
		else if (size > 2)
			POSBet = POSBet4;
		int viewSize = POSBet.Length;
		
		int i = players.IndexOf(player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf(thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}
		
		return POSBet [i];
	}
	
	public Vector2 getViewPositionOfOtherPlayersCard(Player player)
	{
		int maxsize = 4;
		if(this is GameSam || this is GameXiTo ){
			maxsize = 5;
		} else if(this is GamePoker || this is GameXocDia || this is GameLieng ){
			maxsize = 9;
		}

		int size = players.Count;
		Vector2[] POSBet = POSOtherCard2;
		if (size > 5 || (size == 5 && maxsize > 5))
			POSBet = POSOtherCard9;
		else if (size > 4 || (size == 4 && maxsize > 4))
			POSBet = POSOtherCard5;
		else if (size > 2)
			POSBet = POSOtherCard4;
		int viewSize = POSBet.Length;
		
		int i = players.IndexOf(player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf(thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}
		
		return POSBet [i];
	}
	
	public ChipBetControl getPotControl()
	{
		if (chipPotControl == null) {
			RectTransform rectTransform = (RectTransform)GameObject.Instantiate(gameScene.ChipBet);
			rectTransform.SetParent(gameScene.cardLayer, false);
			chipPotControl = rectTransform.GetComponent<ChipBetControl>();
			chipPotControl.totalValue = 0;
			chipPotControl.text.text = "0";
			chipPotControl.setPosition(new Vector2(0, Card.HEIGHT));
		}
		return chipPotControl;
	}
	
	public void gatherChipBetsIntoPot()
	{
		Vector2 pos = ((RectTransform)getPotControl().transform).anchoredPosition;
		
		for (int i = 0; i < players.Count; i++) {
			ChipBetControl chipBetControl = players [i].chipBetControl;
			if (chipBetControl == null)
				return;
			if (chipBetControl.totalValue == 0) {
				chipBetControl.destroy();
				chipBetControl = null;
			} else {
				LeanTween.moveLocal(chipBetControl.transform.gameObject, new Vector3(pos.x, pos.y, 0), 0.6f).setEase(LeanTweenType.easeOutQuart);
				gameScene.StartCoroutine(Utils.cr_runDelayed(0.4f, delegate() {
					getPotControl().totalValue += chipBetControl.totalValue;
					getPotControl().text.text = Utils.formatCurrency(getPotControl().totalValue);
					chipBetControl.destroy();
					chipBetControl = null;
					getPotControl().updateValue("Call", 0);
				}));
			}
		}
	}
	
	void transferChipToWinner(Player winner)
	{
		Vector2 pos = winner.getChipsPos();
		
		LeanTween.moveLocal(getPotControl().transform.gameObject, new Vector3(pos.x, pos.y, 0), 0.6f).setEase(LeanTweenType.easeOutQuart);
		gameScene.StartCoroutine(Utils.cr_runDelayed(0.6f, delegate() {
			if (chipPotControl != null) {
				chipPotControl.destroy();
				chipPotControl = null;
			}
		}));
		
	}
}