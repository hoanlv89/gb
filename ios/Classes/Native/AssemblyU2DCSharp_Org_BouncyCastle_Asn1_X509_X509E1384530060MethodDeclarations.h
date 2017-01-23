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

// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// Org.BouncyCastle.Asn1.X509.X509Extension
struct X509Extension_t2020524125;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[]
struct DerObjectIdentifierU5BU5D_t1959811260;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509E1384530060.h"

// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void X509Extensions__ctor_m3543989493 (X509Extensions_t1384530060 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(System.Collections.IDictionary)
extern "C"  void X509Extensions__ctor_m1751678415 (X509Extensions_t1384530060 * __this, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(System.Collections.IList,System.Collections.IDictionary)
extern "C"  void X509Extensions__ctor_m133094924 (X509Extensions_t1384530060 * __this, Il2CppObject * ___ordering0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(System.Collections.IList,System.Collections.IList)
extern "C"  void X509Extensions__ctor_m1913275364 (X509Extensions_t1384530060 * __this, Il2CppObject * ___oids0, Il2CppObject * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(System.Collections.Hashtable)
extern "C"  void X509Extensions__ctor_m2833549460 (X509Extensions_t1384530060 * __this, Hashtable_t909839986 * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(System.Collections.ArrayList,System.Collections.Hashtable)
extern "C"  void X509Extensions__ctor_m831755617 (X509Extensions_t1384530060 * __this, ArrayList_t4252133567 * ___ordering0, Hashtable_t909839986 * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.ctor(System.Collections.ArrayList,System.Collections.ArrayList)
extern "C"  void X509Extensions__ctor_m387366404 (X509Extensions_t1384530060 * __this, ArrayList_t4252133567 * ___oids0, ArrayList_t4252133567 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.Asn1.X509.X509Extensions::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  X509Extensions_t1384530060 * X509Extensions_GetInstance_m3569404537 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.Asn1.X509.X509Extensions::GetInstance(System.Object)
extern "C"  X509Extensions_t1384530060 * X509Extensions_GetInstance_m327653677 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.X509.X509Extensions::Oids()
extern "C"  Il2CppObject * X509Extensions_Oids_m3692452953 (X509Extensions_t1384530060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Org.BouncyCastle.Asn1.X509.X509Extensions::get_ExtensionOids()
extern "C"  Il2CppObject * X509Extensions_get_ExtensionOids_m3431458659 (X509Extensions_t1384530060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extension Org.BouncyCastle.Asn1.X509.X509Extensions::GetExtension(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  X509Extension_t2020524125 * X509Extensions_GetExtension_m1933748382 (X509Extensions_t1384530060 * __this, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.X509Extensions::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X509Extensions_ToAsn1Object_m2240350375 (X509Extensions_t1384530060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Extensions::Equivalent(Org.BouncyCastle.Asn1.X509.X509Extensions)
extern "C"  bool X509Extensions_Equivalent_m1384682463 (X509Extensions_t1384530060 * __this, X509Extensions_t1384530060 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[] Org.BouncyCastle.Asn1.X509.X509Extensions::GetExtensionOids()
extern "C"  DerObjectIdentifierU5BU5D_t1959811260* X509Extensions_GetExtensionOids_m1789736661 (X509Extensions_t1384530060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[] Org.BouncyCastle.Asn1.X509.X509Extensions::GetNonCriticalExtensionOids()
extern "C"  DerObjectIdentifierU5BU5D_t1959811260* X509Extensions_GetNonCriticalExtensionOids_m1599322505 (X509Extensions_t1384530060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[] Org.BouncyCastle.Asn1.X509.X509Extensions::GetCriticalExtensionOids()
extern "C"  DerObjectIdentifierU5BU5D_t1959811260* X509Extensions_GetCriticalExtensionOids_m291359476 (X509Extensions_t1384530060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[] Org.BouncyCastle.Asn1.X509.X509Extensions::GetExtensionOids(System.Boolean)
extern "C"  DerObjectIdentifierU5BU5D_t1959811260* X509Extensions_GetExtensionOids_m2927371914 (X509Extensions_t1384530060 * __this, bool ___isCritical0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[] Org.BouncyCastle.Asn1.X509.X509Extensions::ToOidArray(System.Collections.IList)
extern "C"  DerObjectIdentifierU5BU5D_t1959811260* X509Extensions_ToOidArray_m773136722 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___oids0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Extensions::.cctor()
extern "C"  void X509Extensions__cctor_m2130904261 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
