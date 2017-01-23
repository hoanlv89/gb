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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory
struct AbstractTlsCipherFactory_t3831412532;
// Org.BouncyCastle.Crypto.Tls.TlsCipher
struct TlsCipher_t927308168;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory::.ctor()
extern "C"  void AbstractTlsCipherFactory__ctor_m383233747 (AbstractTlsCipherFactory_t3831412532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCipher Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory::CreateCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  Il2CppObject * AbstractTlsCipherFactory_CreateCipher_m2212162763 (AbstractTlsCipherFactory_t3831412532 * __this, Il2CppObject * ___context0, int32_t ___encryptionAlgorithm1, int32_t ___macAlgorithm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
