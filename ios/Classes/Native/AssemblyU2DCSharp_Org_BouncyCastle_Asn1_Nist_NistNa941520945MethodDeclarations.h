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

// Org.BouncyCastle.Asn1.Nist.NistNamedCurves
struct NistNamedCurves_t941520945;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_t1959966001;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Asn1.Nist.NistNamedCurves::.ctor()
extern "C"  void NistNamedCurves__ctor_m1158579555 (NistNamedCurves_t941520945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Nist.NistNamedCurves::.cctor()
extern "C"  void NistNamedCurves__cctor_m840220310 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Nist.NistNamedCurves::DefineCurveAlias(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void NistNamedCurves_DefineCurveAlias_m3329875493 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.Nist.NistNamedCurves::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * NistNamedCurves_GetByName_m3571781683 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.Nist.NistNamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * NistNamedCurves_GetByOid_m346508634 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Nist.NistNamedCurves::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * NistNamedCurves_GetOid_m264693146 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Nist.NistNamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* NistNamedCurves_GetName_m1736640483 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.Nist.NistNamedCurves::get_Names()
extern "C"  Il2CppObject * NistNamedCurves_get_Names_m1544238724 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
