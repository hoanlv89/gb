#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Wheel
struct Wheel_t2775878861;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// Ball/soundDict[]
struct soundDictU5BU5D_t4176710758;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// Wheel Ball::wheel
	Wheel_t2775878861 * ___wheel_2;
	// System.Collections.Generic.List`1<System.Int32> Ball::numbers
	List_1_t1440998580 * ___numbers_3;
	// Ball/soundDict[] Ball::dicts
	soundDictU5BU5D_t4176710758* ___dicts_4;

public:
	inline static int32_t get_offset_of_wheel_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___wheel_2)); }
	inline Wheel_t2775878861 * get_wheel_2() const { return ___wheel_2; }
	inline Wheel_t2775878861 ** get_address_of_wheel_2() { return &___wheel_2; }
	inline void set_wheel_2(Wheel_t2775878861 * value)
	{
		___wheel_2 = value;
		Il2CppCodeGenWriteBarrier(&___wheel_2, value);
	}

	inline static int32_t get_offset_of_numbers_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___numbers_3)); }
	inline List_1_t1440998580 * get_numbers_3() const { return ___numbers_3; }
	inline List_1_t1440998580 ** get_address_of_numbers_3() { return &___numbers_3; }
	inline void set_numbers_3(List_1_t1440998580 * value)
	{
		___numbers_3 = value;
		Il2CppCodeGenWriteBarrier(&___numbers_3, value);
	}

	inline static int32_t get_offset_of_dicts_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___dicts_4)); }
	inline soundDictU5BU5D_t4176710758* get_dicts_4() const { return ___dicts_4; }
	inline soundDictU5BU5D_t4176710758** get_address_of_dicts_4() { return &___dicts_4; }
	inline void set_dicts_4(soundDictU5BU5D_t4176710758* value)
	{
		___dicts_4 = value;
		Il2CppCodeGenWriteBarrier(&___dicts_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
