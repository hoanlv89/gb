using UnityEngine;
using System.Collections;
using SimpleJSON;

public class GameLieng : Game, IPokerGameLiked, IAutoReadyGame
{
	public Vector2[]  StaticPos9 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -235*y/720),//0
				new Vector2 (280, -210*y/720),//8
				new Vector2 (500, -110*y/720),//7
				new Vector2 (500, 120*y/720),//6
				new Vector2 (300, 265*y/720),//5
				new Vector2 (-300, 265*y/720),//4
				new Vector2 (-500, 120*y/720),//3
				new Vector2 (-500, -110*y/720),//2
				new Vector2 (-280, -210*y/720)//1
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
		new Vector2 (0, -100),//0
		new Vector2 (240, -100),//8
		new Vector2 (350, -20),//7
		new Vector2 (338, 75),//6
		new Vector2 (230, 150),//5
		new Vector2 (-230, 150),//4
		new Vector2 (-338, 75),//3
		new Vector2 (-350, -20),//2
		new Vector2 (-240, -100)//1
		
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
		new Vector2 (0, -265),//0
		new Vector2 (205, -150),//8
		new Vector2 (400, -75),//7
		new Vector2 (370, 120),//6
		new Vector2 (160, 196),//5
		new Vector2 (-160, 196),//4
		new Vector2 (-370, 120),//3
		new Vector2 (-400, -75),//2
		new Vector2 (-210, -150)//1
		
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
		
	public override void startGame (JSONArray jcards)
	{
		base.startGame (jcards);
		foreach (Card card in thisPlayer.cards) {
			GameObject.Destroy (card.rectTransform.gameObject);
		}
		thisPlayer.cards.Clear ();
		thisPlayer.initializePokerButtons ();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add (Card.decode_lieng (jcards [i].AsInt));
		}
		totalBetInPot = 0;
		maxTotalBetChipOfAPlayer = stake;
		gameScene.startDealing ();
		// phai de delay 0.8s vi ham betOnStart moi chay dc binh thuong.
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
			foreach (Player player in players) {
				player.totalBetChip = stake;
				player.betOnStart (stake);
			}
		}));
	}
		
	public override void updateReadyStatus ()
	{
		// TODO: do nothing, like in GamePoker
//		base.updateReadyStatus ();
//		gameScene.hideGButton ();
	}
		
	public void updateMaxTotalBetChipOfAPlayer (int totalBetChip)
	{
		if (maxTotalBetChipOfAPlayer < totalBetChip)
			maxTotalBetChipOfAPlayer = totalBetChip;	
	}
		
	public override void onReconnection(){
		base.onReconnection();
		
	}

	public override void finishThisGame (JSONArray finishArray)
	{
		gameScene.enableLeaveGameButton (3);
		gatherChipBetsIntoPot ();
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
			base.finishThisGame (finishArray);
			gameScene.controllerControl.hidePokerFunctionsOnFinish ();
				
			for (int i = 0; i < finishArray.Count; i++) {
				var jobj = finishArray [i];
				string name = jobj ["N"];
				int winnings = jobj ["M"].AsInt;
				int ag = jobj ["AG"].AsInt;
				JSONArray jcards = jobj ["ArrCard"].AsArray;
				JSONArray jcardsWin = jobj ["ArrWin"].AsArray;
					
				Player player = getPlayer (name);
				player.finishLieng (ag, winnings, jcards);
					
				if (winnings > 0) {
					// chuyen tien tu pot cho winner animation 0.6s
					transferChipToWinner (player);
				}
			}
		}));
	}
		
	public Vector2 getViewPositionOfChipBetPlayer (Player player)
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

	public Vector2 getViewPositionOfPlayersCard (float x0, float y0, float margin, float scale, int index, int count)
	{
		// x0 la toa do x cua trong tam
		// fix margin = 0.66
		float totalWidth = (margin * (count - 1) + 1) * Card.WIDTH;
		float startx = x0 + (-totalWidth * 0.5f + (0.5f + index * margin) * Card.WIDTH) * scale;
		
		return new Vector2 (startx, y0);
	}
		
	public Vector2 getViewPositionOfPlayersCard (Player player, float margin, float scale, int index, int count)
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
			
		int i = players.IndexOf (player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf (thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}
			
//		POSBet [i];
		// fix margin = 0.66
		float totalWidth = (margin * (count - 1) + 1) * Card.WIDTH;
		float startx = POSBet [i].x + (-totalWidth * 0.5f + (0.5f + index * margin) * Card.WIDTH) * scale;

		return new Vector2 (startx, POSBet [i].y);
	}
		
	public ChipBetControl getPotControl ()
	{
		if (chipPotControl == null) {
			RectTransform rectTransform = (RectTransform)GameObject.Instantiate (gameScene.ChipBet);
			rectTransform.SetParent (gameScene.cardLayer, false);
			chipPotControl = rectTransform.GetComponent<ChipBetControl> ();
			chipPotControl.totalValue = 0;
			chipPotControl.text.text = "";
			chipPotControl.setPosition (new Vector2 (0, Card.HEIGHT));
		}
		return chipPotControl;
	}
		
	public void gatherChipBetsIntoPot ()
	{
		Vector2 pos = ((RectTransform)getPotControl ().transform).anchoredPosition;
			
		for (int i = 0; i < players.Count; i++) {
			ChipBetControl chipBetControl = players [i].chipBetControl;
			if (chipBetControl == null)
				return;
			if (chipBetControl.totalValue == 0) {
				chipBetControl.destroy ();
				chipBetControl = null;
			} else {
				LeanTween.moveLocal (chipBetControl.transform.gameObject, new Vector3 (pos.x, pos.y, 0), 0.6f).setEase (LeanTweenType.easeOutQuart).setOnComplete(delegate() {
					getPotControl ().totalValue += chipBetControl.totalValue;
					chipBetControl.destroy ();
					chipBetControl = null;
					getPotControl ().updateValue ("Call", 0);
				});
			}
		}
	}
		
	void transferChipToWinner (Player winner)
	{
		Vector2 pos = winner.getChipsPos ();	
		LeanTween.moveLocal (getPotControl ().transform.gameObject, new Vector3 (pos.x, pos.y, 0), 0.6f).setEase (LeanTweenType.easeOutQuart).setOnComplete(delegate() {
			if (chipPotControl != null) {
				chipPotControl.destroy ();
				chipPotControl = null;
			}
		});
			
	}

}

