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

// Org.BouncyCastle.Asn1.X509.Time
struct Time_t2566907995;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.Time::.ctor(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  void Time__ctor_m3112648718 (Time_t2566907995 * __this, Asn1Object_t564283626 * ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.Time::.ctor(System.DateTime)
extern "C"  void Time__ctor_m860701299 (Time_t2566907995 * __this, DateTime_t693205669  ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.Time::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  Time_t2566907995 * Time_GetInstance_m4117159065 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.Time Org.BouncyCastle.Asn1.X509.Time::GetInstance(System.Object)
extern "C"  Time_t2566907995 * Time_GetInstance_m491024973 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.Time::GetTime()
extern "C"  String_t* Time_GetTime_m3518654579 (Time_t2566907995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Asn1.X509.Time::ToDateTime()
extern "C"  DateTime_t693205669  Time_ToDateTime_m4083070386 (Time_t2566907995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.Time::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * Time_ToAsn1Object_m3566676234 (Time_t2566907995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.Time::ToString()
extern "C"  String_t* Time_ToString_m738272178 (Time_t2566907995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
