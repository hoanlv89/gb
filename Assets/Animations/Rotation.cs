using UnityEngine;
using System.Collections;

public class Rotation : MonoBehaviour
{

	RectTransform rect;
	float totalTime;

	// Use this for initialization
	void Start()
	{
		totalTime = 0f;
		rect = GetComponent<RectTransform>();
	}
	
	// Update is called once per frame
	void Update()
	{
		totalTime += Time.deltaTime;
		if (totalTime >= 0.18f) {
			totalTime = 0;
			rect.Rotate(0f, 0f, -30f);
		}
	}
}
