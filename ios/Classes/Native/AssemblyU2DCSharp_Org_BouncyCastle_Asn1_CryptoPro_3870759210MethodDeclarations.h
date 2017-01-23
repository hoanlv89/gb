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

// Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters
struct Gost3410NamedParameters_t3870759210;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
struct Gost3410ParamSetParameters_t2624318576;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters::.ctor()
extern "C"  void Gost3410NamedParameters__ctor_m501062 (Gost3410NamedParameters_t3870759210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters::.cctor()
extern "C"  void Gost3410NamedParameters__cctor_m3129667201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Gost3410ParamSetParameters_t2624318576 * Gost3410NamedParameters_GetByOid_m1738781377 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters::get_Names()
extern "C"  Il2CppObject * Gost3410NamedParameters_get_Names_m471727447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters::GetByName(System.String)
extern "C"  Gost3410ParamSetParameters_t2624318576 * Gost3410NamedParameters_GetByName_m2881500902 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters::GetOid(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * Gost3410NamedParameters_GetOid_m3262953847 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
