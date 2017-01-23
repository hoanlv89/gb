#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LTDescr[]
struct LTDescrU5BU5D_t1682978740;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// LTDescr
struct LTDescr_t1981209097;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Action`1<LTEvent>[]
struct Action_1U5BU5D_t2680260751;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction3330578889.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTween
struct  LeanTween_t4120592429  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct LeanTween_t4120592429_StaticFields
{
public:
	// System.Boolean LeanTween::throwErrors
	bool ___throwErrors_2;
	// System.Single LeanTween::tau
	float ___tau_3;
	// LTDescr[] LeanTween::tweens
	LTDescrU5BU5D_t1682978740* ___tweens_4;
	// System.Int32[] LeanTween::tweensFinished
	Int32U5BU5D_t3030399641* ___tweensFinished_5;
	// LTDescr LeanTween::tween
	LTDescr_t1981209097 * ___tween_6;
	// System.Int32 LeanTween::tweenMaxSearch
	int32_t ___tweenMaxSearch_7;
	// System.Int32 LeanTween::maxTweens
	int32_t ___maxTweens_8;
	// System.Int32 LeanTween::frameRendered
	int32_t ___frameRendered_9;
	// UnityEngine.GameObject LeanTween::_tweenEmpty
	GameObject_t1756533147 * ____tweenEmpty_10;
	// System.Single LeanTween::dtEstimated
	float ___dtEstimated_11;
	// System.Single LeanTween::dtManual
	float ___dtManual_12;
	// System.Single LeanTween::previousRealTime
	float ___previousRealTime_13;
	// System.Single LeanTween::dt
	float ___dt_14;
	// System.Single LeanTween::dtActual
	float ___dtActual_15;
	// System.Int32 LeanTween::i
	int32_t ___i_16;
	// System.Int32 LeanTween::j
	int32_t ___j_17;
	// System.Int32 LeanTween::finishedCnt
	int32_t ___finishedCnt_18;
	// UnityEngine.AnimationCurve LeanTween::punch
	AnimationCurve_t3306541151 * ___punch_19;
	// UnityEngine.AnimationCurve LeanTween::shake
	AnimationCurve_t3306541151 * ___shake_20;
	// UnityEngine.Transform LeanTween::trans
	Transform_t3275118058 * ___trans_21;
	// System.Single LeanTween::timeTotal
	float ___timeTotal_22;
	// TweenAction LeanTween::tweenAction
	int32_t ___tweenAction_23;
	// System.Single LeanTween::ratioPassed
	float ___ratioPassed_24;
	// System.Single LeanTween::from
	float ___from_25;
	// System.Single LeanTween::val
	float ___val_26;
	// System.Boolean LeanTween::isTweenFinished
	bool ___isTweenFinished_27;
	// System.Int32 LeanTween::maxTweenReached
	int32_t ___maxTweenReached_28;
	// UnityEngine.Vector3 LeanTween::newVect
	Vector3_t2243707580  ___newVect_29;
	// UnityEngine.GameObject LeanTween::target
	GameObject_t1756533147 * ___target_30;
	// UnityEngine.GameObject LeanTween::customTarget
	GameObject_t1756533147 * ___customTarget_31;
	// System.Int32 LeanTween::startSearch
	int32_t ___startSearch_32;
	// LTDescr LeanTween::descr
	LTDescr_t1981209097 * ___descr_33;
	// System.Action`1<LTEvent>[] LeanTween::eventListeners
	Action_1U5BU5D_t2680260751* ___eventListeners_34;
	// UnityEngine.GameObject[] LeanTween::goListeners
	GameObjectU5BU5D_t3057952154* ___goListeners_35;
	// System.Int32 LeanTween::eventsMaxSearch
	int32_t ___eventsMaxSearch_36;
	// System.Int32 LeanTween::EVENTS_MAX
	int32_t ___EVENTS_MAX_37;
	// System.Int32 LeanTween::LISTENERS_MAX
	int32_t ___LISTENERS_MAX_38;
	// System.Int32 LeanTween::INIT_LISTENERS_MAX
	int32_t ___INIT_LISTENERS_MAX_39;

public:
	inline static int32_t get_offset_of_throwErrors_2() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___throwErrors_2)); }
	inline bool get_throwErrors_2() const { return ___throwErrors_2; }
	inline bool* get_address_of_throwErrors_2() { return &___throwErrors_2; }
	inline void set_throwErrors_2(bool value)
	{
		___throwErrors_2 = value;
	}

	inline static int32_t get_offset_of_tau_3() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tau_3)); }
	inline float get_tau_3() const { return ___tau_3; }
	inline float* get_address_of_tau_3() { return &___tau_3; }
	inline void set_tau_3(float value)
	{
		___tau_3 = value;
	}

	inline static int32_t get_offset_of_tweens_4() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweens_4)); }
	inline LTDescrU5BU5D_t1682978740* get_tweens_4() const { return ___tweens_4; }
	inline LTDescrU5BU5D_t1682978740** get_address_of_tweens_4() { return &___tweens_4; }
	inline void set_tweens_4(LTDescrU5BU5D_t1682978740* value)
	{
		___tweens_4 = value;
		Il2CppCodeGenWriteBarrier(&___tweens_4, value);
	}

	inline static int32_t get_offset_of_tweensFinished_5() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweensFinished_5)); }
	inline Int32U5BU5D_t3030399641* get_tweensFinished_5() const { return ___tweensFinished_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_tweensFinished_5() { return &___tweensFinished_5; }
	inline void set_tweensFinished_5(Int32U5BU5D_t3030399641* value)
	{
		___tweensFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___tweensFinished_5, value);
	}

	inline static int32_t get_offset_of_tween_6() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tween_6)); }
	inline LTDescr_t1981209097 * get_tween_6() const { return ___tween_6; }
	inline LTDescr_t1981209097 ** get_address_of_tween_6() { return &___tween_6; }
	inline void set_tween_6(LTDescr_t1981209097 * value)
	{
		___tween_6 = value;
		Il2CppCodeGenWriteBarrier(&___tween_6, value);
	}

	inline static int32_t get_offset_of_tweenMaxSearch_7() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweenMaxSearch_7)); }
	inline int32_t get_tweenMaxSearch_7() const { return ___tweenMaxSearch_7; }
	inline int32_t* get_address_of_tweenMaxSearch_7() { return &___tweenMaxSearch_7; }
	inline void set_tweenMaxSearch_7(int32_t value)
	{
		___tweenMaxSearch_7 = value;
	}

	inline static int32_t get_offset_of_maxTweens_8() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___maxTweens_8)); }
	inline int32_t get_maxTweens_8() const { return ___maxTweens_8; }
	inline int32_t* get_address_of_maxTweens_8() { return &___maxTweens_8; }
	inline void set_maxTweens_8(int32_t value)
	{
		___maxTweens_8 = value;
	}

	inline static int32_t get_offset_of_frameRendered_9() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___frameRendered_9)); }
	inline int32_t get_frameRendered_9() const { return ___frameRendered_9; }
	inline int32_t* get_address_of_frameRendered_9() { return &___frameRendered_9; }
	inline void set_frameRendered_9(int32_t value)
	{
		___frameRendered_9 = value;
	}

	inline static int32_t get_offset_of__tweenEmpty_10() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ____tweenEmpty_10)); }
	inline GameObject_t1756533147 * get__tweenEmpty_10() const { return ____tweenEmpty_10; }
	inline GameObject_t1756533147 ** get_address_of__tweenEmpty_10() { return &____tweenEmpty_10; }
	inline void set__tweenEmpty_10(GameObject_t1756533147 * value)
	{
		____tweenEmpty_10 = value;
		Il2CppCodeGenWriteBarrier(&____tweenEmpty_10, value);
	}

	inline static int32_t get_offset_of_dtEstimated_11() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dtEstimated_11)); }
	inline float get_dtEstimated_11() const { return ___dtEstimated_11; }
	inline float* get_address_of_dtEstimated_11() { return &___dtEstimated_11; }
	inline void set_dtEstimated_11(float value)
	{
		___dtEstimated_11 = value;
	}

	inline static int32_t get_offset_of_dtManual_12() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dtManual_12)); }
	inline float get_dtManual_12() const { return ___dtManual_12; }
	inline float* get_address_of_dtManual_12() { return &___dtManual_12; }
	inline void set_dtManual_12(float value)
	{
		___dtManual_12 = value;
	}

	inline static int32_t get_offset_of_previousRealTime_13() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___previousRealTime_13)); }
	inline float get_previousRealTime_13() const { return ___previousRealTime_13; }
	inline float* get_address_of_previousRealTime_13() { return &___previousRealTime_13; }
	inline void set_previousRealTime_13(float value)
	{
		___previousRealTime_13 = value;
	}

	inline static int32_t get_offset_of_dt_14() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dt_14)); }
	inline float get_dt_14() const { return ___dt_14; }
	inline float* get_address_of_dt_14() { return &___dt_14; }
	inline void set_dt_14(float value)
	{
		___dt_14 = value;
	}

	inline static int32_t get_offset_of_dtActual_15() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dtActual_15)); }
	inline float get_dtActual_15() const { return ___dtActual_15; }
	inline float* get_address_of_dtActual_15() { return &___dtActual_15; }
	inline void set_dtActual_15(float value)
	{
		___dtActual_15 = value;
	}

	inline static int32_t get_offset_of_i_16() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___i_16)); }
	inline int32_t get_i_16() const { return ___i_16; }
	inline int32_t* get_address_of_i_16() { return &___i_16; }
	inline void set_i_16(int32_t value)
	{
		___i_16 = value;
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}

	inline static int32_t get_offset_of_finishedCnt_18() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___finishedCnt_18)); }
	inline int32_t get_finishedCnt_18() const { return ___finishedCnt_18; }
	inline int32_t* get_address_of_finishedCnt_18() { return &___finishedCnt_18; }
	inline void set_finishedCnt_18(int32_t value)
	{
		___finishedCnt_18 = value;
	}

	inline static int32_t get_offset_of_punch_19() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___punch_19)); }
	inline AnimationCurve_t3306541151 * get_punch_19() const { return ___punch_19; }
	inline AnimationCurve_t3306541151 ** get_address_of_punch_19() { return &___punch_19; }
	inline void set_punch_19(AnimationCurve_t3306541151 * value)
	{
		___punch_19 = value;
		Il2CppCodeGenWriteBarrier(&___punch_19, value);
	}

	inline static int32_t get_offset_of_shake_20() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___shake_20)); }
	inline AnimationCurve_t3306541151 * get_shake_20() const { return ___shake_20; }
	inline AnimationCurve_t3306541151 ** get_address_of_shake_20() { return &___shake_20; }
	inline void set_shake_20(AnimationCurve_t3306541151 * value)
	{
		___shake_20 = value;
		Il2CppCodeGenWriteBarrier(&___shake_20, value);
	}

	inline static int32_t get_offset_of_trans_21() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___trans_21)); }
	inline Transform_t3275118058 * get_trans_21() const { return ___trans_21; }
	inline Transform_t3275118058 ** get_address_of_trans_21() { return &___trans_21; }
	inline void set_trans_21(Transform_t3275118058 * value)
	{
		___trans_21 = value;
		Il2CppCodeGenWriteBarrier(&___trans_21, value);
	}

	inline static int32_t get_offset_of_timeTotal_22() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___timeTotal_22)); }
	inline float get_timeTotal_22() const { return ___timeTotal_22; }
	inline float* get_address_of_timeTotal_22() { return &___timeTotal_22; }
	inline void set_timeTotal_22(float value)
	{
		___timeTotal_22 = value;
	}

	inline static int32_t get_offset_of_tweenAction_23() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweenAction_23)); }
	inline int32_t get_tweenAction_23() const { return ___tweenAction_23; }
	inline int32_t* get_address_of_tweenAction_23() { return &___tweenAction_23; }
	inline void set_tweenAction_23(int32_t value)
	{
		___tweenAction_23 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_24() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___ratioPassed_24)); }
	inline float get_ratioPassed_24() const { return ___ratioPassed_24; }
	inline float* get_address_of_ratioPassed_24() { return &___ratioPassed_24; }
	inline void set_ratioPassed_24(float value)
	{
		___ratioPassed_24 = value;
	}

	inline static int32_t get_offset_of_from_25() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___from_25)); }
	inline float get_from_25() const { return ___from_25; }
	inline float* get_address_of_from_25() { return &___from_25; }
	inline void set_from_25(float value)
	{
		___from_25 = value;
	}

	inline static int32_t get_offset_of_val_26() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___val_26)); }
	inline float get_val_26() const { return ___val_26; }
	inline float* get_address_of_val_26() { return &___val_26; }
	inline void set_val_26(float value)
	{
		___val_26 = value;
	}

	inline static int32_t get_offset_of_isTweenFinished_27() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___isTweenFinished_27)); }
	inline bool get_isTweenFinished_27() const { return ___isTweenFinished_27; }
	inline bool* get_address_of_isTweenFinished_27() { return &___isTweenFinished_27; }
	inline void set_isTweenFinished_27(bool value)
	{
		___isTweenFinished_27 = value;
	}

	inline static int32_t get_offset_of_maxTweenReached_28() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___maxTweenReached_28)); }
	inline int32_t get_maxTweenReached_28() const { return ___maxTweenReached_28; }
	inline int32_t* get_address_of_maxTweenReached_28() { return &___maxTweenReached_28; }
	inline void set_maxTweenReached_28(int32_t value)
	{
		___maxTweenReached_28 = value;
	}

	inline static int32_t get_offset_of_newVect_29() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___newVect_29)); }
	inline Vector3_t2243707580  get_newVect_29() const { return ___newVect_29; }
	inline Vector3_t2243707580 * get_address_of_newVect_29() { return &___newVect_29; }
	inline void set_newVect_29(Vector3_t2243707580  value)
	{
		___newVect_29 = value;
	}

	inline static int32_t get_offset_of_target_30() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___target_30)); }
	inline GameObject_t1756533147 * get_target_30() const { return ___target_30; }
	inline GameObject_t1756533147 ** get_address_of_target_30() { return &___target_30; }
	inline void set_target_30(GameObject_t1756533147 * value)
	{
		___target_30 = value;
		Il2CppCodeGenWriteBarrier(&___target_30, value);
	}

	inline static int32_t get_offset_of_customTarget_31() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___customTarget_31)); }
	inline GameObject_t1756533147 * get_customTarget_31() const { return ___customTarget_31; }
	inline GameObject_t1756533147 ** get_address_of_customTarget_31() { return &___customTarget_31; }
	inline void set_customTarget_31(GameObject_t1756533147 * value)
	{
		___customTarget_31 = value;
		Il2CppCodeGenWriteBarrier(&___customTarget_31, value);
	}

	inline static int32_t get_offset_of_startSearch_32() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___startSearch_32)); }
	inline int32_t get_startSearch_32() const { return ___startSearch_32; }
	inline int32_t* get_address_of_startSearch_32() { return &___startSearch_32; }
	inline void set_startSearch_32(int32_t value)
	{
		___startSearch_32 = value;
	}

	inline static int32_t get_offset_of_descr_33() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___descr_33)); }
	inline LTDescr_t1981209097 * get_descr_33() const { return ___descr_33; }
	inline LTDescr_t1981209097 ** get_address_of_descr_33() { return &___descr_33; }
	inline void set_descr_33(LTDescr_t1981209097 * value)
	{
		___descr_33 = value;
		Il2CppCodeGenWriteBarrier(&___descr_33, value);
	}

	inline static int32_t get_offset_of_eventListeners_34() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___eventListeners_34)); }
	inline Action_1U5BU5D_t2680260751* get_eventListeners_34() const { return ___eventListeners_34; }
	inline Action_1U5BU5D_t2680260751** get_address_of_eventListeners_34() { return &___eventListeners_34; }
	inline void set_eventListeners_34(Action_1U5BU5D_t2680260751* value)
	{
		___eventListeners_34 = value;
		Il2CppCodeGenWriteBarrier(&___eventListeners_34, value);
	}

	inline static int32_t get_offset_of_goListeners_35() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___goListeners_35)); }
	inline GameObjectU5BU5D_t3057952154* get_goListeners_35() const { return ___goListeners_35; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_goListeners_35() { return &___goListeners_35; }
	inline void set_goListeners_35(GameObjectU5BU5D_t3057952154* value)
	{
		___goListeners_35 = value;
		Il2CppCodeGenWriteBarrier(&___goListeners_35, value);
	}

	inline static int32_t get_offset_of_eventsMaxSearch_36() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___eventsMaxSearch_36)); }
	inline int32_t get_eventsMaxSearch_36() const { return ___eventsMaxSearch_36; }
	inline int32_t* get_address_of_eventsMaxSearch_36() { return &___eventsMaxSearch_36; }
	inline void set_eventsMaxSearch_36(int32_t value)
	{
		___eventsMaxSearch_36 = value;
	}

	inline static int32_t get_offset_of_EVENTS_MAX_37() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___EVENTS_MAX_37)); }
	inline int32_t get_EVENTS_MAX_37() const { return ___EVENTS_MAX_37; }
	inline int32_t* get_address_of_EVENTS_MAX_37() { return &___EVENTS_MAX_37; }
	inline void set_EVENTS_MAX_37(int32_t value)
	{
		___EVENTS_MAX_37 = value;
	}

	inline static int32_t get_offset_of_LISTENERS_MAX_38() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___LISTENERS_MAX_38)); }
	inline int32_t get_LISTENERS_MAX_38() const { return ___LISTENERS_MAX_38; }
	inline int32_t* get_address_of_LISTENERS_MAX_38() { return &___LISTENERS_MAX_38; }
	inline void set_LISTENERS_MAX_38(int32_t value)
	{
		___LISTENERS_MAX_38 = value;
	}

	inline static int32_t get_offset_of_INIT_LISTENERS_MAX_39() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___INIT_LISTENERS_MAX_39)); }
	inline int32_t get_INIT_LISTENERS_MAX_39() const { return ___INIT_LISTENERS_MAX_39; }
	inline int32_t* get_address_of_INIT_LISTENERS_MAX_39() { return &___INIT_LISTENERS_MAX_39; }
	inline void set_INIT_LISTENERS_MAX_39(int32_t value)
	{
		___INIT_LISTENERS_MAX_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
