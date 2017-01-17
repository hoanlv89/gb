using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Threading;

public class Blinkborder : MonoBehaviour {
	Image img;
	float dtime;
	float maxTime = 0.5f;
	// Use this for initialization
	void Start () {
		img = GetComponent<Image> ();
	}
	
	// Update is called once per frame
	void Update () {
		dtime += Time.deltaTime;
			if (dtime > maxTime) {
				img.enabled  = !img.enabled;
				dtime = 0;
			}
	}
}
