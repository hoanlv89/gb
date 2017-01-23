#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.Examples.SpineboyBeginnerModel
struct SpineboyBeginnerModel_t590323670;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Spine_Unity_Examples_SpineBeginn1806817730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.SpineboyBeginnerView
struct  SpineboyBeginnerView_t4117029072  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.Examples.SpineboyBeginnerModel Spine.Unity.Examples.SpineboyBeginnerView::model
	SpineboyBeginnerModel_t590323670 * ___model_2;
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.SpineboyBeginnerView::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_3;
	// System.String Spine.Unity.Examples.SpineboyBeginnerView::run
	String_t* ___run_4;
	// System.String Spine.Unity.Examples.SpineboyBeginnerView::idle
	String_t* ___idle_5;
	// System.String Spine.Unity.Examples.SpineboyBeginnerView::shoot
	String_t* ___shoot_6;
	// System.String Spine.Unity.Examples.SpineboyBeginnerView::jump
	String_t* ___jump_7;
	// System.String Spine.Unity.Examples.SpineboyBeginnerView::footstepEventName
	String_t* ___footstepEventName_8;
	// System.Single Spine.Unity.Examples.SpineboyBeginnerView::footstepPitchOffset
	float ___footstepPitchOffset_9;
	// System.Single Spine.Unity.Examples.SpineboyBeginnerView::gunsoundPitchOffset
	float ___gunsoundPitchOffset_10;
	// UnityEngine.AudioSource Spine.Unity.Examples.SpineboyBeginnerView::footstepSource
	AudioSource_t1135106623 * ___footstepSource_11;
	// UnityEngine.AudioSource Spine.Unity.Examples.SpineboyBeginnerView::gunSource
	AudioSource_t1135106623 * ___gunSource_12;
	// UnityEngine.AudioSource Spine.Unity.Examples.SpineboyBeginnerView::jumpSource
	AudioSource_t1135106623 * ___jumpSource_13;
	// UnityEngine.ParticleSystem Spine.Unity.Examples.SpineboyBeginnerView::gunParticles
	ParticleSystem_t3394631041 * ___gunParticles_14;
	// Spine.Unity.Examples.SpineBeginnerBodyState Spine.Unity.Examples.SpineboyBeginnerView::previousViewState
	int32_t ___previousViewState_15;

public:
	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___model_2)); }
	inline SpineboyBeginnerModel_t590323670 * get_model_2() const { return ___model_2; }
	inline SpineboyBeginnerModel_t590323670 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(SpineboyBeginnerModel_t590323670 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_3() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___skeletonAnimation_3)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_3() const { return ___skeletonAnimation_3; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_3() { return &___skeletonAnimation_3; }
	inline void set_skeletonAnimation_3(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_3, value);
	}

	inline static int32_t get_offset_of_run_4() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___run_4)); }
	inline String_t* get_run_4() const { return ___run_4; }
	inline String_t** get_address_of_run_4() { return &___run_4; }
	inline void set_run_4(String_t* value)
	{
		___run_4 = value;
		Il2CppCodeGenWriteBarrier(&___run_4, value);
	}

	inline static int32_t get_offset_of_idle_5() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___idle_5)); }
	inline String_t* get_idle_5() const { return ___idle_5; }
	inline String_t** get_address_of_idle_5() { return &___idle_5; }
	inline void set_idle_5(String_t* value)
	{
		___idle_5 = value;
		Il2CppCodeGenWriteBarrier(&___idle_5, value);
	}

	inline static int32_t get_offset_of_shoot_6() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___shoot_6)); }
	inline String_t* get_shoot_6() const { return ___shoot_6; }
	inline String_t** get_address_of_shoot_6() { return &___shoot_6; }
	inline void set_shoot_6(String_t* value)
	{
		___shoot_6 = value;
		Il2CppCodeGenWriteBarrier(&___shoot_6, value);
	}

	inline static int32_t get_offset_of_jump_7() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___jump_7)); }
	inline String_t* get_jump_7() const { return ___jump_7; }
	inline String_t** get_address_of_jump_7() { return &___jump_7; }
	inline void set_jump_7(String_t* value)
	{
		___jump_7 = value;
		Il2CppCodeGenWriteBarrier(&___jump_7, value);
	}

	inline static int32_t get_offset_of_footstepEventName_8() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___footstepEventName_8)); }
	inline String_t* get_footstepEventName_8() const { return ___footstepEventName_8; }
	inline String_t** get_address_of_footstepEventName_8() { return &___footstepEventName_8; }
	inline void set_footstepEventName_8(String_t* value)
	{
		___footstepEventName_8 = value;
		Il2CppCodeGenWriteBarrier(&___footstepEventName_8, value);
	}

	inline static int32_t get_offset_of_footstepPitchOffset_9() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___footstepPitchOffset_9)); }
	inline float get_footstepPitchOffset_9() const { return ___footstepPitchOffset_9; }
	inline float* get_address_of_footstepPitchOffset_9() { return &___footstepPitchOffset_9; }
	inline void set_footstepPitchOffset_9(float value)
	{
		___footstepPitchOffset_9 = value;
	}

	inline static int32_t get_offset_of_gunsoundPitchOffset_10() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___gunsoundPitchOffset_10)); }
	inline float get_gunsoundPitchOffset_10() const { return ___gunsoundPitchOffset_10; }
	inline float* get_address_of_gunsoundPitchOffset_10() { return &___gunsoundPitchOffset_10; }
	inline void set_gunsoundPitchOffset_10(float value)
	{
		___gunsoundPitchOffset_10 = value;
	}

	inline static int32_t get_offset_of_footstepSource_11() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___footstepSource_11)); }
	inline AudioSource_t1135106623 * get_footstepSource_11() const { return ___footstepSource_11; }
	inline AudioSource_t1135106623 ** get_address_of_footstepSource_11() { return &___footstepSource_11; }
	inline void set_footstepSource_11(AudioSource_t1135106623 * value)
	{
		___footstepSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___footstepSource_11, value);
	}

	inline static int32_t get_offset_of_gunSource_12() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___gunSource_12)); }
	inline AudioSource_t1135106623 * get_gunSource_12() const { return ___gunSource_12; }
	inline AudioSource_t1135106623 ** get_address_of_gunSource_12() { return &___gunSource_12; }
	inline void set_gunSource_12(AudioSource_t1135106623 * value)
	{
		___gunSource_12 = value;
		Il2CppCodeGenWriteBarrier(&___gunSource_12, value);
	}

	inline static int32_t get_offset_of_jumpSource_13() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___jumpSource_13)); }
	inline AudioSource_t1135106623 * get_jumpSource_13() const { return ___jumpSource_13; }
	inline AudioSource_t1135106623 ** get_address_of_jumpSource_13() { return &___jumpSource_13; }
	inline void set_jumpSource_13(AudioSource_t1135106623 * value)
	{
		___jumpSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___jumpSource_13, value);
	}

	inline static int32_t get_offset_of_gunParticles_14() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___gunParticles_14)); }
	inline ParticleSystem_t3394631041 * get_gunParticles_14() const { return ___gunParticles_14; }
	inline ParticleSystem_t3394631041 ** get_address_of_gunParticles_14() { return &___gunParticles_14; }
	inline void set_gunParticles_14(ParticleSystem_t3394631041 * value)
	{
		___gunParticles_14 = value;
		Il2CppCodeGenWriteBarrier(&___gunParticles_14, value);
	}

	inline static int32_t get_offset_of_previousViewState_15() { return static_cast<int32_t>(offsetof(SpineboyBeginnerView_t4117029072, ___previousViewState_15)); }
	inline int32_t get_previousViewState_15() const { return ___previousViewState_15; }
	inline int32_t* get_address_of_previousViewState_15() { return &___previousViewState_15; }
	inline void set_previousViewState_15(int32_t value)
	{
		___previousViewState_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
