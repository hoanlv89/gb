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
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemResult
struct  ItemResult_t3317645702  : public Il2CppObject
{
public:
	// System.Int32 ItemResult::ag
	int32_t ___ag_0;
	// System.String ItemResult::name
	String_t* ___name_1;
	// System.Text.StringBuilder ItemResult::note
	StringBuilder_t1221177846 * ___note_2;
	// System.Int32 ItemResult::max
	int32_t ___max_3;

public:
	inline static int32_t get_offset_of_ag_0() { return static_cast<int32_t>(offsetof(ItemResult_t3317645702, ___ag_0)); }
	inline int32_t get_ag_0() const { return ___ag_0; }
	inline int32_t* get_address_of_ag_0() { return &___ag_0; }
	inline void set_ag_0(int32_t value)
	{
		___ag_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ItemResult_t3317645702, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_note_2() { return static_cast<int32_t>(offsetof(ItemResult_t3317645702, ___note_2)); }
	inline StringBuilder_t1221177846 * get_note_2() const { return ___note_2; }
	inline StringBuilder_t1221177846 ** get_address_of_note_2() { return &___note_2; }
	inline void set_note_2(StringBuilder_t1221177846 * value)
	{
		___note_2 = value;
		Il2CppCodeGenWriteBarrier(&___note_2, value);
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(ItemResult_t3317645702, ___max_3)); }
	inline int32_t get_max_3() const { return ___max_3; }
	inline int32_t* get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(int32_t value)
	{
		___max_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
