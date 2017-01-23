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

// Resource
struct Resource_t1323496244;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Resource::.ctor()
extern "C"  void Resource__ctor_m4086463117 (Resource_t1323496244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Resource Resource::get_instance()
extern "C"  Resource_t1323496244 * Resource_get_instance_m2906916606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Resource::Start()
extern "C"  void Resource_Start_m2710054805 (Resource_t1323496244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Resource::getCardSprite(System.Int32)
extern "C"  Sprite_t309593783 * Resource_getCardSprite_m1854553426 (Resource_t1323496244 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Resource::getCardChanSprite(System.Int32)
extern "C"  Sprite_t309593783 * Resource_getCardChanSprite_m2449606702 (Resource_t1323496244 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Resource::getCardBackSprite()
extern "C"  Sprite_t309593783 * Resource_getCardBackSprite_m1673086408 (Resource_t1323496244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Resource::getSpriteByPath(System.String)
extern "C"  Sprite_t309593783 * Resource_getSpriteByPath_m338123315 (Resource_t1323496244 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
