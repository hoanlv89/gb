using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;

public class ReplayController : MonoBehaviour {

	public Button stop, play, next, quit, btnReportErr;
	public Text text, status, textBtnReportErr;
	public Sprite sp_play, sp_pause;
	public Slider slider;

	int logindex = 0;
	GameLogs game = null;
	bool playing = false;
	bool autoHandleNext = false;
	float floatTotalDuration;
	string strTotalDuration;

	// Use this for initialization
	void Start () {
		game = GamesLogs.currentGame;

		if (GamesLogs.IN_REPLAY_MODE == false) {
			stop.gameObject.SetActive (false);
			play.gameObject.SetActive (false);
			next.gameObject.SetActive (false);
			text.gameObject.SetActive (false);
			status.gameObject.SetActive (false);
			slider.gameObject.SetActive(false);

			btnReportErr.gameObject.SetActive(true);
			btnReportErr.onClick.RemoveAllListeners ();
			btnReportErr.onClick.AddListener (delegate() {
				reportErr();
			});
		} else {
			stop.gameObject.SetActive (true);
			play.gameObject.SetActive (true);
			next.gameObject.SetActive (true);
			text.gameObject.SetActive (true);
			status.gameObject.SetActive (true);
			slider.gameObject.SetActive(true);
			btnReportErr.gameObject.SetActive(false);

			quit.onClick.RemoveAllListeners ();
			quit.onClick.AddListener (delegate() {
				GamesLogs.IN_REPLAY_MODE = false;
				LeanTween.cancelAll(false);
				GameApplication.game.players.Clear ();
				GameApplication.gameScene.goToReplayScene ();
			});

			next.onClick.RemoveAllListeners ();
			next.onClick.AddListener (delegate() {
				handleNextEvent (auto: false);
				LeanTween.cancel (this.gameObject); // cancel delayed call

				playing = false;
				play.GetComponent<Image> ().sprite = sp_play;
			});

			play.onClick.RemoveAllListeners ();
			play.onClick.AddListener (delegate() {
				playing = !playing;
				effectPlayPauseButton ();
			});

			// ve do thi thoi gian
			int count = game.logs.Count;
			System.TimeSpan totalDuration = getDuration (game.logs [0], game.logs [count - 1]);
			floatTotalDuration = (float)totalDuration.TotalMilliseconds;
			strTotalDuration = durationToString (totalDuration);
			status.text = strTotalDuration;
			status.text += "\n" + logindex + "/" + game.logs.Count;
		}
	}

	System.TimeSpan getDuration(GameLog gl1, GameLog gl2){
		System.DateTime firsttime = System.DateTime.ParseExact(gl1.timeInFormat, "yyyy-MM-dd HH:mm:ss.fff", null);
		System.DateTime lasttime = System.DateTime.ParseExact(gl2.timeInFormat, "yyyy-MM-dd HH:mm:ss.fff", null);
		return lasttime - firsttime;
	}

	string durationToString(System.TimeSpan timespan) {
		return timespan.Minutes + ":" + timespan.Seconds;
	}

	void effectPlayPauseButton() {
		if(playing) {
			play.GetComponent<Image>().sprite = sp_pause;
			// neu dang chay roi thi khong can phai goi lenh handle nua
			if(!autoHandleNext)
				handleNextEvent(auto: true);
			else 
				LeanTween.resumeAll();
		} else {
			play.GetComponent<Image>().sprite = sp_play;
			if(autoHandleNext)
				LeanTween.pauseAll();
		}
	}

	public void reportErr(){
		// gui len server
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			var json = JSONClass.Parse(result);
			if(json["updated"].AsInt > 0)
				game.playerReported = !game.playerReported;

			if(game.playerReported) {
				textBtnReportErr.text = "Hủy báo lỗi";
			} else {
				textBtnReportErr.text = "Báo lỗi";
			}
		};
		Utils.Executor onFailed = delegate() { };

		JSONArray parameters = new JSONArray ();
		parameters [-1] = HTTPPOSTParam.createParam ("gamelogid", game.id);
		parameters [-1] = HTTPPOSTParam.createParam ("playerReported", !game.playerReported);

		if(!string.IsNullOrEmpty(GameApplication.url_playerReportErr))
			SuperScene.instance.doHTTPRequest (GameApplication.url_playerReportErr, parameters, onSuccess, onFailed, showWaittingDialog: false);
	}

	void handleNextEvent(bool auto){
		this.autoHandleNext = auto;
		quit.gameObject.SetActive (true); // de dam bao nut quit luon hoat dong sau moi event
		if(logindex < game.logs.Count){
			GameLog currentGamelog = game.logs[logindex++];
			string log = currentGamelog.log.Replace(game.thisplayername, GameApplication.user.name);
			var gameData = JSONNode.Parse (log);
			
			GameTransportPacket gameTransportPacket = new GameTransportPacket ();
			gameTransportPacket.tableid = 1111;
			gameTransportPacket.gamedata = Utils.getBytes (gameData.ToString ());
			
			GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);

			System.TimeSpan currentTimeSpan = getDuration(game.logs[0], currentGamelog);
			status.text = durationToString(currentTimeSpan)+"/"+strTotalDuration;
			status.text += "\n"+logindex + "/" + game.logs.Count;

			slider.value = (float)(currentTimeSpan.TotalMilliseconds)/floatTotalDuration;

			if(this.autoHandleNext && logindex < game.logs.Count) { // hasnext event
				float diffInSeconds = (float)(getDuration(currentGamelog, game.logs[logindex]).TotalSeconds);
				LeanTween.delayedCall(this.gameObject, diffInSeconds, delegate() {
					if(this.autoHandleNext) { // double check
						Debug.Log("auto hanlde next event");
						handleNextEvent(this.autoHandleNext);
					}
				});

				LeanTween.value(this.gameObject, 0f, diffInSeconds, diffInSeconds).setOnUpdate(delegate(float value) {
					System.TimeSpan timeSpan = currentTimeSpan.Add(new System.TimeSpan(0, 0, (int)value));
					status.text = durationToString(timeSpan)+"/"+strTotalDuration;
					status.text += "\n"+logindex + "/" + game.logs.Count;

					slider.value = (float)(value + currentTimeSpan.TotalMilliseconds)/floatTotalDuration;
				});
			}
		} else {
			Debug.LogError("empty");
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
