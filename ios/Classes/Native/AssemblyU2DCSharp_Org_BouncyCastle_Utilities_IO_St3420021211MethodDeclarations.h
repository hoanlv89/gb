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

// Org.BouncyCastle.Utilities.IO.Streams
struct Streams_t3420021211;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Utilities.IO.Streams::.ctor()
extern "C"  void Streams__ctor_m2992642722 (Streams_t3420021211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Streams::Drain(System.IO.Stream)
extern "C"  void Streams_Drain_m3683936513 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.IO.Streams::ReadAll(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Streams_ReadAll_m3916818962 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.IO.Streams::ReadAllLimited(System.IO.Stream,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Streams_ReadAllLimited_m3246006955 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, int32_t ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.Streams::ReadFully(System.IO.Stream,System.Byte[])
extern "C"  int32_t Streams_ReadFully_m543373042 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, ByteU5BU5D_t3397334013* ___buf1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.Streams::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Streams_ReadFully_m397743548 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___off2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Streams::PipeAll(System.IO.Stream,System.IO.Stream)
extern "C"  void Streams_PipeAll_m3035224851 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, Stream_t3255436806 * ___outStr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.IO.Streams::PipeAllLimited(System.IO.Stream,System.Int64,System.IO.Stream)
extern "C"  int64_t Streams_PipeAllLimited_m1367195898 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, int64_t ___limit1, Stream_t3255436806 * ___outStr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
