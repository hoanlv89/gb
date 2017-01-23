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
// LTRect
struct LTRect_t2720449186;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestLeanTween
struct  TestLeanTween_t2971827547  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform TestLeanTween::rect
	RectTransform_t3349966182 * ___rect_2;
	// LTRect TestLeanTween::ltr
	LTRect_t2720449186 * ___ltr_3;

public:
	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(TestLeanTween_t2971827547, ___rect_2)); }
	inline RectTransform_t3349966182 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3349966182 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3349966182 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier(&___rect_2, value);
	}

	inline static int32_t get_offset_of_ltr_3() { return static_cast<int32_t>(offsetof(TestLeanTween_t2971827547, ___ltr_3)); }
	inline LTRect_t2720449186 * get_ltr_3() const { return ___ltr_3; }
	inline LTRect_t2720449186 ** get_address_of_ltr_3() { return &___ltr_3; }
	inline void set_ltr_3(LTRect_t2720449186 * value)
	{
		___ltr_3 = value;
		Il2CppCodeGenWriteBarrier(&___ltr_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
