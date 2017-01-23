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

// OtherPlayer
struct OtherPlayer_t2731387233;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// Card
struct Card_t34057406;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharp_Card34057406.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void OtherPlayer::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void OtherPlayer__ctor_m2833706909 (OtherPlayer_t2731387233 * __this, String_t* ___name0, int32_t ___ag1, int32_t ___lq2, int32_t ___vip3, bool ___isReady4, int32_t ___ik5, String_t* ___avatar_url6, String_t* ___sIP7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::removeAllComponentsView()
extern "C"  void OtherPlayer_removeAllComponentsView_m703845488 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::danhbaiTienlen(System.Collections.Generic.List`1<Card>,System.Int32,System.String)
extern "C"  void OtherPlayer_danhbaiTienlen_m2491067621 (OtherPlayer_t2731387233 * __this, List_1_t3698145834 * ___cards0, int32_t ___mc1, String_t* ___nn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::countDown(System.Int32)
extern "C"  void OtherPlayer_countDown_m2889394588 (OtherPlayer_t2731387233 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OtherPlayer::getChatsPos()
extern "C"  Vector2_t2243707579  OtherPlayer_getChatsPos_m3659399334 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::setCards(System.Int32)
extern "C"  void OtherPlayer_setCards_m275379374 (OtherPlayer_t2731387233 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::setCardTransform(UnityEngine.RectTransform)
extern "C"  void OtherPlayer_setCardTransform_m3964237881 (OtherPlayer_t2731387233 * __this, RectTransform_t3349966182 * ___cardRectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::updatePostion(UnityEngine.Vector2,System.Boolean)
extern "C"  void OtherPlayer_updatePostion_m3441248522 (OtherPlayer_t2731387233 * __this, Vector2_t2243707579  ___position0, bool ___withEffect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OtherPlayer::getCardViewPosition()
extern "C"  Vector2_t2243707579  OtherPlayer_getCardViewPosition_m2540765001 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::showCardXiTo(System.Int32)
extern "C"  void OtherPlayer_showCardXiTo_m3735543692 (OtherPlayer_t2731387233 * __this, int32_t ___icard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::finishTienLen(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_finishTienLen_m2148109623 (OtherPlayer_t2731387233 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___winnings2, int32_t ___d3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::finishDummy(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_finishDummy_m3726755020 (OtherPlayer_t2731387233 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___d2, int32_t ___mark3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::finishTala(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_finishTala_m4154791388 (OtherPlayer_t2731387233 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___d2, int32_t ___mark3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::finishPoker(System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray,SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_finishPoker_m1166048577 (OtherPlayer_t2731387233 * __this, int32_t ___s0, int32_t ___ag1, int32_t ___winnings2, JSONArray_t3986483147 * ___jcards3, JSONArray_t3986483147 * ___jcardsWin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::finishXiTo(System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_finishXiTo_m1063799716 (OtherPlayer_t2731387233 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::finishLieng(System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_finishLieng_m187255871 (OtherPlayer_t2731387233 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::removeFinishCards()
extern "C"  void OtherPlayer_removeFinishCards_m1897220284 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::fold()
extern "C"  void OtherPlayer_fold_m1330436513 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::onTurnPoker()
extern "C"  void OtherPlayer_onTurnPoker_m2039242727 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::onTurnTienLen()
extern "C"  void OtherPlayer_onTurnTienLen_m2846451937 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::showCardsInHandByReconnectionTienLen(SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_showCardsInHandByReconnectionTienLen_m163350 (OtherPlayer_t2731387233 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::clearCardInHand_Binh()
extern "C"  void OtherPlayer_clearCardInHand_Binh_m620169239 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::fixSiblingIndex()
extern "C"  void OtherPlayer_fixSiblingIndex_m4173572997 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::fscBinh()
extern "C"  void OtherPlayer_fscBinh_m3086533843 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::ufscBinh()
extern "C"  void OtherPlayer_ufscBinh_m82842298 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::danhTaLa(Card,System.String,System.Int32)
extern "C"  void OtherPlayer_danhTaLa_m2688997778 (OtherPlayer_t2731387233 * __this, Card_t34057406 * ___card0, String_t* ___nn1, int32_t ___jsonA2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::bocbaiTaLa(Card)
extern "C"  void OtherPlayer_bocbaiTaLa_m3500361538 (OtherPlayer_t2731387233 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card OtherPlayer::anbaiTaLa(System.Int32)
extern "C"  Card_t34057406 * OtherPlayer_anbaiTaLa_m1692203359 (OtherPlayer_t2731387233 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::guibaiTaLa(System.String,System.Collections.Generic.List`1<Card>)
extern "C"  void OtherPlayer_guibaiTaLa_m740277097 (OtherPlayer_t2731387233 * __this, String_t* ___player_nhan0, List_1_t3698145834 * ___cards_gui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::guibaiDummy(System.String,Card,System.Collections.Generic.List`1<Card>,System.Int32,System.Int32)
extern "C"  void OtherPlayer_guibaiDummy_m2124151709 (OtherPlayer_t2731387233 * __this, String_t* ___player_nhan0, Card_t34057406 * ___card1, List_1_t3698145834 * ___cards_gui2, int32_t ___CM3, int32_t ___NNCM4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::habaiTaLa(System.Collections.Generic.List`1<Card>)
extern "C"  void OtherPlayer_habaiTaLa_m1576539113 (OtherPlayer_t2731387233 * __this, List_1_t3698145834 * ___cards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::bocbaiTaLa_animation(Card)
extern "C"  void OtherPlayer_bocbaiTaLa_animation_m2248553825 (OtherPlayer_t2731387233 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::onTurnTaLa(System.Int32)
extern "C"  void OtherPlayer_onTurnTaLa_m1777239573 (OtherPlayer_t2731387233 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::onTurnDummy(System.Int32)
extern "C"  void OtherPlayer_onTurnDummy_m1632420869 (OtherPlayer_t2731387233 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::send_bocbaitala()
extern "C"  void OtherPlayer_send_bocbaitala_m3158021943 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::hienbaidadanh_tala(SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_hienbaidadanh_tala_m2168901020 (OtherPlayer_t2731387233 * __this, JSONArray_t3986483147 * ___cardArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OtherPlayer::hienbaidaha_tala(SimpleJSON.JSONArray)
extern "C"  int32_t OtherPlayer_hienbaidaha_tala_m913931616 (OtherPlayer_t2731387233 * __this, JSONArray_t3986483147 * ___cardArrays0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::startGameChan(SimpleJSON.JSONArray)
extern "C"  void OtherPlayer_startGameChan_m1340365439 (OtherPlayer_t2731387233 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::danhBaiChan(System.Int32,System.Int32,System.Int32,System.String,System.String)
extern "C"  void OtherPlayer_danhBaiChan_m749571238 (OtherPlayer_t2731387233 * __this, int32_t ___t0, int32_t ___code1, int32_t ___mcode2, String_t* ___nname3, String_t* ___nd4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::anbaiChan(System.Int32,System.Int32,System.String)
extern "C"  void OtherPlayer_anbaiChan_m1989059523 (OtherPlayer_t2731387233 * __this, int32_t ___cc10, int32_t ___cc21, String_t* ___fname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::duoibaiChan(System.String,System.Int32)
extern "C"  void OtherPlayer_duoibaiChan_m2354623702 (OtherPlayer_t2731387233 * __this, String_t* ___nn0, int32_t ___acode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::habaiuChan(SimpleJSON.JSONArray,System.Int32,System.Int32,System.Int32)
extern "C"  void OtherPlayer_habaiuChan_m2565312528 (OtherPlayer_t2731387233 * __this, JSONArray_t3986483147 * ___jarr0, int32_t ___cc11, int32_t ___cc22, int32_t ___chiuu3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::showXuongU(SimpleJSON.JSONArray,System.Int32)
extern "C"  void OtherPlayer_showXuongU_m2534610393 (OtherPlayer_t2731387233 * __this, JSONArray_t3986483147 * ___jarr0, int32_t ___chiuu1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::kg(System.Int32,SimpleJSON.JSONArray,System.String,System.String,System.Int32)
extern "C"  void OtherPlayer_kg_m948907001 (OtherPlayer_t2731387233 * __this, int32_t ___m0, JSONArray_t3986483147 * ___arrMark1, String_t* ___C2, String_t* ___CC3, int32_t ___G4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::danhbaiDummy(Card,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  void OtherPlayer_danhbaiDummy_m2534018456 (OtherPlayer_t2731387233 * __this, Card_t34057406 * ___card0, String_t* ___nn1, int32_t ___jsonA2, int32_t ___M3, bool ___goiyan4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::bocbaiDummy(Card,System.Boolean)
extern "C"  void OtherPlayer_bocbaiDummy_m2388011051 (OtherPlayer_t2731387233 * __this, Card_t34057406 * ___card0, bool ___goiyU1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card OtherPlayer::addCardToCardsDummy(Card,System.Single,UnityEngine.Vector2)
extern "C"  Card_t34057406 * OtherPlayer_addCardToCardsDummy_m3035155695 (OtherPlayer_t2731387233 * __this, Card_t34057406 * ___card0, float ___scale1, Vector2_t2243707579  ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OtherPlayer::getOtherPlayerCardInHandPos(System.Int32,System.Int32)
extern "C"  Vector3_t2243707580  OtherPlayer_getOtherPlayerCardInHandPos_m1509575943 (OtherPlayer_t2731387233 * __this, int32_t ___index0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::xeplaicaybaitrentaydummy(System.Int32)
extern "C"  void OtherPlayer_xeplaicaybaitrentaydummy_m3803513202 (OtherPlayer_t2731387233 * __this, int32_t ___socay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::habaiDummy(System.Collections.Generic.List`1<Card>,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32,System.Boolean)
extern "C"  void OtherPlayer_habaiDummy_m160756785 (OtherPlayer_t2731387233 * __this, List_1_t3698145834 * ___xcards0, int32_t ___CM1, int32_t ___M2, int32_t ___AT3, int32_t ___DT4, String_t* ___NN5, int32_t ___NNCM6, bool ___goiyan7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::<finishTienLen>m__0()
extern "C"  void OtherPlayer_U3CfinishTienLenU3Em__0_m1318230933 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::<finishPoker>m__1()
extern "C"  void OtherPlayer_U3CfinishPokerU3Em__1_m1254200616 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::<fold>m__2()
extern "C"  void OtherPlayer_U3CfoldU3Em__2_m710012078 (OtherPlayer_t2731387233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OtherPlayer::<kg>m__3(System.Object)
extern "C"  void OtherPlayer_U3CkgU3Em__3_m2036655490 (OtherPlayer_t2731387233 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
