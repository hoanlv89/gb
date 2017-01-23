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

// ThisPlayer
struct ThisPlayer_t4266992819;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// Card
struct Card_t34057406;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Card>>
struct List_1_t3067266966;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "AssemblyU2DCSharp_Card34057406.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ThisPlayer::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void ThisPlayer__ctor_m3280991543 (ThisPlayer_t4266992819 * __this, String_t* ___name0, int32_t ___ag1, int32_t ___lq2, int32_t ___vip3, bool ___isReady4, int32_t ___ik5, String_t* ___avatar_url6, String_t* ___sIP7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::setTransform(UnityEngine.RectTransform)
extern "C"  void ThisPlayer_setTransform_m1537477579 (ThisPlayer_t4266992819 * __this, RectTransform_t3349966182 * ___rectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::countDown(System.Int32)
extern "C"  void ThisPlayer_countDown_m1615799966 (ThisPlayer_t4266992819 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::initializeTienlenButtons()
extern "C"  void ThisPlayer_initializeTienlenButtons_m1300786488 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::initializePokerButtons()
extern "C"  void ThisPlayer_initializePokerButtons_m3500736266 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::setOnPlayingPosition()
extern "C"  void ThisPlayer_setOnPlayingPosition_m2008853704 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::danhbaiTienlen(System.Collections.Generic.List`1<Card>,System.Int32,System.String)
extern "C"  void ThisPlayer_danhbaiTienlen_m1683568171 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___cards0, int32_t ___mc1, String_t* ___nn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card ThisPlayer::findCardByCode(System.Int32)
extern "C"  Card_t34057406 * ThisPlayer_findCardByCode_m3263867783 (ThisPlayer_t4266992819 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::reArrangeCards()
extern "C"  void ThisPlayer_reArrangeCards_m3775148272 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThisPlayer::getInHandCardsPos(System.Int32,System.Int32)
extern "C"  float ThisPlayer_getInHandCardsPos_m2096170493 (ThisPlayer_t4266992819 * __this, int32_t ___i0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThisPlayer::getMarginCard()
extern "C"  float ThisPlayer_getMarginCard_m219776298 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThisPlayer::getMarginCard(System.Int32)
extern "C"  float ThisPlayer_getMarginCard_m3365489017 (ThisPlayer_t4266992819 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThisPlayer::getInHandCardsPos(Card)
extern "C"  float ThisPlayer_getInHandCardsPos_m375308441 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::showCardXiTo(System.Int32)
extern "C"  void ThisPlayer_showCardXiTo_m341384946 (ThisPlayer_t4266992819 * __this, int32_t ___icard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::countDownReady()
extern "C"  void ThisPlayer_countDownReady_m4151626524 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::onTurnPoker()
extern "C"  void ThisPlayer_onTurnPoker_m3843833333 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::onTurnTienLen()
extern "C"  void ThisPlayer_onTurnTienLen_m2933071587 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_boluot()
extern "C"  void ThisPlayer_send_boluot_m881920952 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_bochon()
extern "C"  void ThisPlayer_send_bochon_m1633473626 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_xepbai()
extern "C"  void ThisPlayer_send_xepbai_m2115511408 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_danhbai()
extern "C"  void ThisPlayer_send_danhbai_m2651590156 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_fold()
extern "C"  void ThisPlayer_send_fold_m3575210288 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_callOrCheck()
extern "C"  void ThisPlayer_send_callOrCheck_m2763437964 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_raiseOrBet(System.Int32)
extern "C"  void ThisPlayer_send_raiseOrBet_m566421910 (ThisPlayer_t4266992819 * __this, int32_t ___plusValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_AllIn()
extern "C"  void ThisPlayer_send_AllIn_m3046305347 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_autoExit()
extern "C"  void ThisPlayer_send_autoExit_m1112890744 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::automaticSelectCards()
extern "C"  void ThisPlayer_automaticSelectCards_m861231556 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ThisPlayer::getChatsPos()
extern "C"  Vector2_t2243707579  ThisPlayer_getChatsPos_m3738605010 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishTienLen(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishTienLen_m3288167761 (ThisPlayer_t4266992819 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___winnings2, int32_t ___d3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishDummy(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishDummy_m336418598 (ThisPlayer_t4266992819 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___d2, int32_t ___mark3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishTala(System.Int32,System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishTala_m1587727478 (ThisPlayer_t4266992819 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___d2, int32_t ___mark3, JSONArray_t3986483147 * ___jcards4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishXocDia(System.Int32,System.Int32,System.Int32)
extern "C"  void ThisPlayer_finishXocDia_m1031337162 (ThisPlayer_t4266992819 * __this, int32_t ___result0, int32_t ___agwin1, int32_t ___ag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishPoker(System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishPoker_m884091039 (ThisPlayer_t4266992819 * __this, int32_t ___s0, int32_t ___ag1, int32_t ___winnings2, JSONArray_t3986483147 * ___jcards3, JSONArray_t3986483147 * ___jcardsWin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishXiTo(System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishXiTo_m2665479862 (ThisPlayer_t4266992819 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishLieng(System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishLieng_m1577896329 (ThisPlayer_t4266992819 * __this, int32_t ___ag0, int32_t ___winnings1, JSONArray_t3986483147 * ___jcards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThisPlayer::getInHandCardsPosBinh(System.Int32)
extern "C"  Vector3_t2243707580  ThisPlayer_getInHandCardsPosBinh_m37296797 (ThisPlayer_t4266992819 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThisPlayer::getInHandCardsPosBinh(Card)
extern "C"  Vector3_t2243707580  ThisPlayer_getInHandCardsPosBinh_m633571262 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::finishBinh(System.Int32,System.Int32,System.Int32,SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_finishBinh_m3313530058 (ThisPlayer_t4266992819 * __this, int32_t ___v0, int32_t ___ag1, int32_t ___winnings2, JSONArray_t3986483147 * ___jcards3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::betXocDia(System.String,System.String)
extern "C"  void ThisPlayer_betXocDia_m4085830185 (ThisPlayer_t4266992819 * __this, String_t* ___money0, String_t* ___cua1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::sendLamCai()
extern "C"  void ThisPlayer_sendLamCai_m2254378757 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::bancua()
extern "C"  void ThisPlayer_bancua_m1092352654 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::muacua()
extern "C"  void ThisPlayer_muacua_m1769976394 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::unbetXocDia()
extern "C"  void ThisPlayer_unbetXocDia_m1934489142 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::huybancua()
extern "C"  void ThisPlayer_huybancua_m617732430 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::showCardsInHandByReconnectionTienLen(SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_showCardsInHandByReconnectionTienLen_m1657129552 (ThisPlayer_t4266992819 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::danhTaLa(Card,System.String,System.Int32)
extern "C"  void ThisPlayer_danhTaLa_m3122511188 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, String_t* ___nn1, int32_t ___jsonA2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::bocbaiTaLa(Card)
extern "C"  void ThisPlayer_bocbaiTaLa_m1158270084 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card ThisPlayer::anbaiTaLa(System.Int32)
extern "C"  Card_t34057406 * ThisPlayer_anbaiTaLa_m3315648577 (ThisPlayer_t4266992819 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::guibaiTaLa(System.String,System.Collections.Generic.List`1<Card>)
extern "C"  void ThisPlayer_guibaiTaLa_m1383577079 (ThisPlayer_t4266992819 * __this, String_t* ___player_nhan0, List_1_t3698145834 * ___cards_gui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::guibaiDummy(System.String,Card,System.Collections.Generic.List`1<Card>,System.Int32,System.Int32)
extern "C"  void ThisPlayer_guibaiDummy_m2097058551 (ThisPlayer_t4266992819 * __this, String_t* ___player_nhan0, Card_t34057406 * ___card1, List_1_t3698145834 * ___cards_gui2, int32_t ___CM3, int32_t ___NNCM4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::habaiTaLa(System.Collections.Generic.List`1<Card>)
extern "C"  void ThisPlayer_habaiTaLa_m676637783 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___cards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::hienbaitrentay_tala(SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_hienbaitrentay_tala_m3107425933 (ThisPlayer_t4266992819 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::initializeTaLaButtons()
extern "C"  void ThisPlayer_initializeTaLaButtons_m1216787519 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::onTurnTaLa(System.Int32)
extern "C"  void ThisPlayer_onTurnTaLa_m2069583887 (ThisPlayer_t4266992819 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_danhtala()
extern "C"  void ThisPlayer_send_danhtala_m3731020966 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_anbaitala(System.Int32)
extern "C"  void ThisPlayer_send_anbaitala_m3122951701 (ThisPlayer_t4266992819 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_habaitala()
extern "C"  void ThisPlayer_send_habaitala_m619072294 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_bocbaitala()
extern "C"  void ThisPlayer_send_bocbaitala_m2484420129 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_bocbaidummy()
extern "C"  void ThisPlayer_send_bocbaidummy_m1013650357 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_ungayDummy()
extern "C"  void ThisPlayer_send_ungayDummy_m938881569 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_habaitudong()
extern "C"  void ThisPlayer_send_habaitudong_m1350912517 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_guibaiTala()
extern "C"  void ThisPlayer_send_guibaiTala_m509674670 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::startGameChan(SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_startGameChan_m3569017289 (ThisPlayer_t4266992819 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::danhBaiChan(System.Int32,System.Int32,System.Int32,System.String,System.String)
extern "C"  void ThisPlayer_danhBaiChan_m3146794992 (ThisPlayer_t4266992819 * __this, int32_t ___t0, int32_t ___code1, int32_t ___mcode2, String_t* ___nname3, String_t* ___nd4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::anbaiChan(System.Int32,System.Int32,System.String)
extern "C"  void ThisPlayer_anbaiChan_m1589518617 (ThisPlayer_t4266992819 * __this, int32_t ___cc10, int32_t ___cc21, String_t* ___fname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::duoibaiChan(System.String,System.Int32)
extern "C"  void ThisPlayer_duoibaiChan_m1005807248 (ThisPlayer_t4266992819 * __this, String_t* ___nn0, int32_t ___acode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::habaiuChan(SimpleJSON.JSONArray,System.Int32,System.Int32,System.Int32)
extern "C"  void ThisPlayer_habaiuChan_m4036199474 (ThisPlayer_t4266992819 * __this, JSONArray_t3986483147 * ___jarr0, int32_t ___cc11, int32_t ___cc22, int32_t ___chiuu3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::showXuongU(System.Int32,System.Int32,System.Int32)
extern "C"  void ThisPlayer_showXuongU_m1547010690 (ThisPlayer_t4266992819 * __this, int32_t ___xcode0, int32_t ___tcode1, int32_t ___chiuu2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::kg(System.Int32,SimpleJSON.JSONArray,System.String,System.String,System.Int32)
extern "C"  void ThisPlayer_kg_m146204407 (ThisPlayer_t4266992819 * __this, int32_t ___m0, JSONArray_t3986483147 * ___arrMark1, String_t* ___C2, String_t* ___CC3, int32_t ___G4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::initializeDummyButtons()
extern "C"  void ThisPlayer_initializeDummyButtons_m1553025287 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_danhdummy()
extern "C"  void ThisPlayer_send_danhdummy_m461605180 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_guibaidummy()
extern "C"  void ThisPlayer_send_guibaidummy_m1307392088 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::send_habaidummy()
extern "C"  void ThisPlayer_send_habaidummy_m3923648860 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::chonguitudong_dummy(System.Boolean)
extern "C"  void ThisPlayer_chonguitudong_dummy_m1537465826 (ThisPlayer_t4266992819 * __this, bool ___notvalid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::autoselectgui_dummy(Card)
extern "C"  void ThisPlayer_autoselectgui_dummy_m209327361 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___xcard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::chonphomtudong_dummy(System.Boolean)
extern "C"  void ThisPlayer_chonphomtudong_dummy_m3742060205 (ThisPlayer_t4266992819 * __this, bool ___khongchonphomtrenban0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Card>> ThisPlayer::getlistPhomDummy(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3067266966 * ThisPlayer_getlistPhomDummy_m864329053 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___allcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::autoselectphom_dummy(Card)
extern "C"  void ThisPlayer_autoselectphom_dummy_m1738704332 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___onActionCard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ThisPlayer::socaychungnhau(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t ThisPlayer_socaychungnhau_m797989812 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___l10, List_1_t3698145834 * ___l21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ThisPlayer::socaykhacnhau(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t ThisPlayer_socaykhacnhau_m2169218482 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___l10, List_1_t3698145834 * ___l21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::nhacChonBaiDummy(Card)
extern "C"  void ThisPlayer_nhacChonBaiDummy_m3193241716 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___xcard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::nhacChonBaiDummy(System.Collections.Generic.List`1<Card>)
extern "C"  void ThisPlayer_nhacChonBaiDummy_m277420954 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___phom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::boChonBaiDummy(Card)
extern "C"  void ThisPlayer_boChonBaiDummy_m467502779 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::boChonBaiDummy(System.Collections.Generic.List`1<Card>)
extern "C"  void ThisPlayer_boChonBaiDummy_m2349422137 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___phom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::danhbaiDummy(Card,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  void ThisPlayer_danhbaiDummy_m47795282 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, String_t* ___nn1, int32_t ___jsonA2, int32_t ___M3, bool ___goiyan4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::bocbaiDummy(Card,System.Boolean)
extern "C"  void ThisPlayer_bocbaiDummy_m808931389 (ThisPlayer_t4266992819 * __this, Card_t34057406 * ___card0, bool ___goiyU1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::habaiDummy(System.Collections.Generic.List`1<Card>,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32,System.Boolean)
extern "C"  void ThisPlayer_habaiDummy_m3634687187 (ThisPlayer_t4266992819 * __this, List_1_t3698145834 * ___xcards0, int32_t ___CM1, int32_t ___M2, int32_t ___AT3, int32_t ___DT4, String_t* ___NN5, int32_t ___NNCM6, bool ___goiyan7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::kiemtrahaguiDummy(System.Boolean,System.Boolean)
extern "C"  void ThisPlayer_kiemtrahaguiDummy_m1307195005 (ThisPlayer_t4266992819 * __this, bool ___danh0, bool ___ungay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::hienbaitrentay_Dummy(SimpleJSON.JSONArray)
extern "C"  void ThisPlayer_hienbaitrentay_Dummy_m3108199613 (ThisPlayer_t4266992819 * __this, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTienlenButtons>m__0()
extern "C"  void ThisPlayer_U3CinitializeTienlenButtonsU3Em__0_m2354350209 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTienlenButtons>m__1()
extern "C"  void ThisPlayer_U3CinitializeTienlenButtonsU3Em__1_m3900231174 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTienlenButtons>m__2()
extern "C"  void ThisPlayer_U3CinitializeTienlenButtonsU3Em__2_m2072025207 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializePokerButtons>m__3()
extern "C"  void ThisPlayer_U3CinitializePokerButtonsU3Em__3_m224149382 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializePokerButtons>m__4()
extern "C"  void ThisPlayer_U3CinitializePokerButtonsU3Em__4_m2126260707 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializePokerButtons>m__5()
extern "C"  void ThisPlayer_U3CinitializePokerButtonsU3Em__5_m3672141672 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<onTurnPoker>m__6()
extern "C"  void ThisPlayer_U3ConTurnPokerU3Em__6_m3662799370 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<onTurnTienLen>m__7()
extern "C"  void ThisPlayer_U3ConTurnTienLenU3Em__7_m2029034623 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<finishPoker>m__8()
extern "C"  void ThisPlayer_U3CfinishPokerU3Em__8_m2943550813 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<finishXiTo>m__9()
extern "C"  void ThisPlayer_U3CfinishXiToU3Em__9_m3124482697 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<finishLieng>m__A()
extern "C"  void ThisPlayer_U3CfinishLiengU3Em__A_m1881335834 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTaLaButtons>m__B()
extern "C"  void ThisPlayer_U3CinitializeTaLaButtonsU3Em__B_m3768448118 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTaLaButtons>m__C()
extern "C"  void ThisPlayer_U3CinitializeTaLaButtonsU3Em__C_m3768448023 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTaLaButtons>m__D()
extern "C"  void ThisPlayer_U3CinitializeTaLaButtonsU3Em__D_m3768448052 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<initializeTaLaButtons>m__E()
extern "C"  void ThisPlayer_U3CinitializeTaLaButtonsU3Em__E_m3768447957 (ThisPlayer_t4266992819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThisPlayer::<kg>m__F(System.Object)
extern "C"  void ThisPlayer_U3CkgU3Em__F_m2897064145 (ThisPlayer_t4266992819 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ThisPlayer::<chonguitudong_dummy>m__10(Card,Card)
extern "C"  int32_t ThisPlayer_U3Cchonguitudong_dummyU3Em__10_m3163065091 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ThisPlayer::<getlistPhomDummy>m__11(Card,Card)
extern "C"  int32_t ThisPlayer_U3CgetlistPhomDummyU3Em__11_m2471390433 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ThisPlayer::<getlistPhomDummy>m__12(Card,Card)
extern "C"  int32_t ThisPlayer_U3CgetlistPhomDummyU3Em__12_m259641628 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
