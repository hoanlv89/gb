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

// Org.BouncyCastle.Crypto.BufferedIesCipher
struct BufferedIesCipher_t295552809;
// Org.BouncyCastle.Crypto.Engines.IesEngine
struct IesEngine_t1284744109;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Engines_1284744109.h"

// System.Void Org.BouncyCastle.Crypto.BufferedIesCipher::.ctor(Org.BouncyCastle.Crypto.Engines.IesEngine)
extern "C"  void BufferedIesCipher__ctor_m4259115260 (BufferedIesCipher_t295552809 * __this, IesEngine_t1284744109 * ___engine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.BufferedIesCipher::get_AlgorithmName()
extern "C"  String_t* BufferedIesCipher_get_AlgorithmName_m1372220431 (BufferedIesCipher_t295552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedIesCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void BufferedIesCipher_Init_m1195120451 (BufferedIesCipher_t295552809 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedIesCipher::GetBlockSize()
extern "C"  int32_t BufferedIesCipher_GetBlockSize_m1881037751 (BufferedIesCipher_t295552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedIesCipher::GetOutputSize(System.Int32)
extern "C"  int32_t BufferedIesCipher_GetOutputSize_m1234183848 (BufferedIesCipher_t295552809 * __this, int32_t ___inputLen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedIesCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t BufferedIesCipher_GetUpdateOutputSize_m4253817773 (BufferedIesCipher_t295552809 * __this, int32_t ___inputLen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedIesCipher::ProcessByte(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* BufferedIesCipher_ProcessByte_m1426228403 (BufferedIesCipher_t295552809 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedIesCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedIesCipher_ProcessBytes_m2720641472 (BufferedIesCipher_t295552809 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedIesCipher::DoFinal()
extern "C"  ByteU5BU5D_t3397334013* BufferedIesCipher_DoFinal_m4274458896 (BufferedIesCipher_t295552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedIesCipher::DoFinal(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedIesCipher_DoFinal_m2907810191 (BufferedIesCipher_t295552809 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedIesCipher::Reset()
extern "C"  void BufferedIesCipher_Reset_m94068192 (BufferedIesCipher_t295552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
