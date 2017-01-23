#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// GameLogs
struct GameLogs_t4281606111;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// Utils/Executor
struct Executor_t2576254565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReplayController
struct  ReplayController_t4058236085  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button ReplayController::stop
	Button_t2872111280 * ___stop_2;
	// UnityEngine.UI.Button ReplayController::play
	Button_t2872111280 * ___play_3;
	// UnityEngine.UI.Button ReplayController::next
	Button_t2872111280 * ___next_4;
	// UnityEngine.UI.Button ReplayController::quit
	Button_t2872111280 * ___quit_5;
	// UnityEngine.UI.Button ReplayController::btnReportErr
	Button_t2872111280 * ___btnReportErr_6;
	// UnityEngine.UI.Text ReplayController::text
	Text_t356221433 * ___text_7;
	// UnityEngine.UI.Text ReplayController::status
	Text_t356221433 * ___status_8;
	// UnityEngine.UI.Text ReplayController::textBtnReportErr
	Text_t356221433 * ___textBtnReportErr_9;
	// UnityEngine.Sprite ReplayController::sp_play
	Sprite_t309593783 * ___sp_play_10;
	// UnityEngine.Sprite ReplayController::sp_pause
	Sprite_t309593783 * ___sp_pause_11;
	// UnityEngine.UI.Slider ReplayController::slider
	Slider_t297367283 * ___slider_12;
	// System.Int32 ReplayController::logindex
	int32_t ___logindex_13;
	// GameLogs ReplayController::game
	GameLogs_t4281606111 * ___game_14;
	// System.Boolean ReplayController::playing
	bool ___playing_15;
	// System.Boolean ReplayController::autoHandleNext
	bool ___autoHandleNext_16;
	// System.Single ReplayController::floatTotalDuration
	float ___floatTotalDuration_17;
	// System.String ReplayController::strTotalDuration
	String_t* ___strTotalDuration_18;

public:
	inline static int32_t get_offset_of_stop_2() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___stop_2)); }
	inline Button_t2872111280 * get_stop_2() const { return ___stop_2; }
	inline Button_t2872111280 ** get_address_of_stop_2() { return &___stop_2; }
	inline void set_stop_2(Button_t2872111280 * value)
	{
		___stop_2 = value;
		Il2CppCodeGenWriteBarrier(&___stop_2, value);
	}

	inline static int32_t get_offset_of_play_3() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___play_3)); }
	inline Button_t2872111280 * get_play_3() const { return ___play_3; }
	inline Button_t2872111280 ** get_address_of_play_3() { return &___play_3; }
	inline void set_play_3(Button_t2872111280 * value)
	{
		___play_3 = value;
		Il2CppCodeGenWriteBarrier(&___play_3, value);
	}

	inline static int32_t get_offset_of_next_4() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___next_4)); }
	inline Button_t2872111280 * get_next_4() const { return ___next_4; }
	inline Button_t2872111280 ** get_address_of_next_4() { return &___next_4; }
	inline void set_next_4(Button_t2872111280 * value)
	{
		___next_4 = value;
		Il2CppCodeGenWriteBarrier(&___next_4, value);
	}

	inline static int32_t get_offset_of_quit_5() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___quit_5)); }
	inline Button_t2872111280 * get_quit_5() const { return ___quit_5; }
	inline Button_t2872111280 ** get_address_of_quit_5() { return &___quit_5; }
	inline void set_quit_5(Button_t2872111280 * value)
	{
		___quit_5 = value;
		Il2CppCodeGenWriteBarrier(&___quit_5, value);
	}

	inline static int32_t get_offset_of_btnReportErr_6() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___btnReportErr_6)); }
	inline Button_t2872111280 * get_btnReportErr_6() const { return ___btnReportErr_6; }
	inline Button_t2872111280 ** get_address_of_btnReportErr_6() { return &___btnReportErr_6; }
	inline void set_btnReportErr_6(Button_t2872111280 * value)
	{
		___btnReportErr_6 = value;
		Il2CppCodeGenWriteBarrier(&___btnReportErr_6, value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___text_7)); }
	inline Text_t356221433 * get_text_7() const { return ___text_7; }
	inline Text_t356221433 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t356221433 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier(&___text_7, value);
	}

	inline static int32_t get_offset_of_status_8() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___status_8)); }
	inline Text_t356221433 * get_status_8() const { return ___status_8; }
	inline Text_t356221433 ** get_address_of_status_8() { return &___status_8; }
	inline void set_status_8(Text_t356221433 * value)
	{
		___status_8 = value;
		Il2CppCodeGenWriteBarrier(&___status_8, value);
	}

	inline static int32_t get_offset_of_textBtnReportErr_9() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___textBtnReportErr_9)); }
	inline Text_t356221433 * get_textBtnReportErr_9() const { return ___textBtnReportErr_9; }
	inline Text_t356221433 ** get_address_of_textBtnReportErr_9() { return &___textBtnReportErr_9; }
	inline void set_textBtnReportErr_9(Text_t356221433 * value)
	{
		___textBtnReportErr_9 = value;
		Il2CppCodeGenWriteBarrier(&___textBtnReportErr_9, value);
	}

	inline static int32_t get_offset_of_sp_play_10() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___sp_play_10)); }
	inline Sprite_t309593783 * get_sp_play_10() const { return ___sp_play_10; }
	inline Sprite_t309593783 ** get_address_of_sp_play_10() { return &___sp_play_10; }
	inline void set_sp_play_10(Sprite_t309593783 * value)
	{
		___sp_play_10 = value;
		Il2CppCodeGenWriteBarrier(&___sp_play_10, value);
	}

	inline static int32_t get_offset_of_sp_pause_11() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___sp_pause_11)); }
	inline Sprite_t309593783 * get_sp_pause_11() const { return ___sp_pause_11; }
	inline Sprite_t309593783 ** get_address_of_sp_pause_11() { return &___sp_pause_11; }
	inline void set_sp_pause_11(Sprite_t309593783 * value)
	{
		___sp_pause_11 = value;
		Il2CppCodeGenWriteBarrier(&___sp_pause_11, value);
	}

	inline static int32_t get_offset_of_slider_12() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___slider_12)); }
	inline Slider_t297367283 * get_slider_12() const { return ___slider_12; }
	inline Slider_t297367283 ** get_address_of_slider_12() { return &___slider_12; }
	inline void set_slider_12(Slider_t297367283 * value)
	{
		___slider_12 = value;
		Il2CppCodeGenWriteBarrier(&___slider_12, value);
	}

	inline static int32_t get_offset_of_logindex_13() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___logindex_13)); }
	inline int32_t get_logindex_13() const { return ___logindex_13; }
	inline int32_t* get_address_of_logindex_13() { return &___logindex_13; }
	inline void set_logindex_13(int32_t value)
	{
		___logindex_13 = value;
	}

	inline static int32_t get_offset_of_game_14() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___game_14)); }
	inline GameLogs_t4281606111 * get_game_14() const { return ___game_14; }
	inline GameLogs_t4281606111 ** get_address_of_game_14() { return &___game_14; }
	inline void set_game_14(GameLogs_t4281606111 * value)
	{
		___game_14 = value;
		Il2CppCodeGenWriteBarrier(&___game_14, value);
	}

	inline static int32_t get_offset_of_playing_15() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___playing_15)); }
	inline bool get_playing_15() const { return ___playing_15; }
	inline bool* get_address_of_playing_15() { return &___playing_15; }
	inline void set_playing_15(bool value)
	{
		___playing_15 = value;
	}

	inline static int32_t get_offset_of_autoHandleNext_16() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___autoHandleNext_16)); }
	inline bool get_autoHandleNext_16() const { return ___autoHandleNext_16; }
	inline bool* get_address_of_autoHandleNext_16() { return &___autoHandleNext_16; }
	inline void set_autoHandleNext_16(bool value)
	{
		___autoHandleNext_16 = value;
	}

	inline static int32_t get_offset_of_floatTotalDuration_17() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___floatTotalDuration_17)); }
	inline float get_floatTotalDuration_17() const { return ___floatTotalDuration_17; }
	inline float* get_address_of_floatTotalDuration_17() { return &___floatTotalDuration_17; }
	inline void set_floatTotalDuration_17(float value)
	{
		___floatTotalDuration_17 = value;
	}

	inline static int32_t get_offset_of_strTotalDuration_18() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085, ___strTotalDuration_18)); }
	inline String_t* get_strTotalDuration_18() const { return ___strTotalDuration_18; }
	inline String_t** get_address_of_strTotalDuration_18() { return &___strTotalDuration_18; }
	inline void set_strTotalDuration_18(String_t* value)
	{
		___strTotalDuration_18 = value;
		Il2CppCodeGenWriteBarrier(&___strTotalDuration_18, value);
	}
};

struct ReplayController_t4058236085_StaticFields
{
public:
	// UnityEngine.Events.UnityAction ReplayController::<>f__am$cache0
	UnityAction_t4025899511 * ___U3CU3Ef__amU24cache0_19;
	// Utils/Executor ReplayController::<>f__am$cache1
	Executor_t2576254565 * ___U3CU3Ef__amU24cache1_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_19() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085_StaticFields, ___U3CU3Ef__amU24cache0_19)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__amU24cache0_19() const { return ___U3CU3Ef__amU24cache0_19; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__amU24cache0_19() { return &___U3CU3Ef__amU24cache0_19; }
	inline void set_U3CU3Ef__amU24cache0_19(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__amU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_20() { return static_cast<int32_t>(offsetof(ReplayController_t4058236085_StaticFields, ___U3CU3Ef__amU24cache1_20)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache1_20() const { return ___U3CU3Ef__amU24cache1_20; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache1_20() { return &___U3CU3Ef__amU24cache1_20; }
	inline void set_U3CU3Ef__amU24cache1_20(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
