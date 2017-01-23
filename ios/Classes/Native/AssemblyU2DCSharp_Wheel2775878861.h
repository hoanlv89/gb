#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wheel
struct  Wheel_t2775878861  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Wheel::rotate
	bool ___rotate_2;
	// System.Single Wheel::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_rotate_2() { return static_cast<int32_t>(offsetof(Wheel_t2775878861, ___rotate_2)); }
	inline bool get_rotate_2() const { return ___rotate_2; }
	inline bool* get_address_of_rotate_2() { return &___rotate_2; }
	inline void set_rotate_2(bool value)
	{
		___rotate_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Wheel_t2775878861, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
