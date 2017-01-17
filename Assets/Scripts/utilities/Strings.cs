using UnityEngine;
using System.Collections;

public class Strings
{
	public static Strings strings_en = new Strings();
	public static Strings_VI strings_vi = new Strings_VI();
	public static Strings_TH strings_th = new Strings_TH();

	public const string LANGUAGE_VI = "VI";
	public const string LANGUAGE_EN = "EN";
	public const string LANGUAGE_TH = "TH";

	private static string _currentLanguage ;


	public static string currentLanguage
	{
		get {
			if(_currentLanguage == null)
				_currentLanguage = DB.getInstance.getLanguageInString();
			return _currentLanguage;
		}
		set {
			_currentLanguage = value;
			DB.getInstance.storeLanguage(value);
		}
	}

	public static Strings instance {
		get {
			// TODO: cho chac
			return strings_vi;

			if(GameApplication.gameApp == GameApplication.GameApp.GTL){
				return strings_th;
			}
			if (currentLanguage == LANGUAGE_VI) {
				return strings_vi;
			} else if (currentLanguage == LANGUAGE_EN) {
				return strings_en;
			} else if (currentLanguage == LANGUAGE_TH) {
				return strings_th;
			} else {
				return strings_th;
			}
		}
	}

	public string common_language_vn = "Tiếng Việt (Vietnamese)";
	public string common_language_en_AU = "English (en-AU)";
	public string common_language_th = "ไทย (Thai)";

	public virtual string getLocalString(string input){
		string startTag = "<en>";
		string endTag = "</en>";

		int startIndex = input.IndexOf(startTag) + 4;
		int endIndex = input.IndexOf(endTag);

		if(endIndex < 0 || startIndex < 4)
			return input;

		return input.Substring(startIndex, endIndex-startIndex);
	}

	public virtual Sprite flag { get { return Resources.Load<Sprite>("Textures/flags/USA-Flag"); } }
	public virtual string common_change_language { get { return "You selected English"; } }
	public virtual string common_confirm_quit_app { get { return "Are you sure you want to quit game?"; } }
	public virtual string common_confirm_quit_app_ok { get { return "Exit Game"; } }
	public virtual string common_confirm_quit_app_cancel { get { return "Cancel"; } }
	public virtual string common_confirm_signout_msg { get { return "Are you sure you want to sign out of account " + GameApplication.user.name + "?"; } }
	public virtual string common_confirm_payment_sms { get { return "Are you sure you want to buy %value% for %cost% ?"; } }

	public virtual string common_login_error_1 { get { return "Bạn đang ở trong bàn chơi!"; } }
	public virtual string common_login_error_2 { get { return "Bạn hãy nhập đầy đủ thông tin đăng nhập."; } }
	public virtual string common_login_error_3 { get { return "Mật khẩu hoặc tài khoản không đúng."; } }
	public virtual string common_login_error_4 { get { return "Bạn bị khóa tài khoản vì vi phạm nội quy game."; } }
	public virtual string common_login_error_5 { get { return "Gặp sự cố về đường truyền."; } }
	public virtual string common_login_error_6 { get { return "Lỗi đăng nhập bằng tài khoản Facebook"; } }

	public virtual string common_sign_error { get { return "Sign in error!"; } }
	public virtual string common_comming_soon { get { return "Comming soon!"; } }
	public virtual string common_uplevel { get { return "Congratulation! You have reached level 1!"; } }
	public virtual string common_message_invite_join_game { get { return "Player %value1% %value2%\n invites you join his/her table with stake: %value3%."; } }
	public virtual string common_setting_language { get { return "Language"; } }
	public virtual string common_setting_choselanguage { get { return "Select Language"; } }
	public virtual string common_setting_developer { get { return "Developer"; } }
	public virtual string common_setting_debuglog { get { return "Debug Log"; } }
	public virtual string common_setting_version { get { return "Version"; } }
	public virtual string common_setting_account { get { return "Account"; } }
	public virtual string common_setting_rememberaccount { get { return "Remember account"; } }
	public virtual string common_setting_accountinfo { get { return "Account Info"; } }
	public virtual string common_setting_reconnect { get { return "Reconnect"; } }
	public virtual string common_setting_signout { get { return "Sign Out"; } }
	public virtual string common_setting_exit { get { return "Quit Game"; } }
	public virtual string common_setting_help { get { return "Help"; } }
	public virtual string common_setting_faq { get { return "FAQ"; } }
	public virtual string common_setting_fanpage { get { return "Fanpage"; } }
	public virtual string common_setting_game_rules { get { return "Rules"; } }
	public virtual string common_setting_feedback { get { return "Feed back"; } }
	public virtual string common_setting_gameoptions { get { return "Game Options"; } }
	public virtual string common_setting_music { get { return "Music"; } }
	public virtual string common_setting_sound { get { return "Voice"; } }
	public virtual string common_setting_vibrate { get { return "Vibrate"; } }
	public virtual string common_setting_notification { get { return "Notification"; } }

	public virtual string common_setting_accinfo_title { get { return "ACCOUNT INFO"; } }
	public virtual string common_setting_accinfo_lb_accid { get { return "Account ID"; } }
	public virtual string common_setting_accinfo_lb_devid { get { return "Device ID"; } }

	public virtual string common_noti_get_gold { get { return "You have just got %value%."; } }

	public virtual string stabs_mail_reply {get{return "Reply";}}
	public virtual string stabs_mail_delete {get{return "Delete";}}
	public virtual string stabs_mail_getgold {get{return "Get Gold";}}
	public virtual string stabs_mail_send {get{return "Send";}}
	public virtual string stabs_mail_placeholder_to {get{return "to...";}}
	public virtual string stabs_mail_placeholder_content {get{return "Input text here...";}}
	public virtual string stabs_mail_delete_mail_confirm {get{return "Are you sure to delete this message?";}}

	public virtual string stabs_title_bank_get {get{return "Nhận Gold";}}
	public virtual string stabs_title_bank_transfer {get{return "Chuyển Gold";}}
	public virtual string stabs_bank_acc {get{return "Chuyển tới tài khoản";}}
	public virtual string stabs_bank_value {get{return "Số Gold: ";}}
	public virtual string stabs_bank_fee {get{return "Phí giao dịch: ";}}
	public virtual string stabs_bank_select {get{return "Chọn số Gold muốn chuyển";}}
	public virtual string stabs_bank_btn_confirm {get{return "OK";}}
	public virtual string stabs_bank_error {get{return "Nhập đầy đủ tên người nhận và số tiền chuyển đi.";}}

	public virtual string login_error_disable_game { get { return "this game is being reconstructed..."; } }

	public virtual string home_dialog_reg_name_tile { get { return "Input your character's name"; } }
	public virtual string home_dialog_reg_placeholder { get { return "Enter name"; } }
	public virtual string home_dialog_reg_text_button_reg { get { return "Register"; } }
	public virtual string home_dialog_reg_loading { get { return "Loading..."; } }
	public virtual string home_dialog_reg_rules { get { return "Tên nhân vật từ 6 đến 30 ký tự bao gồm:\nA-Z, a-z, dấu chấm \".\" và gạch dưới \"_\"."; } }
	public virtual string home_dialog_reg_success { get { return "Register successfully"; } }

	public virtual string lobby_quickjoin { get { return "Quick Join"; } }
	public virtual string lobby_newtable { get { return "New Table"; } }
	public virtual string lobby_jointable { get { return "Join Table"; } }
	public virtual string lobby_tablelist_name { get { return "Name"; } }
	public virtual string lobby_tablelist_id { get { return "ID"; } }
	public virtual string lobby_tablelist_stake { get { return "Stake"; } }
	public virtual string lobby_tablelist_load { get { return "Load"; } }
	public virtual string lobby_message_cant_join_free_room { get { return "Free room is only for player who has less than %value1% ! Please take another room."; } }
	public virtual string lobby_dialog_join_table_placeholder { get { return "Enter table ID"; } }
	public virtual string lobby_dialog_join_table_join { get { return "Join Table"; } }
	public virtual string lobby_newtable_account_balance { get { return "Your account balance: "; } }
	public virtual string lobby_newtable_player { get { return "players"; } }

	public virtual string loginscene_normal_login_button { get { return "Login"; } }
	public virtual string loginscene_normal_signup_button { get { return "Sign Up"; } }
	public virtual string loginscene_normal_forgetpass { get { return "forget password?"; } }
	public virtual string loginscene_guestlogin { get { return "Guest Login"; } }
	public virtual string loginscene_logintogame_withfbacc { get { return "Login with this Facebook account"; } }
	public virtual string loginscene_fb_lougout { get { return "Logout Facebook"; } }
	public virtual string loginscene_label_name { get { return "username"; } }
	public virtual string loginscene_label_pass { get { return "password"; } }
	public virtual string loginscene_label_repeatpass { get { return "repeat password"; } }
	public virtual string loginscene_warning_fill_all_fields { get { return "Please fill all the fields"; } }
	public virtual string loginscene_warning_repeat_pass_doesnt_match { get { return "The two passwords input do not match."; } }
	public virtual string loginscene_warning_name_too_short { get { return "Name can't be less than 6 characters"; } }

	public virtual string gamescene_gameinfo_table { get { return "Table"; } }
	public virtual string gamescene_gameinfo_stake { get { return "Stake"; } }
	public virtual string gamescene_chatpanel_send { get { return "Send"; } }
	public virtual string gamescene_chatpanel_placeholder_enter_text { get { return "Enter text"; } }
	public virtual string gamescene_chatpanel_quickchat_chat1 { get { return "Nice play!"; } }
	public virtual string gamescene_chatpanel_quickchat_chat2 { get { return "Hurry up"; } }
	public virtual string gamescene_chatpanel_quickchat_chat3 { get { return "Please ready"; } }
	public virtual string gamescene_chatpanel_quickchat_chat4 { get { return "Please start"; } }
	public virtual string gamescene_chatpanel_quickchat_chat5 { get { return "Bad move"; } }
	public virtual string gamescene_chatpanel_quickchat_chat6 { get { return "Nice play!"; } }
	public virtual string gamescene_chatpanel_quickchat_chat7 { get { return "Nice play!"; } }
	public virtual string gamescene_chatpanel_quickchat_chat8 { get { return "Nice play!"; } }
	public virtual string gamescene_chatpanel_quickchat_chat9 { get { return "Nice play!"; } }
	public virtual string gamescene_chatpanel_quickchat_chat10 { get { return "Nice play!"; } }

	public virtual string gamescene_chatpanel_quickchat_xocdia_chat1 { get { return "Liều ăn nhiều!"; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat2 { get { return "Xin lỗi, đời quá đen!!!"; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat3 { get { return "Chẵn đi,chẵn đi..."; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat4 { get { return "Lẻ lẻ lẻ..."; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat5 { get { return "Mua đi nào,mua đi nào..."; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat6 { get { return "Chia buồn với các thím ~"; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat7 { get { return "Làm giàu không khó :))"; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat8 { get { return "Xoắn quẩy thế =))"; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat9 { get { return "Lên voi hay xuống chó đây?"; } }
	public virtual string gamescene_chatpanel_quickchat_xocdia_chat10 { get { return "Lại gặp dây rồi!"; } }
	
	public virtual string gamescene_chatpanel_quickchat_chan_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat2 { get { return "Chi ngồi gọi chi đứng"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat3 { get { return "Đêm văn ngày vạn"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat4 { get { return "Nhị văn gọi bát vạn"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat5 { get { return "Ngũ vạn là bạn chi chi"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat6 { get { return "Lại ù nữa rồi =))"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat7 { get { return "Tham như mõ x-("; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat8 { get { return "Gà mới chơi,các cụ thông cảm"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat9 { get { return "Không bít đì gì cả"; } }
	public virtual string gamescene_chatpanel_quickchat_chan_chat10 { get { return "Đánh kém thế,về học lại đi"; } }
	
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat7 { get { return "Tuổi gì mà bắt"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat8 { get { return "Ăn hàng :v"; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat9 { get { return "Bài bé quá :("; } }
	public virtual string gamescene_chatpanel_quickchat_tienlen_chat10 { get { return "Thối rồi :3"; } }

	public virtual string gamescene_chatpanel_quickchat_sam_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat7 { get { return "Tuổi gì mà bắt"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat8 { get { return "Ăn hàng :v"; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat9 { get { return "Bài bé quá :("; } }
	public virtual string gamescene_chatpanel_quickchat_sam_chat10 { get { return "Thế mà cũng đòi sâm :D"; } }

	public virtual string gamescene_chatpanel_quickchat_tala_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat7 { get { return "Móm rồi :(("; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat8 { get { return "Hàng về :v"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat9 { get { return "Cho xin cây nào"; } }
	public virtual string gamescene_chatpanel_quickchat_tala_chat10 { get { return "Ù rồi =))"; } }

	public virtual string gamescene_chatpanel_quickchat_binh_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat7 { get { return "Xếp lâu thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat8 { get { return "Sập hầm rồi :("; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat9 { get { return "Mậu binh hụt :(("; } }
	public virtual string gamescene_chatpanel_quickchat_binh_chat10 { get { return "Bài chán thế"; } }

	public virtual string gamescene_chatpanel_quickchat_poker_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat7 { get { return "Thùng phá sảnh này"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat8 { get { return "Tất tay đê!"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat9 { get { return "Liều ăn nhiều"; } }
	public virtual string gamescene_chatpanel_quickchat_poker_chat10 { get { return "Tố láo này"; } }

	public virtual string gamescene_chatpanel_quickchat_lieng_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat7 { get { return "Sáp rồi =))"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat8 { get { return "Tất tay đê!"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat9 { get { return "Liều ăn nhiều"; } }
	public virtual string gamescene_chatpanel_quickchat_lieng_chat10 { get { return "Tố láo này"; } }

	public virtual string gamescene_chatpanel_quickchat_xito_chat1 { get { return "Nhanh lên thím"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat2 { get { return "Tăng cược lên nào"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat3 { get { return "Solo đi thím"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat4 { get { return "Hên thế!"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat5 { get { return "Đen vãi!"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat7 { get { return "Yếu còn ra gió =))"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat8 { get { return "Tất tay đê!"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat9 { get { return "Liều ăn nhiều"; } }
	public virtual string gamescene_chatpanel_quickchat_xito_chat10 { get { return "Tố láo này"; } }

	public virtual string gamescene_msg_vtable { get { return "Ván chơi đang diễn ra, bạn sẽ tham gia ở ván tiếp theo!"; } }
	public virtual string gamescene_msg_change_setting { get { return "Bàn chơi vừa được thay đổi mức cược.!"; } }

	public virtual string gameplay_winer { get { return "Winer"; } }
	public virtual string gameplay_win { get { return "Win"; } }
	public virtual string gameplay_four_of_two { get { return "Four of Two card"; } }
	public virtual string gameplay_five_straight_pairs { get { return "Five Straight Pairs"; } }
	public virtual string gameplay_six_pairs { get { return "Six Pairs"; } }
	public virtual string gameplay_royal_flush { get { return "Royal FLush"; } }
	public virtual string gameplay_group_card_type_single { get { return "Single"; } }
	public virtual string gameplay_group_card_type_pair { get { return "Pair"; } }
	public virtual string gameplay_group_card_type_twopair { get { return "Two Pairs"; } }
	public virtual string gameplay_group_card_type_threeofakind { get { return "Three Of A Kind"; } }
	public virtual string gameplay_group_card_type_fivestraight { get { return "Straight"; } }
	public virtual string gameplay_group_card_type_fiveflush { get { return "Flush"; } }
	public virtual string gameplay_group_card_type_fullhouse { get { return "Full House"; } }
	public virtual string gameplay_group_card_type_fourofakind { get { return "Four Of A Kind"; } }
	public virtual string gameplay_group_card_type_fiveflushstraight { get { return "Straight Flush"; } }
	public virtual string gameplay_group_card_type_lieng { get { return "Straight"; } }
	public virtual string gameplay_group_card_type_bodoi { get { return "Royal"; } }
	public virtual string gameplay_group_card_type_unknown { get { return ""; } }

	public virtual string gameplay_tienlen_drop_turn { get { return "Lost Turn"; } }

	public virtual string gameplay_poker_fold { get { return "Fold"; } }
	public virtual string gameplay_poker_checkfold { get { return "Check/Fold"; } }
	public virtual string gameplay_poker_check { get { return "Check"; } }
	public virtual string gameplay_poker_call { get { return "Call"; } }
	public virtual string gameplay_poker_allin { get { return "All In"; } }
	public virtual string gameplay_poker_callany { get { return "Call Any"; } }
	public virtual string gameplay_poker_request_allin { get { return "ALL IN ?"; } }
	public virtual string gameplay_poker_request_call { get { return "CALL for %value1% ?"; } }
	public virtual string gameplay_poker_request_checkorbet { get { return "CHECK or BET ?"; } }
	public virtual string gameplay_poker_raise { get { return "Raise"; } }

	public virtual string gameplay_xocdia_batdaudatcuoc { get { return "Bắt đầu đặt cược"; } }

	public virtual string gameplay_xito_request_pick_one_card { get { return "Pick a card"; } }

	public virtual string gameplay_lieng_result { get { return "%value1% Point(s)"; } }

	public virtual string gameplay_xoso_result_time { get { return "Result of %value1%"; } }
	public virtual string gameplay_xoso_bet_success { get { return "Your bet request was accepted!"; } }
	public virtual string gameplay_xoso_tab_result { get { return "Result"; } }
	public virtual string gameplay_xoso_tab_bet { get { return "Bet"; } }
	public virtual string gameplay_xoso_tab_intro { get { return "Introduce"; } }
	public virtual string gameplay_xoso_tab_top { get { return "Top"; } }
	public virtual string gameplay_xoso_rank_0 { get { return "Special"; } }
	public virtual string gameplay_xoso_rank_1 { get { return "The First"; } }
	public virtual string gameplay_xoso_rank_2 { get { return "The Second"; } }
	public virtual string gameplay_xoso_rank_3 { get { return "The Third"; } }
	public virtual string gameplay_xoso_rank_4 { get { return "The Forth"; } }
	public virtual string gameplay_xoso_rank_5 { get { return "The Fifth"; } }
	public virtual string gameplay_xoso_rank_6 { get { return "The Sixth"; } }
	public virtual string gameplay_xoso_rank_7 { get { return "The Seventh"; } }
	public virtual string gameplay_xoso_type { get { return "Type"; } }
	public virtual string gameplay_xoso_stake { get { return "Stake"; } }
	public virtual string gameplay_xoso_number { get { return "Number"; } }
	public virtual string gameplay_xoso_btn_bet { get { return "Bet"; } }
	public virtual string gameplay_xoso_introduce_content { get { return "Kết quả lấy từ kết quả Xổ số Miền Bắc.\nThẻ X3.5: trúng giải khi trùng với 2 số bất kỳ giải nào của XS.Giải thưởng có mệnh giá bằng 3.5 lần mệnh giá của mức đặt cược.Nếu số bạn đặt cược xuất hiện ở nhiều giải khác nhau thì kết quả sẽ được nhân với số lần xuất hiện của số bạn đặt cược.\nThẻ X75: trúng giải khi trùng với 2 số cuối của giải đặc biệt XS.Giải thưởng có mệnh giá bằng 75 lần mệnh giá của mức đặt cược."; } }
	public virtual string gameplay_xoso_minstake_warning { get { return "Min stake is %value1% " + GameApplication.COIN; } }

	public virtual string gameplay_mail_inbox {get { return "Inbox"; }}
	public virtual string gameplay_mail_inbox_players {get { return "Other Players"; }}
	public virtual string gameplay_mail_inbox_admin {get { return "Admin"; }}
	public virtual string gameplay_mail_compose {get { return "Compose Mail"; }}

	public virtual string gameplay_payment_card {get { return "Card"; }}
	public virtual string gameplay_payment_sms {get { return "SMS"; }}
	public virtual string gameplay_payment_atm {get { return "ATM"; }}
	public virtual string gameplay_payment_iap {get { return "IAP"; }}
	public virtual string gameplay_payment_rate {get { return "Rate"; }}

	public virtual string gameplay_news {get { return "News"; }}

	public virtual string gameplay_help_rules {get { return "Rules"; }}
	public virtual string gameplay_help_dieukhoan {get { return "Privacy Policy"; }}
	public virtual string gameplay_help_huongdan {get { return "Guide"; }}

	public virtual string gameplay_payment_card_pin {get { return "PIN"; }}
	public virtual string gameplay_payment_card_serial {get { return "Serial"; }}
	public virtual string gameplay_payment_card_buy {get { return "Buy"; }}

	//String LEADERBOARD
	public virtual string gameplay_leaderboard_tienlen{get { return "Tiến Lên";}}
	public virtual string gameplay_leaderboard_phom{get { return "Phỏm";}}
	public virtual string gameplay_leaderboard_xito{get { return "Xì tố";}}
	public virtual string gameplay_leaderboard_binh{get { return "Binh";}}
	public virtual string gameplay_leaderboard_sam{get { return "Sâm";}}
	public virtual string gameplay_leaderboard_lieng{get { return "Liêng";}}
	public virtual string gameplay_leaderboard_chan{get { return "Chắn";}}

	public virtual string gameplay_leaderboard_ngay{get { return "Ngày";}}
	public virtual string gameplay_leaderboard_tuan{get { return "Tuần";}}
	public virtual string gameplay_leaderboard_thang{get { return "Tháng";}}
	public virtual string gameplay_leaderboard_homqua{get { return "Hôm qua";}}
	public virtual string gameplay_leaderboard_giaithuong{get { return "Giải thưởng";}}

	public virtual string common_retry { get { return "Try Again"; } }
	public virtual string common_network_error { get { return "Network error"; } }
	public virtual string common_network_lost_connection { get { return "Lost Connection"; } }
	public virtual string common_waitingdialog_loading { get { return "loading data..."; } }
	public virtual string common_tableoptions_title { get { return "TABLE OPTIONS"; } }
	public virtual string common_tableoptions_stake_text { get { return "Stakes"; } }
	public virtual string common_tableoptions_create_button_text { get { return "Create New Table"; } }
	public virtual string common_tableoptions_create_button_sonnguoichoi { get { return "Players"; } }

	public virtual string dialog_common_require_internet { get { return GameApplication.gameName + " không thể kết nối đến máy chủ, vui lòng kiểm tra lại đường truyền internet. Error: " + GameApplication.versionname; } }
	public virtual string dialog_common_ok { get { return "OK"; } }
	public virtual string dialog_common_cancel { get { return "Cancel"; } }
	public virtual string dialog_common_reconnect { get { return "Reconnect"; } }
	public virtual string dialog_common_signout { get { return "Sign out"; } }
	public virtual string dialog_common_deny { get { return "Deny"; } }
	public virtual string dialog_common_deny_all { get { return "Từ chối tất cả"; } }
	public virtual string dialog_common_accept { get { return "Accept"; } }
	public virtual string dialog_common_tableoptions_error_not_enough_gold { get { return "You don't have enough gold to create this game"; } }
	public virtual string dialog_common_notify_mail_admin { get { return "You've got mails. Do you wanna see now?"; } }
	public virtual string dialog_common_notify_mail_transfer_gold { get { return "You've got mails with Gold. Do you wanna see now?"; } }
	public virtual string dialog_common_notify_new_mail { get { return "You've got a new mail!"; } }

	public virtual string dialog_common_join_game_not_enough_gold { get { return "You have not enough " + GameApplication.COIN + " to join this game!"; } }
	public virtual string dialog_common_join_game_dialog_op1 { get { return "OK"; } }
	public virtual string dialog_common_join_game_dialog_op2 { get { return "Invite Friends"; } }
	public virtual string dialog_common_join_game_dialog_op3 { get { return "Buy " + GameApplication.COIN; } }

	public virtual string dialog_alert_lackof_info { get { return "Please fill all the fields before sending!"; } }
	public virtual string dialog_alert_payment_miss_provider { get { return "You need to choose one provider!"; } }
	public virtual string dialog_alert_payment_miss_pin { get { return "You must to fill in the PIN number!"; } }
	public virtual string dialog_alert_payment_miss_serial { get { return "You must to fill in the serial number!"; } }

	public virtual string error1 { get { return "An Error has occured when trying to join game"; } }
	public virtual string error2 { get { return "The table is full now. Please take another table!"; } }
	public virtual string error3 { get { return "The table has been canceled. Please take another table!"; } }

	public virtual string error_payment_card_OK { get { return "Purchase is successful!"; } }
	public virtual string error_payment_card_cant_do_request { get { return "An error occurs!"; } }
	public virtual string error_payment_card_wrong_info { get { return "Invalid card, wrong pin or serial!"; } }
	public virtual string error_payment_card_has_been_used { get { return "Invalid card, the card has been used!"; } }
	public virtual string error_payment_card_invalid { get { return "The card is not exist!"; } }
	public virtual string error_payment_card_banned_account { get { return "Your account has been suspended!"; } }

	public virtual string ingame_common_kick { get { return "You have been kicked out from game"; } }
	public virtual string ingame_common_request_kick { get { return "Do you want to kick him/her out?"; } }
	public virtual string ingame_common_deny_kick { get { return "You can't do that."; } }
	public virtual string ingame_common_configchange { get { return "Table's setting has been changed!"; } }
	public virtual string ingame_common_kick_not_enough_gold { get { return "You have not enough " + GameApplication.COIN + " to join this game!"; } }
	public virtual string ingame_common_force_leave_game_dialog_op1 { get { return "Back to Lobby"; } }
	public virtual string ingame_common_force_leave_game_dialog_op2 { get { return "Invite Friends"; } }
	public virtual string ingame_common_force_leave_game_dialog_op3 { get { return "Buy " + GameApplication.COIN; } }

	//******************************Binh********************************
	public virtual string gameplay_binh_sobai { get { return "So Bài"; } }
	public virtual string gameplay_binh_xepbai { get { return "Xếp Bài"; } }
	public virtual string gameplay_binh_doichi { get { return "Đổi Chi"; } }
	public virtual string gameplay_binh_solai { get { return "Xếp Lại"; } }

	public virtual string gameplay_binh_mb_sanhrongdonghoa { get { return "Sảnh Rồng Đồng Hoa"; } }
	public virtual string gameplay_binh_mb_sanhrong { get { return "Sảnh Rồng"; } }
	public virtual string gameplay_binh_mb_donghoa { get { return "Đồng Hoa"; } }
	public virtual string gameplay_binh_mb_saudoi { get { return "6 Đôi"; } }
	public virtual string gameplay_binh_mb_bathung { get { return "3 Thùng"; } }
	public virtual string gameplay_binh_mb_basanh { get { return "3 Sảnh"; } }

	public virtual string gameplay_binh_thungphasanh { get { return "Thùng Phá Sảnh"; } }
	public virtual string gameplay_binh_tuquy { get { return "Tứ Quý"; } }
	public virtual string gameplay_binh_culu { get { return "Cù lũ"; } }
	public virtual string gameplay_binh_thung { get { return "Thùng"; } }
	public virtual string gameplay_binh_sanh { get { return "Sảnh"; } }
	public virtual string gameplay_binh_xam { get { return "Xám"; } }
	public virtual string gameplay_binh_thu { get { return "Thú"; } }
	public virtual string gameplay_binh_doi { get { return "Đôi"; } }
	public virtual string gameplay_binh_mau { get { return "Mậu"; } }
	public virtual string gameplay_binh_binhlung { get { return "Binh Lủng"; } }

	public virtual string win { get { return "Thắng"; } }
	public virtual string lose { get { return "Thua"; } }

	public virtual string binhPlayer { get { return "Người chơi"; } }
	public virtual string binhResult { get { return "Kết quả"; } }
	//*******************************Sam************************************
	public virtual string strXinSam { get { return "Xin Sâm!"; } }
	public virtual string strKhongSam { get { return "Không Sâm!"; } }
	public virtual string xocdia_lamcai { get { return "Làm cái"; } }
	public virtual string xocdia_status { get { return "Bắt đầu đặt cược!"; } }
	public virtual string xocdia_status0 { get { return "Ván chơi chưa bắt đầu!"; } }
	public virtual string xocdia_status1 { get { return "Đang trong thời gian đặt cược!"; } }
	public virtual string xocdia_status2 { get { return "/Name/ bán /gold/ cửa /1/!"; } }
	public virtual string xocdia_status3 { get { return "Đang trong thời gian bán cửa!"; } }
	public virtual string xocdia_huycuoc { get { return "Hủy cược"; } }
	public virtual string xocdia_datlai { get { return "Đặt lại"; } }
	public virtual string xocdia_datx2 { get { return "Đặt X2"; } }
	public virtual string xocdia_muacua { get { return "Mua cửa"; } }
	public virtual string xocdia_bancua { get { return "Bán cửa"; } }
	public virtual string xocdia_huybancua { get { return "Hủy bán cửa"; } }
	public virtual string xocdia_chan { get { return "Chẵn"; } }
	public virtual string xocdia_le { get { return "Lẻ"; } }
	public virtual string xocdia_msg_lamcai { get { return "/Name/ làm cái!"; } }
	public virtual string xocdia_msg_muacua { get { return "/Name/ mua /gold/ cửa /1/!"; } }
	public virtual string xocdia_msg_bancua { get { return "Bắt đầu bán cửa!"; } }
	public virtual string quahangngay { get { return "QUÀ ĐĂNG NHẬP"; } }
	public virtual string quahangngay_day1 { get { return "Ngày 1"; } }
	public virtual string quahangngay_day2 { get { return "Ngày 2"; } }
	public virtual string quahangngay_day3 { get { return "Ngày 3"; } }
	public virtual string quahangngay_day4 { get { return "Ngày 4"; } }
	public virtual string quahangngay_day5 { get { return "Ngày 5++"; } }
	public virtual string updateInfo { get { return "Cập nhập thông tin thành công!"; } }
	public virtual string person_info { get { return "Thông tin"; } }
	public virtual string person_avatar { get { return "Avatar"; } }
	public virtual string person_info_sdt { get { return "Số điện thoại(*)"; } }
	public virtual string person_info_name { get { return "Họ tên"; } }
	public virtual string person_info_update { get { return "Cập nhật"; } }
	public virtual string person_info_note1 { get { return "- Số điện thoại dùng để xác thực quyền sở hữu của bạn đối với tài khoản này, vì vậy chỉ được nhập 1 lần duy nhất, không được phép thay đổi. Bạn hãy nhập một cách chính xác số điện thoại của mình để bảo đảm quyền lợi của bạn trong tương lai."; } }
	public virtual string person_info_note2 { get { return "- Khi bạn quên mật khẩu, hãy báo với admin của game (GAME), chúng tôi sẽ gửi lại mật khẩu của bạn vào số điện thoại mà bạn đã đăng ký."; } }
	public virtual string person_avatar_ok { get { return "Đổi avatar thành công!"; } }
	public virtual string person_avatar_failed { get { return "Đổi avatar thất bại!"; } }
	public virtual string xocdia_huycai { get { return "Hủy cái"; } }
	public virtual string cashout_thecao { get { return "Thẻ cào"; } }
	public virtual string cashout_vatpham { get { return "Vật phẩm"; } }
	public virtual string bongda_live { get { return "Đang diễn ra"; } }
	public virtual string bongda_history { get { return "Lịch sử cược"; } }
	public virtual string bongda_top { get { return "Thắng lớn"; } }
	public virtual string bongda_error1 { get { return "Bạn cần đặt cược"; } }
	public virtual string common_setting_invite { get { return "Nhận lời mời"; } }
	public virtual string chatroom_all { get { return "Tất cả"; } }
	public virtual string chatroom_game { get { return "Game"; } }
	public virtual string chatroom_thegioi { get { return "Thế giới"; } }
	public virtual string chatroom_rieng { get { return "Riêng"; } }

	public virtual string gameplay_dummy_chose_one_card { get { return "Chọn một cây bài để đánh"; } }
	public virtual string gameplay_dummy_warn_gui { get { return "Cây bài này gửi được phỏm. Bạn sẽ bị trừ điểm nếu đánh cây bài này."; } }
	public virtual string gameplay_dummy_warn_ha { get { return "Cây bài này ghép được phỏm trên bàn. Bạn sẽ bị trừ điểm nếu đánh cây bài này."; } }
	public virtual string gameplay_dummy_btn_boc { get { return "Bốc"; } }
	public virtual string gameplay_dummy_btn_danh { get { return "Đánh"; } }
	public virtual string gameplay_dummy_btn_gui { get { return "Gửi"; } }
	public virtual string gameplay_dummy_btn_ha { get { return "Hạ"; } }
	public virtual string gameplay_dummy_btn_confirm { get { return "Confirm"; } }
	public virtual string gameplay_dummy_btn_cancel { get { return "Cancel"; } }
	public virtual string gameplay_dummy_finish_detail_str1 { get { return "Bài trên tay"; } }
	public virtual string gameplay_dummy_finish_detail_str2 { get { return "Bài hạ được"; } }
	public virtual string gameplay_dummy_finish_detail_str3 { get { return "Điểm thưởng"; } }
	public virtual string gameplay_dummy_btn_ungay { get { return "Hạ Ù"; } }

	public virtual string gameplay_siam_btn_sansang { get { return "Ready"; } }
	public virtual string gameplay_siam_btn_batdau { get { return "Start"; } }
	public virtual string gameplay_siam_btn_chitiet { get { return "Detail"; } }

	public virtual string gameplay_invite_player { get { return "Mời người chơi"; } }
	public virtual string gameplay_no_find_player { get { return "Không tìm được người chơi"; } }

	public virtual string transition_scene_loading { get { return "Đang tải bàn chơi…"; } }
	public virtual string free_gold { get { return "Free Gold"; } }

	public virtual string common_gift_money{get{return "%Game% gửi tặng bạn %1000% %Gold%.Chúc bạn chơi game vui vẻ!";}}

	public virtual string lobby_game_name_dummy{get{return "Dummy";}}
	public virtual string lobby_game_name_poker{get{return "Poker";}}
	public virtual string lobby_game_name_poker9k{get{return "Poker9k";}}
	public virtual string lobby_game_name_xocdia{get{return "Xóc đĩa";}}

	public virtual string lobby_room1{get{return "Room\n1";}}
	public virtual string lobby_room2{get{return "Room\n2";}}
	public virtual string lobby_room3{get{return "Room\n3";}}
	public virtual string lobby_room4{get{return "Room\n4";}}

	// public virtual string common_create_{get{return "%Game% gửi tặng bạn %1000% %Gold%.Chúc bạn chơi game vui vẻ!";}}
	//ตัวเลข

}

public class Strings_VI : Strings
{
	public override string getLocalString(string input){
		string startTag = "<vi>";
		string endTag = "</vi>";
		
		int startIndex = input.IndexOf(startTag) + 4;
		int endIndex = input.IndexOf(endTag);
		
		if(endIndex < 0 || startIndex < 4)
			return input;
		
		return input.Substring(startIndex, endIndex-startIndex);
	}

	public override Sprite flag { get { return Resources.Load<Sprite>("Textures/flags/flag_vn"); } }
	public override string common_change_language { get { return "Bạn chọn Tiếng Việt"; } }
	public override string common_confirm_quit_app { get { return "Bạn muốn thoát game?"; } }
	public override string common_confirm_quit_app_ok { get { return "Thoát game"; } }
	public override string common_confirm_quit_app_cancel { get { return "Hủy bỏ"; } }
	public override string common_confirm_signout_msg { get { return "Bạn có muốn thoát tài khoản " + GameApplication.user.name + "?"; } }
	public override string common_confirm_payment_sms { get { return "Bạn có muốn mua %value% với giá %cost% ?"; } }

	public override string common_login_error_1 { get { return "Bạn đang ở trong bàn chơi!"; } }
	public override string common_login_error_2 { get { return "Bạn hãy nhập đầy đủ thông tin đăng nhập."; } }
	public override string common_login_error_3 { get { return "Mật khẩu hoặc tài khoản không đúng."; } }
	public override string common_login_error_4 { get { return "Bạn bị khóa tài khoản vì vi phạm nội quy game."; } }
	public override string common_login_error_5 { get { return "Gặp sự cố về đường truyền."; } }
	public override string common_login_error_6 { get { return "Lỗi đăng nhập bằng tài khoản Facebook"; } }

	public override string common_sign_error { get { return "Đăng nhập lỗi!"; } }
	public override string common_comming_soon { get { return "Chức năng đang phát triển!"; } }
	public override string common_uplevel { get { return "Chúc mừng! Bạn vừa đạt đc VIP 1!"; } }
	public override string common_message_invite_join_game { get { return "Người chơi %value1% %value2%\nMức cược bàn: %value3% \nMời bạn tham gia bàn chơi."; } }

	public override string common_setting_language { get { return "Ngôn ngữ"; } }
	public override string common_setting_choselanguage { get { return "Chọn Ngôn ngữ"; } }
	public override string common_setting_developer { get { return "Nhà phát triển"; } }
	public override string common_setting_debuglog { get { return "Debug log"; } }
	public override string common_setting_version { get { return "Phiên bản"; } }
	public override string common_setting_account { get { return "Tài khoản"; } }
	public override string common_setting_rememberaccount { get { return "Ghi nhớ đăng nhập"; } }
	public override string common_setting_accountinfo { get { return "Thông tin tài khoản"; } }
	public override string common_setting_reconnect { get { return "Kết nối lại"; } }
	public override string common_setting_signout { get { return "Thoát tài khoản"; } }
	public override string common_setting_exit { get { return "Thoát Game"; } }
	public override string common_setting_help { get { return "Trợ giúp"; } }
	public override string common_setting_faq { get { return "FAQ"; } }
	public override string common_setting_fanpage { get { return "Fanpage"; } }
	public override string common_setting_game_rules { get { return "Luật chơi"; } }
	public override string common_setting_feedback { get { return "Góp ý"; } }
	public override string common_setting_gameoptions { get { return "Cài đặt"; } }
	public override string common_setting_music { get { return "Nhạc nền"; } }
	public override string common_setting_sound { get { return "Tiếng trong game"; } }
	public override string common_setting_vibrate { get { return "Rung"; } }
	public override string common_setting_notification { get { return "Nhận báo sự kiện"; } }

	public override string common_setting_accinfo_title { get { return "THÔNG TIN TÀI KHOẢN"; } }
	public override string common_setting_accinfo_lb_accid { get { return "ID người chơi"; } }
	public override string common_setting_accinfo_lb_devid { get { return "ID thiết bị"; } }

	public override string common_noti_get_gold { get { return "Bạn vừa nhận được %value%."; } }

	public override string stabs_mail_reply {get{return "Trả lời";}}
	public override string stabs_mail_delete {get{return "Xóa thư";}}
	public override string stabs_mail_getgold {get{return "Nhận Gold";}}
	public override string stabs_mail_send {get{return "Gửi thư";}}
	public override string stabs_mail_placeholder_to {get{return "Người nhận...";}}
	public override string stabs_mail_placeholder_content {get{return "Nội dung...";}}
	public override string stabs_mail_delete_mail_confirm {get{return "Bạn có chắc muốn xóa tin nhắn này?";}}

	public override string stabs_title_bank_get {get{return "Nhận Gold";}}
	public override string stabs_title_bank_transfer {get{return "Chuyển Gold";}}
	public override string stabs_bank_acc {get{return "Chuyển tới tài khoản";}}
	public override string stabs_bank_value {get{return "Số Gold: ";}}
	public override string stabs_bank_fee {get{return "Phí giao dịch: ";}}
	public override string stabs_bank_select {get{return "Chọn số Gold muốn chuyển";}}
	public override string stabs_bank_btn_confirm {get{return "OK";}}
	public override string stabs_bank_error {get{return "Nhập đầy đủ tên người nhận và số tiền chuyển đi.";}}

	public override string login_error_disable_game { get { return "Game đang được fix lỗi hoặc update..."; } }

	public override string home_dialog_reg_name_tile { get { return "Đăng ký tên nhân vật"; } }
	public override string home_dialog_reg_placeholder { get { return "Nhập tên"; } }
	public override string home_dialog_reg_text_button_reg { get { return "Đăng ký"; } }
	public override string home_dialog_reg_loading { get { return "Loading..."; } }
	public override string home_dialog_reg_rules { get { return "Tên nhân vật từ 6 đến 30 ký tự bao gồm:\nA-Z, a-z, dấu chấm \".\" và gạch dưới \"_\"."; } }
	public override string home_dialog_reg_success { get { return "Tạo tên nhân vật thành công"; } }

	public override string lobby_quickjoin { get { return "Chơi Ngay"; } }
	public override string lobby_newtable { get { return "Tạo Bàn"; } }
	public override string lobby_jointable { get { return "Vào Bàn"; } }
	public override string lobby_tablelist_name { get { return "Tên Bàn"; } }
	public override string lobby_tablelist_id { get { return "ID"; } }
	public override string lobby_tablelist_stake { get { return "Mức Cược"; } }
	public override string lobby_tablelist_load { get { return "Số Người"; } }
	public override string lobby_message_cant_join_free_room { get { return "Phòng Miễn phí chỉ dành cho các game thủ có tài sản dưới %value1% ! Bạn vui lòng sang các phòng chơi khác để chơi nhé "; } }
	public override string lobby_dialog_join_table_placeholder { get { return "Nhập mã bàn"; } }
	public override string lobby_dialog_join_table_join { get { return "Vào bàn"; } }
	public override string lobby_newtable_account_balance { get { return "Tài sản của bạn: "; } }
	public override string lobby_newtable_player { get { return "nguời"; } }

	public override string loginscene_normal_login_button { get { return "Đăng nhập"; } }
	public override string loginscene_normal_signup_button { get { return "Đăng ký"; } }
	public override string loginscene_normal_forgetpass { get { return "quên mật khẩu?"; } }
	public override string loginscene_guestlogin { get { return "Chơi thử"; } }
	public override string loginscene_logintogame_withfbacc { get { return "Đăng nhập bằng tài khoản Facebook này"; } }
	public override string loginscene_fb_lougout { get { return "Thoát Facebook"; } }
	public override string loginscene_label_name { get { return "Tài khoản"; } }
	public override string loginscene_label_pass { get { return "Mật khẩu"; } }
	public override string loginscene_label_repeatpass { get { return "Nhắc lại mật khẩu"; } }
	public override string loginscene_warning_fill_all_fields { get { return "Bạn hãy điền đầy đủ thông tin."; } }
	public override string loginscene_warning_repeat_pass_doesnt_match { get { return "Mật khẩu nhập lại không khớp."; } }
	public override string loginscene_warning_name_too_short { get { return "Tên đăng nhập không được ít hơn 6 ký tự."; } }

	public override string gamescene_gameinfo_table { get { return "Bàn"; } }
	public override string gamescene_gameinfo_stake { get { return "Cược"; } }
	public override string gamescene_chatpanel_send { get { return "Gửi"; } }
	public override string gamescene_chatpanel_placeholder_enter_text { get { return "Nhập nội dung"; } }
	public override string gamescene_chatpanel_quickchat_chat1 { get { return "Chào cả bàn nhé!"; } }
	public override string gamescene_chatpanel_quickchat_chat2 { get { return "Bye bye, mình out đây!"; } }
	public override string gamescene_chatpanel_quickchat_chat3 { get { return "Nhanh lên nào"; } }
	public override string gamescene_chatpanel_quickchat_chat4 { get { return "Mạng lag quá"; } }
	public override string gamescene_chatpanel_quickchat_chat5 { get { return "Lên nóc nhà mà bắt con gà"; } }
	public override string gamescene_chatpanel_quickchat_chat6 { get { return "Gà quá :)"; } }
	public override string gamescene_chatpanel_quickchat_chat7 { get { return "Thua thì đừng đổ cho hoàn cảnh"; } }
	public override string gamescene_chatpanel_quickchat_chat8 { get { return "Chú em còn non và xanh lắm"; } }
	public override string gamescene_chatpanel_quickchat_chat9 { get { return "Đánh ngu vãi chưởng"; } }
	public override string gamescene_chatpanel_quickchat_chat10 { get { return "Chẵn hay lẻ đây"; } }

	public override string gamescene_chatpanel_quickchat_xocdia_chat1 { get { return "Liều ăn nhiều!"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat2 { get { return "Xin lỗi, đời quá đen!!!"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat3 { get { return "Chẵn đi,chẵn đi..."; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat4 { get { return "Lẻ lẻ lẻ..."; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat5 { get { return "Mua đi nào,mua đi nào..."; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat6 { get { return "Chia buồn với các thím ~"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat7 { get { return "Làm giàu không khó :))"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat8 { get { return "Xoắn quẩy thế =))"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat9 { get { return "Lên voi hay xuống chó đây?"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat10 { get { return "Lại gặp dây rồi!"; } }

	public override string gamescene_chatpanel_quickchat_chan_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat2 { get { return "Chi ngồi gọi chi đứng"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat3 { get { return "Đêm văn ngày vạn"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat4 { get { return "Nhị văn gọi bát vạn"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat5 { get { return "Ngũ vạn là bạn chi chi"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat6 { get { return "Lại ù nữa rồi =))"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat7 { get { return "Tham như mõ x-("; } }
	public override string gamescene_chatpanel_quickchat_chan_chat8 { get { return "Gà mới chơi,các cụ thông cảm"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat9 { get { return "Không bít đì gì cả"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat10 { get { return "Đánh kém thế,về học lại đi"; } }
	
	public override string gamescene_chatpanel_quickchat_tienlen_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat7 { get { return "Tuổi gì mà bắt"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat8 { get { return "Ăn hàng :v"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat9 { get { return "Bài bé quá :("; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat10 { get { return "Thối rồi :3"; } }

	public override string gamescene_chatpanel_quickchat_sam_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat7 { get { return "Tuổi gì mà bắt"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat8 { get { return "Ăn hàng :v"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat9 { get { return "Bài bé quá :("; } }
	public override string gamescene_chatpanel_quickchat_sam_chat10 { get { return "Thế mà cũng đòi sâm :D"; } }
	
	public override string gamescene_chatpanel_quickchat_tala_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat7 { get { return "Móm rồi :(("; } }
	public override string gamescene_chatpanel_quickchat_tala_chat8 { get { return "Hàng về :v"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat9 { get { return "Cho xin cây nào"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat10 { get { return "Ù rồi =))"; } }
	
	public override string gamescene_chatpanel_quickchat_binh_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat7 { get { return "Xếp lâu thế!"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat8 { get { return "Sập hầm rồi :("; } }
	public override string gamescene_chatpanel_quickchat_binh_chat9 { get { return "Mậu binh hụt :(("; } }
	public override string gamescene_chatpanel_quickchat_binh_chat10 { get { return "Bài chán thế"; } }
	
	public override string gamescene_chatpanel_quickchat_poker_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat7 { get { return "Thùng phá sảnh này"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat8 { get { return "Tất tay đê!"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat9 { get { return "Liều ăn nhiều"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat10 { get { return "Tố láo này"; } }
	
	public override string gamescene_chatpanel_quickchat_lieng_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat7 { get { return "Sáp rồi =))"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat8 { get { return "Tất tay đê!"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat9 { get { return "Liều ăn nhiều"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat10 { get { return "Tố láo này"; } }
	
	public override string gamescene_chatpanel_quickchat_xito_chat1 { get { return "Nhanh lên thím"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat2 { get { return "Tăng cược lên nào"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat3 { get { return "Solo đi thím"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat4 { get { return "Hên thế!"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat5 { get { return "Đen vãi!"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat6 { get { return "Sẵn sàng nhanh nào"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat7 { get { return "Yếu còn ra gió =))"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat8 { get { return "Tất tay đê!"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat9 { get { return "Liều ăn nhiều"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat10 { get { return "Tố láo này"; } }

	public override string gamescene_msg_vtable { get { return "Ván chơi đang diễn ra, bạn sẽ tham gia ở ván tiếp theo!"; } }
	public override string gamescene_msg_change_setting { get { return "Bàn chơi vừa được thay đổi mức cược.!"; } }

	public override string gameplay_winer { get { return "Chiến Thắng"; } }
	public override string gameplay_win { get { return "Chiến Thắng"; } }
	public override string gameplay_four_of_two { get { return "Tứ Quý Heo"; } }
	public override string gameplay_five_straight_pairs { get { return "5 Đôi Thông"; } }
	public override string gameplay_six_pairs { get { return "6 Đôi"; } }
	public override string gameplay_royal_flush { get { return "Sảnh Rồng"; } }
	public override string gameplay_group_card_type_single { get { return "Mậu"; } }
	public override string gameplay_group_card_type_pair { get { return "Đôi"; } }
	public override string gameplay_group_card_type_twopair { get { return "Thú"; } }
	public override string gameplay_group_card_type_threeofakind { get { return (GameApplication.cubeia.gameId == GameType.LIENG) ? "Sáp": "Xám"; } }
	public override string gameplay_group_card_type_fivestraight { get { return "Sảnh"; } }
	public override string gameplay_group_card_type_fiveflush { get { return "Thùng"; } }
	public override string gameplay_group_card_type_fullhouse { get { return "Cù Lũ"; } }
	public override string gameplay_group_card_type_fourofakind { get { return "Tứ Quý"; } }
	public override string gameplay_group_card_type_fiveflushstraight { get { return "Thùng Phá Sảnh"; } }
	public override string gameplay_group_card_type_lieng { get { return "Liêng"; } }
	public override string gameplay_group_card_type_bodoi { get { return "Bộ đội"; } }
	public override string gameplay_group_card_type_unknown { get { return ""; } }

	public override string gameplay_tienlen_drop_turn { get { return "Bỏ Lượt"; } }

	public override string gameplay_poker_fold { get { return "Úp"; } }
	public override string gameplay_poker_checkfold { get { return "Theo/Úp"; } }
	public override string gameplay_poker_check { get { return "Xem Bài"; } }
	public override string gameplay_poker_call { get { return "Theo"; } }
	public override string gameplay_poker_allin { get { return "Theo Tất"; } }
	public override string gameplay_poker_callany { get { return "Theo Tất"; } }
	public override string gameplay_poker_request_allin { get { return "TẤT TAY ?"; } }
	public override string gameplay_poker_request_call { get { return "THEO %value1% ?"; } }
	public override string gameplay_poker_request_checkorbet { get { return "THEO hay CƯỢC ?"; } }
	public override string gameplay_poker_raise { get { return "Tố"; } }

	public override string gameplay_xito_request_pick_one_card { get { return "Chọn một cây bài"; } }

	public override string gameplay_lieng_result { get { return "%value1% Điểm"; } }

	public override string gameplay_xoso_result_time { get { return "Kết quả ngày %value1%"; } }
	public override string gameplay_xoso_bet_success { get { return "Đặt cược thành công!"; } }
	public override string gameplay_xoso_tab_result { get { return "Kết Quả"; } }
	public override string gameplay_xoso_tab_bet { get { return "Đặt Cược"; } }
	public override string gameplay_xoso_tab_intro { get { return "Giới Thiệu"; } }
	public override string gameplay_xoso_tab_top { get { return "Giải thưởng"; } }
	public override string gameplay_xoso_rank_0 { get { return "Đặc biệt"; } }
	public override string gameplay_xoso_rank_1 { get { return "Giải nhất"; } }
	public override string gameplay_xoso_rank_2 { get { return "Giải nhì"; } }
	public override string gameplay_xoso_rank_3 { get { return "Giải ba"; } }
	public override string gameplay_xoso_rank_4 { get { return "Giải tư"; } }
	public override string gameplay_xoso_rank_5 { get { return "Giải năm"; } }
	public override string gameplay_xoso_rank_6 { get { return "Giải sáu"; } }
	public override string gameplay_xoso_rank_7 { get { return "Giải bảy"; } }
	public override string gameplay_xoso_type { get { return "Thẻ:"; } }
	public override string gameplay_xoso_stake { get { return "Mức cược"; } }
	public override string gameplay_xoso_number { get { return "Số lựa chọn"; } }
	public override string gameplay_xoso_btn_bet { get { return "Đặt cược"; } }
	public override string gameplay_xoso_introduce_content { get { return "Kết quả lấy từ kết quả Xổ số Miền Bắc.\nThẻ X3.5: trúng giải khi trùng với 2 số bất kỳ giải nào của XS.Giải thưởng có mệnh giá bằng 3.5 lần mệnh giá của mức đặt cược.Nếu số bạn đặt cược xuất hiện ở nhiều giải khác nhau thì kết quả sẽ được nhân với số lần xuất hiện của số bạn đặt cược.\nThẻ X75: trúng giải khi trùng với 2 số cuối của giải đặc biệt XS.Giải thưởng có mệnh giá bằng 75 lần mệnh giá của mức đặt cược."; } }
	public override string gameplay_xoso_minstake_warning { get { return "Mức cược tối thiểu là %value1% " + GameApplication.COIN; } }

	public override string gameplay_mail_inbox {get { return "Thư đến"; }}
	public override string gameplay_mail_inbox_players {get { return "Người chơi"; }}
	public override string gameplay_mail_inbox_admin {get { return "Admin"; }}
	public override string gameplay_mail_compose {get { return "Soạn thư"; }}

	public override string gameplay_payment_card {get { return "Thẻ Cào"; }}
	public override string gameplay_payment_sms {get { return "SMS"; }}
	public override string gameplay_payment_atm {get { return "ATM"; }}
	public override string gameplay_payment_iap {get { return "IAP"; }}
	public override string gameplay_payment_rate {get { return "Tỷ giá"; }}

	//String LEADERBOARD
	public override string gameplay_leaderboard_tienlen{get { return "Tiến Lên";}}
	public override string gameplay_leaderboard_phom{get { return "Phỏm";}}
	public override string gameplay_leaderboard_xito{get { return "Xì tố";}}
	public override string gameplay_leaderboard_binh{get { return "Binh";}}
	public override string gameplay_leaderboard_sam{get { return "Sâm";}}
	public override string gameplay_leaderboard_lieng{get { return "Liêng";}}
	public override string gameplay_leaderboard_chan{get { return "Chắn";}}

	public override string gameplay_leaderboard_ngay{get { return "Ngày";}}
	public override string gameplay_leaderboard_tuan{get { return "Tuần";}}
	public override string gameplay_leaderboard_thang{get { return "Tháng";}}
	public override string gameplay_leaderboard_homqua{get { return "Hôm qua";}}
	public override string gameplay_leaderboard_giaithuong{get { return "Giải thưởng";}}

	public override string gameplay_news {get { return "Thông báo"; }}

	public override string gameplay_help_rules {get { return "Luật chơi"; }}
	public override string gameplay_help_dieukhoan {get { return "Điều khoản"; }}
	public override string gameplay_help_huongdan {get { return "Hướng dẫn"; }}

	public override string gameplay_payment_card_pin {get { return "PIN"; }}
	public override string gameplay_payment_card_serial {get { return "Serial"; }}
	public override string gameplay_payment_card_buy {get { return "Nạp"; }}

	public override string common_retry { get { return "Thử lại"; } }
	public override string common_network_error { get { return "Đường truyền mạng yếu"; } }
	public override string common_network_lost_connection { get { return "Mất kết nối với máy chủ"; } }
	public override string common_waitingdialog_loading { get { return "đang tải dữ liệu..."; } }
	public override string common_tableoptions_title { get { return "TẠO BÀN"; } }
	public override string common_tableoptions_stake_text { get { return "Mức cược"; } }
	public override string common_tableoptions_create_button_text { get { return "Tạo Bàn"; } }
	public override string common_tableoptions_create_button_sonnguoichoi { get { return "Số người chơi"; } }

	public override string dialog_common_require_internet { get { return GameApplication.gameName + " không thể kết nối đến máy chủ, vui lòng kiểm tra lại đường truyền internet. Error: " + GameApplication.versionname; } }
	public override string dialog_common_ok { get { return "Đồng Ý"; } }
	public override string dialog_common_cancel { get { return "Hủy"; } }
	public override string dialog_common_reconnect { get { return "Kết nối lại"; } }
	public override string dialog_common_signout { get { return "Đăng xuất"; } }
	public override string dialog_common_deny { get { return "Từ chối"; } }
	public override string dialog_common_deny_all { get { return "Từ chối tất cả"; } }
	public override string dialog_common_accept { get { return "Chấp nhận"; } }
	public override string dialog_common_tableoptions_error_not_enough_gold { get { return "Bạn ko có đủ gold hoặc vip để tạo bàn này"; } }
	public override string dialog_common_notify_mail_admin { get { return "Bạn có thư đến. Bạn có muốn xem ngay không?"; } }
	public override string dialog_common_notify_mail_transfer_gold { get { return "Bạn nhận được thư chuyển tiền. Bạn có muốn xem ngay không?"; } }
	public override string dialog_common_notify_new_mail { get { return "Bạn vừa nhận được thư mới!"; } }

	public override string dialog_common_join_game_not_enough_gold {
		get { 
			return "Bạn cần có ít nhất %gold% để tham gia bàn chơi này. Bạn có thể chọn cách nạp Gold hoặc mời bạn bè cùng chơi " 
				+ GameApplication.gameName + " để nhận được " + GameApplication.COIN + " thưởng của ban quản trị."; 
		}
	}
	public override string dialog_common_join_game_dialog_op1 { get { return "Đồng Ý"; } }
	public override string dialog_common_join_game_dialog_op2 { get { return "Mời bạn"; } }
	public override string dialog_common_join_game_dialog_op3 { get { return "Nạp " + GameApplication.COIN; } }

	public override string dialog_alert_lackof_info { get { return "Bạn hãy nhập đủ thông tin vào các trường trước khi gửi!"; } }
	public override string dialog_alert_payment_miss_provider { get { return "Bạn hãy chọn loại thẻ!"; } }
	public override string dialog_alert_payment_miss_pin { get { return "Bạn hãy nhập mã PIN!"; } }
	public override string dialog_alert_payment_miss_serial { get { return "Bạn hãy nhập số serial!"; } }

	public override string error1 { get { return "Có lỗi khi vào bàn"; } }
	public override string error2 { get { return "Bàn đã hết chỗ trống. Bạn vui lòng chọn bàn khác!"; } }
	public override string error3 { get { return "Bàn đã hủy. Bạn vui lòng chọn bàn khác!"; } }

	public override string error_payment_card_OK { get { return "Nạp thẻ thành công!"; } }
	public override string error_payment_card_cant_do_request { get { return "Có lỗi xảy ra khi thực hiện thanh toán!"; } }
	public override string error_payment_card_wrong_info { get { return "Sai mã nạp thẻ hoặc số serial!"; } }
	public override string error_payment_card_has_been_used { get { return "Thẻ đã được sử dụng!"; } }
	public override string error_payment_card_invalid { get { return "Thông tin thẻ nạp không hợp lệ!"; } }
	public override string error_payment_card_banned_account { get { return "Tài khoản của bạn bị tạm khóa!"; } }

	public override string ingame_common_kick { get { return "Bạn đã bị đuổi khỏi bàn chơi"; } }
	public override string ingame_common_request_kick { get { return "Bạn có muốn đuổi người chơi này ra khỏi bàn?"; } }
	public override string ingame_common_deny_kick { get { return "Bạn không thể kick người chơi này."; } }
	public override string ingame_common_configchange { get { return "Thiết lập bàn chơi thay đổi!"; } }
	public override string ingame_common_kick_not_enough_gold { 
		get { 
			return "Bạn bị mời ra khỏi bàn vì không còn đủ " + GameApplication.COIN + 
					" để chơi tiếp ở mức cược này. Bạn có thể chọn cách nạp Gold hoặc mời bạn bè cùng chơi " + GameApplication.gameName + 
					" để nhận được " + GameApplication.COIN + " thưởng của ban quản trị."; 
		}
	}
	public override string ingame_common_force_leave_game_dialog_op1 { get { return "Về phòng chờ"; } }
	public override string ingame_common_force_leave_game_dialog_op2 { get { return "Mời bạn"; } }
	public override string ingame_common_force_leave_game_dialog_op3 { get { return "Nạp " + GameApplication.COIN; } }

	//******************************Binh********************************
	public override string gameplay_binh_sobai { get { return "So Bài"; } }
	public override string gameplay_binh_xepbai { get { return "Xếp Bài"; } }
	public override string gameplay_binh_doichi { get { return "Đổi Chi"; } }
	public override string gameplay_binh_solai { get { return "Xếp Lại"; } }

	public override string gameplay_binh_mb_sanhrongdonghoa { get { return "Sảnh Rồng Đồng Hoa"; } }
	public override string gameplay_binh_mb_sanhrong { get { return "Mậu Binh Sảnh Rồng"; } }
	public override string gameplay_binh_mb_donghoa { get { return "Mậu Binh Đồng Hoa"; } }
	public override string gameplay_binh_mb_saudoi { get { return "Mậu Binh 6 Đôi"; } }
	public override string gameplay_binh_mb_bathung { get { return "Mậu Binh 3 Thùng"; } }
	public override string gameplay_binh_mb_basanh { get { return "Mậu Binh 3 Sảnh"; } }

	public override string gameplay_binh_thungphasanh { get { return "Thùng phá sảnh"; } }
	public override string gameplay_binh_tuquy { get { return "Tứ quý"; } }
	public override string gameplay_binh_culu { get { return "Cù lũ"; } }
	public override string gameplay_binh_thung { get { return "Thùng"; } }
	public override string gameplay_binh_sanh { get { return "Sảnh"; } }
	public override string gameplay_binh_xam { get { return "Xám"; } }
	public override string gameplay_binh_thu { get { return "Thú"; } }
	public override string gameplay_binh_doi { get { return "Đôi"; } }
	public override string gameplay_binh_mau { get { return "Mậu"; } }
	public override string gameplay_binh_binhlung { get { return "Binh Lủng"; } }

	public override string win { get { return "Thắng"; } }
	public override string lose { get { return "Thua"; } }

	public override string binhPlayer { get { return "Người chơi"; } }
	public override string binhResult { get { return "Kết quả"; } }
	//*********************************SAM**********************************
	public override string strXinSam { get { return "Xin Sâm!"; } }
	public override string strKhongSam { get { return "Không Sâm!"; } }

	public override string xocdia_lamcai { get { return "Làm cái"; } }
	public override string xocdia_status { get { return "Bắt đầu đặt cược!"; } }
	public override string xocdia_status0 { get { return "Ván chơi chưa bắt đầu!"; } }
	public override string xocdia_status1 { get { return "Đang trong thời gian đặt cược!"; } }
	public override string xocdia_status2 { get { return "/Name/ bán /gold/ cửa /1/!"; } }
	public override string xocdia_status3 { get { return "Đang trong thời gian bán cửa!"; } }
	public override string xocdia_huycuoc { get { return "Hủy cược"; } }
	public override string xocdia_datlai { get { return "Đặt lại"; } }
	public override string xocdia_datx2 { get { return "Đặt X2"; } }
	public override string xocdia_muacua { get { return "Mua cửa"; } }
	public override string xocdia_bancua { get { return "Bán cửa"; } }
	public override string xocdia_huybancua { get { return "Hủy bán cửa"; } }
	public override string xocdia_chan { get { return "Chẵn"; } }
	public override string xocdia_le { get { return "Lẻ"; } }
	public override string xocdia_msg_lamcai { get { return "/Name/ làm cái!"; } }
	public override string xocdia_msg_muacua { get { return "/Name/ mua /gold/ cửa /1/!"; } }
	public override string xocdia_msg_bancua { get { return "Bắt đầu bán cửa!"; } }
	public override string quahangngay { get { return "QUÀ ĐĂNG NHẬP"; } }
	public override string quahangngay_day1 { get { return "Ngày 1"; } }
	public override string quahangngay_day2 { get { return "Ngày 2"; } }
	public override string quahangngay_day3 { get { return "Ngày 3"; } }
	public override string quahangngay_day4 { get { return "Ngày 4"; } }
	public override string quahangngay_day5 { get { return "Ngày 5++"; } }
	public override string updateInfo { get { return "Cập nhập thông tin thành công!"; } }
	public override string person_info { get { return "Thông tin"; } }
	public override string person_avatar { get { return "Avatar"; } }
	public override string person_info_sdt { get { return "Số điện thoại(*)"; } }
	public override string person_info_name { get { return "Họ tên"; } }
	public override string person_info_update { get { return "Cập nhật"; } }
	public override string person_info_note1 { get { return "- Số điện thoại dùng để xác thực quyền sở hữu của bạn đối với tài khoản này, vì vậy chỉ được nhập 1 lần duy nhất, không được phép thay đổi. Bạn hãy nhập một cách chính xác số điện thoại của mình để bảo đảm quyền lợi của bạn trong tương lai."; } }
	public override string person_info_note2 { get { return "- Khi bạn quên mật khẩu, hãy báo với admin của game (GAME), chúng tôi sẽ gửi lại mật khẩu của bạn vào số điện thoại mà bạn đã đăng ký."; } }
	public override string person_avatar_ok { get { return "Đổi avatar thành công!"; } }
	public override string person_avatar_failed { get { return "Đổi avatar thất bại!"; } }
	public override string xocdia_huycai { get { return "Hủy cái"; } }
	public override string cashout_thecao { get { return "Thẻ cào"; } }
	public override string cashout_vatpham { get { return "Vật phẩm"; } }
	public override string bongda_live { get { return "Đang diễn ra"; } }
	public override string bongda_history { get { return "Lịch sử cược"; } }
	public override string bongda_top { get { return "Thắng lớn"; } }
	public override string bongda_error1 { get { return "Bạn cần đặt cược"; } }
	public override string common_setting_invite { get { return "Nhận lời mời"; } }
	public override string chatroom_all { get { return "Tất cả"; } }
	public override string chatroom_game { get { return "Game"; } }
	public override string chatroom_thegioi { get { return "Thế giới"; } }
	public override string chatroom_rieng { get { return "Riêng"; } }

	public override string gameplay_dummy_chose_one_card { get { return "Chọn một cây bài để đánh"; } }
	public override string gameplay_dummy_warn_gui { get { return "Cây bài này gửi được phỏm. Bạn sẽ bị trừ điểm nếu đánh cây bài này."; } }
	public override string gameplay_dummy_warn_ha { get { return "Cây bài này ghép được phỏm trên bàn. Bạn sẽ bị trừ điểm nếu đánh cây bài này."; } }
	public override string gameplay_dummy_btn_boc { get { return "Bốc"; } }
	public override string gameplay_dummy_btn_danh { get { return "Đánh"; } }
	public override string gameplay_dummy_btn_gui { get { return "Gửi"; } }
	public override string gameplay_dummy_btn_ha { get { return "Hạ"; } }
	public override string gameplay_dummy_btn_confirm { get { return "Confirm"; } }
	public override string gameplay_dummy_btn_cancel { get { return "Cancel"; } }
	public override string gameplay_dummy_finish_detail_str1 { get { return "Bài trên tay"; } }
	public override string gameplay_dummy_finish_detail_str2 { get { return "Bài hạ được"; } }
	public override string gameplay_dummy_finish_detail_str3 { get { return "Điểm thưởng"; } }
	public override string gameplay_dummy_btn_ungay { get { return "Hạ Ù"; } }

	public override string gameplay_siam_btn_sansang { get { return "Sẵn sàng"; } }
	public override string gameplay_siam_btn_batdau { get { return "Bắt đầu"; } }
	public override string gameplay_siam_btn_chitiet { get { return "Chi tiết"; } }

	public override string gameplay_invite_player { get { return "Mời người chơi"; } }
	public override string gameplay_no_find_player { get { return "Không tìm được người chơi"; } }	

	public override string transition_scene_loading { get { return "Đang tải bàn chơi…"; } }
	public override string free_gold { get { return "Gold miễn phí"; } }
	public override string common_gift_money{get{return "%Game% gửi tặng bạn %1000% %Gold%.Chúc bạn chơi game vui vẻ!";}}

	public override string lobby_room1{get{return "Phòng\n1";}}
	public override string lobby_room2{get{return "Phòng\n2";}}
	public override string lobby_room3{get{return "Phòng\n3";}}
	public override string lobby_room4{get{return "Phòng\n4";}}
	
	public override string lobby_game_name_dummy{get{return "Dummy";}}
	public override string lobby_game_name_poker{get{return "Poker";}}
	public override string lobby_game_name_poker9k{get{return "Poker9k";}}
	public override string lobby_game_name_xocdia{get{return "Xóc đĩa";}}
}

public class Strings_TH : Strings
{
	public override string getLocalString(string input){
		string startTag = "<th>";
		string endTag = "</th>";
		
		int startIndex = input.IndexOf(startTag) + 4;
		int endIndex = input.IndexOf(endTag);
		
		if(endIndex < 0 || startIndex < 4)
			return input;
		
		return input.Substring(startIndex, endIndex-startIndex);
	}
	
	public override Sprite flag { get { return Resources.Load<Sprite>("Textures/flags/flag_th"); } }
	public override string common_change_language { get { return "ท่านเลือกภาษาไทย"; } }
	public override string common_confirm_quit_app { get { return "ท่านอยากออกจากเกมหรือไม่"; } }
	public override string common_confirm_quit_app_ok { get { return "ออกจากเกม"; } }
	public override string common_confirm_quit_app_cancel { get { return "ยกเลิก"; } }
	public override string common_confirm_signout_msg { get { return "ท่านอยากออกจากบัญชีหรือไม่" + GameApplication.user.name + "?"; } }
	public override string common_confirm_payment_sms { get { return "ท่านอยากซื้อ % value% ราคา %cost% หรือไม่"; } }
	
	public override string common_login_error_1 { get { return "ท่านกำลังอยู่ในโต๊ะ"; } }
	public override string common_login_error_2 { get { return "ท่านต้องใส่ข้อมูลล็อกอินให้ครบ"; } }
	public override string common_login_error_3 { get { return "รหัสผ่านหรือบัญชีไม่ถูกต้อง"; } }
	public override string common_login_error_4 { get { return "ท่านถูกล็อคบัญชีเพราะทำผิดกติกาเกมเกม"; } }
	public override string common_login_error_5 { get { return "มีปัญหาการเชื่อมต่อ"; } }
	public override string common_login_error_6 { get { return "เกิดข้อผิดพลาดในการล็อกอินเฟสบุ๊ค"; } }
	
	public override string common_sign_error { get { return "เกิดข้อผิดพลาดในการล็อกอิน"; } }
	public override string common_comming_soon { get { return "กำลังพัฒนาอยู่"; } }
	public override string common_uplevel { get { return "ยินดีด้วยที่ท่านได้เป็น VIP 1"; } }
	public override string common_message_invite_join_game { get { return "ผู้เล่น%value1% %value2%\nค่าเดิมพัน: %value3% \n ได้เชิญท่านเข้าร่วมโต๊ะ"; } }
	
	public override string common_setting_language { get { return "ภาษา"; } }
	public override string common_setting_choselanguage { get { return "เลือกภาษา"; } }
	public override string common_setting_developer { get { return "ผู้พัฒนา"; } }
	public override string common_setting_debuglog { get { return "Debug log"; } }
	public override string common_setting_version { get { return "เวอร์ชั่น"; } }
	public override string common_setting_account { get { return "บัญชี"; } }
	public override string common_setting_rememberaccount { get { return "จดจำบัญชี"; } }
	public override string common_setting_accountinfo { get { return "ข้อมูลบัญชี"; } }
	public override string common_setting_reconnect { get { return "เชื่อมต่ออีกครั้ง"; } }
	public override string common_setting_signout { get { return "ออกจากบัญชี"; } }
	public override string common_setting_exit { get { return "ออกจากเกม"; } }
	public override string common_setting_help { get { return "ช่วยเหลือ"; } }
	public override string common_setting_faq { get { return "FAQ"; } }
	public override string common_setting_fanpage { get { return "แฟนเพจ"; } }
	public override string common_setting_game_rules { get { return "กติกาการเล่น"; } }
	public override string common_setting_feedback { get { return "ฟิดแบค"; } }
	public override string common_setting_gameoptions { get { return "ตั้งค่า"; } }
	public override string common_setting_music { get { return "ดนตรี"; } }
	public override string common_setting_sound { get { return "เสียง"; } }
	public override string common_setting_vibrate { get { return "สั่น"; } }
	public override string common_setting_notification { get { return "รับ Goldข่าวสาร"; } }
	
	public override string common_setting_accinfo_title { get { return "ข้อมูลบัญชี"; } }
	public override string common_setting_accinfo_lb_accid { get { return "ไอดีผู้เล่น"; } }
	public override string common_setting_accinfo_lb_devid { get { return "ไอดีอุปกรณ์"; } }
	
	public override string common_noti_get_gold { get { return "ท่านได้รับ Gold %value%"; } }
	
	public override string stabs_mail_reply {get{return "ตอบ";}}
	public override string stabs_mail_delete {get{return "ลบข้อความ ";}}
	public override string stabs_mail_getgold {get{return "รับ Gold";}}
	public override string stabs_mail_send {get{return "ส่งข้อความ";}}
	public override string stabs_mail_placeholder_to {get{return "ผู้รับ Gold";}}
	public override string stabs_mail_placeholder_content {get{return "ข้อความ";}}
	public override string stabs_mail_delete_mail_confirm {get{return "ท่านแน่ใจที่จะลบข้อความนี้หรือไม่";}}
	
	public override string stabs_title_bank_get {get{return "รับ Gold";}}
	public override string stabs_title_bank_transfer {get{return "โอน Gold";}}
	public override string stabs_bank_acc {get{return "โอนถึงบัญชี";}}
	public override string stabs_bank_value {get{return "จำนวน Gold: ";}}
	public override string stabs_bank_fee {get{return "ค่าธรรมเนียม :  ";}}
	public override string stabs_bank_select {get{return "เลือกจำนวน Gold อยากโอน";}}
	public override string stabs_bank_btn_confirm {get{return "ตกลง";}}
	public override string stabs_bank_error {get{return "ใส่ชื่อผู้รับ Goldและจำนวนเงินที่โอน";}}
	
	public override string login_error_disable_game { get { return "กำลังปรับปรุงหรืออัพเดต ..."; } }
	
	public override string home_dialog_reg_name_tile { get { return "ตั้งชื่อตัวละคร"; } }
	public override string home_dialog_reg_placeholder { get { return "ใส่ชื่อ"; } }
	public override string home_dialog_reg_text_button_reg { get { return "สมัคร"; } }
	public override string home_dialog_reg_loading { get { return "กำลังโหลด..."; } }
	public override string home_dialog_reg_rules { get { return "ชื่อผู้เล่นต้องมี 6 ถึง 30 ตัวอักษร ประกอบด้วย:\nA-Z, a-z, จุด \".\" และและขีดล่าง \"_\"."; } }
	public override string home_dialog_reg_success { get { return "ตั้งชื่อตัวละครสำเร็จแล้ว"; } }
	
	public override string lobby_quickjoin { get { return "เล่นทันที"; } }
	public override string lobby_newtable { get { return "สร้างโต๊ะ"; } }
	public override string lobby_jointable { get { return "เข้าโต๊ะ"; } }
	public override string lobby_tablelist_name { get { return "ชื่อโต๊ะ"; } }
	public override string lobby_tablelist_id { get { return "ID"; } }
	public override string lobby_tablelist_stake { get { return "ค่าเดิมพัน"; } }
	public override string lobby_tablelist_load { get { return "จำนวนผู้เล่น"; } }
	public override string lobby_message_cant_join_free_room { get { return "ห้องฟรีสำหรับผู้เล่นมีทรัพย์สิน ต่ำกว่า %value1% เท้านั้น ! กรุณาเลือกห้องอื่น"; } }
	public override string lobby_dialog_join_table_placeholder { get { return "ใส่หมายเลขโต๊ะ"; } }
	public override string lobby_dialog_join_table_join { get { return "เข้าโต๊ะ"; } }
	public override string lobby_newtable_account_balance { get { return "ทรัพย์สินของท่าน: "; } }
	public override string lobby_newtable_player { get { return "ผู้เล่น"; } }
	
	public override string loginscene_normal_login_button { get { return "ล็อกอิน"; } }
	public override string loginscene_normal_signup_button { get { return "สมัคร"; } }
	public override string loginscene_normal_forgetpass { get { return "ลืมรหัสผ่าน"; } }
	public override string loginscene_guestlogin { get { return "ลองเล่น"; } }
	public override string loginscene_logintogame_withfbacc { get { return "ล็อกอินผ่านบัญชีเฟสบุ๊คนี้"; } }
	public override string loginscene_fb_lougout { get { return "ออกจากเฟสบุ๊ค"; } }
	public override string loginscene_label_name { get { return "บัญชี"; } }
	public override string loginscene_label_pass { get { return "รหัสผ่าน"; } }
	public override string loginscene_label_repeatpass { get { return "ใส่รหัสผ่านอีกครั้ง"; } }
	public override string loginscene_warning_fill_all_fields { get { return "กรุณาใส่ข้อมูลให้ครบถ้วน"; } }
	public override string loginscene_warning_repeat_pass_doesnt_match { get { return "ใส่รหัสผ่านอีกครั้งไม่ถูกต้อง"; } }
	public override string loginscene_warning_name_too_short { get { return "ชื่อล็อกอินต้องมีความยาวอย่างน้อย 6 ตัวอักษร"; } }
	
	public override string gamescene_gameinfo_table { get { return "โต๊ะ"; } }
	public override string gamescene_gameinfo_stake { get { return "เดิมพัน"; } }
	public override string gamescene_chatpanel_send { get { return "ส่ง"; } }
	public override string gamescene_chatpanel_placeholder_enter_text { get { return "ใส่ข้อความ"; } }
	public override string gamescene_chatpanel_quickchat_chat1 { get { return "สวัสดีจ้าทุกคน"; } }
	public override string gamescene_chatpanel_quickchat_chat2 { get { return "ลาก่อนนะ จะไปแล้ว"; } }
	public override string gamescene_chatpanel_quickchat_chat3 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_chat4 { get { return "เน็ตแลคมากเลยอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_chat5 { get { return "รีบเลย เด๋วเวลาหมด"; } }
	public override string gamescene_chatpanel_quickchat_chat6 { get { return "อ่อนจุงเบย :)"; } }
	public override string gamescene_chatpanel_quickchat_chat7 { get { return "แพ้ก็อย่าว่าสถานการณ์ไม่ดีนะ ครีๆ"; } }
	public override string gamescene_chatpanel_quickchat_chat8 { get { return "เล่นน้อยเกินไม่มันเลย"; } }
	public override string gamescene_chatpanel_quickchat_chat9 { get { return "เล่นโง่จุงเบย"; } }
	public override string gamescene_chatpanel_quickchat_chat10 { get { return "คู่หรือคี่นะ"; } }
	
	public override string gamescene_chatpanel_quickchat_xocdia_chat1 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat2 { get { return "ดวงไม่ดีเลยอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat3 { get { return "คู่ๆๆๆ"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat4 { get { return "คี่ๆๆๆ"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat5 { get { return "ซื้อเลย ๆ"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat6 { get { return "แสดงความเสียใจด้วย ~"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat7 { get { return "เป็นเศรษฐีไม่ยาก :))"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat8 { get { return "ซวยเลย =))"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat9 { get { return "จะได้กินหรือเสียกันแน่"; } }
	public override string gamescene_chatpanel_quickchat_xocdia_chat10 { get { return "เจออีกแล้ว"; } }
	
	public override string gamescene_chatpanel_quickchat_chan_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat2 { get { return "รอนานแล้วนะ"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat3 { get { return "ใจเย็นนะ"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat4 { get { return "เก่งนะเนี่ย"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat5 { get { return "เล่นกับคุณสนุกมากเลย"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat6 { get { return "น็อคอีกแล้วๆ =))"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat7 { get { return "ฝีมือสุดยอดเลย"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat8 { get { return "มือใหม่จ้า"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat9 { get { return "รอไม่ไหวแล้ว"; } }
	public override string gamescene_chatpanel_quickchat_chan_chat10 { get { return "เล่นโง่จุงเบย"; } }
	
	public override string gamescene_chatpanel_quickchat_tienlen_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat7 { get { return "ไปละ เด๋วมาใหม่"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat8 { get { return "เอาไงดี"; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat9 { get { return "ไพ่ไม่สวยเลย :("; } }
	public override string gamescene_chatpanel_quickchat_tienlen_chat10 { get { return "โอ้ยตายๆแล้ว :3"; } }
	
	public override string gamescene_chatpanel_quickchat_sam_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat7 { get { return "ไปละ เด๋วมาใหม่"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat8 { get { return "เอาไงดี :v"; } }
	public override string gamescene_chatpanel_quickchat_sam_chat9 { get { return "ไพ่ไม่สวยเลย :("; } }
	public override string gamescene_chatpanel_quickchat_sam_chat10 { get { return "อย่าเพิ่งไป สู้ต่อนะ"; } }
	
	public override string gamescene_chatpanel_quickchat_tala_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat7 { get { return "ซวยแล้ว  :(("; } }
	public override string gamescene_chatpanel_quickchat_tala_chat8 { get { return "มาแล้วๆ :v"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat9 { get { return "ขออีกใบ"; } }
	public override string gamescene_chatpanel_quickchat_tala_chat10 { get { return "จะน็อคแล้วนะ =))"; } }
	
	public override string gamescene_chatpanel_quickchat_binh_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat7 { get { return "รอนานแล้วนะ"; } }
	public override string gamescene_chatpanel_quickchat_binh_chat8 { get { return " ตายแล้ว :("; } }
	public override string gamescene_chatpanel_quickchat_binh_chat9 { get { return "เกือบโฟร์การ์ด :(( "; } }
	public override string gamescene_chatpanel_quickchat_binh_chat10 { get { return "ไพ่เน่ามาก"; } }
	
	public override string gamescene_chatpanel_quickchat_poker_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat7 { get { return "สเตรทฟลัชหรอจะ "; } }
	public override string gamescene_chatpanel_quickchat_poker_chat8 { get { return "All in เลย"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat9 { get { return "ต้องเสี่ยงจะได้กินเยอะ"; } }
	public override string gamescene_chatpanel_quickchat_poker_chat10 { get { return "ลักไก่หรอจะ"; } }
	
	public override string gamescene_chatpanel_quickchat_lieng_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat7 { get { return "ได้ตองแล้ว =))"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat8 { get { return "All in เลย"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat9 { get { return "ต้องเสี่ยงจะได้กินเยอะ"; } }
	public override string gamescene_chatpanel_quickchat_lieng_chat10 { get { return "ลักไก่หรอจะ"; } }
	
	public override string gamescene_chatpanel_quickchat_xito_chat1 { get { return "ขอเร็วๆหน่อย"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat2 { get { return "แทงเยอะๆเลย"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat3 { get { return "จัดไป"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat4 { get { return "โชคดีเกินไปละ"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat5 { get { return "ซวยมากอ่ะ"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat6 { get { return "พร้อมยังจ้ะ"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat7 { get { return "อ่อนจุงเบย =))"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat8 { get { return "All in เลย"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat9 { get { return "ต้องเสี่ยงจะได้กินเยอะ"; } }
	public override string gamescene_chatpanel_quickchat_xito_chat10 { get { return "ลักไก่หรอจะ"; } }
	
	public override string gamescene_msg_vtable { get { return "กำลังเล่นอยู่ ท่านต้องรอรอบต่อไปจ้ะ"; } }
	public override string gamescene_msg_change_setting { get { return "โต๊ะมีการเปลี่ยนค่าเดิมพันแล้ว"; } }
	
	public override string gameplay_winer { get { return "ชนะ"; } }
	public override string gameplay_win { get { return "ชนะ"; } }
	public override string gameplay_four_of_two { get { return "โฟร์การ์ดสอง"; } }
	public override string gameplay_five_straight_pairs { get { return "ห้าคู่เรียง"; } }
	public override string gameplay_six_pairs { get { return "6 คู่"; } }
	public override string gameplay_royal_flush { get { return "รอยัลสเตทฟลัช"; } }
	public override string gameplay_group_card_type_single { get { return "ไพ่สูง"; } }
	public override string gameplay_group_card_type_pair { get { return "1 คู"; } }
	public override string gameplay_group_card_type_twopair { get { return "2 คู"; } }
	public override string gameplay_group_card_type_threeofakind { get { return "ตอง"; } }
	public override string gameplay_group_card_type_fivestraight { get { return " เรียง"; } }
	public override string gameplay_group_card_type_fiveflush { get { return "ฟลัช"; } }
	public override string gameplay_group_card_type_fullhouse { get { return " ฟูลเฮ้าส์"; } }
	public override string gameplay_group_card_type_fourofakind { get { return "โฟร์การ์ด"; } }
	public override string gameplay_group_card_type_fiveflushstraight { get { return "สเตรทฟลัช"; } }
	public override string gameplay_group_card_type_lieng { get { return "Liêng"; } }
	public override string gameplay_group_card_type_bodoi { get { return "ไพ่เซียน"; } }
	public override string gameplay_group_card_type_unknown { get { return ""; } }
	
	public override string gameplay_tienlen_drop_turn { get { return "ผ่าน"; } }
	
	public override string gameplay_poker_fold { get { return "หมอบ"; } }
	public override string gameplay_poker_checkfold { get { return "สู้/หมอบ"; } }
	public override string gameplay_poker_check { get { return "ดูไพ่"; } }
	public override string gameplay_poker_call { get { return "สู้"; } }
	public override string gameplay_poker_allin { get { return "สู้ทุกตา"; } }
	public override string gameplay_poker_callany { get { return "สู้ทุกตา"; } }
	public override string gameplay_poker_request_allin { get { return "เทหน้าตัก ?"; } }
	public override string gameplay_poker_request_call { get { return "ตาม %value1% ?"; } }
	public override string gameplay_poker_request_checkorbet { get { return "สู้หรือเกทับ"; } }
	public override string gameplay_poker_raise { get { return "เก"; } }
	
	public override string gameplay_xito_request_pick_one_card { get { return "เลือกไพ่หนึ่งใบ"; } }
	
	public override string gameplay_lieng_result { get { return "%value1% คะแนน"; } }
	
	public override string gameplay_xoso_result_time { get { return "ผลวันที่ %value1%"; } }
	public override string gameplay_xoso_bet_success { get { return "เดิมพันสำเร็จแล้ว"; } }
	public override string gameplay_xoso_tab_result { get { return "ผล"; } }
	public override string gameplay_xoso_tab_bet { get { return "เดิมพัน"; } }
	public override string gameplay_xoso_tab_intro { get { return "แนะนำ"; } }
	public override string gameplay_xoso_tab_top { get { return "รางวัล"; } }
	public override string gameplay_xoso_rank_0 { get { return "พิเศษ"; } }
	public override string gameplay_xoso_rank_1 { get { return "รางวัลที่ 1"; } }
	public override string gameplay_xoso_rank_2 { get { return "รางวัลที่ 2"; } }
	public override string gameplay_xoso_rank_3 { get { return "รางวัลที่ 3"; } }
	public override string gameplay_xoso_rank_4 { get { return "รางวัลที่ 4"; } }	
	public override string gameplay_xoso_rank_5 { get { return "รางวัลที่ 5"; } }
	public override string gameplay_xoso_rank_6 { get { return "รางวัลที่ 6"; } }
	public override string gameplay_xoso_rank_7 { get { return "รางวัลที่ 7"; } }
	public override string gameplay_xoso_type { get { return "บัตร"; } }
	public override string gameplay_xoso_stake { get { return "ค่าเดิมพัน"; } }
	public override string gameplay_xoso_number { get { return "ตัวเลขที่เลือก"; } }
	public override string gameplay_xoso_btn_bet { get { return "เดิมพัน"; } }
	public override string gameplay_xoso_introduce_content { get { return "ผลลอตเตอรี่เอามาจากผลลอตเตอรี่ภาคเหนือ .\n บัตร X3.5: หากมีเลขสองตัวตรงกับผลลอตเตอรี่ของทุกๆรางวัลถือว่าท่านถูกลอตเตอรี่ รางวัลที่ได้รับ Goldเท่ากับ 3.5 เท่าของเงินที่เดิมพัน หากตัวเลขที่ท่านซื้อถูกหลายๆรางวัลผลคือคุณกับจำนวนครั้งที่ตัวเลขนั้นออก .\n บัตร X75 หากตัวเลขที่ซื้อตรงกับสองตัวท้ายของรางวัลพิเศษถือว่าท่านถูกลอตเตอรี่ รางวันได้รับ Goldเท่ากับ 75 เท่าของเงินที่เดิมพัน"; } }
	public override string gameplay_xoso_minstake_warning { get { return "เดิมพันขั้นต่ำ %value1% " + GameApplication.COIN;} }
	
	public override string gameplay_mail_inbox {get { return "ข้อความที่รับ"; }}
	public override string gameplay_mail_inbox_players {get { return "ผู้เล่น"; }}
	public override string gameplay_mail_inbox_admin {get { return "แอดมิน"; }}
	public override string gameplay_mail_compose {get { return "เขียน"; }}
	
	public override string gameplay_payment_card {get { return "บัตรเติมเงิน"; }}
	public override string gameplay_payment_sms {get { return "ข้อความ"; }}
	public override string gameplay_payment_atm {get { return "ATM"; }}
	public override string gameplay_payment_iap {get { return "IAP"; }}
	public override string gameplay_payment_rate {get { return "อัตราแลกเปลี่ยน"; }}
	
	//String LEADERBOARD
	public override string gameplay_leaderboard_tienlen{get { return "ไพ่สลาฟ";}}
	public override string gameplay_leaderboard_phom{get { return "Phỏm";}}
	public override string gameplay_leaderboard_xito{get { return "ไพ่เท็กซัส";}}
	public override string gameplay_leaderboard_binh{get { return "ไพ่ 13ใบ";}}
	public override string gameplay_leaderboard_sam{get { return "Sâm";}}
	public override string gameplay_leaderboard_lieng{get { return "Liêng";}}
	public override string gameplay_leaderboard_chan{get { return "Chắn";}}
	
	public override string gameplay_leaderboard_ngay{get { return "วัน";}}
	public override string gameplay_leaderboard_tuan{get { return "สัปดาห์";}}
	public override string gameplay_leaderboard_thang{get { return "เดือน";}}
	public override string gameplay_leaderboard_homqua{get { return "เมื่อวาน";}}
	public override string gameplay_leaderboard_giaithuong{get { return "รางวัล";}}
	
	public override string gameplay_news {get { return "ประกาศ "; }}
	
	public override string gameplay_help_rules {get { return "กติกาการเล่น"; }}
	public override string gameplay_help_dieukhoan {get { return "ข้อกำหนด"; }}
	public override string gameplay_help_huongdan {get { return "คู่มือการเล่น"; }}
	
	public override string gameplay_payment_card_pin {get { return "PIN"; }}
	public override string gameplay_payment_card_serial {get { return "Serial"; }}
	public override string gameplay_payment_card_buy {get { return "เติม"; }}
	
	public override string common_retry { get { return "ลองใหม่อีกครั้ง"; } }
	public override string common_network_error { get { return "การเชื่อมต่อเน็ตไม่ดี"; } }
	public override string common_network_lost_connection { get { return " ไม่สามารถเชื่อมต่อเซิร์ฟเวอร์ "; } }
	public override string common_waitingdialog_loading { get { return "กำลังโหลด..."; } }
	public override string common_tableoptions_title { get { return "สร้างโต๊ะ"; } }
	public override string common_tableoptions_stake_text { get { return "ค่าเดิมพัน"; } }
	public override string common_tableoptions_create_button_text { get { return "สร้างโต๊ะ"; } }
	public override string common_tableoptions_create_button_sonnguoichoi { get { return "จำนวนผู้เล่น"; } }
	
	public override string dialog_common_require_internet { get { return GameApplication.gameName + "ไม่สามารถเชื่อมต่อเซิร์ฟเวอร์ กรุณาตรวจสอบการเชื่อมต่อเน็ตของท่าน Gold. Error: " + GameApplication.versionname ; } }
	public override string dialog_common_ok { get { return "ตกลง"; } }
	public override string dialog_common_cancel { get { return "ยกเลิก"; } }
	public override string dialog_common_reconnect { get { return "เชื่อมต่อใหม่"; } }
	public override string dialog_common_signout { get { return "ออกจากระบบ"; } }
	public override string dialog_common_deny { get { return "ปฏิเสธ"; } }
	public override string dialog_common_deny_all { get { return "ปฏิเสธทั้งหมด"; } }
	public override string dialog_common_accept { get { return "ตกลง"; } }
	public override string dialog_common_tableoptions_error_not_enough_gold { get { return " Gold หรือ VIP ของท่านไม่พอที่จะสร้างโต๊ะนี้ได้"; } }
	public override string dialog_common_notify_mail_admin { get { return "ท่านได้รับ Goldข้อความจากแอดมิน ท่านอยากอ่านตอนนี้หรือไม่"; } }
	public override string dialog_common_notify_mail_transfer_gold { get { return "ท่านได้รับ Goldข้อความโอนเงิน ท่านอยากดูตอนนี้หรืไม่"; } }
	public override string dialog_common_notify_new_mail { get { return "ท่านมีข้อความไหม่"; } }
	public override string dialog_common_join_game_not_enough_gold {get {return "ท่านต้องมีอย่างน้อย %gold% ที่จะเล่นโต๊ะนี้ได้ ท่านสามารถเติม Gold หรือเชิญเพื่อนมาเล่นเกมจ้ะ" 
			+ GameApplication.gameName + "เพื่อได้รับ " + GameApplication.COIN + "รางวัลจากระบบ"; 
		}
	}
	public override string dialog_common_join_game_dialog_op1 { get { return "ตกลง"; } }
	public override string dialog_common_join_game_dialog_op2 { get { return "เชิญเพื่อน"; } }
	public override string dialog_common_join_game_dialog_op3 { get { return "เติม" + GameApplication.COIN; } }
	
	public override string dialog_alert_lackof_info { get { return "ท่านต้องใส่ข้อมูลให้ครบก่อนส่งจ้ะ"; } }
	public override string dialog_alert_payment_miss_provider { get { return "โปรดเลือกประเภทบัตร"; } }
	public override string dialog_alert_payment_miss_pin { get { return "ใส่รหัส PIN"; } }
	public override string dialog_alert_payment_miss_serial { get { return "โปรดใส่รหัส serial"; } }
	
	public override string error1 { get { return "เกิดข้อผิดพลาดเมื่อเข้าโต๊ะ"; } }
	public override string error2 { get { return "โต๊ะเต็มแล้ว กรุณาเลือกโต๊ะอื่น"; } }
	public override string error3 { get { return "โต๊ะได้ยกเลิกแล้ว กรุณาเลือกโต๊ะอื่น"; } }
	
	public override string error_payment_card_OK { get { return "เติมเงินสำเร็จแล้ว"; } }
	public override string error_payment_card_cant_do_request { get { return "เกิดข้อผิดพลาดในการชำระเงิน"; } }
	public override string error_payment_card_wrong_info { get { return "รหัสบัตรเติมเงินหรือ serial ไม่ถูกต้อง"; } }
	public override string error_payment_card_has_been_used { get { return "บัตรได้ใช้ไปแล้ว"; } }
	public override string error_payment_card_invalid { get { return "ข้อมูลบัตรไม่ถูกต้อง"; } }
	public override string error_payment_card_banned_account { get { return "บัญชีของท่านถูกล็อคชั่วคราว"; } }
	
	public override string ingame_common_kick { get { return "ท่านถูกเตะออกจากโต๊ะ"; } }
	public override string ingame_common_request_kick { get { return "ท่านอยากเตะผู้เล่นนี้ออกจากโต๊ะหรือไม่"; } }
	public override string ingame_common_deny_kick { get { return "ท่านไม่สามารถเตะผู้เล่นคนนี้ได้"; } }
	public override string ingame_common_configchange { get { return "การตั้งค่าโต๊ะมีการเปลี่ยนแปลง"; } }
	public override string ingame_common_kick_not_enough_gold { get { return "ท่านต้องออกจากโต๊ะเพราะเงินไม่พอ " + GameApplication.COIN + 
			"เพื่อเล่นต่อท่านต้องเติม Gold หรือเชิญเพื่อนมาเล่นเกม" + GameApplication.gameName + 
				" เพื่อได้รับ" + GameApplication.COIN + "รางวัลจากระบบ"; 
		}
	}
	public override string ingame_common_force_leave_game_dialog_op1 { get { return "กลับไปห้องรอ"; } }
	public override string ingame_common_force_leave_game_dialog_op2 { get { return "เชิญเพื่อน"; } }
	public override string ingame_common_force_leave_game_dialog_op3 { get { return "เติม" + GameApplication.COIN; } }
	
	//******************************ไพ่ 13ใบ********************************
	public override string gameplay_binh_sobai { get { return "เทียบไพ่"; } }
	public override string gameplay_binh_xepbai { get { return "เรียงไพ่"; } }
	public override string gameplay_binh_doichi { get { return "เปลี่ยนชุด"; } }
	public override string gameplay_binh_solai { get { return "เทียบใหม่"; } }
	
	public override string gameplay_binh_mb_sanhrongdonghoa { get { return "ไพ่ชุดมังกรสีเดียวกัน"; } }
	public override string gameplay_binh_mb_sanhrong { get { return "ไพ่ชุดมังกร"; } }
	public override string gameplay_binh_mb_donghoa { get { return "ดอกเดียวกัน"; } }
	public override string gameplay_binh_mb_saudoi { get { return "6 คู่"; } }
	public override string gameplay_binh_mb_bathung { get { return "3 ชุดดอกเดียวกัน"; } }
	public override string gameplay_binh_mb_basanh { get { return "3 ชุดเรียง"; } }
	
	public override string gameplay_binh_thungphasanh { get { return "สเตรทฟลัช"; } }
	public override string gameplay_binh_tuquy { get { return "สี่แถว"; } }
	public override string gameplay_binh_culu { get { return "ฟูลเฮาส์"; } }
	public override string gameplay_binh_thung { get { return "ดอกเดียวกัน"; } }
	public override string gameplay_binh_sanh { get { return "ไพ่เรียง"; } }
	public override string gameplay_binh_xam { get { return "ตอง"; } }
	public override string gameplay_binh_thu { get { return "2 คู่ "; } }
	public override string gameplay_binh_doi { get { return "1 คู่ "; } }
	public override string gameplay_binh_mau { get { return "ไพ่ธรรมดา"; } }
	public override string gameplay_binh_binhlung { get { return "เรียงไพ่ไม่ตามลำดับ"; } }
	
	public override string win { get { return "ชนะ "; } }
	public override string lose { get { return "แพ้"; } }
			
	public override string binhPlayer { get { return "ผู้เล่น"; } }
	public override string binhResult { get { return "ผล"; } }
	//*********************************Sâm**********************************
	public override string strXinSam { get { return "Xin Sâm"; } }
	public override string strKhongSam { get { return "Không Sâm"; } }
	
	public override string xocdia_lamcai { get { return "เป็นเจ้ามือ"; } }
	public override string xocdia_status { get { return "เริ่มเดิมพัน"; } }
	public override string xocdia_status0 { get { return "ยังไม่เริ่ม"; } }
	public override string xocdia_status1 { get { return "เดิมพันอยู่"; } }
	public override string xocdia_status2 { get { return "/Name/ ขาย /gold/ ที่ /1/!"; } }
	public override string xocdia_status3 { get { return "Đang trong thời gian bán cửa!"; } }
	public override string xocdia_huycuoc { get { return "ยกเลิกเดิมพัน"; } }
	public override string xocdia_datlai { get { return "เดิมพันใหม่"; } }
	public override string xocdia_datx2 { get { return "เดิมพัน X2"; } }
	public override string xocdia_muacua { get { return "Mua cửa"; } }
	public override string xocdia_bancua { get { return "Bán cửa"; } }
	public override string xocdia_huybancua { get { return "Hủy bán cửa"; } }
	public override string xocdia_chan { get { return "คู่"; } }
	public override string xocdia_le { get { return "คี่"; } }
	public override string xocdia_msg_lamcai { get { return "/Name/ เป็นเจ้ามือ "; } }
	public override string xocdia_msg_muacua { get { return "/Name/ ซื้อ /gold/ ที่ /1/!"; } }
	public override string xocdia_msg_bancua { get { return "Bắt đầu bán cửa!"; } }
	public override string quahangngay { get { return "รางวัลล็อกอิน"; } }
	public override string quahangngay_day1 { get { return "วันที่ 1"; } }
	public override string quahangngay_day2 { get { return "วันที่ 2"; } }
	public override string quahangngay_day3 { get { return "วันที่ 3"; } }
	public override string quahangngay_day4 { get { return "วันที่ 4"; } }
	public override string quahangngay_day5 { get { return "วันที่ 5++"; } }
	public override string updateInfo { get { return "อัพเดตข้อมูลสำเร็จแล้ว"; } }
	public override string person_info { get { return "ข้อมูล"; } }
	public override string person_avatar { get { return "รูปประจำตัว"; } }
	public override string person_info_sdt { get { return "เบอร์โทรศัพท์ (*)"; } }
	public override string person_info_name { get { return "ชื่อและนามสกุล"; } }
	public override string person_info_update { get { return "อัพเดต"; } }
	public override string person_info_note1 { get { return "- Số điện thoại dùng để xác thực quyền sở hữu của bạn đối với tài khoản này, vì vậy chỉ được nhập 1 lần duy nhất, không được phép thay đổi. Bạn hãy nhập một cách chính xác số điện thoại của mình để bảo đảm quyền lợi của bạn trong tương lai."; } }
	public override string person_info_note2 { get { return "- หากลืมรหัสผ่านให้แจ้งแอดมินเกม ระบบจะส่งรหัสไปที่เบอร์โทรศัพท์ทีท่านลงทะเบียนใว้"; } }
	public override string person_avatar_ok { get { return "เปลี่ยนรูปประจำตัวสำเร็จแล้ว"; } }
	public override string person_avatar_failed { get { return "เปลี่ยนรูปประจำตัวล้มเหลว"; } }
	public override string xocdia_huycai { get { return "ยกเลิกเจ้ามือ"; } }
	public override string cashout_thecao { get { return "บัตรเติมเงิน"; } }
	public override string cashout_vatpham { get { return "ไอเทม"; } }
	public override string bongda_live { get { return "กำลังแข่ง"; } }
	public override string bongda_history { get { return "ประวัติแทงบอล"; } }
	public override string bongda_top { get { return "ชนะใหญ่"; } }
	public override string bongda_error1 { get { return "ท่านต้องเดิมพัน"; } }
	public override string common_setting_invite { get { return "รับคำเชิญ"; } }
	public override string chatroom_all { get { return "ทั้งหมด"; } }
	public override string chatroom_game { get { return "เกม"; } }
	public override string chatroom_thegioi { get { return "โลก"; } }
	public override string chatroom_rieng { get { return "ส่วนตัว"; } }

	public override string gameplay_dummy_chose_one_card { get { return "กรุณาเลือกไพ่ 1 ใบเพื่อทิ้ง"; } }
	public override string gameplay_dummy_warn_gui { get { return "ถ้าทิ้งไพ่ใบนี้ท่านจะโดนหัด 50 คะแนน"; } }
	public override string gameplay_dummy_warn_ha { get { return "ถ้าทิ้งไพ่ใบนี้ท่านจะโดนหัด 50 คะแนน"; } }
	public override string gameplay_dummy_btn_boc { get { return "จั่ว"; } }
	public override string gameplay_dummy_btn_danh { get { return "ทิ้ง"; } }
	public override string gameplay_dummy_btn_gui { get { return "ฝาก"; } }
	public override string gameplay_dummy_btn_ha { get { return "ลงไพ่"; } }
	public override string gameplay_dummy_btn_confirm { get { return "ยืนยัน"; } }
	public override string gameplay_dummy_btn_cancel { get { return "ยกเลิก"; } }
	public override string gameplay_dummy_finish_detail_str1 { get { return "ไพ่ในมือ"; } }
	public override string gameplay_dummy_finish_detail_str2 { get { return "ไพ่ลงแล้ว"; } }
	public override string gameplay_dummy_finish_detail_str3 { get { return "คะแนนพิเศษ"; } }
	public override string gameplay_dummy_btn_ungay { get { return "จั่วน็อค"; } }	

	public override string gameplay_siam_btn_sansang { get { return "พร้อม"; } }
	public override string gameplay_siam_btn_batdau { get { return "เริ่ม"; } }
	public override string gameplay_siam_btn_chitiet { get { return "รายละเอียด"; } }

	public override string gameplay_invite_player { get { return "เชิญผู้เล่น"; } }
	public override string gameplay_no_find_player { get { return "หาผู้เล่นไม่เจอ"; } }

	public override string transition_scene_loading { get { return "กำลังดาวน์โหลดอินเตอร์เฟซโต๊ะเล่น..."; } }
	public override string free_gold { get { return "โกลด์ฟรี"; } }
	public override string common_gift_money{get{return "ท่านได้รับ %1000% %Gold% จาก %Game% ขอให้เล่นสนุกสนานค่ะ";}}

	public override string lobby_room1{get{return "ห้อง\n1";}}
	public override string lobby_room2{get{return "ห้อง\n2";}}
	public override string lobby_room3{get{return "ห้อง\n3";}}
	public override string lobby_room4{get{return "ห้อง\n4";}}
	
	public override string lobby_game_name_dummy{get{return "ดัมมี่";}}
	public override string lobby_game_name_poker{get{return "ไพ่เท็กซัส";}}
	public override string lobby_game_name_poker9k{get{return "เก้าเกไทย";}}
	public override string lobby_game_name_xocdia{get{return "คู่คี่";}}
}
