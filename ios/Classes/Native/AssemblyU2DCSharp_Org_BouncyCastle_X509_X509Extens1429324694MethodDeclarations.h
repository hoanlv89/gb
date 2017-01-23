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

// Org.BouncyCastle.X509.X509ExtensionBase
struct X509ExtensionBase_t1429324694;
// Org.BouncyCastle.Utilities.Collections.ISet
struct ISet_t4031211071;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.X509.X509ExtensionBase::.ctor()
extern "C"  void X509ExtensionBase__ctor_m2614577207 (X509ExtensionBase_t1429324694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.Collections.ISet Org.BouncyCastle.X509.X509ExtensionBase::GetExtensionOids(System.Boolean)
extern "C"  Il2CppObject * X509ExtensionBase_GetExtensionOids_m1424160511 (X509ExtensionBase_t1429324694 * __this, bool ___critical0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.Collections.ISet Org.BouncyCastle.X509.X509ExtensionBase::GetNonCriticalExtensionOids()
extern "C"  Il2CppObject * X509ExtensionBase_GetNonCriticalExtensionOids_m682356076 (X509ExtensionBase_t1429324694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.Collections.ISet Org.BouncyCastle.X509.X509ExtensionBase::GetCriticalExtensionOids()
extern "C"  Il2CppObject * X509ExtensionBase_GetCriticalExtensionOids_m3867236831 (X509ExtensionBase_t1429324694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1OctetString Org.BouncyCastle.X509.X509ExtensionBase::GetExtensionValue(System.String)
extern "C"  Asn1OctetString_t1486532927 * X509ExtensionBase_GetExtensionValue_m17049198 (X509ExtensionBase_t1429324694 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1OctetString Org.BouncyCastle.X509.X509ExtensionBase::GetExtensionValue(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Asn1OctetString_t1486532927 * X509ExtensionBase_GetExtensionValue_m4153521008 (X509ExtensionBase_t1429324694 * __this, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
