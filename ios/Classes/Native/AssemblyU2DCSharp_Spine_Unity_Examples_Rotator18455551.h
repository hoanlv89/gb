#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.Rotator
struct  Rotator_t18455551  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 Spine.Unity.Examples.Rotator::direction
	Vector3_t2243707580  ___direction_2;
	// System.Single Spine.Unity.Examples.Rotator::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(Rotator_t18455551, ___direction_2)); }
	inline Vector3_t2243707580  get_direction_2() const { return ___direction_2; }
	inline Vector3_t2243707580 * get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(Vector3_t2243707580  value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Rotator_t18455551, ___speed_3)); }
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
