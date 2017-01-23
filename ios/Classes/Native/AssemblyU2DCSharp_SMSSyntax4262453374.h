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
// System.Collections.Generic.List`1<SMSSyntax>
struct List_1_t3631574506;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SMSSyntax
struct  SMSSyntax_t4262453374  : public Il2CppObject
{
public:
	// System.Int32 SMSSyntax::value
	int32_t ___value_0;
	// System.Int32 SMSSyntax::cost
	int32_t ___cost_1;
	// System.String SMSSyntax::syntax
	String_t* ___syntax_2;
	// System.String SMSSyntax::address
	String_t* ___address_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_cost_1() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374, ___cost_1)); }
	inline int32_t get_cost_1() const { return ___cost_1; }
	inline int32_t* get_address_of_cost_1() { return &___cost_1; }
	inline void set_cost_1(int32_t value)
	{
		___cost_1 = value;
	}

	inline static int32_t get_offset_of_syntax_2() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374, ___syntax_2)); }
	inline String_t* get_syntax_2() const { return ___syntax_2; }
	inline String_t** get_address_of_syntax_2() { return &___syntax_2; }
	inline void set_syntax_2(String_t* value)
	{
		___syntax_2 = value;
		Il2CppCodeGenWriteBarrier(&___syntax_2, value);
	}

	inline static int32_t get_offset_of_address_3() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374, ___address_3)); }
	inline String_t* get_address_3() const { return ___address_3; }
	inline String_t** get_address_of_address_3() { return &___address_3; }
	inline void set_address_3(String_t* value)
	{
		___address_3 = value;
		Il2CppCodeGenWriteBarrier(&___address_3, value);
	}
};

struct SMSSyntax_t4262453374_StaticFields
{
public:
	// System.Collections.Generic.List`1<SMSSyntax> SMSSyntax::viettel
	List_1_t3631574506 * ___viettel_4;
	// System.Collections.Generic.List`1<SMSSyntax> SMSSyntax::mobifone
	List_1_t3631574506 * ___mobifone_5;
	// System.Collections.Generic.List`1<SMSSyntax> SMSSyntax::vinaphone
	List_1_t3631574506 * ___vinaphone_6;

public:
	inline static int32_t get_offset_of_viettel_4() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374_StaticFields, ___viettel_4)); }
	inline List_1_t3631574506 * get_viettel_4() const { return ___viettel_4; }
	inline List_1_t3631574506 ** get_address_of_viettel_4() { return &___viettel_4; }
	inline void set_viettel_4(List_1_t3631574506 * value)
	{
		___viettel_4 = value;
		Il2CppCodeGenWriteBarrier(&___viettel_4, value);
	}

	inline static int32_t get_offset_of_mobifone_5() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374_StaticFields, ___mobifone_5)); }
	inline List_1_t3631574506 * get_mobifone_5() const { return ___mobifone_5; }
	inline List_1_t3631574506 ** get_address_of_mobifone_5() { return &___mobifone_5; }
	inline void set_mobifone_5(List_1_t3631574506 * value)
	{
		___mobifone_5 = value;
		Il2CppCodeGenWriteBarrier(&___mobifone_5, value);
	}

	inline static int32_t get_offset_of_vinaphone_6() { return static_cast<int32_t>(offsetof(SMSSyntax_t4262453374_StaticFields, ___vinaphone_6)); }
	inline List_1_t3631574506 * get_vinaphone_6() const { return ___vinaphone_6; }
	inline List_1_t3631574506 ** get_address_of_vinaphone_6() { return &___vinaphone_6; }
	inline void set_vinaphone_6(List_1_t3631574506 * value)
	{
		___vinaphone_6 = value;
		Il2CppCodeGenWriteBarrier(&___vinaphone_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
