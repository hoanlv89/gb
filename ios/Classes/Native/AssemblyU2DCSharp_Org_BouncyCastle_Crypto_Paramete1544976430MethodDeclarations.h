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

// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct DHPublicKeyParameters_t1544976430;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1544976430.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  void DHPublicKeyParameters__ctor_m2649680199 (DHPublicKeyParameters_t1544976430 * __this, BigInteger_t4268922522 * ___y0, DHParameters_t431035336 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void DHPublicKeyParameters__ctor_m1938027603 (DHPublicKeyParameters_t1544976430 * __this, BigInteger_t4268922522 * ___y0, DHParameters_t431035336 * ___parameters1, DerObjectIdentifier_t3495876513 * ___algorithmOid2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::get_Y()
extern "C"  BigInteger_t4268922522 * DHPublicKeyParameters_get_Y_m2977813133 (DHPublicKeyParameters_t1544976430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::Equals(System.Object)
extern "C"  bool DHPublicKeyParameters_Equals_m2312331157 (DHPublicKeyParameters_t1544976430 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters)
extern "C"  bool DHPublicKeyParameters_Equals_m2489054382 (DHPublicKeyParameters_t1544976430 * __this, DHPublicKeyParameters_t1544976430 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::GetHashCode()
extern "C"  int32_t DHPublicKeyParameters_GetHashCode_m3013215703 (DHPublicKeyParameters_t1544976430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
