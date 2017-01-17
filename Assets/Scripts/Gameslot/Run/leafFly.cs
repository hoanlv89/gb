using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class leafFly : MonoBehaviour {
    Transform button;
	Button a;
	Transform coin;
	Text tcoin;
	bool efcoin = false;
	float dtime2;
	float stime;
	// Use this for initialization
	void Start () {
		//button = GetComponent<Button>();
		button = transform.FindChild ("Button");
		a = button.GetComponent<Button>();
		BonusControl.checkClick = false;
		coin = transform.FindChild ("Text");
		tcoin = coin.GetComponent<Text>();
		a.onClick.AddListener (delegate {

			GetComponent<Animator>().enabled = true;
			StartCoroutine(afterClickButton());
			Debug.Log(gameObject.name);
			a.interactable = false;
			BonusControl.checkClick = true;
			efcoin = true;
			stime = Time.deltaTime;
			foreach(RectTransform rect in BonusControl.listBo){
				rect.FindChild("Button").GetComponent<Button>().interactable = false;
			}
			//BonusControl.listBo.Remove();
		});
	}
	
//	void Update(){
//
//		dtime2 += Time.deltaTime;
//		if(efcoin == true){
//			if(dtime2-stime>=1){
//				tcoin.gameObject.SetActive(true);
//			}
//
//			if(dtime2-stime>=3){
//				tcoin.fontSize +=1;
//			}
//			if(dtime2-stime>=3.5f){
//				efcoin = false;
//			}
//		}
//	}
	IEnumerator afterClickButton(){
		yield return new WaitForSeconds (1);
		tcoin.gameObject.SetActive(true);
		for(int i=0;i<15;i++){
			tcoin.fontSize +=4;
			yield return new WaitForSeconds (0.1f);
		}
	}
}
