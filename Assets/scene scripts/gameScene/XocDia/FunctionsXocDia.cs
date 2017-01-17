using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using SimpleJSON;

public class FunctionsXocDia : MonoBehaviour {
	public XocDiaAnim xocDiaAnim;

	public Button btn_huycuoc;
	public Button btn_datlai;
	public Button btn_datx2;
	public Button btn_cuoc1;
	public Button btn_cuoc2;
	public Button btn_cuoc3;
	public Button btn_cuoc4;
	public Button btn_cuoc5;

	public Button cua1;
	public Button cua2;
	public Button cua3;
	public Button cua4;
	public Button cua5;
	public Button cua6;
	public RectTransform lichsuvandau;
	public Text num_chan;
	public Text num_le;

	Image [] img_result = new Image[40];
	public Image[] img_coin = new Image[6];
	string kq="kq";

	public Sprite img_1;
	public Sprite img_2;
	public Sprite img_3;
	public Sprite img_4;
	public Sprite img_5;

	public Sprite img_s1;
	public Sprite img_s2;
	public Sprite img_s3;
	public Sprite img_s4;
	public Sprite img_s5;

	public Sprite img_chan;
	public Sprite img_le;

	public Sprite img_red_coin;
	public Sprite img_white_coin;

	public int currentBet;
	int count_chan = 0;
	int count_le = 0;
	List<Sprite> listSpriteResult = new List<Sprite>();
	public Button lamcai;
	public bool bancua;
	public bool huybancua;
	public bool muacua;
	bool isLight=false;
	float time;
	public Image bovien;
	Vector3 [] positonXu= new Vector3[5];
	int [] temp_value= {100, 200, 300,500, 1000, 2000,3000, 5000, 10000, 20000,30000, 50000, 100000, 200000,300000, 500000, 1000000, 2000000,3000000, 5000000, 10000000, 20000000,30000000, 50000000, 100000000, 200000000,300000000,500000000};
	public int[] value = new int[5];
	public Sprite[] img_default = new Sprite[5];

	void Start () {
		Debug.Log ("betxocdia "+currentBet);

		Transform tflichsuvandau = transform.Find ("LichSuVanDau");
		for(int i = 0 ;i<40 ;i++){
			img_result[i] = tflichsuvandau.Find(kq+""+(i+1)).GetComponent<Image>();
		}
		init ();
//		getValue ();
//		updateLamCai ();
//		changeBackground (2);
	}

	public void init(){
//		(cua1.transform.FindChild("txtChan").GetComponent<Text>()).text = Strings.instance.xocdia_chan;
//		(cua2.transform.FindChild("txtLe").GetComponent<Text>()).text = Strings.instance.xocdia_le;
		(lamcai.transform.FindChild("Text").GetComponent<Text>()).text = Strings.instance.xocdia_lamcai;
		Transform tflichsuvandau = transform.Find ("LichSuVanDau");
		tflichsuvandau.FindChild("chan").GetComponent<Text>().text=Strings.instance.xocdia_chan;
		tflichsuvandau.FindChild("le").GetComponent<Text>().text=Strings.instance.xocdia_le;
		btn_huycuoc.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_huycuoc;
		btn_datlai.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_datlai;
		btn_datx2.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_datx2;
		positonXu [0] = new Vector3 (117, -243, 0);
		positonXu [1] = new Vector3 (220, -243, 0);
		positonXu [2] = new Vector3 (323, -243, 0);
		positonXu [3] = new Vector3 (426, -243, 0);
		positonXu [4] = new Vector3 (529, -243, 0);

	}

	public void datcuoc(int pos){
		if(GameApplication.game.state==Game.State.PLAYING){
			string N = ""+pos;
			string M = ""+currentBet;
			GameApplication.game.thisPlayer.betXocDia (M, N);
		} else {
			GameApplication.gameScene.controllerControl.gameNotification.showNotificationAutoDismiss(Strings.instance.xocdia_status0);
		}
	}

	public void huycuoc(){
		if(!huybancua){
			GameApplication.game.thisPlayer.unbetXocDia ();
		}else{
			GameApplication.game.thisPlayer.huybancua ();
		}
	}

	
	// Update is called once per frame
	void Update () {
		if (isLight) {
			int timed = (int)(Time.time - time);
			if(timed>2){
				isLight=false;
				foreach(Image img in img_coin){
					img.enabled=false;
				}
			}
		}
	}

	public void changeBackground(int pos){
//		btn_cuoc1.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
		btn_cuoc1.transform.Find ("text1").GetComponent<Text> ().text = Utils.formatCurrency(value[0]);
		btn_cuoc2.transform.Find ("text1").GetComponent<Text> ().text = Utils.formatCurrency(value[1]);
		btn_cuoc3.transform.Find ("text1").GetComponent<Text> ().text = Utils.formatCurrency(value[2]);
		btn_cuoc4.transform.Find ("text1").GetComponent<Text> ().text = Utils.formatCurrency(value[3]);
		btn_cuoc5.transform.Find ("text1").GetComponent<Text> ().text = "Tất tay";
		if(GameApplication.gameApp!=GameApplication.GameApp.GTL){
			LeanTween.moveLocalX (bovien.gameObject, positonXu [pos].x, 0.15f);
		}else{
			bovien.gameObject.SetActive(false);
			if(pos==0){
//				btn_cuoc1.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc2.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc3.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc4.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc5.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
				btn_cuoc1.GetComponent<Image>().sprite=img_1;
				btn_cuoc2.GetComponent<Image>().sprite=img_default[1];
				btn_cuoc3.GetComponent<Image>().sprite=img_default[2];
				btn_cuoc4.GetComponent<Image>().sprite=img_default[3];
				btn_cuoc5.GetComponent<Image>().sprite=img_default[4];
			}
			if(pos==1){
//				btn_cuoc2.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc1.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc3.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc4.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc5.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
				btn_cuoc2.GetComponent<Image>().sprite=img_2;
				btn_cuoc1.GetComponent<Image>().sprite=img_default[0];
				btn_cuoc3.GetComponent<Image>().sprite=img_default[2];
				btn_cuoc4.GetComponent<Image>().sprite=img_default[3];
				btn_cuoc5.GetComponent<Image>().sprite=img_default[4];
			}
			if(pos==2){
//				btn_cuoc3.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc2.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc1.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc4.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc5.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
				btn_cuoc3.GetComponent<Image>().sprite=img_3;
				btn_cuoc2.GetComponent<Image>().sprite=img_default[1];
				btn_cuoc1.GetComponent<Image>().sprite=img_default[0];
				btn_cuoc4.GetComponent<Image>().sprite=img_default[3];
				btn_cuoc5.GetComponent<Image>().sprite=img_default[4];
			}
			if(pos==3){
//				btn_cuoc4.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc2.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc3.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc1.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc5.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
				btn_cuoc4.GetComponent<Image>().sprite=img_4;
				btn_cuoc2.GetComponent<Image>().sprite=img_default[1];
				btn_cuoc3.GetComponent<Image>().sprite=img_default[2];
				btn_cuoc1.GetComponent<Image>().sprite=img_default[0];
				btn_cuoc5.GetComponent<Image>().sprite=img_default[4];
			}
			if(pos==4){
//				btn_cuoc5.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc2.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc3.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc4.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
//				btn_cuoc1.GetComponent<RectTransform> ().sizeDelta = new Vector2 (80, 80);
				btn_cuoc5.GetComponent<Image>().sprite=img_5;
				btn_cuoc2.GetComponent<Image>().sprite=img_default[1];
				btn_cuoc3.GetComponent<Image>().sprite=img_default[2];
				btn_cuoc4.GetComponent<Image>().sprite=img_default[3];
				btn_cuoc1.GetComponent<Image>().sprite=img_default[0];
			}
//			btn_cuoc5.transform.Find ("text1").GetComponent<Text> ().text = "All In";
		}
		currentBet=value[pos];
	}

	public void datlai(){
		if (!bancua) {
			foreach (KeyValuePair<string,string> pair in GameApplication.game.thisPlayer.cloneBet) {
				string N = pair.Key;
				string M = pair.Value;
				GameApplication.game.thisPlayer.betXocDia (M, N);
			}
			GameApplication.game.thisPlayer.cloneBet.Clear ();
		} else {
			GameApplication.game.thisPlayer.bancua();
		}
	}

	public void datX2(){
		if (!muacua) {
			string N = "";
			string M = "";
			foreach (KeyValuePair<string,string> pair in GameApplication.game.thisPlayer.betMap) {
				N = N + pair.Key + ";";
				M = M + pair.Value + ";";
			}
			GameApplication.game.thisPlayer.betXocDia (M, N);
		} else {
			GameApplication.game.thisPlayer.muacua();
		}
	}

	public void updateMoneyTotal(string cua,string gold){
		int c = Convert.ToInt32 (cua);
		int m = Convert.ToInt32 (gold);
		if (c == 1) {
			if(m==0){
				cua1.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
			}else{
				cua1.transform.FindChild("totalMoney").GetComponent<Text>().enabled=true;
				cua1.transform.FindChild("totalMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
			}
		}
		if (c == 2) {
			if(m==0){
				cua2.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
			}else{
				cua2.transform.FindChild("totalMoney").GetComponent<Text>().enabled=true;
				cua2.transform.FindChild("totalMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
			}
		}
		if (c == 3) {
			if(m==0){
				cua3.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
			}else{
				cua3.transform.FindChild("totalMoney").GetComponent<Text>().enabled=true;
				cua3.transform.FindChild("totalMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
			}
		}
		if (c == 4) {
			if(m==0){
				cua4.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
			}else{
				cua4.transform.FindChild("totalMoney").GetComponent<Text>().enabled=true;
				cua4.transform.FindChild("totalMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
			}
		}
		if (c == 5) {
			if(m==0){
				cua5.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
			}else{
				cua5.transform.FindChild("totalMoney").GetComponent<Text>().enabled=true;
				cua5.transform.FindChild("totalMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
			}
		}
		if (c == 6) {
			if(m==0){
				cua6.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
			}else{
				cua6.transform.FindChild("totalMoney").GetComponent<Text>().enabled=true;
				cua6.transform.FindChild("totalMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
			}
		}
	}

	public void updateMoneyUser(string cua,string gold){
		int c = Convert.ToInt32 (cua);
		int m = Convert.ToInt32 (gold);
		if (c == 1) {
			cua1.transform.FindChild("userMoney").GetComponent<Text>().enabled=true;
			cua1.transform.FindChild("userMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
		}
		if (c == 2) {
			cua2.transform.FindChild("userMoney").GetComponent<Text>().enabled=true;
			cua2.transform.FindChild("userMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
		}
		if (c == 3) {
			cua3.transform.FindChild("userMoney").GetComponent<Text>().enabled=true;
			cua3.transform.FindChild("userMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
		}
		if (c == 4) {
			cua4.transform.FindChild("userMoney").GetComponent<Text>().enabled=true;
			cua4.transform.FindChild("userMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
		}
		if (c == 5) {
			cua5.transform.FindChild("userMoney").GetComponent<Text>().enabled=true;
			cua5.transform.FindChild("userMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
		}
		if (c == 6) {
			cua6.transform.FindChild("userMoney").GetComponent<Text>().enabled=true;
			cua6.transform.FindChild("userMoney").GetComponent<Text>().text = Utils.formatCurrency(m);
		}
	}

	public void thisPlayerUpdate(){
		cua1.transform.FindChild("userMoney").GetComponent<Text>().enabled=false;
		cua2.transform.FindChild("userMoney").GetComponent<Text>().enabled=false;
		cua3.transform.FindChild("userMoney").GetComponent<Text>().enabled=false;
		cua4.transform.FindChild("userMoney").GetComponent<Text>().enabled=false;
		cua5.transform.FindChild("userMoney").GetComponent<Text>().enabled=false;
		cua6.transform.FindChild("userMoney").GetComponent<Text>().enabled=false;
	}

	public void textTotalMoneyUpdate(){
		cua1.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
		cua2.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
		cua3.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
		cua4.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
		cua5.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;
		cua6.transform.FindChild("totalMoney").GetComponent<Text>().enabled=false;

	
	}

	public void xocdia(){
		xocDiaAnim.startShaking (1);
	}

	public void mobat(int result){
		int m = 0;
		if(result==1){
			m=2;
		}
		if(result==2){
			m=3;
		}
		if(result==3){
			m=0;
		}
		if(result==4){
			m=1;
		}
		if(result==5){
			m=3;
		}
		if(result==6){
			m=4;
		}
		xocDiaAnim.moBat (m);
	}

	public void setImgResult(string result,bool isScale){
		if (count_chan + count_le >= 40) {
			if(listSpriteResult[0].Equals(img_chan)){
				count_chan=count_chan-1;
			}else{
				count_le=count_le-1;
			}
			listSpriteResult.RemoveAt(0);
		}

		if(Convert.ToInt32(result)==1 || Convert.ToInt32(result)==3 || Convert.ToInt32(result)==6){
			listSpriteResult.Add(img_chan);
			count_chan++;
		}else{
			listSpriteResult.Add(img_le);
			count_le++;
		}

		for (int i=0; i<listSpriteResult.Count; i++) {
			img_result [i].enabled = true;
			img_result[i].sprite=listSpriteResult[i];
		}
		num_chan.text=""+count_chan;
		num_le.text=""+count_le;
	}

	public void sendLamcai(){
		if (GameApplication.game.thisPlayer.D == 1) {
			var data = new JSONClass ();
			data ["evt"] = "canceldealer";
			GameApplication.cubeia.sendDataGame (data);
		} else {
			GameApplication.game.thisPlayer.sendLamCai ();
		}
	}

	public void sellbet(){
		btn_datlai.gameObject.SetActive(true);
		btn_datlai.enabled = true;
		btn_datlai.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_bancua;
		btn_huycuoc.gameObject.SetActive(true);
		btn_huycuoc.enabled = true;
		btn_huycuoc.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_huybancua;
		bancua = true;
		huybancua = true;
	}

	public void buybet(){
		btn_datx2.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_muacua;
		muacua = true;
	}

	public void updateLamCai(){
//		changeBackground (1);
		if (GameApplication.game.players.Count > 1) {
			lamcai.gameObject.SetActive(true);
			lamcai.enabled = true;
		} else {
			lamcai.gameObject.SetActive(false);
			lamcai.enabled=false;
		}
		if (GameApplication.game.thisPlayer.D == 1) {
			btn_huycuoc.gameObject.SetActive(false);
			btn_datx2.gameObject.SetActive(false);
			btn_datlai.gameObject.SetActive(false);

			btn_cuoc1.gameObject.SetActive(false);
			btn_cuoc2.gameObject.SetActive(false);
			btn_cuoc3.gameObject.SetActive(false);
			btn_cuoc4.gameObject.SetActive(false);
			btn_cuoc5.gameObject.SetActive(false);

			bovien.gameObject.SetActive(false);
			(lamcai.transform.FindChild("Text").GetComponent<Text>()).text = Strings.instance.xocdia_huycai;
			btn_datlai.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_bancua;
			btn_huycuoc.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_huybancua;
		} else {
			btn_huycuoc.gameObject.SetActive(true);
			btn_datx2.gameObject.SetActive(true);
			btn_datlai.gameObject.SetActive(true);
			
			btn_cuoc1.gameObject.SetActive(true);
			btn_cuoc2.gameObject.SetActive(true);
			btn_cuoc3.gameObject.SetActive(true);
			btn_cuoc4.gameObject.SetActive(true);
			btn_cuoc5.gameObject.SetActive(true);

			bovien.gameObject.SetActive(true);
			getValue();
			changeBackground(0);
			(lamcai.transform.FindChild("Text").GetComponent<Text>()).text = Strings.instance.xocdia_lamcai;
			lamcai.gameObject.SetActive(true);
			btn_huycuoc.enabled = true;
			btn_datlai.enabled = true;
			btn_datx2.enabled = true;
			btn_cuoc1.enabled = true;
			btn_cuoc2.enabled = true;
			btn_cuoc3.enabled = true;
			btn_cuoc4.enabled = true;
			btn_cuoc5.enabled = true;
			btn_datx2.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_datx2;
			btn_datlai.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_datlai;
			btn_huycuoc.transform.Find ("Text").GetComponent<Text> ().text = Strings.instance.xocdia_huycuoc;
		}
	}

	public void finish(int result){
		isLight = true;
		time = Time.time;
		if (result == 1) {
			img_coin[0].enabled=true;
		}
		if (result == 2) {
			img_coin[1].enabled=true;
		}
		if (result == 3) {
			img_coin[0].enabled=true;
			img_coin[2].enabled=true;
		}
		if (result == 4) {
			img_coin[3].enabled=true;
			img_coin[1].enabled=true;
		}
		if (result == 5) {
			img_coin[4].enabled=true;
			img_coin[1].enabled=true;
		}
		if (result == 6) {
			img_coin[5].enabled=true;
			img_coin[0].enabled=true;
		}
	}

	public int getValue(int pe){
		int x = 0;
		if (GameApplication.game.thisPlayer.ag < 10000) {
			if(pe==1){
				x=100;
			}
			if(pe==2){
				x=200;
			}
			if(pe==5){
				x=500;
			}
			if(pe==10){
				x=1000;
			}
		} else {
			int v = (GameApplication.game.thisPlayer.ag*pe)/100;
			for(int i=0;i<temp_value.Length;i++){
				if(temp_value[i]-v==0){
					x=temp_value[i];
				}else if(temp_value[i]-v>0){
					x=temp_value[i];
					break;
				}
			}
		}
		return x;
	}

	public void getValue(){
		value [0] = getValue (1);
		value [1] = getValue (2);
		value [2] = getValue (5);
		value [3] = getValue (10);
		value [4] = GameApplication.game.thisPlayer.ag;
	}
}
