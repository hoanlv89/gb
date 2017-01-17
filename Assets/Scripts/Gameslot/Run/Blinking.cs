using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Blinking : MonoBehaviour {
	Image img;
	//	float startTime;
	float countTime;
	float dtime;
	float maxTime = 0.5f;
	
	public bool blinking = true;
	
	// Use this for initialization
	void Start () {
		img = GetComponent<Image> ();
		//startTime = Time.deltaTime;
	}
	
	// Update is called once per frame
	void Update () {
		dtime += Time.deltaTime;
		
		//			if (img.enabled) {
		//			byte a = (byte)(( 1 - dtime/maxTime) * 255);
		//			Color32 color = img.color;
		//			color.a = a;
		//			img.color = color;
		//			}
		if (dtime > maxTime) {
			// doi trang thai
			
			if (!img.enabled && !blinking) 
				return;
			
			byte a = (byte)((1 - dtime / maxTime) * 255);
			Color32 color = img.color;
			color.a = a;
			img.color = color;
			
			if (dtime > maxTime) {
				// doi trang thai
				
				img.enabled = !img.enabled;
				dtime = 0;
			}
		}
	}
		public void setBlinking(bool blinking){
			this.blinking = blinking;
		}
		
	}
