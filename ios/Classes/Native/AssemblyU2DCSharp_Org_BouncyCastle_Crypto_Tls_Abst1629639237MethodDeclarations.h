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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer
struct AbstractTlsPeer_t1629639237;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer::.ctor()
extern "C"  void AbstractTlsPeer__ctor_m3999865932 (AbstractTlsPeer_t1629639237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer::ShouldUseGmtUnixTime()
extern "C"  bool AbstractTlsPeer_ShouldUseGmtUnixTime_m1453510703 (AbstractTlsPeer_t1629639237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer::NotifySecureRenegotiation(System.Boolean)
extern "C"  void AbstractTlsPeer_NotifySecureRenegotiation_m4168815583 (AbstractTlsPeer_t1629639237 * __this, bool ___secureRenegotiation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer::NotifyAlertRaised(System.Byte,System.Byte,System.String,System.Exception)
extern "C"  void AbstractTlsPeer_NotifyAlertRaised_m4279208075 (AbstractTlsPeer_t1629639237 * __this, uint8_t ___alertLevel0, uint8_t ___alertDescription1, String_t* ___message2, Exception_t1927440687 * ___cause3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer::NotifyAlertReceived(System.Byte,System.Byte)
extern "C"  void AbstractTlsPeer_NotifyAlertReceived_m1600702196 (AbstractTlsPeer_t1629639237 * __this, uint8_t ___alertLevel0, uint8_t ___alertDescription1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer::NotifyHandshakeComplete()
extern "C"  void AbstractTlsPeer_NotifyHandshakeComplete_m3629648785 (AbstractTlsPeer_t1629639237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
