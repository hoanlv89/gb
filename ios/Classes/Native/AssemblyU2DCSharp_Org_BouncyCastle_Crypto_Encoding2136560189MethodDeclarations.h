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

// Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
struct Pkcs1Encoding_t2136560189;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.cctor()
extern "C"  void Pkcs1Encoding__cctor_m2467848256 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
extern "C"  void Pkcs1Encoding__ctor_m1904254919 (Pkcs1Encoding_t2136560189 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,System.Int32)
extern "C"  void Pkcs1Encoding__ctor_m887450026 (Pkcs1Encoding_t2136560189 * __this, Il2CppObject * ___cipher0, int32_t ___pLen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,System.Byte[])
extern "C"  void Pkcs1Encoding__ctor_m1150558290 (Pkcs1Encoding_t2136560189 * __this, Il2CppObject * ___cipher0, ByteU5BU5D_t3397334013* ___fallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::get_StrictLengthEnabled()
extern "C"  bool Pkcs1Encoding_get_StrictLengthEnabled_m2244096990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::set_StrictLengthEnabled(System.Boolean)
extern "C"  void Pkcs1Encoding_set_StrictLengthEnabled_m193658903 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetUnderlyingCipher()
extern "C"  Il2CppObject * Pkcs1Encoding_GetUnderlyingCipher_m2646221240 (Pkcs1Encoding_t2136560189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::get_AlgorithmName()
extern "C"  String_t* Pkcs1Encoding_get_AlgorithmName_m142595631 (Pkcs1Encoding_t2136560189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Pkcs1Encoding_Init_m3187809443 (Pkcs1Encoding_t2136560189 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetInputBlockSize()
extern "C"  int32_t Pkcs1Encoding_GetInputBlockSize_m3378170749 (Pkcs1Encoding_t2136560189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetOutputBlockSize()
extern "C"  int32_t Pkcs1Encoding_GetOutputBlockSize_m4056582960 (Pkcs1Encoding_t2136560189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::ProcessBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Pkcs1Encoding_ProcessBlock_m2585820356 (Pkcs1Encoding_t2136560189 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Pkcs1Encoding_EncodeBlock_m3423270247 (Pkcs1Encoding_t2136560189 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::CheckPkcs1Encoding(System.Byte[],System.Int32)
extern "C"  int32_t Pkcs1Encoding_CheckPkcs1Encoding_m4070999690 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___encoded0, int32_t ___pLen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::DecodeBlockOrRandom(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Pkcs1Encoding_DecodeBlockOrRandom_m1889185591 (Pkcs1Encoding_t2136560189 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Pkcs1Encoding_DecodeBlock_m254575049 (Pkcs1Encoding_t2136560189 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
