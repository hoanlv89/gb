#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExpView
struct  ExpView_t3562557598  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider ExpView::slider
	Slider_t297367283 * ___slider_2;
	// UnityEngine.RectTransform ExpView::textEx
	RectTransform_t3349966182 * ___textEx_3;

public:
	inline static int32_t get_offset_of_slider_2() { return static_cast<int32_t>(offsetof(ExpView_t3562557598, ___slider_2)); }
	inline Slider_t297367283 * get_slider_2() const { return ___slider_2; }
	inline Slider_t297367283 ** get_address_of_slider_2() { return &___slider_2; }
	inline void set_slider_2(Slider_t297367283 * value)
	{
		___slider_2 = value;
		Il2CppCodeGenWriteBarrier(&___slider_2, value);
	}

	inline static int32_t get_offset_of_textEx_3() { return static_cast<int32_t>(offsetof(ExpView_t3562557598, ___textEx_3)); }
	inline RectTransform_t3349966182 * get_textEx_3() const { return ___textEx_3; }
	inline RectTransform_t3349966182 ** get_address_of_textEx_3() { return &___textEx_3; }
	inline void set_textEx_3(RectTransform_t3349966182 * value)
	{
		___textEx_3 = value;
		Il2CppCodeGenWriteBarrier(&___textEx_3, value);
	}
};

struct ExpView_t3562557598_StaticFields
{
public:
	// System.Int32 ExpView::evalue
	int32_t ___evalue_4;

public:
	inline static int32_t get_offset_of_evalue_4() { return static_cast<int32_t>(offsetof(ExpView_t3562557598_StaticFields, ___evalue_4)); }
	inline int32_t get_evalue_4() const { return ___evalue_4; }
	inline int32_t* get_address_of_evalue_4() { return &___evalue_4; }
	inline void set_evalue_4(int32_t value)
	{
		___evalue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
