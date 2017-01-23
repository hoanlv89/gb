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

// Org.BouncyCastle.Asn1.DerUtf8String
struct DerUtf8String_t1713298971;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"

// System.Void Org.BouncyCastle.Asn1.DerUtf8String::.ctor(System.Byte[])
extern "C"  void DerUtf8String__ctor_m1695601066 (DerUtf8String_t1713298971 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUtf8String::.ctor(System.String)
extern "C"  void DerUtf8String__ctor_m629198513 (DerUtf8String_t1713298971 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerUtf8String Org.BouncyCastle.Asn1.DerUtf8String::GetInstance(System.Object)
extern "C"  DerUtf8String_t1713298971 * DerUtf8String_GetInstance_m394351629 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerUtf8String Org.BouncyCastle.Asn1.DerUtf8String::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerUtf8String_t1713298971 * DerUtf8String_GetInstance_m3241195865 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerUtf8String::GetString()
extern "C"  String_t* DerUtf8String_GetString_m1400229021 (DerUtf8String_t1713298971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerUtf8String::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerUtf8String_Asn1Equals_m4060548966 (DerUtf8String_t1713298971 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerUtf8String::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerUtf8String_Encode_m1632554892 (DerUtf8String_t1713298971 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
