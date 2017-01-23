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

// BestHTTP.Caching.HTTPCacheFileLock
struct HTTPCacheFileLock_t673754655;
// System.Object
struct Il2CppObject;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"

// System.Void BestHTTP.Caching.HTTPCacheFileLock::.ctor()
extern "C"  void HTTPCacheFileLock__ctor_m679551307 (HTTPCacheFileLock_t673754655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.Caching.HTTPCacheFileLock::Acquire(System.Uri)
extern "C"  Il2CppObject * HTTPCacheFileLock_Acquire_m1268355919 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileLock::Remove(System.Uri)
extern "C"  void HTTPCacheFileLock_Remove_m2349050880 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileLock::Clear()
extern "C"  void HTTPCacheFileLock_Clear_m20185650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileLock::.cctor()
extern "C"  void HTTPCacheFileLock__cctor_m2080769166 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
