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

// Styx.StyxSerializer
struct StyxSerializer_t309677892;
// Styx.ObjectFactory
struct ObjectFactory_t3482583989;
// Styx.ProtocolObject
struct ProtocolObject_t3155305727;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Styx.StyxSerializer::.ctor(Styx.ObjectFactory)
extern "C"  void StyxSerializer__ctor_m749301954 (StyxSerializer_t309677892 * __this, Il2CppObject * ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Styx.ProtocolObject Styx.StyxSerializer::unpack(System.Byte[])
extern "C"  Il2CppObject * StyxSerializer_unpack_m2047013308 (StyxSerializer_t309677892 * __this, ByteU5BU5D_t3397334013* ___inBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Styx.StyxSerializer::pack(Styx.ProtocolObject)
extern "C"  ByteU5BU5D_t3397334013* StyxSerializer_pack_m3649185905 (StyxSerializer_t309677892 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Styx.StyxSerializer::packObject(Styx.ProtocolObject)
extern "C"  ByteU5BU5D_t3397334013* StyxSerializer_packObject_m2381878632 (StyxSerializer_t309677892 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.StyxSerializer::.cctor()
extern "C"  void StyxSerializer__cctor_m101953702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
