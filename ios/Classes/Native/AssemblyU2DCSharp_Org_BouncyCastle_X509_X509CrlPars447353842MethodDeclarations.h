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

// Org.BouncyCastle.X509.X509CrlParser
struct X509CrlParser_t447353842;
// Org.BouncyCastle.X509.X509Crl
struct X509Crl_t2621233049;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.Asn1InputStream
struct Asn1InputStream_t2767940265;
// Org.BouncyCastle.Asn1.X509.CertificateList
struct CertificateList_t2288802675;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.ICollection
struct ICollection_t91669223;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1InputS2767940265.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Certi2288802675.h"

// System.Void Org.BouncyCastle.X509.X509CrlParser::.ctor()
extern "C"  void X509CrlParser__ctor_m1182824281 (X509CrlParser_t447353842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509CrlParser::.ctor(System.Boolean)
extern "C"  void X509CrlParser__ctor_m1537794814 (X509CrlParser_t447353842 * __this, bool ___lazyAsn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Crl Org.BouncyCastle.X509.X509CrlParser::ReadPemCrl(System.IO.Stream)
extern "C"  X509Crl_t2621233049 * X509CrlParser_ReadPemCrl_m1948082339 (X509CrlParser_t447353842 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Crl Org.BouncyCastle.X509.X509CrlParser::ReadDerCrl(Org.BouncyCastle.Asn1.Asn1InputStream)
extern "C"  X509Crl_t2621233049 * X509CrlParser_ReadDerCrl_m3064998761 (X509CrlParser_t447353842 * __this, Asn1InputStream_t2767940265 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Crl Org.BouncyCastle.X509.X509CrlParser::GetCrl()
extern "C"  X509Crl_t2621233049 * X509CrlParser_GetCrl_m1534902624 (X509CrlParser_t447353842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Crl Org.BouncyCastle.X509.X509CrlParser::CreateX509Crl(Org.BouncyCastle.Asn1.X509.CertificateList)
extern "C"  X509Crl_t2621233049 * X509CrlParser_CreateX509Crl_m4155452626 (X509CrlParser_t447353842 * __this, CertificateList_t2288802675 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Crl Org.BouncyCastle.X509.X509CrlParser::ReadCrl(System.Byte[])
extern "C"  X509Crl_t2621233049 * X509CrlParser_ReadCrl_m2888799607 (X509CrlParser_t447353842 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509CrlParser::ReadCrls(System.Byte[])
extern "C"  Il2CppObject * X509CrlParser_ReadCrls_m992239564 (X509CrlParser_t447353842 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.X509.X509Crl Org.BouncyCastle.X509.X509CrlParser::ReadCrl(System.IO.Stream)
extern "C"  X509Crl_t2621233049 * X509CrlParser_ReadCrl_m2736299179 (X509CrlParser_t447353842 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.X509.X509CrlParser::ReadCrls(System.IO.Stream)
extern "C"  Il2CppObject * X509CrlParser_ReadCrls_m343478742 (X509CrlParser_t447353842 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.X509.X509CrlParser::.cctor()
extern "C"  void X509CrlParser__cctor_m808145674 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
