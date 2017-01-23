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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocketIOChatSample/<RemoveChatTyping>c__AnonStorey0
struct  U3CRemoveChatTypingU3Ec__AnonStorey0_t210249560  : public Il2CppObject
{
public:
	// System.String SocketIOChatSample/<RemoveChatTyping>c__AnonStorey0::username
	String_t* ___username_0;

public:
	inline static int32_t get_offset_of_username_0() { return static_cast<int32_t>(offsetof(U3CRemoveChatTypingU3Ec__AnonStorey0_t210249560, ___username_0)); }
	inline String_t* get_username_0() const { return ___username_0; }
	inline String_t** get_address_of_username_0() { return &___username_0; }
	inline void set_username_0(String_t* value)
	{
		___username_0 = value;
		Il2CppCodeGenWriteBarrier(&___username_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
