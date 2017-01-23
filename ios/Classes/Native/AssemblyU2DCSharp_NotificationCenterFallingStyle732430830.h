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

// NotificationCenterFallingStyle
struct  NotificationCenterFallingStyle_t732430830  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text NotificationCenterFallingStyle::content
	Text_t356221433 * ___content_3;
	// System.Int32 NotificationCenterFallingStyle::repeat
	int32_t ___repeat_4;
	// System.Int32 NotificationCenterFallingStyle::repeatCount
	int32_t ___repeatCount_5;
	// System.Single NotificationCenterFallingStyle::showedTime
	float ___showedTime_6;
	// System.Single NotificationCenterFallingStyle::maxTime
	float ___maxTime_7;
	// System.Single NotificationCenterFallingStyle::textWidth
	float ___textWidth_8;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830, ___content_3)); }
	inline Text_t356221433 * get_content_3() const { return ___content_3; }
	inline Text_t356221433 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Text_t356221433 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_repeat_4() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830, ___repeat_4)); }
	inline int32_t get_repeat_4() const { return ___repeat_4; }
	inline int32_t* get_address_of_repeat_4() { return &___repeat_4; }
	inline void set_repeat_4(int32_t value)
	{
		___repeat_4 = value;
	}

	inline static int32_t get_offset_of_repeatCount_5() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830, ___repeatCount_5)); }
	inline int32_t get_repeatCount_5() const { return ___repeatCount_5; }
	inline int32_t* get_address_of_repeatCount_5() { return &___repeatCount_5; }
	inline void set_repeatCount_5(int32_t value)
	{
		___repeatCount_5 = value;
	}

	inline static int32_t get_offset_of_showedTime_6() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830, ___showedTime_6)); }
	inline float get_showedTime_6() const { return ___showedTime_6; }
	inline float* get_address_of_showedTime_6() { return &___showedTime_6; }
	inline void set_showedTime_6(float value)
	{
		___showedTime_6 = value;
	}

	inline static int32_t get_offset_of_maxTime_7() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830, ___maxTime_7)); }
	inline float get_maxTime_7() const { return ___maxTime_7; }
	inline float* get_address_of_maxTime_7() { return &___maxTime_7; }
	inline void set_maxTime_7(float value)
	{
		___maxTime_7 = value;
	}

	inline static int32_t get_offset_of_textWidth_8() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830, ___textWidth_8)); }
	inline float get_textWidth_8() const { return ___textWidth_8; }
	inline float* get_address_of_textWidth_8() { return &___textWidth_8; }
	inline void set_textWidth_8(float value)
	{
		___textWidth_8 = value;
	}
};

struct NotificationCenterFallingStyle_t732430830_StaticFields
{
public:
	// System.String NotificationCenterFallingStyle::staticMessage
	String_t* ___staticMessage_2;

public:
	inline static int32_t get_offset_of_staticMessage_2() { return static_cast<int32_t>(offsetof(NotificationCenterFallingStyle_t732430830_StaticFields, ___staticMessage_2)); }
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
