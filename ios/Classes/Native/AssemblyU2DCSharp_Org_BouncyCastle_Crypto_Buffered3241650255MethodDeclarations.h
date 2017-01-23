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

// Org.BouncyCastle.Crypto.BufferedCipherBase
struct BufferedCipherBase_t3241650255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::.ctor()
extern "C"  void BufferedCipherBase__ctor_m4047865665 (BufferedCipherBase_t3241650255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t BufferedCipherBase_ProcessByte_m2778096057 (BufferedCipherBase_t3241650255 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* BufferedCipherBase_ProcessBytes_m519440904 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Byte[],System.Int32)
extern "C"  int32_t BufferedCipherBase_ProcessBytes_m1160359578 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t BufferedCipherBase_ProcessBytes_m174884876 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* BufferedCipherBase_DoFinal_m2189946105 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t BufferedCipherBase_DoFinal_m2805209558 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Byte[],System.Int32)
extern "C"  int32_t BufferedCipherBase_DoFinal_m2565065433 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t BufferedCipherBase_DoFinal_m4251481005 (BufferedCipherBase_t3241650255 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::.cctor()
extern "C"  void BufferedCipherBase__cctor_m1908998192 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
