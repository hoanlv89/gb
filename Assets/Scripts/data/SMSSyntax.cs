using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;

public class SMSSyntax
{
	public int value;
	public int cost;
	public string syntax;
	public string address;

	public static List<SMSSyntax> viettel = new List<SMSSyntax>();
	public static List<SMSSyntax> mobifone = new List<SMSSyntax>();
	public static List<SMSSyntax> vinaphone = new List<SMSSyntax>();

	public SMSSyntax(int value, int cost, string syntax, string address){
		this.value = value;
		this.cost = cost;
		this.syntax = syntax;
		this.address = address.Replace('+',' ').Trim();
	}

	public static void Init (JSONArray viettel_sms_data, JSONArray mobi_sms_data, JSONArray vina_sms_data)
	{
		viettel.Clear();
		for(int i = 0; i< viettel_sms_data.Count; i++){
			JSONClass obj = viettel_sms_data[i].AsObject;
			viettel.Add(new SMSSyntax(obj["bcoin"].AsInt, obj["vnd"].AsInt, obj["content"], obj["add"]));
		}

		mobifone.Clear();
		for(int i = 0; i< mobi_sms_data.Count; i++){
			JSONClass obj = mobi_sms_data[i].AsObject;
			mobifone.Add(new SMSSyntax(obj["bcoin"].AsInt, obj["vnd"].AsInt, obj["content"], obj["add"]));
		}

		vinaphone.Clear();
		for(int i = 0; i< vina_sms_data.Count; i++){
			JSONClass obj = vina_sms_data[i].AsObject;
			vinaphone.Add(new SMSSyntax(obj["bcoin"].AsInt, obj["vnd"].AsInt, obj["content"], obj["add"]));
		}

	}
}

