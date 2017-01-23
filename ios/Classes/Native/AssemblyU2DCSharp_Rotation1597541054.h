#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotation
struct  Rotation_t1597541054  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform Rotation::rect
	RectTransform_t3349966182 * ___rect_2;
	// System.Single Rotation::totalTime
	float ___totalTime_3;

public:
	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(Rotation_t1597541054, ___rect_2)); }
	inline RectTransform_t3349966182 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3349966182 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3349966182 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier(&___rect_2, value);
	}

	inline static int32_t get_offset_of_totalTime_3() { return static_cast<int32_t>(offsetof(Rotation_t1597541054, ___totalTime_3)); }
	inline float get_totalTime_3() const { return ___totalTime_3; }
	inline float* get_address_of_totalTime_3() { return &___totalTime_3; }
	inline void set_totalTime_3(float value)
	{
		___totalTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
