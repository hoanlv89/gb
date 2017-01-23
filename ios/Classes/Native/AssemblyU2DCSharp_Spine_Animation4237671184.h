#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t1191433273;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Animation
struct  Animation_t4237671184  : public Il2CppObject
{
public:
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_t1191433273 * ___timelines_0;
	// System.Single Spine.Animation::duration
	float ___duration_1;
	// System.String Spine.Animation::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_timelines_0() { return static_cast<int32_t>(offsetof(Animation_t4237671184, ___timelines_0)); }
	inline ExposedList_1_t1191433273 * get_timelines_0() const { return ___timelines_0; }
	inline ExposedList_1_t1191433273 ** get_address_of_timelines_0() { return &___timelines_0; }
	inline void set_timelines_0(ExposedList_1_t1191433273 * value)
	{
		___timelines_0 = value;
		Il2CppCodeGenWriteBarrier(&___timelines_0, value);
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(Animation_t4237671184, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Animation_t4237671184, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
