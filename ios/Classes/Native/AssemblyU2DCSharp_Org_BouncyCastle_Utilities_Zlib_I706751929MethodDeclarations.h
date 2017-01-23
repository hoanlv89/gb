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

// Org.BouncyCastle.Utilities.Zlib.InfBlocks
struct InfBlocks_t706751929;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;
// System.Object
struct Il2CppObject;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::.ctor(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Object,System.Int32)
extern "C"  void InfBlocks__ctor_m4254872193 (InfBlocks_t706751929 * __this, ZStream_t708755204 * ___z0, Il2CppObject * ___checkfn1, int32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::reset(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int64[])
extern "C"  void InfBlocks_reset_m2622743715 (InfBlocks_t706751929 * __this, ZStream_t708755204 * ___z0, Int64U5BU5D_t717125112* ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::proc(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t InfBlocks_proc_m3582784107 (InfBlocks_t706751929 * __this, ZStream_t708755204 * ___z0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::free(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  void InfBlocks_free_m1442746968 (InfBlocks_t706751929 * __this, ZStream_t708755204 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::set_dictionary(System.Byte[],System.Int32,System.Int32)
extern "C"  void InfBlocks_set_dictionary_m106962983 (InfBlocks_t706751929 * __this, ByteU5BU5D_t3397334013* ___d0, int32_t ___start1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::sync_point()
extern "C"  int32_t InfBlocks_sync_point_m3797795799 (InfBlocks_t706751929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::inflate_flush(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t InfBlocks_inflate_flush_m2906917835 (InfBlocks_t706751929 * __this, ZStream_t708755204 * ___z0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::.cctor()
extern "C"  void InfBlocks__cctor_m1789234100 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
