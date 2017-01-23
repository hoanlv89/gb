#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// Spine.AtlasPage
struct AtlasPage_t1041509742;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Texture,Spine.AtlasPage>
struct  KeyValuePair_2_t1545857044 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Texture_t2243626319 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AtlasPage_t1041509742 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1545857044, ___key_0)); }
	inline Texture_t2243626319 * get_key_0() const { return ___key_0; }
	inline Texture_t2243626319 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Texture_t2243626319 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1545857044, ___value_1)); }
	inline AtlasPage_t1041509742 * get_value_1() const { return ___value_1; }
	inline AtlasPage_t1041509742 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AtlasPage_t1041509742 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
