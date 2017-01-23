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

// Org.BouncyCastle.Crypto.Tls.OcspStatusRequest
struct OcspStatusRequest_t1991562814;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Asn1.X509.X509Extensions
struct X509Extensions_t1384530060;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509E1384530060.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.OcspStatusRequest::.ctor(System.Collections.IList,Org.BouncyCastle.Asn1.X509.X509Extensions)
extern "C"  void OcspStatusRequest__ctor_m1593118329 (OcspStatusRequest_t1991562814 * __this, Il2CppObject * ___responderIDList0, X509Extensions_t1384530060 * ___requestExtensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.OcspStatusRequest::get_ResponderIDList()
extern "C"  Il2CppObject * OcspStatusRequest_get_ResponderIDList_m2740593579 (OcspStatusRequest_t1991562814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.X509Extensions Org.BouncyCastle.Crypto.Tls.OcspStatusRequest::get_RequestExtensions()
extern "C"  X509Extensions_t1384530060 * OcspStatusRequest_get_RequestExtensions_m1148656107 (OcspStatusRequest_t1991562814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.OcspStatusRequest::Encode(System.IO.Stream)
extern "C"  void OcspStatusRequest_Encode_m1864690896 (OcspStatusRequest_t1991562814 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.OcspStatusRequest Org.BouncyCastle.Crypto.Tls.OcspStatusRequest::Parse(System.IO.Stream)
extern "C"  OcspStatusRequest_t1991562814 * OcspStatusRequest_Parse_m3048682742 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
