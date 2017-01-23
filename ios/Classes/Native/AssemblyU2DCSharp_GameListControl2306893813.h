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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameListControl
struct  GameListControl_t2306893813  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform GameListControl::pfGameItem
	RectTransform_t3349966182 * ___pfGameItem_2;
	// UnityEngine.RectTransform GameListControl::rectTransform
	RectTransform_t3349966182 * ___rectTransform_3;
	// UnityEngine.Sprite[] GameListControl::gamelogo
	SpriteU5BU5D_t3359083662* ___gamelogo_4;

public:
	inline static int32_t get_offset_of_pfGameItem_2() { return static_cast<int32_t>(offsetof(GameListControl_t2306893813, ___pfGameItem_2)); }
	inline RectTransform_t3349966182 * get_pfGameItem_2() const { return ___pfGameItem_2; }
	inline RectTransform_t3349966182 ** get_address_of_pfGameItem_2() { return &___pfGameItem_2; }
	inline void set_pfGameItem_2(RectTransform_t3349966182 * value)
	{
		___pfGameItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___pfGameItem_2, value);
	}

	inline static int32_t get_offset_of_rectTransform_3() { return static_cast<int32_t>(offsetof(GameListControl_t2306893813, ___rectTransform_3)); }
	inline RectTransform_t3349966182 * get_rectTransform_3() const { return ___rectTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_3() { return &___rectTransform_3; }
	inline void set_rectTransform_3(RectTransform_t3349966182 * value)
	{
		___rectTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_3, value);
	}

	inline static int32_t get_offset_of_gamelogo_4() { return static_cast<int32_t>(offsetof(GameListControl_t2306893813, ___gamelogo_4)); }
	inline SpriteU5BU5D_t3359083662* get_gamelogo_4() const { return ___gamelogo_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_gamelogo_4() { return &___gamelogo_4; }
	inline void set_gamelogo_4(SpriteU5BU5D_t3359083662* value)
	{
		___gamelogo_4 = value;
		Il2CppCodeGenWriteBarrier(&___gamelogo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
