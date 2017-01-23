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

// GameListControl
struct GameListControl_t2306893813;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GameListControl::.ctor()
extern "C"  void GameListControl__ctor_m4103091714 (GameListControl_t2306893813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameListControl::Start()
extern "C"  void GameListControl_Start_m705964922 (GameListControl_t2306893813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameListControl::addGameItem(System.Int32)
extern "C"  void GameListControl_addGameItem_m3675693495 (GameListControl_t2306893813 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameListControl::gameIsAvalable(System.Int32)
extern "C"  bool GameListControl_gameIsAvalable_m3487627765 (GameListControl_t2306893813 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite GameListControl::getSpriteByGameID(System.Int32)
extern "C"  Sprite_t309593783 * GameListControl_getSpriteByGameID_m1509548455 (GameListControl_t2306893813 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameListControl::getNameGameByID(System.Int32)
extern "C"  String_t* GameListControl_getNameGameByID_m2504187285 (GameListControl_t2306893813 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameListControl::clearAll()
extern "C"  void GameListControl_clearAll_m2462236616 (GameListControl_t2306893813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
