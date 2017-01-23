#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotorSliding
struct  CharacterMotorSliding_t3749388514  : public Il2CppObject
{
public:
	// System.Boolean CharacterMotorSliding::enabled
	bool ___enabled_0;
	// System.Single CharacterMotorSliding::slidingSpeed
	float ___slidingSpeed_1;
	// System.Single CharacterMotorSliding::sidewaysControl
	float ___sidewaysControl_2;
	// System.Single CharacterMotorSliding::speedControl
	float ___speedControl_3;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(CharacterMotorSliding_t3749388514, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_slidingSpeed_1() { return static_cast<int32_t>(offsetof(CharacterMotorSliding_t3749388514, ___slidingSpeed_1)); }
	inline float get_slidingSpeed_1() const { return ___slidingSpeed_1; }
	inline float* get_address_of_slidingSpeed_1() { return &___slidingSpeed_1; }
	inline void set_slidingSpeed_1(float value)
	{
		___slidingSpeed_1 = value;
	}

	inline static int32_t get_offset_of_sidewaysControl_2() { return static_cast<int32_t>(offsetof(CharacterMotorSliding_t3749388514, ___sidewaysControl_2)); }
	inline float get_sidewaysControl_2() const { return ___sidewaysControl_2; }
	inline float* get_address_of_sidewaysControl_2() { return &___sidewaysControl_2; }
	inline void set_sidewaysControl_2(float value)
	{
		___sidewaysControl_2 = value;
	}

	inline static int32_t get_offset_of_speedControl_3() { return static_cast<int32_t>(offsetof(CharacterMotorSliding_t3749388514, ___speedControl_3)); }
	inline float get_speedControl_3() const { return ___speedControl_3; }
	inline float* get_address_of_speedControl_3() { return &___speedControl_3; }
	inline void set_speedControl_3(float value)
	{
		___speedControl_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
