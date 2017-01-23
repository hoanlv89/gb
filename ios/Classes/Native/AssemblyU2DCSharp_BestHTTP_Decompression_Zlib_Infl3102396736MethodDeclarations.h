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

// BestHTTP.Decompression.Zlib.InflateManager
struct InflateManager_t3102396736;
// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Zlib1899545627.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Flus1182037460.h"

// System.Void BestHTTP.Decompression.Zlib.InflateManager::.ctor()
extern "C"  void InflateManager__ctor_m223536305 (InflateManager_t3102396736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateManager::.ctor(System.Boolean)
extern "C"  void InflateManager__ctor_m536104440 (InflateManager_t3102396736 * __this, bool ___expectRfc1950HeaderBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
extern "C"  bool InflateManager_get_HandleRfc1950HeaderBytes_m2704977814 (InflateManager_t3102396736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateManager::set_HandleRfc1950HeaderBytes(System.Boolean)
extern "C"  void InflateManager_set_HandleRfc1950HeaderBytes_m3910191389 (InflateManager_t3102396736 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::Reset()
extern "C"  int32_t InflateManager_Reset_m2508962600 (InflateManager_t3102396736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::End()
extern "C"  int32_t InflateManager_End_m1636891322 (InflateManager_t3102396736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::Initialize(BestHTTP.Decompression.Zlib.ZlibCodec,System.Int32)
extern "C"  int32_t InflateManager_Initialize_m3716498037 (InflateManager_t3102396736 * __this, ZlibCodec_t1899545627 * ___codec0, int32_t ___w1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::Inflate(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t InflateManager_Inflate_m1317771480 (InflateManager_t3102396736 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::SetDictionary(System.Byte[])
extern "C"  int32_t InflateManager_SetDictionary_m3136078706 (InflateManager_t3102396736 * __this, ByteU5BU5D_t3397334013* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::Sync()
extern "C"  int32_t InflateManager_Sync_m805663764 (InflateManager_t3102396736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.InflateManager::SyncPoint(BestHTTP.Decompression.Zlib.ZlibCodec)
extern "C"  int32_t InflateManager_SyncPoint_m3845649715 (InflateManager_t3102396736 * __this, ZlibCodec_t1899545627 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.InflateManager::.cctor()
extern "C"  void InflateManager__cctor_m4174399860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
