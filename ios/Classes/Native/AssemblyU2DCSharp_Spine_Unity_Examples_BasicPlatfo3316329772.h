#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.BasicPlatformerController
struct  BasicPlatformerController_t3316329772  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Examples.BasicPlatformerController::XAxis
	String_t* ___XAxis_2;
	// System.String Spine.Unity.Examples.BasicPlatformerController::YAxis
	String_t* ___YAxis_3;
	// System.String Spine.Unity.Examples.BasicPlatformerController::JumpButton
	String_t* ___JumpButton_4;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::walkSpeed
	float ___walkSpeed_5;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::runSpeed
	float ___runSpeed_6;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::gravity
	float ___gravity_7;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::jumpSpeed
	float ___jumpSpeed_8;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::jumpDuration
	float ___jumpDuration_9;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::jumpInterruptFactor
	float ___jumpInterruptFactor_10;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::forceCrouchVelocity
	float ___forceCrouchVelocity_11;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::forceCrouchDuration
	float ___forceCrouchDuration_12;
	// UnityEngine.Transform Spine.Unity.Examples.BasicPlatformerController::graphicsRoot
	Transform_t3275118058 * ___graphicsRoot_13;
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.BasicPlatformerController::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_14;
	// System.String Spine.Unity.Examples.BasicPlatformerController::walkName
	String_t* ___walkName_15;
	// System.String Spine.Unity.Examples.BasicPlatformerController::runName
	String_t* ___runName_16;
	// System.String Spine.Unity.Examples.BasicPlatformerController::idleName
	String_t* ___idleName_17;
	// System.String Spine.Unity.Examples.BasicPlatformerController::jumpName
	String_t* ___jumpName_18;
	// System.String Spine.Unity.Examples.BasicPlatformerController::fallName
	String_t* ___fallName_19;
	// System.String Spine.Unity.Examples.BasicPlatformerController::crouchName
	String_t* ___crouchName_20;
	// UnityEngine.AudioSource Spine.Unity.Examples.BasicPlatformerController::jumpAudioSource
	AudioSource_t1135106623 * ___jumpAudioSource_21;
	// UnityEngine.AudioSource Spine.Unity.Examples.BasicPlatformerController::hardfallAudioSource
	AudioSource_t1135106623 * ___hardfallAudioSource_22;
	// UnityEngine.AudioSource Spine.Unity.Examples.BasicPlatformerController::footstepAudioSource
	AudioSource_t1135106623 * ___footstepAudioSource_23;
	// System.String Spine.Unity.Examples.BasicPlatformerController::footstepEventName
	String_t* ___footstepEventName_24;
	// UnityEngine.CharacterController Spine.Unity.Examples.BasicPlatformerController::controller
	CharacterController_t4094781467 * ___controller_25;
	// UnityEngine.Vector2 Spine.Unity.Examples.BasicPlatformerController::velocity
	Vector2_t2243707579  ___velocity_26;
	// UnityEngine.Vector2 Spine.Unity.Examples.BasicPlatformerController::lastVelocity
	Vector2_t2243707579  ___lastVelocity_27;
	// System.Boolean Spine.Unity.Examples.BasicPlatformerController::lastGrounded
	bool ___lastGrounded_28;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::jumpEndTime
	float ___jumpEndTime_29;
	// System.Boolean Spine.Unity.Examples.BasicPlatformerController::jumpInterrupt
	bool ___jumpInterrupt_30;
	// System.Single Spine.Unity.Examples.BasicPlatformerController::forceCrouchEndTime
	float ___forceCrouchEndTime_31;
	// UnityEngine.Quaternion Spine.Unity.Examples.BasicPlatformerController::flippedRotation
	Quaternion_t4030073918  ___flippedRotation_32;

public:
	inline static int32_t get_offset_of_XAxis_2() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___XAxis_2)); }
	inline String_t* get_XAxis_2() const { return ___XAxis_2; }
	inline String_t** get_address_of_XAxis_2() { return &___XAxis_2; }
	inline void set_XAxis_2(String_t* value)
	{
		___XAxis_2 = value;
		Il2CppCodeGenWriteBarrier(&___XAxis_2, value);
	}

	inline static int32_t get_offset_of_YAxis_3() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___YAxis_3)); }
	inline String_t* get_YAxis_3() const { return ___YAxis_3; }
	inline String_t** get_address_of_YAxis_3() { return &___YAxis_3; }
	inline void set_YAxis_3(String_t* value)
	{
		___YAxis_3 = value;
		Il2CppCodeGenWriteBarrier(&___YAxis_3, value);
	}

	inline static int32_t get_offset_of_JumpButton_4() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___JumpButton_4)); }
	inline String_t* get_JumpButton_4() const { return ___JumpButton_4; }
	inline String_t** get_address_of_JumpButton_4() { return &___JumpButton_4; }
	inline void set_JumpButton_4(String_t* value)
	{
		___JumpButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___JumpButton_4, value);
	}

	inline static int32_t get_offset_of_walkSpeed_5() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___walkSpeed_5)); }
	inline float get_walkSpeed_5() const { return ___walkSpeed_5; }
	inline float* get_address_of_walkSpeed_5() { return &___walkSpeed_5; }
	inline void set_walkSpeed_5(float value)
	{
		___walkSpeed_5 = value;
	}

	inline static int32_t get_offset_of_runSpeed_6() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___runSpeed_6)); }
	inline float get_runSpeed_6() const { return ___runSpeed_6; }
	inline float* get_address_of_runSpeed_6() { return &___runSpeed_6; }
	inline void set_runSpeed_6(float value)
	{
		___runSpeed_6 = value;
	}

	inline static int32_t get_offset_of_gravity_7() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___gravity_7)); }
	inline float get_gravity_7() const { return ___gravity_7; }
	inline float* get_address_of_gravity_7() { return &___gravity_7; }
	inline void set_gravity_7(float value)
	{
		___gravity_7 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_8() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpSpeed_8)); }
	inline float get_jumpSpeed_8() const { return ___jumpSpeed_8; }
	inline float* get_address_of_jumpSpeed_8() { return &___jumpSpeed_8; }
	inline void set_jumpSpeed_8(float value)
	{
		___jumpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_jumpDuration_9() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpDuration_9)); }
	inline float get_jumpDuration_9() const { return ___jumpDuration_9; }
	inline float* get_address_of_jumpDuration_9() { return &___jumpDuration_9; }
	inline void set_jumpDuration_9(float value)
	{
		___jumpDuration_9 = value;
	}

	inline static int32_t get_offset_of_jumpInterruptFactor_10() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpInterruptFactor_10)); }
	inline float get_jumpInterruptFactor_10() const { return ___jumpInterruptFactor_10; }
	inline float* get_address_of_jumpInterruptFactor_10() { return &___jumpInterruptFactor_10; }
	inline void set_jumpInterruptFactor_10(float value)
	{
		___jumpInterruptFactor_10 = value;
	}

	inline static int32_t get_offset_of_forceCrouchVelocity_11() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___forceCrouchVelocity_11)); }
	inline float get_forceCrouchVelocity_11() const { return ___forceCrouchVelocity_11; }
	inline float* get_address_of_forceCrouchVelocity_11() { return &___forceCrouchVelocity_11; }
	inline void set_forceCrouchVelocity_11(float value)
	{
		___forceCrouchVelocity_11 = value;
	}

	inline static int32_t get_offset_of_forceCrouchDuration_12() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___forceCrouchDuration_12)); }
	inline float get_forceCrouchDuration_12() const { return ___forceCrouchDuration_12; }
	inline float* get_address_of_forceCrouchDuration_12() { return &___forceCrouchDuration_12; }
	inline void set_forceCrouchDuration_12(float value)
	{
		___forceCrouchDuration_12 = value;
	}

	inline static int32_t get_offset_of_graphicsRoot_13() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___graphicsRoot_13)); }
	inline Transform_t3275118058 * get_graphicsRoot_13() const { return ___graphicsRoot_13; }
	inline Transform_t3275118058 ** get_address_of_graphicsRoot_13() { return &___graphicsRoot_13; }
	inline void set_graphicsRoot_13(Transform_t3275118058 * value)
	{
		___graphicsRoot_13 = value;
		Il2CppCodeGenWriteBarrier(&___graphicsRoot_13, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_14() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___skeletonAnimation_14)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_14() const { return ___skeletonAnimation_14; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_14() { return &___skeletonAnimation_14; }
	inline void set_skeletonAnimation_14(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_14 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_14, value);
	}

	inline static int32_t get_offset_of_walkName_15() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___walkName_15)); }
	inline String_t* get_walkName_15() const { return ___walkName_15; }
	inline String_t** get_address_of_walkName_15() { return &___walkName_15; }
	inline void set_walkName_15(String_t* value)
	{
		___walkName_15 = value;
		Il2CppCodeGenWriteBarrier(&___walkName_15, value);
	}

	inline static int32_t get_offset_of_runName_16() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___runName_16)); }
	inline String_t* get_runName_16() const { return ___runName_16; }
	inline String_t** get_address_of_runName_16() { return &___runName_16; }
	inline void set_runName_16(String_t* value)
	{
		___runName_16 = value;
		Il2CppCodeGenWriteBarrier(&___runName_16, value);
	}

	inline static int32_t get_offset_of_idleName_17() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___idleName_17)); }
	inline String_t* get_idleName_17() const { return ___idleName_17; }
	inline String_t** get_address_of_idleName_17() { return &___idleName_17; }
	inline void set_idleName_17(String_t* value)
	{
		___idleName_17 = value;
		Il2CppCodeGenWriteBarrier(&___idleName_17, value);
	}

	inline static int32_t get_offset_of_jumpName_18() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpName_18)); }
	inline String_t* get_jumpName_18() const { return ___jumpName_18; }
	inline String_t** get_address_of_jumpName_18() { return &___jumpName_18; }
	inline void set_jumpName_18(String_t* value)
	{
		___jumpName_18 = value;
		Il2CppCodeGenWriteBarrier(&___jumpName_18, value);
	}

	inline static int32_t get_offset_of_fallName_19() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___fallName_19)); }
	inline String_t* get_fallName_19() const { return ___fallName_19; }
	inline String_t** get_address_of_fallName_19() { return &___fallName_19; }
	inline void set_fallName_19(String_t* value)
	{
		___fallName_19 = value;
		Il2CppCodeGenWriteBarrier(&___fallName_19, value);
	}

	inline static int32_t get_offset_of_crouchName_20() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___crouchName_20)); }
	inline String_t* get_crouchName_20() const { return ___crouchName_20; }
	inline String_t** get_address_of_crouchName_20() { return &___crouchName_20; }
	inline void set_crouchName_20(String_t* value)
	{
		___crouchName_20 = value;
		Il2CppCodeGenWriteBarrier(&___crouchName_20, value);
	}

	inline static int32_t get_offset_of_jumpAudioSource_21() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpAudioSource_21)); }
	inline AudioSource_t1135106623 * get_jumpAudioSource_21() const { return ___jumpAudioSource_21; }
	inline AudioSource_t1135106623 ** get_address_of_jumpAudioSource_21() { return &___jumpAudioSource_21; }
	inline void set_jumpAudioSource_21(AudioSource_t1135106623 * value)
	{
		___jumpAudioSource_21 = value;
		Il2CppCodeGenWriteBarrier(&___jumpAudioSource_21, value);
	}

	inline static int32_t get_offset_of_hardfallAudioSource_22() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___hardfallAudioSource_22)); }
	inline AudioSource_t1135106623 * get_hardfallAudioSource_22() const { return ___hardfallAudioSource_22; }
	inline AudioSource_t1135106623 ** get_address_of_hardfallAudioSource_22() { return &___hardfallAudioSource_22; }
	inline void set_hardfallAudioSource_22(AudioSource_t1135106623 * value)
	{
		___hardfallAudioSource_22 = value;
		Il2CppCodeGenWriteBarrier(&___hardfallAudioSource_22, value);
	}

	inline static int32_t get_offset_of_footstepAudioSource_23() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___footstepAudioSource_23)); }
	inline AudioSource_t1135106623 * get_footstepAudioSource_23() const { return ___footstepAudioSource_23; }
	inline AudioSource_t1135106623 ** get_address_of_footstepAudioSource_23() { return &___footstepAudioSource_23; }
	inline void set_footstepAudioSource_23(AudioSource_t1135106623 * value)
	{
		___footstepAudioSource_23 = value;
		Il2CppCodeGenWriteBarrier(&___footstepAudioSource_23, value);
	}

	inline static int32_t get_offset_of_footstepEventName_24() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___footstepEventName_24)); }
	inline String_t* get_footstepEventName_24() const { return ___footstepEventName_24; }
	inline String_t** get_address_of_footstepEventName_24() { return &___footstepEventName_24; }
	inline void set_footstepEventName_24(String_t* value)
	{
		___footstepEventName_24 = value;
		Il2CppCodeGenWriteBarrier(&___footstepEventName_24, value);
	}

	inline static int32_t get_offset_of_controller_25() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___controller_25)); }
	inline CharacterController_t4094781467 * get_controller_25() const { return ___controller_25; }
	inline CharacterController_t4094781467 ** get_address_of_controller_25() { return &___controller_25; }
	inline void set_controller_25(CharacterController_t4094781467 * value)
	{
		___controller_25 = value;
		Il2CppCodeGenWriteBarrier(&___controller_25, value);
	}

	inline static int32_t get_offset_of_velocity_26() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___velocity_26)); }
	inline Vector2_t2243707579  get_velocity_26() const { return ___velocity_26; }
	inline Vector2_t2243707579 * get_address_of_velocity_26() { return &___velocity_26; }
	inline void set_velocity_26(Vector2_t2243707579  value)
	{
		___velocity_26 = value;
	}

	inline static int32_t get_offset_of_lastVelocity_27() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___lastVelocity_27)); }
	inline Vector2_t2243707579  get_lastVelocity_27() const { return ___lastVelocity_27; }
	inline Vector2_t2243707579 * get_address_of_lastVelocity_27() { return &___lastVelocity_27; }
	inline void set_lastVelocity_27(Vector2_t2243707579  value)
	{
		___lastVelocity_27 = value;
	}

	inline static int32_t get_offset_of_lastGrounded_28() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___lastGrounded_28)); }
	inline bool get_lastGrounded_28() const { return ___lastGrounded_28; }
	inline bool* get_address_of_lastGrounded_28() { return &___lastGrounded_28; }
	inline void set_lastGrounded_28(bool value)
	{
		___lastGrounded_28 = value;
	}

	inline static int32_t get_offset_of_jumpEndTime_29() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpEndTime_29)); }
	inline float get_jumpEndTime_29() const { return ___jumpEndTime_29; }
	inline float* get_address_of_jumpEndTime_29() { return &___jumpEndTime_29; }
	inline void set_jumpEndTime_29(float value)
	{
		___jumpEndTime_29 = value;
	}

	inline static int32_t get_offset_of_jumpInterrupt_30() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___jumpInterrupt_30)); }
	inline bool get_jumpInterrupt_30() const { return ___jumpInterrupt_30; }
	inline bool* get_address_of_jumpInterrupt_30() { return &___jumpInterrupt_30; }
	inline void set_jumpInterrupt_30(bool value)
	{
		___jumpInterrupt_30 = value;
	}

	inline static int32_t get_offset_of_forceCrouchEndTime_31() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___forceCrouchEndTime_31)); }
	inline float get_forceCrouchEndTime_31() const { return ___forceCrouchEndTime_31; }
	inline float* get_address_of_forceCrouchEndTime_31() { return &___forceCrouchEndTime_31; }
	inline void set_forceCrouchEndTime_31(float value)
	{
		___forceCrouchEndTime_31 = value;
	}

	inline static int32_t get_offset_of_flippedRotation_32() { return static_cast<int32_t>(offsetof(BasicPlatformerController_t3316329772, ___flippedRotation_32)); }
	inline Quaternion_t4030073918  get_flippedRotation_32() const { return ___flippedRotation_32; }
	inline Quaternion_t4030073918 * get_address_of_flippedRotation_32() { return &___flippedRotation_32; }
	inline void set_flippedRotation_32(Quaternion_t4030073918  value)
	{
		___flippedRotation_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
