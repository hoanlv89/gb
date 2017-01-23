#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.dst.Roulette.Path
struct  Path_t52905473  : public Il2CppObject
{
public:
	// System.String[] com.dst.Roulette.Path::_sounds
	StringU5BU5D_t1642385972* ____sounds_0;
	// UnityEngine.Vector3[] com.dst.Roulette.Path::_points
	Vector3U5BU5D_t1172311765* ____points_1;
	// System.Int32 com.dst.Roulette.Path::_returnNumber
	int32_t ____returnNumber_2;
	// System.Single com.dst.Roulette.Path::_timeSpin
	float ____timeSpin_3;
	// System.Single com.dst.Roulette.Path::_wheelSpeed
	float ____wheelSpeed_4;

public:
	inline static int32_t get_offset_of__sounds_0() { return static_cast<int32_t>(offsetof(Path_t52905473, ____sounds_0)); }
	inline StringU5BU5D_t1642385972* get__sounds_0() const { return ____sounds_0; }
	inline StringU5BU5D_t1642385972** get_address_of__sounds_0() { return &____sounds_0; }
	inline void set__sounds_0(StringU5BU5D_t1642385972* value)
	{
		____sounds_0 = value;
		Il2CppCodeGenWriteBarrier(&____sounds_0, value);
	}

	inline static int32_t get_offset_of__points_1() { return static_cast<int32_t>(offsetof(Path_t52905473, ____points_1)); }
	inline Vector3U5BU5D_t1172311765* get__points_1() const { return ____points_1; }
	inline Vector3U5BU5D_t1172311765** get_address_of__points_1() { return &____points_1; }
	inline void set__points_1(Vector3U5BU5D_t1172311765* value)
	{
		____points_1 = value;
		Il2CppCodeGenWriteBarrier(&____points_1, value);
	}

	inline static int32_t get_offset_of__returnNumber_2() { return static_cast<int32_t>(offsetof(Path_t52905473, ____returnNumber_2)); }
	inline int32_t get__returnNumber_2() const { return ____returnNumber_2; }
	inline int32_t* get_address_of__returnNumber_2() { return &____returnNumber_2; }
	inline void set__returnNumber_2(int32_t value)
	{
		____returnNumber_2 = value;
	}

	inline static int32_t get_offset_of__timeSpin_3() { return static_cast<int32_t>(offsetof(Path_t52905473, ____timeSpin_3)); }
	inline float get__timeSpin_3() const { return ____timeSpin_3; }
	inline float* get_address_of__timeSpin_3() { return &____timeSpin_3; }
	inline void set__timeSpin_3(float value)
	{
		____timeSpin_3 = value;
	}

	inline static int32_t get_offset_of__wheelSpeed_4() { return static_cast<int32_t>(offsetof(Path_t52905473, ____wheelSpeed_4)); }
	inline float get__wheelSpeed_4() const { return ____wheelSpeed_4; }
	inline float* get_address_of__wheelSpeed_4() { return &____wheelSpeed_4; }
	inline void set__wheelSpeed_4(float value)
	{
		____wheelSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
