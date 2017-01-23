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

// Org.BouncyCastle.Crypto.Tls.ServerDHParams
struct ServerDHParams_t3525792961;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct DHPublicKeyParameters_t1544976430;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1544976430.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.ServerDHParams::.ctor(Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters)
extern "C"  void ServerDHParams__ctor_m349945651 (ServerDHParams_t3525792961 * __this, DHPublicKeyParameters_t1544976430 * ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters Org.BouncyCastle.Crypto.Tls.ServerDHParams::get_PublicKey()
extern "C"  DHPublicKeyParameters_t1544976430 * ServerDHParams_get_PublicKey_m2681956835 (ServerDHParams_t3525792961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ServerDHParams::Encode(System.IO.Stream)
extern "C"  void ServerDHParams_Encode_m1078800461 (ServerDHParams_t3525792961 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ServerDHParams Org.BouncyCastle.Crypto.Tls.ServerDHParams::Parse(System.IO.Stream)
extern "C"  ServerDHParams_t3525792961 * ServerDHParams_Parse_m2667510804 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
