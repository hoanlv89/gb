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

// GameTaLa
struct GameTaLa_t450274694;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.String
struct String_t;
// Card
struct Card_t34057406;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Card34057406.h"

// System.Void GameTaLa::.ctor()
extern "C"  void GameTaLa__ctor_m1030847685 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameTaLa::get_StaticPos9()
extern "C"  Vector2U5BU5D_t686124026* GameTaLa_get_StaticPos9_m3659697004 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameTaLa::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GameTaLa_get_POS2_m2333021951 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameTaLa::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GameTaLa_get_POS4_m2050696949 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameTaLa::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GameTaLa_get_POS5_m2191859450 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameTaLa::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GameTaLa_get_POS9_m303302886 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::startGame(SimpleJSON.JSONArray)
extern "C"  void GameTaLa_startGame_m1605150632 (GameTaLa_t450274694 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::onReconnection()
extern "C"  void GameTaLa_onReconnection_m728898225 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void GameTaLa_finishThisGame_m2702723847 (GameTaLa_t450274694 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::chuyenbaiTaLa(System.String,System.String,System.Int32)
extern "C"  void GameTaLa_chuyenbaiTaLa_m1426901274 (GameTaLa_t450274694 * __this, String_t* ___name0, String_t* ___nname1, int32_t ___code2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::effect_color_baidadanh(System.Boolean)
extern "C"  void GameTaLa_effect_color_baidadanh_m3325630252 (GameTaLa_t450274694 * __this, bool ___forced0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameTaLa::getCardPosRange(Card)
extern "C"  Vector2_t2243707579  GameTaLa_getCardPosRange_m3467651415 (GameTaLa_t450274694 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card GameTaLa::getLeftSideCard(Card)
extern "C"  Card_t34057406 * GameTaLa_getLeftSideCard_m1742253236 (GameTaLa_t450274694 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card GameTaLa::getRightSideCard(Card)
extern "C"  Card_t34057406 * GameTaLa_getRightSideCard_m834035331 (GameTaLa_t450274694 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::swapThisPlayerCardOnHand(Card,Card)
extern "C"  void GameTaLa_swapThisPlayerCardOnHand_m2017544175 (GameTaLa_t450274694 * __this, Card_t34057406 * ___card0, Card_t34057406 * ___leftSidecard1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTaLa::printAllCards()
extern "C"  void GameTaLa_printAllCards_m152088584 (GameTaLa_t450274694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
