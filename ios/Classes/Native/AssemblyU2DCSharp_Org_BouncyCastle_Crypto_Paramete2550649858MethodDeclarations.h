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

// Org.BouncyCastle.Crypto.Parameters.DsaParameters
struct DsaParameters_t2550649858;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
struct DsaValidationParameters_t2732896323;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete2732896323.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete2550649858.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DsaParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void DsaParameters__ctor_m1065557190 (DsaParameters_t2550649858 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___q1, BigInteger_t4268922522 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters)
extern "C"  void DsaParameters__ctor_m3208461382 (DsaParameters_t2550649858 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___q1, BigInteger_t4268922522 * ___g2, DsaValidationParameters_t2732896323 * ___parameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_P()
extern "C"  BigInteger_t4268922522 * DsaParameters_get_P_m2642475524 (DsaParameters_t2550649858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_Q()
extern "C"  BigInteger_t4268922522 * DsaParameters_get_Q_m2783638025 (DsaParameters_t2550649858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_G()
extern "C"  BigInteger_t4268922522 * DsaParameters_get_G_m1594245751 (DsaParameters_t2550649858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_ValidationParameters()
extern "C"  DsaValidationParameters_t2732896323 * DsaParameters_get_ValidationParameters_m664700207 (DsaParameters_t2550649858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DsaParameters::Equals(System.Object)
extern "C"  bool DsaParameters_Equals_m28211505 (DsaParameters_t2550649858 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DsaParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DsaParameters)
extern "C"  bool DsaParameters_Equals_m4117026494 (DsaParameters_t2550649858 * __this, DsaParameters_t2550649858 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameters::GetHashCode()
extern "C"  int32_t DsaParameters_GetHashCode_m2592069683 (DsaParameters_t2550649858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
