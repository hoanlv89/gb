using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class XocDiaAnim : MonoBehaviour
{
	public Image[] xus;
	public Image imgBat;
	float x0, y0;
	const float r = 30; // 
	const float vphi = 15 * Mathf.PI; // rad/s
	float phibias;
	RectTransform rect;
	bool isShaking;
	float cx, cy;
	float cphi;
	Vector2[] pos_xus = new Vector2[4];
	float startShakingTime;
	int redCount;
	public Image demgio;
	public Text timed;

	// cac bien dem nguoc
	float thoigianbatdaudemnguoc;
	int ct;
	GameSceneXocDia gameScene;

	public Image testXu;

	public Sprite whiteCoin, redCoin;
	public Sprite img_chan;

	// Use this for initialization
	void Start ()
	{
		x0 = 0f;
		y0 = 75f;
		isShaking = false;
		cx = 0f;
		cphi = Mathf.PI / 4;
		rect = (RectTransform)transform;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (ct > 0) {
			int time = (int)(Time.time - thoigianbatdaudemnguoc);
			if(time>ct){
				this.timed.enabled=false;
				this.demgio.enabled=false;
			}
			this.timed.text=""+(ct-time);
		}
		if (!isShaking) {
			return ;
		}
		cphi = cphi + Time.deltaTime * vphi;
		cx = r * Mathf.Cos (cphi);
		cy = cx * Mathf.Cos (phibias) * Mathf.Sin (phibias);
		rect.anchoredPosition = new Vector2 (x0 + cx, y0 + cy);

		float shakingTime = Time.time - startShakingTime;
		if (shakingTime > 3) {
			this.isShaking = false;
			GameApplication.cubeia.unLockProcessing();
			GameApplication.game.state=Game.State.PLAYING;
			countDown(22);
			gameScene = (GameSceneXocDia)GameApplication.game.gameScene;
			gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.xocdia_status); 
			rect.anchoredPosition=new Vector2 (x0, y0);
		}

	}

	public void toggleShaking ()
	{
		toggleShaking (UnityEngine.Random.Range (0, 4));
	}

	public void toggleShaking (int redCount)
	{
		isShaking = !isShaking;
		if (isShaking) {
			startShaking(redCount);
		} else {
			rect.anchoredPosition= new Vector2 (x0, y0);
		}
	}

	public void startShaking (int redCount)
	{
		LeanTween.cancel (imgBat.gameObject);
		isShaking = true;
		//this.redCount = redCount;
//			imgBat.enabled = true;
//		cx = rect.anchoredPosition.x;
//		cphi = Mathf.Acos (cx / r);
//		phibias = Random.Range (-Mathf.PI / 4, Mathf.PI / 4);
		startShakingTime = Time.time;
		imgBat.rectTransform.anchoredPosition = Vector2.zero;
	}

	public void moBat (int red)
	{
		this.isShaking = false;
		rect.anchoredPosition = new Vector2 (x0, y0);
		this.redCount = red;
		cx = rect.anchoredPosition.x;
		cphi = Mathf.Acos (cx / r);
		phibias = UnityEngine.Random.Range (-Mathf.PI / 4, Mathf.PI / 4);
		startShakingTime = Time.time;
		imgBat.rectTransform.anchoredPosition = Vector2.zero;
		calculateXusPos ();
		this.demgio.enabled=false;
		this.timed.enabled=false;
		for (int i = 0; i<4; i++) {
			xus [i].rectTransform.anchoredPosition = pos_xus [i];
			if (i < redCount)
				xus [i].sprite = redCoin;
			else
				xus [i].sprite = whiteCoin;
		}

		if (imgBat.rectTransform.anchoredPosition.y <= 0.5f)
			LeanTween.moveLocalY (imgBat.gameObject, 500, 1);

//		imgBat.enabled = false;
	}

	public void dayBat ()
	{
		if (imgBat.rectTransform.anchoredPosition.y >= 0.5f)
			LeanTween.moveLocalY (imgBat.gameObject, 0, 1);
	}

	void calculateXusPos ()
	{
		float size = ((RectTransform)transform).sizeDelta.x;
		for (int i = 0; i < 4; i++) {
			int pos = UnityEngine.Random.Range (i * 12 + 1, (i + 1) * 12);
			int posx = pos / 7 + 1 - 4;
			int posy = pos % 7 + 1 - 4;
			float dx = posx * size / 20;
			float dy = posy * size / 20;
			pos_xus [i] = new Vector2 (dx, dy);
		}
	}

	public void countDown(int sec){
		this.timed.enabled = true;
		this.demgio.enabled = true;
		ct = sec;
		thoigianbatdaudemnguoc = Time.time;
	}

	public void scale(){
		testXu.enabled = true;
		testXu.sprite = img_chan;
		testXu.transform.localScale = new Vector3(10F, 10F, 0);
//		Action<float> updateScale = delegate(float k) {
//			if(k>2){
//				k = 4-k;
//			}
//			testXu.transform.localScale = new Vector3(k, k, 0);
//			Debug.Log(""+k);
//		};
//		LeanTween.value(gameObject,updateScale, 1f, 3f, 4f).setEase(LeanTweenType.easeOutElastic);	
	}
}
