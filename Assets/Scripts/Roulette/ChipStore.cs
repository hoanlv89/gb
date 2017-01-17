using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using com.dst.Roulette;
using System.Linq;

public class ChipStore : MonoBehaviour
{

	public Transform CellParent;
	public UnitInfo[] unitInfo;
	public GameObject chipPrefab;
	public Dictionary<string, int> dict;
	//private List<string> arrPlace = new List<string> ();
	//private List<int> arrValue = new List<int> ();
	public Dictionary<string, int> o_dict;
	//private List<string> o_arrPlace = new List<string> ();
	//private List<int> o_arrValue = new List<int> ();
	// Use this for initialization

	private List<Dictionary<string, int>> history;

	void Start ()
	{
		dict = new Dictionary<string, int> ();
		history = new List<Dictionary<string, int>> ();
	}



	public void Add (GameObject g, int value, bool pl)
	{
		int[] arr = g.GetComponent<BetHandle> ().Values;
		if (!pl) {
			foreach (int k in arr) {
				GameObject _c = CellParent.Find ("Cell_" + k).gameObject;
				Add (_c, value, true);
			}
		} else {
			string key = g.name;
			if (dict.ContainsKey (key)) {
				dict [key] = dict [key] + value;	
			} else {
				dict.Add (key, value);		
			}
			//arrPlace.Add (key);
			//arrValue.Add (value);

			history.Add(new Dictionary<string, int>(dict));

			int a = arr.Length * value;
			
			displayChipInCell (key);
			
			EventSink.onChangeBet (a);
		}

//		foreach(KeyValuePair<string,int> pair in dict){
//			Debug.LogError("xxx==> "+pair.Key+" ===> yyy====> "+CellParent.Find (pair.Key).GetComponent<BetHandle> ().Values.Length);
//			foreach(int x in CellParent.Find (pair.Key).GetComponent<BetHandle> ().Values){
//				Debug.LogError("xxx==> "+x);
//			}
//		}

	}

	private void displayChipInCell (string cell)
	{
		try {
			GameObject cellobj = CellParent.Find (cell).gameObject;
			GameObject cellbase;
			if (transform.Find (cell) == null) {
				cellbase = new GameObject (cell);
				cellbase.transform.parent = transform;
			} else {
				cellbase = transform.Find (cell).gameObject;	
			}
			
			foreach (Transform trans in cellbase.transform) {
				GameObject.Destroy (trans.gameObject);
			}
			
			int i = unitInfo.Length - 1;
			int total = dict [cell];
			int count = 1;
			while (i >= 0 && total > 0) {
				int v = unitInfo [i].value;
				if (total >= v) {
					total = total - v;
				
					GameObject c = GameObject.Instantiate (chipPrefab) as GameObject;
					c.transform.localScale *= 30f;
					c.GetComponent<Renderer>().material = unitInfo[i].mat;
					c.transform.parent = cellbase.transform;
					c.transform.rotation = Quaternion.Euler (270, 0, -90 + UnityEngine.Random.Range (0, 5));
				
					Vector3 pos = cellobj.transform.position;
					pos.y = pos.y + count * c.GetComponent<Renderer> ().bounds.size.y;
					c.transform.position = pos;
				
					count = count + 1;
				}
				if (total < v)
					i--;
			}
		} catch (UnityException e) {
			Debug.LogError (e.Message);
		}

	}

	public void DisplayAllCell ()
	{
		//Debug.Log (dict.Count);
		int tt = 0;
		foreach (KeyValuePair<string, int> pair in dict) {
			displayChipInCell (pair.Key);	
			tt += CellParent.Find (pair.Key).GetComponent<BetHandle> ().Values.Length * pair.Value;
		}

		EventSink.onChangeBet (tt);
	}

	public void Save ()
	{
		o_dict = new Dictionary<string, int> (dict);
		//o_arrPlace = new List<string> (arrPlace);
		//o_arrValue = new List<int> (arrValue);
	}

	public void Restore ()
	{
		if (o_dict == null)
			return;
		dict = new Dictionary<string, int> (o_dict);
		history.Add (dict);
		//arrPlace = new List<string> (o_arrPlace);
		//arrValue = new List<int> (o_arrValue);
		DisplayAllCell ();
	}

	public void doubleBet(){
		if (dict != null) {
			if(dict.Count > 0){
				var keys = new List<string>(dict.Keys);
				int tt = 0;
				foreach(string key in keys){
					tt+= dict[key] * CellParent.Find(key).GetComponent<BetHandle>().Values.Length;
					dict[key] = dict[key] * 2;
					displayChipInCell(key);
				}
				history.Add(new Dictionary<string, int>(dict));
				EventSink.onChangeBet(tt);
			}
		}
	}

	public void doubleRebet ()
	{
		if (o_dict == null)
			return;
		dict = new Dictionary<string, int> (o_dict);
		var keys = new List<string>(dict.Keys);
		int tt = 0;
		foreach(string key in keys){
			dict[key] *= 2;
			tt+= dict[key] * CellParent.Find(key).GetComponent<BetHandle>().Values.Length;
			displayChipInCell(key);
		}
		history.Add(new Dictionary<string, int>(dict));
		EventSink.onChangeBet(tt);
	}

	public int getTotalOld ()
	{
		int total = 0;
		foreach (var pair in o_dict) {
			Transform go = CellParent.Find (pair.Key);
			BetHandle cl = go.GetComponent<BetHandle> ();
			total = total + pair.Value * cl.Values.Length;
		}
		return total;
	}

	public int getTotal ()
	{
		int total = 0;
		foreach (var pair in dict) {
			Transform go = CellParent.Find (pair.Key);
			BetHandle cl = go.GetComponent<BetHandle> ();
			total = total + pair.Value * cl.Values.Length;
		}
		return total;
	} 

	public void Clear ()
	{
		//arrPlace.Clear ();
		//arrValue.Clear ();
		dict.Clear ();
		history.Clear ();
		foreach (Transform trans in transform) {
			GameObject.Destroy (trans.gameObject);
		}
	}

	public void undo ()
	{
		/*if (arrPlace.Count < 1)
			return;
		string cell = arrPlace [arrPlace.Count - 1];
		int val = arrValue [arrValue.Count - 1];
		arrPlace.RemoveAt (arrPlace.Count - 1);
		arrValue.RemoveAt (arrValue.Count - 1);
		Minus (cell, val);*/

		if (history.Count == 0) {
			return;
		}
		if (history.Count == 1) {
			history.Clear();
			EventSink.onClear();
			return;
		}
		int old = getTotal ();
		Dictionary<string , int> last = new Dictionary<string, int> (history.Last ());
		history.RemoveAt (history.Count - 1);
		dict = new Dictionary<string, int> (history.Last ());
		int neww = getTotal ();
		foreach (KeyValuePair<string,int> pair in last) {
			if(!dict.ContainsKey(pair.Key)){
				Destroy(transform.Find(pair.Key).gameObject);
			}else{
				displayChipInCell(pair.Key);
			}
		}

		EventSink.onChangeBet (neww - old);

	}
	

	private void Minus (string key, int value)
	{
		if (dict.ContainsKey (key)) {
			if (dict [key] < value) {
				Debug.LogError ("need value of " + key + " <= " + value);
			} else {
				dict [key] = dict [key] - value;
				if (value == 0)
					dict.Remove (key);

				int a = CellParent.Find (key).GetComponent<BetHandle> ().Values.Length * value;
				
				EventSink.onChangeBet (-a);

				displayChipInCell (key);
			}
			
		} else {
			Debug.LogError ("key dont exist!");
		}
	}

	public Dictionary<int, int> getSendString ()
	{
		Dictionary<int, int> dic = new Dictionary<int, int> ();
		
		foreach (KeyValuePair<string,int> pair in dict) {
			Transform go = CellParent.Find (pair.Key);
			
			BetHandle cl = go.GetComponent<BetHandle> ();
			foreach (int v in cl.Values) {
				if (!dic.ContainsKey (v)) {
					dic.Add (v, pair.Value);
				} else {
					dic [v] += pair.Value;
				}
			}
		}
		return dic;
	}
}
