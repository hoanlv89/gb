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

// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_t3632960452;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3939864474;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3939864474.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3632960452.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  void ECPrivateKeyParameters__ctor_m678930591 (ECPrivateKeyParameters_t3632960452 * __this, BigInteger_t4268922522 * ___d0, ECDomainParameters_t3939864474 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void ECPrivateKeyParameters__ctor_m2605010776 (ECPrivateKeyParameters_t3632960452 * __this, BigInteger_t4268922522 * ___d0, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::.ctor(System.String,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  void ECPrivateKeyParameters__ctor_m1902316369 (ECPrivateKeyParameters_t3632960452 * __this, String_t* ___algorithm0, BigInteger_t4268922522 * ___d1, ECDomainParameters_t3939864474 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::.ctor(System.String,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void ECPrivateKeyParameters__ctor_m813720844 (ECPrivateKeyParameters_t3632960452 * __this, String_t* ___algorithm0, BigInteger_t4268922522 * ___d1, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::get_D()
extern "C"  BigInteger_t4268922522 * ECPrivateKeyParameters_get_D_m3307514042 (ECPrivateKeyParameters_t3632960452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::Equals(System.Object)
extern "C"  bool ECPrivateKeyParameters_Equals_m1060111387 (ECPrivateKeyParameters_t3632960452 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters)
extern "C"  bool ECPrivateKeyParameters_Equals_m1009844926 (ECPrivateKeyParameters_t3632960452 * __this, ECPrivateKeyParameters_t3632960452 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::GetHashCode()
extern "C"  int32_t ECPrivateKeyParameters_GetHashCode_m3643922637 (ECPrivateKeyParameters_t3632960452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
