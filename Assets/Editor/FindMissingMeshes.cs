using UnityEngine;
using UnityEditor;

public class FindMissingMeshes : EditorWindow {
	
	[MenuItem("Window/FindMissingFonts")]
	public static void ShowWindow() {
		EditorWindow.GetWindow(typeof(FindMissingMeshes));
	}
	
	public void OnGUI() {
		if (GUILayout.Button("Find Missing Fonts")) {
			FindMissing();
		}
	}
	
	private static void FindMissing() {
		Font[] amf = (Font[])Resources.FindObjectsOfTypeAll(typeof(Font));
		foreach (Font mf in amf) {
			if (!AssetDatabase.Contains(mf)) 
				Debug.Log ("Missing font on game object: "+mf.name);
		}
		
	}
}