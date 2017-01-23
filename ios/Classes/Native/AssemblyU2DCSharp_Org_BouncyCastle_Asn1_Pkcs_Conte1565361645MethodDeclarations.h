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

// Org.BouncyCastle.Asn1.Pkcs.ContentInfo
struct ContentInfo_t1565361645;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.Pkcs.ContentInfo::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void ContentInfo__ctor_m3559169211 (ContentInfo_t1565361645 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Pkcs.ContentInfo::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void ContentInfo__ctor_m1894826853 (ContentInfo_t1565361645 * __this, DerObjectIdentifier_t3495876513 * ___contentType0, Asn1Encodable_t3447851422 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Pkcs.ContentInfo Org.BouncyCastle.Asn1.Pkcs.ContentInfo::GetInstance(System.Object)
extern "C"  ContentInfo_t1565361645 * ContentInfo_GetInstance_m2678952701 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Pkcs.ContentInfo::get_ContentType()
extern "C"  DerObjectIdentifier_t3495876513 * ContentInfo_get_ContentType_m2462320243 (ContentInfo_t1565361645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.Pkcs.ContentInfo::get_Content()
extern "C"  Asn1Encodable_t3447851422 * ContentInfo_get_Content_m731184482 (ContentInfo_t1565361645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Pkcs.ContentInfo::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * ContentInfo_ToAsn1Object_m2249287301 (ContentInfo_t1565361645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
