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

// Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
struct DsaPublicKeyParameters_t3405498240;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.DsaParameters
struct DsaParameters_t2550649858;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete2550649858.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3405498240.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DsaParameters)
extern "C"  void DsaPublicKeyParameters__ctor_m2522442219 (DsaPublicKeyParameters_t3405498240 * __this, BigInteger_t4268922522 * ___y0, DsaParameters_t2550649858 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::get_Y()
extern "C"  BigInteger_t4268922522 * DsaPublicKeyParameters_get_Y_m2351551943 (DsaPublicKeyParameters_t3405498240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::Equals(System.Object)
extern "C"  bool DsaPublicKeyParameters_Equals_m3806767403 (DsaPublicKeyParameters_t3405498240 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters)
extern "C"  bool DsaPublicKeyParameters_Equals_m2446644606 (DsaPublicKeyParameters_t3405498240 * __this, DsaPublicKeyParameters_t3405498240 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::GetHashCode()
extern "C"  int32_t DsaPublicKeyParameters_GetHashCode_m2109279113 (DsaPublicKeyParameters_t3405498240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
