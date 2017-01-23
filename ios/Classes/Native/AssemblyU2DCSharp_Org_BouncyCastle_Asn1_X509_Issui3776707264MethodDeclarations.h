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

// Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
struct IssuingDistributionPoint_t3776707264;
// Org.BouncyCastle.Asn1.X509.DistributionPointName
struct DistributionPointName_t1765286135;
// Org.BouncyCastle.Asn1.X509.ReasonFlags
struct ReasonFlags_t677892991;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Distr1765286135.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Reason677892991.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::.ctor(Org.BouncyCastle.Asn1.X509.DistributionPointName,System.Boolean,System.Boolean,Org.BouncyCastle.Asn1.X509.ReasonFlags,System.Boolean,System.Boolean)
extern "C"  void IssuingDistributionPoint__ctor_m3772261336 (IssuingDistributionPoint_t3776707264 * __this, DistributionPointName_t1765286135 * ___distributionPoint0, bool ___onlyContainsUserCerts1, bool ___onlyContainsCACerts2, ReasonFlags_t677892991 * ___onlySomeReasons3, bool ___indirectCRL4, bool ___onlyContainsAttributeCerts5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void IssuingDistributionPoint__ctor_m1628835049 (IssuingDistributionPoint_t3776707264 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  IssuingDistributionPoint_t3776707264 * IssuingDistributionPoint_GetInstance_m1441165785 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::GetInstance(System.Object)
extern "C"  IssuingDistributionPoint_t3776707264 * IssuingDistributionPoint_GetInstance_m396720781 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::get_OnlyContainsUserCerts()
extern "C"  bool IssuingDistributionPoint_get_OnlyContainsUserCerts_m3715056468 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::get_OnlyContainsCACerts()
extern "C"  bool IssuingDistributionPoint_get_OnlyContainsCACerts_m897404645 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::get_IsIndirectCrl()
extern "C"  bool IssuingDistributionPoint_get_IsIndirectCrl_m2171899110 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::get_OnlyContainsAttributeCerts()
extern "C"  bool IssuingDistributionPoint_get_OnlyContainsAttributeCerts_m4000920115 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPointName Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::get_DistributionPoint()
extern "C"  DistributionPointName_t1765286135 * IssuingDistributionPoint_get_DistributionPoint_m3250687152 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.ReasonFlags Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::get_OnlySomeReasons()
extern "C"  ReasonFlags_t677892991 * IssuingDistributionPoint_get_OnlySomeReasons_m1973540927 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * IssuingDistributionPoint_ToAsn1Object_m3973278943 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::ToString()
extern "C"  String_t* IssuingDistributionPoint_ToString_m2653127989 (IssuingDistributionPoint_t3776707264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint::appendObject(System.Text.StringBuilder,System.String,System.String,System.String)
extern "C"  void IssuingDistributionPoint_appendObject_m3762714543 (IssuingDistributionPoint_t3776707264 * __this, StringBuilder_t1221177846 * ___buf0, String_t* ___sep1, String_t* ___name2, String_t* ___val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
