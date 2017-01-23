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

// Org.BouncyCastle.Asn1.X509.BasicConstraints
struct BasicConstraints_t3459049714;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.BasicConstraints::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void BasicConstraints__ctor_m830912375 (BasicConstraints_t3459049714 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.BasicConstraints::.ctor(System.Boolean)
extern "C"  void BasicConstraints__ctor_m172863019 (BasicConstraints_t3459049714 * __this, bool ___cA0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.BasicConstraints::.ctor(System.Int32)
extern "C"  void BasicConstraints__ctor_m3095061733 (BasicConstraints_t3459049714 * __this, int32_t ___pathLenConstraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.BasicConstraints Org.BouncyCastle.Asn1.X509.BasicConstraints::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  BasicConstraints_t3459049714 * BasicConstraints_GetInstance_m3471701849 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.BasicConstraints Org.BouncyCastle.Asn1.X509.BasicConstraints::GetInstance(System.Object)
extern "C"  BasicConstraints_t3459049714 * BasicConstraints_GetInstance_m1670615565 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.BasicConstraints::IsCA()
extern "C"  bool BasicConstraints_IsCA_m2078108724 (BasicConstraints_t3459049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X509.BasicConstraints::get_PathLenConstraint()
extern "C"  BigInteger_t4268922522 * BasicConstraints_get_PathLenConstraint_m2825771159 (BasicConstraints_t3459049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.BasicConstraints::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * BasicConstraints_ToAsn1Object_m4288303725 (BasicConstraints_t3459049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.BasicConstraints::ToString()
extern "C"  String_t* BasicConstraints_ToString_m1231882875 (BasicConstraints_t3459049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
