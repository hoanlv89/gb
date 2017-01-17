using UnityEngine;
using System.Collections;
using com.dst.Roulette;
using System.Collections.Generic;
using UnityEngine.UI;
using SimpleJSON;


public class Manage : MonoBehaviour {

	/**PUBLIC**/
	public string username;
	public int gold;
	public UserInfo Player;
	public ChipStore chipStore;
	public GameObject Totem;

	public Ball ball;

	public ResultDisplay resultDisplay;

	public Statistic statistic;

	/**PRIVATE**/

	private bool m_Spinning = false;

	private int m_UnitBet = 1;

	private bool m_ReadyForBet = false;

	private int m_IdMatch ;

	public static bool enableSound = true;
	public AudioClip soundWin;
	public AudioClip soundLose;
	public Dictionary<int, int> dictBet= new Dictionary<int, int>();
	public string num;
	public string ag;

	//private int m_Result;
	//private List<int> m_Result;
	//private int m_goldWin;

	private List<int> numbers = new List<int>(new int[]{26,3,35,12,28,7,29,18,22,9,31,14,20,1,33,16,24,5,10,23,8,30,11,36,13,27,6,34,17,25,2,21,4,19,15,32,0});

	void Awake(){
		EventSink.onCellClick += new CellClickHandle (this.cellClick);
		EventSink.onCellPointDown += new CellPointDownHandle (this.cellDown);
		EventSink.onCellPointUp += new CellPointUpHandle (this.cellUp);
		EventSink.onChangeUnitBet += new ChangeUnitBet (this.unitChange);
		EventSink.onClear += new ClearHandle (this.clear);
		EventSink.onExit += new ExitHandle (this.exit);
		EventSink.onRebet += new RebetHandle (this.rebet);
		EventSink.onRebetAndSpin += new RebetAndSpinHandle (this.rebetAndSpin);
		EventSink.onDoubleBet += new DoubleBetHandle (this.doubleBet);
		EventSink.onDoubleRebet += new DoubleRebetHandle (this.doublerebet);
		EventSink.onSendChat += new SendChatHandle (this.sendChat);
		EventSink.onSendSpin += new SendSpinHandle (this.sendSpin);
		EventSink.onUndo += new UndoHandle (this.undo);
		EventSink.onChangeBet += new ChangeBetHandle (this.changeBet);
		EventSink.onCamDown += new CameraDownHandle (this.camDownComplete);
		EventSink.onCamForward += new CameraForwardHandle (this.camForwardComplete);
		EventSink.onCamBack += new CameraBackHandle (this.camBackComplete);

		EventSink.onSpin += new SpinResponeHandle (this.spin);
		EventSink.onFinish += new FinishReceiverHandle (this.finish);

		EventSink.onAMFinish += new SendAMHandle (this.AMFinish);
	}

	void OnDestroy(){
		EventSink.onCellClick -= new CellClickHandle (this.cellClick);
		EventSink.onCellPointDown -= new CellPointDownHandle (this.cellDown);
		EventSink.onCellPointUp -= new CellPointUpHandle (this.cellUp);
		EventSink.onChangeUnitBet -= new ChangeUnitBet (this.unitChange);
		EventSink.onClear -= new ClearHandle (this.clear);
		EventSink.onExit -= new ExitHandle (this.exit);
		EventSink.onRebet -= new RebetHandle (this.rebet);
		EventSink.onRebetAndSpin -= new RebetAndSpinHandle (this.rebetAndSpin);
		EventSink.onDoubleBet -= new DoubleBetHandle (this.doubleBet);
		EventSink.onDoubleRebet -= new DoubleRebetHandle (this.doublerebet);
		EventSink.onSendChat -= new SendChatHandle (this.sendChat);
		EventSink.onSendSpin -= new SendSpinHandle (this.sendSpin);
		EventSink.onUndo -= new UndoHandle (this.undo);
		EventSink.onChangeBet -= new ChangeBetHandle (this.changeBet);
		EventSink.onCamDown -= new CameraDownHandle (this.camDownComplete);
		EventSink.onCamForward -= new CameraForwardHandle (this.camForwardComplete);
		EventSink.onCamBack -= new CameraBackHandle (this.camBackComplete);

		EventSink.onSpin -= new SpinResponeHandle (this.spin);
		EventSink.onFinish -= new FinishReceiverHandle (this.finish);

		EventSink.onAMFinish -= new SendAMHandle (this.AMFinish);
	}

	void Start () {
		User user = GameApplication.user;
		Player.setGold(user.ag);
		Player.setUserName(user.name);
		
		if (GameApplication.user.ag < 100000) {
			chipStore.unitInfo [0].value = 10;
			chipStore.unitInfo [1].value = 20;
			chipStore.unitInfo [2].value = 100;
			chipStore.unitInfo [3] .value= 200;
			chipStore.unitInfo [4].value = 1000;
		} else {
			chipStore.unitInfo [0].value = 100;
			chipStore.unitInfo [1].value = 500;
			chipStore.unitInfo [2].value = 1000;
			chipStore.unitInfo [3] .value= 5000;
			chipStore.unitInfo [4].value = 10000;
		}
		unitChange (chipStore.unitInfo [0].value);
	}
	

	void Update () {
	
	}



	void cellClick (GameObject g)
	{
		int[] list = g.GetComponent<BetHandle> ().Values;
		bool placeChipAtCell = g.GetComponent<BetHandle> ().PlaceChipAtCell;
		if (m_Spinning)
			return;
		if (!m_ReadyForBet) {
			// rotate for bet
			Camera.main.GetComponent<Animation>().Play("TableTop");	
			m_ReadyForBet = true;
			return;
		}
		if (Player.gold < list.Length * m_UnitBet) {
			SuperScene.instance.showInfoDialog("Bạn không đủ tiền đặt!");
			return;
		}

		//add data
//		Debug.LogError ("m_unibet ====> " + m_UnitBet+" BOOL  =====> " + placeChipAtCell);
		chipStore.Add(g, m_UnitBet, placeChipAtCell);

	}

	void cellDown (GameObject g)
	{
		int[] arr = g.GetComponent<BetHandle> ().Values;
		for (int i = 0; i < arr.Length; i++) {
			Button b = chipStore.CellParent.Find("Cell_" + arr[i]).GetComponent<Button>();
			ColorBlock cb = b.colors;
			Color c = cb.normalColor;
			c.a = 0.9f;
			cb.normalColor = c;
			b.colors = cb;
		}
	}

	void cellUp (GameObject g)
	{
		int[] arr = g.GetComponent<BetHandle> ().Values;
		for (int i = 0; i < arr.Length; i++) {
			Button b = chipStore.CellParent.Find("Cell_" + arr[i]).GetComponent<Button>();
			ColorBlock cb = b.colors;
			Color c = cb.normalColor;
			c.a = 0.0f;
			cb.normalColor = c;
			b.colors = cb;
		}
	}

	void changeBet (int val)
	{
		if (Player.totalBet == 0)
			Player.controlButton ("BET");

		Player.updateBet (val);
	}

	void unitChange (int v)
	{
		for (int i = 0; i < chipStore.unitInfo.Length; i++) {
			if(chipStore.unitInfo[i].value == m_UnitBet){
				chipStore.unitInfo[i].gameObject.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
			}
			if(chipStore.unitInfo[i].value == v){
				//chipStore.unitInfo[i].gameObject.transform.localScale = new Vector3(1.4f, 1.4f, 1.4f);
				iTween.ScaleTo(chipStore.unitInfo[i].gameObject, iTween.Hash("time", 0.1f, "scale", new Vector3(1.2f, 1.2f, 1.2f), "easetype", iTween.EaseType.linear));
			}
		}

		m_UnitBet = v;

	}

	void clear ()
	{
		if (chipStore.o_dict == null) {
			Player.controlButton ("START");
		} else {
			Player.controlButton ("NEW");
		}
		if (Player.totalBet <= 0)
			return;
		changeBet (-Player.totalBet);
		chipStore.Clear ();
	}

	void exit ()
	{
		if (SuperScene.previousScene != null)
			Application.LoadLevel (SuperScene.previousScene);
		else
			Application.LoadLevel (GameApplication.HOMESCENE);
	}

	void rebet ()
	{
		if (m_Spinning)
			return;
		if (Player.totalBet > 0)
			return;
		if (chipStore.o_dict == null)
			return;
		if (chipStore.getTotalOld () > Player.gold) {
			SuperScene.instance.showInfoDialog("Bạn không đủ tiền đặt!");
			return;
		}
		//Player.controlButton ("BET");
		chipStore.Restore ();
	}

	void rebetAndSpin ()
	{
		rebet ();
		sendSpin ();
	}

	void doublerebet(){
		if (m_Spinning)
			return;

		if (chipStore.getTotalOld () * 2 > Player.gold) {
			SuperScene.instance.showInfoDialog("Bạn không đủ tiền đặt!");
			return;
		}
		chipStore.doubleRebet ();
	}
	void doubleBet ()
	{
		if (m_Spinning)
			return;

		if (Player.totalBet <= 0)
			return;

		if (Player.totalBet > Player.gold) {
			SuperScene.instance.showInfoDialog("Bạn không đủ tiền đặt!");
			return;
		}
		chipStore.doubleBet ();
	}

	void sendChat ()
	{
		throw new System.NotImplementedException ();
	}

	void sendSpin ()
	{
		if (m_Spinning)
			return;
		if (Player.totalBet <= 0) {

			SuperScene.instance.showInfoDialog("Bạn không đủ tiền đặt!");
			return;
		}
		m_Spinning = true;
		int a = Random.Range (0, 36);

		Player.controlButton ("SPIN");
		//send spin to server
		dictBet = chipStore.getSendString ();
		num = "";
		ag = "";
		foreach (KeyValuePair<int,int> pair in dictBet) {
			if(pair.Key==0){
				num+="0;";
				Debug.LogError("kakakak ===> " + num);
			}else{
				num+=""+pair.Key+";";
			}
			ag+=""+pair.Value+";";
		}
		sendService (num, ag);
//		spin (a, 1, 10);
	}





	void spin(int n, int id, int g){
		Player.winTrans.GetComponent<Text> ().text = Utils.formatNumber(0);
		Player.ActiveControlPanel (false);
		Camera.main.GetComponent<Animation>().Play("TableDown");
		m_IdMatch = id;

		statistic.Add (n);

		Player.setGold (g);

		ball.spin (n);
	}

	void camDownComplete ()
	{
		Camera.main.GetComponent<Animation> ().Play ("CamForward");
	}

	void camForwardComplete ()
	{
		StartCoroutine (CameraBack(2.0f));

	}

	IEnumerator CameraBack (float time)
	{
		yield return new WaitForSeconds (time);
		Camera.main.GetComponent<Animation> ().Play ("CamBack");
	}

	void camBackComplete ()
	{
		//ResetGame ();
		displaySpinResult ();
	}

	private void ResetGame ()
	{
		m_Spinning = false;
		m_ReadyForBet = false;
		chipStore.Save ();
		chipStore.Clear ();
		Player.updateBet (0, true);
		Player.controlButton ("NEW");
	}

	void undo ()
	{
		if (m_Spinning)
			return;
		chipStore.undo ();

	}

	void displaySpinResult()
	{
		Transform cell = chipStore.CellParent.Find("Cell_" + statistic.getCurrent());
		Vector3 v = cell.position;
		v.y = Totem.transform.position.y;
		iTween.MoveTo(Totem, iTween.Hash("position", v, "time", 1, "oncomplete", "displayAllCellWin", "onCompleteTarget", this.gameObject));
		showViewResult ();
	}
	
	void showViewResult ()
	{
		resultDisplay.show (statistic.getCurrent (), numbers.IndexOf(statistic.getCurrent()));
		statistic.display ();
		StartCoroutine(hiddenResult(3f));
	}

	private void displayAllCellWin()
	{
		Transform transWin = chipStore.CellParent.Find ("Cell_" + statistic.getCurrent());
		Button[] bs = transWin.GetComponent<BetHandle>().CellShowIfWin;

		if (bs.Length > 0)
			StartCoroutine (flashButton (bs, 1, 0.3f));
		iTween.MoveTo(Totem, iTween.Hash("position", new Vector3(25.50024f, 64.74017f, 4.825134f), "time", 1,"delay",1, "oncomplete", "finishSpin", "onCompleteTarget", this.gameObject));
	}

	private IEnumerator flashButton(Button[] bs, int t, float time){
		if (t == 7)
			yield break;

		yield return new WaitForSeconds (time);
		for (int i = 0; i < bs.Length; i++) {
			Button b = bs[i];
			ColorBlock cb = b.colors;
			Color c = cb.normalColor;
			c.a =  (t % 2 == 0 ? 0 : 0.5f);
			cb.normalColor = c;
			b.colors = cb;
		}
		t += 1;
		StartCoroutine (flashButton (bs, t, time));
	} 
	
	IEnumerator hiddenResult (float s)
	{
		yield return new WaitForSeconds (s);
		resultDisplay.hide ();
	}


	/// <summary>
	/// send finish to Server
	/// </summary>
	private void finishSpin()
	{
		//EventSink.onSendFinish (m_IdMatch);
		Debug.LogError ("finish chay vao day a");
//		finish (1000);
		var data = new JSONClass();
		data ["evt"] = "frl";
		data ["id"].AsInt = m_IdMatch;
		GameApplication.cubeia.sendService(data);
	}

	/// <summary>
	/// Server respone
	/// </summary>
	/// <param name="g">gold win</param>
	private void finish (int g)
	{
		if (g > 0) {
			Player.setGold (Player.gold + g);
			LeanTween.value(Player.winTrans.GetComponent<Text> ().gameObject,0f,g,1.0f).setOnUpdate(delegate(float obj) {
				Player.winTrans.GetComponent<Text> ().text = Utils.formatNumber((int)obj);
			});
			updateRealGold (Player.gold);
			GetComponent<AudioSource> ().clip = soundWin;
		} else {
			GetComponent<AudioSource> ().clip = soundLose;
		}

		GetComponent<AudioSource> ().Play ();
			
		ResetGame ();
		Player.ActiveControlPanel (true);
		GameApplication.cubeia.lockProcessing ();
		(SuperScene.instance).StartCoroutine (Utils.cr_runDelayed (3f, delegate {
			GameApplication.cubeia.unLockProcessing ();
		}));

	}

	void updateRealGold(int val){
		///update real gold
		/// ...
		GameApplication.user.ag = val;
	}

	void sendService(string num , string ag){
		var data = new JSONClass ();
		data ["evt"] = "rlm";
		data ["LQ"] = ag;
		data ["Num"] = num;
		GameApplication.cubeia.sendService (data);
	}

	private void AMFinish(int gold){
		string msg =  "Bạn được tặng " + Utils.formatNumber(gold) + " " + GameApplication.COIN ;
		SuperScene.instance.showInfoDialog (msg);
		Player.setGold (GameApplication.user.ag);
	}
}
