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

// Org.BouncyCastle.Asn1.Asn1Set
struct Asn1Set_t2420705913;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1Encodable[]
struct Asn1EncodableU5BU5D_t3298833963;
// Org.BouncyCastle.Asn1.Asn1SetParser
struct Asn1SetParser_t1056765238;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"

// System.Void Org.BouncyCastle.Asn1.Asn1Set::.ctor(System.Int32)
extern "C"  void Asn1Set__ctor_m4039045408 (Asn1Set_t2420705913 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.Asn1.Asn1Set::GetInstance(System.Object)
extern "C"  Asn1Set_t2420705913 * Asn1Set_GetInstance_m2644112205 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.Asn1.Asn1Set::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  Asn1Set_t2420705913 * Asn1Set_GetInstance_m745987481 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.Asn1Set::GetEnumerator()
extern "C"  Il2CppObject * Asn1Set_GetEnumerator_m739075685 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.Asn1Set::GetObjects()
extern "C"  Il2CppObject * Asn1Set_GetObjects_m905324731 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Asn1Set::get_Item(System.Int32)
extern "C"  Asn1Encodable_t3447851422 * Asn1Set_get_Item_m4097979576 (Asn1Set_t2420705913 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Asn1Set::GetObjectAt(System.Int32)
extern "C"  Asn1Encodable_t3447851422 * Asn1Set_GetObjectAt_m2185532016 (Asn1Set_t2420705913 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Set::get_Size()
extern "C"  int32_t Asn1Set_get_Size_m174716647 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Set::get_Count()
extern "C"  int32_t Asn1Set_get_Count_m2952112637 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable[] Org.BouncyCastle.Asn1.Asn1Set::ToArray()
extern "C"  Asn1EncodableU5BU5D_t3298833963* Asn1Set_ToArray_m335725599 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1SetParser Org.BouncyCastle.Asn1.Asn1Set::get_Parser()
extern "C"  Il2CppObject * Asn1Set_get_Parser_m246402137 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Set::Asn1GetHashCode()
extern "C"  int32_t Asn1Set_Asn1GetHashCode_m2593969119 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1Set::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool Asn1Set_Asn1Equals_m1116590252 (Asn1Set_t2420705913 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Asn1Set::GetCurrent(System.Collections.IEnumerator)
extern "C"  Asn1Encodable_t3447851422 * Asn1Set_GetCurrent_m3010415505 (Asn1Set_t2420705913 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1Set::LessThanOrEqual(System.Byte[],System.Byte[])
extern "C"  bool Asn1Set_LessThanOrEqual_m2986925152 (Asn1Set_t2420705913 * __this, ByteU5BU5D_t3397334013* ___a0, ByteU5BU5D_t3397334013* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1Set::Sort()
extern "C"  void Asn1Set_Sort_m772967255 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1Set::AddObject(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void Asn1Set_AddObject_m1426155022 (Asn1Set_t2420705913 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Asn1Set::ToString()
extern "C"  String_t* Asn1Set_ToString_m2507432090 (Asn1Set_t2420705913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
