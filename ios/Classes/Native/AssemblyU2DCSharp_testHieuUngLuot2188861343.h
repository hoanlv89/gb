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
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testHieuUngLuot
struct  testHieuUngLuot_t2188861343  : public MonoBehaviour_t1158329972
{
public:
	// System.Single testHieuUngLuot::anpha
	float ___anpha_2;
	// UnityEngine.RectTransform testHieuUngLuot::img
	RectTransform_t3349966182 * ___img_3;
	// UnityEngine.Color32 testHieuUngLuot::color
	Color32_t874517518  ___color_4;

public:
	inline static int32_t get_offset_of_anpha_2() { return static_cast<int32_t>(offsetof(testHieuUngLuot_t2188861343, ___anpha_2)); }
	inline float get_anpha_2() const { return ___anpha_2; }
	inline float* get_address_of_anpha_2() { return &___anpha_2; }
	inline void set_anpha_2(float value)
	{
		___anpha_2 = value;
	}

	inline static int32_t get_offset_of_img_3() { return static_cast<int32_t>(offsetof(testHieuUngLuot_t2188861343, ___img_3)); }
	inline RectTransform_t3349966182 * get_img_3() const { return ___img_3; }
	inline RectTransform_t3349966182 ** get_address_of_img_3() { return &___img_3; }
	inline void set_img_3(RectTransform_t3349966182 * value)
	{
		___img_3 = value;
		Il2CppCodeGenWriteBarrier(&___img_3, value);
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(testHieuUngLuot_t2188861343, ___color_4)); }
	inline Color32_t874517518  get_color_4() const { return ___color_4; }
	inline Color32_t874517518 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_t874517518  value)
	{
		___color_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
