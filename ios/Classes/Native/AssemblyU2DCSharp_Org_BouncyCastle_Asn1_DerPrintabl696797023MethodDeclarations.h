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

// Org.BouncyCastle.Asn1.DerPrintableString
struct DerPrintableString_t696797023;
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

// System.Void Org.BouncyCastle.Asn1.DerPrintableString::.ctor(System.Byte[])
extern "C"  void DerPrintableString__ctor_m1912478042 (DerPrintableString_t696797023 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerPrintableString::.ctor(System.String)
extern "C"  void DerPrintableString__ctor_m1162975149 (DerPrintableString_t696797023 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerPrintableString::.ctor(System.String,System.Boolean)
extern "C"  void DerPrintableString__ctor_m3165712318 (DerPrintableString_t696797023 * __this, String_t* ___str0, bool ___validate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerPrintableString Org.BouncyCastle.Asn1.DerPrintableString::GetInstance(System.Object)
extern "C"  DerPrintableString_t696797023 * DerPrintableString_GetInstance_m566324829 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerPrintableString Org.BouncyCastle.Asn1.DerPrintableString::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerPrintableString_t696797023 * DerPrintableString_GetInstance_m4109172393 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerPrintableString::GetString()
extern "C"  String_t* DerPrintableString_GetString_m2073857029 (DerPrintableString_t696797023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerPrintableString::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerPrintableString_GetOctets_m3006230695 (DerPrintableString_t696797023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerPrintableString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerPrintableString_Encode_m2685836340 (DerPrintableString_t696797023 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerPrintableString::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerPrintableString_Asn1Equals_m3214599046 (DerPrintableString_t696797023 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerPrintableString::IsPrintableString(System.String)
extern "C"  bool DerPrintableString_IsPrintableString_m2572329101 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
