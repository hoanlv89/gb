using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class MessageLog
{
	private static MessageLog mInstance;
	public List<string> messagesList;
	public List<string> debugsList;
	public List<string> allDebugsList;
	public ChatLogAdapter chatLogAdapter;

	public MessageLog()
	{
		messagesList = new List<string>();
		debugsList = new List<string>();
		allDebugsList = new List<string>();
//		messagesList.Add("Annguyen: hihihi");
//		messagesList.Add("Annguyen: mot con vit xoe ra hai cai canh. No keu rang quoac quaoc quoac quoac quoac quoac. Gap ho nuoc no bi ba bi bom. luc len bo vay cai canh cho kho.");
//		messagesList.Add("Annguyen: hai ban tay cua em day em mua cho me xem");
//		messagesList.Add("Annguyen: nhanh cai nhi");
//		messagesList.Add("Annguyen: mau binh cmnr");
//		messagesList.Add("Annguyen: ngu vkl");
//		messagesList.Add("Annguyen: up bai de");
//		messagesList.Add("Annguyen: :x");
//		messagesList.Add("Annguyen: hihihi");
//		messagesList.Add("Annguyen: mot con vit xoe ra hai cai canh. No keu rang quoac quaoc quoac quoac quoac quoac. Gap ho nuoc no bi ba bi bom. luc len bo vay cai canh cho kho.");
//		messagesList.Add("Annguyen: hai ban tay cua em day em mua cho me xem");
//		messagesList.Add("Annguyen: nhanh cai nhi");
//		messagesList.Add("Annguyen: mau binh cmnr");
//		messagesList.Add("Annguyen: ngu vkl");
//		messagesList.Add("Annguyen: up bai de");
//		messagesList.Add("Annguyen: :x");
//
	}

	public static MessageLog instance {
		get {
			if (mInstance == null)
				mInstance = new MessageLog();
			return mInstance;
		}
	}

	public void putDebugLog(string message)
	{
		debugsList.Add(message);
//		if(!message.Contains("---------") && SuperScene.instance is GameScene){
//			//			allDebugsList.Add(message);
//			string url = "http://203.162.166.20:1412/dism/tracker.php/reg";
//			JSONArray parameters = new JSONArray();
//			parameters[-1] = HTTPPOSTParam.createParam("contents", message);
//			
//			Utils.ExeOneStringParam onSuccess = delegate(string result) {
//			};
//			Utils.Executor onFailed = delegate {
//			};
//			SuperScene.instance.doHTTPRequest (url, parameters, onSuccess, onFailed, showWaittingDialog:false);
//		}
		if (debugsList.Count > 80) {
			debugsList.RemoveAt(0);
		}
		if (chatLogAdapter != null && chatLogAdapter.debugOn)
			chatLogAdapter.addItem(message);
	}

	public void putMessage(string message)
	{
		messagesList.Add(message);
		if (messagesList.Count > 80) {
			messagesList.RemoveAt(0);
		}
		if (chatLogAdapter != null)
			chatLogAdapter.addItem(message);
	}
}

