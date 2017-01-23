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

// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t572706344;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3939864474;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3939864474.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter572706344.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::.ctor(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  void ECPublicKeyParameters__ctor_m2641458495 (ECPublicKeyParameters_t572706344 * __this, ECPoint_t626351532 * ___q0, ECDomainParameters_t3939864474 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::.ctor(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void ECPublicKeyParameters__ctor_m3832165520 (ECPublicKeyParameters_t572706344 * __this, ECPoint_t626351532 * ___q0, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::.ctor(System.String,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  void ECPublicKeyParameters__ctor_m2128895093 (ECPublicKeyParameters_t572706344 * __this, String_t* ___algorithm0, ECPoint_t626351532 * ___q1, ECDomainParameters_t3939864474 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::.ctor(System.String,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void ECPublicKeyParameters__ctor_m2247424272 (ECPublicKeyParameters_t572706344 * __this, String_t* ___algorithm0, ECPoint_t626351532 * ___q1, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::get_Q()
extern "C"  ECPoint_t626351532 * ECPublicKeyParameters_get_Q_m1248895555 (ECPublicKeyParameters_t572706344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::Equals(System.Object)
extern "C"  bool ECPublicKeyParameters_Equals_m1901079907 (ECPublicKeyParameters_t572706344 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern "C"  bool ECPublicKeyParameters_Equals_m4163422562 (ECPublicKeyParameters_t572706344 * __this, ECPublicKeyParameters_t572706344 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::GetHashCode()
extern "C"  int32_t ECPublicKeyParameters_GetHashCode_m638105033 (ECPublicKeyParameters_t572706344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
