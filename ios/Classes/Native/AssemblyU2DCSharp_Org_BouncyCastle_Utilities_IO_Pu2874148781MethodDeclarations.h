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

// Org.BouncyCastle.Utilities.IO.PushbackStream
struct PushbackStream_t2874148781;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Utilities.IO.PushbackStream::.ctor(System.IO.Stream)
extern "C"  void PushbackStream__ctor_m1248849103 (PushbackStream_t2874148781 * __this, Stream_t3255436806 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.PushbackStream::ReadByte()
extern "C"  int32_t PushbackStream_ReadByte_m3179686766 (PushbackStream_t2874148781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.PushbackStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t PushbackStream_Read_m1521930375 (PushbackStream_t2874148781 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.PushbackStream::Unread(System.Int32)
extern "C"  void PushbackStream_Unread_m3182136276 (PushbackStream_t2874148781 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
