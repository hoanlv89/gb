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

// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Org.BouncyCastle.Asn1.Asn1SequenceParser
struct Asn1SequenceParser_t3555866295;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"

// System.Void Org.BouncyCastle.Asn1.Asn1Sequence::.ctor(System.Int32)
extern "C"  void Asn1Sequence__ctor_m1255516353 (Asn1Sequence_t54253652 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Sequence Org.BouncyCastle.Asn1.Asn1Sequence::GetInstance(System.Object)
extern "C"  Asn1Sequence_t54253652 * Asn1Sequence_GetInstance_m842066429 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Sequence Org.BouncyCastle.Asn1.Asn1Sequence::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  Asn1Sequence_t54253652 * Asn1Sequence_GetInstance_m1010617905 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.Asn1Sequence::GetEnumerator()
extern "C"  Il2CppObject * Asn1Sequence_GetEnumerator_m1162066120 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.Asn1Sequence::GetObjects()
extern "C"  Il2CppObject * Asn1Sequence_GetObjects_m1550435392 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1SequenceParser Org.BouncyCastle.Asn1.Asn1Sequence::get_Parser()
extern "C"  Il2CppObject * Asn1Sequence_get_Parser_m1044923897 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Asn1Sequence::get_Item(System.Int32)
extern "C"  Asn1Encodable_t3447851422 * Asn1Sequence_get_Item_m1856895811 (Asn1Sequence_t54253652 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Asn1Sequence::GetObjectAt(System.Int32)
extern "C"  Asn1Encodable_t3447851422 * Asn1Sequence_GetObjectAt_m1732740853 (Asn1Sequence_t54253652 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Sequence::get_Size()
extern "C"  int32_t Asn1Sequence_get_Size_m3875743210 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Sequence::get_Count()
extern "C"  int32_t Asn1Sequence_get_Count_m1617689408 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Sequence::Asn1GetHashCode()
extern "C"  int32_t Asn1Sequence_Asn1GetHashCode_m840571146 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1Sequence::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool Asn1Sequence_Asn1Equals_m1786116107 (Asn1Sequence_t54253652 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Asn1Sequence::GetCurrent(System.Collections.IEnumerator)
extern "C"  Asn1Encodable_t3447851422 * Asn1Sequence_GetCurrent_m3304528456 (Asn1Sequence_t54253652 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1Sequence::AddObject(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void Asn1Sequence_AddObject_m596481613 (Asn1Sequence_t54253652 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Asn1Sequence::ToString()
extern "C"  String_t* Asn1Sequence_ToString_m3932708379 (Asn1Sequence_t54253652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
