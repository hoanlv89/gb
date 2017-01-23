#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression
struct TlsDeflateCompression_t206447956;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression::.ctor()
extern "C"  void TlsDeflateCompression__ctor_m2789573363 (TlsDeflateCompression_t206447956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression::.ctor(System.Int32)
extern "C"  void TlsDeflateCompression__ctor_m2508166634 (TlsDeflateCompression_t206447956 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression::Compress(System.IO.Stream)
extern "C"  Stream_t3255436806 * TlsDeflateCompression_Compress_m1794132452 (TlsDeflateCompression_t206447956 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression::Decompress(System.IO.Stream)
extern "C"  Stream_t3255436806 * TlsDeflateCompression_Decompress_m218457807 (TlsDeflateCompression_t206447956 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
