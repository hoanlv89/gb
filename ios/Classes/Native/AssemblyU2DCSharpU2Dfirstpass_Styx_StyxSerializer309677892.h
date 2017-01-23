#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Styx.ObjectFactory
struct ObjectFactory_t3482583989;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Styx.StyxSerializer
struct  StyxSerializer_t309677892  : public Il2CppObject
{
public:
	// Styx.ObjectFactory Styx.StyxSerializer::factory
	Il2CppObject * ___factory_1;

public:
	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(StyxSerializer_t309677892, ___factory_1)); }
	inline Il2CppObject * get_factory_1() const { return ___factory_1; }
	inline Il2CppObject ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(Il2CppObject * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier(&___factory_1, value);
	}
};

struct StyxSerializer_t309677892_StaticFields
{
public:
	// System.Int32 Styx.StyxSerializer::HEADER_SIZE
	int32_t ___HEADER_SIZE_0;

public:
	inline static int32_t get_offset_of_HEADER_SIZE_0() { return static_cast<int32_t>(offsetof(StyxSerializer_t309677892_StaticFields, ___HEADER_SIZE_0)); }
	inline int32_t get_HEADER_SIZE_0() const { return ___HEADER_SIZE_0; }
	inline int32_t* get_address_of_HEADER_SIZE_0() { return &___HEADER_SIZE_0; }
	inline void set_HEADER_SIZE_0(int32_t value)
	{
		___HEADER_SIZE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
