#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// WaitingDialog
struct WaitingDialog_t2062014917;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvitePlayerBoxControl
struct  InvitePlayerBoxControl_t3082712906  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform InvitePlayerBoxControl::pfPlayerInviteItem
	RectTransform_t3349966182 * ___pfPlayerInviteItem_2;
	// UnityEngine.RectTransform InvitePlayerBoxControl::content
	RectTransform_t3349966182 * ___content_3;
	// WaitingDialog InvitePlayerBoxControl::waitingDialog
	WaitingDialog_t2062014917 * ___waitingDialog_4;
	// UnityEngine.UI.Button InvitePlayerBoxControl::refresh
	Button_t2872111280 * ___refresh_5;
	// UnityEngine.UI.Button InvitePlayerBoxControl::close
	Button_t2872111280 * ___close_6;
	// UnityEngine.UI.Text InvitePlayerBoxControl::status
	Text_t356221433 * ___status_7;

public:
	inline static int32_t get_offset_of_pfPlayerInviteItem_2() { return static_cast<int32_t>(offsetof(InvitePlayerBoxControl_t3082712906, ___pfPlayerInviteItem_2)); }
	inline RectTransform_t3349966182 * get_pfPlayerInviteItem_2() const { return ___pfPlayerInviteItem_2; }
	inline RectTransform_t3349966182 ** get_address_of_pfPlayerInviteItem_2() { return &___pfPlayerInviteItem_2; }
	inline void set_pfPlayerInviteItem_2(RectTransform_t3349966182 * value)
	{
		___pfPlayerInviteItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___pfPlayerInviteItem_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(InvitePlayerBoxControl_t3082712906, ___content_3)); }
	inline RectTransform_t3349966182 * get_content_3() const { return ___content_3; }
	inline RectTransform_t3349966182 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(RectTransform_t3349966182 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_waitingDialog_4() { return static_cast<int32_t>(offsetof(InvitePlayerBoxControl_t3082712906, ___waitingDialog_4)); }
	inline WaitingDialog_t2062014917 * get_waitingDialog_4() const { return ___waitingDialog_4; }
	inline WaitingDialog_t2062014917 ** get_address_of_waitingDialog_4() { return &___waitingDialog_4; }
	inline void set_waitingDialog_4(WaitingDialog_t2062014917 * value)
	{
		___waitingDialog_4 = value;
		Il2CppCodeGenWriteBarrier(&___waitingDialog_4, value);
	}

	inline static int32_t get_offset_of_refresh_5() { return static_cast<int32_t>(offsetof(InvitePlayerBoxControl_t3082712906, ___refresh_5)); }
	inline Button_t2872111280 * get_refresh_5() const { return ___refresh_5; }
	inline Button_t2872111280 ** get_address_of_refresh_5() { return &___refresh_5; }
	inline void set_refresh_5(Button_t2872111280 * value)
	{
		___refresh_5 = value;
		Il2CppCodeGenWriteBarrier(&___refresh_5, value);
	}

	inline static int32_t get_offset_of_close_6() { return static_cast<int32_t>(offsetof(InvitePlayerBoxControl_t3082712906, ___close_6)); }
	inline Button_t2872111280 * get_close_6() const { return ___close_6; }
	inline Button_t2872111280 ** get_address_of_close_6() { return &___close_6; }
	inline void set_close_6(Button_t2872111280 * value)
	{
		___close_6 = value;
		Il2CppCodeGenWriteBarrier(&___close_6, value);
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(InvitePlayerBoxControl_t3082712906, ___status_7)); }
	inline Text_t356221433 * get_status_7() const { return ___status_7; }
	inline Text_t356221433 ** get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(Text_t356221433 * value)
	{
		___status_7 = value;
		Il2CppCodeGenWriteBarrier(&___status_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
