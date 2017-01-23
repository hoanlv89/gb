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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSHelper
struct  JSHelper_t2046037197  : public MonoBehaviour_t1158329972
{
public:
	// System.String JSHelper::leaderboardId
	String_t* ___leaderboardId_2;
	// System.String JSHelper::TEST_ACHIEVEMENT_1_ID
	String_t* ___TEST_ACHIEVEMENT_1_ID_3;
	// System.String JSHelper::TEST_ACHIEVEMENT_2_ID
	String_t* ___TEST_ACHIEVEMENT_2_ID_4;

public:
	inline static int32_t get_offset_of_leaderboardId_2() { return static_cast<int32_t>(offsetof(JSHelper_t2046037197, ___leaderboardId_2)); }
	inline String_t* get_leaderboardId_2() const { return ___leaderboardId_2; }
	inline String_t** get_address_of_leaderboardId_2() { return &___leaderboardId_2; }
	inline void set_leaderboardId_2(String_t* value)
	{
		___leaderboardId_2 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardId_2, value);
	}

	inline static int32_t get_offset_of_TEST_ACHIEVEMENT_1_ID_3() { return static_cast<int32_t>(offsetof(JSHelper_t2046037197, ___TEST_ACHIEVEMENT_1_ID_3)); }
	inline String_t* get_TEST_ACHIEVEMENT_1_ID_3() const { return ___TEST_ACHIEVEMENT_1_ID_3; }
	inline String_t** get_address_of_TEST_ACHIEVEMENT_1_ID_3() { return &___TEST_ACHIEVEMENT_1_ID_3; }
	inline void set_TEST_ACHIEVEMENT_1_ID_3(String_t* value)
	{
		___TEST_ACHIEVEMENT_1_ID_3 = value;
		Il2CppCodeGenWriteBarrier(&___TEST_ACHIEVEMENT_1_ID_3, value);
	}

	inline static int32_t get_offset_of_TEST_ACHIEVEMENT_2_ID_4() { return static_cast<int32_t>(offsetof(JSHelper_t2046037197, ___TEST_ACHIEVEMENT_2_ID_4)); }
	inline String_t* get_TEST_ACHIEVEMENT_2_ID_4() const { return ___TEST_ACHIEVEMENT_2_ID_4; }
	inline String_t** get_address_of_TEST_ACHIEVEMENT_2_ID_4() { return &___TEST_ACHIEVEMENT_2_ID_4; }
	inline void set_TEST_ACHIEVEMENT_2_ID_4(String_t* value)
	{
		___TEST_ACHIEVEMENT_2_ID_4 = value;
		Il2CppCodeGenWriteBarrier(&___TEST_ACHIEVEMENT_2_ID_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
