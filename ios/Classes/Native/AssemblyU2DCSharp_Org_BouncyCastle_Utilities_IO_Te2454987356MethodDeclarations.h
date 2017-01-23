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

// Org.BouncyCastle.Utilities.IO.TeeInputStream
struct TeeInputStream_t2454987356;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Utilities.IO.TeeInputStream::.ctor(System.IO.Stream,System.IO.Stream)
extern "C"  void TeeInputStream__ctor_m1013337467 (TeeInputStream_t2454987356 * __this, Stream_t3255436806 * ___input0, Stream_t3255436806 * ___tee1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.TeeInputStream::Dispose(System.Boolean)
extern "C"  void TeeInputStream_Dispose_m1675427027 (TeeInputStream_t2454987356 * __this, bool ___isDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.TeeInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t TeeInputStream_Read_m3748714918 (TeeInputStream_t2454987356 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.TeeInputStream::ReadByte()
extern "C"  int32_t TeeInputStream_ReadByte_m2076608025 (TeeInputStream_t2454987356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
