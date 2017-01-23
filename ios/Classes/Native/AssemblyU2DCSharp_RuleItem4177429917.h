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

// RuleItem
struct  RuleItem_t4177429917  : public Il2CppObject
{
public:
	// System.String RuleItem::title
	String_t* ___title_0;
	// System.String RuleItem::link
	String_t* ___link_1;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(RuleItem_t4177429917, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_link_1() { return static_cast<int32_t>(offsetof(RuleItem_t4177429917, ___link_1)); }
	inline String_t* get_link_1() const { return ___link_1; }
	inline String_t** get_address_of_link_1() { return &___link_1; }
	inline void set_link_1(String_t* value)
	{
		___link_1 = value;
		Il2CppCodeGenWriteBarrier(&___link_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
