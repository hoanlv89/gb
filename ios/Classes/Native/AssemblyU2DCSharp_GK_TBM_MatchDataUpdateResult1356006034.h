#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_TBM_Match
struct GK_TBM_Match_t132033130;

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_MatchDataUpdateResult
struct  GK_TBM_MatchDataUpdateResult_t1356006034  : public ISN_Result_t2775631610
{
public:
	// GK_TBM_Match GK_TBM_MatchDataUpdateResult::_Match
	GK_TBM_Match_t132033130 * ____Match_2;

public:
	inline static int32_t get_offset_of__Match_2() { return static_cast<int32_t>(offsetof(GK_TBM_MatchDataUpdateResult_t1356006034, ____Match_2)); }
	inline GK_TBM_Match_t132033130 * get__Match_2() const { return ____Match_2; }
	inline GK_TBM_Match_t132033130 ** get_address_of__Match_2() { return &____Match_2; }
	inline void set__Match_2(GK_TBM_Match_t132033130 * value)
	{
		____Match_2 = value;
		Il2CppCodeGenWriteBarrier(&____Match_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
