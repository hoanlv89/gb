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
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// GK_Leaderboard
struct GK_Leaderboard_t156446466;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GK_CollectionType3353981271.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderboardCustomGUIExample
struct  LeaderboardCustomGUIExample_t1008136379  : public MonoBehaviour_t1158329972
{
public:
	// System.String LeaderboardCustomGUIExample::leaderboardId
	String_t* ___leaderboardId_2;
	// System.Int32 LeaderboardCustomGUIExample::hiScore
	int32_t ___hiScore_3;
	// UnityEngine.GUIStyle LeaderboardCustomGUIExample::headerStyle
	GUIStyle_t1799908754 * ___headerStyle_4;
	// UnityEngine.GUIStyle LeaderboardCustomGUIExample::boardStyle
	GUIStyle_t1799908754 * ___boardStyle_5;
	// GK_Leaderboard LeaderboardCustomGUIExample::loadedLeaderboard
	GK_Leaderboard_t156446466 * ___loadedLeaderboard_6;
	// GK_CollectionType LeaderboardCustomGUIExample::displayCollection
	int32_t ___displayCollection_7;

public:
	inline static int32_t get_offset_of_leaderboardId_2() { return static_cast<int32_t>(offsetof(LeaderboardCustomGUIExample_t1008136379, ___leaderboardId_2)); }
	inline String_t* get_leaderboardId_2() const { return ___leaderboardId_2; }
	inline String_t** get_address_of_leaderboardId_2() { return &___leaderboardId_2; }
	inline void set_leaderboardId_2(String_t* value)
	{
		___leaderboardId_2 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardId_2, value);
	}

	inline static int32_t get_offset_of_hiScore_3() { return static_cast<int32_t>(offsetof(LeaderboardCustomGUIExample_t1008136379, ___hiScore_3)); }
	inline int32_t get_hiScore_3() const { return ___hiScore_3; }
	inline int32_t* get_address_of_hiScore_3() { return &___hiScore_3; }
	inline void set_hiScore_3(int32_t value)
	{
		___hiScore_3 = value;
	}

	inline static int32_t get_offset_of_headerStyle_4() { return static_cast<int32_t>(offsetof(LeaderboardCustomGUIExample_t1008136379, ___headerStyle_4)); }
	inline GUIStyle_t1799908754 * get_headerStyle_4() const { return ___headerStyle_4; }
	inline GUIStyle_t1799908754 ** get_address_of_headerStyle_4() { return &___headerStyle_4; }
	inline void set_headerStyle_4(GUIStyle_t1799908754 * value)
	{
		___headerStyle_4 = value;
		Il2CppCodeGenWriteBarrier(&___headerStyle_4, value);
	}

	inline static int32_t get_offset_of_boardStyle_5() { return static_cast<int32_t>(offsetof(LeaderboardCustomGUIExample_t1008136379, ___boardStyle_5)); }
	inline GUIStyle_t1799908754 * get_boardStyle_5() const { return ___boardStyle_5; }
	inline GUIStyle_t1799908754 ** get_address_of_boardStyle_5() { return &___boardStyle_5; }
	inline void set_boardStyle_5(GUIStyle_t1799908754 * value)
	{
		___boardStyle_5 = value;
		Il2CppCodeGenWriteBarrier(&___boardStyle_5, value);
	}

	inline static int32_t get_offset_of_loadedLeaderboard_6() { return static_cast<int32_t>(offsetof(LeaderboardCustomGUIExample_t1008136379, ___loadedLeaderboard_6)); }
	inline GK_Leaderboard_t156446466 * get_loadedLeaderboard_6() const { return ___loadedLeaderboard_6; }
	inline GK_Leaderboard_t156446466 ** get_address_of_loadedLeaderboard_6() { return &___loadedLeaderboard_6; }
	inline void set_loadedLeaderboard_6(GK_Leaderboard_t156446466 * value)
	{
		___loadedLeaderboard_6 = value;
		Il2CppCodeGenWriteBarrier(&___loadedLeaderboard_6, value);
	}

	inline static int32_t get_offset_of_displayCollection_7() { return static_cast<int32_t>(offsetof(LeaderboardCustomGUIExample_t1008136379, ___displayCollection_7)); }
	inline int32_t get_displayCollection_7() const { return ___displayCollection_7; }
	inline int32_t* get_address_of_displayCollection_7() { return &___displayCollection_7; }
	inline void set_displayCollection_7(int32_t value)
	{
		___displayCollection_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
