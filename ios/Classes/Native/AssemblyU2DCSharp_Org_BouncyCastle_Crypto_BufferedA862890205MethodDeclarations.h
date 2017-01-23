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

// Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher
struct BufferedAsymmetricBlockCipher_t862890205;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
extern "C"  void BufferedAsymmetricBlockCipher__ctor_m2787822619 (BufferedAsymmetricBlockCipher_t862890205 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::GetBufferPosition()
extern "C"  int32_t BufferedAsymmetricBlockCipher_GetBufferPosition_m1123150424 (BufferedAsymmetricBlockCipher_t862890205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::get_AlgorithmName()
extern "C"  String_t* BufferedAsymmetricBlockCipher_get_AlgorithmName_m228630331 (BufferedAsymmetricBlockCipher_t862890205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::GetBlockSize()
extern "C"  int32_t BufferedAsymmetricBlockCipher_GetBlockSize_m1206587995 (BufferedAsymmetricBlockCipher_t862890205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t BufferedAsymmetricBlockCipher_GetOutputSize_m1012309132 (BufferedAsymmetricBlockCipher_t862890205 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t BufferedAsymmetricBlockCipher_GetUpdateOutputSize_m3561882025 (BufferedAsymmetricBlockCipher_t862890205 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void BufferedAsymmetricBlockCipher_Init_m2248022871 (BufferedAsymmetricBlockCipher_t862890205 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::ProcessByte(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* BufferedAsymmetricBlockCipher_ProcessByte_m1620662047 (BufferedAsymmetricBlockCipher_t862890205 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedAsymmetricBlockCipher_ProcessBytes_m3410956300 (BufferedAsymmetricBlockCipher_t862890205 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::DoFinal()
extern "C"  ByteU5BU5D_t3397334013* BufferedAsymmetricBlockCipher_DoFinal_m343918148 (BufferedAsymmetricBlockCipher_t862890205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::DoFinal(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedAsymmetricBlockCipher_DoFinal_m1713002467 (BufferedAsymmetricBlockCipher_t862890205 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher::Reset()
extern "C"  void BufferedAsymmetricBlockCipher_Reset_m3586812428 (BufferedAsymmetricBlockCipher_t862890205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
