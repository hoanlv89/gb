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
	RectTransform_t3349966182 * ___BestPokerHand_47;
	// System.Collections.Generic.List`1<Card> GameScenePoker::communityCards
	List_1_t3698145834 * ___communityCards_48;
	// UnityEngine.RectTransform GameScenePoker::bestHandTransform
	RectTransform_t3349966182 * ___bestHandTransform_49;

public:
	inline static int32_t get_offset_of_BestPokerHand_47() { return static_cast<int32_t>(offsetof(GameScenePoker_t1719994649, ___BestPokerHand_47)); }
	inline RectTransform_t3349966182 * get_BestPokerHand_47() const { return ___BestPokerHand_47; }
	inline RectTransform_t3349966182 ** get_address_of_BestPokerHand_47() { return &___BestPokerHand_47; }
	inline void set_BestPokerHand_47(RectTransform_t3349966182 * value)
	{
		___BestPokerHand_47 = value;
		Il2CppCodeGenWriteBarrier(&___BestPokerHand_47, value);
	}

	inline static int32_t get_offset_of_communityCards_48() { return static_cast<int32_t>(offsetof(GameScenePoker_t1719994649, ___communityCards_48)); }
	inline List_1_t3698145834 * get_communityCards_48() const { return ___communityCards_48; }
	inline List_1_t3698145834 ** get_address_of_communityCards_48() { return &___communityCards_48; }
	inline void set_communityCards_48(List_1_t3698145834 * value)
	{
		___communityCards_48 = value;
		Il2CppCodeGenWriteBarrier(&___communityCards_48, value);
	}

	inline static int32_t get_offset_of_bestHandTransform_49() { return static_cast<int32_t>(offsetof(GameScenePoker_t1719994649, ___bestHandTransform_49)); }
	inline RectTransform_t3349966182 * get_bestHandTransform_49() const { return ___bestHandTransform_49; }
	inline RectTransform_t3349966182 ** get_address_of_bestHandTransform_49() { return &___bestHandTransform_49; }
	inline void set_bestHandTransform_49(RectTransform_t3349966182 * value)
	{
		___bestHandTransform_49 = value;
		Il2CppCodeGenWriteBarrier(&___bestHandTransform_49, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
