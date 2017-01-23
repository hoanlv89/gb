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

// Org.BouncyCastle.Asn1.X509.DsaParameter
struct DsaParameter_t274855281;
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

// System.Void Org.BouncyCastle.Asn1.X509.DsaParameter::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void DsaParameter__ctor_m47238817 (DsaParameter_t274855281 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___q1, BigInteger_t4268922522 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DsaParameter::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void DsaParameter__ctor_m1782680530 (DsaParameter_t274855281 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DsaParameter Org.BouncyCastle.Asn1.X509.DsaParameter::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DsaParameter_t274855281 * DsaParameter_GetInstance_m2772778329 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DsaParameter Org.BouncyCastle.Asn1.X509.DsaParameter::GetInstance(System.Object)
extern "C"  DsaParameter_t274855281 * DsaParameter_GetInstance_m1992525325 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X509.DsaParameter::get_P()
extern "C"  BigInteger_t4268922522 * DsaParameter_get_P_m1409750687 (DsaParameter_t274855281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X509.DsaParameter::get_Q()
extern "C"  BigInteger_t4268922522 * DsaParameter_get_Q_m1409750782 (DsaParameter_t274855281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X509.DsaParameter::get_G()
extern "C"  BigInteger_t4268922522 * DsaParameter_get_G_m1409750452 (DsaParameter_t274855281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.DsaParameter::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DsaParameter_ToAsn1Object_m2377662512 (DsaParameter_t274855281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
