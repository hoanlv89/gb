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

// Org.BouncyCastle.Utilities.Zlib.InfCodes
struct InfCodes_t2579876053;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;
// Org.BouncyCastle.Utilities.Zlib.InfBlocks
struct InfBlocks_t706751929;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_I706751929.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::.ctor()
extern "C"  void InfCodes__ctor_m3509726269 (InfCodes_t2579876053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  void InfCodes_init_m662658722 (InfCodes_t2579876053 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t3030399641* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t3030399641* ___td4, int32_t ___td_index5, ZStream_t708755204 * ___z6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::proc(Org.BouncyCastle.Utilities.Zlib.InfBlocks,Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t InfCodes_proc_m3586846897 (InfCodes_t2579876053 * __this, InfBlocks_t706751929 * ___s0, ZStream_t708755204 * ___z1, int32_t ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::free(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  void InfCodes_free_m1847850236 (InfCodes_t2579876053 * __this, ZStream_t708755204 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Org.BouncyCastle.Utilities.Zlib.InfBlocks,Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t InfCodes_inflate_fast_m545548134 (InfCodes_t2579876053 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t3030399641* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t3030399641* ___td4, int32_t ___td_index5, InfBlocks_t706751929 * ___s6, ZStream_t708755204 * ___z7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::.cctor()
extern "C"  void InfCodes__cctor_m956744384 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
