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

// DataBet
struct  DataBet_t3438161069  : public Il2CppObject
{
public:
	// System.Single DataBet::t
	float ___t_0;
	// System.String DataBet::n
	String_t* ___n_1;
	// System.Int32 DataBet::ag
	int32_t ___ag_2;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(DataBet_t3438161069, ___t_0)); }
	inline float get_t_0() const { return ___t_0; }
	inline float* get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(float value)
	{
		___t_0 = value;
	}

	inline static int32_t get_offset_of_n_1() { return static_cast<int32_t>(offsetof(DataBet_t3438161069, ___n_1)); }
	inline String_t* get_n_1() const { return ___n_1; }
	inline String_t** get_address_of_n_1() { return &___n_1; }
	inline void set_n_1(String_t* value)
	{
		___n_1 = value;
		Il2CppCodeGenWriteBarrier(&___n_1, value);
	}

	inline static int32_t get_offset_of_ag_2() { return static_cast<int32_t>(offsetof(DataBet_t3438161069, ___ag_2)); }
	inline int32_t get_ag_2() const { return ___ag_2; }
	inline int32_t* get_address_of_ag_2() { return &___ag_2; }
	inline void set_ag_2(int32_t value)
	{
		___ag_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
