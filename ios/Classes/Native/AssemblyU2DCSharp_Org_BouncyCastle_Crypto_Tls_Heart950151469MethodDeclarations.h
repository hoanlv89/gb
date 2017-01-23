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

// Org.BouncyCastle.Crypto.Tls.HeartbeatExtension
struct HeartbeatExtension_t950151469;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.HeartbeatExtension::.ctor(System.Byte)
extern "C"  void HeartbeatExtension__ctor_m3386641861 (HeartbeatExtension_t950151469 * __this, uint8_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.HeartbeatExtension::get_Mode()
extern "C"  uint8_t HeartbeatExtension_get_Mode_m379181334 (HeartbeatExtension_t950151469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.HeartbeatExtension::Encode(System.IO.Stream)
extern "C"  void HeartbeatExtension_Encode_m1420969429 (HeartbeatExtension_t950151469 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.HeartbeatExtension Org.BouncyCastle.Crypto.Tls.HeartbeatExtension::Parse(System.IO.Stream)
extern "C"  HeartbeatExtension_t950151469 * HeartbeatExtension_Parse_m3900663716 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
