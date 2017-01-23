#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.dst.Roulette.PathSound
struct  PathSound_t2946297560  : public Il2CppObject
{
public:
	// System.String com.dst.Roulette.PathSound::name
	String_t* ___name_0;
	// System.Single com.dst.Roulette.PathSound::vol
	float ___vol_1;
	// System.Single com.dst.Roulette.PathSound::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PathSound_t2946297560, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_vol_1() { return static_cast<int32_t>(offsetof(PathSound_t2946297560, ___vol_1)); }
	inline float get_vol_1() const { return ___vol_1; }
	inline float* get_address_of_vol_1() { return &___vol_1; }
	inline void set_vol_1(float value)
	{
		___vol_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(PathSound_t2946297560, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
