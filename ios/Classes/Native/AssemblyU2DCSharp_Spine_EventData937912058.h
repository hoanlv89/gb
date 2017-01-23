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

// Spine.EventData
struct  EventData_t937912058  : public Il2CppObject
{
public:
	// System.String Spine.EventData::name
	String_t* ___name_0;
	// System.Int32 Spine.EventData::<Int>k__BackingField
	int32_t ___U3CIntU3Ek__BackingField_1;
	// System.Single Spine.EventData::<Float>k__BackingField
	float ___U3CFloatU3Ek__BackingField_2;
	// System.String Spine.EventData::<String>k__BackingField
	String_t* ___U3CStringU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EventData_t937912058, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_U3CIntU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventData_t937912058, ___U3CIntU3Ek__BackingField_1)); }
	inline int32_t get_U3CIntU3Ek__BackingField_1() const { return ___U3CIntU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIntU3Ek__BackingField_1() { return &___U3CIntU3Ek__BackingField_1; }
	inline void set_U3CIntU3Ek__BackingField_1(int32_t value)
	{
		___U3CIntU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFloatU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventData_t937912058, ___U3CFloatU3Ek__BackingField_2)); }
	inline float get_U3CFloatU3Ek__BackingField_2() const { return ___U3CFloatU3Ek__BackingField_2; }
	inline float* get_address_of_U3CFloatU3Ek__BackingField_2() { return &___U3CFloatU3Ek__BackingField_2; }
	inline void set_U3CFloatU3Ek__BackingField_2(float value)
	{
		___U3CFloatU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStringU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventData_t937912058, ___U3CStringU3Ek__BackingField_3)); }
	inline String_t* get_U3CStringU3Ek__BackingField_3() const { return ___U3CStringU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CStringU3Ek__BackingField_3() { return &___U3CStringU3Ek__BackingField_3; }
	inline void set_U3CStringU3Ek__BackingField_3(String_t* value)
	{
		___U3CStringU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStringU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
