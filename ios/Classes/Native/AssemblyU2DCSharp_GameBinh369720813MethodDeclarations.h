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

// GameBinh
struct GameBinh_t369720813;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// Player
struct Player_t1147783557;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharp_Player1147783557.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void GameBinh::.ctor()
extern "C"  void GameBinh__ctor_m639093556 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameBinh::get_StaticPos9()
extern "C"  Vector2U5BU5D_t686124026* GameBinh_get_StaticPos9_m3733511653 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameBinh::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GameBinh_get_POS2_m3147624632 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameBinh::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GameBinh_get_POS4_m2865299630 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameBinh::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GameBinh_get_POS5_m1319418665 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameBinh::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GameBinh_get_POS9_m3725829397 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::startGame(SimpleJSON.JSONArray)
extern "C"  void GameBinh_startGame_m3886741935 (GameBinh_t369720813 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::sochi(System.Collections.Generic.List`1<Card>,Player,System.Int32)
extern "C"  void GameBinh_sochi_m4154840412 (GameBinh_t369720813 * __this, List_1_t3698145834 * ___listV0, Player_t1147783557 * ___player1, int32_t ___chi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::effectAG(Player,System.Int32,UnityEngine.Vector2)
extern "C"  void GameBinh_effectAG_m50624735 (GameBinh_t369720813 * __this, Player_t1147783557 * ___player0, int32_t ___chi1, Vector2_t2243707579  ___effPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::showMBCard(System.Collections.Generic.List`1<System.Int32>,Player)
extern "C"  void GameBinh_showMBCard_m329879136 (GameBinh_t369720813 * __this, List_1_t1440998580 * ___listV0, Player_t1147783557 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::onReconnection()
extern "C"  void GameBinh_onReconnection_m1751900034 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void GameBinh_finishThisGame_m3078159584 (GameBinh_t369720813 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::<startGame>m__0()
extern "C"  void GameBinh_U3CstartGameU3Em__0_m785350217 (GameBinh_t369720813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBinh::<finishThisGame>m__1()
extern "C"  void GameBinh_U3CfinishThisGameU3Em__1_m1018765273 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
