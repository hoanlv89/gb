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
// SwapCardableGame
struct SwapCardableGame_t4149558431;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardAction_Swapable
struct  CardAction_Swapable_t672889186  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CardAction_Swapable::dis_input
	Vector3_t2243707580  ___dis_input_2;
	// System.Boolean CardAction_Swapable::isSelected
	bool ___isSelected_3;
	// System.Boolean CardAction_Swapable::onMoving
	bool ___onMoving_4;
	// UnityEngine.Vector2 CardAction_Swapable::pos_range
	Vector2_t2243707579  ___pos_range_5;
	// System.Boolean CardAction_Swapable::clickAction
	bool ___clickAction_6;
	// Card CardAction_Swapable::card
	Card_t34057406 * ___card_7;
	// Card CardAction_Swapable::leftSidecard
	Card_t34057406 * ___leftSidecard_8;
	// Card CardAction_Swapable::rightSidecard
	Card_t34057406 * ___rightSidecard_9;
	// SwapCardableGame CardAction_Swapable::game
	SwapCardableGame_t4149558431 * ___game_10;

public:
	inline static int32_t get_offset_of_dis_input_2() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___dis_input_2)); }
	inline Vector3_t2243707580  get_dis_input_2() const { return ___dis_input_2; }
	inline Vector3_t2243707580 * get_address_of_dis_input_2() { return &___dis_input_2; }
	inline void set_dis_input_2(Vector3_t2243707580  value)
	{
		___dis_input_2 = value;
	}

	inline static int32_t get_offset_of_isSelected_3() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___isSelected_3)); }
	inline bool get_isSelected_3() const { return ___isSelected_3; }
	inline bool* get_address_of_isSelected_3() { return &___isSelected_3; }
	inline void set_isSelected_3(bool value)
	{
		___isSelected_3 = value;
	}

	inline static int32_t get_offset_of_onMoving_4() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___onMoving_4)); }
	inline bool get_onMoving_4() const { return ___onMoving_4; }
	inline bool* get_address_of_onMoving_4() { return &___onMoving_4; }
	inline void set_onMoving_4(bool value)
	{
		___onMoving_4 = value;
	}

	inline static int32_t get_offset_of_pos_range_5() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___pos_range_5)); }
	inline Vector2_t2243707579  get_pos_range_5() const { return ___pos_range_5; }
	inline Vector2_t2243707579 * get_address_of_pos_range_5() { return &___pos_range_5; }
	inline void set_pos_range_5(Vector2_t2243707579  value)
	{
		___pos_range_5 = value;
	}

	inline static int32_t get_offset_of_clickAction_6() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___clickAction_6)); }
	inline bool get_clickAction_6() const { return ___clickAction_6; }
	inline bool* get_address_of_clickAction_6() { return &___clickAction_6; }
	inline void set_clickAction_6(bool value)
	{
		___clickAction_6 = value;
	}

	inline static int32_t get_offset_of_card_7() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___card_7)); }
	inline Card_t34057406 * get_card_7() const { return ___card_7; }
	inline Card_t34057406 ** get_address_of_card_7() { return &___card_7; }
	inline void set_card_7(Card_t34057406 * value)
	{
		___card_7 = value;
		Il2CppCodeGenWriteBarrier(&___card_7, value);
	}

	inline static int32_t get_offset_of_leftSidecard_8() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___leftSidecard_8)); }
	inline Card_t34057406 * get_leftSidecard_8() const { return ___leftSidecard_8; }
	inline Card_t34057406 ** get_address_of_leftSidecard_8() { return &___leftSidecard_8; }
	inline void set_leftSidecard_8(Card_t34057406 * value)
	{
		___leftSidecard_8 = value;
		Il2CppCodeGenWriteBarrier(&___leftSidecard_8, value);
	}

	inline static int32_t get_offset_of_rightSidecard_9() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___rightSidecard_9)); }
	inline Card_t34057406 * get_rightSidecard_9() const { return ___rightSidecard_9; }
	inline Card_t34057406 ** get_address_of_rightSidecard_9() { return &___rightSidecard_9; }
	inline void set_rightSidecard_9(Card_t34057406 * value)
	{
		___rightSidecard_9 = value;
		Il2CppCodeGenWriteBarrier(&___rightSidecard_9, value);
	}

	inline static int32_t get_offset_of_game_10() { return static_cast<int32_t>(offsetof(CardAction_Swapable_t672889186, ___game_10)); }
	inline SwapCardableGame_t4149558431 * get_game_10() const { return ___game_10; }
	inline SwapCardableGame_t4149558431 ** get_address_of_game_10() { return &___game_10; }
	inline void set_game_10(SwapCardableGame_t4149558431 * value)
	{
		___game_10 = value;
		Il2CppCodeGenWriteBarrier(&___game_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
