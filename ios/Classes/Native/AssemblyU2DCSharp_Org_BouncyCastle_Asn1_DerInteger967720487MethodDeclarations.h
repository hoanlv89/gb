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

// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerInteger::.ctor(System.Int32)
extern "C"  void DerInteger__ctor_m1698047594 (DerInteger_t967720487 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerInteger::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void DerInteger__ctor_m475758277 (DerInteger_t967720487 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerInteger::.ctor(System.Byte[])
extern "C"  void DerInteger__ctor_m3653300050 (DerInteger_t967720487 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.DerInteger::GetInstance(System.Object)
extern "C"  DerInteger_t967720487 * DerInteger_GetInstance_m2831250237 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.DerInteger::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerInteger_t967720487 * DerInteger_GetInstance_m670600569 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.DerInteger::get_Value()
extern "C"  BigInteger_t4268922522 * DerInteger_get_Value_m3442334834 (DerInteger_t967720487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.DerInteger::get_PositiveValue()
extern "C"  BigInteger_t4268922522 * DerInteger_get_PositiveValue_m3443645031 (DerInteger_t967720487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerInteger::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerInteger_Encode_m2366984812 (DerInteger_t967720487 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerInteger::Asn1GetHashCode()
extern "C"  int32_t DerInteger_Asn1GetHashCode_m2690374333 (DerInteger_t967720487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerInteger::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerInteger_Asn1Equals_m14310430 (DerInteger_t967720487 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerInteger::ToString()
extern "C"  String_t* DerInteger_ToString_m952005390 (DerInteger_t967720487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
