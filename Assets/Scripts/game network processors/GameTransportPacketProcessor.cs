using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using SimpleJSON;
using System.Threading;
using System.Collections.Generic;
using UnityEngine.UI;
using System;

public class GameTransportPacketProcessor
{
	/* 
	 * this function runs on MainThread
	 */
	public static void handleGameTransportPacket (GameTransportPacket gameTransportPacket)
	{
		CubeiaClient cubeia = GameApplication.cubeia;
		cubeia.tableId = gameTransportPacket.tableid;

		string jsonGameTransportPacket = System.Text.Encoding.UTF8.GetString (gameTransportPacket.gamedata);
		Debug.Log ("GameTransportPacket: " + jsonGameTransportPacket);
		
		var gameData = JSONNode.Parse (jsonGameTransportPacket);

//		if (!GamesLogs.IN_REPLAY_MODE) {// quan trong
//			GamesLogs.setThisPlayerName (GameApplication.user.inGameName);
//			GamesLogs.setTableID (cubeia.tableId);
//			GamesLogs.addGameLog (jsonGameTransportPacket);
//		}

		switch (cubeia.gameId) {
		case GameType.POKER:
			handlePokerGameTransportPacket (gameData);
			break;
		case GameType.XITO:
			handleXitoGameTransportPacket (gameData);
			break;
		case GameType.LIENG:
			handleLiengGameTransportPacket (gameData);
			break;
		case GameType.TIENLEN:
			handleTienlenGameTransportPacket (gameData);
			break;
		case GameType.BINH:
			handleBinhGameTransportPacket (gameData);
			break;
		case GameType.SAM:
			handleSAMGameTransportPacket (gameData);
			break;
		case GameType.XOCDIA:
			handleXocDiaGameTransportPacket (gameData);
			break;
		case GameType.TALA:
			handleTalaGameTransportPacket (gameData);
			break;
		case GameType.DUMMY:
			handleDummyGameTransportPacket (gameData);
			break;
		case GameType.CHAN:
			handleChanGameTransportPacket (gameData);
			break;
		case GameType.G9K:
			handle9KGameTransportPacket (gameData);
			break;
		default:
			generalHandle (gameData);
			break;
		}
		return;

	}

	static void generalHandle (JSONNode gameData)
	{
		User user = GameApplication.user;
		Game game = GameApplication.game;
		GameSceneControl gsct = new GameSceneControl ();
		string evt = gameData ["evt"];

		if (evt.Equals ("ctable")) {
			game.state = Game.State.WAITING;
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfig (data ["N"], data ["M"].AsInt, data ["Id"].AsInt, data ["T"].AsInt, data ["AG"].AsInt, data ["V"].AsInt);
			Tracking.sendCtable (data ["Id"].AsInt, data ["M"].AsInt);
			var jpl = data ["ArrP"].AsArray [0];
			
			int av = jpl ["Av"].AsInt;
			long fid = jpl ["FId"].AsLong;
			string url = (fid > 0) ? Utils.buildFBAvatar("" + fid) : Utils.buildAvatar (jpl ["Url"], av);
			
			Player player = game.addPlayer (jpl ["N"], jpl ["AG"].AsInt, jpl ["LQ"].AsInt, jpl ["VIP"].AsInt, jpl ["isStart"].AsBool, jpl ["IK"].AsInt, url, jpl ["sIP"]);

			game.hostPlayer = player;

			game.updateAllPlayersViewPosition ();

			game.gameScene.enableLeaveGameButton ();
			game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
			game.gameScene.controllerControl.xocDiaFunction.getValue();
			game.gameScene.controllerControl.xocDiaFunction.changeBackground(0);
			int mark = data["M"].AsInt;
			gsct.showTableGameDT(mark);
		} else if (evt.Equals ("stable")) {
			// clear table khi chuyen tu vtable sang stable
//						game.clearTable();
			game.state = Game.State.WAITING;
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfig (data ["N"], data ["M"].AsInt, data ["Id"].AsInt, data ["T"].AsInt, data ["AG"].AsInt, data ["V"].AsInt);

			JSONArray jarr = data ["ArrP"].AsArray;
			
			List<Player> plist = new List<Player> ();
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				
				int av = jpl ["Av"].AsInt;
				long fid = jpl ["FId"].AsLong;
				string url = (fid > 0) ? Utils.buildFBAvatar("" + fid) : Utils.buildAvatar (jpl ["Url"], av);
				bool isReady = (game is GameXocDia) ? true : jpl ["isStart"].AsBool;

				Player player = game.addPlayer (jpl ["N"], jpl ["AG"].AsInt, jpl ["LQ"].AsInt, jpl ["VIP"].AsInt, isReady, jpl ["IK"].AsInt, url, jpl ["sIP"]);
				plist.Add (player);
				player.D = jpl ["D"].AsInt;
				int mark = data["M"].AsInt;
				gsct.showTableGameDT(mark);
			}
			Debug.Log ("stable, plist size: " + plist.Count);

			game.players = plist;
			game.updateAllPlayersViewPosition (withEffect:false);
			game.hostPlayer = game.players [0];
			game.gameScene.enableLeaveGameButton ();
			game.updateReadyStatus ();
			game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
			game.gameScene.controllerControl.xocDiaFunction.getValue();
			game.gameScene.controllerControl.xocDiaFunction.changeBackground(0);
			
		} else if (evt.Equals ("jtable")) {
			// khong thay doi trang tahi game khi gap jtable
//			game.state = Game.State.WAITING;

			var jpl = JSONNode.Parse (gameData ["data"]);
			int av = jpl ["Av"].AsInt;
			long fid = jpl ["FId"].AsLong;
			string url = (fid > 0) ? Utils.buildFBAvatar("" + fid) : Utils.buildAvatar (jpl ["Url"], av);
			
			game.addPlayer (jpl ["N"], jpl ["AG"].AsInt, jpl ["LQ"].AsInt, jpl ["VIP"].AsInt, jpl ["isStart"].AsBool, jpl ["IK"].AsInt, url, jpl ["sIP"]);
			game.updateAllPlayersViewPosition ();
			game.updateReadyStatus ();
			game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
			
			if (game.players.Count == 2)
				SoundManager.instance.playKnock ();
			
		} else if (evt.Equals ("vtable")) {
			game.state = Game.State.VIEWING;
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfig (data ["N"], data ["M"].AsInt, data ["Id"].AsInt, data ["T"].AsInt, data ["AG"].AsInt, data ["V"].AsInt);
			JSONArray jarr = data ["ArrP"].AsArray;
			Player thisPlayer = game.addPlayer (user.inGameName, user.ag, user.lq, user.vip, false, 0, user.avatarUrl, "0.0.0.0");
			thisPlayer.displayName = user.displayName;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				
				int av = jpl ["Av"].AsInt;
				long fid = jpl ["FId"].AsLong;
				string url = (fid > 0) ? Utils.buildFBAvatar("" + fid) : Utils.buildAvatar (jpl ["Url"], av);
				
				OtherPlayer otherPlayer = (OtherPlayer)game.addPlayer (jpl ["N"], jpl ["AG"].AsInt, jpl ["LQ"].AsInt, jpl ["VIP"].AsInt, jpl ["isStart"].AsBool, jpl ["IK"].AsInt, url, jpl ["sIP"]);
//				Debug.Log ("vtable, add player: " + jpl ["N"]);
			}
			game.hostPlayer = game.players [1];
			game.updateAllPlayersViewPosition ();
			game.gameScene.enableLeaveGameButton ();
			game.gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.gamescene_msg_vtable);
			int mark = data["M"].AsInt;
			gsct.showTableGameDT(mark);
		} else if (evt.Equals ("rjtable")) {
			game.state = Game.State.PLAYING;
			game.gameScene.disableLeaveGameButton ();

			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfig (data ["N"], data ["M"].AsInt, data ["Id"].AsInt, data ["T"].AsInt, data ["AG"].AsInt, data ["V"].AsInt);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				
				int av = jpl ["Av"].AsInt;
				long fid = jpl ["FId"].AsLong;
				string url = (fid > 0) ? Utils.buildFBAvatar("" + fid) : Utils.buildAvatar (jpl ["Url"], av);
				
				game.addPlayer (jpl ["N"], jpl ["AG"].AsInt, jpl ["LQ"].AsInt, jpl ["VIP"].AsInt, jpl ["isStart"].AsBool, jpl ["IK"].AsInt, url, jpl ["sIP"]);
			}
			game.hostPlayer = game.players [0];
			game.updateAllPlayersViewPosition ();
			
			if (GameApplication.cubeia.gameId == GameType.BINH) {
				int t = data ["T"].AsInt;
				/*if (BinhFunction.binhTime == null) {
										BinhFunction.binhTime = GameObject.Find ("binhTime");
								}
								BinhFunction.binhTime.SetActive (true);
								BinhFunction.IS_COUNT_DOWN = true;
								BinhFunction.TIME_CURRENT = t;*/
				((GameSceneBinh)GameApplication.gameScene).binhComp.showBinhTime (90-t);
			}

			
		} else if (evt.Equals ("ltable")) {
			// co mot so truong hop nhan dc LeaveTableResponse nhung lai ko nhan dc ltable ->
			// viec xu ly back to LobbyScene duoc xu ly o event LeaveTableResponse, nen ko can su dung game.leaveTable() nua.
			string name = gameData ["Name"];
			if (game.players.Count == 1) {
				// may be destroy game object or not
//				game.leaveTable();
			} else if (user.inGameName.Equals (name)) {
				user.inGameName = "";
//				game.leaveTable();
			} else {
				game.removePlayer (name);
				game.updateAllPlayersViewPosition ();
				game.updateReadyStatus ();
			}
			game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
		} else if (evt.Equals ("rtable")) {
			Player player = game.getPlayer (gameData ["Name"]);
			player.isReady = true;
			player.stopCountDown ();
			player.updateView ();
			game.updateReadyStatus ();
		} else if (evt.Equals ("cctable")) {
			string name = gameData ["Name"];
			if(game.getPlayer (name) != null){
				game.hostPlayer = game.getPlayer (name);
				game.hostPlayer.isReady = true;
				game.updateReadyStatus ();
			}
		} else if (evt.Equals ("asam")) {
			//			packetProcessor.asamPacket(jobject);
		} else if (evt.Equals ("sdc")) {
			//			packetProcessor.sdcPacket(jobject);
		} else if (evt.Equals ("cc")) {
			game.getPlayer (gameData ["N"]).boluot (gameData ["NN"]);
		} else if (evt.Equals ("bao")) {
			//			packetProcessor.baoPacket(jobject);
		} else if (evt.Equals ("chattable")) {
			Player player = game.getPlayer (gameData ["Name"]);
			// check trường hợp người xem chat.
			if (player == null)
				return;
			string content = gameData ["Data"];
			if (content != null && content.Length > 0) {
				player.chat (content,"","","");
			} else {
				player.chat (content,gameData ["T"],gameData ["NName"],gameData ["Name"]);
				// TODO
				// player.sendEmoticon(jobject.getString("NName"),
				// jobject.getString("T"));
				string type = gameData["T"];
				if(type.Equals("*f5")){
					SoundManager.instance.playNemCaChua ();
				}
				if(type.Equals("*f1")){
					SoundManager.instance.playNemTrung ();
				}
				if(type.Equals("*f2")){
					SoundManager.instance.playNemBom ();
				}
				if(type.Equals("*f4")){
					SoundManager.instance.playTatDep ();
				}
				if(type.Equals("*f3")){
					SoundManager.instance.playGoBua ();
				}
				if(type.Equals("*f0")){
					SoundManager.instance.playTangBia ();
				}
			}
		} else if (evt.Equals ("100") || evt.Equals ("10")) {
			// sau nay se chuyen sang dang notification voi mau khac.
			string message = gameData ["Cmd"];
			if (message == null || message.Length < 1)
				message = gameData ["data"];
			message = Strings.instance.getLocalString (message);

			game.gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (" ^ " + message);
			MessageLog.instance.putDebugLog (" ^ " + message);
		} else if (evt.Equals ("schat")) {
			var data = JSONData.Parse (gameData ["data"]);
			game.gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (data ["Data"]);
			MessageLog.instance.putDebugLog (" * " + data ["Name"] + ": " + data ["Data"]);
		} else if (evt.Equals ("0")) {
			game.gameScene.controllerControl.gameNotification.showNotification (gameData ["data"]);
		} else if (evt.Equals ("am")) {
			game.getPlayer (gameData ["N"]).nhanAGtuServer (gameData ["M"].AsInt);
		} else if (evt.Equals ("setting")) {
			var setting = JSONNode.Parse (gameData ["data"]);
			int stake = setting ["M"].AsInt;
			if (stake > 0) {
				game.changeTableProperty (setting ["M"].AsInt, setting ["V"].AsInt, setting ["AG"].AsInt);
			} else {
				game.gameScene.showToast (setting ["A"]);
			}
		} else if(evt.Equals ("lc") || evt.Equals ("startgame") || evt.Equals ("rjtable")){
			DB.getInstance.storeOnPlayingGame(true);
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPlayStart, (float)1f, DSTFBEvent.defaultParams);
//			game.gameScene.controllerControl.PlayerOption.dismiss();
//			game.gameScene.controllerControl.flyEmo.dismiss();
		} else if(evt.Equals ("finish")){
			DB.getInstance.storeOnPlayingGame(false);
			if(game is IAutoReadyGame == false){
				foreach(Player player in game.players){
					player.isReady = false;
//					player.setDarker(true);
				}
				game.hostPlayer.isReady = true;
//				game.hostPlayer.setDarker(false);
			}

			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPlayFinish, (float)1f, DSTFBEvent.defaultParams);
		}
	}

	public static void handleTalaGameTransportPacket (JSONNode gameData){
		User user = GameApplication.user;
		GameTaLa game = (GameTaLa)GameApplication.game;
		GameSceneTaLa gameScene = (GameSceneTaLa)GameApplication.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["NName"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
				player.phomIndex = 0;
			}
			
			game.updateReadyStatus ();
			game.startGame (jcards);
			game.getPlayer (name).onTurnTaLa ();
			
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau

			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			int socaybai = (game.players.Count - 1) * 13;

			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];

				RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (game.gameScene.TransformCard);
				otherplayersCardsTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);

				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				otherPlayer.setCardTransform (otherplayersCardsTransform);

				// hien cac cay bai da an
				for(int j = 0; j < jpl ["Arr"].AsArray.Count; j++){
					int code = jpl ["Arr"].AsArray[j].AsInt;
					if(code > 0){
						Card card = Card.decode_tala(code);
						card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCard);
						card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
						card.rectTransform.SetParent(gameScene.cardLayer, false);
						card.rectTransform.localScale = Vector3.one;
						
						otherPlayer.baidaan_tala.Add (card);
						
						int vitricaybai = otherPlayer.baidaan_tala.Count - 1;
						Vector2 target = otherPlayer.getVitriBaiAnTaLa (vitricaybai);
						card.rectTransform.anchoredPosition = target;
					}
				}
				
				// hien danh sach bai da danh
				otherPlayer.hienbaidadanh_tala(jpl ["ArrD"].AsArray);
				int sobaidaha = otherPlayer.hienbaidaha_tala(jpl ["ArrH"].AsArray);

				socaybai -= jpl ["Arr"].AsArray.Count;
				socaybai -= jpl ["ArrD"].AsArray.Count;
				socaybai -= sobaidaha;
			}
			((GameSceneTaLa)game.gameScene).showBobai(true, socaybai);

		} else if (evt.Equals ("rjtable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);

			int socaybai = game.players.Count * 13;

			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player player = game.getPlayer(jpl ["N"]);
				int sobaidaha = 0;
				if(player is OtherPlayer){
					OtherPlayer otherPlayer = (OtherPlayer)player;
					RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					otherPlayer.setCardTransform (otherplayersCardsTransform);
					// hien cac cay bai da an
					for(int j = 0; j < jpl ["Arr"].AsArray.Count; j++){
						int code = jpl ["Arr"].AsArray[j].AsInt;
						if(code > 0){
							Card card = Card.decode_tala(code);
							card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCard);
							card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
							card.rectTransform.SetParent(gameScene.cardLayer, false);
							card.rectTransform.localScale = Vector3.one;

							otherPlayer.baidaan_tala.Add (card);

							int vitricaybai = otherPlayer.baidaan_tala.Count - 1;
							Vector2 target = otherPlayer.getVitriBaiAnTaLa (vitricaybai);
							card.rectTransform.anchoredPosition = target;
						}
					}

					// hien danh sach bai da danh
					otherPlayer.hienbaidadanh_tala(jpl ["ArrD"].AsArray);
					sobaidaha =  otherPlayer.hienbaidaha_tala(jpl ["ArrH"].AsArray);
				} else {
					((ThisPlayer)player).hienbaitrentay_tala(jpl ["Arr"].AsArray);
				}

				socaybai -= jpl ["Arr"].AsArray.Count;
				socaybai -= jpl ["ArrD"].AsArray.Count;
				socaybai -= sobaidaha;
			}
			
			// hien thi nguoi dang danh
			Player onTurnPlayer = game.getPlayer(data["CN"]);
			// hy vong dat 1s se lam ham thuc thi dc.
			gameScene.StartCoroutine(Utils.cr_runDelayed(0.1f, delegate {
				onTurnPlayer.countDownWithRemaining(data["CT"].AsInt);
			}));

			((GameSceneTaLa)game.gameScene).showBobai(true, socaybai);

		} else 	if (evt.Equals ("db")) {
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["NName"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			game.getPlayer (name).onTurnTaLa ();
		} else if (evt.Equals ("dc")) {
			int jsonInt = gameData ["C"].AsInt;
			int jsonA = gameData ["A"].AsInt;
			Card card = new Card();
			card = Card.decode_tala(jsonInt);
			string name = gameData ["N"];
			string nextname = gameData ["NN"];
			game.getPlayer (name).danhTaLa(card, nextname, jsonA);
//			game.effect_color_baidadanh();
		}  
		else if(evt.Equals ("ac")){
			int jsonInt = gameData ["C"].AsInt;
			string name = gameData ["N"];
			game.getPlayer (name).anbaiTaLa(jsonInt);
			game.effect_color_baidadanh();
		}
		else if(evt.Equals("cc")){
			int jsonInt = gameData["C"].AsInt;
			Card card = Card.decode_tala(jsonInt);
			string name = gameData["N"];
			string nname = gameData["NN"];
			game.chuyenbaiTaLa(name,nname,jsonInt);
			game.effect_color_baidadanh();
		}
		else if (evt.Equals ("bc")) {
			int jsonInt = gameData ["C"].AsInt;
			Card card = new Card();
			card = Card.decode_tala(jsonInt);
			string name = gameData ["N"];
			game.getPlayer (name).bocbaiTaLa(card);
			game.effect_color_baidadanh();
		}
		else if (evt.Equals ("hc")) {
			
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["N"];
			List<Card> cards = new List<Card>();
			for (int i = 0; i < jcards.Count; i++) {
				cards.Add(Card.decode_tala(jcards [i].AsInt));
			}
			game.getPlayer(name).habaiTaLa(cards);
		}
		else if(evt.Equals("gc")){
			JSONArray jarr = gameData["Arr"].AsArray;
			string name = gameData["N"];
			for(int i = 0; i < jarr.Count; i++){
				var obj = jarr[i];
				string nname = obj["N"];
				JSONArray jcard = obj["Arr"].AsArray;
				List<Card> cards = new List<Card>();
				for(int j = 0; j < jcard.Count; j++){
					cards.Add(Card.decode_tala(jcard[j].AsInt));
				}
				game.getPlayer(name).guibaiTaLa(nname, cards);
			}
			
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
				game.updateReadyStatus();
			}));
		} else {
			generalHandle(gameData);
		}
	}

	public static void handleDummyGameTransportPacket (JSONNode gameData){
		User user = GameApplication.user;
		GameDummy game = (GameDummy)GameApplication.game;
		GameSceneDummy gameScene = (GameSceneDummy)GameApplication.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["NName"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
				player.phomIndex = 0;
				player.listphomha.Clear();
			}
			
			game.updateReadyStatus ();
			game.startGame (jcards);

			game.firstPlayer = game.getPlayer (name);
			game.firstPlayer.onTurnDummy ();
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau
			
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;

			int socaybai = 52 - (game.players.Count * game.thisPlayer.cards.Count + 1);
			
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				
				// hien cac cay bai tren tay
				for(int j = 0; j < jpl ["Arr"].AsArray.Count; j++){
					Vector2 target = otherPlayer.getOtherPlayerCardInHandPos(j, jpl ["Arr"].AsArray.Count);
					otherPlayer.addCardToCardsDummy (new Card(), GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, target);
				}
				otherPlayer.xeplaicaybaitrentaydummy (otherPlayer.cards.Count - 1);
				
				// hien danh sach bai da danh
				//				otherPlayer.hienbaidadanh_Dummy(jpl ["ArrD"].AsArray);
				int sobaidaha = otherPlayer.hienbaidaha_Dummy(jpl ["ArrH"].AsArray);
				
				socaybai -= jpl ["Arr"].AsArray.Count;
				socaybai -= jpl ["ArrH"].AsArray.Count;
			}

			// hien bai tren ban
			gameScene.baitrenban = new List<Card>();
			JSONArray jarrD = data ["ArrD"].AsArray;
			for (int i = 0; i < jarrD.Count; i++) {
				// hiện animation đánh bài
				int vitricaybai = gameScene.baitrenban.Count;
				Debug.Log ("vitricaybai: " + vitricaybai);
				Vector2 target = Player.getVitriBaiDanhDummy (vitricaybai, gameScene.baitrenban.Count + 1);

				int code = jarrD[i].AsInt;
				Card card = Card.decode_dummy(code);
				card.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
				card.rectTransform.SetParent(gameScene.cardLayer, false);
				card.rectTransform.anchoredPosition = target;
				card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				card.rectTransform.localScale =  new Vector3 (GameSceneDummy.K_SCALE_CARD_ONTABLE, GameSceneDummy.K_SCALE_CARD_ONTABLE, 1f);

				gameScene.baitrenban.Add(card);

				if(code > 100){
					card.rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = true;
				}
			}

			int so_bai_tren_ban = jarrD.Count;
			socaybai -= so_bai_tren_ban;
			((GameSceneDummy)game.gameScene).showBobai(true, socaybai, 0);
			
		} else if (evt.Equals ("rjtable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);

			int socaybai = 52 - (game.players.Count * game.thisPlayer.cards.Count + 1);
			JSONArray jarr = data ["ArrP"].AsArray;
		
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player player = game.getPlayer(jpl ["N"]);
				if(player is OtherPlayer){
					OtherPlayer otherPlayer = (OtherPlayer)player;
					// hien cac cay bai da an
					for(int j = 0; j < jpl ["Arr"].AsArray.Count; j++){
						Vector2 target = otherPlayer.getOtherPlayerCardInHandPos(j, jpl ["Arr"].AsArray.Count);
						otherPlayer.addCardToCardsDummy (new Card(), GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, target);
					}
					otherPlayer.xeplaicaybaitrentaydummy (otherPlayer.cards.Count);

					int sobaidaha = otherPlayer.hienbaidaha_Dummy(jpl ["ArrH"].AsArray);
				} else {
					((ThisPlayer)player).hienbaitrentay_Dummy(jpl ["Arr"].AsArray);
					player.hienbaidaha_Dummy(jpl ["ArrH"].AsArray);
				}
				
				// hien danh sach bai da danh
				//				player.hienbaidadanh_Dummy(jpl ["ArrD"].AsArray);
				//				int sobaidaha =  player.hienbaidaha_Dummy(jpl ["ArrH"].AsArray);
				
				socaybai -= jpl ["Arr"].AsArray.Count;
				socaybai -= jpl ["ArrD"].AsArray.Count;
				//				socaybai -= sobaidaha;
			}
			
			// hien thi nguoi dang danh
			Player onTurnPlayer = game.getPlayer(data["CN"]);
			// hy vong dat 1s se lam ham thuc thi dc.
			gameScene.StartCoroutine(Utils.cr_runDelayed(0.1f, delegate {
				onTurnPlayer.countDownWithRemaining(data["CT"].AsInt);
			}));
			
			// hien bai tren ban
			gameScene.baitrenban = new List<Card>();
			JSONArray jarrD = data ["ArrD"].AsArray;
			for (int i = 0; i < jarrD.Count; i++) {
				// hiện animation đánh bài
				int vitricaybai = gameScene.baitrenban.Count;
				Vector2 target = Player.getVitriBaiDanhDummy (vitricaybai, gameScene.baitrenban.Count + 1);
				
				int code = jarrD[i].AsInt;
				Card card = Card.decode_dummy(code);
				card.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
				card.rectTransform.SetParent(gameScene.cardLayer, false);
				card.rectTransform.anchoredPosition = target;
				card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				card.rectTransform.localScale =  new Vector3 (GameSceneDummy.K_SCALE_CARD_ONTABLE, GameSceneDummy.K_SCALE_CARD_ONTABLE, 1f);

				card.rectTransform.GetComponent<Button> ().onClick.RemoveAllListeners ();
				card.rectTransform.GetComponent<Button> ().onClick.AddListener (delegate() {
					if(((GameDummy)game).cardInAutoSelectModeHa){
						game.thisPlayer.autoselectphom_dummy(card);
					} else if(((GameDummy)game).cardInAutoSelectModeGui){
						game.thisPlayer.autoselectgui_dummy(card);
					} else {
						card.isSelected = !card.isSelected;
						float delta_y = 0f;
						if (card.isSelected) {
							delta_y = 12f;
						}
						//			float x = GameApplication.game.thisPlayer.getInHandCardsPos(this);
						float y = 72 + delta_y;
						//			LeanTween.moveLocalX(rectTransform.gameObject, x, 0.3f).setEase(LeanTweenType.easeOutQuart);
						LeanTween.moveLocalY (card.rectTransform.gameObject, y, 0.3f).setEase (LeanTweenType.easeOutQuart);
					}
				});
				
				gameScene.baitrenban.Add(card);
				
				if(code > 100){
					card.rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = true;
				}
			}
			
			int so_bai_tren_ban = jarrD.Count;
			socaybai -= so_bai_tren_ban;
			((GameSceneDummy)game.gameScene).showBobai(true, socaybai, 0);
		} else if (evt.Equals ("fc")) {
			int code = gameData["C"].AsInt;
			// chia cay bai dau tien
			((GameSceneDummy)game.gameScene).baitrenban = new List<Card>();
			((GameSceneDummy)game.gameScene).showBobai(true, 52 - (game.players.Count * game.thisPlayer.cards.Count + 1), code);
		} else if (evt.Equals ("db")) {
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["NName"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			//			game.getPlayer (name).onTurnDummy ();
		} else if (evt.Equals ("dc")) {
			int jsonInt = gameData ["C"].AsInt;
			int jsonA = gameData ["A"].AsInt;
			Card card = Card.decode_dummy(jsonInt);
			string name = gameData ["N"];
			string nextname = gameData ["NN"];
			int M = gameData["M"].AsInt;
			bool goiyan = (gameData["A"].AsInt == 1) ? true: false;
			game.getPlayer (name).danhbaiDummy(card, nextname, jsonA, M, goiyan);
			game.effect_color_baidadanh();

			cubeia.lockProcessing();
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.6f, delegate {
				// thoi gian delay de thuc hien effect
				cubeia.unLockProcessing ();
			}));
		}  
		else if(evt.Equals ("ac")){
			int jsonInt = gameData ["C"].AsInt;
			string name = gameData ["N"];
			//			game.getPlayer (name).anbaiDummy(jsonInt);
			game.effect_color_baidadanh();
		}
		else if(evt.Equals("cc")){
			int jsonInt = gameData["C"].AsInt;
			//			Card card = Card.decode_Dummy(jsonInt);
			string name = gameData["N"];
			string nname = gameData["NN"];
//			game.chuyenbaiDummy(name,nname,jsonInt);
			game.effect_color_baidadanh();
		}
		else if (evt.Equals ("bc")) {
			int C = gameData ["C"].AsInt;
			bool goiyU = (gameData["A"].AsInt == 3) ? true: false;
			int M = gameData ["M"].AsInt;
			Card card = Card.decode_dummy(C);
			string name = gameData ["N"];
			game.getPlayer (name).bocbaiDummy(card, goiyU);
			game.effect_color_baidadanh();
			cubeia.lockProcessing();
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.6f, delegate {
				// thoi gian delay de thuc hien effect
				cubeia.unLockProcessing ();
			}));
		}
		else if (evt.Equals ("hc")) {
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["N"];
			bool goiyan = (gameData["A"].AsInt == 1) ? true: false;
			string NN = gameData["NN"];
			int M = gameData ["M"].AsInt;
			int AT = gameData ["AT"].AsInt;
			int DT = gameData ["DT"].AsInt;
			int CM = gameData ["CM"].AsInt;
			int NNCM = gameData ["NNCM"].AsInt;

			List<Card> cards = new List<Card>();
			for (int i = 0; i < jcards.Count; i++) {
				cards.Add(Card.decode_dummy(jcards [i].AsInt));
			}
			game.getPlayer(name).habaiDummy(cards, CM, M, AT, DT, NN, NNCM, goiyan);
		}
		else if(evt.Equals("gc")){
			JSONArray jarr = gameData["Arr"]["Arr"].AsArray;
			string nname = gameData["Arr"]["N"];
			string name = gameData["N"];
			int C = gameData["C"].AsInt;
			int M = gameData["M"].AsInt;
			int CM = gameData["CM"].AsInt;
			int NNCM = gameData["NNCM"].AsInt;
			int A = gameData["A"].AsInt;
			Card card = Card.decode_dummy(C);
			List<Card> cards = new List<Card>();
			for(int i = 0; i < jarr.Count; i++){
				cards.Add(Card.decode_dummy(jarr[i].AsInt));
			}
			game.getPlayer(name).guibaiDummy(nname, card, cards, CM, NNCM);			
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (5f, delegate {
				cubeia.unLockProcessing ();
				game.updateReadyStatus();
			}));
		} else {
			generalHandle(gameData);
		}
	}

	public static void handleChanGameTransportPacket (JSONNode gameData){
		User user = GameApplication.user;
		GameChan game = (GameChan)GameApplication.game;
		GameSceneChan gameScene = (GameSceneChan)GameApplication.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;

		string evt = gameData ["evt"];
		if(evt.Equals("ctable")){
			generalHandle(gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfigChan(data["G"].AsInt, data["F"].AsInt); 
		} else if(evt.Equals("stable")){
			generalHandle(gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfigChan(data["G"].AsInt, data["F"].AsInt); 
		} else if(evt.Equals("vtable")){
			generalHandle(gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfigChan(data["G"].AsInt, data["F"].AsInt); 

			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				
//				RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (game.gameScene.TransformCard);
//				otherPlayer.setCardTransform (otherplayersCardsTransform);
				
				// hien danh sach bai da danh hoac boc
				for(int j = 0; j < jpl ["ArrD"].AsArray.Count; j++){
					int code = jpl ["ArrD"].AsArray[j].AsInt;
					CardChan card = CardChan.decode(code);
					card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCardChan);
					card.rectTransform.SetParent(gameScene.cardLayer, false);
					card.rectTransform.localScale = Vector3.one;

					otherPlayer.chan_cards2.Add (card);
					card.rectTransform.anchoredPosition = ((GameChan)game).getCard2Pos(otherPlayer, otherPlayer.chan_cards2.Count - 1);
				}

				// hien cac cay bai da an
				for(int j = 0; j < jpl ["ArrH"].AsArray.Count; j += 2){
					int code1 = jpl ["ArrH"].AsArray[j].AsInt;
					CardChan card1 = CardChan.decode(code1);
					card1.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCardChan);
					card1.rectTransform.SetParent(gameScene.cardLayer, false);
					card1.rectTransform.localScale = Vector3.one;

					int code2 = jpl ["ArrH"].AsArray[j+1].AsInt;
					CardChan card2 = CardChan.decode(code2);
					card2.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCardChan);
					card2.rectTransform.SetParent(gameScene.cardLayer, false);
					card2.rectTransform.localScale = Vector3.one;
					
					otherPlayer.chan_cards1.Add (card1);
					otherPlayer.chan_cards1.Add (card2);

					card1.rectTransform.anchoredPosition = ((GameChan)game).getCard1Pos(otherPlayer, otherPlayer.chan_cards1.Count - 2);
					card2.rectTransform.anchoredPosition = ((GameChan)game).getCard1Pos(otherPlayer, otherPlayer.chan_cards1.Count - 1);
				}
			}

		} else if(evt.Equals("rjtable")){
			generalHandle(gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			game.setGameConfigChan(data["G"].AsInt, data["F"].AsInt); 
			GameSceneChan gs = (GameSceneChan)gameScene;
			
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player player = game.getPlayer(jpl ["N"]);

				// hien danh sach bai da danh hoac boc
				for(int j = 0; j < jpl ["ArrD"].AsArray.Count; j++){
					int code = jpl ["ArrD"].AsArray[j].AsInt;
					CardChan card = CardChan.decode(code);
					card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCardChan);
					card.rectTransform.SetParent(gameScene.cardLayer, false);
					card.rectTransform.localScale = Vector3.one;
					
					player.chan_cards2.Add (card);
					card.rectTransform.anchoredPosition = ((GameChan)game).getCard2Pos(player, player.chan_cards2.Count - 1);
				}
				
				// hien cac cay bai da an
				for(int j = 0; j < jpl ["ArrH"].AsArray.Count; j += 2){
					int code1 = jpl ["ArrH"].AsArray[j].AsInt;
					CardChan card1 = CardChan.decode(code1);
					card1.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCardChan);
					card1.rectTransform.SetParent(gameScene.cardLayer, false);
					card1.rectTransform.localScale = Vector3.one;
					
					int code2 = jpl ["ArrH"].AsArray[j+1].AsInt;
					CardChan card2 = CardChan.decode(code2);
					card2.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCardChan);
					card2.rectTransform.SetParent(gameScene.cardLayer, false);
					card2.rectTransform.localScale = Vector3.one;
					
					player.chan_cards1.Add (card1);
					player.chan_cards1.Add (card2);
					
					card1.rectTransform.anchoredPosition = ((GameChan)game).getCard1Pos(player, player.chan_cards1.Count - 2);
					card2.rectTransform.anchoredPosition = ((GameChan)game).getCard1Pos(player, player.chan_cards1.Count - 1);
				}

				if(player is ThisPlayer) {
					// hien bai tren tay
					ThisPlayer thisPlayer = ((ThisPlayer)player);
					JSONArray jcards = jpl ["Arr"].AsArray;

					Vector2 startPoint = game.getViewPositionOfPlayer(thisPlayer) + new Vector2(0, 16);
					for(int j = 0; j < jcards.Count; j++){
						CardChan card = CardChan.decode(jcards[j].AsInt);
						card.rectTransform = GameObject.Instantiate<RectTransform>(gs.TransformCardChan);
						card.rectTransform.SetParent(gs.cardLayer, false);
						card.rectTransform.pivot = new Vector2(0.5f, -0.4f);
						card.rectTransform.localScale = new Vector3(CardChan.thisPlayerScale, CardChan.thisPlayerScale, 1f);
						card.rectTransform.anchoredPosition = startPoint;
						card.rectTransform.GetComponent<Button>().onClick.AddListener(delegate {
							card.isSelected = !card.isSelected;
//							Debug.LogError("select "+ card.getResourceName() + " " + card.code);
							if(card.isSelected){
								// bo chon tat ca cac cay bai khac
								foreach (CardChan cc in game.thisPlayer.chan_cards){
									if(cc != card && cc.isSelected){
										cc.isSelected = false;
									}
								}
							}
						});
						
						game.thisPlayer.chan_cards.Add(card);
					}
					
					gs.sortOnHandCards();
					
					for(int j = 0; j < game.thisPlayer.chan_cards.Count; j++){
						CardChan card = game.thisPlayer.chan_cards[j];
						card.rectTransform.SetAsLastSibling();
						card.rectTransform.Rotate(new Vector3(0f, 0f, gs.getRPos(j, jcards.Count)));
//						Quaternion localRotation = card.rectTransform.localRotation;
//						localRotation.eulerAngles = new Vector3(0f, 0f, gs.getRPos(j, jcards.Count));
					}
				}
			}
			
			// hien thi nguoi dang danh
			Player onTurnPlayer = game.getPlayer(data["CN"]);
			int ca = data["CA"].AsInt;
			if(onTurnPlayer is ThisPlayer){
				if(ca == 0){
					// an hoac duoi
					ca = 3;
				}
				if(ca == 3){
					// chiu bai
					ca = 4;
				}
				if(ca == 4){
					// ho u
					ca = 0;
				}
				gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(ca);
			}
			// hy vong dat 1s se lam ham thuc thi dc.
			gameScene.StartCoroutine(Utils.cr_runDelayed(0.1f, delegate {
				onTurnPlayer.countDownWithRemaining(data["CT"].AsInt);
			}));
			
		} else if (evt.Equals ("lc")) {
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			game.lastCardChan = null;

			foreach (Player player in game.players) {
				player.isReady = true;
			}

			string nname = gameData ["NN"];
			string name = gameData ["N"];
			int code = gameData ["C"].AsInt;
			
			JSONArray jcards = gameData ["Arr"].AsArray;
			game.startGame (jcards);

			ChanFunction chanFunctions = gameScene.controllerControl.chanFuntions;
			if (chanFunctions.xuongu_panel.activeSelf) {
				chanFunctions.xuongu_panel.SetActive(false);
				foreach (RectTransform ccard in gameScene.cardLayer) {
					GameObject.Destroy(ccard.gameObject);
				}
			}

			gameScene.virtualDealing(game.getPlayer(name), code, game.getPlayer(nname), jcards);

			cubeia.lockProcessing();
			// tam ngung xu ly cac goi cho den khi xong hieu ung
//			getPlayingTable().btnLeaveTable.setEnabled(false);

			game.updateReadyStatus ();
		} else if (evt.Equals ("dc")) {
			game.getPlayer(gameData ["N"]).
				danhBaiChan(gameData ["T"].AsInt, gameData ["C"].AsInt, gameData ["CA"].AsInt, gameData ["NN"], gameData ["ND"]);
		} else if(evt.Equals ("ac")){
			string name = gameData ["N"];
			JSONArray jarr = gameData ["Arr"].AsArray;
			game.getPlayer (name).anbaiChan(jarr[0].AsInt, jarr[1].AsInt);
		} else if (evt.Equals ("bc")) {
			game.getPlayer(gameData ["N"]).bocbaiChan(gameData ["C"].AsInt, gameData ["CA"].AsInt);
			//		// dưới hoặc ăn
//			game.getPlayer(gameData ["N"]).startTurnCounting(3);
			// vi ham boc bai su dung nhieu cho nen cho countDown ra ngoai ham nay
			game.getPlayer(gameData ["N"]).countDown(15);
		} else if (evt.Equals ("np")) {
			game.getPlayer(gameData ["N"]).duoibaiChan(gameData ["NN"], gameData ["CA"].AsInt);
		} else if (evt.Equals("kc")) {
			int ci = gameData["CI"].AsInt;
			int t = gameData["T"].AsInt;;
			string n = gameData["N"];
			string nn = gameData["NN"];
			// TODO
			// cần dùng t: 25 bốc lên và đc ăn chíu
			
			game.getPlayer(nn).chiu(ci, n);
					
		} else if (evt.Equals("nt")) {
			// t=24 : tiếp theo là bốc
			// t=25 : tiếp theo là dưới

			int t = gameData["T"].AsInt;
			string n = gameData["N"];
			gameScene.showToast("Hủy chíu");
			gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(0);
			foreach (Player pl in game.players)
				pl.stopCountDown();
			if (t == 24) {
				// ăn hoặc dưới
//				game.getPlayer(n).startTurnCounting(3);
				if(game.getPlayer(n) is ThisPlayer)
					gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(3);	
//				game.getPlayer(n).countDown(15);
			} else if (t == 25) {
				// ăn hoặc bốc
//				getPlayingTable().getPlayer(n).startTurnCounting(1);
				if(game.getPlayer(n) is ThisPlayer)
					gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(1);
//				game.getPlayer(n).countDown(15);
			}
		
		} else if (evt.Equals("cc")) {
			int ci = gameData["CI"].AsInt;
			int t = gameData["T"].AsInt;
			string n = gameData["N"];
            string nn = gameData["NN"];
			// t==25 bốc bài r chíu
			// t==26 đánh bài r chíu
			if (t == 25) {
				game.getPlayer(n).bocbaiChan(ci);
			} else {
				game.getPlayer(n).danhBaiChan(0, ci, 0, nn, game.getPlayer(n).name);
			}
			gameScene.StartCoroutine (Utils.cr_runDelayed (1f, delegate {
				game.getPlayer(n).requestChiu(ci, nn, gameData);
			}));
					
		} else if (evt.Equals("kg")) {
//			gameScene.controllerControl.talaFuntions.hideTaLaOnTurnFuntions (onFinish:true);

			JSONClass fobject = JSONClass.Parse(gameData ["data"]).AsObject;

			string name = fobject["N"];
			int M = fobject["M"].AsInt;
			string C = fobject["C"];
			string CE = fobject["CE"];
			JSONArray arrMark = fobject["ArrMark"].AsArray;
			int G = fobject["G"].AsInt;
			game.getPlayer(name).kg(M, arrMark, C, CE, G);

			foreach (Player pl in game.players) {
				pl.stopCountDown();
				if(pl is ThisPlayer && pl.Equals(game.hostPlayer))
					pl.isReady = true;
				else
					pl.isReady = false;
			}

			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
				game.state = Game.State.WAITING;
				gameScene.enableLeaveGameButton ();
				game.updateReadyStatus();
			}));
		} else if (evt.Equals("fbc")) {
			game.getPlayer(gameData["N"]).bocbaihoaco(gameData["C"].AsInt);
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (2f, delegate {
				cubeia.unLockProcessing ();
				game.updateReadyStatus();
			}));
		} else if (evt.Equals ("Error")) {
			gameScene.showServerNotification(gameData["data"]);
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);

			// tc: 26 danh, 25 boc chi quan tam khi c==1
			JSONClass fobject = JSONClass.Parse(gameData ["data"]).AsObject;
			JSONArray jarr = fobject["Arr"].AsArray;
			foreach (Player pl in game.players) {
				pl.stopCountDown();
			}
			if (fobject["C"].AsInt == 0) {
				// khi c==0, finish tra ve sau khi boc bai. lastplayer+1 chinh la nguoi boc bai
				int index = game.players.IndexOf(game.lastPlayer);
				index = (index + 1) % game.players.Count;
				game.players[index].bocbaiChan(fobject["I"].AsInt);
			} else {  // c == 1
				// truong hop chiu u
				if (fobject["TC"].AsInt == 25) {
					// boc xong thi chiu u
					int index = game.players.IndexOf(game.lastPlayer);
					index = (index + 1) % game.players.Count;
					game.players[index].bocbaiChan(fobject["I"].AsInt);
				} else {
					// danh xong thi chiu u
					game.lastPlayer.danhBaiChan(0, fobject["I"].AsInt, 0, fobject["N"], game.lastPlayer.name);
				}
				
			}

			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
				game.getPlayer(fobject["N"])
					.habaiuChan(jarr, jarr[jarr.Count - 2].AsInt, jarr[jarr.Count - 1].AsInt, fobject["C"].AsInt);
			}));

			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (2.5f, delegate {
				cubeia.unLockProcessing ();
			}));

		} else {
			generalHandle(gameData);
		}
	}

	static void handleTienlenGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		GameTienLen game = (GameTienLen)GameApplication.game;
		CubeiaClient cubeia = GameApplication.cubeia;
		GameSceneTienLen gameScene = (GameSceneTienLen)GameApplication.gameScene;
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["NName"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			game.getPlayer (name).onTurnTienLen ();
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];

				RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCardBackWithNumber);
				otherplayersCardsTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				int remainingCard = jpl ["Arr"].Count;

				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				otherPlayer.setCardTransform (otherplayersCardsTransform);
				otherPlayer.setCards (remainingCard);
			}
		} else if (evt.Equals ("rjtable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player player = game.getPlayer(jpl ["N"]);
				player.showCardsInHandByReconnectionTienLen(jpl ["Arr"].AsArray);

				if(player is OtherPlayer){
					OtherPlayer otherPlayer = (OtherPlayer)player;
					RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCardBackWithNumber);
					otherplayersCardsTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					int remainingCard = jpl ["Arr"].Count;
					
					otherPlayer.setCardTransform (otherplayersCardsTransform);
					otherPlayer.setCards (remainingCard);
				}
			}

			// hien thi la bai cuoi tren ban
			game.showLastCardsByReconnetion(data["LC"].AsArray);

			// hien thi nguoi dang danh
			Player onTurnPlayer = game.getPlayer(data["CN"]);
			// hy vong dat 1s se lam ham thuc thi dc.
			gameScene.StartCoroutine(Utils.cr_runDelayed(0.1f, delegate {
				onTurnPlayer.countDownWithRemaining(data["CT"].AsInt);
			}));
		} else if (evt.Equals ("dc")) {
			JSONArray jsonArray = gameData ["Arr"].AsArray;
			List<Card> cards = new List<Card> ();
			for (int i = 0; i < jsonArray.Count; i++)
				cards.Add (Card.decode_tienlen (jsonArray [i].AsInt));
			if (cards.Count == 1 && cards [0].N == 15) {
				//gameScene.playHaiNeAudio();
				SoundManager.instance.playHaiNeAudio();
				Debug.Log("Play HaineAudio");
			} else if (cards.Count >= 2) {
				//SoundManager.instance.PlayTest();
				SoundManager.instance.playListAudio();
			} else {
				//gameScene.playDanhbai ();
				SoundManager.instance.playDanhbai();
			}
			string name = gameData ["N"];
			string nextname = gameData ["NN"];
			game.getPlayer (name).danhbaiTienlen (cards, gameData ["MC"].AsInt, nextname);
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			for (int i=0; i<finishArray.Count; i++) {
				string name_player = finishArray [i] ["N"];
				Player player = game.getPlayer (name_player);
				if (player is ThisPlayer) {
					int m = finishArray [i] ["M"].AsInt;
					if (m > 0) {
						//gameScene.playNhatAudio ();
						SoundManager.instance.playNhatAudio();
					} else {
						//gameScene.playBetAudio ();
						SoundManager.instance.playBetAudio();
					}
				}
				player.hideStatus();
			}
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);

			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
				game.updateReadyStatus();
			}));
		} else {
			generalHandle (gameData);
		}
	}

	public static void handlePokerGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		GamePoker game = (GamePoker)GameApplication.game;
		GameScenePoker gameScene = (GameScenePoker)game.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = JSONNode.Parse (gameData ["Arr"]).AsArray;
			string dealer = gameData ["Dealer"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
				player.isfold = false;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			// chu y set dealer sau startGame() vi startGame se update ten player
			game.setDealer (dealer);
		} else if (evt.Equals ("bm")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;

			Player player = game.getPlayer (n);
			player.stopCountDown ();
			SoundManager.instance.play_to ();

			int plusChip = newTotalBetChip - player.totalBetChip;
			player.totalBetChip = newTotalBetChip;
			// xac dinh allin|check|call|bet/raise
			if (plusChip == player.ag) {
				player.allin (plusChip);
			} else if (player.totalBetChip > game.maxTotalBetChipOfAPlayer) {
				// raise or bet
				player.raise (plusChip);
			} else {
				if (plusChip > 0)
					player.call (plusChip);
				else
					player.check ();
			}
			game.updateMaxTotalBetChipOfAPlayer (newTotalBetChip);

			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();

		} else if (evt.Equals ("bd")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;

			game.getPlayer (n).stopCountDown ();
			game.getPlayer (n).fold ();
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
		} else if (evt.Equals ("cc")) {
			// tam dung xu ly tin hieu cubeia de tao hieu ung
			// {"evt":"cc","data":"[38,4,2]"}
			//1. hieu ung chia cc
			//2. dua tat ca tien nguoi choi da bet vao POT
			//3. xoa tien nguoi choi da bet
			cubeia.lockProcessing ();
			Utils.Executor exe1 = delegate {
				JSONArray jcards = JSONNode.Parse (gameData ["data"]).AsArray;
				game.gatherChipBetsIntoPot ();
				gameScene.dealCommunityCards (jcards);
			};
			Utils.Executor exe2 = delegate {
				cubeia.unLockProcessing ();
			};
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, exe1, 0.6f, exe2));

		}
		// i don't like to use these such things
//		else if (evt.Equals("autoAnyCall")) {
//			gameScene.controllerControl.pokerFuntionsOthersTurn.auto_callany();
//		} else if (evt.Equals("un_autoAnyCall")) {
//			gameScene.controllerControl.pokerFuntionsOthersTurn.cancel_auto_callany();
//		} else if (evt.Equals("autoFold")) {
//			gameScene.controllerControl.pokerFuntionsOthersTurn.auto_fold();
//		} else if (evt.Equals("un_autoFold")) {
//			gameScene.controllerControl.pokerFuntionsOthersTurn.cancel_auto_fold();
//		} else if (evt.Equals("autoCheck")) {
//			gameScene.controllerControl.pokerFuntionsOthersTurn.auto_check();
//		} else if (evt.Equals("un_autoCheck")) {
//			gameScene.controllerControl.pokerFuntionsOthersTurn.cancel_auto_check();
//		}
		else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			// ngung xu ly sau finish 3s
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
				// luu y game poker ko can kiem tra ready
//				game.updateReadyStatus();
				if (GameApplication.game.players != null) {
					for (int i=0; i<GameApplication.game.players.Count; i++) {
						GameApplication.game.players [i].stopCountDown ();
					}
				}
			}));
		} else {
			generalHandle (gameData);
		}
	}

	static void handleXitoGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		GameXiTo game = (GameXiTo)GameApplication.game;
		GameSceneXiTo gameScene = (GameSceneXiTo)game.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = JSONNode.Parse (gameData ["data"]).AsArray;
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
				player.isfold = false;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			// ngung xu ly de chay effect
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
			}));
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
//				int remainingCard = jpl ["Arr"].Count;
				// chia bai
				JSONArray cardArr = jpl ["Arr"].AsArray;
				for (int j = 0; j<cardArr.Count; j++) {
					Card card = Card.decode_xito (cardArr [j].AsInt);
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					otherPlayer.cardsInHandList.Add (rect);
					rect.GetComponent<Image> ().sprite = card.getSprite ();
					float margin = 0.66f;
					rect.anchoredPosition = ((GameXiTo)game).getViewPositionOfPlayersCard (otherPlayer, margin, 1f, j, cardArr.Count);
					rect.SetParent (gameScene.cardLayer, false);
				}
				int totalChip = jpl ["AGC"].AsInt;
				otherPlayer.totalBetChip = totalChip;
				otherPlayer.call (totalChip);
				game.updateMaxTotalBetChipOfAPlayer (totalChip);
				if (jpl ["A"].AsBool == false)
					otherPlayer.fold ();
				game.thisPlayer.isfold = true;
			}
		} else if (evt.Equals ("fc")) {
			int icard = gameData ["C"].AsInt;
			game.getPlayer (gameData ["N"]).showCardXiTo (icard);
		} else if (evt.Equals ("sbm")) {
			game.getPlayer (gameData ["Name"]).onTurnPoker ();
		} else if (evt.Equals ("bm")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;
			
			Player player = game.getPlayer (n);
			player.stopCountDown ();
			SoundManager.instance.play_to ();
			
			int plusChip = newTotalBetChip - player.totalBetChip;
			player.totalBetChip = newTotalBetChip;
			// xac dinh allin|check|call|bet/raise
			if (plusChip == player.ag) {
				player.allin (plusChip);
			} else if (player.totalBetChip > game.maxTotalBetChipOfAPlayer) {
				// raise or bet
				player.raise (plusChip);
			} else {
				if (plusChip > 0)
					player.call (plusChip);
				else
					player.check ();
			}
			game.updateMaxTotalBetChipOfAPlayer (newTotalBetChip);
			
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
			
		} else if (evt.Equals ("bd")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;
			
			game.getPlayer (n).stopCountDown ();
			game.getPlayer (n).fold ();
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
		} else if (evt.Equals ("dc")) {
			JSONArray data = JSONNode.Parse (gameData ["data"]).AsArray;
			gameScene.dealXitoCards (data);
			// ngung xu ly 1s
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (1f, delegate {
				cubeia.unLockProcessing ();
			}));
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			// ngung xu ly sau finish 3s
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (4f, delegate {
				cubeia.unLockProcessing ();
				// luu y game xi to phai kiem tra ready
				game.updateReadyStatus();
			}));
		} else {
			generalHandle (gameData);
		}
	}

	static void handleLiengGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		GameLieng game = (GameLieng)GameApplication.game;
		GameSceneLieng gameScene = (GameSceneLieng)game.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = JSONNode.Parse (gameData ["Arr"]).AsArray;
			string dealer = gameData ["Dealer"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
				player.isfold = false;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			// ngung xu ly de chay effect
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
				cubeia.unLockProcessing ();
			}));

			game.getPlayer (dealer).onTurnPoker ();
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				//				int remainingCard = jpl ["Arr"].Count;
				// chia bai
				JSONArray cardArr = jpl ["Arr"].AsArray;
				for (int j = 0; j<cardArr.Count; j++) {
					float margin = 0.44f;
					float scale = 0.66f;
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					rect.localScale = new Vector3 (scale, scale, 1f);
					otherPlayer.cardsInHandList.Add (rect);
//					rect.GetComponent<Image> ().sprite = GameApplication.resource.getCardBackSprite();
					rect.anchoredPosition = ((GameLieng)game).getViewPositionOfPlayersCard (otherPlayer, margin, scale, j, cardArr.Count);
					rect.SetParent (gameScene.cardLayer, false);
				}
				int totalChip = jpl ["AGC"].AsInt;
				otherPlayer.totalBetChip = totalChip;
				otherPlayer.call (totalChip);
				game.updateMaxTotalBetChipOfAPlayer (totalChip);
				if (jpl ["A"].AsBool == false)
					otherPlayer.fold ();
				game.thisPlayer.isfold = true;
			}
		} else if (evt.Equals ("bm")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;
			
			Player player = game.getPlayer (n);
			player.stopCountDown ();
			SoundManager.instance.play_to ();
			
			int plusChip = newTotalBetChip - player.totalBetChip;
			player.totalBetChip = newTotalBetChip;
			// xac dinh allin|check|call|bet/raise
			if (plusChip == player.ag) {
				player.allin (plusChip);
			} else if (player.totalBetChip > game.maxTotalBetChipOfAPlayer) {
				// raise or bet
				player.raise (plusChip);
			} else {
				if (plusChip > 0)
					player.call (plusChip);
				else
					player.check ();
			}
			game.updateMaxTotalBetChipOfAPlayer (newTotalBetChip);
			
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
			
		} else if (evt.Equals ("bd")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;
			
			game.getPlayer (n).stopCountDown ();
			game.getPlayer (n).fold ();
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			// ngung xu ly sau finish 3s
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (4f, delegate {
				cubeia.unLockProcessing ();
			}));
		} else {
			generalHandle (gameData);
		}
	}

	static void handle9KGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		Game9K game = (Game9K)GameApplication.game;
		GameScene9K gameScene = (GameScene9K)game.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if(String.IsNullOrEmpty(evt))
			evt = gameData ["N"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = JSONNode.Parse (gameData ["Arr"]).AsArray;
			string dealer = gameData ["Dealer"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
				player.isfold = false;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			// ngung xu ly de chay effect
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
				cubeia.unLockProcessing ();
			}));
			
			game.getPlayer (dealer).onTurnPoker ();
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				//				int remainingCard = jpl ["Arr"].Count;
				// chia bai
				JSONArray cardArr = jpl ["Arr"].AsArray;
				for (int j = 0; j<cardArr.Count; j++) {
					float margin = 0.44f;
					float scale = 0.66f;
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					rect.localScale = new Vector3 (scale, scale, 1f);
					otherPlayer.cardsInHandList.Add (rect);
					//					rect.GetComponent<Image> ().sprite = GameApplication.resource.getCardBackSprite();
					rect.anchoredPosition = ((Game9K)game).getViewPositionOfPlayersCard (otherPlayer, margin, scale, j, cardArr.Count);
					rect.SetParent (gameScene.cardLayer, false);
				}
				int totalChip = jpl ["AGC"].AsInt;
				otherPlayer.totalBetChip = totalChip;
				otherPlayer.call (totalChip);
				game.updateMaxTotalBetChipOfAPlayer (totalChip);
				if (jpl ["A"].AsBool == false)
					otherPlayer.fold ();
				game.thisPlayer.isfold = true;
			}
		} else if (evt.Equals ("bm")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;
			
			Player player = game.getPlayer (n);
			player.stopCountDown ();
			SoundManager.instance.play_to ();
			
			int plusChip = newTotalBetChip - player.totalBetChip;
			player.totalBetChip = newTotalBetChip;
			// xac dinh allin|check|call|bet/raise
			if (plusChip == player.ag) {
				player.allin (plusChip);
			} else if (player.totalBetChip > game.maxTotalBetChipOfAPlayer) {
				// raise or bet
				player.raise (plusChip);
			} else {
				if (plusChip > 0){
					player.call (plusChip);
				}else{
					player.check ();
				}
			}
			game.updateMaxTotalBetChipOfAPlayer (newTotalBetChip);
			
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
			
		} else if (evt.Equals ("bd")) {
			string n = gameData ["N"];
			string nn = gameData ["NN"];
			int newTotalBetChip = gameData ["AG"].AsInt;
			int totalAg = gameData ["TotalAG"].AsInt;
			
			game.getPlayer (n).stopCountDown ();
			game.getPlayer (n).fold ();
			Player nextPlayer = game.getPlayer (nn);
			if (nextPlayer != null)
				nextPlayer.onTurnPoker ();
		} else if (evt.Equals ("bc")) {
//			JSONArray data = JSONNode.Parse (gameData ["C"]).AsArray;

			foreach(Player player in game.players){
				player.stopCountDown();
				player.removeOnTurnRequest();
			}
			gameScene.deal9KCards (gameData ["C"].AsInt);
			// ngung xu ly 1s
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (1f, delegate {
				cubeia.unLockProcessing ();
			}));
		} else if (evt.Equals ("sbm")) {
			game.getPlayer (gameData ["Name"]).onTurnPoker ();
			if(game.getPlayer (gameData ["Name"]) is OtherPlayer){
				game.getPlayer (gameData ["Name"]).removeOnTurnRequest();
			}
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			// ngung xu ly sau finish 3s
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (4f, delegate {
				cubeia.unLockProcessing ();
			}));
		} else {
			generalHandle (gameData);
		}
	}

	public static void handleBinhGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		GameBinh game = (GameBinh)GameApplication.game;
		GameSceneBinh gameScene = (GameSceneBinh)game.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;
		
		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = JSONNode.Parse (gameData ["data"]).AsArray;
//			JSONArray jcards = new JSONArray();
//			jcards[-1].AsInt=27;
//			jcards[-1].AsInt=3	;
//			jcards[-1].AsInt=43;
//			jcards[-1].AsInt=30;
//			jcards[-1].AsInt=45;
//			jcards[-1].AsInt=33;
//			jcards[-1].AsInt=36;
//			jcards[-1].AsInt=24;
//			jcards[-1].AsInt=39;
//			jcards[-1].AsInt=13;
//			jcards[-1].AsInt=26;
//			jcards[-1].AsInt=52;
//			jcards[-1].AsInt=15;
			// TODO: cai nay de lam gi?
			GameApplication.gameScene.playerLayer.GetComponent<Image> ().enabled = false;

			game.state = Game.State.PLAYING;
			
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
//			gameScene.binhComp.showBinhFunc ();
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (1.0f, delegate {
				cubeia.unLockProcessing ();
				gameScene.binhComp.showBinhFunc ();
				((GameSceneBinh)GameApplication.gameScene).updateTextBinh  ();
				((GameSceneBinh)game.gameScene).isMovable = true;
			}));
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			gameScene.isMovable = false;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
			gameScene.binhComp.hideBinhFunc ();
			cubeia.lockProcessing ();
			game.gameScene.StartCoroutine (Utils.cr_runDelayed (13f, delegate {
								cubeia.unLockProcessing ();
						}));
		} else if (evt.Equals ("vtable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			gameScene.binhComp.showBinhTime (90-data ["T"].AsInt);

			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];

				bool sobai= jarr[i]["A"].AsBool;

				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				for (int j=0; j<13; j++) {
					RectTransform newCard = (RectTransform)GameApplication.Instantiate(gameScene.TransformCard);
					newCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					newCard.SetSiblingIndex (j);					
					otherPlayer.setCardTransform (newCard);
					otherPlayer.cardsInHandList.Add (newCard);
				}
				if(!sobai){
					Debug.Log("Da so bai");
					otherPlayer.fscBinh();
				}else{
					Debug.Log("Chua so bai");
				}
			}


		} else if (evt.Equals ("fsc")) {
			string name = gameData ["Name"];
			if (name.Equals (GameApplication.game.thisPlayer.name)) {
				gameScene.binhComp.setText (gameScene.binhComp.btnSoBai, Strings.instance.gameplay_binh_solai);

				gameScene.binhComp.btnDoiChi.SetActive (false);
				gameScene.binhComp.btnXepBai.SetActive (false);
				gameScene.fsc();
				gameScene.isMovable = false;
			} else {
				OtherPlayer p = (OtherPlayer)GameApplication.game.getPlayer (name);
				p.fscBinh ();
			}
		} else if (evt.Equals ("ufsc")) {
			string name = gameData ["Name"];
			if (name.Equals (GameApplication.game.thisPlayer.name)) {
				gameScene.binhComp.setText (gameScene.binhComp.btnSoBai, Strings.instance.gameplay_binh_sobai);

				gameScene.binhComp.btnDoiChi.SetActive (true);
				gameScene.binhComp.btnXepBai.SetActive (true);
				gameScene.ufsc();
				gameScene.isMovable = true;
			} else {
				OtherPlayer p = (OtherPlayer)GameApplication.game.getPlayer (name);
				p.ufscBinh ();
			}
		} else if (evt.Equals ("rjtable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player player = game.getPlayer(jpl ["N"]);
				bool sobai= jpl["A"].AsBool;
//				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				if(player is OtherPlayer){
					for (int j=0; j<13; j++) {
						RectTransform newCard = (RectTransform)GameApplication.Instantiate(gameScene.TransformCard);
						newCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
						newCard.SetSiblingIndex (j);					
						((OtherPlayer)player).setCardTransform (newCard);
						((OtherPlayer)player).cardsInHandList.Add (newCard);
					}
					if(!sobai){
						((OtherPlayer)player).fscBinh();
					}
				}
				if(player is ThisPlayer){
					JSONArray jcards = jpl ["Arr"].AsArray;
					game.thisPlayer.cards.Clear ();
					for (int k = 0; k < jcards.Count; k++) {
						game.thisPlayer.cards.Add (Card.decode_binh (jcards [k].AsInt));
					}
					gameScene.binhComp.showBinhFunc ();
					gameScene.rjtable(sobai);
				}
			}
		}else {
			generalHandle (gameData);
		}
	}

	public static void handleSAMGameTransportPacket (JSONNode gameData)
	{
		User user = GameApplication.user;
		GameSam game = (GameSam)GameApplication.game;
		GameSceneSam gameScene = (GameSceneSam)GameApplication.gameScene;
		CubeiaClient cubeia = GameApplication.cubeia;

		string evt = gameData ["evt"];
		if (evt.Equals ("lc")) {
			generalHandle(gameData);
			JSONArray jcards = gameData ["Arr"].AsArray;
			string name = gameData ["NName"];
			game.state = Game.State.PLAYING;
			game.clearLastGameCards ();
			foreach (Player player in game.players) {
				player.isReady = true;
			}
			game.updateReadyStatus ();
			game.startGame (jcards);
			//game.getPlayer (name).onTurnSam ();
			
			foreach (Player player in game.players) {
				player.onTurnSam ();
			}
		} else if (evt.Equals ("vtable")) {
			// TODO: truong hop dac biet. xu ly vtable o general truoc
			// sau do tao bai cho nguoi choi sau
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				
				RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (game.gameScene.TransformCardBackWithNumber);
				otherplayersCardsTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				int remainingCard = jpl ["Arr"].Count;
				OtherPlayer otherPlayer = (OtherPlayer)game.getPlayer (jpl ["N"]);
				otherPlayer.setCardTransform (otherplayersCardsTransform);
				otherPlayer.setCards (remainingCard);
			}
		} else if (evt.Equals ("rjtable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			JSONArray jarr = data ["ArrP"].AsArray;
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player player = game.getPlayer(jpl ["N"]);
				player.showCardsInHandByReconnectionTienLen(jpl ["Arr"].AsArray);

				if(player is OtherPlayer){
					OtherPlayer otherPlayer = (OtherPlayer)player;
					RectTransform otherplayersCardsTransform = (RectTransform)GameObject.Instantiate (game.gameScene.TransformCardBackWithNumber);
					otherplayersCardsTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					int remainingCard = jpl ["Arr"].Count;
					
					otherPlayer.setCardTransform (otherplayersCardsTransform);
					otherPlayer.setCards (remainingCard);
				}
			}
			
			// hien thi la bai cuoi tren ban
			game.showLastCardsByReconnetion(data["LC"].AsArray);
			
			// hien thi nguoi dang danh
			Player onTurnPlayer = game.getPlayer(data["CN"]);

			// truong hop dang ho sam onTurnPlayer == null -- ham dung chung tien len va sam
			if(onTurnPlayer != null){
				// hy vong dat 1s se lam ham thuc thi dc.
				gameScene.StartCoroutine(Utils.cr_runDelayed(0.1f, delegate {
					onTurnPlayer.countDownWithRemaining(data["CT"].AsInt);
				}));
			}
		} else if (evt.Equals ("dc")) {
			JSONArray jsonArray = gameData ["Arr"].AsArray;
			List<Card> cards = new List<Card> ();
			for (int i = 0; i < jsonArray.Count; i++)
				cards.Add (Card.decode_sam (jsonArray [i].AsInt));
			if (cards.Count == 1 && cards [0].N == 15) {
				//gameScene.playHaiNeAudio ();
				SoundManager.instance.playHaiNeAudio();
			} else
			if (cards.Count >= 2) {
				//gameScene.playListAudio ();
				SoundManager.instance.playListAudio();
			} else {
				//gameScene.playDanhbai ();
				SoundManager.instance.playDanhbai();
			}
			string name = gameData ["N"];
			string nextname = gameData ["NN"];
			game.getPlayer (name).danhbaiTienlen (cards, gameData ["MC"].AsInt, nextname);
		} else if (evt.Equals ("asam")) {
			string name_player = gameData ["N"];
			int sam = gameData ["sam"].AsInt;
			Player player = game.getPlayer (name_player);
			if (string.IsNullOrEmpty(name_player) || player == null)
				return;
			player.stopCountDown ();

			if (player is ThisPlayer)
				gameScene.hideBaoSam ();
			
			if (sam == 1) {
				player.chat (Strings.instance.strKhongSam,"", "","",logtoChat: false);
			}
			if (sam == 2) {
				player.chat (Strings.instance.strXinSam,"","","",logtoChat: false);
			}
		} else if (evt.Equals ("sdc")) {
			gameScene.hideBaoSam (); // de chac chan ko hien hoi sam nua
			string name_player = gameData ["N"];
			int sam = gameData["sam"].AsInt;
			Player player = game.getPlayer (name_player);
			game.sam = false;
			if(sam == 1){
				game.sam = true;
				player.bao_sam();
			}
			player.countDown ();
			if (player is ThisPlayer) {
				player.onTurnTienLen ();
				//SoundManager.instance.PlaySingle(gameScene.danhbai);
			}
		} else if (evt.Equals ("bao")) {
			string name_player = gameData ["N"];
			Player player = game.getPlayer (name_player);
			player.bao_mot();
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
		//	gameScene.playFinished ();
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);

			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
				game.updateReadyStatus();
			}));
		} else {
			generalHandle (gameData);
		}
	}

	static void handleXocDiaGameTransportPacket (JSONNode gameData)
	{
		GameXocDia game = (GameXocDia)GameApplication.game;
		CubeiaClient cubeia = GameApplication.cubeia;
		GameSceneXocDia gameScene = (GameSceneXocDia)GameApplication.gameScene;
		
		string evt = gameData ["evt"];
		// {\"evt\":\"startgame\",\"data\":\"\",\"result\":0}
		if (evt.Equals ("startgame")) {
			generalHandle(gameData);
			// TODO: chuyen sang giai doan dat cuoc
//			game.state = Game.State.PLAYING;
			gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (false);
			//gameScene.xoaXuDatCuocTrenBan ();
			//gameScene.controllerControl.gameNotification.showNotificationAutoDismiss ("bat dau thoi gian dat cua"); 
			cubeia.lockProcessing ();
			gameScene.controllerControl.xocDiaFunction.xocdia ();
			// client cho phep dat cuoc
		} else if (evt.Equals ("bet")) {
			//"{\"evt\":\"bet\",\"N\":\"dob1306683.gm\",\"Num\":\"2\",\"M\":\"100\"}"
			Player player = game.getPlayer (gameData ["N"]);
			char [] split = {';'};
			string n = gameData ["Num"];
			string m = gameData ["M"];
			string [] Num = n.Split (split);
			string [] M = m.Split (split);
			int total = 0;
			int length = 0;
			SoundManager.instance.play_to ();
			if (Num.Length == 1) {
				length = Num.Length;
			} else if (Num.Length > 1) {
				length = Num.Length - 1;
			}
			for (int i=0; i<length; i++) {
				total = total + Convert.ToInt32 (M [i]);
				if (player.betMap.ContainsKey (Num [i])) {
					int temp = Convert.ToInt32 (player.betMap [Num [i]]) + Convert.ToInt32 (M [i]);
					player.betMap [Num [i]] = "" + temp;
				} else {
					player.betMap.Add (Num [i], M [i]);
				}
				int cuadat = Convert.ToInt32 (Num [i]);
				int menhgia = Convert.ToInt32 (M [i]);
				player.datcuoc_xocdia (cuadat, menhgia, true);
				if (gameScene.betTotal.ContainsKey (Num [i])) {
					int temp = Convert.ToInt32 (gameScene.betTotal [Num [i]]) + Convert.ToInt32 (M [i]);
					gameScene.betTotal [Num [i]] = "" + temp;
				} else {
					gameScene.betTotal.Add (Num [i], M [i]);
				}
			}

			foreach (KeyValuePair<string,string> pair in gameScene.betTotal) {
				gameScene.controllerControl.xocDiaFunction.updateMoneyTotal (pair.Key, pair.Value);
			}

			player.updateGoldWithAnimation (- total, 1.6f);
			if (player is ThisPlayer) {
				((ThisPlayer)player).cloneBet.Clear ();
				foreach (KeyValuePair<string,string> pair in player.betMap) {
					gameScene.controllerControl.xocDiaFunction.updateMoneyUser (pair.Key, pair.Value);
				}
				gameScene.controllerControl.xocDiaFunction.value[4]=player.ag;       

			}

			//player.minus_gold_effect (player.ag - total, total);
		} else if (evt.Equals ("unbet")) {
			Player player = game.getPlayer (gameData ["N"]);
			int total = 0;
			foreach (KeyValuePair<string,string> pair in player.betMap) {
				total = total + Convert.ToInt32 (pair.Value);
				if (player is ThisPlayer) {
					((ThisPlayer)player).cloneBet.Add (pair.Key, pair.Value);
				}
				if (gameScene.betTotal.ContainsKey (pair.Key)) {
					int x = Convert.ToInt32 (gameScene.betTotal [pair.Key]);
					int totalX = x - Convert.ToInt32 (pair.Value);
					gameScene.betTotal [pair.Key] = "" + totalX;
					gameScene.controllerControl.xocDiaFunction.updateMoneyTotal (pair.Key, "" + totalX);
				}
			}
			player.betMap.Clear ();
			player.huycuoc ();
			//player.plus_gold_effect (player.ag + total, total);
			player.updateGoldWithAnimation (total, 1.6f);
			if (player is ThisPlayer) {
				gameScene.controllerControl.xocDiaFunction.thisPlayerUpdate ();

				gameScene.controllerControl.xocDiaFunction.value[4]=player.ag;       

				gameScene.controllerControl.xocDiaFunction.changeBackground(0);
			}
		} else if (evt.Equals ("dc")) {
			JSONArray jsonArray = gameData ["Arr"].AsArray;
			List<Card> cards = new List<Card> ();
			for (int i = 0; i < jsonArray.Count; i++)
				cards.Add (Card.decode_tienlen (jsonArray [i].AsInt));
			if (cards.Count == 1 && cards [0].N == 15) {
				//gameScene.playHaiNeAudio ();
				SoundManager.instance.playHaiNeAudio();
			} else
			if (cards.Count >= 2) {
				//gameScene.playListAudio ();
				SoundManager.instance.playListAudio();
			} else {
				//gameScene.playDanhbai ();
				SoundManager.instance.playDanhbai();
			}
			string name = gameData ["N"];
			string nextname = gameData ["NN"];
			game.getPlayer (name).danhbaiTienlen (cards, gameData ["MC"].AsInt, nextname);
		} else if (evt.Equals ("finish")) {
			generalHandle(gameData);
			game.gameScene.controllerControl.xocDiaFunction.muacua = false;
			cubeia.lockProcessing ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (3f, delegate {
				cubeia.unLockProcessing ();
				game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
			}));
			JSONArray finishArray = JSONNode.Parse (gameData ["data"]).AsArray;
			int result = gameData ["result"].AsInt;
			gameScene.controllerControl.xocDiaFunction.setImgResult (gameData ["result"], true);
			gameScene.controllerControl.xocDiaFunction.mobat (result);
			gameScene.controllerControl.xocDiaFunction.finish (result);
			for (int i=0; i<finishArray.Count; i++) {
				string name_player = finishArray [i] ["N"];
				Player player = game.getPlayer (name_player);
				int m = finishArray [i] ["M"].AsInt;
				player.ag = finishArray [i] ["AG"].AsInt;
				if (player is ThisPlayer) {
					if (m > 0) {
					//	gameScene.playNhatAudio ();
						SoundManager.instance.playNhatAudio();
					} else {
						//gameScene.playBetAudio ();
						SoundManager.instance.playBetAudio();
					}
					if (player.betMap.Count > 0) {
						foreach (KeyValuePair<string,string> pair in player.betMap) {
							((ThisPlayer)player).cloneBet.Add (pair.Key, pair.Value);
						}
					}
//					gameScene.controllerControl.xocDiaFunction.currentBet=player.ag;
				}
				player.betMap.Clear ();
				player.finishXocDia (result, m, player.ag);
			}
			gameScene.betTotal.Clear ();
			gameScene.controllerControl.xocDiaFunction.textTotalMoneyUpdate ();
			gameScene.controllerControl.xocDiaFunction.thisPlayerUpdate ();
			gameScene.controllerControl.xocDiaFunction.getValue();
			gameScene.controllerControl.xocDiaFunction.changeBackground(0);
			Tracking.sendInfoFinish (finishArray);
			game.finishThisGame (finishArray);
		} else if (evt.Equals ("stable")) {
			generalHandle (gameData);
			var data = JSONNode.Parse (gameData ["data"]);
			if (data ["S"].AsInt == 0) {
				game.state = Game.State.WAITING;
				gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.xocdia_status0);
				gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (true);
			} else if (data ["S"].AsInt == 1) {
				game.state = Game.State.PLAYING;
				gameScene.controllerControl.xocDiaFunction.xocDiaAnim.countDown (data ["T"].AsInt);
				gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.xocdia_status1);
				gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (false);
				// s = 2 chi danh cho game xocdia
			} else if (data ["S"].AsInt == 2) {
				gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (false);
				game.state = Game.State.MUABANCUA; 
				JSONClass job = gameData ["TS"].AsObject;
				int m = job ["M"].AsInt;
				int n = job ["N"].AsInt;
				gameScene.controllerControl.xocDiaFunction.xocDiaAnim.countDown (data ["T"].AsInt);
				if (m > 0 && n > 0) {
					string cua = (n == 1) ? "chẵn" : "lẻ";
					string msg = Strings.instance.xocdia_status2;
					msg = msg.Replace ("/Name/", "").Replace ("/gold/", Utils.formatNumber (m) + " " + GameApplication.COIN).Replace ("/1/", cua);
					gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (msg);
				}else{
					gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.xocdia_status3);
				}
			}
			string h = data ["H"];
//			h="1;2;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;2;";
			if (h != null && h.Length > 0) {
				char [] split = {';'};
				string [] history = h.Split (split);
				int length = history.Length;
				if (length > 1) {
					length = length - 1;
				}
				for (int i=0; i<length; i++) {
					game.gameScene.controllerControl.xocDiaFunction.setImgResult (history [i], false);
				}
			}

			JSONArray jarr = data ["ArrP"].AsArray;
			
			List<Player> plist = new List<Player> ();
			for (int i = 0; i < jarr.Count; i++) {
				var jpl = jarr [i];
				Player otherPlayer = game.getPlayer (jpl ["N"]);
				otherPlayer.D = jpl ["D"].AsInt;
				if (otherPlayer.D == 1) {
					otherPlayer.text_name.color = Color.yellow;
				} else {
					otherPlayer.text_name.color = Color.white;
				}
				JSONArray jarrH = jpl ["Arr"].AsArray;
				for (int j=0; j<jarrH.Count; j++) {
					JSONClass job = jarrH [j].AsObject;
					string n = job ["N"];
					int m = job ["M"].AsInt;

					if (otherPlayer.betMap.ContainsKey (n)) {
						int temp = Convert.ToInt32 (otherPlayer.betMap [n]) + m;
						otherPlayer.betMap [n] = "" + temp;
					} else {
						otherPlayer.betMap.Add (n, "" + m);
					}
					otherPlayer.datcuoc_xocdia (Convert.ToInt32 (n), m, false);
					if (gameScene.betTotal.ContainsKey (n)) {
						int temp = Convert.ToInt32 (gameScene.betTotal [n]) + m;
						gameScene.betTotal [n] = "" + temp;
					} else {
						gameScene.betTotal.Add (n, "" + m);
					}
				}
				
			}
			foreach (KeyValuePair<string,string> pair in gameScene.betTotal) {
				gameScene.controllerControl.xocDiaFunction.updateMoneyTotal (pair.Key, pair.Value);
			}
		} else if (evt.Equals ("ctable")) {
			generalHandle (gameData);
			game.gameScene.controllerControl.xocDiaFunction.num_chan.text = "0";
			game.gameScene.controllerControl.xocDiaFunction.num_le.text = "0";
		} else if (evt.Equals ("dealer")) {
			string n = gameData ["data"];
			if (n != null && n.Length > 0) {
				foreach (Player player in GameApplication.game.players) {
					player.D = 0;
					player.text_name.color = Color.white;
				}
				Player player1 = GameApplication.game.getPlayer (n);
				player1.D = 1;
				player1.text_name.color = Color.yellow;
				if(player1 is ThisPlayer){
					game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
				}
				string msg = Strings.instance.xocdia_msg_lamcai;
				msg = msg.Replace ("/Name/", n);
				gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (msg);
			}
		} else if (evt.Equals ("canceldealer")) {
			game.thisPlayer.D=0;
			game.thisPlayer.text_name.color = Color.white;
			game.gameScene.controllerControl.xocDiaFunction.bancua = false;
			game.gameScene.controllerControl.xocDiaFunction.huybancua = false;
			game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
		}else if (evt.Equals ("startsell")) {
			if (game.thisPlayer.D == 1) {
				game.gameScene.controllerControl.xocDiaFunction.sellbet ();
			} else {
				game.gameScene.controllerControl.xocDiaFunction.buybet ();
			}
			gameScene.controllerControl.xocDiaFunction.xocDiaAnim.countDown (20);
			gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.xocdia_msg_bancua);
		} else if (evt.Equals ("cancelsell")) {
			game.gameScene.controllerControl.xocDiaFunction.huybancua = false;
		} else if (evt.Equals ("sellbet")) {
			string name = gameData ["N"];
			int num = gameData ["Num"].AsInt;
			int m = gameData ["M"].AsInt;
			string cua = (num == 1) ? "chẵn" : "lẻ";
			string msg = Strings.instance.xocdia_status2;
			msg = msg.Replace ("/Name/", name).Replace ("/gold/", Utils.formatNumber (m) + " " + GameApplication.COIN).Replace ("/1/", cua);

			if (game.thisPlayer.D == 1) {
				game.gameScene.controllerControl.xocDiaFunction.bancua = false;
				game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
			} else {
				game.gameScene.controllerControl.xocDiaFunction.buybet ();
			}
			if (game.state == Game.State.PLAYING || game.state == Game.State.MUABANCUA) {
				game.gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (false);
			}
			gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (msg);
		} else if (evt.Equals ("buybet")) {
			game.gameScene.controllerControl.xocDiaFunction.muacua = false;
			game.gameScene.controllerControl.xocDiaFunction.updateLamCai ();
			if (game.state == Game.State.PLAYING || game.state == Game.State.MUABANCUA) {
				game.gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (false);
			}
			string name = gameData ["N"];
			int num = gameData ["Num"].AsInt;
			int m = gameData ["M"].AsInt;
			string cua = (num == 1) ? "chẵn" : "lẻ";
			string msg = Strings.instance.xocdia_msg_muacua;
			msg = msg.Replace ("/Name/", name).Replace ("/gold/", Utils.formatNumber (m) + " " + GameApplication.COIN).Replace ("/1/", cua);
			gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (msg);
		} else if (evt.Equals ("jtable")) {
			generalHandle (gameData);
			if (game.state == Game.State.PLAYING || game.state == Game.State.MUABANCUA) {
				game.gameScene.controllerControl.xocDiaFunction.lamcai.gameObject.SetActive (false);
			}
		} else {
			generalHandle (gameData);
		}
	}
}

