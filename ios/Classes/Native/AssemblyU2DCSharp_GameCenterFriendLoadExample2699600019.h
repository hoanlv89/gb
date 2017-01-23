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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenterFriendLoadExample
struct  GameCenterFriendLoadExample_t2699600019  : public MonoBehaviour_t1158329972
{
public:
	// System.String GameCenterFriendLoadExample::ChallengeLeaderboard
	String_t* ___ChallengeLeaderboard_2;
	// System.String GameCenterFriendLoadExample::ChallengeAchievement
	String_t* ___ChallengeAchievement_3;
	// UnityEngine.GUIStyle GameCenterFriendLoadExample::headerStyle
	GUIStyle_t1799908754 * ___headerStyle_4;
	// UnityEngine.GUIStyle GameCenterFriendLoadExample::boardStyle
	GUIStyle_t1799908754 * ___boardStyle_5;
	// System.Boolean GameCenterFriendLoadExample::renderFriendsList
	bool ___renderFriendsList_6;

public:
	inline static int32_t get_offset_of_ChallengeLeaderboard_2() { return static_cast<int32_t>(offsetof(GameCenterFriendLoadExample_t2699600019, ___ChallengeLeaderboard_2)); }
	inline String_t* get_ChallengeLeaderboard_2() const { return ___ChallengeLeaderboard_2; }
	inline String_t** get_address_of_ChallengeLeaderboard_2() { return &___ChallengeLeaderboard_2; }
	inline void set_ChallengeLeaderboard_2(String_t* value)
	{
		___ChallengeLeaderboard_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChallengeLeaderboard_2, value);
	}

	inline static int32_t get_offset_of_ChallengeAchievement_3() { return static_cast<int32_t>(offsetof(GameCenterFriendLoadExample_t2699600019, ___ChallengeAchievement_3)); }
	inline String_t* get_ChallengeAchievement_3() const { return ___ChallengeAchievement_3; }
	inline String_t** get_address_of_ChallengeAchievement_3() { return &___ChallengeAchievement_3; }
	inline void set_ChallengeAchievement_3(String_t* value)
	{
		___ChallengeAchievement_3 = value;
		Il2CppCodeGenWriteBarrier(&___ChallengeAchievement_3, value);
	}

	inline static int32_t get_offset_of_headerStyle_4() { return static_cast<int32_t>(offsetof(GameCenterFriendLoadExample_t2699600019, ___headerStyle_4)); }
	inline GUIStyle_t1799908754 * get_headerStyle_4() const { return ___headerStyle_4; }
	inline GUIStyle_t1799908754 ** get_address_of_headerStyle_4() { return &___headerStyle_4; }
	inline void set_headerStyle_4(GUIStyle_t1799908754 * value)
	{
		___headerStyle_4 = value;
		Il2CppCodeGenWriteBarrier(&___headerStyle_4, value);
	}

	inline static int32_t get_offset_of_boardStyle_5() { return static_cast<int32_t>(offsetof(GameCenterFriendLoadExample_t2699600019, ___boardStyle_5)); }
	inline GUIStyle_t1799908754 * get_boardStyle_5() const { return ___boardStyle_5; }
	inline GUIStyle_t1799908754 ** get_address_of_boardStyle_5() { return &___boardStyle_5; }
	inline void set_boardStyle_5(GUIStyle_t1799908754 * value)
	{
		___boardStyle_5 = value;
		Il2CppCodeGenWriteBarrier(&___boardStyle_5, value);
	}

	inline static int32_t get_offset_of_renderFriendsList_6() { return static_cast<int32_t>(offsetof(GameCenterFriendLoadExample_t2699600019, ___renderFriendsList_6)); }
	inline bool get_renderFriendsList_6() const { return ___renderFriendsList_6; }
	inline bool* get_address_of_renderFriendsList_6() { return &___renderFriendsList_6; }
	inline void set_renderFriendsList_6(bool value)
	{
		___renderFriendsList_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
