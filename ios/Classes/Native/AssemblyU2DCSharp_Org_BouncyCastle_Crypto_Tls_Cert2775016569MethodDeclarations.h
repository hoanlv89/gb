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

// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure[]
struct X509CertificateStructureU5BU5D_t3012599515;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure
struct X509CertificateStructure_t3705285294;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.Certificate::.ctor(Org.BouncyCastle.Asn1.X509.X509CertificateStructure[])
extern "C"  void Certificate__ctor_m688797285 (Certificate_t2775016569 * __this, X509CertificateStructureU5BU5D_t3012599515* ___certificateList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure[] Org.BouncyCastle.Crypto.Tls.Certificate::GetCertificateList()
extern "C"  X509CertificateStructureU5BU5D_t3012599515* Certificate_GetCertificateList_m2114251171 (Certificate_t2775016569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure Org.BouncyCastle.Crypto.Tls.Certificate::GetCertificateAt(System.Int32)
extern "C"  X509CertificateStructure_t3705285294 * Certificate_GetCertificateAt_m3773523267 (Certificate_t2775016569 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.Certificate::get_Length()
extern "C"  int32_t Certificate_get_Length_m157406651 (Certificate_t2775016569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.Certificate::get_IsEmpty()
extern "C"  bool Certificate_get_IsEmpty_m666821992 (Certificate_t2775016569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Certificate::Encode(System.IO.Stream)
extern "C"  void Certificate_Encode_m2672616921 (Certificate_t2775016569 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.Certificate Org.BouncyCastle.Crypto.Tls.Certificate::Parse(System.IO.Stream)
extern "C"  Certificate_t2775016569 * Certificate_Parse_m1796971638 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure[] Org.BouncyCastle.Crypto.Tls.Certificate::CloneCertificateList()
extern "C"  X509CertificateStructureU5BU5D_t3012599515* Certificate_CloneCertificateList_m1539654574 (Certificate_t2775016569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Certificate::.cctor()
extern "C"  void Certificate__cctor_m2701766591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
