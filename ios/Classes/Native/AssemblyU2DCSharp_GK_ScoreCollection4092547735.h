#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,GK_Score>
struct Dictionary_2_t536834508;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_ScoreCollection
struct  GK_ScoreCollection_t4092547735  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GK_Score> GK_ScoreCollection::AllTimeScores
	Dictionary_2_t536834508 * ___AllTimeScores_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,GK_Score> GK_ScoreCollection::WeekScores
	Dictionary_2_t536834508 * ___WeekScores_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,GK_Score> GK_ScoreCollection::TodayScores
	Dictionary_2_t536834508 * ___TodayScores_2;

public:
	inline static int32_t get_offset_of_AllTimeScores_0() { return static_cast<int32_t>(offsetof(GK_ScoreCollection_t4092547735, ___AllTimeScores_0)); }
	inline Dictionary_2_t536834508 * get_AllTimeScores_0() const { return ___AllTimeScores_0; }
	inline Dictionary_2_t536834508 ** get_address_of_AllTimeScores_0() { return &___AllTimeScores_0; }
	inline void set_AllTimeScores_0(Dictionary_2_t536834508 * value)
	{
		___AllTimeScores_0 = value;
		Il2CppCodeGenWriteBarrier(&___AllTimeScores_0, value);
	}

	inline static int32_t get_offset_of_WeekScores_1() { return static_cast<int32_t>(offsetof(GK_ScoreCollection_t4092547735, ___WeekScores_1)); }
	inline Dictionary_2_t536834508 * get_WeekScores_1() const { return ___WeekScores_1; }
	inline Dictionary_2_t536834508 ** get_address_of_WeekScores_1() { return &___WeekScores_1; }
	inline void set_WeekScores_1(Dictionary_2_t536834508 * value)
	{
		___WeekScores_1 = value;
		Il2CppCodeGenWriteBarrier(&___WeekScores_1, value);
	}

	inline static int32_t get_offset_of_TodayScores_2() { return static_cast<int32_t>(offsetof(GK_ScoreCollection_t4092547735, ___TodayScores_2)); }
	inline Dictionary_2_t536834508 * get_TodayScores_2() const { return ___TodayScores_2; }
	inline Dictionary_2_t536834508 ** get_address_of_TodayScores_2() { return &___TodayScores_2; }
	inline void set_TodayScores_2(Dictionary_2_t536834508 * value)
	{
		___TodayScores_2 = value;
		Il2CppCodeGenWriteBarrier(&___TodayScores_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
