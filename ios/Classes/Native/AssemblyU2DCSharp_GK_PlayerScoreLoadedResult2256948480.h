#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_Score
struct GK_Score_t1529008873;

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_PlayerScoreLoadedResult
struct  GK_PlayerScoreLoadedResult_t2256948480  : public ISN_Result_t2775631610
{
public:
	// GK_Score GK_PlayerScoreLoadedResult::_score
	GK_Score_t1529008873 * ____score_2;

public:
	inline static int32_t get_offset_of__score_2() { return static_cast<int32_t>(offsetof(GK_PlayerScoreLoadedResult_t2256948480, ____score_2)); }
	inline GK_Score_t1529008873 * get__score_2() const { return ____score_2; }
	inline GK_Score_t1529008873 ** get_address_of__score_2() { return &____score_2; }
	inline void set__score_2(GK_Score_t1529008873 * value)
	{
		____score_2 = value;
		Il2CppCodeGenWriteBarrier(&____score_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
