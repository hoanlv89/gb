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

// Org.BouncyCastle.Asn1.LimitedInputStream
struct LimitedInputStream_t781897436;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Asn1.LimitedInputStream::.ctor(System.IO.Stream,System.Int32)
extern "C"  void LimitedInputStream__ctor_m3809813290 (LimitedInputStream_t781897436 * __this, Stream_t3255436806 * ___inStream0, int32_t ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.LimitedInputStream::GetRemaining()
extern "C"  int32_t LimitedInputStream_GetRemaining_m4202056328 (LimitedInputStream_t781897436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.LimitedInputStream::SetParentEofDetect(System.Boolean)
extern "C"  void LimitedInputStream_SetParentEofDetect_m2842804182 (LimitedInputStream_t781897436 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
