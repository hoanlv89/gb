using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TalaCardHighLighting : MonoBehaviour {

	float dy = 0f;
	const float DY = 8f;

	RectTransform rect;

	// Use this for initialization
	void Start () {
		rect = (RectTransform)transform.FindChild("Image").transform;
	}
	
	// Update is called once per frame
	void Update () {
		float timeSinceLevelLoad = Time.timeSinceLevelLoad;
		int xtime = (int)timeSinceLevelLoad;
		float dtime = timeSinceLevelLoad - xtime;
		dtime *= 2*Mathf.PI;

		Vector2 cv = rect.anchoredPosition;
		rect.anchoredPosition = new Vector2(cv.x, DY * Mathf.Sin(dtime));
	}
}
