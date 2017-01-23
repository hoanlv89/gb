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

// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct CertificateRequest_t4188827490;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IList
struct IList_t3321498491;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.CertificateRequest::.ctor(System.Byte[],System.Collections.IList,System.Collections.IList)
extern "C"  void CertificateRequest__ctor_m488620782 (CertificateRequest_t4188827490 * __this, ByteU5BU5D_t3397334013* ___certificateTypes0, Il2CppObject * ___supportedSignatureAlgorithms1, Il2CppObject * ___certificateAuthorities2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.CertificateRequest::get_CertificateTypes()
extern "C"  ByteU5BU5D_t3397334013* CertificateRequest_get_CertificateTypes_m383519496 (CertificateRequest_t4188827490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.CertificateRequest::get_SupportedSignatureAlgorithms()
extern "C"  Il2CppObject * CertificateRequest_get_SupportedSignatureAlgorithms_m2398987172 (CertificateRequest_t4188827490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.CertificateRequest::get_CertificateAuthorities()
extern "C"  Il2CppObject * CertificateRequest_get_CertificateAuthorities_m4217584338 (CertificateRequest_t4188827490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.CertificateRequest::Encode(System.IO.Stream)
extern "C"  void CertificateRequest_Encode_m2926950588 (CertificateRequest_t4188827490 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest Org.BouncyCastle.Crypto.Tls.CertificateRequest::Parse(Org.BouncyCastle.Crypto.Tls.TlsContext,System.IO.Stream)
extern "C"  CertificateRequest_t4188827490 * CertificateRequest_Parse_m476579612 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
