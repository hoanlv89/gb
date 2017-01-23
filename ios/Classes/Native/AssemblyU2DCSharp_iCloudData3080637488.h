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

// iCloudData
struct  iCloudData_t3080637488  : public Il2CppObject
{
public:
	// System.String iCloudData::_key
	String_t* ____key_0;
	// System.String iCloudData::_val
	String_t* ____val_1;
	// System.Boolean iCloudData::_IsEmpty
	bool ____IsEmpty_2;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(iCloudData_t3080637488, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier(&____key_0, value);
	}

	inline static int32_t get_offset_of__val_1() { return static_cast<int32_t>(offsetof(iCloudData_t3080637488, ____val_1)); }
	inline String_t* get__val_1() const { return ____val_1; }
	inline String_t** get_address_of__val_1() { return &____val_1; }
	inline void set__val_1(String_t* value)
	{
		____val_1 = value;
		Il2CppCodeGenWriteBarrier(&____val_1, value);
	}

	inline static int32_t get_offset_of__IsEmpty_2() { return static_cast<int32_t>(offsetof(iCloudData_t3080637488, ____IsEmpty_2)); }
	inline bool get__IsEmpty_2() const { return ____IsEmpty_2; }
	inline bool* get_address_of__IsEmpty_2() { return &____IsEmpty_2; }
	inline void set__IsEmpty_2(bool value)
	{
		____IsEmpty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
