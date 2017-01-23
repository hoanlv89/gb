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

// Org.BouncyCastle.Crypto.Tls.TlsFatalAlert
struct TlsFatalAlert_t2782940439;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsFatalAlert::.ctor(System.Byte)
extern "C"  void TlsFatalAlert__ctor_m3902126687 (TlsFatalAlert_t2782940439 * __this, uint8_t ___alertDescription0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsFatalAlert::.ctor(System.Byte,System.Exception)
extern "C"  void TlsFatalAlert__ctor_m1225307743 (TlsFatalAlert_t2782940439 * __this, uint8_t ___alertDescription0, Exception_t1927440687 * ___alertCause1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsFatalAlert::get_AlertDescription()
extern "C"  uint8_t TlsFatalAlert_get_AlertDescription_m1070596873 (TlsFatalAlert_t2782940439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
