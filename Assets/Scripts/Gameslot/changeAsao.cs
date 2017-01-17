using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class changeAsao : MonoBehaviour {
	GameObject [] list= new GameObject[16];
	float dtime;
	float maxTime = 0.5f;
	Image  img;
	Image [] limg = new Image[16];
	// Use this for initialization
	void Start () {
		for(int i=0;i<=15;i++){
			int random = Random.Range(100,255);
			GameObject a = gameObject.transform.FindChild (i.ToString()).gameObject;
			list[i] = a;
			limg[i] = list[i].GetComponent<Image> ();
		}
		//img = list[0].GetComponent<Image> ();
	}
	
	void Update(){
		dtime += Time.deltaTime;
		for (int i=0; i<=15; i++) {
		
			byte a = (byte)((1 - dtime) * 255);
			Color32 color = limg[i].color;
			color.a = (byte)(a);
			limg[i].color = color;
			if (1 - dtime < 0.2f) {
				dtime = 0;
			}
		}
	}
}
