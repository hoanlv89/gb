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

// PersonalAvatar
struct  PersonalAvatar_t3601077271  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform PersonalAvatar::pfImageView
	RectTransform_t3349966182 * ___pfImageView_2;
	// UnityEngine.RectTransform PersonalAvatar::gridView
	RectTransform_t3349966182 * ___gridView_3;

public:
	inline static int32_t get_offset_of_pfImageView_2() { return static_cast<int32_t>(offsetof(PersonalAvatar_t3601077271, ___pfImageView_2)); }
	inline RectTransform_t3349966182 * get_pfImageView_2() const { return ___pfImageView_2; }
	inline RectTransform_t3349966182 ** get_address_of_pfImageView_2() { return &___pfImageView_2; }
	inline void set_pfImageView_2(RectTransform_t3349966182 * value)
	{
		___pfImageView_2 = value;
		Il2CppCodeGenWriteBarrier(&___pfImageView_2, value);
	}

	inline static int32_t get_offset_of_gridView_3() { return static_cast<int32_t>(offsetof(PersonalAvatar_t3601077271, ___gridView_3)); }
	inline RectTransform_t3349966182 * get_gridView_3() const { return ___gridView_3; }
	inline RectTransform_t3349966182 ** get_address_of_gridView_3() { return &___gridView_3; }
	inline void set_gridView_3(RectTransform_t3349966182 * value)
	{
		___gridView_3 = value;
		Il2CppCodeGenWriteBarrier(&___gridView_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
