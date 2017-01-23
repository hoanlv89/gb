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

// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
struct DHPrivateKeyParameters_t3120746414;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3120746414.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  void DHPrivateKeyParameters__ctor_m4204216447 (DHPrivateKeyParameters_t3120746414 * __this, BigInteger_t4268922522 * ___x0, DHParameters_t431035336 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void DHPrivateKeyParameters__ctor_m999458131 (DHPrivateKeyParameters_t3120746414 * __this, BigInteger_t4268922522 * ___x0, DHParameters_t431035336 * ___parameters1, DerObjectIdentifier_t3495876513 * ___algorithmOid2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::get_X()
extern "C"  BigInteger_t4268922522 * DHPrivateKeyParameters_get_X_m3280993726 (DHPrivateKeyParameters_t3120746414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::Equals(System.Object)
extern "C"  bool DHPrivateKeyParameters_Equals_m2952401721 (DHPrivateKeyParameters_t3120746414 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters)
extern "C"  bool DHPrivateKeyParameters_Equals_m3484257406 (DHPrivateKeyParameters_t3120746414 * __this, DHPrivateKeyParameters_t3120746414 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::GetHashCode()
extern "C"  int32_t DHPrivateKeyParameters_GetHashCode_m4078865375 (DHPrivateKeyParameters_t3120746414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
