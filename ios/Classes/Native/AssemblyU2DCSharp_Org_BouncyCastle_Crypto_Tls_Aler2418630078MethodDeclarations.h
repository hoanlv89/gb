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

// Org.BouncyCastle.Crypto.Tls.AlertLevel
struct AlertLevel_t2418630078;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AlertLevel::.ctor()
extern "C"  void AlertLevel__ctor_m2106836317 (AlertLevel_t2418630078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.AlertLevel::GetName(System.Byte)
extern "C"  String_t* AlertLevel_GetName_m2760385660 (Il2CppObject * __this /* static, unused */, uint8_t ___alertDescription0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.AlertLevel::GetText(System.Byte)
extern "C"  String_t* AlertLevel_GetText_m148653848 (Il2CppObject * __this /* static, unused */, uint8_t ___alertDescription0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
