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

// Org.BouncyCastle.Asn1.X509.DistributionPointName
struct DistributionPointName_t1765286135;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Gener1290955016.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Asn1.X509.DistributionPointName::.ctor(System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DistributionPointName__ctor_m3375220173 (DistributionPointName_t1765286135 * __this, int32_t ___type0, Asn1Encodable_t3447851422 * ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DistributionPointName::.ctor(Org.BouncyCastle.Asn1.X509.GeneralNames)
extern "C"  void DistributionPointName__ctor_m3859620384 (DistributionPointName_t1765286135 * __this, GeneralNames_t1290955016 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DistributionPointName::.ctor(Org.BouncyCastle.Asn1.Asn1TaggedObject)
extern "C"  void DistributionPointName__ctor_m3985449626 (DistributionPointName_t1765286135 * __this, Asn1TaggedObject_t990853098 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPointName Org.BouncyCastle.Asn1.X509.DistributionPointName::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DistributionPointName_t1765286135 * DistributionPointName_GetInstance_m2444540485 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.DistributionPointName Org.BouncyCastle.Asn1.X509.DistributionPointName::GetInstance(System.Object)
extern "C"  DistributionPointName_t1765286135 * DistributionPointName_GetInstance_m2998727929 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.DistributionPointName::get_PointType()
extern "C"  int32_t DistributionPointName_get_PointType_m2916212370 (DistributionPointName_t1765286135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.X509.DistributionPointName::get_Name()
extern "C"  Asn1Encodable_t3447851422 * DistributionPointName_get_Name_m2876408425 (DistributionPointName_t1765286135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.DistributionPointName::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DistributionPointName_ToAsn1Object_m1504545858 (DistributionPointName_t1765286135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.DistributionPointName::ToString()
extern "C"  String_t* DistributionPointName_ToString_m1951487636 (DistributionPointName_t1765286135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.DistributionPointName::appendObject(System.Text.StringBuilder,System.String,System.String,System.String)
extern "C"  void DistributionPointName_appendObject_m4097922192 (DistributionPointName_t1765286135 * __this, StringBuilder_t1221177846 * ___buf0, String_t* ___sep1, String_t* ___name2, String_t* ___val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
