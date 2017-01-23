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

// Org.BouncyCastle.Crypto.Encodings.OaepEncoding
struct OaepEncoding_t419752442;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
extern "C"  void OaepEncoding__ctor_m2854625108 (OaepEncoding_t419752442 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void OaepEncoding__ctor_m1568934642 (OaepEncoding_t419752442 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Byte[])
extern "C"  void OaepEncoding__ctor_m1328497043 (OaepEncoding_t419752442 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___hash1, ByteU5BU5D_t3397334013* ___encodingParams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Byte[])
extern "C"  void OaepEncoding__ctor_m2913884577 (OaepEncoding_t419752442 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___hash1, Il2CppObject * ___mgf1Hash2, ByteU5BU5D_t3397334013* ___encodingParams3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetUnderlyingCipher()
extern "C"  Il2CppObject * OaepEncoding_GetUnderlyingCipher_m2150716015 (OaepEncoding_t419752442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Encodings.OaepEncoding::get_AlgorithmName()
extern "C"  String_t* OaepEncoding_get_AlgorithmName_m2675911640 (OaepEncoding_t419752442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void OaepEncoding_Init_m3945495664 (OaepEncoding_t419752442 * __this, bool ___forEncryption0, Il2CppObject * ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetInputBlockSize()
extern "C"  int32_t OaepEncoding_GetInputBlockSize_m547111352 (OaepEncoding_t419752442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetOutputBlockSize()
extern "C"  int32_t OaepEncoding_GetOutputBlockSize_m1545097801 (OaepEncoding_t419752442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::ProcessBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* OaepEncoding_ProcessBlock_m566430939 (OaepEncoding_t419752442 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* OaepEncoding_EncodeBlock_m3655114474 (OaepEncoding_t419752442 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* OaepEncoding_DecodeBlock_m4095461422 (OaepEncoding_t419752442 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::ItoOSP(System.Int32,System.Byte[])
extern "C"  void OaepEncoding_ItoOSP_m355109884 (OaepEncoding_t419752442 * __this, int32_t ___i0, ByteU5BU5D_t3397334013* ___sp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::maskGeneratorFunction1(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* OaepEncoding_maskGeneratorFunction1_m1734299752 (OaepEncoding_t419752442 * __this, ByteU5BU5D_t3397334013* ___Z0, int32_t ___zOff1, int32_t ___zLen2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
