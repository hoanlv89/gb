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

// GK_UserPhotoLoadResult
struct GK_UserPhotoLoadResult_t1614198031;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_PhotoSize3124681388.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GK_UserPhotoLoadResult::.ctor(GK_PhotoSize,UnityEngine.Texture2D)
extern "C"  void GK_UserPhotoLoadResult__ctor_m1940012940 (GK_UserPhotoLoadResult_t1614198031 * __this, int32_t ___size0, Texture2D_t3542995729 * ___photo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_UserPhotoLoadResult::.ctor(GK_PhotoSize,System.String)
extern "C"  void GK_UserPhotoLoadResult__ctor_m585106284 (GK_UserPhotoLoadResult_t1614198031 * __this, int32_t ___size0, String_t* ___errorData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_UserPhotoLoadResult::get_Photo()
extern "C"  Texture2D_t3542995729 * GK_UserPhotoLoadResult_get_Photo_m1992334628 (GK_UserPhotoLoadResult_t1614198031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_PhotoSize GK_UserPhotoLoadResult::get_Size()
extern "C"  int32_t GK_UserPhotoLoadResult_get_Size_m985672619 (GK_UserPhotoLoadResult_t1614198031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
