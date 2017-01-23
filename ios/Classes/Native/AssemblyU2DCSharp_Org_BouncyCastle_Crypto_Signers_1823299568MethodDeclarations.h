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

// Org.BouncyCastle.Crypto.Signers.ECDsaSigner
struct ECDsaSigner_t1823299568;
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
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Signers.ECDsaSigner::.ctor()
extern "C"  void ECDsaSigner__ctor_m2843614457 (ECDsaSigner_t1823299568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.ECDsaSigner::.ctor(Org.BouncyCastle.Crypto.Signers.IDsaKCalculator)
extern "C"  void ECDsaSigner__ctor_m4005710815 (ECDsaSigner_t1823299568 * __this, Il2CppObject * ___kCalculator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.ECDsaSigner::get_AlgorithmName()
extern "C"  String_t* ECDsaSigner_get_AlgorithmName_m334971153 (ECDsaSigner_t1823299568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.ECDsaSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ECDsaSigner_Init_m3574735697 (ECDsaSigner_t1823299568 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Signers.ECDsaSigner::GenerateSignature(System.Byte[])
extern "C"  BigIntegerU5BU5D_t431507903* ECDsaSigner_GenerateSignature_m1395513750 (ECDsaSigner_t1823299568 * __this, ByteU5BU5D_t3397334013* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.ECDsaSigner::VerifySignature(System.Byte[],Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  bool ECDsaSigner_VerifySignature_m3676135513 (ECDsaSigner_t1823299568 * __this, ByteU5BU5D_t3397334013* ___message0, BigInteger_t4268922522 * ___r1, BigInteger_t4268922522 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.ECDsaSigner::CalculateE(Org.BouncyCastle.Math.BigInteger,System.Byte[])
extern "C"  BigInteger_t4268922522 * ECDsaSigner_CalculateE_m2833448254 (ECDsaSigner_t1823299568 * __this, BigInteger_t4268922522 * ___n0, ByteU5BU5D_t3397334013* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Crypto.Signers.ECDsaSigner::CreateBasePointMultiplier()
extern "C"  Il2CppObject * ECDsaSigner_CreateBasePointMultiplier_m2645476768 (ECDsaSigner_t1823299568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.ECDsaSigner::InitSecureRandom(System.Boolean,Org.BouncyCastle.Security.SecureRandom)
extern "C"  SecureRandom_t3117234712 * ECDsaSigner_InitSecureRandom_m2123969235 (ECDsaSigner_t1823299568 * __this, bool ___needed0, SecureRandom_t3117234712 * ___provided1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
