using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class DataSetting
{
	public string header;
	public List<SettingItem> listData;

	public DataSetting (string header, List<SettingItem> listData)
	{
		this.header = header;
		this.listData = listData;
	}

	public int getDataCount ()
	{
		return listData.Count + 1;
	}
	
	public static List<DataSetting> getList ()
	{
		List<DataSetting> settingConfig = new List<DataSetting> ();

		// ***************************** //
		List<SettingItem> listData ;
		DataSetting setting;

//		listData = new List<SettingItem> (new SettingItem[]{
//				new SettingItem (SettingItem.Type.action, GameApplication.cubeia.connectedIP).setExeAction(delegate {}),
//				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_debuglog)
//					.setExeOn (SuperScene.instance.showDebugPanel)
//					.setExeOff (SuperScene.instance.hideDebugPanel),
//				new SettingItem (SettingItem.Type.onoff, "DEBUG MODE")
//					.setExeOn (delegate {GameApplication.DEBUG_ON = true;})
//					.setExeOff (delegate {GameApplication.DEBUG_ON = false;})
//					.setStatus (GameApplication.DEBUG_ON),
//				new SettingItem (SettingItem.Type.onoff, "do not invite two times in one day")
//					.setExeOn (delegate {FBFriends.do_not_invite_two_time_in_one_day = true;})
//					.setExeOff (delegate {FBFriends.do_not_invite_two_time_in_one_day = false;})
//					.setStatus (FBFriends.do_not_invite_two_time_in_one_day),
//				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_version)
//					.setExeAction (delegate {
//							SettingControl.instance.showDetailPanel(SettingControl.detail_version);
//					})
//			});
//		setting = new DataSetting (Strings.instance.common_setting_developer, listData);
//		settingConfig.Add (setting);

		// ***************************** //
//		listData = new List<SettingItem> (new SettingItem[]{
//				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_choselanguage)
//				.setExeAction (delegate {
//					SettingControl.instance.showDetailPanel(SettingControl.detail_language);
//				}).setSprite (Strings.instance.flag)
//				});
//		setting = new DataSetting (Strings.instance.common_setting_language, listData);
//		settingConfig.Add (setting);

		// ***************************** //
		listData = new List<SettingItem> (new SettingItem[]{
				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_rememberaccount)
				.setExeOn (delegate {
					
		})
				.setExeOff (delegate {
			
		}).setStatus (true),
//				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_accountinfo)
//					.setExeAction (delegate {
//						SettingControl.instance.showDetailPanel(SettingControl.detail_player_info);
//		}),
					new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_signout)
					.setExeAction (delegate {SuperScene.instance.showConfirmSignOut();}),
					new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_exit)
					.setExeAction (delegate {SuperScene.instance.showConfirmExit();})
				});
		setting = new DataSetting (Strings.instance.common_setting_account, listData);
		settingConfig.Add (setting);

		// ***************************** //
		listData = new List<SettingItem> (new SettingItem[]{
//				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_faq)
//				.setExeAction (delegate {
//			SuperScene.instance.showInfoDialog (Strings.instance.common_comming_soon);
//		}),
				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_fanpage)
				.setExeAction (delegate {
					SuperScene.instance.gotoFanpage();
		}),
				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_game_rules)
				.setExeAction (delegate {
			STabsScene.tabsType = STabsScene.STabType.HELP;
			STabsScene.currentTabPos = STabsScene.RULES;
			SuperScene.instance.gotoStabsScene ();
		}),
				new SettingItem (SettingItem.Type.link, Strings.instance.common_setting_feedback)
				.setExeAction (delegate {
			SuperScene.instance.gotoFeedBackScreen();
		})
				});
		setting = new DataSetting (Strings.instance.common_setting_help, listData);
		settingConfig.Add (setting);

		// ***************************** //
		listData = new List<SettingItem> (new SettingItem[]{
//				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_music)
//				.setExeOn (delegate {})
//					.setExeOff (delegate {}).setStatus (true),
				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_invite)
					.setExeOn (delegate { DB.getInstance.setInviteLobby(0); })
					.setExeOff (delegate {DB.getInstance.setInviteLobby(1); }).setStatus (DB.getInstance.getInviteLobby()==0),
				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_sound)
					.setExeOn (delegate {DB.getInstance.storeSettingSoundOn(true);})
					.setExeOff (delegate {DB.getInstance.storeSettingSoundOn(false);}).setStatus (DB.getInstance.getSettingSoundOn()),
				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_vibrate)
					.setExeOn (delegate {})
					.setExeOff (delegate {}),
				new SettingItem (SettingItem.Type.onoff, Strings.instance.common_setting_notification)
					.setExeOn (delegate {})
					.setExeOff (delegate {}).setStatus (true)
				});
		setting = new DataSetting (Strings.instance.common_setting_gameoptions, listData);
		settingConfig.Add (setting);

		// ***************************** //
		return settingConfig;
	}

}

public class SettingItem
{
	public enum Type
	{
		action,
		onoff,
		link
	}

	public bool status;
	public Type type;
	public string title;
	public Utils.Executor exeAction, exe_on, exe_off;
	public Sprite sprite;

	public SettingItem (Type type, string title)
	{
		this.type = type;
		this.title = title;
	}

	public SettingItem setExeAction (Utils.Executor exe)
	{
		exeAction = exe;
		return this;
	}

	public SettingItem setExeOn (Utils.Executor exe)
	{
		exe_on = exe;
		return this;
	}

	public SettingItem setExeOff (Utils.Executor exe)
	{
		exe_off = exe;
		return this;
	}

	public SettingItem setStatus (bool stt)
	{
		status = stt;
		return this;
	}
	
	public SettingItem setSprite (Sprite sp)
	{
		sprite = sp;
		return this;
	}

}
