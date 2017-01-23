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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardAction2
struct  CardAction2_t1917376570  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CardAction2::index
	int32_t ___index_2;
	// System.Int32 CardAction2::pos
	int32_t ___pos_3;
	// Card CardAction2::card
	Card_t34057406 * ___card_4;
	// UnityEngine.Vector3 CardAction2::mouseDown
	Vector3_t2243707580  ___mouseDown_5;
	// System.Single CardAction2::y1
	float ___y1_6;
	// System.Single CardAction2::y2
	float ___y2_7;
	// System.Single CardAction2::y3
	float ___y3_8;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_card_4() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___card_4)); }
	inline Card_t34057406 * get_card_4() const { return ___card_4; }
	inline Card_t34057406 ** get_address_of_card_4() { return &___card_4; }
	inline void set_card_4(Card_t34057406 * value)
	{
		___card_4 = value;
		Il2CppCodeGenWriteBarrier(&___card_4, value);
	}

	inline static int32_t get_offset_of_mouseDown_5() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___mouseDown_5)); }
	inline Vector3_t2243707580  get_mouseDown_5() const { return ___mouseDown_5; }
	inline Vector3_t2243707580 * get_address_of_mouseDown_5() { return &___mouseDown_5; }
	inline void set_mouseDown_5(Vector3_t2243707580  value)
	{
		___mouseDown_5 = value;
	}

	inline static int32_t get_offset_of_y1_6() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___y1_6)); }
	inline float get_y1_6() const { return ___y1_6; }
	inline float* get_address_of_y1_6() { return &___y1_6; }
	inline void set_y1_6(float value)
	{
		___y1_6 = value;
	}

	inline static int32_t get_offset_of_y2_7() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___y2_7)); }
	inline float get_y2_7() const { return ___y2_7; }
	inline float* get_address_of_y2_7() { return &___y2_7; }
	inline void set_y2_7(float value)
	{
		___y2_7 = value;
	}

	inline static int32_t get_offset_of_y3_8() { return static_cast<int32_t>(offsetof(CardAction2_t1917376570, ___y3_8)); }
	inline float get_y3_8() const { return ___y3_8; }
	inline float* get_address_of_y3_8() { return &___y3_8; }
	inline void set_y3_8(float value)
	{
		___y3_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
