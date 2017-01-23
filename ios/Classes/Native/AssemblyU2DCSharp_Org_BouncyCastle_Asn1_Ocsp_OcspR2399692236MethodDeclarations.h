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

// Org.BouncyCastle.Asn1.Ocsp.OcspResponse
struct OcspResponse_t2399692236;
// Org.BouncyCastle.Asn1.Ocsp.OcspResponseStatus
struct OcspResponseStatus_t2886715370;
// Org.BouncyCastle.Asn1.Ocsp.ResponseBytes
struct ResponseBytes_t561211756;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Ocsp_OcspR2886715370.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Ocsp_Respon561211756.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.Ocsp.OcspResponse::.ctor(Org.BouncyCastle.Asn1.Ocsp.OcspResponseStatus,Org.BouncyCastle.Asn1.Ocsp.ResponseBytes)
extern "C"  void OcspResponse__ctor_m97373357 (OcspResponse_t2399692236 * __this, OcspResponseStatus_t2886715370 * ___responseStatus0, ResponseBytes_t561211756 * ___responseBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Ocsp.OcspResponse::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void OcspResponse__ctor_m590299352 (OcspResponse_t2399692236 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.OcspResponse Org.BouncyCastle.Asn1.Ocsp.OcspResponse::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  OcspResponse_t2399692236 * OcspResponse_GetInstance_m4238553177 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.OcspResponse Org.BouncyCastle.Asn1.Ocsp.OcspResponse::GetInstance(System.Object)
extern "C"  OcspResponse_t2399692236 * OcspResponse_GetInstance_m312080653 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.OcspResponseStatus Org.BouncyCastle.Asn1.Ocsp.OcspResponse::get_ResponseStatus()
extern "C"  OcspResponseStatus_t2886715370 * OcspResponse_get_ResponseStatus_m1375331318 (OcspResponse_t2399692236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.ResponseBytes Org.BouncyCastle.Asn1.Ocsp.OcspResponse::get_ResponseBytes()
extern "C"  ResponseBytes_t561211756 * OcspResponse_get_ResponseBytes_m163381737 (OcspResponse_t2399692236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Ocsp.OcspResponse::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * OcspResponse_ToAsn1Object_m4047927978 (OcspResponse_t2399692236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
