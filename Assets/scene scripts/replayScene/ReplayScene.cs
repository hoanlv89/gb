using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using System.Collections.Generic;

public class ReplayScene : SuperScene {
	public Button pf_ReplayGameItem;
	public Button back, find, start;
	public InputField playername, gameid;
	public Text info;
	public RectTransform contentView;

	// Use this for initialization
	void Start () {
		if (GameApplication.IsInitialized == false) {
			//			 go to the login scene
			Application.LoadLevel (GameApplication.LOGINSCENE);
			return;
		}
		base.Start();

		start.enabled = false;
		playername.text = GameApplication.user.name;
		gameid.text = GameApplication.cubeia.gameId + "";
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void findGames(){
		GamesLogs.gameslogs.Clear ();
		// clear view
		info.text = "";
		foreach (RectTransform rect in contentView) {
			GameObject.Destroy(rect.gameObject);
		}
		// gui len server
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			JSONArray jarr = JSONClass.Parse(result).AsArray;
			for(int i = 0; i < jarr.Count; i++) {
//				"_id": "568f8bd4a7cd85d01fc14456",
//				"playername": "ann2010",
//				"gameid": 8021,
//				"tableid": 7,
//				"ip": "203.150.82.49",
//				"time": "2016-01-08T03:13:39.068Z"
				GameLogs game = new GameLogs();
				game.id = jarr[i]["_id"];
				game.thisplayername = jarr[i]["playername"];
				game.gameid = jarr[i]["gameid"].AsInt;
				game.tableid = jarr[i]["tableid"].AsInt;
				game.ip = jarr[i]["ip"];
				game.time = jarr[i]["time"];
				GamesLogs.gameslogs.Add(game);

				// sinh view
				Button button = GameObject.Instantiate<Button>(pf_ReplayGameItem);
				button.transform.SetParent(contentView, false);
				button.transform.FindChild("Text").GetComponent<Text>().text = game.id+ " logcount: "+ jarr[i]["logcount"].AsInt+" reported: "+jarr[i]["playerReported"].AsBool;
				button.onClick.AddListener(delegate() {
//					GameLogs game = GamesLogs.gameslogs[i];
					info.text = "id: " + game.id;
					info.text += "\ngameid: "+game.gameid;
					info.text += "\nplayername: "+game.thisplayername;
					info.text += "\ntableid: "+game.tableid;
					info.text += "\nip: "+game.ip;
					info.text += "\nstart time: "+game.time;
					// TODO: du kien con danh dau bi loi va preview so nguoi choi.

					loadEvents(game);
				});
			}
		};
		Utils.Executor onFailed = delegate() {
			info.text = "get failed";
		};

		JSONArray parameters = new JSONArray ();
		parameters [-1] = HTTPPOSTParam.createParam ("playername", playername.text);
		parameters [-1] = HTTPPOSTParam.createParam ("gameid", gameid.text);

		if(!string.IsNullOrEmpty(GameApplication.url_receivegamelog))
			SuperScene.instance.doHTTPRequest (GameApplication.url_receivegamelog, parameters, onSuccess, onFailed, showWaittingDialog: false);
	}

	public void loadEvents(GameLogs game){
		start.enabled = false;
		start.onClick.RemoveAllListeners ();
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			JSONArray jarr = JSONClass.Parse(result).AsArray;
			game.logs = new List<GameLog>();
			for(int i = 0; i < jarr.Count; i++) {
				GameLog gl = new GameLog();
				gl.timeInFormat = jarr[i]["time"];
				gl.log = jarr[i]["log"];
				game.logs.Add(gl);

			}
			printInfo(game);
			info.text += "\n" + game.logs[0].log;

			start.enabled = true;
			start.onClick.AddListener(delegate() {
				GamesLogs.IN_REPLAY_MODE = true;
				GamesLogs.currentGame = game;
				goToGameScene();
			});
		};
		Utils.Executor onFailed = delegate() {
			printInfo(game);
			start.enabled = false;
		};
		
		JSONArray parameters = new JSONArray ();
		parameters [-1] = HTTPPOSTParam.createParam ("gamelogid", game.id);

		if(!string.IsNullOrEmpty(GameApplication.url_receivelogs))
			SuperScene.instance.doHTTPRequest (GameApplication.url_receivelogs, parameters, onSuccess, onFailed, showWaittingDialog: false);
	}

	void printInfo(GameLogs game){
		info.text = "id: " + game.id;
		info.text += "\ngameid: "+game.gameid;
		info.text += "\nplayername: "+game.thisplayername;
		info.text += "\ntableid: "+game.tableid;
		info.text += "\nip: "+game.ip;
		info.text += "\nstart time: "+game.time;
		if (game.logs == null) {
			info.text += "\nlogs count: get failed";
		} else {
			info.text += "\nlogs count: " + game.logs.Count;
			int count = game.logs.Count;
			System.DateTime firsttime = System.DateTime.ParseExact(game.logs[0].timeInFormat, "yyyy-MM-dd HH:mm:ss.fff", null);
			System.DateTime lasttime = System.DateTime.ParseExact(game.logs[count-1].timeInFormat, "yyyy-MM-dd HH:mm:ss.fff", null);

			info.text += "\nduration: " + (lasttime - firsttime).ToString ();
		}
	}

	public void startGame(){
		
	}

	public void backToPreviousScene() {
		SoundManager.instance.playButtonClicked ();
		if (previousScene != null && previousScene != GameApplication.REPLAYSCENE)
			Application.LoadLevel (previousScene);
		else
			Application.LoadLevel (GameApplication.LOBBYSCENE);
		
		previousScene = GameApplication.REPLAYSCENE;
	}
}
