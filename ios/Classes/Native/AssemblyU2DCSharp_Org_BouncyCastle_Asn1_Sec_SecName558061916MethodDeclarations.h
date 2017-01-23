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

// Org.BouncyCastle.Asn1.Sec.SecNamedCurves
struct SecNamedCurves_t558061916;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct GlvTypeBParameters_t500309695;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Endo_Glv500309695.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X9_X9ECPar1566440261.h"

// System.Void Org.BouncyCastle.Asn1.Sec.SecNamedCurves::.ctor()
extern "C"  void SecNamedCurves__ctor_m3109490651 (SecNamedCurves_t558061916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Sec.SecNamedCurves::.cctor()
extern "C"  void SecNamedCurves__cctor_m1771941866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.Sec.SecNamedCurves::ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  ECCurve_t140895757 * SecNamedCurves_ConfigureCurve_m2179852399 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.Sec.SecNamedCurves::ConfigureCurveGlv(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters)
extern "C"  ECCurve_t140895757 * SecNamedCurves_ConfigureCurveGlv_m590474605 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, GlvTypeBParameters_t500309695 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.Sec.SecNamedCurves::FromHex(System.String)
extern "C"  BigInteger_t4268922522 * SecNamedCurves_FromHex_m2048158783 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Sec.SecNamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
extern "C"  void SecNamedCurves_DefineCurve_m4019417262 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, X9ECParametersHolder_t1566440261 * ___holder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.Sec.SecNamedCurves::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * SecNamedCurves_GetByName_m529760707 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.Sec.SecNamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * SecNamedCurves_GetByOid_m132747238 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecNamedCurves::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * SecNamedCurves_GetOid_m594986554 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Sec.SecNamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* SecNamedCurves_GetName_m1966723835 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.Sec.SecNamedCurves::get_Names()
extern "C"  Il2CppObject * SecNamedCurves_get_Names_m1126661628 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
