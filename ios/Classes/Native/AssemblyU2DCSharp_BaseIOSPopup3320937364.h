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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseIOSPopup
struct  BaseIOSPopup_t3320937364  : public MonoBehaviour_t1158329972
{
public:
	// System.String BaseIOSPopup::title
	String_t* ___title_2;
	// System.String BaseIOSPopup::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(BaseIOSPopup_t3320937364, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(BaseIOSPopup_t3320937364, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
