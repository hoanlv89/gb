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

// GameLieng
struct GameLieng_t3590706409;
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

// System.Void GameLieng::.ctor()
extern "C"  void GameLieng__ctor_m428109410 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameLieng::get_StaticPos9()
extern "C"  Vector2U5BU5D_t686124026* GameLieng_get_StaticPos9_m2468331561 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameLieng::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GameLieng_get_POS2_m2578907860 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameLieng::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GameLieng_get_POS4_m2578907926 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameLieng::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GameLieng_get_POS5_m2578907893 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameLieng::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GameLieng_get_POS9_m2578907513 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameLieng::get_maxTotalBetChipOfAPlayer()
extern "C"  int32_t GameLieng_get_maxTotalBetChipOfAPlayer_m3765732859 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::set_maxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void GameLieng_set_maxTotalBetChipOfAPlayer_m1532670050 (GameLieng_t3590706409 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::startGame(SimpleJSON.JSONArray)
extern "C"  void GameLieng_startGame_m1562301107 (GameLieng_t3590706409 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::updateReadyStatus()
extern "C"  void GameLieng_updateReadyStatus_m347360464 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::updateMaxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void GameLieng_updateMaxTotalBetChipOfAPlayer_m3144824442 (GameLieng_t3590706409 * __this, int32_t ___totalBetChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::onReconnection()
extern "C"  void GameLieng_onReconnection_m354812100 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void GameLieng_finishThisGame_m2604463814 (GameLieng_t3590706409 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameLieng::getViewPositionOfChipBetPlayer(Player)
extern "C"  Vector2_t2243707579  GameLieng_getViewPositionOfChipBetPlayer_m1828960017 (GameLieng_t3590706409 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameLieng::getViewPositionOfPlayersCard(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  GameLieng_getViewPositionOfPlayersCard_m2647158664 (GameLieng_t3590706409 * __this, float ___x00, float ___y01, float ___margin2, float ___scale3, int32_t ___index4, int32_t ___count5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameLieng::getViewPositionOfPlayersCard(Player,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  GameLieng_getViewPositionOfPlayersCard_m1138713459 (GameLieng_t3590706409 * __this, Player_t1147783557 * ___player0, float ___margin1, float ___scale2, int32_t ___index3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChipBetControl GameLieng::getPotControl()
extern "C"  ChipBetControl_t507923406 * GameLieng_getPotControl_m3212320939 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::gatherChipBetsIntoPot()
extern "C"  void GameLieng_gatherChipBetsIntoPot_m3764268588 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::transferChipToWinner(Player)
extern "C"  void GameLieng_transferChipToWinner_m2846189612 (GameLieng_t3590706409 * __this, Player_t1147783557 * ___winner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::.cctor()
extern "C"  void GameLieng__cctor_m1200566947 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::<startGame>m__0()
extern "C"  void GameLieng_U3CstartGameU3Em__0_m66974785 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::<finishThisGame>__BaseCallProxy0(SimpleJSON.JSONArray)
extern "C"  void GameLieng_U3CfinishThisGameU3E__BaseCallProxy0_m3394386063 (GameLieng_t3590706409 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLieng::<transferChipToWinner>m__1()
extern "C"  void GameLieng_U3CtransferChipToWinnerU3Em__1_m3901093269 (GameLieng_t3590706409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
