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
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataCard
struct  DataCard_t2663411694  : public Il2CppObject
{
public:
	// System.String DataCard::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<Card> DataCard::chi1
	List_1_t3698145834 * ___chi1_1;
	// System.Collections.Generic.List`1<Card> DataCard::chi2
	List_1_t3698145834 * ___chi2_2;
	// System.Collections.Generic.List`1<Card> DataCard::chi3
	List_1_t3698145834 * ___chi3_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataCard_t2663411694, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_chi1_1() { return static_cast<int32_t>(offsetof(DataCard_t2663411694, ___chi1_1)); }
	inline List_1_t3698145834 * get_chi1_1() const { return ___chi1_1; }
	inline List_1_t3698145834 ** get_address_of_chi1_1() { return &___chi1_1; }
	inline void set_chi1_1(List_1_t3698145834 * value)
	{
		___chi1_1 = value;
		Il2CppCodeGenWriteBarrier(&___chi1_1, value);
	}

	inline static int32_t get_offset_of_chi2_2() { return static_cast<int32_t>(offsetof(DataCard_t2663411694, ___chi2_2)); }
	inline List_1_t3698145834 * get_chi2_2() const { return ___chi2_2; }
	inline List_1_t3698145834 ** get_address_of_chi2_2() { return &___chi2_2; }
	inline void set_chi2_2(List_1_t3698145834 * value)
	{
		___chi2_2 = value;
		Il2CppCodeGenWriteBarrier(&___chi2_2, value);
	}

	inline static int32_t get_offset_of_chi3_3() { return static_cast<int32_t>(offsetof(DataCard_t2663411694, ___chi3_3)); }
	inline List_1_t3698145834 * get_chi3_3() const { return ___chi3_3; }
	inline List_1_t3698145834 ** get_address_of_chi3_3() { return &___chi3_3; }
	inline void set_chi3_3(List_1_t3698145834 * value)
	{
		___chi3_3 = value;
		Il2CppCodeGenWriteBarrier(&___chi3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
