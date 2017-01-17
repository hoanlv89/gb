using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TienLenFunctions : MonoBehaviour {

	public Button function1, function2, function3;

	// Use this for initialization
	void Start () {
		function1.image.sprite = function1.GetComponent<Blinking2>().s1;
		function2.image.sprite = function2.GetComponent<Blinking2>().s1;
		function3.image.sprite = function3.GetComponent<Blinking2>().s1;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void showTienLenFuntionsOnTurn(int CheckCallOrAllIn)
	{
		gameObject.SetActive(true);
		function1.gameObject.SetActive(true);
//		function2.gameObject.SetActive(true);
		function3.gameObject.SetActive(true);
	
		Game game = GameApplication.game;
		bool hasCardsSelected = false;
		foreach(Card card in game.thisPlayer.cards){
			hasCardsSelected |= card.isSelected;
			if(hasCardsSelected)
				break;
		}
		// show nut bo chon
		function2.gameObject.SetActive(hasCardsSelected);
	}
	
	public void hideTienLenOnTurnFuntions(bool an_bo_chon = false)
	{
//		gameObject.SetActive(false);
		if(an_bo_chon)
			function2.gameObject.SetActive(false);

		function1.gameObject.SetActive(false);
		function3.gameObject.SetActive(false);
	}
}
