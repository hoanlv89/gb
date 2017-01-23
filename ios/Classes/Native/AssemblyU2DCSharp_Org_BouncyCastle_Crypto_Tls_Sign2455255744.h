#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;

#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_IO_Base91853118.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream
struct  SigStream_t2455255744  : public BaseOutputStream_t91853118
{
public:
	// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream::s
	Il2CppObject * ___s_2;

public:
	inline static int32_t get_offset_of_s_2() { return static_cast<int32_t>(offsetof(SigStream_t2455255744, ___s_2)); }
	inline Il2CppObject * get_s_2() const { return ___s_2; }
	inline Il2CppObject ** get_address_of_s_2() { return &___s_2; }
	inline void set_s_2(Il2CppObject * value)
	{
		___s_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
