#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Card
struct Card_t34057406;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardAction
struct  CardAction_t3697010252  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CardAction::orgSiblingIndex
	int32_t ___orgSiblingIndex_2;
	// System.Int32 CardAction::stt
	int32_t ___stt_3;
	// System.Int32 CardAction::indexSwap
	int32_t ___indexSwap_4;
	// System.Single CardAction::dPos
	float ___dPos_5;
	// Card CardAction::card
	Card_t34057406 * ___card_6;

public:
	inline static int32_t get_offset_of_orgSiblingIndex_2() { return static_cast<int32_t>(offsetof(CardAction_t3697010252, ___orgSiblingIndex_2)); }
	inline int32_t get_orgSiblingIndex_2() const { return ___orgSiblingIndex_2; }
	inline int32_t* get_address_of_orgSiblingIndex_2() { return &___orgSiblingIndex_2; }
	inline void set_orgSiblingIndex_2(int32_t value)
	{
		___orgSiblingIndex_2 = value;
	}

	inline static int32_t get_offset_of_stt_3() { return static_cast<int32_t>(offsetof(CardAction_t3697010252, ___stt_3)); }
	inline int32_t get_stt_3() const { return ___stt_3; }
	inline int32_t* get_address_of_stt_3() { return &___stt_3; }
	inline void set_stt_3(int32_t value)
	{
		___stt_3 = value;
	}

	inline static int32_t get_offset_of_indexSwap_4() { return static_cast<int32_t>(offsetof(CardAction_t3697010252, ___indexSwap_4)); }
	inline int32_t get_indexSwap_4() const { return ___indexSwap_4; }
	inline int32_t* get_address_of_indexSwap_4() { return &___indexSwap_4; }
	inline void set_indexSwap_4(int32_t value)
	{
		___indexSwap_4 = value;
	}

	inline static int32_t get_offset_of_dPos_5() { return static_cast<int32_t>(offsetof(CardAction_t3697010252, ___dPos_5)); }
	inline float get_dPos_5() const { return ___dPos_5; }
	inline float* get_address_of_dPos_5() { return &___dPos_5; }
	inline void set_dPos_5(float value)
	{
		___dPos_5 = value;
	}

	inline static int32_t get_offset_of_card_6() { return static_cast<int32_t>(offsetof(CardAction_t3697010252, ___card_6)); }
	inline Card_t34057406 * get_card_6() const { return ___card_6; }
	inline Card_t34057406 ** get_address_of_card_6() { return &___card_6; }
	inline void set_card_6(Card_t34057406 * value)
	{
		___card_6 = value;
		Il2CppCodeGenWriteBarrier(&___card_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
