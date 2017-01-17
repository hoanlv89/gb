using UnityEngine;
using System.Collections;
using com.dst.Roulette;

public class AnimatorEvent : MonoBehaviour {

	public  void CamDownComplete(){
		EventSink.onCamDown ();
	}
	public void CamForwardComplete(){
		EventSink.onCamForward ();
	}
	public void CamBackComplete(){
		EventSink.onCamBack ();
	}
}
