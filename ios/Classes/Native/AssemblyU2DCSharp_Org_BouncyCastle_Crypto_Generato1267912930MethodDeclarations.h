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

// Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator
struct ECKeyPairGenerator_t1267912930;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t1825508216;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;
// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_t1959966001;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t572706344;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_t3632960452;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_KeyGenera650995725.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3632960452.h"

// System.Void Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::.ctor()
extern "C"  void ECKeyPairGenerator__ctor_m2602980724 (ECKeyPairGenerator_t1267912930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::.ctor(System.String)
extern "C"  void ECKeyPairGenerator__ctor_m1637775994 (ECKeyPairGenerator_t1267912930 * __this, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void ECKeyPairGenerator_Init_m1185361670 (ECKeyPairGenerator_t1267912930 * __this, KeyGenerationParameters_t650995725 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::GenerateKeyPair()
extern "C"  AsymmetricCipherKeyPair_t1825508216 * ECKeyPairGenerator_GenerateKeyPair_m1361467652 (ECKeyPairGenerator_t1267912930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::CreateBasePointMultiplier()
extern "C"  Il2CppObject * ECKeyPairGenerator_CreateBasePointMultiplier_m1991446175 (ECKeyPairGenerator_t1267912930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::FindECCurveByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * ECKeyPairGenerator_FindECCurveByOid_m3611663783 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator::GetCorrespondingPublicKey(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters)
extern "C"  ECPublicKeyParameters_t572706344 * ECKeyPairGenerator_GetCorrespondingPublicKey_m1374373422 (Il2CppObject * __this /* static, unused */, ECPrivateKeyParameters_t3632960452 * ___privKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
