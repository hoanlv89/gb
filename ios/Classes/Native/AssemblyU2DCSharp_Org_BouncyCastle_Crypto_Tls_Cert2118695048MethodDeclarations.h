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

// Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest
struct CertificateStatusRequest_t2118695048;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Crypto.Tls.OcspStatusRequest
struct OcspStatusRequest_t1991562814;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::.ctor(System.Byte,System.Object)
extern "C"  void CertificateStatusRequest__ctor_m3847040596 (CertificateStatusRequest_t2118695048 * __this, uint8_t ___statusType0, Il2CppObject * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::get_StatusType()
extern "C"  uint8_t CertificateStatusRequest_get_StatusType_m784530816 (CertificateStatusRequest_t2118695048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::get_Request()
extern "C"  Il2CppObject * CertificateStatusRequest_get_Request_m1635398788 (CertificateStatusRequest_t2118695048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.OcspStatusRequest Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::GetOcspStatusRequest()
extern "C"  OcspStatusRequest_t1991562814 * CertificateStatusRequest_GetOcspStatusRequest_m738592408 (CertificateStatusRequest_t2118695048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::Encode(System.IO.Stream)
extern "C"  void CertificateStatusRequest_Encode_m2812267242 (CertificateStatusRequest_t2118695048 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::Parse(System.IO.Stream)
extern "C"  CertificateStatusRequest_t2118695048 * CertificateStatusRequest_Parse_m215211390 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::IsCorrectType(System.Byte,System.Object)
extern "C"  bool CertificateStatusRequest_IsCorrectType_m20099244 (Il2CppObject * __this /* static, unused */, uint8_t ___statusType0, Il2CppObject * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
