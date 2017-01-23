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

// LeanTween
struct LeanTween_t4120592429;
// UnityEngine.Transform
struct Transform_t3275118058;
// LTDescr
struct LTDescr_t1981209097;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// LTRect
struct LTRect_t2720449186;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`1<UnityEngine.Color>
struct Action_1_t1822191457;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2045506962;
// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Action`1<LTEvent>
struct Action_1_t4121904138;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescr1981209097.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2720449186.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction3330578889.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void LeanTween::.ctor()
extern "C"  void LeanTween__ctor_m2286766920 (LeanTween_t4120592429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::init()
extern "C"  void LeanTween_init_m1492226228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_maxSearch()
extern "C"  int32_t LeanTween_get_maxSearch_m3746118999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::init(System.Int32)
extern "C"  void LeanTween_init_m1687645917 (Il2CppObject * __this /* static, unused */, int32_t ___maxSimultaneousTweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::reset()
extern "C"  void LeanTween_reset_m1803974395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::Update()
extern "C"  void LeanTween_Update_m2462043939 (LeanTween_t4120592429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::OnLevelWasLoaded(System.Int32)
extern "C"  void LeanTween_OnLevelWasLoaded_m3795409360 (LeanTween_t4120592429 * __this, int32_t ___lvl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::update()
extern "C"  void LeanTween_update_m2602356227 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::textAlphaRecursive(UnityEngine.Transform,System.Single)
extern "C"  void LeanTween_textAlphaRecursive_m2671637047 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color LeanTween::tweenColor(LTDescr,System.Single)
extern "C"  Color_t2020392075  LeanTween_tweenColor_m1737795185 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___tween0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::removeTween(System.Int32)
extern "C"  void LeanTween_removeTween_m1820660690 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] LeanTween::add(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t1172311765* LeanTween_add_m222532121 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t1172311765* ___a0, Vector3_t2243707580  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::closestRot(System.Single,System.Single)
extern "C"  float LeanTween_closestRot_m4114083626 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancelAll(System.Boolean)
extern "C"  void LeanTween_cancelAll_m831637292 (Il2CppObject * __this /* static, unused */, bool ___callComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject)
extern "C"  void LeanTween_cancel_m580802590 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_cancel_m1834097329 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(LTRect,System.Int32)
extern "C"  void LeanTween_cancel_m642117041 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(System.Int32)
extern "C"  void LeanTween_cancel_m1373345009 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::description(System.Int32)
extern "C"  LTDescr_t1981209097 * LeanTween_description_m1518385221 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_pause_m1096773629 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(System.Int32)
extern "C"  void LeanTween_pause_m1234742309 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(UnityEngine.GameObject)
extern "C"  void LeanTween_pause_m2229345500 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pauseAll()
extern "C"  void LeanTween_pauseAll_m3506291965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resumeAll()
extern "C"  void LeanTween_resumeAll_m2086577494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_resume_m4202197446 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(System.Int32)
extern "C"  void LeanTween_resume_m4202038060 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(UnityEngine.GameObject)
extern "C"  void LeanTween_resume_m1146477287 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(UnityEngine.GameObject)
extern "C"  bool LeanTween_isTweening_m1326684509 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(System.Int32)
extern "C"  bool LeanTween_isTweening_m1856326388 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(LTRect)
extern "C"  bool LeanTween_isTweening_m989988701 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::drawBezierPath(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void LeanTween_drawBezierPath_m3539184450 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, Vector3_t2243707580  ___c2, Vector3_t2243707580  ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LeanTween::logError(System.String)
extern "C"  Il2CppObject * LeanTween_logError_m2398006145 (Il2CppObject * __this /* static, unused */, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::options(LTDescr)
extern "C"  LTDescr_t1981209097 * LeanTween_options_m1840159945 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::options()
extern "C"  LTDescr_t1981209097 * LeanTween_options_m3780802848 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LeanTween::get_tweenEmpty()
extern "C"  GameObject_t1756533147 * LeanTween_get_tweenEmpty_m685139536 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::pushNewTween(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,TweenAction,LTDescr)
extern "C"  LTDescr_t1981209097 * LeanTween_pushNewTween_m3390969625 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, int32_t ___tweenAction3, LTDescr_t1981209097 * ___tween4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::play(UnityEngine.RectTransform,UnityEngine.Sprite[])
extern "C"  LTDescr_t1981209097 * LeanTween_play_m3004989177 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, SpriteU5BU5D_t3359083662* ___sprites1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alpha_m3696543496 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(LTRect,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alpha_m1718708364 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::textAlpha(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_textAlpha_m1316344922 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaVertex(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alphaVertex_m3119812730 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::color(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_color_m2855160250 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::textColor(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_textColor_m3259100234 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(System.Single,System.Action)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m3555525088 (Il2CppObject * __this /* static, unused */, float ___delayTime0, Action_t3226471752 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(System.Single,System.Action`1<System.Object>)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m638081789 (Il2CppObject * __this /* static, unused */, float ___delayTime0, Action_1_t2491248677 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m4062660604 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___delayTime1, Action_t3226471752 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action`1<System.Object>)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m2726155885 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___delayTime1, Action_1_t2491248677 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::destroyAfter(LTRect,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_destroyAfter_m1097041433 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___rect0, float ___delayTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m1243449607 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m608182146 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m2041027481 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSpline(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveSpline_m4070527610 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSplineLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveSplineLocal_m1478354509 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m2374680422 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveMargin(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveMargin_m533119740 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveX_m3746372247 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveY_m1704722108 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveZ_m370585185 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocal_m1160780588 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocal_m3389397308 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocalX_m2192841450 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocalY_m3429524651 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocalZ_m2618774508 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m2321314171 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(LTRect,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m1646654635 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateLocal_m2623937278 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateX_m1767103859 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateY_m3808753998 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateZ_m2445455677 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAround(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAround_m3069466329 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___axis1, float ___add2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAroundLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAroundLocal_m259962414 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___axis1, float ___add2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scale_m1608118962 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scale_m1086762159 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scaleX_m1421414644 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scaleY_m3905865011 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scaleZ_m1601410546 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<System.Single>,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3212897811 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t1878309314 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Color>,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m693252918 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t1822191457 * ___callOnUpdate1, Color_t2020392075  ___from2, Color_t2020392075  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector2>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m4248219790 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t2045506961 * ___callOnUpdate1, Vector2_t2243707579  ___from2, Vector2_t2243707579  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector3>,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m2296459023 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t2045506962 * ___callOnUpdate1, Vector3_t2243707580  ___from2, Vector3_t2243707580  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`2<System.Single,System.Object>,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m922245050 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_2_t3829512412 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m65651838 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___from1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3984453022 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector2_t2243707579  ___from1, Vector2_t2243707579  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3182041374 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___from1, Vector3_t2243707580  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m1161573854 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Color_t2020392075  ___from1, Color_t2020392075  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedSound(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedSound_m1849732886 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audio0, Vector3_t2243707580  ___pos1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedSound(UnityEngine.GameObject,UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedSound_m3459953444 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, AudioClip_t1932558630 * ___audio1, Vector3_t2243707580  ___pos2, float ___volume3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m804865612 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m3052158786 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAround(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAround_m4128979314 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___axis1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAroundLocal(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAroundLocal_m3236748455 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___axis1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scale_m67298737 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alpha_m2079491101 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::color(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_color_m4135142263 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::tweenOnCurve(LTDescr,System.Single)
extern "C"  float LeanTween_tweenOnCurve_m3456542009 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___tweenDescr0, float ___ratioPassed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LeanTween::tweenOnCurveVector(LTDescr,System.Single)
extern "C"  Vector3_t2243707580  LeanTween_tweenOnCurveVector_m231324132 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___tweenDescr0, float ___ratioPassed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuadOpt_m3337783583 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuadOpt_m3617369574 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuadOpt_m4288345370 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::linear(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_linear_m2354680466 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::clerp(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_clerp_m2172416337 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::spring(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_spring_m1983630014 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuad_m1743496121 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuad_m1121491688 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuad_m3834919119 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInCubic_m1869320128 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutCubic_m1728463 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutCubic_m2343604800 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuart_m2681373515 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuart_m1703338478 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuart_m1831955309 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuint_m1464523879 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuint_m2885140050 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuint_m3174936977 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInSine_m2096828677 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutSine_m450372398 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutSine_m1510889411 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInExpo_m3051485414 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutExpo_m2407085231 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutExpo_m439042126 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInCirc_m2651784111 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutCirc_m266871996 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutCirc_m3428952393 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInBounce_m1714733210 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutBounce_m906676429 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutBounce_m2926609602 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInBack(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInBack_m2000877183 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutBack(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutBack_m140324620 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutBack(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutBack_m2747465625 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInElastic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInElastic_m281554245 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutElastic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutElastic_m463907566 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutElastic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutElastic_m2508773839 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::addListener(System.Int32,System.Action`1<LTEvent>)
extern "C"  void LeanTween_addListener_m1922617822 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Action_1_t4121904138 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::addListener(UnityEngine.GameObject,System.Int32,System.Action`1<LTEvent>)
extern "C"  void LeanTween_addListener_m3204191068 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___caller0, int32_t ___eventId1, Action_1_t4121904138 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::removeListener(System.Int32,System.Action`1<LTEvent>)
extern "C"  bool LeanTween_removeListener_m302194213 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Action_1_t4121904138 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::removeListener(UnityEngine.GameObject,System.Int32,System.Action`1<LTEvent>)
extern "C"  bool LeanTween_removeListener_m795613393 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___caller0, int32_t ___eventId1, Action_1_t4121904138 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::dispatchEvent(System.Int32)
extern "C"  void LeanTween_dispatchEvent_m1256428499 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::dispatchEvent(System.Int32,System.Object)
extern "C"  void LeanTween_dispatchEvent_m2489973849 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::.cctor()
extern "C"  void LeanTween__cctor_m656028717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
