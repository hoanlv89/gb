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
// ChatPanel
struct ChatPanel_t3765448976;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatPanel/<Start>c__AnonStorey0
struct  U3CStartU3Ec__AnonStorey0_t1002865126  : public Il2CppObject
{
public:
	// System.String ChatPanel/<Start>c__AnonStorey0::message
	String_t* ___message_0;
	// ChatPanel ChatPanel/<Start>c__AnonStorey0::$this
	ChatPanel_t3765448976 * ___U24this_1;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey0_t1002865126, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier(&___message_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey0_t1002865126, ___U24this_1)); }
	inline ChatPanel_t3765448976 * get_U24this_1() const { return ___U24this_1; }
	inline ChatPanel_t3765448976 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ChatPanel_t3765448976 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
