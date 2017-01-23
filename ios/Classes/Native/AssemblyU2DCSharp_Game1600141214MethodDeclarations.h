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

// Game
struct Game_t1600141214;
// Player
struct Player_t1147783557;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Game_State2984167128.h"
#include "AssemblyU2DCSharp_Player1147783557.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Game::.ctor()
extern "C"  void Game__ctor_m1512360653 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Game::get_SCALE_HEIGHT()
extern "C"  int32_t Game_get_SCALE_HEIGHT_m3038867610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Game/State Game::get_state()
extern "C"  int32_t Game_get_state_m3895256002 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::set_state(Game/State)
extern "C"  void Game_set_state_m1006768473 (Game_t1600141214 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player Game::get_hostPlayer()
extern "C"  Player_t1147783557 * Game_get_hostPlayer_m2616380767 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::set_hostPlayer(Player)
extern "C"  void Game_set_hostPlayer_m4224247988 (Game_t1600141214 * __this, Player_t1147783557 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::setGameConfig(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Game_setGameConfig_m2036208588 (Game_t1600141214 * __this, String_t* ___name0, int32_t ___stake1, int32_t ___id2, int32_t ___type3, int32_t ___agx4, int32_t ___v_min5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::changeGameConfig(System.Int32,System.Int32,System.Int32)
extern "C"  void Game_changeGameConfig_m3660733470 (Game_t1600141214 * __this, int32_t ___stake0, int32_t ___v_min1, int32_t ___ag_min2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::updateReadyStatus()
extern "C"  void Game_updateReadyStatus_m2588750759 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player Game::addPlayer(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  Player_t1147783557 * Game_addPlayer_m4282452614 (Game_t1600141214 * __this, String_t* ___name0, int32_t ___ag1, int32_t ___lq2, int32_t ___vip3, bool ___isReady4, int32_t ___ik5, String_t* ___imgUrl6, String_t* ___sIP7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player Game::getPlayer(System.String)
extern "C"  Player_t1147783557 * Game_getPlayer_m3912705562 (Game_t1600141214 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::removePlayer(System.String)
extern "C"  void Game_removePlayer_m1576662230 (Game_t1600141214 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::leaveTable()
extern "C"  void Game_leaveTable_m4122367104 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::backToLobby()
extern "C"  void Game_backToLobby_m970942795 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::backToHome()
extern "C"  void Game_backToHome_m3923755792 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Game::getViewPositionOfPlayer(Player)
extern "C"  Vector2_t2243707579  Game_getViewPositionOfPlayer_m1666855997 (Game_t1600141214 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Game::getViewIndexOfPlayer(Player)
extern "C"  int32_t Game_getViewIndexOfPlayer_m178011595 (Game_t1600141214 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Game::gameInfoToString()
extern "C"  String_t* Game_gameInfoToString_m1788789114 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::updateAllPlayersViewPosition(System.Boolean)
extern "C"  void Game_updateAllPlayersViewPosition_m2824490124 (Game_t1600141214 * __this, bool ___withEffect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::clearLastGameCards()
extern "C"  void Game_clearLastGameCards_m519169919 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::startGame(SimpleJSON.JSONArray)
extern "C"  void Game_startGame_m64131296 (Game_t1600141214 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::onReconnection()
extern "C"  void Game_onReconnection_m2148688505 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void Game_finishThisGame_m2595157791 (Game_t1600141214 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::changeTableProperty(System.Int32,System.Int32,System.Int32)
extern "C"  void Game_changeTableProperty_m2671198255 (Game_t1600141214 * __this, int32_t ___stake0, int32_t ___v_min1, int32_t ___ag_min2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Game::convertResult(System.Int32)
extern "C"  String_t* Game_convertResult_m4125753635 (Game_t1600141214 * __this, int32_t ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::<leaveTable>m__0(System.Object)
extern "C"  void Game_U3CleaveTableU3Em__0_m142785549 (Game_t1600141214 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::<leaveTable>m__1()
extern "C"  void Game_U3CleaveTableU3Em__1_m3700033788 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::<updateAllPlayersViewPosition>m__2()
extern "C"  void Game_U3CupdateAllPlayersViewPositionU3Em__2_m4212858790 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
