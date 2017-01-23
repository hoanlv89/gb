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

// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t3425534311;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void RsaKeyParameters__ctor_m2927906148 (RsaKeyParameters_t3425534311 * __this, bool ___isPrivate0, BigInteger_t4268922522 * ___modulus1, BigInteger_t4268922522 * ___exponent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::get_Modulus()
extern "C"  BigInteger_t4268922522 * RsaKeyParameters_get_Modulus_m1699254190 (RsaKeyParameters_t3425534311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::get_Exponent()
extern "C"  BigInteger_t4268922522 * RsaKeyParameters_get_Exponent_m1383878948 (RsaKeyParameters_t3425534311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::Equals(System.Object)
extern "C"  bool RsaKeyParameters_Equals_m3802197234 (RsaKeyParameters_t3425534311 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::GetHashCode()
extern "C"  int32_t RsaKeyParameters_GetHashCode_m2165057330 (RsaKeyParameters_t3425534311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
