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

// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
struct Gost3410Parameters_t602285121;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters
struct Gost3410ValidationParameters_t2048269886;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete2048269886.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter602285121.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void Gost3410Parameters__ctor_m2532847645 (Gost3410Parameters_t602285121 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___q1, BigInteger_t4268922522 * ___a2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters)
extern "C"  void Gost3410Parameters__ctor_m3143161644 (Gost3410Parameters_t602285121 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___q1, BigInteger_t4268922522 * ___a2, Gost3410ValidationParameters_t2048269886 * ___validation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::get_P()
extern "C"  BigInteger_t4268922522 * Gost3410Parameters_get_P_m1343564251 (Gost3410Parameters_t602285121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::get_Q()
extern "C"  BigInteger_t4268922522 * Gost3410Parameters_get_Q_m1343564346 (Gost3410Parameters_t602285121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::get_A()
extern "C"  BigInteger_t4268922522 * Gost3410Parameters_get_A_m1343563818 (Gost3410Parameters_t602285121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::get_ValidationParameters()
extern "C"  Gost3410ValidationParameters_t2048269886 * Gost3410Parameters_get_ValidationParameters_m693554623 (Gost3410Parameters_t602285121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::Equals(System.Object)
extern "C"  bool Gost3410Parameters_Equals_m1949058704 (Gost3410Parameters_t602285121 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::Equals(Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters)
extern "C"  bool Gost3410Parameters_Equals_m4218843230 (Gost3410Parameters_t602285121 * __this, Gost3410Parameters_t602285121 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::GetHashCode()
extern "C"  int32_t Gost3410Parameters_GetHashCode_m843355004 (Gost3410Parameters_t602285121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
