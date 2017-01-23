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

// Org.BouncyCastle.Asn1.Ocsp.ResponseBytes
struct ResponseBytes_t561211756;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1OctetS1486532927.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void ResponseBytes__ctor_m2176455441 (ResponseBytes_t561211756 * __this, DerObjectIdentifier_t3495876513 * ___responseType0, Asn1OctetString_t1486532927 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void ResponseBytes__ctor_m3002353740 (ResponseBytes_t561211756 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.ResponseBytes Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  ResponseBytes_t561211756 * ResponseBytes_GetInstance_m3034504709 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.ResponseBytes Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::GetInstance(System.Object)
extern "C"  ResponseBytes_t561211756 * ResponseBytes_GetInstance_m1954378233 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::get_ResponseType()
extern "C"  DerObjectIdentifier_t3495876513 * ResponseBytes_get_ResponseType_m524118856 (ResponseBytes_t561211756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1OctetString Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::get_Response()
extern "C"  Asn1OctetString_t1486532927 * ResponseBytes_get_Response_m634657550 (ResponseBytes_t561211756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Ocsp.ResponseBytes::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * ResponseBytes_ToAsn1Object_m2262281646 (ResponseBytes_t561211756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
