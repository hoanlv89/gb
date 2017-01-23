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

// GK_PlayerSignatureResult
struct GK_PlayerSignatureResult_t13769479;
// ISN_Error
struct ISN_Error_t553253557;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error553253557.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GK_PlayerSignatureResult::.ctor(ISN_Error)
extern "C"  void GK_PlayerSignatureResult__ctor_m2663773193 (GK_PlayerSignatureResult_t13769479 * __this, ISN_Error_t553253557 * ___er0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_PlayerSignatureResult::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void GK_PlayerSignatureResult__ctor_m183833886 (GK_PlayerSignatureResult_t13769479 * __this, String_t* ___publicKeyUrl0, String_t* ___signature1, String_t* ___salt2, String_t* ___timestamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_PlayerSignatureResult::get_PublicKeyUrl()
extern "C"  String_t* GK_PlayerSignatureResult_get_PublicKeyUrl_m2573459139 (GK_PlayerSignatureResult_t13769479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GK_PlayerSignatureResult::get_Signature()
extern "C"  ByteU5BU5D_t3397334013* GK_PlayerSignatureResult_get_Signature_m3581959227 (GK_PlayerSignatureResult_t13769479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GK_PlayerSignatureResult::get_Salt()
extern "C"  ByteU5BU5D_t3397334013* GK_PlayerSignatureResult_get_Salt_m580930533 (GK_PlayerSignatureResult_t13769479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GK_PlayerSignatureResult::get_Timestamp()
extern "C"  int64_t GK_PlayerSignatureResult_get_Timestamp_m2017165378 (GK_PlayerSignatureResult_t13769479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
