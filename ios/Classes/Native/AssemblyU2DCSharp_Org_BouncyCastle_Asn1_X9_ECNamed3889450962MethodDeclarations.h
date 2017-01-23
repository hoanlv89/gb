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

// Org.BouncyCastle.Asn1.X9.ECNamedCurveTable
struct ECNamedCurveTable_t3889450962;
// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_t1959966001;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Asn1.X9.ECNamedCurveTable::.ctor()
extern "C"  void ECNamedCurveTable__ctor_m3115093997 (ECNamedCurveTable_t3889450962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.X9.ECNamedCurveTable::GetByName(System.String)
extern "C"  X9ECParameters_t1959966001 * ECNamedCurveTable_GetByName_m6851077 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.X9.ECNamedCurveTable::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * ECNamedCurveTable_GetOid_m1303613228 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.X9.ECNamedCurveTable::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X9ECParameters_t1959966001 * ECNamedCurveTable_GetByOid_m2503869396 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.X9.ECNamedCurveTable::get_Names()
extern "C"  Il2CppObject * ECNamedCurveTable_get_Names_m20001042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
