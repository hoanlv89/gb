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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.Raptor
struct  Raptor_t1447352684  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Examples.Raptor::walk
	String_t* ___walk_2;
	// System.String Spine.Unity.Examples.Raptor::gungrab
	String_t* ___gungrab_3;
	// System.String Spine.Unity.Examples.Raptor::gunkeep
	String_t* ___gunkeep_4;
	// System.String Spine.Unity.Examples.Raptor::footstepEvent
	String_t* ___footstepEvent_5;
	// UnityEngine.AudioSource Spine.Unity.Examples.Raptor::footstepAudioSource
	AudioSource_t1135106623 * ___footstepAudioSource_6;
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.Raptor::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_7;

public:
	inline static int32_t get_offset_of_walk_2() { return static_cast<int32_t>(offsetof(Raptor_t1447352684, ___walk_2)); }
	inline String_t* get_walk_2() const { return ___walk_2; }
	inline String_t** get_address_of_walk_2() { return &___walk_2; }
	inline void set_walk_2(String_t* value)
	{
		___walk_2 = value;
		Il2CppCodeGenWriteBarrier(&___walk_2, value);
	}

	inline static int32_t get_offset_of_gungrab_3() { return static_cast<int32_t>(offsetof(Raptor_t1447352684, ___gungrab_3)); }
	inline String_t* get_gungrab_3() const { return ___gungrab_3; }
	inline String_t** get_address_of_gungrab_3() { return &___gungrab_3; }
	inline void set_gungrab_3(String_t* value)
	{
		___gungrab_3 = value;
		Il2CppCodeGenWriteBarrier(&___gungrab_3, value);
	}

	inline static int32_t get_offset_of_gunkeep_4() { return static_cast<int32_t>(offsetof(Raptor_t1447352684, ___gunkeep_4)); }
	inline String_t* get_gunkeep_4() const { return ___gunkeep_4; }
	inline String_t** get_address_of_gunkeep_4() { return &___gunkeep_4; }
	inline void set_gunkeep_4(String_t* value)
	{
		___gunkeep_4 = value;
		Il2CppCodeGenWriteBarrier(&___gunkeep_4, value);
	}

	inline static int32_t get_offset_of_footstepEvent_5() { return static_cast<int32_t>(offsetof(Raptor_t1447352684, ___footstepEvent_5)); }
	inline String_t* get_footstepEvent_5() const { return ___footstepEvent_5; }
	inline String_t** get_address_of_footstepEvent_5() { return &___footstepEvent_5; }
	inline void set_footstepEvent_5(String_t* value)
	{
		___footstepEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___footstepEvent_5, value);
	}

	inline static int32_t get_offset_of_footstepAudioSource_6() { return static_cast<int32_t>(offsetof(Raptor_t1447352684, ___footstepAudioSource_6)); }
	inline AudioSource_t1135106623 * get_footstepAudioSource_6() const { return ___footstepAudioSource_6; }
	inline AudioSource_t1135106623 ** get_address_of_footstepAudioSource_6() { return &___footstepAudioSource_6; }
	inline void set_footstepAudioSource_6(AudioSource_t1135106623 * value)
	{
		___footstepAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___footstepAudioSource_6, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_7() { return static_cast<int32_t>(offsetof(Raptor_t1447352684, ___skeletonAnimation_7)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_7() const { return ___skeletonAnimation_7; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_7() { return &___skeletonAnimation_7; }
	inline void set_skeletonAnimation_7(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_7 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
