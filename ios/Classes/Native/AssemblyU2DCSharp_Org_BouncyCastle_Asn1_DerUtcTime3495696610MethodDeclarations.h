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

// Org.BouncyCastle.Asn1.DerUtcTime
struct DerUtcTime_t3495696610;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerUtcTime::.ctor(System.String)
extern "C"  void DerUtcTime__ctor_m451037194 (DerUtcTime_t3495696610 * __this, String_t* ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUtcTime::.ctor(System.DateTime)
extern "C"  void DerUtcTime__ctor_m3957396154 (DerUtcTime_t3495696610 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUtcTime::.ctor(System.Byte[])
extern "C"  void DerUtcTime__ctor_m3393366445 (DerUtcTime_t3495696610 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerUtcTime Org.BouncyCastle.Asn1.DerUtcTime::GetInstance(System.Object)
extern "C"  DerUtcTime_t3495696610 * DerUtcTime_GetInstance_m1317167233 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerUtcTime Org.BouncyCastle.Asn1.DerUtcTime::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerUtcTime_t3495696610 * DerUtcTime_GetInstance_m1377137333 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Asn1.DerUtcTime::ToDateTime()
extern "C"  DateTime_t693205669  DerUtcTime_ToDateTime_m595141649 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Asn1.DerUtcTime::ToAdjustedDateTime()
extern "C"  DateTime_t693205669  DerUtcTime_ToAdjustedDateTime_m1825038105 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Asn1.DerUtcTime::ParseDateString(System.String,System.String)
extern "C"  DateTime_t693205669  DerUtcTime_ParseDateString_m599089487 (DerUtcTime_t3495696610 * __this, String_t* ___dateStr0, String_t* ___formatStr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerUtcTime::get_TimeString()
extern "C"  String_t* DerUtcTime_get_TimeString_m1827118382 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerUtcTime::get_AdjustedTime()
extern "C"  String_t* DerUtcTime_get_AdjustedTime_m798017907 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerUtcTime::get_AdjustedTimeString()
extern "C"  String_t* DerUtcTime_get_AdjustedTimeString_m947079824 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerUtcTime::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerUtcTime_GetOctets_m3659709304 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUtcTime::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerUtcTime_Encode_m713386673 (DerUtcTime_t3495696610 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerUtcTime::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerUtcTime_Asn1Equals_m3709424765 (DerUtcTime_t3495696610 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerUtcTime::Asn1GetHashCode()
extern "C"  int32_t DerUtcTime_Asn1GetHashCode_m1456784636 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerUtcTime::ToString()
extern "C"  String_t* DerUtcTime_ToString_m385662089 (DerUtcTime_t3495696610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
