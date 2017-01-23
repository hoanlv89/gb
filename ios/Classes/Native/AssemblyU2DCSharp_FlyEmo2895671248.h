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
// Player
struct Player_t1147783557;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyEmo
struct  FlyEmo_t2895671248  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform FlyEmo::rect
	RectTransform_t3349966182 * ___rect_2;
	// Player FlyEmo::selectedPlayer
	Player_t1147783557 * ___selectedPlayer_3;

public:
	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(FlyEmo_t2895671248, ___rect_2)); }
	inline RectTransform_t3349966182 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3349966182 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3349966182 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier(&___rect_2, value);
	}

	inline static int32_t get_offset_of_selectedPlayer_3() { return static_cast<int32_t>(offsetof(FlyEmo_t2895671248, ___selectedPlayer_3)); }
	inline Player_t1147783557 * get_selectedPlayer_3() const { return ___selectedPlayer_3; }
	inline Player_t1147783557 ** get_address_of_selectedPlayer_3() { return &___selectedPlayer_3; }
	inline void set_selectedPlayer_3(Player_t1147783557 * value)
	{
		___selectedPlayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPlayer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
