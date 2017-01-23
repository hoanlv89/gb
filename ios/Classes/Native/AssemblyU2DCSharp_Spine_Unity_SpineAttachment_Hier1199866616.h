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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SpineAttachment/Hierarchy
struct  Hierarchy_t1199866616 
{
public:
	// System.String Spine.Unity.SpineAttachment/Hierarchy::skin
	String_t* ___skin_0;
	// System.String Spine.Unity.SpineAttachment/Hierarchy::slot
	String_t* ___slot_1;
	// System.String Spine.Unity.SpineAttachment/Hierarchy::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_skin_0() { return static_cast<int32_t>(offsetof(Hierarchy_t1199866616, ___skin_0)); }
	inline String_t* get_skin_0() const { return ___skin_0; }
	inline String_t** get_address_of_skin_0() { return &___skin_0; }
	inline void set_skin_0(String_t* value)
	{
		___skin_0 = value;
		Il2CppCodeGenWriteBarrier(&___skin_0, value);
	}

	inline static int32_t get_offset_of_slot_1() { return static_cast<int32_t>(offsetof(Hierarchy_t1199866616, ___slot_1)); }
	inline String_t* get_slot_1() const { return ___slot_1; }
	inline String_t** get_address_of_slot_1() { return &___slot_1; }
	inline void set_slot_1(String_t* value)
	{
		___slot_1 = value;
		Il2CppCodeGenWriteBarrier(&___slot_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Hierarchy_t1199866616, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_t1199866616_marshaled_pinvoke
{
	char* ___skin_0;
	char* ___slot_1;
	char* ___name_2;
};
// Native definition for COM marshalling of Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_t1199866616_marshaled_com
{
	Il2CppChar* ___skin_0;
	Il2CppChar* ___slot_1;
	Il2CppChar* ___name_2;
};
