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

// Org.BouncyCastle.X509.X509CertificateParser
struct X509CertificateParser_t3646547314;
// Org.BouncyCastle.X509.X509Certificate
struct X509Certificate_t2250736941;
// Org.BouncyCastle.Asn1.Asn1InputStream
struct Asn1InputStream_t2767940265;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure
struct X509CertificateStructure_t3705285294;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.ICollection
struct ICollection_t91669223;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1InputS2767940265.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509C3705285294.h"

// System.Void Org.BouncyCastle.X509.X509CertificateParser::.ctor()
extern "C"  void X509CertificateParser__ctor_m4249806405 (X509CertificateParser_t3646547314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Certificate Org.BouncyCastle.X509.X509CertificateParser::ReadDerCertificate(Org.BouncyCastle.Asn1.Asn1InputStream)
extern "C"  X509Certificate_t2250736941 * X509CertificateParser_ReadDerCertificate_m2034129157 (X509CertificateParser_t3646547314 * __this, Asn1InputStream_t2767940265 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Certificate Org.BouncyCastle.X509.X509CertificateParser::GetCertificate()
extern "C"  X509Certificate_t2250736941 * X509CertificateParser_GetCertificate_m878576900 (X509CertificateParser_t3646547314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Certificate Org.BouncyCastle.X509.X509CertificateParser::ReadPemCertificate(System.IO.Stream)
extern "C"  X509Certificate_t2250736941 * X509CertificateParser_ReadPemCertificate_m2673148467 (X509CertificateParser_t3646547314 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Certificate Org.BouncyCastle.X509.X509CertificateParser::CreateX509Certificate(Org.BouncyCastle.Asn1.X509.X509CertificateStructure)
extern "C"  X509Certificate_t2250736941 * X509CertificateParser_CreateX509Certificate_m2037037413 (X509CertificateParser_t3646547314 * __this, X509CertificateStructure_t3705285294 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Certificate Org.BouncyCastle.X509.X509CertificateParser::ReadCertificate(System.Byte[])
extern "C"  X509Certificate_t2250736941 * X509CertificateParser_ReadCertificate_m2032879671 (X509CertificateParser_t3646547314 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509CertificateParser::ReadCertificates(System.Byte[])
extern "C"  Il2CppObject * X509CertificateParser_ReadCertificates_m1572962620 (X509CertificateParser_t3646547314 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Certificate Org.BouncyCastle.X509.X509CertificateParser::ReadCertificate(System.IO.Stream)
extern "C"  X509Certificate_t2250736941 * X509CertificateParser_ReadCertificate_m1889586139 (X509CertificateParser_t3646547314 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509CertificateParser::ReadCertificates(System.IO.Stream)
extern "C"  Il2CppObject * X509CertificateParser_ReadCertificates_m1705027702 (X509CertificateParser_t3646547314 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509CertificateParser::.cctor()
extern "C"  void X509CertificateParser__cctor_m3403385946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
