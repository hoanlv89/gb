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

// Org.BouncyCastle.Crypto.Signers.DsaSigner
struct DsaSigner_t1646699940;
// Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
struct IDsaKCalculator_t1961041132;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Signers.DsaSigner::.ctor()
extern "C"  void DsaSigner__ctor_m2483630551 (DsaSigner_t1646699940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.DsaSigner::.ctor(Org.BouncyCastle.Crypto.Signers.IDsaKCalculator)
extern "C"  void DsaSigner__ctor_m139573133 (DsaSigner_t1646699940 * __this, Il2CppObject * ___kCalculator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.DsaSigner::get_AlgorithmName()
extern "C"  String_t* DsaSigner_get_AlgorithmName_m2701390683 (DsaSigner_t1646699940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.DsaSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void DsaSigner_Init_m2357145031 (DsaSigner_t1646699940 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Signers.DsaSigner::GenerateSignature(System.Byte[])
extern "C"  BigIntegerU5BU5D_t431507903* DsaSigner_GenerateSignature_m1712235430 (DsaSigner_t1646699940 * __this, ByteU5BU5D_t3397334013* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.DsaSigner::VerifySignature(System.Byte[],Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  bool DsaSigner_VerifySignature_m911091719 (DsaSigner_t1646699940 * __this, ByteU5BU5D_t3397334013* ___message0, BigInteger_t4268922522 * ___r1, BigInteger_t4268922522 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.DsaSigner::CalculateE(Org.BouncyCastle.Math.BigInteger,System.Byte[])
extern "C"  BigInteger_t4268922522 * DsaSigner_CalculateE_m1546367338 (DsaSigner_t1646699940 * __this, BigInteger_t4268922522 * ___n0, ByteU5BU5D_t3397334013* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.DsaSigner::InitSecureRandom(System.Boolean,Org.BouncyCastle.Security.SecureRandom)
extern "C"  SecureRandom_t3117234712 * DsaSigner_InitSecureRandom_m839488425 (DsaSigner_t1646699940 * __this, bool ___needed0, SecureRandom_t3117234712 * ___provided1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
