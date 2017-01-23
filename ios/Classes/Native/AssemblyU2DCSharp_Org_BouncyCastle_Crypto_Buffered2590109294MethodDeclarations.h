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

// Org.BouncyCastle.Crypto.BufferedAeadBlockCipher
struct BufferedAeadBlockCipher_t2590109294;
// Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
struct IAeadBlockCipher_t2629578910;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::.ctor(Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher)
extern "C"  void BufferedAeadBlockCipher__ctor_m1967609125 (BufferedAeadBlockCipher_t2590109294 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::get_AlgorithmName()
extern "C"  String_t* BufferedAeadBlockCipher_get_AlgorithmName_m3426376682 (BufferedAeadBlockCipher_t2590109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void BufferedAeadBlockCipher_Init_m2010873944 (BufferedAeadBlockCipher_t2590109294 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::GetBlockSize()
extern "C"  int32_t BufferedAeadBlockCipher_GetBlockSize_m519569066 (BufferedAeadBlockCipher_t2590109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t BufferedAeadBlockCipher_GetUpdateOutputSize_m2170605288 (BufferedAeadBlockCipher_t2590109294 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t BufferedAeadBlockCipher_GetOutputSize_m135832299 (BufferedAeadBlockCipher_t2590109294 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t BufferedAeadBlockCipher_ProcessByte_m4190515698 (BufferedAeadBlockCipher_t2590109294 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::ProcessByte(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* BufferedAeadBlockCipher_ProcessByte_m3498877312 (BufferedAeadBlockCipher_t2590109294 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedAeadBlockCipher_ProcessBytes_m2735510977 (BufferedAeadBlockCipher_t2590109294 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t BufferedAeadBlockCipher_ProcessBytes_m2448936561 (BufferedAeadBlockCipher_t2590109294 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::DoFinal()
extern "C"  ByteU5BU5D_t3397334013* BufferedAeadBlockCipher_DoFinal_m1801778307 (BufferedAeadBlockCipher_t2590109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::DoFinal(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedAeadBlockCipher_DoFinal_m1046607342 (BufferedAeadBlockCipher_t2590109294 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t BufferedAeadBlockCipher_DoFinal_m2686315923 (BufferedAeadBlockCipher_t2590109294 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedAeadBlockCipher::Reset()
extern "C"  void BufferedAeadBlockCipher_Reset_m3037411261 (BufferedAeadBlockCipher_t2590109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
