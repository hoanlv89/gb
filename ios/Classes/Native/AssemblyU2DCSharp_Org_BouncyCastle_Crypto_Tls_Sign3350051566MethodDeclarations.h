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

// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
struct SignatureAndHashAlgorithm_t3350051566;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::.ctor(System.Byte,System.Byte)
extern "C"  void SignatureAndHashAlgorithm__ctor_m737760971 (SignatureAndHashAlgorithm_t3350051566 * __this, uint8_t ___hash0, uint8_t ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::get_Hash()
extern "C"  uint8_t SignatureAndHashAlgorithm_get_Hash_m1172485340 (SignatureAndHashAlgorithm_t3350051566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::get_Signature()
extern "C"  uint8_t SignatureAndHashAlgorithm_get_Signature_m2576320500 (SignatureAndHashAlgorithm_t3350051566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::Equals(System.Object)
extern "C"  bool SignatureAndHashAlgorithm_Equals_m2494803034 (SignatureAndHashAlgorithm_t3350051566 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::GetHashCode()
extern "C"  int32_t SignatureAndHashAlgorithm_GetHashCode_m1944862802 (SignatureAndHashAlgorithm_t3350051566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::Encode(System.IO.Stream)
extern "C"  void SignatureAndHashAlgorithm_Encode_m1748747776 (SignatureAndHashAlgorithm_t3350051566 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm::Parse(System.IO.Stream)
extern "C"  SignatureAndHashAlgorithm_t3350051566 * SignatureAndHashAlgorithm_Parse_m2153716982 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
