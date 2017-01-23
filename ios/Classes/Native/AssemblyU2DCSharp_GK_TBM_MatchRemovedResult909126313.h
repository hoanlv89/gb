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

// GK_TBM_MatchRemovedResult
struct  GK_TBM_MatchRemovedResult_t909126313  : public ISN_Result_t2775631610
{
public:
	// System.String GK_TBM_MatchRemovedResult::_MatchId
	String_t* ____MatchId_2;

public:
	inline static int32_t get_offset_of__MatchId_2() { return static_cast<int32_t>(offsetof(GK_TBM_MatchRemovedResult_t909126313, ____MatchId_2)); }
	inline String_t* get__MatchId_2() const { return ____MatchId_2; }
	inline String_t** get_address_of__MatchId_2() { return &____MatchId_2; }
	inline void set__MatchId_2(String_t* value)
	{
		____MatchId_2 = value;
		Il2CppCodeGenWriteBarrier(&____MatchId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
