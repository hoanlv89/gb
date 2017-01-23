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

// Org.BouncyCastle.Crypto.Signers.GenericSigner
struct GenericSigner_t601621931;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Signers.GenericSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void GenericSigner__ctor_m3483014910 (GenericSigner_t601621931 * __this, Il2CppObject * ___engine0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.GenericSigner::get_AlgorithmName()
extern "C"  String_t* GenericSigner_get_AlgorithmName_m408944726 (GenericSigner_t601621931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.GenericSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void GenericSigner_Init_m3517056700 (GenericSigner_t601621931 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.GenericSigner::Update(System.Byte)
extern "C"  void GenericSigner_Update_m923083392 (GenericSigner_t601621931 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.GenericSigner::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void GenericSigner_BlockUpdate_m1316533587 (GenericSigner_t601621931 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.GenericSigner::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* GenericSigner_GenerateSignature_m1248058219 (GenericSigner_t601621931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.GenericSigner::VerifySignature(System.Byte[])
extern "C"  bool GenericSigner_VerifySignature_m1430460780 (GenericSigner_t601621931 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.GenericSigner::Reset()
extern "C"  void GenericSigner_Reset_m3290720729 (GenericSigner_t601621931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
