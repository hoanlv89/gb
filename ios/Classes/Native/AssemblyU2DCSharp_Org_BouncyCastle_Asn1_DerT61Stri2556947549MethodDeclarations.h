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

// Org.BouncyCastle.Asn1.DerT61String
struct DerT61String_t2556947549;
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

// System.Void Org.BouncyCastle.Asn1.DerT61String::.ctor(System.Byte[])
extern "C"  void DerT61String__ctor_m3181786792 (DerT61String_t2556947549 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerT61String::.ctor(System.String)
extern "C"  void DerT61String__ctor_m13859749 (DerT61String_t2556947549 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerT61String Org.BouncyCastle.Asn1.DerT61String::GetInstance(System.Object)
extern "C"  DerT61String_t2556947549 * DerT61String_GetInstance_m217528925 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerT61String Org.BouncyCastle.Asn1.DerT61String::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerT61String_t2556947549 * DerT61String_GetInstance_m3239208857 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerT61String::GetString()
extern "C"  String_t* DerT61String_GetString_m1866139133 (DerT61String_t2556947549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerT61String::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerT61String_Encode_m755319518 (DerT61String_t2556947549 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerT61String::GetOctets()
extern "C"  ByteU5BU5D_t3397334013* DerT61String_GetOctets_m2271353179 (DerT61String_t2556947549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerT61String::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerT61String_Asn1Equals_m3796211996 (DerT61String_t2556947549 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
