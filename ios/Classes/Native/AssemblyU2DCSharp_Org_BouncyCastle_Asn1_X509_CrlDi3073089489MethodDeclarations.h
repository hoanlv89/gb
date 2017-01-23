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

// Org.BouncyCastle.Asn1.X509.CrlDistPoint
struct CrlDistPoint_t3073089489;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.X509.DistributionPoint[]
struct DistributionPointU5BU5D_t2966369369;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.CrlDistPoint::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void CrlDistPoint__ctor_m2970159258 (CrlDistPoint_t3073089489 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.CrlDistPoint::.ctor(Org.BouncyCastle.Asn1.X509.DistributionPoint[])
extern "C"  void CrlDistPoint__ctor_m3366757436 (CrlDistPoint_t3073089489 * __this, DistributionPointU5BU5D_t2966369369* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.CrlDistPoint Org.BouncyCastle.Asn1.X509.CrlDistPoint::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  CrlDistPoint_t3073089489 * CrlDistPoint_GetInstance_m3394606873 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.CrlDistPoint Org.BouncyCastle.Asn1.X509.CrlDistPoint::GetInstance(System.Object)
extern "C"  CrlDistPoint_t3073089489 * CrlDistPoint_GetInstance_m2587256013 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPoint[] Org.BouncyCastle.Asn1.X509.CrlDistPoint::GetDistributionPoints()
extern "C"  DistributionPointU5BU5D_t2966369369* CrlDistPoint_GetDistributionPoints_m2699940458 (CrlDistPoint_t3073089489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.CrlDistPoint::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * CrlDistPoint_ToAsn1Object_m718875860 (CrlDistPoint_t3073089489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.CrlDistPoint::ToString()
extern "C"  String_t* CrlDistPoint_ToString_m1763334916 (CrlDistPoint_t3073089489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
