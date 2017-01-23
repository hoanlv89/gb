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

// GameChan
struct GameChan_t4167295034;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Player
struct Player_t1147783557;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Player1147783557.h"

// System.Void GameChan::.ctor()
extern "C"  void GameChan__ctor_m3219131693 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameChan::get_StaticPos9()
extern "C"  Vector2U5BU5D_t686124026* GameChan_get_StaticPos9_m2187304908 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameChan::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GameChan_get_POS2_m3044330827 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameChan::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GameChan_get_POS4_m3326655829 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameChan::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GameChan_get_POS5_m577569498 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameChan::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GameChan_get_POS9_m1854680222 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChan::startGame(SimpleJSON.JSONArray)
extern "C"  void GameChan_startGame_m3358222084 (GameChan_t4167295034 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChan::onReconnection()
extern "C"  void GameChan_onReconnection_m2704703361 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChan::setGameConfigChan(System.Int32,System.Int32)
extern "C"  void GameChan_setGameConfigChan_m1232065375 (GameChan_t4167295034 * __this, int32_t ___g0, int32_t ___f1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameChan::gameInfoToString()
extern "C"  String_t* GameChan_gameInfoToString_m3259962414 (GameChan_t4167295034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] GameChan::getDealingLocation(System.Int32)
extern "C"  Int32U5BU5D_t3030399641* GameChan_getDealingLocation_m2434505971 (GameChan_t4167295034 * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameChan::getCard2Pos(Player,System.Int32)
extern "C"  Vector2_t2243707579  GameChan_getCard2Pos_m3871079836 (GameChan_t4167295034 * __this, Player_t1147783557 * ___pl0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameChan::getCard1Pos(Player,System.Int32)
extern "C"  Vector2_t2243707579  GameChan_getCard1Pos_m1021793783 (GameChan_t4167295034 * __this, Player_t1147783557 * ___pl0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameChan::getCard3PosX(System.Int32,System.Int32)
extern "C"  int32_t GameChan_getCard3PosX_m3126825350 (GameChan_t4167295034 * __this, int32_t ___i0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameChan::getCard3PosY(System.Int32)
extern "C"  int32_t GameChan_getCard3PosY_m919038080 (GameChan_t4167295034 * __this, int32_t ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
