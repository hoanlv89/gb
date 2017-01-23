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

// TalaCardHighLighting
struct  TalaCardHighLighting_t713346722  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TalaCardHighLighting::dy
	float ___dy_2;
	// UnityEngine.RectTransform TalaCardHighLighting::rect
	RectTransform_t3349966182 * ___rect_4;

public:
	inline static int32_t get_offset_of_dy_2() { return static_cast<int32_t>(offsetof(TalaCardHighLighting_t713346722, ___dy_2)); }
	inline float get_dy_2() const { return ___dy_2; }
	inline float* get_address_of_dy_2() { return &___dy_2; }
	inline void set_dy_2(float value)
	{
		___dy_2 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(TalaCardHighLighting_t713346722, ___rect_4)); }
	inline RectTransform_t3349966182 * get_rect_4() const { return ___rect_4; }
	inline RectTransform_t3349966182 ** get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(RectTransform_t3349966182 * value)
	{
		___rect_4 = value;
		Il2CppCodeGenWriteBarrier(&___rect_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
