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

// Org.BouncyCastle.Asn1.Ocsp.ResponderID
struct ResponderID_t853298195;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1OctetS1486532927.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509N2936077305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"

// System.Void Org.BouncyCastle.Asn1.Ocsp.ResponderID::.ctor(Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void ResponderID__ctor_m444235964 (ResponderID_t853298195 * __this, Asn1OctetString_t1486532927 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Ocsp.ResponderID::.ctor(Org.BouncyCastle.Asn1.X509.X509Name)
extern "C"  void ResponderID__ctor_m4290250084 (ResponderID_t853298195 * __this, X509Name_t2936077305 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.ResponderID Org.BouncyCastle.Asn1.Ocsp.ResponderID::GetInstance(System.Object)
extern "C"  ResponderID_t853298195 * ResponderID_GetInstance_m3860052637 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.ResponderID Org.BouncyCastle.Asn1.Ocsp.ResponderID::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  ResponderID_t853298195 * ResponderID_GetInstance_m846265761 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.Ocsp.ResponderID::GetKeyHash()
extern "C"  ByteU5BU5D_t3397334013* ResponderID_GetKeyHash_m3100452059 (ResponderID_t853298195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Name Org.BouncyCastle.Asn1.Ocsp.ResponderID::get_Name()
extern "C"  X509Name_t2936077305 * ResponderID_get_Name_m2974983269 (ResponderID_t853298195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Ocsp.ResponderID::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * ResponderID_ToAsn1Object_m2181003113 (ResponderID_t853298195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
