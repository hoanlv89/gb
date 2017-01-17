using UnityEngine;
using System.Collections;

public class ItemResult 
{
	public int ag;
	public string name;
	public System.Text.StringBuilder note = new System.Text.StringBuilder();
	public int max;

	public ItemResult(string name,int ag,System.Text.StringBuilder note,int max){
		this.name = name;
		this.ag = ag;
		this.note = note;
		this.max = max;
	}

	public ItemResult(){

	}

}

