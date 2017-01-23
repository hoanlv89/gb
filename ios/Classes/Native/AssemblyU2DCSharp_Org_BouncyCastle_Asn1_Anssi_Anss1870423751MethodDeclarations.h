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

// Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves
struct AnssiNamedCurves_t1870423751;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X9_X9ECPar1566440261.h"

// System.Void Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::.cctor()
extern "C"  void AnssiNamedCurves__cctor_m2338537002 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::.ctor()
extern "C"  void AnssiNamedCurves__ctor_m2054351579 (AnssiNamedCurves_t1870423751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  ECCurve_t140895757 * AnssiNamedCurves_ConfigureCurve_m1431922671 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::FromHex(System.String)
extern "C"  BigInteger_t4268922522 * AnssiNamedCurves_FromHex_m563892735 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
extern "C"  void AnssiNamedCurves_DefineCurve_m1459791918 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, X9ECParametersHolder_t1566440261 * ___holder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * AnssiNamedCurves_GetByName_m179473539 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * AnssiNamedCurves_GetByOid_m613943078 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * AnssiNamedCurves_GetOid_m277605434 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* AnssiNamedCurves_GetName_m713191675 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::get_Names()
extern "C"  Il2CppObject * AnssiNamedCurves_get_Names_m3914904700 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
