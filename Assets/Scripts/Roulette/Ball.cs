using UnityEngine;
using System.Collections;
using com.dst.Roulette;
using System.Collections.Generic;


public class Ball : MonoBehaviour {

	public Wheel wheel;

	private List<int> numbers = new List<int>(new int[]{26,3,35,12,28,7,29,18,22,9,31,14,20,1,33,16,24,5,10,23,8,30,11,36,13,27,6,34,17,25,2,21,4,19,15,32,0});

	[System.Serializable]
	public struct soundDict{
		public string name;
		public AudioClip audio;
	}

	public soundDict[] dicts;

	// Use this for initialization

	void Start () {

	}


	void Update(){

		if (!Manage.enableSound) {
			if(GetComponent<AudioSource>().isPlaying){
				GetComponent<AudioSource>().Stop();
			}
		}
	}

	public void spin(int result){
		Debug.LogError("spin chay vao day a");
		int npath = UnityEngine.Random.Range (1, StaticPath.count);
		//npath = 6;
		com.dst.Roulette.Path path = StaticPath.getPath (npath);
		Vector3[] p = path.points;
		float time = path.timeSpin;
		string[] s = path.sounds;
		int returnNum = path.returnNumber;
		float wSpeed = path.WheelSpeed;




		transform.parent = null;
		if (Manage.enableSound) {
			GetComponent<AudioSource>().volume = 100;
			GetComponent<AudioSource>().clip = findSound("round");
			GetComponent<AudioSource>().Play ();
			GetComponent<AudioSource>().loop = true;
		}

		iTween.MoveTo (gameObject, iTween.Hash ("path", p, "time", time, "delay", 0, "easetype", iTween.EaseType.linear, "oncomplete", "complete"));
		char[] delimiters = new char[] { ':' };
		for (int i = 0; i < s.Length; i++) {

			string[] parts = s[i].Split(delimiters, System.StringSplitOptions.RemoveEmptyEntries);

			StartCoroutine(PlaySound(float.Parse(parts[2]), parts[0], float.Parse(parts[1])));
		}
		int ret = returnNum;
		int ind = numbers.IndexOf (result);
		int beg = ind - ret;
		if (beg < 0)
			beg = numbers.Count + beg;
		
		
		
		wheel.Rotate = true;
		wheel.transform.eulerAngles = new Vector3(-90, beg * 360.0f / 37, 0);
		wheel.Speed = wSpeed;
	}
	private IEnumerator PlaySound(float t, string n, float v){
		if (!Manage.enableSound)
			yield break;
		yield return new WaitForSeconds(t);
		if (GetComponent<AudioSource>().isPlaying)
			GetComponent<AudioSource>().Stop ();
		if (GetComponent<AudioSource>().loop)
			GetComponent<AudioSource>().loop = false;
		AudioClip a = findSound (n);
		if (a != null) {
			GetComponent<AudioSource>().volume = v;
			GetComponent<AudioSource>().clip = a;
			
			GetComponent<AudioSource>().Play ();		
		}
		
	}
	private void complete(){
		transform.parent = wheel.transform;
		EventSink.onCamForward ();
		
	}

	AudioClip findSound(string sname){
		for (int i = 0; i < dicts.Length; i++) {
			if(dicts[i].name.Equals(sname)){
				return dicts[i].audio;
			}
		}
		return null;
	}
}
