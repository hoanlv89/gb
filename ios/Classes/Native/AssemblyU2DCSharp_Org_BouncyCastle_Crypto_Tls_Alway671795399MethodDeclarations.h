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

// Org.BouncyCastle.Crypto.Tls.AlwaysValidVerifyer
struct AlwaysValidVerifyer_t671795399;
// System.Uri
struct Uri_t19570940;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure[]
struct X509CertificateStructureU5BU5D_t3012599515;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AlwaysValidVerifyer::.ctor()
extern "C"  void AlwaysValidVerifyer__ctor_m2264658056 (AlwaysValidVerifyer_t671795399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AlwaysValidVerifyer::IsValid(System.Uri,Org.BouncyCastle.Asn1.X509.X509CertificateStructure[])
extern "C"  bool AlwaysValidVerifyer_IsValid_m256908138 (AlwaysValidVerifyer_t671795399 * __this, Uri_t19570940 * ___targetUri0, X509CertificateStructureU5BU5D_t3012599515* ___certs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
