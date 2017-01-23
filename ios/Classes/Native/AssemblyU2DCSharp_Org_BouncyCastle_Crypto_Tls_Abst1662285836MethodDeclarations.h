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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsContext
struct AbstractTlsContext_t1662285836;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// Org.BouncyCastle.Crypto.Tls.SecurityParameters
struct SecurityParameters_t3985528004;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t860704147;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t3273908466;
// Org.BouncyCastle.Crypto.Tls.TlsSession
struct TlsSession_t3695793821;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Secu3985528004.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Prot3273908466.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::.ctor(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Tls.SecurityParameters)
extern "C"  void AbstractTlsContext__ctor_m4006471213 (AbstractTlsContext_t1662285836 * __this, SecureRandom_t3117234712 * ___secureRandom0, SecurityParameters_t3985528004 * ___securityParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::NextCounterValue()
extern "C"  int64_t AbstractTlsContext_NextCounterValue_m1160173660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_NonceRandomGenerator()
extern "C"  Il2CppObject * AbstractTlsContext_get_NonceRandomGenerator_m2038839369 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_SecureRandom()
extern "C"  SecureRandom_t3117234712 * AbstractTlsContext_get_SecureRandom_m1529659301 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SecurityParameters Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_SecurityParameters()
extern "C"  SecurityParameters_t3985528004 * AbstractTlsContext_get_SecurityParameters_m2562758297 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_ClientVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsContext_get_ClientVersion_m3987857532 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::SetClientVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  void AbstractTlsContext_SetClientVersion_m1681100634 (AbstractTlsContext_t1662285836 * __this, ProtocolVersion_t3273908466 * ___clientVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_ServerVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsContext_get_ServerVersion_m2659997192 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::SetServerVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  void AbstractTlsContext_SetServerVersion_m3450966238 (AbstractTlsContext_t1662285836 * __this, ProtocolVersion_t3273908466 * ___serverVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsSession Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_ResumableSession()
extern "C"  Il2CppObject * AbstractTlsContext_get_ResumableSession_m3644879746 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::SetResumableSession(Org.BouncyCastle.Crypto.Tls.TlsSession)
extern "C"  void AbstractTlsContext_SetResumableSession_m3812095180 (AbstractTlsContext_t1662285836 * __this, Il2CppObject * ___session0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::get_UserObject()
extern "C"  Il2CppObject * AbstractTlsContext_get_UserObject_m2253779745 (AbstractTlsContext_t1662285836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::set_UserObject(System.Object)
extern "C"  void AbstractTlsContext_set_UserObject_m2146444074 (AbstractTlsContext_t1662285836 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::ExportKeyingMaterial(System.String,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* AbstractTlsContext_ExportKeyingMaterial_m3986586229 (AbstractTlsContext_t1662285836 * __this, String_t* ___asciiLabel0, ByteU5BU5D_t3397334013* ___context_value1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::.cctor()
extern "C"  void AbstractTlsContext__cctor_m591527842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
