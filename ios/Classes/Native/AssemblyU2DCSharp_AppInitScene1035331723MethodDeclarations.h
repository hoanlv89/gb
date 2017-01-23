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

// AppInitScene
struct AppInitScene_t1035331723;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AppInitScene::.ctor()
extern "C"  void AppInitScene__ctor_m4219210066 (AppInitScene_t1035331723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppInitScene::Start()
extern "C"  void AppInitScene_Start_m1745970166 (AppInitScene_t1035331723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppInitScene::HandleNotification(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void AppInitScene_HandleNotification_m2306657315 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Dictionary_2_t309261261 * ___additionalData1, bool ___isActive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppInitScene::IdsAvailable(System.String,System.String)
extern "C"  void AppInitScene_IdsAvailable_m3243563553 (AppInitScene_t1035331723 * __this, String_t* ___userID0, String_t* ___pushToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
