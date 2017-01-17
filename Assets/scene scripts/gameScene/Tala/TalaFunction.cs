using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TalaFunction : MonoBehaviour {

	public Button btnHabai, btnDanhbai, btnXepbai, btnGuibai;
	public Sprite bg_dautruong;
	public Sprite bg_52fun;
	// Use this for initialization
	void Start () {
		if (GameApplication.gameApp==GameApplication.GameApp.DauTruong) {
			btnHabai.GetComponent<Image>().sprite=bg_dautruong;
			btnDanhbai.GetComponent<Image>().sprite=bg_dautruong;
			btnXepbai.GetComponent<Image>().sprite=bg_dautruong;
			btnGuibai.GetComponent<Image>().sprite=bg_dautruong;
		}
		if (GameApplication.gameApp==GameApplication.GameApp.G52Fun) {
			btnHabai.GetComponent<Image>().sprite=bg_52fun;
			btnDanhbai.GetComponent<Image>().sprite=bg_52fun;
			btnXepbai.GetComponent<Image>().sprite=bg_52fun;
			btnGuibai.GetComponent<Image>().sprite=bg_52fun;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void showTaLaFuntionsOnTurn(int type)
	{
		Debug.LogError ("showTaLaFuntionsOnTurn: "+ type);
		if(GameApplication.game.state.Equals(Game.State.VIEWING)){
			btnXepbai.gameObject.SetActive(false);
			btnDanhbai.gameObject.SetActive(false);
			btnHabai.gameObject.SetActive(false);
			btnGuibai.gameObject.SetActive(false);
			return;
		}

		//type == 1: show 1 chuc nang danh bai
		gameObject.SetActive(true);

		btnXepbai.gameObject.SetActive(true);
		if(type == 1)
			btnDanhbai.gameObject.SetActive(true);

		if(type == 2){
			btnDanhbai.gameObject.SetActive(true);
			btnHabai.gameObject.SetActive(true);
		}

		if(type == 3){
			btnDanhbai.gameObject.SetActive(true);
			btnGuibai.gameObject.SetActive(true);
		}

		if(type == 4){
			btnDanhbai.gameObject.SetActive(true);
			btnHabai.gameObject.SetActive(true);
			btnGuibai.gameObject.SetActive(true);
		}
		
	}
	
	public void hideTaLaOnTurnFuntions(bool onFinish = false)
	{

		if(onFinish)
			btnXepbai.gameObject.SetActive(false);
		btnHabai.gameObject.SetActive(false);
		btnDanhbai.gameObject.SetActive(false);
		btnGuibai.gameObject.SetActive(false);
	}
}
