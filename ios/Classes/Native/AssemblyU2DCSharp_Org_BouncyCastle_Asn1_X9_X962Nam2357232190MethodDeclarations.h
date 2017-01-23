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

// Org.BouncyCastle.Asn1.X9.X962NamedCurves
struct X962NamedCurves_t2357232190;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
struct X9ECParametersHolder_t1566440261;
// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_t1959966001;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X9_X9ECPar1566440261.h"

// System.Void Org.BouncyCastle.Asn1.X9.X962NamedCurves::.ctor()
extern "C"  void X962NamedCurves__ctor_m1993692291 (X962NamedCurves_t2357232190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X962NamedCurves::.cctor()
extern "C"  void X962NamedCurves__cctor_m2055883344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X962NamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
extern "C"  void X962NamedCurves_DefineCurve_m2913010932 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, X9ECParametersHolder_t1566440261 * ___holder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.X9.X962NamedCurves::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * X962NamedCurves_GetByName_m3246079675 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.X9.X962NamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * X962NamedCurves_GetByOid_m1066184884 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.X9.X962NamedCurves::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * X962NamedCurves_GetOid_m2786885988 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X9.X962NamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* X962NamedCurves_GetName_m1798732987 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.X9.X962NamedCurves::get_Names()
extern "C"  Il2CppObject * X962NamedCurves_get_Names_m4183165106 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
