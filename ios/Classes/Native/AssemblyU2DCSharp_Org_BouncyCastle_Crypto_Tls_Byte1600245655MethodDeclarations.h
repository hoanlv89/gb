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

// Org.BouncyCastle.Crypto.Tls.ByteQueue
struct ByteQueue_t1600245655;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.ByteQueue::.ctor()
extern "C"  void ByteQueue__ctor_m415754550 (ByteQueue_t1600245655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ByteQueue::.ctor(System.Int32)
extern "C"  void ByteQueue__ctor_m294031751 (ByteQueue_t1600245655 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.ByteQueue::NextTwoPow(System.Int32)
extern "C"  int32_t ByteQueue_NextTwoPow_m1853658918 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ByteQueue::Read(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  void ByteQueue_Read_m1859083960 (ByteQueue_t1600245655 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, int32_t ___len2, int32_t ___skip3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ByteQueue::AddData(System.Byte[],System.Int32,System.Int32)
extern "C"  void ByteQueue_AddData_m3774563106 (ByteQueue_t1600245655 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ByteQueue::RemoveData(System.Int32)
extern "C"  void ByteQueue_RemoveData_m3148899209 (ByteQueue_t1600245655 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ByteQueue::RemoveData(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  void ByteQueue_RemoveData_m3843751700 (ByteQueue_t1600245655 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, int32_t ___skip3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.ByteQueue::RemoveData(System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ByteQueue_RemoveData_m3965332136 (ByteQueue_t1600245655 * __this, int32_t ___len0, int32_t ___skip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.ByteQueue::get_Available()
extern "C"  int32_t ByteQueue_get_Available_m3169196712 (ByteQueue_t1600245655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
