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

// Org.BouncyCastle.Crypto.BufferedBlockCipher
struct BufferedBlockCipher_t711630611;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::.ctor()
extern "C"  void BufferedBlockCipher__ctor_m725406141 (BufferedBlockCipher_t711630611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void BufferedBlockCipher__ctor_m3237515931 (BufferedBlockCipher_t711630611 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.BufferedBlockCipher::get_AlgorithmName()
extern "C"  String_t* BufferedBlockCipher_get_AlgorithmName_m1285766757 (BufferedBlockCipher_t711630611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void BufferedBlockCipher_Init_m2152273405 (BufferedBlockCipher_t711630611 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::GetBlockSize()
extern "C"  int32_t BufferedBlockCipher_GetBlockSize_m1374040041 (BufferedBlockCipher_t711630611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t BufferedBlockCipher_GetUpdateOutputSize_m3984008487 (BufferedBlockCipher_t711630611 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t BufferedBlockCipher_GetOutputSize_m2956825290 (BufferedBlockCipher_t711630611 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t BufferedBlockCipher_ProcessByte_m2458903761 (BufferedBlockCipher_t711630611 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessByte(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* BufferedBlockCipher_ProcessByte_m2015033157 (BufferedBlockCipher_t711630611 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedBlockCipher_ProcessBytes_m3290408998 (BufferedBlockCipher_t711630611 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t BufferedBlockCipher_ProcessBytes_m1847667792 (BufferedBlockCipher_t711630611 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::DoFinal()
extern "C"  ByteU5BU5D_t3397334013* BufferedBlockCipher_DoFinal_m4228699934 (BufferedBlockCipher_t711630611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::DoFinal(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedBlockCipher_DoFinal_m3754092009 (BufferedBlockCipher_t711630611 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t BufferedBlockCipher_DoFinal_m3144938098 (BufferedBlockCipher_t711630611 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::Reset()
extern "C"  void BufferedBlockCipher_Reset_m2268954562 (BufferedBlockCipher_t711630611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
