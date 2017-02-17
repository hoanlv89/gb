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

#include "AssemblyU2DCSharp_GameScene1466645730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSceneLieng
struct  GameSceneLieng_t672661359  : public GameScene_t1466645730
{
public:
	// UnityEngine.RectTransform GameSceneLieng::BestPokerHand
	RectTransform_t3349966182 * ___BestPokerHand_47;
	// UnityEngine.RectTransform GameSceneLieng::bestHandTransform
	RectTransform_t3349966182 * ___bestHandTransform_48;

public:
	inline static int32_t get_offset_of_BestPokerHand_47() { return static_cast<int32_t>(offsetof(GameSceneLieng_t672661359, ___BestPokerHand_47)); }
	inline RectTransform_t3349966182 * get_BestPokerHand_47() const { return ___BestPokerHand_47; }
	inline RectTransform_t3349966182 ** get_address_of_BestPokerHand_47() { return &___BestPokerHand_47; }
	inline void set_BestPokerHand_47(RectTransform_t3349966182 * value)
	{
		___BestPokerHand_47 = value;
		Il2CppCodeGenWriteBarrier(&___BestPokerHand_47, value);
	}

	inline static int32_t get_offset_of_bestHandTransform_48() { return static_cast<int32_t>(offsetof(GameSceneLieng_t672661359, ___bestHandTransform_48)); }
	inline RectTransform_t3349966182 * get_bestHandTransform_48() const { return ___bestHandTransform_48; }
	inline RectTransform_t3349966182 ** get_address_of_bestHandTransform_48() { return &___bestHandTransform_48; }
	inline void set_bestHandTransform_48(RectTransform_t3349966182 * value)
	{
		___bestHandTransform_48 = value;
		Il2CppCodeGenWriteBarrier(&___bestHandTransform_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
