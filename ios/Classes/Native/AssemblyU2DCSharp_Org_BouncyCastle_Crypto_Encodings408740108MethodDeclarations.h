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

// Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
struct ISO9796d1Encoding_t408740108;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
extern "C"  void ISO9796d1Encoding__ctor_m315202174 (ISO9796d1Encoding_t408740108 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::get_AlgorithmName()
extern "C"  String_t* ISO9796d1Encoding_get_AlgorithmName_m1767227744 (ISO9796d1Encoding_t408740108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetUnderlyingCipher()
extern "C"  Il2CppObject * ISO9796d1Encoding_GetUnderlyingCipher_m3146369733 (ISO9796d1Encoding_t408740108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ISO9796d1Encoding_Init_m427941826 (ISO9796d1Encoding_t408740108 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetInputBlockSize()
extern "C"  int32_t ISO9796d1Encoding_GetInputBlockSize_m1630065082 (ISO9796d1Encoding_t408740108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetOutputBlockSize()
extern "C"  int32_t ISO9796d1Encoding_GetOutputBlockSize_m1636164259 (ISO9796d1Encoding_t408740108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::SetPadBits(System.Int32)
extern "C"  void ISO9796d1Encoding_SetPadBits_m3318608618 (ISO9796d1Encoding_t408740108 * __this, int32_t ___padBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetPadBits()
extern "C"  int32_t ISO9796d1Encoding_GetPadBits_m4262506741 (ISO9796d1Encoding_t408740108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::ProcessBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ISO9796d1Encoding_ProcessBlock_m685619505 (ISO9796d1Encoding_t408740108 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ISO9796d1Encoding_EncodeBlock_m3970494172 (ISO9796d1Encoding_t408740108 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ISO9796d1Encoding_DecodeBlock_m297501000 (ISO9796d1Encoding_t408740108 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::.cctor()
extern "C"  void ISO9796d1Encoding__cctor_m679038403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
