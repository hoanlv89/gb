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

// PaymentScene/<doPaymentCard>c__AnonStorey0
struct  U3CdoPaymentCardU3Ec__AnonStorey0_t3927620713  : public Il2CppObject
{
public:
	// System.String PaymentScene/<doPaymentCard>c__AnonStorey0::type
	String_t* ___type_0;
	// System.String PaymentScene/<doPaymentCard>c__AnonStorey0::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CdoPaymentCardU3Ec__AnonStorey0_t3927620713, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(U3CdoPaymentCardU3Ec__AnonStorey0_t3927620713, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier(&___url_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
