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

// GamePoker
struct GamePoker_t4276346087;
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
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Player1147783557.h"

// System.Void GamePoker::.ctor()
extern "C"  void GamePoker__ctor_m1448571402 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GamePoker::get_StaticPos9()
extern "C"  Vector2U5BU5D_t686124026* GamePoker_get_StaticPos9_m3288949859 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GamePoker::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GamePoker_get_POS2_m237650996 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GamePoker::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GamePoker_get_POS4_m237650930 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GamePoker::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GamePoker_get_POS5_m237650835 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GamePoker::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GamePoker_get_POS9_m237650719 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePoker::get_maxTotalBetChipOfAPlayer()
extern "C"  int32_t GamePoker_get_maxTotalBetChipOfAPlayer_m1239507801 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::set_maxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void GamePoker_set_maxTotalBetChipOfAPlayer_m98778054 (GamePoker_t4276346087 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::startGame(SimpleJSON.JSONArray)
extern "C"  void GamePoker_startGame_m463924937 (GamePoker_t4276346087 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::setDealer(System.String)
extern "C"  void GamePoker_setDealer_m2859866261 (GamePoker_t4276346087 * __this, String_t* ___dealerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::updateReadyStatus()
extern "C"  void GamePoker_updateReadyStatus_m1915696076 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::updateMaxTotalBetChipOfAPlayer(System.Int32)
extern "C"  void GamePoker_updateMaxTotalBetChipOfAPlayer_m1427480786 (GamePoker_t4276346087 * __this, int32_t ___totalBetChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::onReconnection()
extern "C"  void GamePoker_onReconnection_m3720604916 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void GamePoker_finishThisGame_m3129807714 (GamePoker_t4276346087 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GamePoker::getViewPositionOfChipBetPlayer(Player)
extern "C"  Vector2_t2243707579  GamePoker_getViewPositionOfChipBetPlayer_m3662690923 (GamePoker_t4276346087 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GamePoker::getViewPositionOfOtherPlayersCard(Player)
extern "C"  Vector2_t2243707579  GamePoker_getViewPositionOfOtherPlayersCard_m1669542925 (GamePoker_t4276346087 * __this, Player_t1147783557 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChipBetControl GamePoker::getPotControl()
extern "C"  ChipBetControl_t507923406 * GamePoker_getPotControl_m1620805513 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::gatherChipBetsIntoPot()
extern "C"  void GamePoker_gatherChipBetsIntoPot_m1696937580 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::transferChipToWinner(Player)
extern "C"  void GamePoker_transferChipToWinner_m1767575532 (GamePoker_t4276346087 * __this, Player_t1147783557 * ___winner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::.cctor()
extern "C"  void GamePoker__cctor_m3505426821 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::<finishThisGame>__BaseCallProxy0(SimpleJSON.JSONArray)
extern "C"  void GamePoker_U3CfinishThisGameU3E__BaseCallProxy0_m3629335465 (GamePoker_t4276346087 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePoker::<transferChipToWinner>m__0()
extern "C"  void GamePoker_U3CtransferChipToWinnerU3Em__0_m1601236520 (GamePoker_t4276346087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
