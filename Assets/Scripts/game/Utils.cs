using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System;
using System.Text.RegularExpressions;

public class Utils
{
	public delegate void Executor();
	public delegate void ExeOneStringParam(string result);
	public delegate void ExeOneSpriteParam(Sprite sprite);

	public static IEnumerator cr_runDelayed(float delayingTime, Utils.Executor exe)
	{
		yield return new WaitForSeconds(delayingTime);
		exe();
	}

	public static IEnumerator cr_runDelayed(float delayingTime, Utils.Executor exe, float playingTime, Utils.Executor afterExe)
	{
		yield return new WaitForSeconds(delayingTime);
		exe();
		yield return new WaitForSeconds(playingTime);
		afterExe();
	}

	public static IEnumerator cr_runDelayed(float[] time, Utils.Executor[] exe)
	{
		/*yield return new WaitForSeconds (delayingTime);
				exe ();
				yield return new WaitForSeconds (playingTime);
				afterExe ();*/
		int k = Mathf.Min(time.Length, exe.Length);
		for (int i=0; i<k; i++) {
			yield return new WaitForSeconds(time [i]);
			exe [i]();
		}
	}

	public static string buildAvatar(string uid, int av)
	{
		if (av >= 1) {
			return buildAvatar (av);
		} else if(uid.Contains("fb.") && uid.Length > 3){
			return buildFBAvatar(uid.Replace("fb.",""));
		} else if(uid.Length <= 3 && IsDigitsOnly(uid)){
			int num = 1;
			int.TryParse (uid, out num);
			return buildAvatar (num);
		} else {
			return "http://s120.avatar.zdn.vn/avatar_files/5/3/f/9/" + uid + "_160_2.jpg";
		}
	}
	
	public static string buildAvatar(int avaNO)
	{
		if(GameApplication.avatar_build != null)
			return GameApplication.avatar_build.Replace ("%avaNO%", avaNO +"");

		return "";
//
//		if (GameApplication.gameApp == GameApplication.GameApp.LangQuat) {
//			avaNO = avaNO % 36 + 1;
//			return "http://services.athena.vn/mservices/avatars/" + avaNO + ".png";
//		} else if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
//			avaNO = avaNO % 36 + 1;
////			return "http://mobile.dautruong.info/avatars/" + avaNO + ".png"; // %30 + 1
//			return "http://services.athena.vn/mservices/avatars/" + avaNO + ".png";
//		} else if (GameApplication.gameApp == GameApplication.GameApp.G3C||GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
//			avaNO = avaNO % 36 + 1;
//			return "http://services.athena.vn/mservices/avatars/" + avaNO + ".png";
//		} else if (GameApplication.gameApp == GameApplication.GameApp.GTL) {
//			avaNO = avaNO % 36 + 1;
//			return "http://services.athena.vn/mservices/avatars/" + avaNO + ".png";
//		}
//		Debug.LogError ("NULL");
//		return null;
	}

	static bool IsDigitsOnly(string str)
	{
		foreach (char c in str)
		{
			if (c < '0' || c > '9')
				return false;
		}

		return true;
	}

	public static string buildFBAvatar(string fbID)
	{
		return "https://graph.facebook.com/v2.4/" + fbID + "/picture?width=200&height=200&redirect=true";
	}

	private static string formatPositiveNumber(int pag)
	{
		int d = pag % 1000;
		int r = pag / 1000;
		string ds = "";
		if (d < 10) {
			ds = "00" + d;
		} else if (d < 100) {
			ds = "0" + d;
		} else {
			ds = "" + d;
		}
		
		if (r >= 1) {
			return formatPositiveNumber(r) + "," + ds;
		} else {
			return "" + d;
		}
	}
	
	public static string formatNumber(int ag)
	{
		if (ag >= 0) {
			return formatPositiveNumber(ag);
		} else {
			return "-" + formatPositiveNumber(-ag);
		}
	}

	public static string formatCurrency(int value, bool withDolarSign = true)
	{
		string output = "";
		if(withDolarSign)
			output = "$";
		float outValue;
		if (value < 0) {
			return "-" + formatCurrency(-value, withDolarSign);
		} else if (value == 0) {
			output += "0";
		} else if (value < 1000) {
			output += "" + value;
		} else if (value < 1000000) {
			outValue = value / 1000f;
			output += "" + outValue.ToString("g4") + "K";
		} else if (value < 2000000000) {
			outValue = value / 1000000f;
			output += "" + outValue.ToString("g4") + "M";
		} else {
			output += "....";
		}
		return output;
	}

	public static string formatNumberWithSign(int ag)
	{
		if (ag > 0) {
			return "+" + formatPositiveNumber (ag);
		} else if (ag < 0) {
			return "-" + formatPositiveNumber (-ag);
		} else {
			return "0";
		}
	}

	public static byte[] getBytes(string str)
	{
		byte[] arr = System.Text.Encoding.Default.GetBytes(str);
		using (MemoryStream output = new MemoryStream()) {
			output.Write(arr, 0, arr.Length);
			output.Flush();
			arr = output.ToArray();
		}
		return arr;
	}

	public static byte[] getBytesUTF8(string str)
	{
		byte[] arr = System.Text.Encoding.UTF8.GetBytes(str);
		using (MemoryStream output = new MemoryStream()) {
			output.Write(arr, 0, arr.Length);
			output.Flush();
			arr = output.ToArray();
		}
		return arr;
	}

	public static string base64_decode(string str){
		var bytes = Convert.FromBase64String(str);
		var text = System.Text.Encoding.UTF8.GetString(bytes, 0, bytes.Length);
		return text;
	}

	public static byte[] ObjectToByteArray(object obj)
	{
		if (obj == null)
			return null;
		BinaryFormatter bf = new BinaryFormatter();
		using (MemoryStream ms = new MemoryStream()) {
			bf.Serialize(ms, obj);
			return ms.ToArray();
		}
	}

	public static byte[] IntToByteArray(int value)
	{
		byte[] intBytes = BitConverter.GetBytes(value);
		if (BitConverter.IsLittleEndian)
			Array.Reverse(intBytes);
		return intBytes;
	}

	public static bool ContainsAllItems<T>(List<T> a, List<T> b)
	{
		foreach (T item in b) {
			if (a.Contains(item) == false)
				return false;
		}
		
		return true;
	}

	public static string autoLineBreakingString(string input)
	{
		if(string.IsNullOrEmpty(input))
			return input;
		input = input.Replace(",", ", ");
		input = input.Replace(".", ". ");
		input = input.Replace("!", "! ");
		input = input.Trim();
//		string[] strs = input.Split [' '];

		if (input.Length >= 24) {
			int theMidSpace = input.IndexOf(' ', 20);
			if(theMidSpace > 0){
				StringBuilder builder = new StringBuilder(input);
				builder [theMidSpace] = '\n';
				input = builder.ToString();
			}
		}
		return input;
	}

	public static string ConvertToUnsign(string str)
	{
		Regex regex = new Regex("\\p{IsCombiningDiacriticalMarks}+");
		string temp = str.Normalize(NormalizationForm.FormD);
		return regex.Replace(temp, String.Empty)
			.Replace('\u0111', 'd')
			.Replace('\u0110', 'D')
			.Replace('ô', 'o')
			.Replace('ơ', 'o')
			.Replace('ọ', 'o')
			.Replace('â', 'a')
			.Replace('ạ', 'a')
			.Replace('ê', 'e')
			.Replace('ẹ', 'e')
			.Replace('ă', 'a')
			.Replace('ư', 'u')
			.Replace('ụ', 'u');
	}

	public static String getlocalstring(String input) {
		String stag = getStartTag();
		String etag = getEndTag();
		
		int sindex = input.IndexOf(stag);
		int eindex = input.IndexOf(etag, sindex)-etag.Length+1;
		if (sindex >= 0 && eindex > 0) {
			return input.Substring(sindex + stag.Length, eindex);
		} else {
			stag = getStartTag(Strings.LANGUAGE_EN);
			etag = getEndTag(Strings.LANGUAGE_EN);
			sindex = input.IndexOf(stag);
			eindex = input.IndexOf(etag, sindex)-etag.Length+1;
			if (sindex >= 0 && eindex > 0)
				return input.Substring(sindex + stag.Length, eindex);
			else
				return input;
		}
	}
	
	private static String getEndTag() {
		return getEndTag(Strings.currentLanguage);
	}
	
	private static String getEndTag(String lan) {
		if (lan.Equals(Strings.LANGUAGE_EN))
			return "</en>";
		if (lan.Equals(Strings.LANGUAGE_VI))
			return "</vi>";
		return "</vi>";
	}
	
	private static String getStartTag() {
		return getStartTag(Strings.currentLanguage);
	}
	
	private static String getStartTag(String lan) {
		if (lan.Equals(Strings.LANGUAGE_EN))
			return "<en>";
		if (lan.Equals(Strings.LANGUAGE_VI))
			return "<vi>";
		return "<vi>";
	}
}

