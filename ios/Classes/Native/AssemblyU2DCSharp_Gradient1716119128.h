#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect1728560551.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gradient
struct  Gradient_t1716119128  : public BaseMeshEffect_t1728560551
{
public:
	// UnityEngine.Color32 Gradient::topColor
	Color32_t874517518  ___topColor_3;
	// UnityEngine.Color32 Gradient::bottomColor
	Color32_t874517518  ___bottomColor_4;

public:
	inline static int32_t get_offset_of_topColor_3() { return static_cast<int32_t>(offsetof(Gradient_t1716119128, ___topColor_3)); }
	inline Color32_t874517518  get_topColor_3() const { return ___topColor_3; }
	inline Color32_t874517518 * get_address_of_topColor_3() { return &___topColor_3; }
	inline void set_topColor_3(Color32_t874517518  value)
	{
		___topColor_3 = value;
	}

	inline static int32_t get_offset_of_bottomColor_4() { return static_cast<int32_t>(offsetof(Gradient_t1716119128, ___bottomColor_4)); }
	inline Color32_t874517518  get_bottomColor_4() const { return ___bottomColor_4; }
	inline Color32_t874517518 * get_address_of_bottomColor_4() { return &___bottomColor_4; }
	inline void set_bottomColor_4(Color32_t874517518  value)
	{
		___bottomColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
