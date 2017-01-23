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

// Org.BouncyCastle.Crypto.Tls.TlsSessionImpl
struct TlsSessionImpl_t4078687945;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.SessionParameters
struct SessionParameters_t833892266;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sessi833892266.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsSessionImpl::.ctor(System.Byte[],Org.BouncyCastle.Crypto.Tls.SessionParameters)
extern "C"  void TlsSessionImpl__ctor_m1538753141 (TlsSessionImpl_t4078687945 * __this, ByteU5BU5D_t3397334013* ___sessionID0, SessionParameters_t833892266 * ___sessionParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters Org.BouncyCastle.Crypto.Tls.TlsSessionImpl::ExportSessionParameters()
extern "C"  SessionParameters_t833892266 * TlsSessionImpl_ExportSessionParameters_m2770258741 (TlsSessionImpl_t4078687945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsSessionImpl::get_SessionID()
extern "C"  ByteU5BU5D_t3397334013* TlsSessionImpl_get_SessionID_m3274863092 (TlsSessionImpl_t4078687945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsSessionImpl::Invalidate()
extern "C"  void TlsSessionImpl_Invalidate_m240732537 (TlsSessionImpl_t4078687945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsSessionImpl::get_IsResumable()
extern "C"  bool TlsSessionImpl_get_IsResumable_m1059828089 (TlsSessionImpl_t4078687945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
