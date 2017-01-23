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

// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
struct DHValidationParameters_t2841123689;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete2841123689.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void DHParameters__ctor_m880860740 (DHParameters_t431035336 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void DHParameters__ctor_m2654543340 (DHParameters_t431035336 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, BigInteger_t4268922522 * ___q2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Int32)
extern "C"  void DHParameters__ctor_m3687425837 (DHParameters_t431035336 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, BigInteger_t4268922522 * ___q2, int32_t ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Int32,System.Int32)
extern "C"  void DHParameters__ctor_m3351264834 (DHParameters_t431035336 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, BigInteger_t4268922522 * ___q2, int32_t ___m3, int32_t ___l4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHValidationParameters)
extern "C"  void DHParameters__ctor_m431221016 (DHParameters_t431035336 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, BigInteger_t4268922522 * ___q2, BigInteger_t4268922522 * ___j3, DHValidationParameters_t2841123689 * ___validation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHValidationParameters)
extern "C"  void DHParameters__ctor_m144319502 (DHParameters_t431035336 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, BigInteger_t4268922522 * ___q2, int32_t ___m3, int32_t ___l4, BigInteger_t4268922522 * ___j5, DHValidationParameters_t2841123689 * ___validation6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::GetDefaultMParam(System.Int32)
extern "C"  int32_t DHParameters_GetDefaultMParam_m88404502 (Il2CppObject * __this /* static, unused */, int32_t ___lParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_P()
extern "C"  BigInteger_t4268922522 * DHParameters_get_P_m2283553540 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_G()
extern "C"  BigInteger_t4268922522 * DHParameters_get_G_m2283553837 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_Q()
extern "C"  BigInteger_t4268922522 * DHParameters_get_Q_m2283553507 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_J()
extern "C"  BigInteger_t4268922522 * DHParameters_get_J_m2283553754 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::get_M()
extern "C"  int32_t DHParameters_get_M_m1851659620 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::get_L()
extern "C"  int32_t DHParameters_get_L_m1851659653 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters Org.BouncyCastle.Crypto.Parameters.DHParameters::get_ValidationParameters()
extern "C"  DHValidationParameters_t2841123689 * DHParameters_get_ValidationParameters_m764610239 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHParameters::Equals(System.Object)
extern "C"  bool DHParameters_Equals_m1184894071 (DHParameters_t431035336 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  bool DHParameters_Equals_m1128970942 (DHParameters_t431035336 * __this, DHParameters_t431035336 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::GetHashCode()
extern "C"  int32_t DHParameters_GetHashCode_m3212042785 (DHParameters_t431035336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
