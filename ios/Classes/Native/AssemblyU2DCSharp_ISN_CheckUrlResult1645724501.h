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

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_CheckUrlResult
struct  ISN_CheckUrlResult_t1645724501  : public ISN_Result_t2775631610
{
public:
	// System.String ISN_CheckUrlResult::_url
	String_t* ____url_2;

public:
	inline static int32_t get_offset_of__url_2() { return static_cast<int32_t>(offsetof(ISN_CheckUrlResult_t1645724501, ____url_2)); }
	inline String_t* get__url_2() const { return ____url_2; }
	inline String_t** get_address_of__url_2() { return &____url_2; }
	inline void set__url_2(String_t* value)
	{
		____url_2 = value;
		Il2CppCodeGenWriteBarrier(&____url_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
