using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GSetting : MonoBehaviour {

	public Sprite scheck_yes;
	public Sprite scheck_no;

	public Image sound_img;

	public Sprite bg_52fun;

	// Use this for initialization
	void Start () {
		if(DB.getInstance.getSettingSoundOn())
			sound_img.sprite = scheck_yes;
		else 
			sound_img.sprite = scheck_no;
		if(GameApplication.gameApp == GameApplication.GameApp.G52Fun){
			GetComponent<Image>().sprite=bg_52fun;
		}
	}

	public void toogleSound(){
		bool s = !DB.getInstance.getSettingSoundOn();
		if(s)
			sound_img.sprite = scheck_yes;
		else 
			sound_img.sprite = scheck_no;

		DB.getInstance.storeSettingSoundOn(s);
	}


	public void showGSetting(bool show){
		if(show)
			LeanTween.moveLocalX(gameObject, 0 + 640, 0.2f);
		else 
			LeanTween.moveLocalX(gameObject, 304 + 640, 0.2f);
	}

	public void forcedLogout() {
		SDialog dialog = SuperScene.instance.showDialog (DialogInfo.OKCancelDialog);
		dialog.content.text = "Bạn có chắc chắn muốn kết nối lại không? Chỉ dùng trong trường hợp mạng không ổn định.";
		dialog.positiveText.text = "Kết nối lại";
		dialog.negativeText.text = "Hủy bỏ";

		dialog.positive.onClick.AddListener (delegate() {
			dialog.dismiss();
			GameObject tracker = GameObject.Find ("Tracker");
			if (tracker != null)
				Destroy (tracker);
			GameApplication.game = null;
			Application.LoadLevel (GameApplication.LOGINSCENE);
		});

		dialog.negative.onClick.AddListener (delegate() {
			dialog.dismiss ();
		});

		dialog.cancel.onClick.AddListener (delegate() {
			dialog.dismiss ();
		});
	}
}
