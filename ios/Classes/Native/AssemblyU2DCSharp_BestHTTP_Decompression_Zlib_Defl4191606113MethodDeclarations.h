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

// BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t4191606113;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Bloc2541392848.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Flus1182037460.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void CompressFunc__ctor_m4278138340 (CompressFunc_t4191606113 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.BlockState BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc::Invoke(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t CompressFunc_Invoke_m31994449 (CompressFunc_t4191606113 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc::BeginInvoke(BestHTTP.Decompression.Zlib.FlushType,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompressFunc_BeginInvoke_m616291727 (CompressFunc_t4191606113 * __this, int32_t ___flush0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.BlockState BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompressFunc_EndInvoke_m2096852027 (CompressFunc_t4191606113 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
