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

// Org.BouncyCastle.Asn1.DerGeneralizedTime
struct DerGeneralizedTime_t1810943552;
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

// System.Void Org.BouncyCastle.Asn1.DerGeneralizedTime::.ctor(System.String)
extern "C"  void DerGeneralizedTime__ctor_m1735028498 (DerGeneralizedTime_t1810943552 * __this, String_t* ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGeneralizedTime::.ctor(System.DateTime)
extern "C"  void DerGeneralizedTime__ctor_m2532554406 (DerGeneralizedTime_t1810943552 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGeneralizedTime::.ctor(System.Byte[])
extern "C"  void DerGeneralizedTime__ctor_m2643217971 (DerGeneralizedTime_t1810943552 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerGeneralizedTime Org.BouncyCastle.Asn1.DerGeneralizedTime::GetInstance(System.Object)
extern "C"  DerGeneralizedTime_t1810943552 * DerGeneralizedTime_GetInstance_m2877778493 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerGeneralizedTime Org.BouncyCastle.Asn1.DerGeneralizedTime::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerGeneralizedTime_t1810943552 * DerGeneralizedTime_GetInstance_m2242790961 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerGeneralizedTime::get_TimeString()
extern "C"  String_t* DerGeneralizedTime_get_TimeString_m269864230 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerGeneralizedTime::GetTime()
extern "C"  String_t* DerGeneralizedTime_GetTime_m1691589818 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerGeneralizedTime::CalculateGmtOffset()
extern "C"  String_t* DerGeneralizedTime_CalculateGmtOffset_m2723579300 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerGeneralizedTime::Convert(System.Int32)
extern "C"  String_t* DerGeneralizedTime_Convert_m3529371831 (Il2CppObject * __this /* static, unused */, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Asn1.DerGeneralizedTime::ToDateTime()
extern "C"  DateTime_t693205669  DerGeneralizedTime_ToDateTime_m156960775 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerGeneralizedTime::FString(System.Int32)
extern "C"  String_t* DerGeneralizedTime_FString_m437273419 (DerGeneralizedTime_t1810943552 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Asn1.DerGeneralizedTime::ParseDateString(System.String,System.String,System.Boolean)
extern "C"  DateTime_t693205669  DerGeneralizedTime_ParseDateString_m3897324172 (DerGeneralizedTime_t1810943552 * __this, String_t* ___s0, String_t* ___format1, bool ___makeUniversal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerGeneralizedTime::get_HasFractionalSeconds()
extern "C"  bool DerGeneralizedTime_get_HasFractionalSeconds_m3267972455 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerGeneralizedTime::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerGeneralizedTime_GetOctets_m1302921532 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGeneralizedTime::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerGeneralizedTime_Encode_m1311434947 (DerGeneralizedTime_t1810943552 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerGeneralizedTime::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerGeneralizedTime_Asn1Equals_m3664279679 (DerGeneralizedTime_t1810943552 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerGeneralizedTime::Asn1GetHashCode()
extern "C"  int32_t DerGeneralizedTime_Asn1GetHashCode_m4163668960 (DerGeneralizedTime_t1810943552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
