#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.String
struct String_t;
// Utils/Executor
struct Executor_t2576254565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaitingDialog
struct  WaitingDialog_t2062014917  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text WaitingDialog::content
	Text_t356221433 * ___content_2;
	// UnityEngine.UI.Text WaitingDialog::retry_text
	Text_t356221433 * ___retry_text_3;
	// UnityEngine.UI.Button WaitingDialog::retry
	Button_t2872111280 * ___retry_4;
	// UnityEngine.UI.Button WaitingDialog::cancel
	Button_t2872111280 * ___cancel_5;
	// UnityEngine.UI.Text WaitingDialog::cancel_text
	Text_t356221433 * ___cancel_text_6;
	// System.String WaitingDialog::message
	String_t* ___message_7;
	// System.Single WaitingDialog::totalVisibleTime
	float ___totalVisibleTime_8;
	// Utils/Executor WaitingDialog::exe
	Executor_t2576254565 * ___exe_9;
	// System.Boolean WaitingDialog::tried
	bool ___tried_10;
	// System.Single WaitingDialog::maxVisibleTimeInSecond
	float ___maxVisibleTimeInSecond_11;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___content_2)); }
	inline Text_t356221433 * get_content_2() const { return ___content_2; }
	inline Text_t356221433 ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(Text_t356221433 * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_retry_text_3() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___retry_text_3)); }
	inline Text_t356221433 * get_retry_text_3() const { return ___retry_text_3; }
	inline Text_t356221433 ** get_address_of_retry_text_3() { return &___retry_text_3; }
	inline void set_retry_text_3(Text_t356221433 * value)
	{
		___retry_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___retry_text_3, value);
	}

	inline static int32_t get_offset_of_retry_4() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___retry_4)); }
	inline Button_t2872111280 * get_retry_4() const { return ___retry_4; }
	inline Button_t2872111280 ** get_address_of_retry_4() { return &___retry_4; }
	inline void set_retry_4(Button_t2872111280 * value)
	{
		___retry_4 = value;
		Il2CppCodeGenWriteBarrier(&___retry_4, value);
	}

	inline static int32_t get_offset_of_cancel_5() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___cancel_5)); }
	inline Button_t2872111280 * get_cancel_5() const { return ___cancel_5; }
	inline Button_t2872111280 ** get_address_of_cancel_5() { return &___cancel_5; }
	inline void set_cancel_5(Button_t2872111280 * value)
	{
		___cancel_5 = value;
		Il2CppCodeGenWriteBarrier(&___cancel_5, value);
	}

	inline static int32_t get_offset_of_cancel_text_6() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___cancel_text_6)); }
	inline Text_t356221433 * get_cancel_text_6() const { return ___cancel_text_6; }
	inline Text_t356221433 ** get_address_of_cancel_text_6() { return &___cancel_text_6; }
	inline void set_cancel_text_6(Text_t356221433 * value)
	{
		___cancel_text_6 = value;
		Il2CppCodeGenWriteBarrier(&___cancel_text_6, value);
	}

	inline static int32_t get_offset_of_message_7() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___message_7)); }
	inline String_t* get_message_7() const { return ___message_7; }
	inline String_t** get_address_of_message_7() { return &___message_7; }
	inline void set_message_7(String_t* value)
	{
		___message_7 = value;
		Il2CppCodeGenWriteBarrier(&___message_7, value);
	}

	inline static int32_t get_offset_of_totalVisibleTime_8() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___totalVisibleTime_8)); }
	inline float get_totalVisibleTime_8() const { return ___totalVisibleTime_8; }
	inline float* get_address_of_totalVisibleTime_8() { return &___totalVisibleTime_8; }
	inline void set_totalVisibleTime_8(float value)
	{
		___totalVisibleTime_8 = value;
	}

	inline static int32_t get_offset_of_exe_9() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___exe_9)); }
	inline Executor_t2576254565 * get_exe_9() const { return ___exe_9; }
	inline Executor_t2576254565 ** get_address_of_exe_9() { return &___exe_9; }
	inline void set_exe_9(Executor_t2576254565 * value)
	{
		___exe_9 = value;
		Il2CppCodeGenWriteBarrier(&___exe_9, value);
	}

	inline static int32_t get_offset_of_tried_10() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___tried_10)); }
	inline bool get_tried_10() const { return ___tried_10; }
	inline bool* get_address_of_tried_10() { return &___tried_10; }
	inline void set_tried_10(bool value)
	{
		___tried_10 = value;
	}

	inline static int32_t get_offset_of_maxVisibleTimeInSecond_11() { return static_cast<int32_t>(offsetof(WaitingDialog_t2062014917, ___maxVisibleTimeInSecond_11)); }
	inline float get_maxVisibleTimeInSecond_11() const { return ___maxVisibleTimeInSecond_11; }
	inline float* get_address_of_maxVisibleTimeInSecond_11() { return &___maxVisibleTimeInSecond_11; }
	inline void set_maxVisibleTimeInSecond_11(float value)
	{
		___maxVisibleTimeInSecond_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
