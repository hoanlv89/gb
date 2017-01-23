#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Asn1.Utilities.FilterStream
struct  FilterStream_t3440239854  : public Stream_t3255436806
{
public:
	// System.IO.Stream Org.BouncyCastle.Asn1.Utilities.FilterStream::s
	Stream_t3255436806 * ___s_1;

public:
	inline static int32_t get_offset_of_s_1() { return static_cast<int32_t>(offsetof(FilterStream_t3440239854, ___s_1)); }
	inline Stream_t3255436806 * get_s_1() const { return ___s_1; }
	inline Stream_t3255436806 ** get_address_of_s_1() { return &___s_1; }
	inline void set_s_1(Stream_t3255436806 * value)
	{
		___s_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
