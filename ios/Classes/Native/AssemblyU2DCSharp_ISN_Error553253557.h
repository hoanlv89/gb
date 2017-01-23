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

// ISN_Error
struct  ISN_Error_t553253557  : public Il2CppObject
{
public:
	// System.Int32 ISN_Error::_Code
	int32_t ____Code_0;
	// System.String ISN_Error::_Description
	String_t* ____Description_1;

public:
	inline static int32_t get_offset_of__Code_0() { return static_cast<int32_t>(offsetof(ISN_Error_t553253557, ____Code_0)); }
	inline int32_t get__Code_0() const { return ____Code_0; }
	inline int32_t* get_address_of__Code_0() { return &____Code_0; }
	inline void set__Code_0(int32_t value)
	{
		____Code_0 = value;
	}

	inline static int32_t get_offset_of__Description_1() { return static_cast<int32_t>(offsetof(ISN_Error_t553253557, ____Description_1)); }
	inline String_t* get__Description_1() const { return ____Description_1; }
	inline String_t** get_address_of__Description_1() { return &____Description_1; }
	inline void set__Description_1(String_t* value)
	{
		____Description_1 = value;
		Il2CppCodeGenWriteBarrier(&____Description_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
