using UnityEngine;
using System.Collections;
using System.Collections.Generic;
//using TMPro;

public class Statistic : MonoBehaviour {

	public Transform[] rows;

	private int[] red = new int[]{1,3,5,7,9,10,14,16,18,19,21,23,25,27,28,32,34,36};
	private List<int> list;
	// Use this for initialization
	void Start () {
		list = new List<int> ();
		clearAll ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void Add(int n){
		if (list.Count == 10)
			list.RemoveAt (0);
		list.Add (n);
	}
	public void display(){
		clearAll ();
		for (int i = 0; i < list.Count; i++) {
			int ind;
			Debug.Log(System.Array.IndexOf(red,list[i]));
			if(System.Array.IndexOf(red,list[i]) > -1){
				ind = 3;
			}else if(list[i] == 0){
				ind = 2;
			}else{
				ind = 1;
			}
			Transform col = rows[i].Find("col" + ind);
			col.GetComponent<TextMesh>().text = list[i] + "";
		}
	}
	private void clearAll(){
		for (int i = 0; i < rows.Length; i++) {
			Transform row = rows[i];
			for(int j = 1 ; j <=3; j++ ){
				Transform col = row.Find("col" + j);
				col.GetComponent<TextMesh>().text = "";
			}
		}
	}
	public int getCurrent(){
		return list[list.Count - 1];
	}
}
