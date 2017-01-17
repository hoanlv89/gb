using UnityEngine;
using System.Collections;

public class abc : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartCoroutine(Example());
	}
	
	// Update is called once per frame

		IEnumerator Example() {
		//float time = Time.deltaTime;
		while (true) {
			Debug.LogError (Time.time);
			yield return new WaitForSeconds (5);
			Debug.LogError (Time.time);
			yield return new WaitForSeconds (5);
		}
		}

}
