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

// Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
struct Gost3410ParamSetParameters_t2624318576;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::.ctor(System.Int32,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void Gost3410ParamSetParameters__ctor_m2604838787 (Gost3410ParamSetParameters_t2624318576 * __this, int32_t ___keySize0, BigInteger_t4268922522 * ___p1, BigInteger_t4268922522 * ___q2, BigInteger_t4268922522 * ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void Gost3410ParamSetParameters__ctor_m1752622187 (Gost3410ParamSetParameters_t2624318576 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  Gost3410ParamSetParameters_t2624318576 * Gost3410ParamSetParameters_GetInstance_m853613873 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::GetInstance(System.Object)
extern "C"  Gost3410ParamSetParameters_t2624318576 * Gost3410ParamSetParameters_GetInstance_m4017693421 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::get_KeySize()
extern "C"  int32_t Gost3410ParamSetParameters_get_KeySize_m2470266805 (Gost3410ParamSetParameters_t2624318576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::get_P()
extern "C"  BigInteger_t4268922522 * Gost3410ParamSetParameters_get_P_m1977219752 (Gost3410ParamSetParameters_t2624318576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::get_Q()
extern "C"  BigInteger_t4268922522 * Gost3410ParamSetParameters_get_Q_m2118382253 (Gost3410ParamSetParameters_t2624318576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::get_A()
extern "C"  BigInteger_t4268922522 * Gost3410ParamSetParameters_get_A_m4154749533 (Gost3410ParamSetParameters_t2624318576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * Gost3410ParamSetParameters_ToAsn1Object_m2693987521 (Gost3410ParamSetParameters_t2624318576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
