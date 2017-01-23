#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Org.BouncyCastle.Crypto.Tls.TlsProtocol
struct TlsProtocol_t2348540693;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.TlsStream
struct  TlsStream_t477156699  : public Stream_t3255436806
{
public:
	// Org.BouncyCastle.Crypto.Tls.TlsProtocol Org.BouncyCastle.Crypto.Tls.TlsStream::handler
	TlsProtocol_t2348540693 * ___handler_1;

public:
	inline static int32_t get_offset_of_handler_1() { return static_cast<int32_t>(offsetof(TlsStream_t477156699, ___handler_1)); }
	inline TlsProtocol_t2348540693 * get_handler_1() const { return ___handler_1; }
	inline TlsProtocol_t2348540693 ** get_address_of_handler_1() { return &___handler_1; }
	inline void set_handler_1(TlsProtocol_t2348540693 * value)
	{
		___handler_1 = value;
		Il2CppCodeGenWriteBarrier(&___handler_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
