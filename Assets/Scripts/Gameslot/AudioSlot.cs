using UnityEngine;
using System.Collections;

public class AudioSlot : MonoBehaviour {
	public AudioClip spin;
	AudioClip betup;
	AudioClip betdown;
	public AudioClip win;
	public AudioClip soundEf;
	public AudioClip runup;
	public static AudioSlot audioslot;

	public AudioSource asource;
	public AudioSource acot3;
	public AudioSource acot4;
	public AudioSource acot5;
	public AudioSource fxsource;
	public RectTransform a;
	public RectTransform b;
	public bool audioOn = true;
	public bool fxSoundOn = true;
	public AudioSlot(){

	}
	void Awake ()
	{

			//DontDestroyOnLoad(this);
		
		//Check if there is already an instance of SoundManager
		if (audioslot == null)
			//if not, set it to this.
			audioslot = this;
		//If instance already exists:
//		else if (audioslot != this)
//			//Destroy this, this enforces our singleton pattern so there can only be one instance of SoundManager.
//			Destroy (gameObject);
//		//loadAudio ();
//		//Set SoundManager to DontDestroyOnLoad so that it won't be destroyed when reloading our scene.
//		DontDestroyOnLoad (gameObject);
	}	
	void Start(){
		betup = Resources.Load ("Sounds/betup")  as AudioClip;
		betdown = Resources.Load ("Sounds/betdown")  as AudioClip;
	}
	public void playSound(AudioClip clip, AudioSource asource){
		asource.clip = clip;
		asource.Play ();
		asource.pitch = 0.9f;
	}
	public void audioSpin(){
		AudioSlot.audioslot.playSound (spin,asource);
	}
	public void audioWin(){
		AudioSlot.audioslot.playSound (win,asource);
	}
	public void audioSoundEf(){
		AudioSlot.audioslot.playSound (soundEf,fxsource);
	}
	public void audioBetup(){
		asource.clip = betup;
		asource.Play ();
	}
	public void audioBetup2(){
		AudioSlot.audioslot.playSound (betup,asource);
	}
	public void audioBetdonw(){
		asource.clip = betdown;
		asource.Play ();

	}
	public IEnumerator audioRunup(float delay, int cot){
		yield return new WaitForSeconds (delay);
		if(cot ==3){
			AudioSlot.audioslot.playSound (runup,acot3);
		}
		if(cot ==4){
			AudioSlot.audioslot.playSound (runup,acot4);
		}
		if(cot ==5){
			AudioSlot.audioslot.playSound (runup,acot5);
		}
	}
	public void turn_onoffAudio(){
		if(audioOn == true){
			asource.mute = true;
			audioOn = false;
			a.gameObject.SetActive(false);
			Debug.Log ("off");
		} else
		if(audioOn == false){
			asource.mute = false;
			audioOn = true;
			a.gameObject.SetActive(true);
			Debug.Log ("on");
		}
	}
	public void turn_onoffFxSound(){
		if(fxSoundOn == true){
			fxsource.mute = true;
			acot3.mute = true;
			acot4.mute = true;
			acot5.mute = true;
			fxSoundOn = false;
			b.gameObject.SetActive(false);
			Debug.Log ("off");
		} else
		if(fxSoundOn == false){
			fxsource.mute = false;
			fxSoundOn = true;
			b.gameObject.SetActive(true);
			Debug.Log ("on");
		}
	}
}
