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

// Org.BouncyCastle.Crypto.Signers.ECGost3410Signer
struct ECGost3410Signer_t27564669;
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

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::.ctor()
extern "C"  void ECGost3410Signer__ctor_m3720952512 (ECGost3410Signer_t27564669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::get_AlgorithmName()
extern "C"  String_t* ECGost3410Signer_get_AlgorithmName_m3930649382 (ECGost3410Signer_t27564669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ECGost3410Signer_Init_m2548655942 (ECGost3410Signer_t27564669 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::GenerateSignature(System.Byte[])
extern "C"  BigIntegerU5BU5D_t431507903* ECGost3410Signer_GenerateSignature_m1258385573 (ECGost3410Signer_t27564669 * __this, ByteU5BU5D_t3397334013* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::VerifySignature(System.Byte[],Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  bool ECGost3410Signer_VerifySignature_m262470250 (ECGost3410Signer_t27564669 * __this, ByteU5BU5D_t3397334013* ___message0, BigInteger_t4268922522 * ___r1, BigInteger_t4268922522 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::CreateBasePointMultiplier()
extern "C"  Il2CppObject * ECGost3410Signer_CreateBasePointMultiplier_m2954251179 (ECGost3410Signer_t27564669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
