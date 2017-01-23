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

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves
struct CustomNamedCurves_t4042549922;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.String
struct String_t;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct GlvTypeBParameters_t500309695;
// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
struct X9ECParametersHolder_t1566440261;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_t1959966001;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Endo_Glv500309695.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X9_X9ECPar1566440261.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::.ctor()
extern "C"  void CustomNamedCurves__ctor_m2348233976 (CustomNamedCurves_t4042549922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::.cctor()
extern "C"  void CustomNamedCurves__cctor_m504972119 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.EC.CustomNamedCurves::FromHex(System.String)
extern "C"  BigInteger_t4268922522 * CustomNamedCurves_FromHex_m2696516276 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Crypto.EC.CustomNamedCurves::ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  ECCurve_t140895757 * CustomNamedCurves_ConfigureCurve_m1128597606 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Crypto.EC.CustomNamedCurves::ConfigureCurveGlv(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters)
extern "C"  ECCurve_t140895757 * CustomNamedCurves_ConfigureCurveGlv_m3328836340 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, GlvTypeBParameters_t500309695 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
extern "C"  void CustomNamedCurves_DefineCurve_m3382532575 (Il2CppObject * __this /* static, unused */, String_t* ___name0, X9ECParametersHolder_t1566440261 * ___holder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurveWithOid(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
extern "C"  void CustomNamedCurves_DefineCurveWithOid_m1670115979 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, X9ECParametersHolder_t1566440261 * ___holder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurveAlias(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void CustomNamedCurves_DefineCurveAlias_m964388456 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * CustomNamedCurves_GetByName_m1714559674 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * CustomNamedCurves_GetByOid_m1333291007 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * CustomNamedCurves_GetOid_m2995144513 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* CustomNamedCurves_GetName_m2738118500 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Crypto.EC.CustomNamedCurves::get_Names()
extern "C"  Il2CppObject * CustomNamedCurves_get_Names_m1197719937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
