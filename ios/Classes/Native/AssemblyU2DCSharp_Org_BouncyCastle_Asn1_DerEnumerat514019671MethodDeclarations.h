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

// Org.BouncyCastle.Asn1.DerEnumerated
struct DerEnumerated_t514019671;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerEnumerated::.ctor(System.Int32)
extern "C"  void DerEnumerated__ctor_m2425876246 (DerEnumerated_t514019671 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerEnumerated::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void DerEnumerated__ctor_m2575635727 (DerEnumerated_t514019671 * __this, BigInteger_t4268922522 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerEnumerated::.ctor(System.Byte[])
extern "C"  void DerEnumerated__ctor_m2009167426 (DerEnumerated_t514019671 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerEnumerated Org.BouncyCastle.Asn1.DerEnumerated::GetInstance(System.Object)
extern "C"  DerEnumerated_t514019671 * DerEnumerated_GetInstance_m3088997965 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerEnumerated Org.BouncyCastle.Asn1.DerEnumerated::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerEnumerated_t514019671 * DerEnumerated_GetInstance_m2548125849 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.DerEnumerated::get_Value()
extern "C"  BigInteger_t4268922522 * DerEnumerated_get_Value_m3975567728 (DerEnumerated_t514019671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerEnumerated::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerEnumerated_Encode_m3926807756 (DerEnumerated_t514019671 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerEnumerated::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerEnumerated_Asn1Equals_m1072326138 (DerEnumerated_t514019671 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerEnumerated::Asn1GetHashCode()
extern "C"  int32_t DerEnumerated_Asn1GetHashCode_m2713108127 (DerEnumerated_t514019671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerEnumerated Org.BouncyCastle.Asn1.DerEnumerated::FromOctetString(System.Byte[])
extern "C"  DerEnumerated_t514019671 * DerEnumerated_FromOctetString_m1274552241 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___enc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerEnumerated::.cctor()
extern "C"  void DerEnumerated__cctor_m1943398886 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
