#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationCenter
struct  NotificationCenter_t4076733310  : public MonoBehaviour_t1158329972
{
public:
	// System.String NotificationCenter::onShowText
	String_t* ___onShowText_3;
	// UnityEngine.UI.Text NotificationCenter::content
	Text_t356221433 * ___content_4;
	// System.Int32 NotificationCenter::repeat
	int32_t ___repeat_5;
	// System.Int32 NotificationCenter::repeatCount
	int32_t ___repeatCount_6;
	// System.Single NotificationCenter::showedTime
	float ___showedTime_7;
	// System.Single NotificationCenter::maxTime
	float ___maxTime_8;
	// System.Single NotificationCenter::textWidth
	float ___textWidth_9;
	// System.Boolean NotificationCenter::justshow
	bool ___justshow_11;

public:
	inline static int32_t get_offset_of_onShowText_3() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___onShowText_3)); }
	inline String_t* get_onShowText_3() const { return ___onShowText_3; }
	inline String_t** get_address_of_onShowText_3() { return &___onShowText_3; }
	inline void set_onShowText_3(String_t* value)
	{
		___onShowText_3 = value;
		Il2CppCodeGenWriteBarrier(&___onShowText_3, value);
	}

	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___content_4)); }
	inline Text_t356221433 * get_content_4() const { return ___content_4; }
	inline Text_t356221433 ** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(Text_t356221433 * value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier(&___content_4, value);
	}

	inline static int32_t get_offset_of_repeat_5() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___repeat_5)); }
	inline int32_t get_repeat_5() const { return ___repeat_5; }
	inline int32_t* get_address_of_repeat_5() { return &___repeat_5; }
	inline void set_repeat_5(int32_t value)
	{
		___repeat_5 = value;
	}

	inline static int32_t get_offset_of_repeatCount_6() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___repeatCount_6)); }
	inline int32_t get_repeatCount_6() const { return ___repeatCount_6; }
	inline int32_t* get_address_of_repeatCount_6() { return &___repeatCount_6; }
	inline void set_repeatCount_6(int32_t value)
	{
		___repeatCount_6 = value;
	}

	inline static int32_t get_offset_of_showedTime_7() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___showedTime_7)); }
	inline float get_showedTime_7() const { return ___showedTime_7; }
	inline float* get_address_of_showedTime_7() { return &___showedTime_7; }
	inline void set_showedTime_7(float value)
	{
		___showedTime_7 = value;
	}

	inline static int32_t get_offset_of_maxTime_8() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___maxTime_8)); }
	inline float get_maxTime_8() const { return ___maxTime_8; }
	inline float* get_address_of_maxTime_8() { return &___maxTime_8; }
	inline void set_maxTime_8(float value)
	{
		___maxTime_8 = value;
	}

	inline static int32_t get_offset_of_textWidth_9() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___textWidth_9)); }
	inline float get_textWidth_9() const { return ___textWidth_9; }
	inline float* get_address_of_textWidth_9() { return &___textWidth_9; }
	inline void set_textWidth_9(float value)
	{
		___textWidth_9 = value;
	}

	inline static int32_t get_offset_of_justshow_11() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310, ___justshow_11)); }
	inline bool get_justshow_11() const { return ___justshow_11; }
	inline bool* get_address_of_justshow_11() { return &___justshow_11; }
	inline void set_justshow_11(bool value)
	{
		___justshow_11 = value;
	}
};

struct NotificationCenter_t4076733310_StaticFields
{
public:
	// System.String NotificationCenter::staticMessage
	String_t* ___staticMessage_2;

public:
	inline static int32_t get_offset_of_staticMessage_2() { return static_cast<int32_t>(offsetof(NotificationCenter_t4076733310_StaticFields, ___staticMessage_2)); }
	inline String_t* get_staticMessage_2() const { return ___staticMessage_2; }
	inline String_t** get_address_of_staticMessage_2() { return &___staticMessage_2; }
	inline void set_staticMessage_2(String_t* value)
	{
		___staticMessage_2 = value;
		Il2CppCodeGenWriteBarrier(&___staticMessage_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
