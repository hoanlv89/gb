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

// Org.BouncyCastle.Crypto.Tls.DigitallySigned
struct DigitallySigned_t2312486481;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
struct SignatureAndHashAlgorithm_t3350051566;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sign3350051566.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.DigitallySigned::.ctor(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,System.Byte[])
extern "C"  void DigitallySigned__ctor_m2335765779 (DigitallySigned_t2312486481 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, ByteU5BU5D_t3397334013* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm Org.BouncyCastle.Crypto.Tls.DigitallySigned::get_Algorithm()
extern "C"  SignatureAndHashAlgorithm_t3350051566 * DigitallySigned_get_Algorithm_m3508002145 (DigitallySigned_t2312486481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.DigitallySigned::get_Signature()
extern "C"  ByteU5BU5D_t3397334013* DigitallySigned_get_Signature_m2464924925 (DigitallySigned_t2312486481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DigitallySigned::Encode(System.IO.Stream)
extern "C"  void DigitallySigned_Encode_m2340529121 (DigitallySigned_t2312486481 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.DigitallySigned Org.BouncyCastle.Crypto.Tls.DigitallySigned::Parse(Org.BouncyCastle.Crypto.Tls.TlsContext,System.IO.Stream)
extern "C"  DigitallySigned_t2312486481 * DigitallySigned_Parse_m3042880536 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, Stream_t3255436806 * ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
