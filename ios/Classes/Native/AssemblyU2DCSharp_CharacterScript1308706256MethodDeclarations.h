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

// CharacterScript
struct CharacterScript_t1308706256;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// Player
struct Player_t1147783557;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "AssemblyU2DCSharp_Player1147783557.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// System.Void CharacterScript::.ctor()
extern "C"  void CharacterScript__ctor_m2175527885 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::Start()
extern "C"  void CharacterScript_Start_m1923811669 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::updateVipView(System.Boolean)
extern "C"  void CharacterScript_updateVipView_m983218093 (CharacterScript_t1308706256 * __this, bool ___isvip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showEmo(UnityEngine.Sprite)
extern "C"  void CharacterScript_showEmo_m4214832603 (CharacterScript_t1308706256 * __this, Sprite_t309593783 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showEmoticon(System.Int32)
extern "C"  void CharacterScript_showEmoticon_m560726243 (CharacterScript_t1308706256 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showEmoticonPlayer(System.Int32,UnityEngine.RectTransform,Player)
extern "C"  void CharacterScript_showEmoticonPlayer_m886964596 (CharacterScript_t1308706256 * __this, int32_t ___i0, RectTransform_t3349966182 * ___rect1, Player_t1147783557 * ___player2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::FixedUpdate()
extern "C"  void CharacterScript_FixedUpdate_m378986368 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::setSelectedCharacter()
extern "C"  void CharacterScript_setSelectedCharacter_m109247491 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::countDown(System.Single)
extern "C"  void CharacterScript_countDown_m3781304021 (CharacterScript_t1308706256 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::countDownByRemaining(System.Single,System.Single)
extern "C"  void CharacterScript_countDownByRemaining_m2830293803 (CharacterScript_t1308706256 * __this, float ___countedAmount0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::stopCountDown()
extern "C"  void CharacterScript_stopCountDown_m3750884776 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::updateGoldViewAnimate(System.Int32,System.Int32,System.Single)
extern "C"  void CharacterScript_updateGoldViewAnimate_m1840684707 (CharacterScript_t1308706256 * __this, int32_t ___from0, int32_t ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showWinnerImage(System.String)
extern "C"  void CharacterScript_showWinnerImage_m2809885910 (CharacterScript_t1308706256 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showOtherImage(System.String)
extern "C"  void CharacterScript_showOtherImage_m1481263631 (CharacterScript_t1308706256 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showPokerHandImage(System.String)
extern "C"  void CharacterScript_showPokerHandImage_m3491980143 (CharacterScript_t1308706256 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::addChatContent(System.String,UnityEngine.Vector2)
extern "C"  void CharacterScript_addChatContent_m1606801417 (CharacterScript_t1308706256 * __this, String_t* ___content0, Vector2_t2243707579  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showPokerCards(System.Int32,System.Int32)
extern "C"  void CharacterScript_showPokerCards_m2765611214 (CharacterScript_t1308706256 * __this, int32_t ___icard10, int32_t ___icard21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showPokerCards(System.String)
extern "C"  void CharacterScript_showPokerCards_m3242398616 (CharacterScript_t1308706256 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::hidePokerCards()
extern "C"  void CharacterScript_hidePokerCards_m2684091865 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showBinhValue(UnityEngine.Vector2,System.String,UnityEngine.Color32)
extern "C"  void CharacterScript_showBinhValue_m1749556789 (CharacterScript_t1308706256 * __this, Vector2_t2243707579  ___vpos0, String_t* ___str1, Color32_t874517518  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::showAgPlus_Binh(System.Int32,UnityEngine.Vector2)
extern "C"  void CharacterScript_showAgPlus_Binh_m1521238853 (CharacterScript_t1308706256 * __this, int32_t ___count0, Vector2_t2243707579  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::show_win_xocdia()
extern "C"  void CharacterScript_show_win_xocdia_m3447595078 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::<Start>m__0(System.Single)
extern "C"  void CharacterScript_U3CStartU3Em__0_m4272971903 (CharacterScript_t1308706256 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::<showEmo>m__1()
extern "C"  void CharacterScript_U3CshowEmoU3Em__1_m1506238267 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::<showEmoticon>m__2()
extern "C"  void CharacterScript_U3CshowEmoticonU3Em__2_m329209959 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::<updateGoldViewAnimate>m__3(System.Single)
extern "C"  void CharacterScript_U3CupdateGoldViewAnimateU3Em__3_m1556722703 (CharacterScript_t1308706256 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterScript::<show_win_xocdia>m__4()
extern "C"  void CharacterScript_U3Cshow_win_xocdiaU3Em__4_m2050988453 (CharacterScript_t1308706256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
