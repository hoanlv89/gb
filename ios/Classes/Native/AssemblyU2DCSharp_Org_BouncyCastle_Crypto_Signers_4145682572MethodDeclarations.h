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

// Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
struct DsaDigestSigner_t4145682572;
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
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::.ctor(Org.BouncyCastle.Crypto.IDsa,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void DsaDigestSigner__ctor_m379272089 (DsaDigestSigner_t4145682572 * __this, Il2CppObject * ___signer0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::get_AlgorithmName()
extern "C"  String_t* DsaDigestSigner_get_AlgorithmName_m2848656979 (DsaDigestSigner_t4145682572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void DsaDigestSigner_Init_m4181148303 (DsaDigestSigner_t4145682572 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::Update(System.Byte)
extern "C"  void DsaDigestSigner_Update_m1394214367 (DsaDigestSigner_t4145682572 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void DsaDigestSigner_BlockUpdate_m3279402894 (DsaDigestSigner_t4145682572 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* DsaDigestSigner_GenerateSignature_m1858999614 (DsaDigestSigner_t4145682572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::VerifySignature(System.Byte[])
extern "C"  bool DsaDigestSigner_VerifySignature_m375102455 (DsaDigestSigner_t4145682572 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::Reset()
extern "C"  void DsaDigestSigner_Reset_m580315634 (DsaDigestSigner_t4145682572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::DerEncode(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* DsaDigestSigner_DerEncode_m2934412718 (DsaDigestSigner_t4145682572 * __this, BigInteger_t4268922522 * ___r0, BigInteger_t4268922522 * ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::DerDecode(System.Byte[])
extern "C"  BigIntegerU5BU5D_t431507903* DsaDigestSigner_DerDecode_m2548110084 (DsaDigestSigner_t4145682572 * __this, ByteU5BU5D_t3397334013* ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
