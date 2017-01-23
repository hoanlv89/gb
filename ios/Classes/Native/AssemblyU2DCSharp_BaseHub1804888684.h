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
// BestHTTP.Examples.GUIMessageList
struct GUIMessageList_t2719866248;

#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseHub
struct  BaseHub_t1804888684  : public Hub_t272719679
{
public:
	// System.String BaseHub::Title
	String_t* ___Title_7;
	// BestHTTP.Examples.GUIMessageList BaseHub::messages
	GUIMessageList_t2719866248 * ___messages_8;

public:
	inline static int32_t get_offset_of_Title_7() { return static_cast<int32_t>(offsetof(BaseHub_t1804888684, ___Title_7)); }
	inline String_t* get_Title_7() const { return ___Title_7; }
	inline String_t** get_address_of_Title_7() { return &___Title_7; }
	inline void set_Title_7(String_t* value)
	{
		___Title_7 = value;
		Il2CppCodeGenWriteBarrier(&___Title_7, value);
	}

	inline static int32_t get_offset_of_messages_8() { return static_cast<int32_t>(offsetof(BaseHub_t1804888684, ___messages_8)); }
	inline GUIMessageList_t2719866248 * get_messages_8() const { return ___messages_8; }
	inline GUIMessageList_t2719866248 ** get_address_of_messages_8() { return &___messages_8; }
	inline void set_messages_8(GUIMessageList_t2719866248 * value)
	{
		___messages_8 = value;
		Il2CppCodeGenWriteBarrier(&___messages_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
