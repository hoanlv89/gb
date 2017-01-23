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

// Org.BouncyCastle.Asn1.X509.X509Extension
struct X509Extension_t2020524125;
// Org.BouncyCastle.Asn1.DerBoolean
struct DerBoolean_t857650049;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerBoolean857650049.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1OctetS1486532927.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509E2020524125.h"

// System.Void Org.BouncyCastle.Asn1.X509.X509Extension::.ctor(Org.BouncyCastle.Asn1.DerBoolean,Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void X509Extension__ctor_m28930363 (X509Extension_t2020524125 * __this, DerBoolean_t857650049 * ___critical0, Asn1OctetString_t1486532927 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extension::.ctor(System.Boolean,Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void X509Extension__ctor_m3183847322 (X509Extension_t2020524125 * __this, bool ___critical0, Asn1OctetString_t1486532927 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Extension::get_IsCritical()
extern "C"  bool X509Extension_get_IsCritical_m1332290981 (X509Extension_t2020524125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1OctetString Org.BouncyCastle.Asn1.X509.X509Extension::get_Value()
extern "C"  Asn1OctetString_t1486532927 * X509Extension_get_Value_m825706626 (X509Extension_t2020524125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.X509.X509Extension::GetParsedValue()
extern "C"  Asn1Encodable_t3447851422 * X509Extension_GetParsedValue_m4182003427 (X509Extension_t2020524125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m2980722728 (X509Extension_t2020524125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Extension::Equals(System.Object)
extern "C"  bool X509Extension_Equals_m1667732940 (X509Extension_t2020524125 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.X509Extension::ConvertValueToObject(Org.BouncyCastle.Asn1.X509.X509Extension)
extern "C"  Asn1Object_t564283626 * X509Extension_ConvertValueToObject_m430875943 (Il2CppObject * __this /* static, unused */, X509Extension_t2020524125 * ___ext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
