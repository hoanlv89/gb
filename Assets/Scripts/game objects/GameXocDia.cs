using UnityEngine;
using System.Collections;
using SimpleJSON;

public class GameXocDia: Game, IAutoReadyGame
{
	public Vector2[]  StaticPos9 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2(-40, -265*y/720),
				new Vector2(530, -115*y/720),
				new Vector2(530, 125*y/720),
				new Vector2(350, 265*y/720),
				new Vector2(165, 265*y/720),
				new Vector2(-165, 265*y/720),
				new Vector2(-350, 265*y/720),
				new Vector2(-530, 125*y/720),
				new Vector2(-530, -115*y/720)
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

	Vector2[] POSCuaDat = {
		new Vector2(-245, 70),
		new Vector2(245, 70),
		new Vector2(-260, -100),
		new Vector2(-87, -100),
		new Vector2(87, -100),
		new Vector2(260 , -100)
	};
	
	public override void startGame(JSONArray jcards)
	{
		base.startGame(jcards);
		
		thisPlayer.cards.Clear();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add(Card.decode_tienlen(jcards [i].AsInt));
		}
		
		thisPlayer.setOnPlayingPosition();
		gameScene.disableLeaveGameButton();
		gameScene.startDealing();
	}

	public override void onReconnection(){
		base.onReconnection();
		
	}

	public override void finishThisGame(JSONArray finishArray)
	{
		base.finishThisGame(finishArray);
		gameScene.enableLeaveGameButton(3);
//		gameScene.controllerControl.tienlenFunctions.hideTienLenOnTurnFuntions();
	}

	public Vector2 getVitriCuaDat (int cuadat)
	{
		return POSCuaDat[cuadat -1];
	}
}
