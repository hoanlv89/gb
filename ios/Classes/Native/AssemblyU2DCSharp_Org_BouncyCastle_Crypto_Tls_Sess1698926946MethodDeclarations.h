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

// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder
struct Builder_t1698926946;
// Org.BouncyCastle.Crypto.Tls.SessionParameters
struct SessionParameters_t833892266;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::.ctor()
extern "C"  void Builder__ctor_m2449292403 (Builder_t1698926946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::Build()
extern "C"  SessionParameters_t833892266 * Builder_Build_m208926582 (Builder_t1698926946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetCipherSuite(System.Int32)
extern "C"  Builder_t1698926946 * Builder_SetCipherSuite_m892448044 (Builder_t1698926946 * __this, int32_t ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetCompressionAlgorithm(System.Byte)
extern "C"  Builder_t1698926946 * Builder_SetCompressionAlgorithm_m1399967700 (Builder_t1698926946 * __this, uint8_t ___compressionAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetMasterSecret(System.Byte[])
extern "C"  Builder_t1698926946 * Builder_SetMasterSecret_m2677183719 (Builder_t1698926946 * __this, ByteU5BU5D_t3397334013* ___masterSecret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetPeerCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  Builder_t1698926946 * Builder_SetPeerCertificate_m3355596596 (Builder_t1698926946 * __this, Certificate_t2775016569 * ___peerCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetPskIdentity(System.Byte[])
extern "C"  Builder_t1698926946 * Builder_SetPskIdentity_m89826863 (Builder_t1698926946 * __this, ByteU5BU5D_t3397334013* ___pskIdentity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetSrpIdentity(System.Byte[])
extern "C"  Builder_t1698926946 * Builder_SetSrpIdentity_m293396684 (Builder_t1698926946 * __this, ByteU5BU5D_t3397334013* ___srpIdentity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::SetServerExtensions(System.Collections.IDictionary)
extern "C"  Builder_t1698926946 * Builder_SetServerExtensions_m714111874 (Builder_t1698926946 * __this, Il2CppObject * ___serverExtensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.SessionParameters/Builder::Validate(System.Boolean,System.String)
extern "C"  void Builder_Validate_m1444353622 (Builder_t1698926946 * __this, bool ___condition0, String_t* ___parameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
