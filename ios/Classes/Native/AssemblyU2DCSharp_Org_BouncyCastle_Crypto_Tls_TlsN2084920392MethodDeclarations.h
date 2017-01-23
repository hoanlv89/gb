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

// Org.BouncyCastle.Crypto.Tls.TlsNullCompression
struct TlsNullCompression_t2084920392;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsNullCompression::.ctor()
extern "C"  void TlsNullCompression__ctor_m1216555303 (TlsNullCompression_t2084920392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Crypto.Tls.TlsNullCompression::Compress(System.IO.Stream)
extern "C"  Stream_t3255436806 * TlsNullCompression_Compress_m3079835068 (TlsNullCompression_t2084920392 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Crypto.Tls.TlsNullCompression::Decompress(System.IO.Stream)
extern "C"  Stream_t3255436806 * TlsNullCompression_Decompress_m2345090123 (TlsNullCompression_t2084920392 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
