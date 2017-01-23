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

// GameXiTo
struct GameXiTo_t2742373968;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.String
struct String_t;
// Player
struct Player_t1147783557;
// ChipBetControl
struct ChipBetControl_t507923406;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Player1147783557.h"

// System.Void GameXiTo::.ctor()
extern "C"  void GameXiTo__ctor_m1266712983 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameXiTo::get_StaticPos5()
extern "C"  Vector2U5BU5D_t686124026* GameXiTo_get_StaticPos5_m3894531250 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameXiTo::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GameXiTo_get_POS2_m3395088681 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameXiTo::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GameXiTo_get_POS4_m3677413683 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameXiTo::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GameXiTo_get_POS5_m3818576184 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameXiTo::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GameXiTo_get_POS9_m800719612 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameXiTo::get_maxTotalBetChipOfAPlayer()
extern "C"  int32_t GameXiTo_get_maxTotalBetChipOfAPlayer_m380273718 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::set_maxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void GameXiTo_set_maxTotalBetChipOfAPlayer_m783654659 (GameXiTo_t2742373968 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::startGame(SimpleJSON.JSONArray)
extern "C"  void GameXiTo_startGame_m1038026582 (GameXiTo_t2742373968 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::updateReadyStatus()
extern "C"  void GameXiTo_updateReadyStatus_m2702392301 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameXiTo::gameInfoToString()
extern "C"  String_t* GameXiTo_gameInfoToString_m713502804 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::updateMaxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void GameXiTo_updateMaxTotalBetChipOfAPlayer_m1481191679 (GameXiTo_t2742373968 * __this, int32_t ___totalBetChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::onReconnection()
extern "C"  void GameXiTo_onReconnection_m3914812711 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void GameXiTo_finishThisGame_m1120555249 (GameXiTo_t2742373968 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameXiTo::getViewPositionOfChipBetPlayer(Player)
extern "C"  Vector2_t2243707579  GameXiTo_getViewPositionOfChipBetPlayer_m3650260502 (GameXiTo_t2742373968 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameXiTo::getViewPositionOfPlayersCard(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  GameXiTo_getViewPositionOfPlayersCard_m173290435 (GameXiTo_t2742373968 * __this, float ___x00, float ___y01, float ___margin2, float ___scale3, int32_t ___index4, int32_t ___count5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameXiTo::getViewPositionOfPlayersCard(Player,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  GameXiTo_getViewPositionOfPlayersCard_m2122413112 (GameXiTo_t2742373968 * __this, Player_t1147783557 * ___player0, float ___margin1, float ___scale2, int32_t ___index3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChipBetControl GameXiTo::getPotControl()
extern "C"  ChipBetControl_t507923406 * GameXiTo_getPotControl_m3576993908 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::gatherChipBetsIntoPot()
extern "C"  void GameXiTo_gatherChipBetsIntoPot_m3002045359 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::transferChipToWinner(Player)
extern "C"  void GameXiTo_transferChipToWinner_m4185943599 (GameXiTo_t2742373968 * __this, Player_t1147783557 * ___winner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::.cctor()
extern "C"  void GameXiTo__cctor_m3647309002 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::<startGame>m__0()
extern "C"  void GameXiTo_U3CstartGameU3Em__0_m2725979364 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::<finishThisGame>__BaseCallProxy0(SimpleJSON.JSONArray)
extern "C"  void GameXiTo_U3CfinishThisGameU3E__BaseCallProxy0_m36648862 (GameXiTo_t2742373968 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameXiTo::<transferChipToWinner>m__1()
extern "C"  void GameXiTo_U3CtransferChipToWinnerU3Em__1_m46818880 (GameXiTo_t2742373968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
