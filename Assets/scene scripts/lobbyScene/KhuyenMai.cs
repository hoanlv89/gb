using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class KhuyenMai : MonoBehaviour {
	public GameObject goText, goMask;

	// Use this for initialization
	void Start () {
		Debug.Log ("Check show Khuyen mai: " + PaymentManager.discount);
		GetComponent<Image>().enabled = PaymentManager.discount;
		goText.SetActive(PaymentManager.discount);
		goMask.SetActive(PaymentManager.discount);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
