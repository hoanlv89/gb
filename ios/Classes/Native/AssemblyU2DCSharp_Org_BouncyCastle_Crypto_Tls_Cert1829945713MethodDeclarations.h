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

// Org.BouncyCastle.Crypto.Tls.CertificateStatus
struct CertificateStatus_t1829945713;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Ocsp.OcspResponse
struct OcspResponse_t2399692236;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.CertificateStatus::.ctor(System.Byte,System.Object)
extern "C"  void CertificateStatus__ctor_m3424194227 (CertificateStatus_t1829945713 * __this, uint8_t ___statusType0, Il2CppObject * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.CertificateStatus::get_StatusType()
extern "C"  uint8_t CertificateStatus_get_StatusType_m4290653551 (CertificateStatus_t1829945713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Org.BouncyCastle.Crypto.Tls.CertificateStatus::get_Response()
extern "C"  Il2CppObject * CertificateStatus_get_Response_m4123427167 (CertificateStatus_t1829945713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Ocsp.OcspResponse Org.BouncyCastle.Crypto.Tls.CertificateStatus::GetOcspResponse()
extern "C"  OcspResponse_t2399692236 * CertificateStatus_GetOcspResponse_m1797798601 (CertificateStatus_t1829945713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CertificateStatus::Encode(System.IO.Stream)
extern "C"  void CertificateStatus_Encode_m870359917 (CertificateStatus_t1829945713 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateStatus Org.BouncyCastle.Crypto.Tls.CertificateStatus::Parse(System.IO.Stream)
extern "C"  CertificateStatus_t1829945713 * CertificateStatus_Parse_m1570980054 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.CertificateStatus::IsCorrectType(System.Byte,System.Object)
extern "C"  bool CertificateStatus_IsCorrectType_m2671070599 (Il2CppObject * __this /* static, unused */, uint8_t ___statusType0, Il2CppObject * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
