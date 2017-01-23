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

// Game9K
struct Game9K_t2853457746;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// Player
struct Player_t1147783557;
// ChipBetControl
struct ChipBetControl_t507923406;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Player1147783557.h"

// System.Void Game9K::.ctor()
extern "C"  void Game9K__ctor_m1517699043 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] Game9K::get_StaticPos9()
extern "C"  Vector2U5BU5D_t686124026* Game9K_get_StaticPos9_m1070418020 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] Game9K::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* Game9K_get_POS2_m2156491813 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] Game9K::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* Game9K_get_POS4_m1309516807 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] Game9K::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* Game9K_get_POS5_m1168354306 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] Game9K::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* Game9K_get_POS9_m4186210878 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Game9K::get_maxTotalBetChipOfAPlayer()
extern "C"  int32_t Game9K_get_maxTotalBetChipOfAPlayer_m1680652472 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::set_maxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void Game9K_set_maxTotalBetChipOfAPlayer_m3840884679 (Game9K_t2853457746 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::startGame(SimpleJSON.JSONArray)
extern "C"  void Game9K_startGame_m1587976576 (Game9K_t2853457746 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::updateReadyStatus()
extern "C"  void Game9K_updateReadyStatus_m890067097 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::updateMaxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void Game9K_updateMaxTotalBetChipOfAPlayer_m1996786971 (Game9K_t2853457746 * __this, int32_t ___totalBetChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::onReconnection()
extern "C"  void Game9K_onReconnection_m3491510243 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void Game9K_finishThisGame_m3867012509 (Game9K_t2853457746 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Game9K::getViewPositionOfChipBetPlayer(Player)
extern "C"  Vector2_t2243707579  Game9K_getViewPositionOfChipBetPlayer_m3683128084 (Game9K_t2853457746 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Game9K::getViewPositionOfPlayersCard(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  Game9K_getViewPositionOfPlayersCard_m3416426199 (Game9K_t2853457746 * __this, float ___x00, float ___y01, float ___margin2, float ___scale3, int32_t ___index4, int32_t ___count5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Game9K::getViewPositionOfPlayersCard(Player,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  Game9K_getViewPositionOfPlayersCard_m4157246750 (Game9K_t2853457746 * __this, Player_t1147783557 * ___player0, float ___margin1, float ___scale2, int32_t ___index3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChipBetControl Game9K::getPotControl()
extern "C"  ChipBetControl_t507923406 * Game9K_getPotControl_m1002883986 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::gatherChipBetsIntoPot()
extern "C"  void Game9K_gatherChipBetsIntoPot_m2741395147 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::transferChipToWinner(Player)
extern "C"  void Game9K_transferChipToWinner_m2355605675 (Game9K_t2853457746 * __this, Player_t1147783557 * ___winner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::.cctor()
extern "C"  void Game9K__cctor_m1045230020 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::<startGame>m__0()
extern "C"  void Game9K_U3CstartGameU3Em__0_m3686822054 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::<finishThisGame>__BaseCallProxy0(SimpleJSON.JSONArray)
extern "C"  void Game9K_U3CfinishThisGameU3E__BaseCallProxy0_m2819438000 (Game9K_t2853457746 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game9K::<transferChipToWinner>m__1()
extern "C"  void Game9K_U3CtransferChipToWinnerU3Em__1_m3641825706 (Game9K_t2853457746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
