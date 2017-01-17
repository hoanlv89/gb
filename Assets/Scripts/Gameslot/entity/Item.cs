using UnityEngine;
using System.Collections;

public class Item {
	public int ID;
	public int lever;
	public RectTransform rectTransform;

	public Item()
	{
	}

	public Item(int id, int lever){
		this.ID = id;
		this.lever = lever;
	}


	
}
