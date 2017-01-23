#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_LeaderboardSet
struct GK_LeaderboardSet_t5314098;

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LoadSetLeaderboardsInfoResult
struct  ISN_LoadSetLeaderboardsInfoResult_t3997789804  : public ISN_Result_t2775631610
{
public:
	// GK_LeaderboardSet ISN_LoadSetLeaderboardsInfoResult::_LeaderBoardsSet
	GK_LeaderboardSet_t5314098 * ____LeaderBoardsSet_2;

public:
	inline static int32_t get_offset_of__LeaderBoardsSet_2() { return static_cast<int32_t>(offsetof(ISN_LoadSetLeaderboardsInfoResult_t3997789804, ____LeaderBoardsSet_2)); }
	inline GK_LeaderboardSet_t5314098 * get__LeaderBoardsSet_2() const { return ____LeaderBoardsSet_2; }
	inline GK_LeaderboardSet_t5314098 ** get_address_of__LeaderBoardsSet_2() { return &____LeaderBoardsSet_2; }
	inline void set__LeaderBoardsSet_2(GK_LeaderboardSet_t5314098 * value)
	{
		____LeaderBoardsSet_2 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderBoardsSet_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
