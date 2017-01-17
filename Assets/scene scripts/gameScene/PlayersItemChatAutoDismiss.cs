using UnityEngine;
using System.Collections;

public class PlayersItemChatAutoDismiss : MonoBehaviour
{
	float showedTime;

	// Use this for initialization
	void Start () {
		showedTime = 0f;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		showedTime += Time.fixedDeltaTime;
		if(showedTime >= 5f)
		{
			GameObject.Destroy(gameObject);
		}
	}
}
