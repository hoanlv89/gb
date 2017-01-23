#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.ConstrainedCamera
struct  ConstrainedCamera_t95297041  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Spine.Unity.Examples.ConstrainedCamera::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Vector3 Spine.Unity.Examples.ConstrainedCamera::offset
	Vector3_t2243707580  ___offset_3;
	// UnityEngine.Vector3 Spine.Unity.Examples.ConstrainedCamera::min
	Vector3_t2243707580  ___min_4;
	// UnityEngine.Vector3 Spine.Unity.Examples.ConstrainedCamera::max
	Vector3_t2243707580  ___max_5;
	// System.Single Spine.Unity.Examples.ConstrainedCamera::smoothing
	float ___smoothing_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t95297041, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t95297041, ___offset_3)); }
	inline Vector3_t2243707580  get_offset_3() const { return ___offset_3; }
	inline Vector3_t2243707580 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t2243707580  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_min_4() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t95297041, ___min_4)); }
	inline Vector3_t2243707580  get_min_4() const { return ___min_4; }
	inline Vector3_t2243707580 * get_address_of_min_4() { return &___min_4; }
	inline void set_min_4(Vector3_t2243707580  value)
	{
		___min_4 = value;
	}

	inline static int32_t get_offset_of_max_5() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t95297041, ___max_5)); }
	inline Vector3_t2243707580  get_max_5() const { return ___max_5; }
	inline Vector3_t2243707580 * get_address_of_max_5() { return &___max_5; }
	inline void set_max_5(Vector3_t2243707580  value)
	{
		___max_5 = value;
	}

	inline static int32_t get_offset_of_smoothing_6() { return static_cast<int32_t>(offsetof(ConstrainedCamera_t95297041, ___smoothing_6)); }
	inline float get_smoothing_6() const { return ___smoothing_6; }
	inline float* get_address_of_smoothing_6() { return &___smoothing_6; }
	inline void set_smoothing_6(float value)
	{
		___smoothing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
