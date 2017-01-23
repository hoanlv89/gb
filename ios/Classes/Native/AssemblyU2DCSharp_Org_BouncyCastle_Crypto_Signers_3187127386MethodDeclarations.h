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

// Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
struct RsaDigestSigner_t3187127386;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Algor2670781410.h"

// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::.cctor()
extern "C"  void RsaDigestSigner__cctor_m3363676430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::.ctor(Org.BouncyCastle.Crypto.IDigest)
extern "C"  void RsaDigestSigner__ctor_m490368259 (RsaDigestSigner_t3187127386 * __this, Il2CppObject * ___digest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::.ctor(Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void RsaDigestSigner__ctor_m3781083031 (RsaDigestSigner_t3187127386 * __this, Il2CppObject * ___digest0, DerObjectIdentifier_t3495876513 * ___digestOid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::.ctor(Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier)
extern "C"  void RsaDigestSigner__ctor_m3572473208 (RsaDigestSigner_t3187127386 * __this, Il2CppObject * ___digest0, AlgorithmIdentifier_t2670781410 * ___algId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::get_AlgorithmName()
extern "C"  String_t* RsaDigestSigner_get_AlgorithmName_m3419676201 (RsaDigestSigner_t3187127386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RsaDigestSigner_Init_m4188006713 (RsaDigestSigner_t3187127386 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::Update(System.Byte)
extern "C"  void RsaDigestSigner_Update_m3609799477 (RsaDigestSigner_t3187127386 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void RsaDigestSigner_BlockUpdate_m148103684 (RsaDigestSigner_t3187127386 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* RsaDigestSigner_GenerateSignature_m3259543180 (RsaDigestSigner_t3187127386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::VerifySignature(System.Byte[])
extern "C"  bool RsaDigestSigner_VerifySignature_m1429587429 (RsaDigestSigner_t3187127386 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::Reset()
extern "C"  void RsaDigestSigner_Reset_m575660996 (RsaDigestSigner_t3187127386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::DerEncode(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RsaDigestSigner_DerEncode_m2358803339 (RsaDigestSigner_t3187127386 * __this, ByteU5BU5D_t3397334013* ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
