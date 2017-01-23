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

// BasePackage
struct BasePackage_t3541548393;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BasePackage::.ctor()
extern "C"  void BasePackage__ctor_m904316046 (BasePackage_t3541548393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::initWriter()
extern "C"  void BasePackage_initWriter_m3681199625 (BasePackage_t3541548393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BasePackage::getBytes()
extern "C"  ByteU5BU5D_t3397334013* BasePackage_getBytes_m2082622359 (BasePackage_t3541548393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::send()
extern "C"  void BasePackage_send_m4213083374 (BasePackage_t3541548393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::writeInt(System.Int32)
extern "C"  void BasePackage_writeInt_m3710166403 (BasePackage_t3541548393 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::writeString(System.String)
extern "C"  void BasePackage_writeString_m1775084218 (BasePackage_t3541548393 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::writeFloat(System.Single)
extern "C"  void BasePackage_writeFloat_m1841605300 (BasePackage_t3541548393 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
