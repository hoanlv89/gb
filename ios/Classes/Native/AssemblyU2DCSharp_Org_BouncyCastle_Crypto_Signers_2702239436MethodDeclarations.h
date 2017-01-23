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

// Org.BouncyCastle.Crypto.Signers.ECNRSigner
struct ECNRSigner_t2702239436;
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

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Signers.ECNRSigner::.ctor()
extern "C"  void ECNRSigner__ctor_m2419278255 (ECNRSigner_t2702239436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.ECNRSigner::get_AlgorithmName()
extern "C"  String_t* ECNRSigner_get_AlgorithmName_m2850341399 (ECNRSigner_t2702239436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.ECNRSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ECNRSigner_Init_m889753487 (ECNRSigner_t2702239436 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Signers.ECNRSigner::GenerateSignature(System.Byte[])
extern "C"  BigIntegerU5BU5D_t431507903* ECNRSigner_GenerateSignature_m2158625144 (ECNRSigner_t2702239436 * __this, ByteU5BU5D_t3397334013* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.ECNRSigner::VerifySignature(System.Byte[],Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  bool ECNRSigner_VerifySignature_m3354373351 (ECNRSigner_t2702239436 * __this, ByteU5BU5D_t3397334013* ___message0, BigInteger_t4268922522 * ___r1, BigInteger_t4268922522 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
