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

// Org.BouncyCastle.Asn1.DerBoolean
struct DerBoolean_t857650049;
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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerBoolean::.ctor(System.Byte[])
extern "C"  void DerBoolean__ctor_m1132124748 (DerBoolean_t857650049 * __this, ByteU5BU5D_t3397334013* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBoolean::.ctor(System.Boolean)
extern "C"  void DerBoolean__ctor_m570478924 (DerBoolean_t857650049 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBoolean Org.BouncyCastle.Asn1.DerBoolean::GetInstance(System.Object)
extern "C"  DerBoolean_t857650049 * DerBoolean_GetInstance_m326063177 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBoolean Org.BouncyCastle.Asn1.DerBoolean::GetInstance(System.Boolean)
extern "C"  DerBoolean_t857650049 * DerBoolean_GetInstance_m9782648 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBoolean Org.BouncyCastle.Asn1.DerBoolean::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerBoolean_t857650049 * DerBoolean_GetInstance_m1851002757 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerBoolean::get_IsTrue()
extern "C"  bool DerBoolean_get_IsTrue_m3740291530 (DerBoolean_t857650049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBoolean::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerBoolean_Encode_m1744599722 (DerBoolean_t857650049 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerBoolean::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerBoolean_Asn1Equals_m2884315532 (DerBoolean_t857650049 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerBoolean::Asn1GetHashCode()
extern "C"  int32_t DerBoolean_Asn1GetHashCode_m4194176875 (DerBoolean_t857650049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerBoolean::ToString()
extern "C"  String_t* DerBoolean_ToString_m2412892304 (DerBoolean_t857650049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBoolean Org.BouncyCastle.Asn1.DerBoolean::FromOctetString(System.Byte[])
extern "C"  DerBoolean_t857650049 * DerBoolean_FromOctetString_m2112893733 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerBoolean::.cctor()
extern "C"  void DerBoolean__cctor_m3062575960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
