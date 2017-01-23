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

// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters
struct ElGamalParameters_t1215309569;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1215309569.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void ElGamalParameters__ctor_m849446289 (ElGamalParameters_t1215309569 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Int32)
extern "C"  void ElGamalParameters__ctor_m3294497586 (ElGamalParameters_t1215309569 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, int32_t ___l2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::get_P()
extern "C"  BigInteger_t4268922522 * ElGamalParameters_get_P_m3743219965 (ElGamalParameters_t1215309569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::get_G()
extern "C"  BigInteger_t4268922522 * ElGamalParameters_get_G_m496482442 (ElGamalParameters_t1215309569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::get_L()
extern "C"  int32_t ElGamalParameters_get_L_m3077106878 (ElGamalParameters_t1215309569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::Equals(System.Object)
extern "C"  bool ElGamalParameters_Equals_m2487493120 (ElGamalParameters_t1215309569 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::Equals(Org.BouncyCastle.Crypto.Parameters.ElGamalParameters)
extern "C"  bool ElGamalParameters_Equals_m4281379416 (ElGamalParameters_t1215309569 * __this, ElGamalParameters_t1215309569 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::GetHashCode()
extern "C"  int32_t ElGamalParameters_GetHashCode_m1631940896 (ElGamalParameters_t1215309569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
