using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {

	public static void Load(string name) {
		GameObject go = new GameObject("LevelManager");
		LevelManager instance = go.AddComponent<LevelManager>();
		instance.StartCoroutine(instance.InnerLoad(name));
	}
	
	IEnumerator InnerLoad(string name) {
		//load transition scene
		Object.DontDestroyOnLoad(this.gameObject);
		Application.LoadLevel("TransitionScene");
		
		//wait one frame (for rendering, etc.)
		yield return null;
		
		//load the target scene
//		TransitionScene.async = Application.LoadLevelAsync(name);
//		yield return TransitionScene.async;

		Application.LoadLevel(name);
		Destroy(this.gameObject);
	}
}
