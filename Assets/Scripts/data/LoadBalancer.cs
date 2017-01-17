using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using System;

public class LoadBalancer {
	public static LoadBalancer instance;
	public static bool inVIPChannel;

	public static IPConfig currentVipIP = null;
	public static IPConfig currentPublicIP = null;

	public static int previousHostID = -1;

	public enum Channel {
		VIP, PUBLIC
	}
	
	string default_IP;
	string not_vip, not_public;
	JSONArray gameips;
	List<GameConfig> gameConfigs;
	
	public LoadBalancer(JSONClass balancerjson) {
		default_IP = CubeiaClient.HOST;

		not_vip = balancerjson["Ne"];
		not_public = balancerjson["Tm"];
		JSONArray lip = JSONClass.Parse(balancerjson["Lip"]).AsArray;
		gameConfigs = new List<GameConfig>();
		for (int i = 0; i < lip.Count; i++) {
			JSONClass jgameConfig = lip[i].AsObject;
			GameConfig gameConfig = new GameConfig(jgameConfig);
			gameConfigs.Add(gameConfig);
		}

	}
	
	public bool checkConditionLogin(Channel channel, int gameID, int currentBalance) {
		for (int i = 0; i < gameips.Count; i++) {
			JSONClass obj = gameips[i].AsObject;
			if (obj["gameid"].AsInt == gameID) {
				if (channel == Channel.VIP) {
					int vipcondition = obj["condition_vip"].AsInt;
					if (currentBalance < vipcondition) {
//							SActivity.getCurrentScreen().showInfoDialog(
//								not_vip.replace("%value%", UtilGame.formatAG(vipcondition) + " " + LQ.getCoin()));
						return false;
					}
					CubeiaClient.HOST = obj["vip"];
					return true;
				} else {
					int vipcondition = obj["condition_public"].AsInt;
					if (currentBalance > vipcondition) {
//							SActivity.getCurrentScreen()
//								.showInfoDialog(
//									not_public.replace("%value%",
//								                   UtilGame.formatAG(vipcondition) + " " + LQ.getCoin()));
						return false;
					}
					CubeiaClient.HOST = obj["public"];
					return true;
				}
			}
		}
		
		return true;
	}
	
	public List<IPConfig> getAvailableChannel(int gameID) {
		currentVipIP = null;
		currentPublicIP = null;
		List<IPConfig> myList = new List<IPConfig>();
		if (gameConfigs == null)
			return myList;
		for (int i = 0; i < gameConfigs.Count; i++) {
			GameConfig gc = gameConfigs[i];
			int configSize = gc.ipsConfig.Count;
			if (gc.gameid == gameID && configSize > 1) {
				for (int j = 0; j < configSize; j++) {
					IPConfig item = gc.ipsConfig[j];
					if (item.enable) {
						myList.Add(item);
					}
					if (item.name.Equals("vip", StringComparison.InvariantCultureIgnoreCase)) {
//						Log.e("hihi", "hihi set VIP"];
						currentVipIP = item;
					} else {
//						Log.e("hihi", "hihi set NORMAL"];
						currentPublicIP = item;
					}
				}
				return myList;
			}
			if (gc.gameid == gameID && configSize == 1) {
				myList.Add(gc.ipsConfig[0]);
				return myList;
			}
		}
		return myList;
	}
	
	public bool checkConditionLogin(IPConfig ipconfig, int balance) {
		if (balance < ipconfig.minGold) {
			SDialog dialog =  SuperScene.instance.showDialog(DialogInfo.OKCancelDialog);
			dialog.content.text = not_vip.Replace("%value%", Utils.formatNumber(ipconfig.minGold));
			dialog.negative.onClick.AddListener(delegate {
				dialog.dismiss();
			});
			dialog.positiveText.text = "Nạp Gold";
			dialog.positive.onClick.AddListener(delegate {
				dialog.dismiss();
				SuperScene.instance.gotoPaymentScreen();
			});
			
			return false;
		}
		
		if (balance > ipconfig.maxGold && ipconfig.maxGold > 0) {
			SuperScene.instance.showInfoDialog(
				not_public.Replace("%value%", Utils.formatNumber(ipconfig.maxGold) + " " + GameApplication.COIN));
			return false;
		}
		
		LoadBalancer.inVIPChannel = ipconfig.isVIP;
		GameApplication.user.loginInfo.host = ipconfig.ip;
		return true;
	}
}

public class IPConfig {
	public int minGold, maxGold;
	public string ip;
	public bool enable;
	public string name;
	public bool isVIP;
	
	public IPConfig(string sminGold, string smaxGold, string ip, string enable, string name) {
		this.minGold = 0;
		int.TryParse(sminGold, out this.minGold);
		this.maxGold = 0;
		int.TryParse(smaxGold, out this.maxGold);
		this.ip = ip;
		this.enable = enable.Equals("1");
		this.name = Strings.instance.getLocalString(name);
		this.isVIP = this.name.Equals("vip", StringComparison.InvariantCultureIgnoreCase);
	}
}

class GameConfig {
	public int gameid;
	public List<IPConfig> ipsConfig;
	
	public GameConfig(JSONClass jgameConfig) {
		gameid = jgameConfig["Gid"].AsInt;
		if (GameApplication.DEBUG_ON)
			Debug.Log(jgameConfig);
		string strCmin = jgameConfig["Cmin"];
		string strCmax = jgameConfig["Cmax"];
		string strIp = jgameConfig["Ip"];
		string strE = jgameConfig["E"];
		string strN = jgameConfig["N"];
		if(!strCmin.Contains(";"))
			strCmin += ";";
		string[] Cmins = strCmin.Split(';');
		if(!strCmax.Contains(";"))
			strCmax += ";";
		string[] Cmaxs = strCmax.Split(';');
		if(!strIp.Contains(";"))
			strIp += ";";
		string[] Ips = strIp.Split(';');
		if(!strE.Contains(";"))
			strE += ";";
		string[] Es = strE.Split(';');
		if(!strN.Contains(";"))
			strN += ";";
		string[] Ns = strN.Split(';');
		ipsConfig = new List<IPConfig>();
		for (int i = 0; i < Cmins.Length; i++) {
			ipsConfig.Add(new IPConfig(Cmins[i], Cmaxs[i], Ips[i], Es[i], Ns[i]));
			//				ipsConfig.Add(new IPConfig(Cmins[i], Cmaxs[i], Ips[i], "1", Ns[i]));
		}
	}
}

