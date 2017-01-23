#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniWebView/LoadCompleteDelegate
struct LoadCompleteDelegate_t3269755738;
// UniWebView/LoadBeginDelegate
struct LoadBeginDelegate_t834780112;
// UniWebView/ReceivedMessageDelegate
struct ReceivedMessageDelegate_t1883280465;
// UniWebView/EvalJavaScriptFinishedDelegate
struct EvalJavaScriptFinishedDelegate_t133058738;
// UniWebView/WebViewShouldCloseDelegate
struct WebViewShouldCloseDelegate_t329842435;
// UniWebView/ReceivedKeyCodeDelegate
struct ReceivedKeyCodeDelegate_t2291679194;
// UniWebView/InsetsForScreenOreitationDelegate
struct InsetsForScreenOreitationDelegate_t2008072846;
// UniWebViewEdgeInsets
struct UniWebViewEdgeInsets_t3302276490;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView
struct  UniWebView_t3614141785  : public MonoBehaviour_t1158329972
{
public:
	// UniWebView/LoadCompleteDelegate UniWebView::OnLoadComplete
	LoadCompleteDelegate_t3269755738 * ___OnLoadComplete_2;
	// UniWebView/LoadBeginDelegate UniWebView::OnLoadBegin
	LoadBeginDelegate_t834780112 * ___OnLoadBegin_3;
	// UniWebView/ReceivedMessageDelegate UniWebView::OnReceivedMessage
	ReceivedMessageDelegate_t1883280465 * ___OnReceivedMessage_4;
	// UniWebView/EvalJavaScriptFinishedDelegate UniWebView::OnEvalJavaScriptFinished
	EvalJavaScriptFinishedDelegate_t133058738 * ___OnEvalJavaScriptFinished_5;
	// UniWebView/WebViewShouldCloseDelegate UniWebView::OnWebViewShouldClose
	WebViewShouldCloseDelegate_t329842435 * ___OnWebViewShouldClose_6;
	// UniWebView/ReceivedKeyCodeDelegate UniWebView::OnReceivedKeyCode
	ReceivedKeyCodeDelegate_t2291679194 * ___OnReceivedKeyCode_7;
	// UniWebView/InsetsForScreenOreitationDelegate UniWebView::InsetsForScreenOreitation
	InsetsForScreenOreitationDelegate_t2008072846 * ___InsetsForScreenOreitation_8;
	// UniWebViewEdgeInsets UniWebView::_insets
	UniWebViewEdgeInsets_t3302276490 * ____insets_9;
	// System.String UniWebView::url
	String_t* ___url_10;
	// System.Boolean UniWebView::loadOnStart
	bool ___loadOnStart_11;
	// System.Boolean UniWebView::autoShowWhenLoadComplete
	bool ___autoShowWhenLoadComplete_12;
	// System.Boolean UniWebView::_backButtonEnable
	bool ____backButtonEnable_13;
	// System.Boolean UniWebView::_bouncesEnable
	bool ____bouncesEnable_14;
	// System.Boolean UniWebView::_zoomEnable
	bool ____zoomEnable_15;
	// System.String UniWebView::_currentGUID
	String_t* ____currentGUID_16;
	// System.Int32 UniWebView::_lastScreenHeight
	int32_t ____lastScreenHeight_17;
	// System.Boolean UniWebView::_immersiveMode
	bool ____immersiveMode_18;
	// System.Action UniWebView::_showTransitionAction
	Action_t3226471752 * ____showTransitionAction_19;
	// System.Action UniWebView::_hideTransitionAction
	Action_t3226471752 * ____hideTransitionAction_20;
	// System.Boolean UniWebView::toolBarShow
	bool ___toolBarShow_21;

public:
	inline static int32_t get_offset_of_OnLoadComplete_2() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___OnLoadComplete_2)); }
	inline LoadCompleteDelegate_t3269755738 * get_OnLoadComplete_2() const { return ___OnLoadComplete_2; }
	inline LoadCompleteDelegate_t3269755738 ** get_address_of_OnLoadComplete_2() { return &___OnLoadComplete_2; }
	inline void set_OnLoadComplete_2(LoadCompleteDelegate_t3269755738 * value)
	{
		___OnLoadComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadComplete_2, value);
	}

	inline static int32_t get_offset_of_OnLoadBegin_3() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___OnLoadBegin_3)); }
	inline LoadBeginDelegate_t834780112 * get_OnLoadBegin_3() const { return ___OnLoadBegin_3; }
	inline LoadBeginDelegate_t834780112 ** get_address_of_OnLoadBegin_3() { return &___OnLoadBegin_3; }
	inline void set_OnLoadBegin_3(LoadBeginDelegate_t834780112 * value)
	{
		___OnLoadBegin_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadBegin_3, value);
	}

	inline static int32_t get_offset_of_OnReceivedMessage_4() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___OnReceivedMessage_4)); }
	inline ReceivedMessageDelegate_t1883280465 * get_OnReceivedMessage_4() const { return ___OnReceivedMessage_4; }
	inline ReceivedMessageDelegate_t1883280465 ** get_address_of_OnReceivedMessage_4() { return &___OnReceivedMessage_4; }
	inline void set_OnReceivedMessage_4(ReceivedMessageDelegate_t1883280465 * value)
	{
		___OnReceivedMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceivedMessage_4, value);
	}

	inline static int32_t get_offset_of_OnEvalJavaScriptFinished_5() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___OnEvalJavaScriptFinished_5)); }
	inline EvalJavaScriptFinishedDelegate_t133058738 * get_OnEvalJavaScriptFinished_5() const { return ___OnEvalJavaScriptFinished_5; }
	inline EvalJavaScriptFinishedDelegate_t133058738 ** get_address_of_OnEvalJavaScriptFinished_5() { return &___OnEvalJavaScriptFinished_5; }
	inline void set_OnEvalJavaScriptFinished_5(EvalJavaScriptFinishedDelegate_t133058738 * value)
	{
		___OnEvalJavaScriptFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnEvalJavaScriptFinished_5, value);
	}

	inline static int32_t get_offset_of_OnWebViewShouldClose_6() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___OnWebViewShouldClose_6)); }
	inline WebViewShouldCloseDelegate_t329842435 * get_OnWebViewShouldClose_6() const { return ___OnWebViewShouldClose_6; }
	inline WebViewShouldCloseDelegate_t329842435 ** get_address_of_OnWebViewShouldClose_6() { return &___OnWebViewShouldClose_6; }
	inline void set_OnWebViewShouldClose_6(WebViewShouldCloseDelegate_t329842435 * value)
	{
		___OnWebViewShouldClose_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnWebViewShouldClose_6, value);
	}

	inline static int32_t get_offset_of_OnReceivedKeyCode_7() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___OnReceivedKeyCode_7)); }
	inline ReceivedKeyCodeDelegate_t2291679194 * get_OnReceivedKeyCode_7() const { return ___OnReceivedKeyCode_7; }
	inline ReceivedKeyCodeDelegate_t2291679194 ** get_address_of_OnReceivedKeyCode_7() { return &___OnReceivedKeyCode_7; }
	inline void set_OnReceivedKeyCode_7(ReceivedKeyCodeDelegate_t2291679194 * value)
	{
		___OnReceivedKeyCode_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceivedKeyCode_7, value);
	}

	inline static int32_t get_offset_of_InsetsForScreenOreitation_8() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___InsetsForScreenOreitation_8)); }
	inline InsetsForScreenOreitationDelegate_t2008072846 * get_InsetsForScreenOreitation_8() const { return ___InsetsForScreenOreitation_8; }
	inline InsetsForScreenOreitationDelegate_t2008072846 ** get_address_of_InsetsForScreenOreitation_8() { return &___InsetsForScreenOreitation_8; }
	inline void set_InsetsForScreenOreitation_8(InsetsForScreenOreitationDelegate_t2008072846 * value)
	{
		___InsetsForScreenOreitation_8 = value;
		Il2CppCodeGenWriteBarrier(&___InsetsForScreenOreitation_8, value);
	}

	inline static int32_t get_offset_of__insets_9() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____insets_9)); }
	inline UniWebViewEdgeInsets_t3302276490 * get__insets_9() const { return ____insets_9; }
	inline UniWebViewEdgeInsets_t3302276490 ** get_address_of__insets_9() { return &____insets_9; }
	inline void set__insets_9(UniWebViewEdgeInsets_t3302276490 * value)
	{
		____insets_9 = value;
		Il2CppCodeGenWriteBarrier(&____insets_9, value);
	}

	inline static int32_t get_offset_of_url_10() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___url_10)); }
	inline String_t* get_url_10() const { return ___url_10; }
	inline String_t** get_address_of_url_10() { return &___url_10; }
	inline void set_url_10(String_t* value)
	{
		___url_10 = value;
		Il2CppCodeGenWriteBarrier(&___url_10, value);
	}

	inline static int32_t get_offset_of_loadOnStart_11() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___loadOnStart_11)); }
	inline bool get_loadOnStart_11() const { return ___loadOnStart_11; }
	inline bool* get_address_of_loadOnStart_11() { return &___loadOnStart_11; }
	inline void set_loadOnStart_11(bool value)
	{
		___loadOnStart_11 = value;
	}

	inline static int32_t get_offset_of_autoShowWhenLoadComplete_12() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___autoShowWhenLoadComplete_12)); }
	inline bool get_autoShowWhenLoadComplete_12() const { return ___autoShowWhenLoadComplete_12; }
	inline bool* get_address_of_autoShowWhenLoadComplete_12() { return &___autoShowWhenLoadComplete_12; }
	inline void set_autoShowWhenLoadComplete_12(bool value)
	{
		___autoShowWhenLoadComplete_12 = value;
	}

	inline static int32_t get_offset_of__backButtonEnable_13() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____backButtonEnable_13)); }
	inline bool get__backButtonEnable_13() const { return ____backButtonEnable_13; }
	inline bool* get_address_of__backButtonEnable_13() { return &____backButtonEnable_13; }
	inline void set__backButtonEnable_13(bool value)
	{
		____backButtonEnable_13 = value;
	}

	inline static int32_t get_offset_of__bouncesEnable_14() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____bouncesEnable_14)); }
	inline bool get__bouncesEnable_14() const { return ____bouncesEnable_14; }
	inline bool* get_address_of__bouncesEnable_14() { return &____bouncesEnable_14; }
	inline void set__bouncesEnable_14(bool value)
	{
		____bouncesEnable_14 = value;
	}

	inline static int32_t get_offset_of__zoomEnable_15() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____zoomEnable_15)); }
	inline bool get__zoomEnable_15() const { return ____zoomEnable_15; }
	inline bool* get_address_of__zoomEnable_15() { return &____zoomEnable_15; }
	inline void set__zoomEnable_15(bool value)
	{
		____zoomEnable_15 = value;
	}

	inline static int32_t get_offset_of__currentGUID_16() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____currentGUID_16)); }
	inline String_t* get__currentGUID_16() const { return ____currentGUID_16; }
	inline String_t** get_address_of__currentGUID_16() { return &____currentGUID_16; }
	inline void set__currentGUID_16(String_t* value)
	{
		____currentGUID_16 = value;
		Il2CppCodeGenWriteBarrier(&____currentGUID_16, value);
	}

	inline static int32_t get_offset_of__lastScreenHeight_17() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____lastScreenHeight_17)); }
	inline int32_t get__lastScreenHeight_17() const { return ____lastScreenHeight_17; }
	inline int32_t* get_address_of__lastScreenHeight_17() { return &____lastScreenHeight_17; }
	inline void set__lastScreenHeight_17(int32_t value)
	{
		____lastScreenHeight_17 = value;
	}

	inline static int32_t get_offset_of__immersiveMode_18() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____immersiveMode_18)); }
	inline bool get__immersiveMode_18() const { return ____immersiveMode_18; }
	inline bool* get_address_of__immersiveMode_18() { return &____immersiveMode_18; }
	inline void set__immersiveMode_18(bool value)
	{
		____immersiveMode_18 = value;
	}

	inline static int32_t get_offset_of__showTransitionAction_19() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____showTransitionAction_19)); }
	inline Action_t3226471752 * get__showTransitionAction_19() const { return ____showTransitionAction_19; }
	inline Action_t3226471752 ** get_address_of__showTransitionAction_19() { return &____showTransitionAction_19; }
	inline void set__showTransitionAction_19(Action_t3226471752 * value)
	{
		____showTransitionAction_19 = value;
		Il2CppCodeGenWriteBarrier(&____showTransitionAction_19, value);
	}

	inline static int32_t get_offset_of__hideTransitionAction_20() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ____hideTransitionAction_20)); }
	inline Action_t3226471752 * get__hideTransitionAction_20() const { return ____hideTransitionAction_20; }
	inline Action_t3226471752 ** get_address_of__hideTransitionAction_20() { return &____hideTransitionAction_20; }
	inline void set__hideTransitionAction_20(Action_t3226471752 * value)
	{
		____hideTransitionAction_20 = value;
		Il2CppCodeGenWriteBarrier(&____hideTransitionAction_20, value);
	}

	inline static int32_t get_offset_of_toolBarShow_21() { return static_cast<int32_t>(offsetof(UniWebView_t3614141785, ___toolBarShow_21)); }
	inline bool get_toolBarShow_21() const { return ___toolBarShow_21; }
	inline bool* get_address_of_toolBarShow_21() { return &___toolBarShow_21; }
	inline void set_toolBarShow_21(bool value)
	{
		___toolBarShow_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
