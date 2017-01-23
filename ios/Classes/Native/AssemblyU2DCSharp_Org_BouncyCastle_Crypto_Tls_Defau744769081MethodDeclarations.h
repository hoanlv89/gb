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

// Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory
struct DefaultTlsCipherFactory_t744769081;
// Org.BouncyCastle.Crypto.Tls.TlsCipher
struct TlsCipher_t927308168;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.TlsBlockCipher
struct TlsBlockCipher_t317591639;
// Org.BouncyCastle.Crypto.Tls.TlsAeadCipher
struct TlsAeadCipher_t2267292935;
// Org.BouncyCastle.Crypto.Tls.TlsNullCipher
struct TlsNullCipher_t95059113;
// Org.BouncyCastle.Crypto.Tls.TlsStreamCipher
struct TlsStreamCipher_t2175288028;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
struct IAeadBlockCipher_t2629578910;
// Org.BouncyCastle.Crypto.IStreamCipher
struct IStreamCipher_t1073853310;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::.ctor()
extern "C"  void DefaultTlsCipherFactory__ctor_m278520794 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateCipher_m4247582740 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___encryptionAlgorithm1, int32_t ___macAlgorithm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateAESCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  TlsBlockCipher_t317591639 * DefaultTlsCipherFactory_CreateAESCipher_m3969090368 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___cipherKeySize1, int32_t ___macAlgorithm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCamelliaCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  TlsBlockCipher_t317591639 * DefaultTlsCipherFactory_CreateCamelliaCipher_m4028170443 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___cipherKeySize1, int32_t ___macAlgorithm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateChaCha20Poly1305(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateChaCha20Poly1305_m553920966 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsAeadCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCipher_Aes_Ccm(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  TlsAeadCipher_t2267292935 * DefaultTlsCipherFactory_CreateCipher_Aes_Ccm_m1690768375 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___cipherKeySize1, int32_t ___macSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsAeadCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCipher_Aes_Gcm(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  TlsAeadCipher_t2267292935 * DefaultTlsCipherFactory_CreateCipher_Aes_Gcm_m716539387 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___cipherKeySize1, int32_t ___macSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsAeadCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCipher_Camellia_Gcm(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  TlsAeadCipher_t2267292935 * DefaultTlsCipherFactory_CreateCipher_Camellia_Gcm_m536173916 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___cipherKeySize1, int32_t ___macSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateDesEdeCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32)
extern "C"  TlsBlockCipher_t317591639 * DefaultTlsCipherFactory_CreateDesEdeCipher_m527758110 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___macAlgorithm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsNullCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateNullCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32)
extern "C"  TlsNullCipher_t95059113 * DefaultTlsCipherFactory_CreateNullCipher_m3870460573 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___macAlgorithm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsStreamCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateRC4Cipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32)
extern "C"  TlsStreamCipher_t2175288028 * DefaultTlsCipherFactory_CreateRC4Cipher_m1514200877 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___cipherKeySize1, int32_t ___macAlgorithm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsStreamCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateSalsa20Cipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32,System.Int32,System.Int32)
extern "C"  TlsStreamCipher_t2175288028 * DefaultTlsCipherFactory_CreateSalsa20Cipher_m725412499 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___rounds1, int32_t ___cipherKeySize2, int32_t ___macAlgorithm3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateSeedCipher(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32)
extern "C"  TlsBlockCipher_t317591639 * DefaultTlsCipherFactory_CreateSeedCipher_m566723599 (DefaultTlsCipherFactory_t744769081 * __this, Il2CppObject * ___context0, int32_t ___macAlgorithm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateAesEngine()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateAesEngine_m1357386436 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCamelliaEngine()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateCamelliaEngine_m4013758377 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateAesBlockCipher()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateAesBlockCipher_m3300365330 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Ccm()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateAeadBlockCipher_Aes_Ccm_m2413057869 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Gcm()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateAeadBlockCipher_Aes_Gcm_m2413061961 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateAeadBlockCipher_Camellia_Gcm()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateAeadBlockCipher_Camellia_Gcm_m51153812 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateCamelliaBlockCipher()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateCamelliaBlockCipher_m3275687651 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateDesEdeBlockCipher()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateDesEdeBlockCipher_m3001272975 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IStreamCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateRC4StreamCipher()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateRC4StreamCipher_m47285602 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IStreamCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateSalsa20StreamCipher(System.Int32)
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateSalsa20StreamCipher_m2528001008 (DefaultTlsCipherFactory_t744769081 * __this, int32_t ___rounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateSeedBlockCipher()
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateSeedBlockCipher_m4248313768 (DefaultTlsCipherFactory_t744769081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory::CreateHMacDigest(System.Int32)
extern "C"  Il2CppObject * DefaultTlsCipherFactory_CreateHMacDigest_m1364433543 (DefaultTlsCipherFactory_t744769081 * __this, int32_t ___macAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
