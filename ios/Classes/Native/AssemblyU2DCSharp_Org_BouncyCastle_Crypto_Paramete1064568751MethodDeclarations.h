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

// Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
struct ECKeyParameters_t1064568751;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3939864474;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
struct ECKeyGenerationParameters_t3475787761;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3939864474.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1064568751.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::.ctor(System.String,System.Boolean,Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  void ECKeyParameters__ctor_m1442193977 (ECKeyParameters_t1064568751 * __this, String_t* ___algorithm0, bool ___isPrivate1, ECDomainParameters_t3939864474 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::.ctor(System.String,System.Boolean,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void ECKeyParameters__ctor_m2651447386 (ECKeyParameters_t1064568751 * __this, String_t* ___algorithm0, bool ___isPrivate1, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::get_AlgorithmName()
extern "C"  String_t* ECKeyParameters_get_AlgorithmName_m3375093647 (ECKeyParameters_t1064568751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::get_Parameters()
extern "C"  ECDomainParameters_t3939864474 * ECKeyParameters_get_Parameters_m1061398492 (ECKeyParameters_t1064568751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::get_PublicKeyParamSet()
extern "C"  DerObjectIdentifier_t3495876513 * ECKeyParameters_get_PublicKeyParamSet_m3845146368 (ECKeyParameters_t1064568751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::Equals(System.Object)
extern "C"  bool ECKeyParameters_Equals_m4122798010 (ECKeyParameters_t1064568751 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.ECKeyParameters)
extern "C"  bool ECKeyParameters_Equals_m3468641852 (ECKeyParameters_t1064568751 * __this, ECKeyParameters_t1064568751 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::GetHashCode()
extern "C"  int32_t ECKeyParameters_GetHashCode_m1519267302 (ECKeyParameters_t1064568751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::CreateKeyGenerationParameters(Org.BouncyCastle.Security.SecureRandom)
extern "C"  ECKeyGenerationParameters_t3475787761 * ECKeyParameters_CreateKeyGenerationParameters_m2609400999 (ECKeyParameters_t1064568751 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::VerifyAlgorithmName(System.String)
extern "C"  String_t* ECKeyParameters_VerifyAlgorithmName_m16061227 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::LookupParameters(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  ECDomainParameters_t3939864474 * ECKeyParameters_LookupParameters_m3971824399 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::.cctor()
extern "C"  void ECKeyParameters__cctor_m4114176968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
