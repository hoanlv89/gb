#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// LTRect
struct LTRect_t2720449186;
// LTBezierPath
struct LTBezierPath_t292484408;
// LTSpline
struct LTSpline_t3159710915;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2045506962;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t129729484;
// System.Action`1<UnityEngine.Color>
struct Action_1_t1822191457;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Object
struct Il2CppObject;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction3330578889.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanTweenType1294766541.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr
struct  LTDescr_t1981209097  : public Il2CppObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_4;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_5;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_6;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_7;
	// System.Single LTDescr::passed
	float ___passed_8;
	// System.Single LTDescr::delay
	float ___delay_9;
	// System.Single LTDescr::time
	float ___time_10;
	// System.Single LTDescr::lastVal
	float ___lastVal_11;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_12;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_13;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_14;
	// System.Single LTDescr::direction
	float ___direction_15;
	// System.Single LTDescr::directionLast
	float ___directionLast_16;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_17;
	// UnityEngine.Transform LTDescr::trans
	Transform_t3275118058 * ___trans_18;
	// LTRect LTDescr::ltRect
	LTRect_t2720449186 * ___ltRect_19;
	// UnityEngine.Vector3 LTDescr::from
	Vector3_t2243707580  ___from_20;
	// UnityEngine.Vector3 LTDescr::to
	Vector3_t2243707580  ___to_21;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t2243707580  ___diff_22;
	// UnityEngine.Vector3 LTDescr::point
	Vector3_t2243707580  ___point_23;
	// UnityEngine.Vector3 LTDescr::axis
	Vector3_t2243707580  ___axis_24;
	// UnityEngine.Quaternion LTDescr::origRotation
	Quaternion_t4030073918  ___origRotation_25;
	// LTBezierPath LTDescr::path
	LTBezierPath_t292484408 * ___path_26;
	// LTSpline LTDescr::spline
	LTSpline_t3159710915 * ___spline_27;
	// TweenAction LTDescr::type
	int32_t ___type_28;
	// LeanTweenType LTDescr::tweenType
	int32_t ___tweenType_29;
	// UnityEngine.AnimationCurve LTDescr::animationCurve
	AnimationCurve_t3306541151 * ___animationCurve_30;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_31;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_32;
	// System.Action`1<System.Single> LTDescr::onUpdateFloat
	Action_1_t1878309314 * ___onUpdateFloat_33;
	// System.Action`2<System.Single,System.Object> LTDescr::onUpdateFloatObject
	Action_2_t3829512412 * ___onUpdateFloatObject_34;
	// System.Action`1<UnityEngine.Vector2> LTDescr::onUpdateVector2
	Action_1_t2045506961 * ___onUpdateVector2_35;
	// System.Action`1<UnityEngine.Vector3> LTDescr::onUpdateVector3
	Action_1_t2045506962 * ___onUpdateVector3_36;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescr::onUpdateVector3Object
	Action_2_t129729484 * ___onUpdateVector3Object_37;
	// System.Action`1<UnityEngine.Color> LTDescr::onUpdateColor
	Action_1_t1822191457 * ___onUpdateColor_38;
	// System.Action LTDescr::onComplete
	Action_t3226471752 * ___onComplete_39;
	// System.Action`1<System.Object> LTDescr::onCompleteObject
	Action_1_t2491248677 * ___onCompleteObject_40;
	// System.Object LTDescr::onCompleteParam
	Il2CppObject * ___onCompleteParam_41;
	// System.Object LTDescr::onUpdateParam
	Il2CppObject * ___onUpdateParam_42;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t3349966182 * ___rectTransform_43;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_t356221433 * ___uiText_44;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t2042527209 * ___uiImage_45;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_t3359083662* ___sprites_46;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_4() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasInitiliazed_4)); }
	inline bool get_hasInitiliazed_4() const { return ___hasInitiliazed_4; }
	inline bool* get_address_of_hasInitiliazed_4() { return &___hasInitiliazed_4; }
	inline void set_hasInitiliazed_4(bool value)
	{
		___hasInitiliazed_4 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_5() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasPhysics_5)); }
	inline bool get_hasPhysics_5() const { return ___hasPhysics_5; }
	inline bool* get_address_of_hasPhysics_5() { return &___hasPhysics_5; }
	inline void set_hasPhysics_5(bool value)
	{
		___hasPhysics_5 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_6() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onCompleteOnRepeat_6)); }
	inline bool get_onCompleteOnRepeat_6() const { return ___onCompleteOnRepeat_6; }
	inline bool* get_address_of_onCompleteOnRepeat_6() { return &___onCompleteOnRepeat_6; }
	inline void set_onCompleteOnRepeat_6(bool value)
	{
		___onCompleteOnRepeat_6 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_7() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onCompleteOnStart_7)); }
	inline bool get_onCompleteOnStart_7() const { return ___onCompleteOnStart_7; }
	inline bool* get_address_of_onCompleteOnStart_7() { return &___onCompleteOnStart_7; }
	inline void set_onCompleteOnStart_7(bool value)
	{
		___onCompleteOnStart_7 = value;
	}

	inline static int32_t get_offset_of_passed_8() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___passed_8)); }
	inline float get_passed_8() const { return ___passed_8; }
	inline float* get_address_of_passed_8() { return &___passed_8; }
	inline void set_passed_8(float value)
	{
		___passed_8 = value;
	}

	inline static int32_t get_offset_of_delay_9() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___delay_9)); }
	inline float get_delay_9() const { return ___delay_9; }
	inline float* get_address_of_delay_9() { return &___delay_9; }
	inline void set_delay_9(float value)
	{
		___delay_9 = value;
	}

	inline static int32_t get_offset_of_time_10() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___time_10)); }
	inline float get_time_10() const { return ___time_10; }
	inline float* get_address_of_time_10() { return &___time_10; }
	inline void set_time_10(float value)
	{
		___time_10 = value;
	}

	inline static int32_t get_offset_of_lastVal_11() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___lastVal_11)); }
	inline float get_lastVal_11() const { return ___lastVal_11; }
	inline float* get_address_of_lastVal_11() { return &___lastVal_11; }
	inline void set_lastVal_11(float value)
	{
		___lastVal_11 = value;
	}

	inline static int32_t get_offset_of__id_12() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ____id_12)); }
	inline uint32_t get__id_12() const { return ____id_12; }
	inline uint32_t* get_address_of__id_12() { return &____id_12; }
	inline void set__id_12(uint32_t value)
	{
		____id_12 = value;
	}

	inline static int32_t get_offset_of_loopCount_13() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___loopCount_13)); }
	inline int32_t get_loopCount_13() const { return ___loopCount_13; }
	inline int32_t* get_address_of_loopCount_13() { return &___loopCount_13; }
	inline void set_loopCount_13(int32_t value)
	{
		___loopCount_13 = value;
	}

	inline static int32_t get_offset_of_counter_14() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___counter_14)); }
	inline uint32_t get_counter_14() const { return ___counter_14; }
	inline uint32_t* get_address_of_counter_14() { return &___counter_14; }
	inline void set_counter_14(uint32_t value)
	{
		___counter_14 = value;
	}

	inline static int32_t get_offset_of_direction_15() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___direction_15)); }
	inline float get_direction_15() const { return ___direction_15; }
	inline float* get_address_of_direction_15() { return &___direction_15; }
	inline void set_direction_15(float value)
	{
		___direction_15 = value;
	}

	inline static int32_t get_offset_of_directionLast_16() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___directionLast_16)); }
	inline float get_directionLast_16() const { return ___directionLast_16; }
	inline float* get_address_of_directionLast_16() { return &___directionLast_16; }
	inline void set_directionLast_16(float value)
	{
		___directionLast_16 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_17() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___destroyOnComplete_17)); }
	inline bool get_destroyOnComplete_17() const { return ___destroyOnComplete_17; }
	inline bool* get_address_of_destroyOnComplete_17() { return &___destroyOnComplete_17; }
	inline void set_destroyOnComplete_17(bool value)
	{
		___destroyOnComplete_17 = value;
	}

	inline static int32_t get_offset_of_trans_18() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___trans_18)); }
	inline Transform_t3275118058 * get_trans_18() const { return ___trans_18; }
	inline Transform_t3275118058 ** get_address_of_trans_18() { return &___trans_18; }
	inline void set_trans_18(Transform_t3275118058 * value)
	{
		___trans_18 = value;
		Il2CppCodeGenWriteBarrier(&___trans_18, value);
	}

	inline static int32_t get_offset_of_ltRect_19() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___ltRect_19)); }
	inline LTRect_t2720449186 * get_ltRect_19() const { return ___ltRect_19; }
	inline LTRect_t2720449186 ** get_address_of_ltRect_19() { return &___ltRect_19; }
	inline void set_ltRect_19(LTRect_t2720449186 * value)
	{
		___ltRect_19 = value;
		Il2CppCodeGenWriteBarrier(&___ltRect_19, value);
	}

	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___from_20)); }
	inline Vector3_t2243707580  get_from_20() const { return ___from_20; }
	inline Vector3_t2243707580 * get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Vector3_t2243707580  value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___to_21)); }
	inline Vector3_t2243707580  get_to_21() const { return ___to_21; }
	inline Vector3_t2243707580 * get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Vector3_t2243707580  value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_diff_22() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___diff_22)); }
	inline Vector3_t2243707580  get_diff_22() const { return ___diff_22; }
	inline Vector3_t2243707580 * get_address_of_diff_22() { return &___diff_22; }
	inline void set_diff_22(Vector3_t2243707580  value)
	{
		___diff_22 = value;
	}

	inline static int32_t get_offset_of_point_23() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___point_23)); }
	inline Vector3_t2243707580  get_point_23() const { return ___point_23; }
	inline Vector3_t2243707580 * get_address_of_point_23() { return &___point_23; }
	inline void set_point_23(Vector3_t2243707580  value)
	{
		___point_23 = value;
	}

	inline static int32_t get_offset_of_axis_24() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___axis_24)); }
	inline Vector3_t2243707580  get_axis_24() const { return ___axis_24; }
	inline Vector3_t2243707580 * get_address_of_axis_24() { return &___axis_24; }
	inline void set_axis_24(Vector3_t2243707580  value)
	{
		___axis_24 = value;
	}

	inline static int32_t get_offset_of_origRotation_25() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___origRotation_25)); }
	inline Quaternion_t4030073918  get_origRotation_25() const { return ___origRotation_25; }
	inline Quaternion_t4030073918 * get_address_of_origRotation_25() { return &___origRotation_25; }
	inline void set_origRotation_25(Quaternion_t4030073918  value)
	{
		___origRotation_25 = value;
	}

	inline static int32_t get_offset_of_path_26() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___path_26)); }
	inline LTBezierPath_t292484408 * get_path_26() const { return ___path_26; }
	inline LTBezierPath_t292484408 ** get_address_of_path_26() { return &___path_26; }
	inline void set_path_26(LTBezierPath_t292484408 * value)
	{
		___path_26 = value;
		Il2CppCodeGenWriteBarrier(&___path_26, value);
	}

	inline static int32_t get_offset_of_spline_27() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___spline_27)); }
	inline LTSpline_t3159710915 * get_spline_27() const { return ___spline_27; }
	inline LTSpline_t3159710915 ** get_address_of_spline_27() { return &___spline_27; }
	inline void set_spline_27(LTSpline_t3159710915 * value)
	{
		___spline_27 = value;
		Il2CppCodeGenWriteBarrier(&___spline_27, value);
	}

	inline static int32_t get_offset_of_type_28() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___type_28)); }
	inline int32_t get_type_28() const { return ___type_28; }
	inline int32_t* get_address_of_type_28() { return &___type_28; }
	inline void set_type_28(int32_t value)
	{
		___type_28 = value;
	}

	inline static int32_t get_offset_of_tweenType_29() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___tweenType_29)); }
	inline int32_t get_tweenType_29() const { return ___tweenType_29; }
	inline int32_t* get_address_of_tweenType_29() { return &___tweenType_29; }
	inline void set_tweenType_29(int32_t value)
	{
		___tweenType_29 = value;
	}

	inline static int32_t get_offset_of_animationCurve_30() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___animationCurve_30)); }
	inline AnimationCurve_t3306541151 * get_animationCurve_30() const { return ___animationCurve_30; }
	inline AnimationCurve_t3306541151 ** get_address_of_animationCurve_30() { return &___animationCurve_30; }
	inline void set_animationCurve_30(AnimationCurve_t3306541151 * value)
	{
		___animationCurve_30 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_30, value);
	}

	inline static int32_t get_offset_of_loopType_31() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___loopType_31)); }
	inline int32_t get_loopType_31() const { return ___loopType_31; }
	inline int32_t* get_address_of_loopType_31() { return &___loopType_31; }
	inline void set_loopType_31(int32_t value)
	{
		___loopType_31 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_32() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasUpdateCallback_32)); }
	inline bool get_hasUpdateCallback_32() const { return ___hasUpdateCallback_32; }
	inline bool* get_address_of_hasUpdateCallback_32() { return &___hasUpdateCallback_32; }
	inline void set_hasUpdateCallback_32(bool value)
	{
		___hasUpdateCallback_32 = value;
	}

	inline static int32_t get_offset_of_onUpdateFloat_33() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateFloat_33)); }
	inline Action_1_t1878309314 * get_onUpdateFloat_33() const { return ___onUpdateFloat_33; }
	inline Action_1_t1878309314 ** get_address_of_onUpdateFloat_33() { return &___onUpdateFloat_33; }
	inline void set_onUpdateFloat_33(Action_1_t1878309314 * value)
	{
		___onUpdateFloat_33 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateFloat_33, value);
	}

	inline static int32_t get_offset_of_onUpdateFloatObject_34() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateFloatObject_34)); }
	inline Action_2_t3829512412 * get_onUpdateFloatObject_34() const { return ___onUpdateFloatObject_34; }
	inline Action_2_t3829512412 ** get_address_of_onUpdateFloatObject_34() { return &___onUpdateFloatObject_34; }
	inline void set_onUpdateFloatObject_34(Action_2_t3829512412 * value)
	{
		___onUpdateFloatObject_34 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateFloatObject_34, value);
	}

	inline static int32_t get_offset_of_onUpdateVector2_35() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateVector2_35)); }
	inline Action_1_t2045506961 * get_onUpdateVector2_35() const { return ___onUpdateVector2_35; }
	inline Action_1_t2045506961 ** get_address_of_onUpdateVector2_35() { return &___onUpdateVector2_35; }
	inline void set_onUpdateVector2_35(Action_1_t2045506961 * value)
	{
		___onUpdateVector2_35 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateVector2_35, value);
	}

	inline static int32_t get_offset_of_onUpdateVector3_36() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateVector3_36)); }
	inline Action_1_t2045506962 * get_onUpdateVector3_36() const { return ___onUpdateVector3_36; }
	inline Action_1_t2045506962 ** get_address_of_onUpdateVector3_36() { return &___onUpdateVector3_36; }
	inline void set_onUpdateVector3_36(Action_1_t2045506962 * value)
	{
		___onUpdateVector3_36 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateVector3_36, value);
	}

	inline static int32_t get_offset_of_onUpdateVector3Object_37() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateVector3Object_37)); }
	inline Action_2_t129729484 * get_onUpdateVector3Object_37() const { return ___onUpdateVector3Object_37; }
	inline Action_2_t129729484 ** get_address_of_onUpdateVector3Object_37() { return &___onUpdateVector3Object_37; }
	inline void set_onUpdateVector3Object_37(Action_2_t129729484 * value)
	{
		___onUpdateVector3Object_37 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateVector3Object_37, value);
	}

	inline static int32_t get_offset_of_onUpdateColor_38() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateColor_38)); }
	inline Action_1_t1822191457 * get_onUpdateColor_38() const { return ___onUpdateColor_38; }
	inline Action_1_t1822191457 ** get_address_of_onUpdateColor_38() { return &___onUpdateColor_38; }
	inline void set_onUpdateColor_38(Action_1_t1822191457 * value)
	{
		___onUpdateColor_38 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateColor_38, value);
	}

	inline static int32_t get_offset_of_onComplete_39() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onComplete_39)); }
	inline Action_t3226471752 * get_onComplete_39() const { return ___onComplete_39; }
	inline Action_t3226471752 ** get_address_of_onComplete_39() { return &___onComplete_39; }
	inline void set_onComplete_39(Action_t3226471752 * value)
	{
		___onComplete_39 = value;
		Il2CppCodeGenWriteBarrier(&___onComplete_39, value);
	}

	inline static int32_t get_offset_of_onCompleteObject_40() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onCompleteObject_40)); }
	inline Action_1_t2491248677 * get_onCompleteObject_40() const { return ___onCompleteObject_40; }
	inline Action_1_t2491248677 ** get_address_of_onCompleteObject_40() { return &___onCompleteObject_40; }
	inline void set_onCompleteObject_40(Action_1_t2491248677 * value)
	{
		___onCompleteObject_40 = value;
		Il2CppCodeGenWriteBarrier(&___onCompleteObject_40, value);
	}

	inline static int32_t get_offset_of_onCompleteParam_41() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onCompleteParam_41)); }
	inline Il2CppObject * get_onCompleteParam_41() const { return ___onCompleteParam_41; }
	inline Il2CppObject ** get_address_of_onCompleteParam_41() { return &___onCompleteParam_41; }
	inline void set_onCompleteParam_41(Il2CppObject * value)
	{
		___onCompleteParam_41 = value;
		Il2CppCodeGenWriteBarrier(&___onCompleteParam_41, value);
	}

	inline static int32_t get_offset_of_onUpdateParam_42() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onUpdateParam_42)); }
	inline Il2CppObject * get_onUpdateParam_42() const { return ___onUpdateParam_42; }
	inline Il2CppObject ** get_address_of_onUpdateParam_42() { return &___onUpdateParam_42; }
	inline void set_onUpdateParam_42(Il2CppObject * value)
	{
		___onUpdateParam_42 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateParam_42, value);
	}

	inline static int32_t get_offset_of_rectTransform_43() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___rectTransform_43)); }
	inline RectTransform_t3349966182 * get_rectTransform_43() const { return ___rectTransform_43; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_43() { return &___rectTransform_43; }
	inline void set_rectTransform_43(RectTransform_t3349966182 * value)
	{
		___rectTransform_43 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_43, value);
	}

	inline static int32_t get_offset_of_uiText_44() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___uiText_44)); }
	inline Text_t356221433 * get_uiText_44() const { return ___uiText_44; }
	inline Text_t356221433 ** get_address_of_uiText_44() { return &___uiText_44; }
	inline void set_uiText_44(Text_t356221433 * value)
	{
		___uiText_44 = value;
		Il2CppCodeGenWriteBarrier(&___uiText_44, value);
	}

	inline static int32_t get_offset_of_uiImage_45() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___uiImage_45)); }
	inline Image_t2042527209 * get_uiImage_45() const { return ___uiImage_45; }
	inline Image_t2042527209 ** get_address_of_uiImage_45() { return &___uiImage_45; }
	inline void set_uiImage_45(Image_t2042527209 * value)
	{
		___uiImage_45 = value;
		Il2CppCodeGenWriteBarrier(&___uiImage_45, value);
	}

	inline static int32_t get_offset_of_sprites_46() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___sprites_46)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_46() const { return ___sprites_46; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_46() { return &___sprites_46; }
	inline void set_sprites_46(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_46 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_46, value);
	}
};

struct LTDescr_t1981209097_StaticFields
{
public:
	// System.UInt32 LTDescr::global_counter
	uint32_t ___global_counter_47;

public:
	inline static int32_t get_offset_of_global_counter_47() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___global_counter_47)); }
	inline uint32_t get_global_counter_47() const { return ___global_counter_47; }
	inline uint32_t* get_address_of_global_counter_47() { return &___global_counter_47; }
	inline void set_global_counter_47(uint32_t value)
	{
		___global_counter_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
