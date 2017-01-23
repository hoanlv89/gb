#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_ScoreCollection
struct GK_ScoreCollection_t4092547735;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// GK_LeaderBoardInfo
struct GK_LeaderBoardInfo_t3670215494;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Leaderboard
struct  GK_Leaderboard_t156446466  : public Il2CppObject
{
public:
	// GK_ScoreCollection GK_Leaderboard::SocsialCollection
	GK_ScoreCollection_t4092547735 * ___SocsialCollection_0;
	// GK_ScoreCollection GK_Leaderboard::GlobalCollection
	GK_ScoreCollection_t4092547735 * ___GlobalCollection_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GK_Leaderboard::currentPlayerRank
	Dictionary_2_t3986656710 * ___currentPlayerRank_2;
	// GK_LeaderBoardInfo GK_Leaderboard::_info
	GK_LeaderBoardInfo_t3670215494 * ____info_3;

public:
	inline static int32_t get_offset_of_SocsialCollection_0() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___SocsialCollection_0)); }
	inline GK_ScoreCollection_t4092547735 * get_SocsialCollection_0() const { return ___SocsialCollection_0; }
	inline GK_ScoreCollection_t4092547735 ** get_address_of_SocsialCollection_0() { return &___SocsialCollection_0; }
	inline void set_SocsialCollection_0(GK_ScoreCollection_t4092547735 * value)
	{
		___SocsialCollection_0 = value;
		Il2CppCodeGenWriteBarrier(&___SocsialCollection_0, value);
	}

	inline static int32_t get_offset_of_GlobalCollection_1() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___GlobalCollection_1)); }
	inline GK_ScoreCollection_t4092547735 * get_GlobalCollection_1() const { return ___GlobalCollection_1; }
	inline GK_ScoreCollection_t4092547735 ** get_address_of_GlobalCollection_1() { return &___GlobalCollection_1; }
	inline void set_GlobalCollection_1(GK_ScoreCollection_t4092547735 * value)
	{
		___GlobalCollection_1 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalCollection_1, value);
	}

	inline static int32_t get_offset_of_currentPlayerRank_2() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___currentPlayerRank_2)); }
	inline Dictionary_2_t3986656710 * get_currentPlayerRank_2() const { return ___currentPlayerRank_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_currentPlayerRank_2() { return &___currentPlayerRank_2; }
	inline void set_currentPlayerRank_2(Dictionary_2_t3986656710 * value)
	{
		___currentPlayerRank_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayerRank_2, value);
	}

	inline static int32_t get_offset_of__info_3() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ____info_3)); }
	inline GK_LeaderBoardInfo_t3670215494 * get__info_3() const { return ____info_3; }
	inline GK_LeaderBoardInfo_t3670215494 ** get_address_of__info_3() { return &____info_3; }
	inline void set__info_3(GK_LeaderBoardInfo_t3670215494 * value)
	{
		____info_3 = value;
		Il2CppCodeGenWriteBarrier(&____info_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
