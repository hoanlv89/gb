using UnityEngine;
using System.Collections;

public class CameraScript : MonoBehaviour {

	// Use this for initialization
	void Start () 
	{
		/*
		// set the desired aspect ratio (the values in this example are
		// hard-coded for 16:9, but you could make them into public
		// variables instead so you can set them at design time)
		float targetSspectMin = 4.0f / 3.0f;
		float targetSspectMax = 16.0f / 9.0f;
		
		// determine the game window's current aspect ratio
		float windowaspect = (float)Screen.width / (float)Screen.height;
		
		// current viewport height should be scaled by this amount
		float scaleheightMin = windowaspect / targetSspectMin;
		float scaleheightMax = windowaspect / targetSspectMax;
		
		// obtain camera component so we can modify its viewport
		Camera camera = GetComponent<Camera>();
		
		// if scaled height is less than current height, add letterbox
		if (scaleheightMin < 1.0f)
		{  
			Rect rect = camera.rect;
			
			rect.width = 1.0f;
			rect.height = scaleheightMin;
			rect.x = 0;
			rect.y = (1.0f - scaleheightMin) / 2.0f;
			
			camera.rect = rect;
		}
		if (scaleheightMax > 1.0f)
		{
			float scalewidth = 1.0f / scaleheightMax;
			
			Rect rect = camera.rect;
			
			rect.width = scalewidth;
			rect.height = 1.0f;
			rect.x = (1.0f - scalewidth) / 2.0f;
			rect.y = 0;
			
			camera.rect = rect;
		}*/
	}
	//public void SpinBackComplete(){
		//EventSink.onCameraBack ();
	//}
}
