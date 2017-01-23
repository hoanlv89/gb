#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ISN_Error
struct ISN_Error_t553253557;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Result
struct  ISN_Result_t2775631610  : public Il2CppObject
{
public:
	// ISN_Error ISN_Result::_Error
	ISN_Error_t553253557 * ____Error_0;
	// System.Boolean ISN_Result::_IsSucceeded
	bool ____IsSucceeded_1;

public:
	inline static int32_t get_offset_of__Error_0() { return static_cast<int32_t>(offsetof(ISN_Result_t2775631610, ____Error_0)); }
	inline ISN_Error_t553253557 * get__Error_0() const { return ____Error_0; }
	inline ISN_Error_t553253557 ** get_address_of__Error_0() { return &____Error_0; }
	inline void set__Error_0(ISN_Error_t553253557 * value)
	{
		____Error_0 = value;
		Il2CppCodeGenWriteBarrier(&____Error_0, value);
	}

	inline static int32_t get_offset_of__IsSucceeded_1() { return static_cast<int32_t>(offsetof(ISN_Result_t2775631610, ____IsSucceeded_1)); }
	inline bool get__IsSucceeded_1() const { return ____IsSucceeded_1; }
	inline bool* get_address_of__IsSucceeded_1() { return &____IsSucceeded_1; }
	inline void set__IsSucceeded_1(bool value)
	{
		____IsSucceeded_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
