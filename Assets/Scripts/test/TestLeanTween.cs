using UnityEngine;
using System.Collections;

public class TestLeanTween : MonoBehaviour
{

	RectTransform rect;
	LTRect ltr;

	// Use this for initialization
	void Start ()
	{
		rect = (RectTransform)transform;
	}

	public void move ()
	{
		Vector3 target;
		if (transform.localPosition.x < 0)
			target = new Vector3 (200, 0, 0);
		else
			target = new Vector3 (-200, 0, 0);
		LeanTween.moveLocal (gameObject, target, 2f);
	}
}
