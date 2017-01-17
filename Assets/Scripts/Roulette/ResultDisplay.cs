using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ResultDisplay : MonoBehaviour {

	// Use this for initialization
	public Transform wheel;
	public Image Number;
	public Sprite[] sprs;

	private bool _show = false;
	private int[] red = new int[]{1,3,5,7,9,10,14,16,18,19,21,23,25,27,28,32,34,36};
	void Start () {
		RectTransform thisRect = this.transform as RectTransform;
		thisRect.pivot = new Vector2 (1.5f, 0.5f);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void show (int i, int ind)
	{
		_show = true;
		Sprite sp;
		Number.transform.Find ("Text").GetComponent<Text>().text = i+"";
		if(System.Array.IndexOf(red,i) > -1){
			sp = sprs[0];
		}else if(i == 0){
			sp = sprs[1];
		}else{
			sp = sprs[2];
		}
		Number.sprite = sp;
		anim ();

		Quaternion target = Quaternion.Euler(0, 0, -(ind + 11f) * 360f / 37f);
		wheel.localRotation = target;
	}

	public void hide ()
	{
		_show = false;
		anim ();
	}
	private void anim(){
		iTween.ValueTo (gameObject, iTween.Hash ("from", 0, "to", 1, "time", 0.8f, "onUpdate", "animControl", "easeType", iTween.EaseType.linear));
	}
	private void animControl(float val){

		float anchorX = (_show) ? 0.5f : 1.5f;
		RectTransform thisRect = this.transform as RectTransform;
		float old = thisRect.pivot.x;
		thisRect.pivot = new Vector2 (old + (anchorX - old) * val, 0.5f);

		
	}
}
