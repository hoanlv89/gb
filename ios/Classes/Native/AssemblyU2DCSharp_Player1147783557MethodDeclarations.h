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

// Player
struct Player_t1147783557;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// ChipBetControl
struct ChipBetControl_t507923406;
// Card
struct Card_t34057406;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// CardChan
struct CardChan_t4248506078;
// System.Collections.Generic.List`1<CardChan>
struct List_1_t3617627210;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Player1147783557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharp_Card34057406.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Player::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void Player__ctor_m2451158669 (Player_t1147783557 * __this, String_t* ___name0, int32_t ___ag1, int32_t ___lq2, int32_t ___vip3, bool ___isReady4, int32_t ___ik5, String_t* ___avatar_url6, String_t* ___iSP7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Player::get_displayName()
extern "C"  String_t* Player_get_displayName_m2884244005 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_displayName(System.String)
extern "C"  void Player_set_displayName_m4102346548 (Player_t1147783557 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_isReady()
extern "C"  bool Player_get_isReady_m3068740470 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_isReady(System.Boolean)
extern "C"  void Player_set_isReady_m4088409507 (Player_t1147783557 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player Player::getPreviousPlayer()
extern "C"  Player_t1147783557 * Player_getPreviousPlayer_m3289107688 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::setTransform(UnityEngine.RectTransform)
extern "C"  void Player_setTransform_m1067593953 (Player_t1147783557 * __this, RectTransform_t3349966182 * ___rectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::checkVIP()
extern "C"  bool Player_checkVIP_m1430545097 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::updateView()
extern "C"  void Player_updateView_m840313026 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::updateAvatar()
extern "C"  void Player_updateAvatar_m49642594 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::setDarker(System.Boolean)
extern "C"  void Player_setDarker_m3254476846 (Player_t1147783557 * __this, bool ___darker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::showHostIcon(System.Boolean)
extern "C"  void Player_showHostIcon_m3947735923 (Player_t1147783557 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::becomeAttractive()
extern "C"  void Player_becomeAttractive_m2075563250 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::becomeNormal()
extern "C"  void Player_becomeNormal_m645573988 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::updatePostion(UnityEngine.Vector2,System.Boolean)
extern "C"  void Player_updatePostion_m1203978724 (Player_t1147783557 * __this, Vector2_t2243707579  ___position0, bool ___withEffect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::countDown(System.Int32)
extern "C"  void Player_countDown_m2008444074 (Player_t1147783557 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::countDownWithRemaining(System.Int32)
extern "C"  void Player_countDownWithRemaining_m2574336374 (Player_t1147783557 * __this, int32_t ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::stopCountDown()
extern "C"  void Player_stopCountDown_m36655705 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::antien_effect(Player,Player,System.Int32)
extern "C"  void Player_antien_effect_m901774658 (Player_t1147783557 * __this, Player_t1147783557 * ___player10, Player_t1147783557 * ___player21, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::danhbaiTienlen(System.Collections.Generic.List`1<Card>,System.Int32,System.String)
extern "C"  void Player_danhbaiTienlen_m887527013 (Player_t1147783557 * __this, List_1_t3698145834 * ___cards0, int32_t ___mc1, String_t* ___nn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::boluot(System.String)
extern "C"  void Player_boluot_m246792581 (Player_t1147783557 * __this, String_t* ___nextPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::showBoLuot()
extern "C"  void Player_showBoLuot_m331911320 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::showCardXiTo(System.Int32)
extern "C"  void Player_showCardXiTo_m750827290 (Player_t1147783557 * __this, int32_t ___icard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::hideStatus()
extern "C"  void Player_hideStatus_m164645812 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::plus_gold_effect(System.Int32,System.Int32)
extern "C"  void Player_plus_gold_effect_m2935746521 (Player_t1147783557 * __this, int32_t ___ag0, int32_t ___winnings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::minus_gold_effect(System.Int32,System.Int32)
extern "C"  void Player_minus_gold_effect_m354245519 (Player_t1147783557 * __this, int32_t ___ag0, int32_t ___winnings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishEffect(System.String,System.Int32,System.Int32)
extern "C"  void Player_finishEffect_m804109832 (Player_t1147783557 * __this, String_t* ___result0, int32_t ___ag1, int32_t ___winnings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishTienLen(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void Player_finishTienLen_m3691775475 (Player_t1147783557 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___winnings2, int32_t ___d3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishDummy(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void Player_finishDummy_m3804542754 (Player_t1147783557 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___d2, int32_t ___winnings3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishTala(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void Player_finishTala_m1095787058 (Player_t1147783557 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___d2, int32_t ___winnings3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishPoker(System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray,SimpleJSON.JSONArray)
extern "C"  void Player_finishPoker_m1337985321 (Player_t1147783557 * __this, int32_t ___s0, int32_t ___ag1, int32_t ___winnings2, JSONArray_t3986483147 * ___jcards3, JSONArray_t3986483147 * ___jcardsWin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishXiTo(System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void Player_finishXiTo_m2245180722 (Player_t1147783557 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishLieng(System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void Player_finishLieng_m3403191803 (Player_t1147783557 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finish9K(System.Int32,System.Int32,SimpleJSON.JSONArray,System.Int32)
extern "C"  void Player_finish9K_m2199359213 (Player_t1147783557 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, int32_t ___mark3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::updateGoldWithAnimation(System.Int32,System.Int32,System.Single)
extern "C"  void Player_updateGoldWithAnimation_m3750131914 (Player_t1147783557 * __this, int32_t ___oldAG0, int32_t ___curAG1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::updateGoldWithAnimation(System.Int32,System.Single)
extern "C"  void Player_updateGoldWithAnimation_m1626948425 (Player_t1147783557 * __this, int32_t ___plusAG0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::chat(System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void Player_chat_m484839853 (Player_t1147783557 * __this, String_t* ___content0, String_t* ___type1, String_t* ___nname2, String_t* ___name3, bool ___logtoChat4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::nhanAGtuServer(System.Int32)
extern "C"  void Player_nhanAGtuServer_m3446021146 (Player_t1147783557 * __this, int32_t ___plusag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::onTurnPoker()
extern "C"  void Player_onTurnPoker_m3869196755 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::onTurnTienLen()
extern "C"  void Player_onTurnTienLen_m3948782689 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::onTurnSam()
extern "C"  void Player_onTurnSam_m2441934651 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::check()
extern "C"  void Player_check_m408109564 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getChipsPos()
extern "C"  Vector2_t2243707579  Player_getChipsPos_m2374640966 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getChatsPos()
extern "C"  Vector2_t2243707579  Player_getChatsPos_m850786034 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::effectTransferChiptoMyPot()
extern "C"  void Player_effectTransferChiptoMyPot_m3927613242 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::betOnStart(System.Int32)
extern "C"  void Player_betOnStart_m2176817655 (Player_t1147783557 * __this, int32_t ___plusChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::call(System.Int32)
extern "C"  void Player_call_m3055044803 (Player_t1147783557 * __this, int32_t ___plusChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::raise(System.Int32)
extern "C"  void Player_raise_m3386704997 (Player_t1147783557 * __this, int32_t ___plusChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::allin(System.Int32)
extern "C"  void Player_allin_m33048095 (Player_t1147783557 * __this, int32_t ___plusChip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::fold()
extern "C"  void Player_fold_m2751785529 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::removeOnTurnRequest()
extern "C"  void Player_removeOnTurnRequest_m3710969311 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::smallBlind(System.Int32)
extern "C"  void Player_smallBlind_m737207199 (Player_t1147783557 * __this, int32_t ___stake0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bigBlind(System.Int32)
extern "C"  void Player_bigBlind_m2398889042 (Player_t1147783557 * __this, int32_t ___stake0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChipBetControl Player::getChipBetControl()
extern "C"  ChipBetControl_t507923406 * Player_getChipBetControl_m3615435161 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::effectCoinBinh(System.Int32)
extern "C"  void Player_effectCoinBinh_m2404699804 (Player_t1147783557 * __this, int32_t ___ag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishBinh(System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void Player_finishBinh_m2837212194 (Player_t1147783557 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___winnings2, JSONArray_t3986483147 * ___jcards3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::setSoGoldDaDatBanDau(System.Int32,System.Int32)
extern "C"  void Player_setSoGoldDaDatBanDau_m331139219 (Player_t1147783557 * __this, int32_t ___cuadat0, int32_t ___soGold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::datcuoc_xocdia(System.Int32,System.Int32,System.Boolean)
extern "C"  void Player_datcuoc_xocdia_m1286975167 (Player_t1147783557 * __this, int32_t ___cuadat0, int32_t ___menhgia1, bool ___isFly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::huycuoc()
extern "C"  void Player_huycuoc_m1027795724 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::finishXocDia(System.Int32,System.Int32,System.Int32)
extern "C"  void Player_finishXocDia_m641856194 (Player_t1147783557 * __this, int32_t ___result0, int32_t ___agwin1, int32_t ___ag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::checkWinXocDia(System.Int32,System.Int32)
extern "C"  bool Player_checkWinXocDia_m1488716250 (Player_t1147783557 * __this, int32_t ___result0, int32_t ___cua1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::danhTaLa(Card,System.String,System.Int32)
extern "C"  void Player_danhTaLa_m641478492 (Player_t1147783557 * __this, Card_t34057406 * ___card0, String_t* ___nn1, int32_t ___jsonA2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bocbaiTaLa(Card)
extern "C"  void Player_bocbaiTaLa_m3262029028 (Player_t1147783557 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::anbaiTaLa(System.Int32)
extern "C"  Card_t34057406 * Player_anbaiTaLa_m3075532007 (Player_t1147783557 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::guibaiTaLa(System.String,System.Collections.Generic.List`1<Card>)
extern "C"  void Player_guibaiTaLa_m3647422457 (Player_t1147783557 * __this, String_t* ___player_nhan0, List_1_t3698145834 * ___cards_gui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::guibaiDummy(System.String,Card,System.Collections.Generic.List`1<Card>,System.Int32,System.Int32)
extern "C"  void Player_guibaiDummy_m4001564405 (Player_t1147783557 * __this, String_t* ___player_nhan0, Card_t34057406 * ___card1, List_1_t3698145834 * ___xcards2, int32_t ___CM3, int32_t ___NNCM4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::hieu_ung_an_diem_dummy(System.Int32,System.Int32,System.Int32)
extern "C"  void Player_hieu_ung_an_diem_dummy_m3943331430 (Player_t1147783557 * __this, int32_t ___diemtruoc0, int32_t ___diemsau1, int32_t ___AT2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::try_guibai(Card,System.Collections.Generic.List`1<Card>)
extern "C"  bool Player_try_guibai_m1307780383 (Player_t1147783557 * __this, Card_t34057406 * ___card0, List_1_t3698145834 * ___phom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::habaiTaLa(System.Collections.Generic.List`1<Card>)
extern "C"  void Player_habaiTaLa_m3134396881 (Player_t1147783557 * __this, List_1_t3698145834 * ___cards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getVitriBaiDanhTaLa(System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  Player_getVitriBaiDanhTaLa_m4285370 (Player_t1147783557 * __this, int32_t ___i0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getVitriBaiAnTaLa(System.Int32)
extern "C"  Vector2_t2243707579  Player_getVitriBaiAnTaLa_m1641929065 (Player_t1147783557 * __this, int32_t ___vitricaybai0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getVitriHienBaiTrenTayTaLa(System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  Player_getVitriHienBaiTrenTayTaLa_m714272922 (Player_t1147783557 * __this, int32_t ___i0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getVitriHaPhom(System.Int32)
extern "C"  Vector2_t2243707579  Player_getVitriHaPhom_m3530847363 (Player_t1147783557 * __this, int32_t ___phomIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getVitriHaPhom_Dummy(System.Int32,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  Player_getVitriHaPhom_Dummy_m2478757468 (Player_t1147783557 * __this, int32_t ___phomIndex0, int32_t ___cardindex1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::xepbaidadanh_tala(System.Boolean)
extern "C"  void Player_xepbaidadanh_tala_m1436700637 (Player_t1147783557 * __this, bool ___all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::onTurnTaLa(System.Int32)
extern "C"  void Player_onTurnTaLa_m1914175997 (Player_t1147783557 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::onTurnDummy(System.Int32)
extern "C"  void Player_onTurnDummy_m2144905325 (Player_t1147783557 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::lightDown(UnityEngine.GameObject)
extern "C"  void Player_lightDown_m3949499338 (Player_t1147783557 * __this, GameObject_t1756533147 * ___light0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::lightUp(UnityEngine.GameObject)
extern "C"  void Player_lightUp_m1782386147 (Player_t1147783557 * __this, GameObject_t1756533147 * ___light0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::showCardsInHandByReconnectionTienLen(SimpleJSON.JSONArray)
extern "C"  void Player_showCardsInHandByReconnectionTienLen_m2305500544 (Player_t1147783557 * __this, JSONArray_t3986483147 * ___asArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::findCardInList(Card,System.Collections.Generic.List`1<Card>)
extern "C"  Card_t34057406 * Player_findCardInList_m2783975549 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___gcard0, List_1_t3698145834 * ___cards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardChan Player::findCardInList(System.Int32,System.Collections.Generic.List`1<CardChan>,System.Boolean)
extern "C"  CardChan_t4248506078 * Player_findCardInList_m311007407 (Il2CppObject * __this /* static, unused */, int32_t ___code0, List_1_t3617627210 * ___cards1, bool ___sameisok2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bao_mot()
extern "C"  void Player_bao_mot_m2144499477 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bao_sam()
extern "C"  void Player_bao_sam_m3750703554 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::startGameChan(SimpleJSON.JSONArray)
extern "C"  void Player_startGameChan_m290107811 (Player_t1147783557 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::danhBaiChan(System.Int32,System.Int32,System.Int32,System.String,System.String)
extern "C"  void Player_danhBaiChan_m529110336 (Player_t1147783557 * __this, int32_t ___t0, int32_t ___code1, int32_t ___mcode2, String_t* ___nname3, String_t* ___nd4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::anbaiChan(System.Int32,System.Int32,System.String)
extern "C"  void Player_anbaiChan_m2450560975 (Player_t1147783557 * __this, int32_t ___cc10, int32_t ___cc21, String_t* ___fname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bocbaiChan(System.Int32,System.Int32)
extern "C"  void Player_bocbaiChan_m418801954 (Player_t1147783557 * __this, int32_t ___c0, int32_t ___ca1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::duoibaiChan(System.String,System.Int32)
extern "C"  void Player_duoibaiChan_m3914722592 (Player_t1147783557 * __this, String_t* ___nn0, int32_t ___acode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::habaiuChan(SimpleJSON.JSONArray,System.Int32,System.Int32,System.Int32)
extern "C"  void Player_habaiuChan_m741991486 (Player_t1147783557 * __this, JSONArray_t3986483147 * ___jarr0, int32_t ___cc11, int32_t ___cc22, int32_t ___chiuu3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::xepbaiu(System.Collections.Generic.List`1<CardChan>,System.Int32)
extern "C"  void Player_xepbaiu_m2801533293 (Player_t1147783557 * __this, List_1_t3617627210 * ___list0, int32_t ___row1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::kg(System.Int32,SimpleJSON.JSONArray,System.String,System.String,System.Int32)
extern "C"  void Player_kg_m274792113 (Player_t1147783557 * __this, int32_t ___m0, JSONArray_t3986483147 * ___arrMark1, String_t* ___C2, String_t* ___CC3, int32_t ___G4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::requestChiu(System.Int32,System.String,SimpleJSON.JSONNode)
extern "C"  void Player_requestChiu_m1545000521 (Player_t1147783557 * __this, int32_t ___ci0, String_t* ___nn1, JSONNode_t1250409636 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::chiu(System.Int32,System.String)
extern "C"  void Player_chiu_m900762190 (Player_t1147783557 * __this, int32_t ___ci0, String_t* ___from_name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bocbaihoaco(System.Int32)
extern "C"  void Player_bocbaihoaco_m713398795 (Player_t1147783557 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::danhbaiDummy(Card,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  void Player_danhbaiDummy_m21966966 (Player_t1147783557 * __this, Card_t34057406 * ___card0, String_t* ___nn1, int32_t ___jsonA2, int32_t ___M3, bool ___goiyan4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::bocbaiDummy(Card,System.Boolean)
extern "C"  void Player_bocbaiDummy_m577914575 (Player_t1147783557 * __this, Card_t34057406 * ___card0, bool ___goiyU1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getVitriBaiDanhDummy(System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  Player_getVitriBaiDanhDummy_m1884608684 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::habaiDummy(System.Collections.Generic.List`1<Card>,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32,System.Boolean)
extern "C"  void Player_habaiDummy_m690972889 (Player_t1147783557 * __this, List_1_t3698145834 * ___cards0, int32_t ___CM1, int32_t ___M2, int32_t ___AT3, int32_t ___DT4, String_t* ___NN5, int32_t ___NNCM6, bool ___goiyan7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::hieu_ung_ha_bai_dummy(System.Int32,UnityEngine.Vector2)
extern "C"  void Player_hieu_ung_ha_bai_dummy_m2677283435 (Player_t1147783557 * __this, int32_t ___AT0, Vector2_t2243707579  ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::getDummyTextFinishPos()
extern "C"  Vector2_t2243707579  Player_getDummyTextFinishPos_m2459148427 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Player::hienbaidaha_Dummy(SimpleJSON.JSONArray)
extern "C"  int32_t Player_hienbaidaha_Dummy_m1262141514 (Player_t1147783557 * __this, JSONArray_t3986483147 * ___cardArrays0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<setTransform>m__0()
extern "C"  void Player_U3CsetTransformU3Em__0_m3045705045 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<hideStatus>m__1()
extern "C"  void Player_U3ChideStatusU3Em__1_m588206962 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<plus_gold_effect>m__2()
extern "C"  void Player_U3Cplus_gold_effectU3Em__2_m3462417118 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<minus_gold_effect>m__3()
extern "C"  void Player_U3Cminus_gold_effectU3Em__3_m3651622931 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<finishPoker>m__4()
extern "C"  void Player_U3CfinishPokerU3Em__4_m2629684379 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<requestChiu>m__5(System.Object)
extern "C"  void Player_U3CrequestChiuU3Em__5_m2475015210 (Player_t1147783557 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<bocbaihoaco>m__6(System.Object)
extern "C"  void Player_U3CbocbaihoacoU3Em__6_m102432053 (Player_t1147783557 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::<bocbaihoaco>m__7()
extern "C"  void Player_U3CbocbaihoacoU3Em__7_m3064636206 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
