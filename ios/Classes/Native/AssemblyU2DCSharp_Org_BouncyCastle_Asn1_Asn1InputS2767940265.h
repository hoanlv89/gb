#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;

#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Utilities_3440239854.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Asn1.Asn1InputStream
struct  Asn1InputStream_t2767940265  : public FilterStream_t3440239854
{
public:
	// System.Int32 Org.BouncyCastle.Asn1.Asn1InputStream::limit
	int32_t ___limit_2;
	// System.Byte[][] Org.BouncyCastle.Asn1.Asn1InputStream::tmpBuffers
	ByteU5BU5DU5BU5D_t717853552* ___tmpBuffers_3;

public:
	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(Asn1InputStream_t2767940265, ___limit_2)); }
	inline int32_t get_limit_2() const { return ___limit_2; }
	inline int32_t* get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(int32_t value)
	{
		___limit_2 = value;
	}

	inline static int32_t get_offset_of_tmpBuffers_3() { return static_cast<int32_t>(offsetof(Asn1InputStream_t2767940265, ___tmpBuffers_3)); }
	inline ByteU5BU5DU5BU5D_t717853552* get_tmpBuffers_3() const { return ___tmpBuffers_3; }
	inline ByteU5BU5DU5BU5D_t717853552** get_address_of_tmpBuffers_3() { return &___tmpBuffers_3; }
	inline void set_tmpBuffers_3(ByteU5BU5DU5BU5D_t717853552* value)
	{
		___tmpBuffers_3 = value;
		Il2CppCodeGenWriteBarrier(&___tmpBuffers_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
