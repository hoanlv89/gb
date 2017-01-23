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

// Org.BouncyCastle.Utilities.IO.TeeOutputStream
struct TeeOutputStream_t889422123;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Utilities.IO.TeeOutputStream::.ctor(System.IO.Stream,System.IO.Stream)
extern "C"  void TeeOutputStream__ctor_m2557518460 (TeeOutputStream_t889422123 * __this, Stream_t3255436806 * ___output0, Stream_t3255436806 * ___tee1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.TeeOutputStream::Dispose(System.Boolean)
extern "C"  void TeeOutputStream_Dispose_m2222738084 (TeeOutputStream_t889422123 * __this, bool ___isDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.TeeOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void TeeOutputStream_Write_m145570896 (TeeOutputStream_t889422123 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.TeeOutputStream::WriteByte(System.Byte)
extern "C"  void TeeOutputStream_WriteByte_m3459048796 (TeeOutputStream_t889422123 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
