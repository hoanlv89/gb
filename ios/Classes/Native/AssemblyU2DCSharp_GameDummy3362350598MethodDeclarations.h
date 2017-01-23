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

// GameDummy
struct GameDummy_t3362350598;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// Card
struct Card_t34057406;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Card34057406.h"

// System.Void GameDummy::.ctor()
extern "C"  void GameDummy__ctor_m4084625049 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameDummy::get_POS2()
extern "C"  Vector2U5BU5D_t686124026* GameDummy_get_POS2_m2271029703 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameDummy::get_POS4()
extern "C"  Vector2U5BU5D_t686124026* GameDummy_get_POS4_m2271029637 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameDummy::get_POS5()
extern "C"  Vector2U5BU5D_t686124026* GameDummy_get_POS5_m2271029604 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GameDummy::get_POS9()
extern "C"  Vector2U5BU5D_t686124026* GameDummy_get_POS9_m2271029984 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDummy::startGame(SimpleJSON.JSONArray)
extern "C"  void GameDummy_startGame_m2450014216 (GameDummy_t3362350598 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDummy::onReconnection()
extern "C"  void GameDummy_onReconnection_m4262724917 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDummy::finishThisGame(SimpleJSON.JSONArray)
extern "C"  void GameDummy_finishThisGame_m1637553331 (GameDummy_t3362350598 * __this, JSONArray_t3986483147 * ___finishArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDummy::effect_color_baidadanh(System.Boolean)
extern "C"  void GameDummy_effect_color_baidadanh_m1658510588 (GameDummy_t3362350598 * __this, bool ___forced0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameDummy::getCardPosRange(Card)
extern "C"  Vector2_t2243707579  GameDummy_getCardPosRange_m887516943 (GameDummy_t3362350598 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card GameDummy::getLeftSideCard(Card)
extern "C"  Card_t34057406 * GameDummy_getLeftSideCard_m177060438 (GameDummy_t3362350598 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card GameDummy::getRightSideCard(Card)
extern "C"  Card_t34057406 * GameDummy_getRightSideCard_m68124267 (GameDummy_t3362350598 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDummy::swapThisPlayerCardOnHand(Card,Card)
extern "C"  void GameDummy_swapThisPlayerCardOnHand_m3990272171 (GameDummy_t3362350598 * __this, Card_t34057406 * ___card0, Card_t34057406 * ___leftSidecard1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDummy::printAllCards()
extern "C"  void GameDummy_printAllCards_m3796625544 (GameDummy_t3362350598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
