using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class testHieuUngLuot : MonoBehaviour {
	float anpha = 255;
	public RectTransform img;
	//Vector3 color;
	Color32 color;
	// Use this for initialization
	void Start () {
		//StartCoroutine (changeAnpha());
		//Debug.Log ("changeanpha");
		//LeanTween.alpha (img, 0.1f, 1).setDelay(1);
//		color = img.GetComponent<Image> ().color;
//		color.a = 10;
		//img.GetComponent<Image> ().color.;
	}
	IEnumerator changeAnpha(){
		while(true){
//			LeanTween.alpha (img, 0.1f, 0.5f);
//			yield return new WaitForSeconds (0.5f);
//			LeanTween.alpha (img, 1, 0.5f);
//			yield return new WaitForSeconds (0.5f);

		}
	}
	// Update is called once per frame
	void Update () {
	//55 toi 255
		//transform.GetChild (1).GetComponent<Image>().color= 10;
	}
}
