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

// Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
struct Gost3410DigestSigner_t3543322195;
// Org.BouncyCastle.Crypto.IDsa
struct IDsa_t2214093627;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::.ctor(Org.BouncyCastle.Crypto.IDsa,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void Gost3410DigestSigner__ctor_m3740117228 (Gost3410DigestSigner_t3543322195 * __this, Il2CppObject * ___signer0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::get_AlgorithmName()
extern "C"  String_t* Gost3410DigestSigner_get_AlgorithmName_m2141315890 (Gost3410DigestSigner_t3543322195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Gost3410DigestSigner_Init_m957301062 (Gost3410DigestSigner_t3543322195 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::Update(System.Byte)
extern "C"  void Gost3410DigestSigner_Update_m2069632002 (Gost3410DigestSigner_t3543322195 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Gost3410DigestSigner_BlockUpdate_m3705719443 (Gost3410DigestSigner_t3543322195 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* Gost3410DigestSigner_GenerateSignature_m2794133835 (Gost3410DigestSigner_t3543322195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::VerifySignature(System.Byte[])
extern "C"  bool Gost3410DigestSigner_VerifySignature_m659416638 (Gost3410DigestSigner_t3543322195 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::Reset()
extern "C"  void Gost3410DigestSigner_Reset_m1514357421 (Gost3410DigestSigner_t3543322195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
