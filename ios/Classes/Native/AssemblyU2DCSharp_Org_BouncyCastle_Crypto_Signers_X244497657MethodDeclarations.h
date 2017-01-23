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

// Org.BouncyCastle.Crypto.Signers.X931Signer
struct X931Signer_t244497657;
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

// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::.cctor()
extern "C"  void X931Signer__cctor_m2076116269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Boolean)
extern "C"  void X931Signer__ctor_m1689371287 (X931Signer_t244497657 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, bool ___isImplicit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void X931Signer__ctor_m1430033332 (X931Signer_t244497657 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.X931Signer::get_AlgorithmName()
extern "C"  String_t* X931Signer_get_AlgorithmName_m2527506890 (X931Signer_t244497657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void X931Signer_Init_m2029768530 (X931Signer_t244497657 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::ClearBlock(System.Byte[])
extern "C"  void X931Signer_ClearBlock_m2652353929 (X931Signer_t244497657 * __this, ByteU5BU5D_t3397334013* ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::Update(System.Byte)
extern "C"  void X931Signer_Update_m4113829114 (X931Signer_t244497657 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void X931Signer_BlockUpdate_m1409438021 (X931Signer_t244497657 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::Reset()
extern "C"  void X931Signer_Reset_m1541659083 (X931Signer_t244497657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.X931Signer::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* X931Signer_GenerateSignature_m742364397 (X931Signer_t244497657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.X931Signer::CreateSignatureBlock()
extern "C"  void X931Signer_CreateSignatureBlock_m3745015023 (X931Signer_t244497657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.X931Signer::VerifySignature(System.Byte[])
extern "C"  bool X931Signer_VerifySignature_m2354055942 (X931Signer_t244497657 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
