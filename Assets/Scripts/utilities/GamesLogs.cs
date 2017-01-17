using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class GamesLogs
{
	public static List<GameLogs> gameslogs = new List<GameLogs>();
	public static GameLogs currentGame;
	public static bool IN_REPLAY_MODE = false;

	public static void newLog() {
		currentGame = new GameLogs ();
		currentGame.gameid = GameApplication.cubeia.gameId;
		currentGame.logs = new List<GameLog>();
		currentGame.id = "notset";
		currentGame.playerReported = false;
		Debug.LogError ("currentGame.id = \"notset\";");
	}

	public static void setThisPlayerName(string name){
		currentGame.thisplayername = name;
	}

	public static void setTableID(int tbid){
		currentGame.tableid = tbid;
	}

	public static void addGameLog(string log) {
		GameLog gl = new GameLog ();
		gl.timeInFormat = System.DateTime.UtcNow.ToString ("yyyy-MM-dd HH:mm:ss.fff");
		gl.log = log;
		currentGame.logs.Add (gl);

		// gui len server
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			var json = JSONClass.Parse(result);
			if(currentGame.id.Equals("notset")){
				currentGame.id = json["gamelogid"];
					Debug.LogError("set currentGame.id: "+ currentGame.id);
			}
		};
		Utils.Executor onFailed = delegate() { };
	
		Debug.LogError("currentGame.id: "+ currentGame.id);
		JSONArray parameters = new JSONArray ();
		parameters [-1] = HTTPPOSTParam.createParam ("gamelogid", currentGame.id);
		parameters [-1] = HTTPPOSTParam.createParam ("time", gl.timeInFormat);
		parameters [-1] = HTTPPOSTParam.createParam ("log", gl.log);
		parameters [-1] = HTTPPOSTParam.createParam ("logcount", currentGame.logs.Count);
		if (currentGame.id.Equals ("notset")) { 
			parameters [-1] = HTTPPOSTParam.createParam ("playername", currentGame.thisplayername);
			parameters [-1] = HTTPPOSTParam.createParam ("gameid", currentGame.gameid);
			parameters [-1] = HTTPPOSTParam.createParam ("tableid", currentGame.tableid);
			parameters [-1] = HTTPPOSTParam.createParam ("ip", GameApplication.cubeia.connectedIP);

			// kiem tra event dau tien co phai la event khoi dong khong
			bool hasStartEvent = (gl.log.Contains ("ctable") || gl.log.Contains ("stable") || gl.log.Contains ("vtable") || gl.log.Contains ("rjtable"));
			parameters [-1] = HTTPPOSTParam.createParam ("hasStartEvent", hasStartEvent);
			parameters [-1] = HTTPPOSTParam.createParam ("hasLeaveEvent", gl.log.Contains ("ltable"));
		}
//		playerReported: Boolean,
	
		if(!string.IsNullOrEmpty(GameApplication.url_postgamelog))
			SuperScene.instance.doHTTPRequest (GameApplication.url_postgamelog, parameters, onSuccess, onFailed, showWaittingDialog: false);
	}

}

public class GameLogs {
	public string id;
	public int gameid;
	public int tableid;
	public string thisplayername;
	public List<GameLog> logs;
	public string ip;
	public string time;
	public bool playerReported;
}

public class GameLog {
	//	return System.DateTime.UtcNow.ToString ("HH:mm:ss.fff: ");
	public string timeInFormat;
	public string log;
}

