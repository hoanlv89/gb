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

// Org.BouncyCastle.Asn1.X509.DistributionPoint
struct DistributionPoint_t769724552;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.X509.DistributionPointName
struct DistributionPointName_t1765286135;
// Org.BouncyCastle.Asn1.X509.ReasonFlags
struct ReasonFlags_t677892991;
// Org.BouncyCastle.Asn1.X509.GeneralNames
struct GeneralNames_t1290955016;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Distr1765286135.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Reason677892991.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Gener1290955016.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Asn1.X509.DistributionPoint::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void DistributionPoint__ctor_m1833197677 (DistributionPoint_t769724552 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DistributionPoint::.ctor(Org.BouncyCastle.Asn1.X509.DistributionPointName,Org.BouncyCastle.Asn1.X509.ReasonFlags,Org.BouncyCastle.Asn1.X509.GeneralNames)
extern "C"  void DistributionPoint__ctor_m2319560129 (DistributionPoint_t769724552 * __this, DistributionPointName_t1765286135 * ___distributionPointName0, ReasonFlags_t677892991 * ___reasons1, GeneralNames_t1290955016 * ___crlIssuer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPoint Org.BouncyCastle.Asn1.X509.DistributionPoint::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DistributionPoint_t769724552 * DistributionPoint_GetInstance_m3594399461 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPoint Org.BouncyCastle.Asn1.X509.DistributionPoint::GetInstance(System.Object)
extern "C"  DistributionPoint_t769724552 * DistributionPoint_GetInstance_m653550753 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPointName Org.BouncyCastle.Asn1.X509.DistributionPoint::get_DistributionPointName()
extern "C"  DistributionPointName_t1765286135 * DistributionPoint_get_DistributionPointName_m97264435 (DistributionPoint_t769724552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.ReasonFlags Org.BouncyCastle.Asn1.X509.DistributionPoint::get_Reasons()
extern "C"  ReasonFlags_t677892991 * DistributionPoint_get_Reasons_m905109771 (DistributionPoint_t769724552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.GeneralNames Org.BouncyCastle.Asn1.X509.DistributionPoint::get_CrlIssuer()
extern "C"  GeneralNames_t1290955016 * DistributionPoint_get_CrlIssuer_m1534113011 (DistributionPoint_t769724552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.DistributionPoint::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DistributionPoint_ToAsn1Object_m3149533219 (DistributionPoint_t769724552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.DistributionPoint::ToString()
extern "C"  String_t* DistributionPoint_ToString_m3161804069 (DistributionPoint_t769724552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DistributionPoint::appendObject(System.Text.StringBuilder,System.String,System.String,System.String)
extern "C"  void DistributionPoint_appendObject_m671727867 (DistributionPoint_t769724552 * __this, StringBuilder_t1221177846 * ___buf0, String_t* ___sep1, String_t* ___name2, String_t* ___val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
