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

// Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
struct RsaPrivateCrtKeyParameters_t3532059937;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void RsaPrivateCrtKeyParameters__ctor_m2942978281 (RsaPrivateCrtKeyParameters_t3532059937 * __this, BigInteger_t4268922522 * ___modulus0, BigInteger_t4268922522 * ___publicExponent1, BigInteger_t4268922522 * ___privateExponent2, BigInteger_t4268922522 * ___p3, BigInteger_t4268922522 * ___q4, BigInteger_t4268922522 * ___dP5, BigInteger_t4268922522 * ___dQ6, BigInteger_t4268922522 * ___qInv7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_PublicExponent()
extern "C"  BigInteger_t4268922522 * RsaPrivateCrtKeyParameters_get_PublicExponent_m3391356119 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_P()
extern "C"  BigInteger_t4268922522 * RsaPrivateCrtKeyParameters_get_P_m516275757 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_Q()
extern "C"  BigInteger_t4268922522 * RsaPrivateCrtKeyParameters_get_Q_m516275662 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_DP()
extern "C"  BigInteger_t4268922522 * RsaPrivateCrtKeyParameters_get_DP_m2149736909 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_DQ()
extern "C"  BigInteger_t4268922522 * RsaPrivateCrtKeyParameters_get_DQ_m3695617874 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_QInv()
extern "C"  BigInteger_t4268922522 * RsaPrivateCrtKeyParameters_get_QInv_m2688656833 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::Equals(System.Object)
extern "C"  bool RsaPrivateCrtKeyParameters_Equals_m2499241120 (RsaPrivateCrtKeyParameters_t3532059937 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::GetHashCode()
extern "C"  int32_t RsaPrivateCrtKeyParameters_GetHashCode_m2735280592 (RsaPrivateCrtKeyParameters_t3532059937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::ValidateValue(Org.BouncyCastle.Math.BigInteger,System.String,System.String)
extern "C"  void RsaPrivateCrtKeyParameters_ValidateValue_m679917150 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, String_t* ___name1, String_t* ___desc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
