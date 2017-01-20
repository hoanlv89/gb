using UnityEngine;
using System.Collections;
using SimpleJSON;
//using UnityEditor;

public class HTTPPOSTParam
{
	public const string PARAM = "param";
	public const string VALUE = "value";

	public static JSONClass createParam(string param, string value){
		var obj = new JSONClass();
		obj[PARAM] = param;
		obj[VALUE] = value;
		return obj;
	}

	public static JSONClass createParam(string param, int value){
		var obj = new JSONClass();
		obj[PARAM] = param;
		obj[VALUE].AsInt = value;
		return obj;
	}

	public static JSONClass createParam(string param, bool value){
		var obj = new JSONClass();
		obj[PARAM] = param;
		obj[VALUE].AsBool = value;
		return obj;
	}

	public static JSONArray defaultParameters{
		get{
			string os = "undefined"; // SystemInfo.operatingSystem
			#if UNITY_IOS
				os = "unity_iOS";
			#endif
						
			#if UNITY_ANDROID
				os = "unity_android";
			#endif

			JSONArray parameters = new JSONArray();
			parameters[-1] = HTTPPOSTParam.createParam("bundleID", Application.bundleIdentifier);
			parameters[-1] = HTTPPOSTParam.createParam("version", GameApplication.versionname);
			parameters[-1] = HTTPPOSTParam.createParam("operatorID", GameApplication.operatorID + "");
			parameters[-1] = HTTPPOSTParam.createParam("publisher", GameApplication.referrer);
			parameters[-1] = HTTPPOSTParam.createParam("os", os);
			parameters[-1] = HTTPPOSTParam.createParam("encode", GameApplication.ENCODE);

			return parameters;
		}
	}


}

