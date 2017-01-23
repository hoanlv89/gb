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
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t2719087314;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;

#include "AssemblyU2DCSharp_Player1147783557.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OtherPlayer
struct  OtherPlayer_t2731387233  : public Player_t1147783557
{
public:
	// UnityEngine.RectTransform OtherPlayer::cardTransform
	RectTransform_t3349966182 * ___cardTransform_43;
	// System.Int32 OtherPlayer::cardsInHand
	int32_t ___cardsInHand_44;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> OtherPlayer::cardsInHandList
	List_1_t2719087314 * ___cardsInHandList_45;
	// System.Collections.Generic.List`1<Card> OtherPlayer::cards
	List_1_t3698145834 * ___cards_46;
	// UnityEngine.RectTransform OtherPlayer::alarmAlert
	RectTransform_t3349966182 * ___alarmAlert_47;

public:
	inline static int32_t get_offset_of_cardTransform_43() { return static_cast<int32_t>(offsetof(OtherPlayer_t2731387233, ___cardTransform_43)); }
	inline RectTransform_t3349966182 * get_cardTransform_43() const { return ___cardTransform_43; }
	inline RectTransform_t3349966182 ** get_address_of_cardTransform_43() { return &___cardTransform_43; }
	inline void set_cardTransform_43(RectTransform_t3349966182 * value)
	{
		___cardTransform_43 = value;
		Il2CppCodeGenWriteBarrier(&___cardTransform_43, value);
	}

	inline static int32_t get_offset_of_cardsInHand_44() { return static_cast<int32_t>(offsetof(OtherPlayer_t2731387233, ___cardsInHand_44)); }
	inline int32_t get_cardsInHand_44() const { return ___cardsInHand_44; }
	inline int32_t* get_address_of_cardsInHand_44() { return &___cardsInHand_44; }
	inline void set_cardsInHand_44(int32_t value)
	{
		___cardsInHand_44 = value;
	}

	inline static int32_t get_offset_of_cardsInHandList_45() { return static_cast<int32_t>(offsetof(OtherPlayer_t2731387233, ___cardsInHandList_45)); }
	inline List_1_t2719087314 * get_cardsInHandList_45() const { return ___cardsInHandList_45; }
	inline List_1_t2719087314 ** get_address_of_cardsInHandList_45() { return &___cardsInHandList_45; }
	inline void set_cardsInHandList_45(List_1_t2719087314 * value)
	{
		___cardsInHandList_45 = value;
		Il2CppCodeGenWriteBarrier(&___cardsInHandList_45, value);
	}

	inline static int32_t get_offset_of_cards_46() { return static_cast<int32_t>(offsetof(OtherPlayer_t2731387233, ___cards_46)); }
	inline List_1_t3698145834 * get_cards_46() const { return ___cards_46; }
	inline List_1_t3698145834 ** get_address_of_cards_46() { return &___cards_46; }
	inline void set_cards_46(List_1_t3698145834 * value)
	{
		___cards_46 = value;
		Il2CppCodeGenWriteBarrier(&___cards_46, value);
	}

	inline static int32_t get_offset_of_alarmAlert_47() { return static_cast<int32_t>(offsetof(OtherPlayer_t2731387233, ___alarmAlert_47)); }
	inline RectTransform_t3349966182 * get_alarmAlert_47() const { return ___alarmAlert_47; }
	inline RectTransform_t3349966182 ** get_address_of_alarmAlert_47() { return &___alarmAlert_47; }
	inline void set_alarmAlert_47(RectTransform_t3349966182 * value)
	{
		___alarmAlert_47 = value;
		Il2CppCodeGenWriteBarrier(&___alarmAlert_47, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
