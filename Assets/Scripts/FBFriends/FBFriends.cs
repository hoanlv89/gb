using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;
using System;
using Facebook.Unity;

public class FBFriends : MonoBehaviour
{
	public static bool do_not_invite_two_time_in_one_day = true;

	public GameObject PageFucntions;
	public Text currentPageView;

	public RectTransform FriendListView;
	public RectTransform PFFBFriendItem;
	public WaitingDialog wd;


	List<FBFriendItem> FBFriendList = new List<FBFriendItem> ();
	List<FBFriendItem> inviteList = new List<FBFriendItem> ();

	const int max = 40;
	int totalP;
	int currentP;

	// Use this for initialization
	void Start ()
	{
		foreach (RectTransform rectItem in FriendListView) {
			Destroy (rectItem.gameObject);
		}

		Debug.Log("getFBFriends on Start");

		// getFBFriend
		if(GameApplication.IsInitialized)
			getFBFriends ();
	}

	void getFBFriends ()
	{
		if (!FB.IsLoggedIn) {
			FB.LogInWithReadPermissions (new string[]{"public_profile", "email", "user_friends"}, AuthCallback);
		} else {
			// get invitable_friends
			wd.show (Strings.instance.common_waitingdialog_loading);
			string request_url = "/me/invitable_friends";

			JSONArray invitedFriends = DB.getInstance.getInvitedFriends();
			if(invitedFriends.Count>0){
				string excluded_ids = "";
				for(int i = 0; i<invitedFriends.Count; i++){
					excluded_ids += "'"+invitedFriends[i]["fbid"]+"'";
				}
				request_url += "?excluded_ids=[" + excluded_ids + "']";
			}

//			var wwwForm = new WWWForm();
//			wwwForm.AddBinaryData("image", screenshot, "InteractiveConsole.png");

			Debug.LogError("get friend list");
			var rparams = 
			new Dictionary<string, string>() {{"limit", "1000"}};

			FB.API (request_url, Facebook.Unity.HttpMethod.GET, delegate(IGraphResult result) {
				Debug.Log("getFBFriends result");
				if (result.Error != null) {
					Debug.Log ("Problem with invitable_friends");
				} else {
					Debug.Log ("FBResult: " + result.RawResult);
					FBFriendList.Clear ();
					foreach (RectTransform rectItem in FriendListView) {
						Destroy (rectItem.gameObject);
					}
					JSONArray data = JSONNode.Parse (result.RawResult) ["data"].AsArray;
					Debug.Log ("Friend Count: " + data.Count);
					for (int i  = 0; i<data.Count; i++) {
						string url = data [i] ["picture"] ["data"] ["url"];
						string name = data [i] ["name"];
						string id = data [i] ["id"];
						
						addFriendItemToList (new FBFriendItem (id, name, url));
					}
				}
//				chay phan trang
				doPages();
				wd.dismiss();
			}, rparams);
		}
	}

	void AuthCallback (ILoginResult result)
	{
		Debug.Log ("AuthCallback");
		if (FB.IsLoggedIn) {
			getFBFriends();
		} else {
			SuperScene.instance.showInfoDialog ("FB login fail");
			Debug.Log ("FB login fail");
		}
	}

	void addFriendItemToList (FBFriendItem item)
	{
		FBFriendList.Add (item);
		RectTransform view = GameObject.Instantiate (PFFBFriendItem);
		view.SetParent (FriendListView, false);

		Text tvname = view.FindChild ("Name").GetComponent<Text> ();
		Text tvstatus = view.FindChild ("status").GetComponent<Text> ();
		Toggle toggle = view.FindChild ("Toggle").GetComponent<Toggle> ();
		Image imgavatar = view.FindChild ("Mask").FindChild ("Avatar").GetComponent<Image> ();

		tvname.text = item.name;
		tvstatus.gameObject.SetActive (false);
		toggle.isOn = item.isSelected;
		toggle.onValueChanged.AddListener (delegate(bool isSelected) {
			item.isSelected = isSelected;
		});
		item.toggle = toggle;
		SuperScene.instance.loadImage (item.imageUrl, imgavatar);
	}

	void doPages ()
	{
		int totalFriends = 0;
		foreach (FBFriendItem friend in FBFriendList)
			if(friend.isPassFilter) totalFriends++;

		totalP = totalFriends / max + 1;
		currentP = 1;
		if(totalP > 1){
			PageFucntions.SetActive(true);
		} else {
			PageFucntions.SetActive(false);
		}

		viewPage(currentP);
	}

	void viewPage(int p){
		currentPageView.text = p + "/" + totalP;
		int start = max * (p - 1);
		int end = max * p;
		int count = 0;
		for(int i = 0; i < FBFriendList.Count; i++){
			if(FBFriendList[i].isPassFilter){
				if(count >= start && count < end){
					FBFriendList[i].setVisible(true);
				} else {
					FBFriendList[i].setVisible(false);
				}
				count ++;
			} else {
				FBFriendList[i].setVisible(false);
			}
		}
	}

	public void nextPage(){
		if(currentP < totalP)
			viewPage(++currentP);
	}

	public void previousPage(){
		if(currentP > 1)
			viewPage(--currentP);
	}

	public void filter(string _input){
		string input = Utils.ConvertToUnsign(_input).ToLower();
		if(input.Contains(" ")){
			for (int i= 0; i< FBFriendList.Count; i++) {
				FBFriendItem item = FBFriendList [i];
				if (item.name_lower_chars.Contains(input)) {
					item.isPassFilter = true;
				} else {
					item.isPassFilter = false;
				}
			}
		} else {
			for (int i= 0; i< FBFriendList.Count; i++) {
				FBFriendItem item = FBFriendList [i];
				if (item.startWith(input)) {
					item.isPassFilter = true;
				} else {
					item.isPassFilter = false;
				}
			}
		}

		doPages();
	}

	public void inviteFriend ()
	{
		inviteList.Clear ();
		for (int i = 0; i < FBFriendList.Count; i++) {
			FBFriendItem item = FBFriendList [i];
			if (item.isSelected && item.toggle.transform.parent.gameObject.activeSelf) {
				inviteList.Add (item);
				if (inviteList.Count >= 40)
					break;
			}
		}

		string[] invites = new string[inviteList.Count];
		for (int i = 0; i < inviteList.Count; i++)
			invites [i] = inviteList [i].id;
//		foreach (string item in invites) {
//			Debug.Log (item);
//		}

		JSONClass data = new JSONClass ();
		data ["from"] = "" + GameApplication.user.id;

		FB.AppRequest (
			GameApplication.gameName + " đánh bài đổi thưởng cực hấp dẫn, hot nhất hiện nay!",
			invites,
			null,
			null,
			default(int?),
			data.ToString(),
			"Cùng chơi " + GameApplication.gameName + " với mình nhé!",
			appRequestCallback
		);
	}
	
	private void appRequestCallback (IAppRequestResult result)
	{                                                                                                                              
		if (result != null) {   
			Debug.Log ("FBResult: " + result.RawResult);
			//			var responseObject = Json.Deserialize(result.Text) as Dictionary<string, object>;          
			var jobj = JSONNode.Parse (result.RawResult);
			//			object obj = 0;                                                                                                        
			if (jobj ["cancelled"].AsBool == true) {                                                                                                                      
				Debug.Log ("Request cancelled");
			} else if (jobj ["to"].AsArray.Count >= 1) {                
				Debug.Log ("Request sent");
				string request = jobj ["request"];
				JSONArray to = jobj ["to"].AsArray;

				// gui thanh cong, luu ho vao danh sach nhung nguoi khong moi lai
				for(int i = 0; i<to.Count;  i++){
					DB.getInstance.storeInvitedFriends(to[i]);
				}

				//xoa khoi list danh sach nhung ng vua moi
				for(int i = 0; i< inviteList.Count; i++){
					Transform view = inviteList[i].toggle.transform.parent;
					Destroy(view.gameObject);
				}
				//				AddPopupMessage("Request Sent", ChallengeDisplayTime);
			}                                                                                                                      
		}                                                                                                                          
	}

	public void selectAllFriends (bool selected)
	{
		for (int i = 0; i< FBFriendList.Count; i++) {
			FBFriendItem item = FBFriendList[i];
			item.isSelected = selected;
			item.toggle.isOn = selected;
		}
	}

	public void hide(){
		gameObject.SetActive(false);
		SuperScene.instance.showToast("hihi");
	}
}

class FBFriendItem
{
	public string id;
	public string name;
	public string name_lower_chars;
	public string imageUrl;
	public bool isSelected;
	public Toggle toggle;
	public bool isPassFilter;

	public FBFriendItem (string id, string name, string imageUrl)
	{
		this.id = id;
		this.name = name;
		this.imageUrl = imageUrl;
		this.isSelected = true;
		this.name_lower_chars = Utils.ConvertToUnsign(name).ToLower();
		isPassFilter = true;
//		Debug.LogError(name_lower_chars);
	}

	public void setVisible(bool visible){
		toggle.transform.parent.gameObject.SetActive(visible);
	}

	public bool startWith(string input){
		string[] strs = name_lower_chars.Split(' ');
		foreach(string item in strs){
			if(item.StartsWith(input))
				return true;
		}
		return false;
	}
}
