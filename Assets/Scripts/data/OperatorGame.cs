using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class OperatorGame
{
	public static List<int> games = new List<int>();
	public static List<int> disableGames = new List<int>();
	public static string disablesgamesbyuser;

	public static void setDisableGames(string input){
		Debug.LogWarning ("setDisableGames: "+ input);
		if(string.IsNullOrEmpty(input))
			return;
		string[] listGame = input.Split(';');
		foreach(string item in listGame){
			int gameid = 0;
			int.TryParse(item, out gameid);
			if(disableGames.Contains(gameid) == false)
				disableGames.Add(gameid);
		}
	}

	public static void setGames(JSONArray jarr){
		games.Clear();
		for(int i = 0; i<jarr.Count; i++){
			games.Add(jarr[i].AsInt);
		}
		if (!games.Contains (GameType.ROULETTE)) {
			Debug.LogWarning ("games.Add (GameType.ROULETTE): ");
			games.Add (GameType.ROULETTE);
		}
	}
}

