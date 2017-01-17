using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;

public class Hints
{
	public static List<string> hints;
	public static int index;

	public static void Init (JSONArray jarr)
	{
		hints = new List<string> ();
		for (int i = 0; i<jarr.Count; i++) {
			hints.Add (jarr [i]);
		}

		index = Random.Range (0, jarr.Count - 1);
	}

	public static string getNextHint ()
	{
		index = (++index) % hints.Count;
		string hint = hints [index];
		return Strings.instance.getLocalString (hint);
	}

}

