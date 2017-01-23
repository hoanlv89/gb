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

// Org.BouncyCastle.Asn1.DerVisibleString
struct DerVisibleString_t512908706;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
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
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerVisibleString::.ctor(System.Byte[])
extern "C"  void DerVisibleString__ctor_m3071548053 (DerVisibleString_t512908706 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerVisibleString::.ctor(System.String)
extern "C"  void DerVisibleString__ctor_m472859034 (DerVisibleString_t512908706 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerVisibleString Org.BouncyCastle.Asn1.DerVisibleString::GetInstance(System.Object)
extern "C"  DerVisibleString_t512908706 * DerVisibleString_GetInstance_m3319715281 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerVisibleString Org.BouncyCastle.Asn1.DerVisibleString::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerVisibleString_t512908706 * DerVisibleString_GetInstance_m4240797909 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerVisibleString::GetString()
extern "C"  String_t* DerVisibleString_GetString_m3668206914 (DerVisibleString_t512908706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerVisibleString::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerVisibleString_GetOctets_m2196854764 (DerVisibleString_t512908706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerVisibleString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerVisibleString_Encode_m2932345161 (DerVisibleString_t512908706 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerVisibleString::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerVisibleString_Asn1Equals_m3197509301 (DerVisibleString_t512908706 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerVisibleString::Asn1GetHashCode()
extern "C"  int32_t DerVisibleString_Asn1GetHashCode_m920211380 (DerVisibleString_t512908706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
