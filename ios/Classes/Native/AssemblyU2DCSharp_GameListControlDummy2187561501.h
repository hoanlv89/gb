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

#include "AssemblyU2DCSharp_GameListControl2306893813.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameListControlDummy
struct  GameListControlDummy_t2187561501  : public GameListControl_t2306893813
{
public:
	// UnityEngine.RectTransform GameListControlDummy::pfGameItem
	RectTransform_t3349966182 * ___pfGameItem_5;
	// UnityEngine.RectTransform GameListControlDummy::rectTransform
	RectTransform_t3349966182 * ___rectTransform_6;
	// UnityEngine.Sprite[] GameListControlDummy::gamelogo
	SpriteU5BU5D_t3359083662* ___gamelogo_7;

public:
	inline static int32_t get_offset_of_pfGameItem_5() { return static_cast<int32_t>(offsetof(GameListControlDummy_t2187561501, ___pfGameItem_5)); }
	inline RectTransform_t3349966182 * get_pfGameItem_5() const { return ___pfGameItem_5; }
	inline RectTransform_t3349966182 ** get_address_of_pfGameItem_5() { return &___pfGameItem_5; }
	inline void set_pfGameItem_5(RectTransform_t3349966182 * value)
	{
		___pfGameItem_5 = value;
		Il2CppCodeGenWriteBarrier(&___pfGameItem_5, value);
	}

	inline static int32_t get_offset_of_rectTransform_6() { return static_cast<int32_t>(offsetof(GameListControlDummy_t2187561501, ___rectTransform_6)); }
	inline RectTransform_t3349966182 * get_rectTransform_6() const { return ___rectTransform_6; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_6() { return &___rectTransform_6; }
	inline void set_rectTransform_6(RectTransform_t3349966182 * value)
	{
		___rectTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_6, value);
	}

	inline static int32_t get_offset_of_gamelogo_7() { return static_cast<int32_t>(offsetof(GameListControlDummy_t2187561501, ___gamelogo_7)); }
	inline SpriteU5BU5D_t3359083662* get_gamelogo_7() const { return ___gamelogo_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of_gamelogo_7() { return &___gamelogo_7; }
	inline void set_gamelogo_7(SpriteU5BU5D_t3359083662* value)
	{
		___gamelogo_7 = value;
		Il2CppCodeGenWriteBarrier(&___gamelogo_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
