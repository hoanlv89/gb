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

#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypedDemoHub
struct  TypedDemoHub_t3402660614  : public Hub_t272719679
{
public:
	// System.String TypedDemoHub::typedEchoResult
	String_t* ___typedEchoResult_7;
	// System.String TypedDemoHub::typedEchoClientResult
	String_t* ___typedEchoClientResult_8;

public:
	inline static int32_t get_offset_of_typedEchoResult_7() { return static_cast<int32_t>(offsetof(TypedDemoHub_t3402660614, ___typedEchoResult_7)); }
	inline String_t* get_typedEchoResult_7() const { return ___typedEchoResult_7; }
	inline String_t** get_address_of_typedEchoResult_7() { return &___typedEchoResult_7; }
	inline void set_typedEchoResult_7(String_t* value)
	{
		___typedEchoResult_7 = value;
		Il2CppCodeGenWriteBarrier(&___typedEchoResult_7, value);
	}

	inline static int32_t get_offset_of_typedEchoClientResult_8() { return static_cast<int32_t>(offsetof(TypedDemoHub_t3402660614, ___typedEchoClientResult_8)); }
	inline String_t* get_typedEchoClientResult_8() const { return ___typedEchoClientResult_8; }
	inline String_t** get_address_of_typedEchoClientResult_8() { return &___typedEchoClientResult_8; }
	inline void set_typedEchoClientResult_8(String_t* value)
	{
		___typedEchoClientResult_8 = value;
		Il2CppCodeGenWriteBarrier(&___typedEchoClientResult_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
