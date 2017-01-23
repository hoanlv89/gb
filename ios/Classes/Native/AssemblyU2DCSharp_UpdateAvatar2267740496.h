#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateAvatar
struct  UpdateAvatar_t2267740496  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image UpdateAvatar::avatar
	Image_t2042527209 * ___avatar_2;
	// UnityEngine.RectTransform UpdateAvatar::name
	RectTransform_t3349966182 * ___name_3;
	// UnityEngine.RectTransform UpdateAvatar::gold
	RectTransform_t3349966182 * ___gold_4;

public:
	inline static int32_t get_offset_of_avatar_2() { return static_cast<int32_t>(offsetof(UpdateAvatar_t2267740496, ___avatar_2)); }
	inline Image_t2042527209 * get_avatar_2() const { return ___avatar_2; }
	inline Image_t2042527209 ** get_address_of_avatar_2() { return &___avatar_2; }
	inline void set_avatar_2(Image_t2042527209 * value)
	{
		___avatar_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(UpdateAvatar_t2267740496, ___name_3)); }
	inline RectTransform_t3349966182 * get_name_3() const { return ___name_3; }
	inline RectTransform_t3349966182 ** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(RectTransform_t3349966182 * value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_gold_4() { return static_cast<int32_t>(offsetof(UpdateAvatar_t2267740496, ___gold_4)); }
	inline RectTransform_t3349966182 * get_gold_4() const { return ___gold_4; }
	inline RectTransform_t3349966182 ** get_address_of_gold_4() { return &___gold_4; }
	inline void set_gold_4(RectTransform_t3349966182 * value)
	{
		___gold_4 = value;
		Il2CppCodeGenWriteBarrier(&___gold_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
