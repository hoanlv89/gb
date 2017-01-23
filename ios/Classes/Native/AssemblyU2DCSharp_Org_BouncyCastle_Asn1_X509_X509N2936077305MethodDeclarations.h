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

// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
struct X509NameEntryConverter_t1972691209;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509N1972691209.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509N2936077305.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.cctor()
extern "C"  void X509Name__cctor_m2487993274 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor()
extern "C"  void X509Name__ctor_m3446617391 (X509Name_t2936077305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void X509Name__ctor_m3632405650 (X509Name_t2936077305 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Collections.IList,System.Collections.IDictionary)
extern "C"  void X509Name__ctor_m3301533137 (X509Name_t2936077305 * __this, Il2CppObject * ___ordering0, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Collections.IList,System.Collections.IDictionary,Org.BouncyCastle.Asn1.X509.X509NameEntryConverter)
extern "C"  void X509Name__ctor_m2676790425 (X509Name_t2936077305 * __this, Il2CppObject * ___ordering0, Il2CppObject * ___attributes1, X509NameEntryConverter_t1972691209 * ___converter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Collections.IList,System.Collections.IList)
extern "C"  void X509Name__ctor_m427351955 (X509Name_t2936077305 * __this, Il2CppObject * ___oids0, Il2CppObject * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Collections.IList,System.Collections.IList,Org.BouncyCastle.Asn1.X509.X509NameEntryConverter)
extern "C"  void X509Name__ctor_m3376803883 (X509Name_t2936077305 * __this, Il2CppObject * ___oids0, Il2CppObject * ___values1, X509NameEntryConverter_t1972691209 * ___converter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.String)
extern "C"  void X509Name__ctor_m3813487509 (X509Name_t2936077305 * __this, String_t* ___dirName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.String,Org.BouncyCastle.Asn1.X509.X509NameEntryConverter)
extern "C"  void X509Name__ctor_m1064714829 (X509Name_t2936077305 * __this, String_t* ___dirName0, X509NameEntryConverter_t1972691209 * ___converter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Boolean,System.String)
extern "C"  void X509Name__ctor_m3991229866 (X509Name_t2936077305 * __this, bool ___reverse0, String_t* ___dirName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Boolean,System.String,Org.BouncyCastle.Asn1.X509.X509NameEntryConverter)
extern "C"  void X509Name__ctor_m1837250930 (X509Name_t2936077305 * __this, bool ___reverse0, String_t* ___dirName1, X509NameEntryConverter_t1972691209 * ___converter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Boolean,System.Collections.IDictionary,System.String)
extern "C"  void X509Name__ctor_m2302923247 (X509Name_t2936077305 * __this, bool ___reverse0, Il2CppObject * ___lookUp1, String_t* ___dirName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::.ctor(System.Boolean,System.Collections.IDictionary,System.String,Org.BouncyCastle.Asn1.X509.X509NameEntryConverter)
extern "C"  void X509Name__ctor_m2793410455 (X509Name_t2936077305 * __this, bool ___reverse0, Il2CppObject * ___lookUp1, String_t* ___dirName2, X509NameEntryConverter_t1972691209 * ___converter3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Name::get_DefaultReverse()
extern "C"  bool X509Name_get_DefaultReverse_m486030333 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::set_DefaultReverse(System.Boolean)
extern "C"  void X509Name_set_DefaultReverse_m2663011186 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.X509Name::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  X509Name_t2936077305 * X509Name_GetInstance_m3452642841 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.X509.X509Name::GetInstance(System.Object)
extern "C"  X509Name_t2936077305 * X509Name_GetInstance_m654209997 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.X509.X509Name::DecodeOid(System.String,System.Collections.IDictionary)
extern "C"  DerObjectIdentifier_t3495876513 * X509Name_DecodeOid_m2056363873 (X509Name_t2936077305 * __this, String_t* ___name0, Il2CppObject * ___lookUp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Asn1.X509.X509Name::GetOidList()
extern "C"  Il2CppObject * X509Name_GetOidList_m3289065697 (X509Name_t2936077305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Asn1.X509.X509Name::GetValueList()
extern "C"  Il2CppObject * X509Name_GetValueList_m3173869840 (X509Name_t2936077305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Asn1.X509.X509Name::GetValueList(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Il2CppObject * X509Name_GetValueList_m2187728052 (X509Name_t2936077305 * __this, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.X509Name::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X509Name_ToAsn1Object_m2224641804 (X509Name_t2936077305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Name::Equivalent(Org.BouncyCastle.Asn1.X509.X509Name,System.Boolean)
extern "C"  bool X509Name_Equivalent_m2701954108 (X509Name_t2936077305 * __this, X509Name_t2936077305 * ___other0, bool ___inOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Name::Equivalent(Org.BouncyCastle.Asn1.X509.X509Name)
extern "C"  bool X509Name_Equivalent_m4196011455 (X509Name_t2936077305 * __this, X509Name_t2936077305 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509Name::equivalentStrings(System.String,System.String)
extern "C"  bool X509Name_equivalentStrings_m1267075657 (Il2CppObject * __this /* static, unused */, String_t* ___s10, String_t* ___s21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.X509Name::canonicalize(System.String)
extern "C"  String_t* X509Name_canonicalize_m839102818 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.X509Name::decodeObject(System.String)
extern "C"  Asn1Object_t564283626 * X509Name_decodeObject_m1529886696 (Il2CppObject * __this /* static, unused */, String_t* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.X509Name::stripInternalSpaces(System.String)
extern "C"  String_t* X509Name_stripInternalSpaces_m3924076796 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509Name::AppendValue(System.Text.StringBuilder,System.Collections.IDictionary,Org.BouncyCastle.Asn1.DerObjectIdentifier,System.String)
extern "C"  void X509Name_AppendValue_m1748871989 (X509Name_t2936077305 * __this, StringBuilder_t1221177846 * ___buf0, Il2CppObject * ___oidSymbols1, DerObjectIdentifier_t3495876513 * ___oid2, String_t* ___val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.X509Name::ToString(System.Boolean,System.Collections.IDictionary)
extern "C"  String_t* X509Name_ToString_m1699832556 (X509Name_t2936077305 * __this, bool ___reverse0, Il2CppObject * ___oidSymbols1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.X509Name::ToString()
extern "C"  String_t* X509Name_ToString_m2592787260 (X509Name_t2936077305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
