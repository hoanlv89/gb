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

// LTDescr
struct LTDescr_t1981209097;
// System.String
struct String_t;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Object
struct Il2CppObject;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2045506962;
// System.Action`1<UnityEngine.Color>
struct Action_1_t1822191457;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t129729484;
// LTRect
struct LTRect_t2720449186;
// LTBezierPath
struct LTBezierPath_t292484408;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanTweenType1294766541.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2720449186.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTBezierPath292484408.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void LTDescr::.ctor()
extern "C"  void LTDescr__ctor_m2535972698 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LTDescr::ToString()
extern "C"  String_t* LTDescr_ToString_m4257958137 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::cancel()
extern "C"  LTDescr_t1981209097 * LTDescr_cancel_m1206280 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescr::get_uniqueId()
extern "C"  int32_t LTDescr_get_uniqueId_m1206727283 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescr::get_id()
extern "C"  int32_t LTDescr_get_id_m3337101710 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::reset()
extern "C"  void LTDescr_reset_m802726295 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::init()
extern "C"  void LTDescr_init_m3972815750 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFromColor(UnityEngine.Color)
extern "C"  LTDescr_t1981209097 * LTDescr_setFromColor_m1465010305 (LTDescr_t1981209097 * __this, Color_t2020392075  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::pause()
extern "C"  LTDescr_t1981209097 * LTDescr_pause_m3839038682 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::resume()
extern "C"  LTDescr_t1981209097 * LTDescr_resume_m423070019 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setAxis(UnityEngine.Vector3)
extern "C"  LTDescr_t1981209097 * LTDescr_setAxis_m922113582 (LTDescr_t1981209097 * __this, Vector3_t2243707580  ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDelay(System.Single)
extern "C"  LTDescr_t1981209097 * LTDescr_setDelay_m186059618 (LTDescr_t1981209097 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEase(LeanTweenType)
extern "C"  LTDescr_t1981209097 * LTDescr_setEase_m1097569 (LTDescr_t1981209097 * __this, int32_t ___easeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEase(UnityEngine.AnimationCurve)
extern "C"  LTDescr_t1981209097 * LTDescr_setEase_m3362044576 (LTDescr_t1981209097 * __this, AnimationCurve_t3306541151 * ___easeCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTo(UnityEngine.Vector3)
extern "C"  LTDescr_t1981209097 * LTDescr_setTo_m321921542 (LTDescr_t1981209097 * __this, Vector3_t2243707580  ___to0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFrom(UnityEngine.Vector3)
extern "C"  LTDescr_t1981209097 * LTDescr_setFrom_m2110979987 (LTDescr_t1981209097 * __this, Vector3_t2243707580  ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFrom(System.Single)
extern "C"  LTDescr_t1981209097 * LTDescr_setFrom_m1572125639 (LTDescr_t1981209097 * __this, float ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDiff(UnityEngine.Vector3)
extern "C"  LTDescr_t1981209097 * LTDescr_setDiff_m1467923512 (LTDescr_t1981209097 * __this, Vector3_t2243707580  ___diff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setHasInitialized(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setHasInitialized_m3164447545 (LTDescr_t1981209097 * __this, bool ___has0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setId(System.UInt32)
extern "C"  LTDescr_t1981209097 * LTDescr_setId_m3174017781 (LTDescr_t1981209097 * __this, uint32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTime(System.Single)
extern "C"  LTDescr_t1981209097 * LTDescr_setTime_m119527074 (LTDescr_t1981209097 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRepeat(System.Int32)
extern "C"  LTDescr_t1981209097 * LTDescr_setRepeat_m503932702 (LTDescr_t1981209097 * __this, int32_t ___repeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopType(LeanTweenType)
extern "C"  LTDescr_t1981209097 * LTDescr_setLoopType_m2244178255 (LTDescr_t1981209097 * __this, int32_t ___loopType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setUseEstimatedTime(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setUseEstimatedTime_m3214089395 (LTDescr_t1981209097 * __this, bool ___useEstimatedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setUseFrames(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setUseFrames_m865807522 (LTDescr_t1981209097 * __this, bool ___useFrames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setUseManualTime(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setUseManualTime_m1176713223 (LTDescr_t1981209097 * __this, bool ___useManualTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopCount(System.Int32)
extern "C"  LTDescr_t1981209097 * LTDescr_setLoopCount_m2405985934 (LTDescr_t1981209097 * __this, int32_t ___loopCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopOnce()
extern "C"  LTDescr_t1981209097 * LTDescr_setLoopOnce_m1421598387 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopClamp()
extern "C"  LTDescr_t1981209097 * LTDescr_setLoopClamp_m2204559011 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopPingPong()
extern "C"  LTDescr_t1981209097 * LTDescr_setLoopPingPong_m2440045600 (LTDescr_t1981209097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnComplete(System.Action)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnComplete_m1990127429 (LTDescr_t1981209097 * __this, Action_t3226471752 * ___onComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnComplete(System.Action`1<System.Object>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnComplete_m3285667066 (LTDescr_t1981209097 * __this, Action_1_t2491248677 * ___onComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnComplete(System.Action`1<System.Object>,System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnComplete_m1097258976 (LTDescr_t1981209097 * __this, Action_1_t2491248677 * ___onComplete0, Il2CppObject * ___onCompleteParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnCompleteParam(System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnCompleteParam_m2423164305 (LTDescr_t1981209097 * __this, Il2CppObject * ___onCompleteParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<System.Single>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdate_m2679069535 (LTDescr_t1981209097 * __this, Action_1_t1878309314 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateObject(System.Action`2<System.Single,System.Object>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdateObject_m4110658587 (LTDescr_t1981209097 * __this, Action_2_t3829512412 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateVector2(System.Action`1<UnityEngine.Vector2>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdateVector2_m3557586073 (LTDescr_t1981209097 * __this, Action_1_t2045506961 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateVector3(System.Action`1<UnityEngine.Vector3>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdateVector3_m3808614297 (LTDescr_t1981209097 * __this, Action_1_t2045506962 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateColor(System.Action`1<UnityEngine.Color>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdateColor_m2223126553 (LTDescr_t1981209097 * __this, Action_1_t1822191457 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Color>)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdate_m1055583192 (LTDescr_t1981209097 * __this, Action_1_t1822191457 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`2<System.Single,System.Object>,System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdate_m139363906 (LTDescr_t1981209097 * __this, Action_2_t3829512412 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`2<UnityEngine.Vector3,System.Object>,System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdate_m2819033410 (LTDescr_t1981209097 * __this, Action_2_t129729484 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Vector2>,System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdate_m1157542182 (LTDescr_t1981209097 * __this, Action_1_t2045506961 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Vector3>,System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdate_m1060202241 (LTDescr_t1981209097 * __this, Action_1_t2045506962 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateParam(System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnUpdateParam_m378582073 (LTDescr_t1981209097 * __this, Il2CppObject * ___onUpdateParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOrientToPath(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setOrientToPath_m3580965802 (LTDescr_t1981209097 * __this, bool ___doesOrient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOrientToPath2d(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setOrientToPath2d_m928181708 (LTDescr_t1981209097 * __this, bool ___doesOrient2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRect(LTRect)
extern "C"  LTDescr_t1981209097 * LTDescr_setRect_m2893788032 (LTDescr_t1981209097 * __this, LTRect_t2720449186 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRect(UnityEngine.Rect)
extern "C"  LTDescr_t1981209097 * LTDescr_setRect_m3518782179 (LTDescr_t1981209097 * __this, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setPath(LTBezierPath)
extern "C"  LTDescr_t1981209097 * LTDescr_setPath_m2793491107 (LTDescr_t1981209097 * __this, LTBezierPath_t292484408 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setPoint(UnityEngine.Vector3)
extern "C"  LTDescr_t1981209097 * LTDescr_setPoint_m1070931029 (LTDescr_t1981209097 * __this, Vector3_t2243707580  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDestroyOnComplete(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setDestroyOnComplete_m1729355693 (LTDescr_t1981209097 * __this, bool ___doesDestroy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setAudio(System.Object)
extern "C"  LTDescr_t1981209097 * LTDescr_setAudio_m1365087940 (LTDescr_t1981209097 * __this, Il2CppObject * ___audio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnCompleteOnRepeat(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnCompleteOnRepeat_m2182842445 (LTDescr_t1981209097 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnCompleteOnStart(System.Boolean)
extern "C"  LTDescr_t1981209097 * LTDescr_setOnCompleteOnStart_m748949830 (LTDescr_t1981209097 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRect(UnityEngine.RectTransform)
extern "C"  LTDescr_t1981209097 * LTDescr_setRect_m2318493035 (LTDescr_t1981209097 * __this, RectTransform_t3349966182 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setSprites(UnityEngine.Sprite[])
extern "C"  LTDescr_t1981209097 * LTDescr_setSprites_m2110950434 (LTDescr_t1981209097 * __this, SpriteU5BU5D_t3359083662* ___sprites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFrameRate(System.Single)
extern "C"  LTDescr_t1981209097 * LTDescr_setFrameRate_m3876084950 (LTDescr_t1981209097 * __this, float ___frameRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::.cctor()
extern "C"  void LTDescr__cctor_m3060329877 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
