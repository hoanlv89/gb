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

// Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves
struct TeleTrusTNamedCurves_t3126647113;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
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

// System.Void Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::.cctor()
extern "C"  void TeleTrusTNamedCurves__cctor_m2993443018 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::.ctor()
extern "C"  void TeleTrusTNamedCurves__ctor_m1300132731 (TeleTrusTNamedCurves_t3126647113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  ECCurve_t140895757 * TeleTrusTNamedCurves_ConfigureCurve_m1932607951 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
extern "C"  void TeleTrusTNamedCurves_DefineCurve_m403550350 (Il2CppObject * __this /* static, unused */, String_t* ___name0, DerObjectIdentifier_t3495876513 * ___oid1, X9ECParametersHolder_t1566440261 * ___holder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * TeleTrusTNamedCurves_GetByName_m1827769251 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * TeleTrusTNamedCurves_GetByOid_m2926777798 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * TeleTrusTNamedCurves_GetOid_m1848087002 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* TeleTrusTNamedCurves_GetName_m544992603 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::get_Names()
extern "C"  Il2CppObject * TeleTrusTNamedCurves_get_Names_m3151443932 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::GetOid(System.Int16,System.Boolean)
extern "C"  DerObjectIdentifier_t3495876513 * TeleTrusTNamedCurves_GetOid_m3011867042 (Il2CppObject * __this /* static, unused */, int16_t ___curvesize0, bool ___twisted1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
