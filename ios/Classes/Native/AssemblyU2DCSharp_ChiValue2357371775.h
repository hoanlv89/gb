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

// ChiValue
struct  ChiValue_t2357371775  : public Il2CppObject
{
public:
	// System.String ChiValue::name
	String_t* ___name_0;
	// System.Int32 ChiValue::value1
	int32_t ___value1_1;
	// System.Int32 ChiValue::value2
	int32_t ___value2_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ChiValue_t2357371775, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_value1_1() { return static_cast<int32_t>(offsetof(ChiValue_t2357371775, ___value1_1)); }
	inline int32_t get_value1_1() const { return ___value1_1; }
	inline int32_t* get_address_of_value1_1() { return &___value1_1; }
	inline void set_value1_1(int32_t value)
	{
		___value1_1 = value;
	}

	inline static int32_t get_offset_of_value2_2() { return static_cast<int32_t>(offsetof(ChiValue_t2357371775, ___value2_2)); }
	inline int32_t get_value2_2() const { return ___value2_2; }
	inline int32_t* get_address_of_value2_2() { return &___value2_2; }
	inline void set_value2_2(int32_t value)
	{
		___value2_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
