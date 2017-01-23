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

// Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression/DeflateOutputStream
struct DeflateOutputStream_t4293756753;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression/DeflateOutputStream::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream,System.Boolean)
extern "C"  void DeflateOutputStream__ctor_m2187704759 (DeflateOutputStream_t4293756753 * __this, Stream_t3255436806 * ___output0, ZStream_t708755204 * ___z1, bool ___compress2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression/DeflateOutputStream::Flush()
extern "C"  void DeflateOutputStream_Flush_m2256697138 (DeflateOutputStream_t4293756753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
