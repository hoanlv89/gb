using UnityEngine;
using System.Collections;

public class SoundManager : MonoBehaviour
{
	public AudioSource efxSource;                   //Drag a reference to the audio source which will play the sound effects.
	public AudioSource musicSource;                 //Drag a reference to the audio source which will play the music.
	public AudioSource emoSource;
	public static SoundManager instance=null;     //Allows other scripts to call functions from SoundManager.             
	public float lowPitchRange = .95f;              //The lowest a sound effect will be randomly pitched.
	public float highPitchRange = 1.05f;            //The highest a sound effect will be randomly pitched.
	// Am thanh su dung
	public AudioClip haine;
	public AudioClip danhbai;
	public AudioClip dodi;
	public AudioClip thuadicung;
	public AudioClip mayhabuoi;
	public AudioClip chetmayne;
	public AudioClip silent;
	public AudioClip message;
	public AudioClip finished;
	public AudioClip nhat;
	public AudioClip bet;
	public AudioClip knock;
	public AudioClip binhlung;
	public AudioClip shuffle;
	public AudioClip tala_u;
	public AudioClip tala_mom;
	public AudioClip habai;
	public AudioClip guibai;
	public AudioClip bocbai;
	public AudioClip to;
	public AudioClip nemcachua;
	public AudioClip nemtrung;
	public AudioClip nembom;
	public AudioClip tatdep;
	public AudioClip gobua;
	public AudioClip tangbia;
	void Awake ()
	{
		//Check if there is already an instance of SoundManager
		if (instance == null)
			//if not, set it to this.
			instance = this;
		//If instance already exists:
		else if (instance != this)
			//Destroy this, this enforces our singleton pattern so there can only be one instance of SoundManager.
			Destroy (gameObject);
		//loadAudio ();
		//Set SoundManager to DontDestroyOnLoad so that it won't be destroyed when reloading our scene.
		DontDestroyOnLoad (gameObject);
	}		

	//Used to play single sound clips.
	public void PlaySingle (AudioClip clip)
	{
		if(DB.getInstance.getSettingSoundOn()){
			//Set the clip of our efxSource audio source to the clip passed in as a parameter.
			efxSource.clip = clip;
			
			//Play the clip.
			efxSource.Play ();
		}
	}		
	public void PlayEmouSound (AudioClip clip)
	{
		if (!DB.getInstance.getSettingSoundOn ())
			return;
		//Set the clip of our efxSource audio source to the clip passed in as a parameter.
		emoSource.clip = clip;
		
		//Play the clip.
		emoSource.Play ();
	}	
	//RandomizeSfx chooses randomly between various audio clips and slightly changes their pitch.
	public void RandomizeSfx (params AudioClip[] clips)
	{
		//Generate a random number between 0 and the length of our array of clips passed in.
		int randomIndex = Random.Range (0, clips.Length);
		
		//Choose a random pitch to play back our clip at between our high and low pitch ranges.
		float randomPitch = Random.Range (lowPitchRange, highPitchRange);
		
		//Set the pitch of the audio source to the randomly chosen pitch.
		efxSource.pitch = randomPitch;
		
		//Set the clip to the clip at our randomly chosen index.
		efxSource.clip = clips [randomIndex];
		
		//Play the clip.
		efxSource.Play ();
	}

//	void loadAudio (){
//		// init audio for game
//		//Debug.LogError ("Init audio");
//		haine = Resources.Load ("Sounds/haine",typeof(AudioClip))as AudioClip;
//		danhbai = Resources.Load ("Sounds/danhbai", typeof(AudioClip))as AudioClip;
//		dodi = Resources.Load ("Sounds/dodi", typeof(AudioClip))as AudioClip;
//		thuadicung = Resources.Load ("Sounds/thuadicung", typeof(AudioClip))as AudioClip;
//		mayhabuoi = Resources.Load ("Sounds/mayhabuoi", typeof(AudioClip))as AudioClip;
//		chetmayne = Resources.Load ("Sounds/chetmayne", typeof(AudioClip))as AudioClip;
//		message = Resources.Load ("Sounds/message", typeof(AudioClip))as AudioClip;
//		finished = Resources.Load ("Sounds/finished", typeof(AudioClip))as AudioClip;
//		nhat = Resources.Load ("Sounds/nhat", typeof(AudioClip))as AudioClip;
//		bet = Resources.Load ("Sounds/bet", typeof(AudioClip))as AudioClip;
//		binhlung = Resources.Load ("Sounds/binhlung",typeof(AudioClip))as AudioClip;
//		knock = Resources.Load ("Sounds/knock", typeof(AudioClip))as AudioClip;
//		shuffle = Resources.Load ("Sounds/shuffle", typeof (AudioClip))as AudioClip;
//		silent = Resources.Load ("Sounds/silent", typeof(AudioClip))as AudioClip;		
//		tala_u = Resources.Load ("Sounds/u", typeof(AudioClip))as AudioClip;		
//		tala_mom = Resources.Load ("Sounds/mom", typeof(AudioClip))as AudioClip;		
//		to = Resources.Load ("Sounds/nemxu", typeof(AudioClip))as AudioClip;	
//	}
	//play audio
	public void playHaiNeAudio ()
	{
		if (!DB.getInstance.getSettingSoundOn ())
			return;
		SoundManager.instance.RandomizeSfx (haine);
	}
	public void playListAudio ()
	{
		if (!DB.getInstance.getSettingSoundOn ())
			return;
		SoundManager.instance.RandomizeSfx (thuadicung, dodi, mayhabuoi, chetmayne, silent);
	}
	
	public void playMessage ()
	{	
		SoundManager.instance.PlaySingle (message);
	}
	
	public void playFinished ()
	{
		SoundManager.instance.PlaySingle (finished);
	}
	
	public void playDanhbai ()
	{
		SoundManager.instance.PlaySingle (danhbai);
	}
	
	public void playNhatAudio ()
	{
		SoundManager.instance.PlaySingle (nhat);
	}
	
	public void playBetAudio ()
	{
		SoundManager.instance.PlaySingle (bet);
	}
	
	public void playBinhlung(){
		SoundManager.instance.PlaySingle (binhlung);
	}
	
	public void playKnock(){
		SoundManager.instance.PlaySingle (knock);
	}
	
	public void playShuffle(){
		SoundManager.instance.PlaySingle (shuffle);
	}
	public void playButtonClicked(){
		SoundManager.instance.PlaySingle (danhbai);
	}
	public void playTala_u(){
		SoundManager.instance.PlaySingle (tala_u);
	}
	public void playTala_mom(){
		SoundManager.instance.PlaySingle (tala_mom);
	}
	public void play_to(){
		SoundManager.instance.PlaySingle (to);
	}

	public void play_boc(){
		SoundManager.instance.PlaySingle (bocbai);
	}

	public void play_ha(){
		SoundManager.instance.PlaySingle (habai);
	}

	public void play_gui(){
		SoundManager.instance.PlaySingle (guibai);
	}

	public void playNemCaChua ()
	{
		SoundManager.instance.PlayEmouSound (nemcachua);
	}
	public void playNemTrung ()
	{
		SoundManager.instance.PlayEmouSound (nemtrung);
	}
	public void playNemBom ()
	{
		SoundManager.instance.PlayEmouSound (nembom);
	}
	public void playTatDep ()
	{
		SoundManager.instance.PlayEmouSound (tatdep);
	}
	public void playGoBua ()
	{
		SoundManager.instance.PlayEmouSound (gobua);
	}
	public void playTangBia ()
	{
		SoundManager.instance.PlayEmouSound (tangbia);
	}
}
