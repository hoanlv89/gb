﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;

#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_IO_Base91853118.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.TeeOutputStream
struct  TeeOutputStream_t889422123  : public BaseOutputStream_t91853118
{
public:
	// System.IO.Stream Org.BouncyCastle.Utilities.IO.TeeOutputStream::output
	Stream_t3255436806 * ___output_2;
	// System.IO.Stream Org.BouncyCastle.Utilities.IO.TeeOutputStream::tee
	Stream_t3255436806 * ___tee_3;

public:
	inline static int32_t get_offset_of_output_2() { return static_cast<int32_t>(offsetof(TeeOutputStream_t889422123, ___output_2)); }
	inline Stream_t3255436806 * get_output_2() const { return ___output_2; }
	inline Stream_t3255436806 ** get_address_of_output_2() { return &___output_2; }
	inline void set_output_2(Stream_t3255436806 * value)
	{
		___output_2 = value;
		Il2CppCodeGenWriteBarrier(&___output_2, value);
	}

	inline static int32_t get_offset_of_tee_3() { return static_cast<int32_t>(offsetof(TeeOutputStream_t889422123, ___tee_3)); }
	inline Stream_t3255436806 * get_tee_3() const { return ___tee_3; }
	inline Stream_t3255436806 ** get_address_of_tee_3() { return &___tee_3; }
	inline void set_tee_3(Stream_t3255436806 * value)
	{
		___tee_3 = value;
		Il2CppCodeGenWriteBarrier(&___tee_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
