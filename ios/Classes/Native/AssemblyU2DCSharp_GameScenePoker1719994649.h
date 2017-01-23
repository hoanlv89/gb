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
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;

#include "AssemblyU2DCSharp_GameScene1466645730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameScenePoker
struct  GameScenePoker_t1719994649  : public GameScene_t1466645730
{
public:
	// UnityEngine.RectTransform GameScenePoker::BestPokerHand
	RectTransform_t3349966182 * ___BestPokerHand_46;
	// System.Collections.Generic.List`1<Card> GameScenePoker::communityCards
	List_1_t3698145834 * ___communityCards_47;
	// UnityEngine.RectTransform GameScenePoker::bestHandTransform
	RectTransform_t3349966182 * ___bestHandTransform_48;

public:
	inline static int32_t get_offset_of_BestPokerHand_46() { return static_cast<int32_t>(offsetof(GameScenePoker_t1719994649, ___BestPokerHand_46)); }
	inline RectTransform_t3349966182 * get_BestPokerHand_46() const { return ___BestPokerHand_46; }
	inline RectTransform_t3349966182 ** get_address_of_BestPokerHand_46() { return &___BestPokerHand_46; }
	inline void set_BestPokerHand_46(RectTransform_t3349966182 * value)
	{
		___BestPokerHand_46 = value;
		Il2CppCodeGenWriteBarrier(&___BestPokerHand_46, value);
	}

	inline static int32_t get_offset_of_communityCards_47() { return static_cast<int32_t>(offsetof(GameScenePoker_t1719994649, ___communityCards_47)); }
	inline List_1_t3698145834 * get_communityCards_47() const { return ___communityCards_47; }
	inline List_1_t3698145834 ** get_address_of_communityCards_47() { return &___communityCards_47; }
	inline void set_communityCards_47(List_1_t3698145834 * value)
	{
		___communityCards_47 = value;
		Il2CppCodeGenWriteBarrier(&___communityCards_47, value);
	}

	inline static int32_t get_offset_of_bestHandTransform_48() { return static_cast<int32_t>(offsetof(GameScenePoker_t1719994649, ___bestHandTransform_48)); }
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
