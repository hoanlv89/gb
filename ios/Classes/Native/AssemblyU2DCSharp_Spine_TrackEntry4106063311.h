#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Animation
struct Animation_t4237671184;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.ExposedList`1<System.Boolean>
struct ExposedList_1_t2882476658;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t1133411872;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TrackEntry
struct  TrackEntry_t4106063311  : public Il2CppObject
{
public:
	// Spine.Animation Spine.TrackEntry::animation
	Animation_t4237671184 * ___animation_0;
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_t4106063311 * ___next_1;
	// Spine.TrackEntry Spine.TrackEntry::mixingFrom
	TrackEntry_t4106063311 * ___mixingFrom_2;
	// System.Int32 Spine.TrackEntry::trackIndex
	int32_t ___trackIndex_3;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_4;
	// System.Single Spine.TrackEntry::eventThreshold
	float ___eventThreshold_5;
	// System.Single Spine.TrackEntry::attachmentThreshold
	float ___attachmentThreshold_6;
	// System.Single Spine.TrackEntry::drawOrderThreshold
	float ___drawOrderThreshold_7;
	// System.Single Spine.TrackEntry::animationStart
	float ___animationStart_8;
	// System.Single Spine.TrackEntry::animationEnd
	float ___animationEnd_9;
	// System.Single Spine.TrackEntry::animationLast
	float ___animationLast_10;
	// System.Single Spine.TrackEntry::nextAnimationLast
	float ___nextAnimationLast_11;
	// System.Single Spine.TrackEntry::delay
	float ___delay_12;
	// System.Single Spine.TrackEntry::trackTime
	float ___trackTime_13;
	// System.Single Spine.TrackEntry::trackLast
	float ___trackLast_14;
	// System.Single Spine.TrackEntry::nextTrackLast
	float ___nextTrackLast_15;
	// System.Single Spine.TrackEntry::trackEnd
	float ___trackEnd_16;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_17;
	// System.Single Spine.TrackEntry::alpha
	float ___alpha_18;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_19;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_20;
	// System.Single Spine.TrackEntry::mixAlpha
	float ___mixAlpha_21;
	// Spine.ExposedList`1<System.Boolean> Spine.TrackEntry::timelinesFirst
	ExposedList_1_t2882476658 * ___timelinesFirst_22;
	// Spine.ExposedList`1<System.Single> Spine.TrackEntry::timelinesRotation
	ExposedList_1_t1133411872 * ___timelinesRotation_23;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Interrupt
	TrackEntryDelegate_t737668607 * ___Interrupt_24;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::End
	TrackEntryDelegate_t737668607 * ___End_25;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Dispose
	TrackEntryDelegate_t737668607 * ___Dispose_26;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Complete
	TrackEntryDelegate_t737668607 * ___Complete_27;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Start
	TrackEntryDelegate_t737668607 * ___Start_28;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.TrackEntry::Event
	TrackEntryEventDelegate_t818460179 * ___Event_29;

public:
	inline static int32_t get_offset_of_animation_0() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___animation_0)); }
	inline Animation_t4237671184 * get_animation_0() const { return ___animation_0; }
	inline Animation_t4237671184 ** get_address_of_animation_0() { return &___animation_0; }
	inline void set_animation_0(Animation_t4237671184 * value)
	{
		___animation_0 = value;
		Il2CppCodeGenWriteBarrier(&___animation_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___next_1)); }
	inline TrackEntry_t4106063311 * get_next_1() const { return ___next_1; }
	inline TrackEntry_t4106063311 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(TrackEntry_t4106063311 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier(&___next_1, value);
	}

	inline static int32_t get_offset_of_mixingFrom_2() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___mixingFrom_2)); }
	inline TrackEntry_t4106063311 * get_mixingFrom_2() const { return ___mixingFrom_2; }
	inline TrackEntry_t4106063311 ** get_address_of_mixingFrom_2() { return &___mixingFrom_2; }
	inline void set_mixingFrom_2(TrackEntry_t4106063311 * value)
	{
		___mixingFrom_2 = value;
		Il2CppCodeGenWriteBarrier(&___mixingFrom_2, value);
	}

	inline static int32_t get_offset_of_trackIndex_3() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___trackIndex_3)); }
	inline int32_t get_trackIndex_3() const { return ___trackIndex_3; }
	inline int32_t* get_address_of_trackIndex_3() { return &___trackIndex_3; }
	inline void set_trackIndex_3(int32_t value)
	{
		___trackIndex_3 = value;
	}

	inline static int32_t get_offset_of_loop_4() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___loop_4)); }
	inline bool get_loop_4() const { return ___loop_4; }
	inline bool* get_address_of_loop_4() { return &___loop_4; }
	inline void set_loop_4(bool value)
	{
		___loop_4 = value;
	}

	inline static int32_t get_offset_of_eventThreshold_5() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___eventThreshold_5)); }
	inline float get_eventThreshold_5() const { return ___eventThreshold_5; }
	inline float* get_address_of_eventThreshold_5() { return &___eventThreshold_5; }
	inline void set_eventThreshold_5(float value)
	{
		___eventThreshold_5 = value;
	}

	inline static int32_t get_offset_of_attachmentThreshold_6() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___attachmentThreshold_6)); }
	inline float get_attachmentThreshold_6() const { return ___attachmentThreshold_6; }
	inline float* get_address_of_attachmentThreshold_6() { return &___attachmentThreshold_6; }
	inline void set_attachmentThreshold_6(float value)
	{
		___attachmentThreshold_6 = value;
	}

	inline static int32_t get_offset_of_drawOrderThreshold_7() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___drawOrderThreshold_7)); }
	inline float get_drawOrderThreshold_7() const { return ___drawOrderThreshold_7; }
	inline float* get_address_of_drawOrderThreshold_7() { return &___drawOrderThreshold_7; }
	inline void set_drawOrderThreshold_7(float value)
	{
		___drawOrderThreshold_7 = value;
	}

	inline static int32_t get_offset_of_animationStart_8() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___animationStart_8)); }
	inline float get_animationStart_8() const { return ___animationStart_8; }
	inline float* get_address_of_animationStart_8() { return &___animationStart_8; }
	inline void set_animationStart_8(float value)
	{
		___animationStart_8 = value;
	}

	inline static int32_t get_offset_of_animationEnd_9() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___animationEnd_9)); }
	inline float get_animationEnd_9() const { return ___animationEnd_9; }
	inline float* get_address_of_animationEnd_9() { return &___animationEnd_9; }
	inline void set_animationEnd_9(float value)
	{
		___animationEnd_9 = value;
	}

	inline static int32_t get_offset_of_animationLast_10() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___animationLast_10)); }
	inline float get_animationLast_10() const { return ___animationLast_10; }
	inline float* get_address_of_animationLast_10() { return &___animationLast_10; }
	inline void set_animationLast_10(float value)
	{
		___animationLast_10 = value;
	}

	inline static int32_t get_offset_of_nextAnimationLast_11() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___nextAnimationLast_11)); }
	inline float get_nextAnimationLast_11() const { return ___nextAnimationLast_11; }
	inline float* get_address_of_nextAnimationLast_11() { return &___nextAnimationLast_11; }
	inline void set_nextAnimationLast_11(float value)
	{
		___nextAnimationLast_11 = value;
	}

	inline static int32_t get_offset_of_delay_12() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___delay_12)); }
	inline float get_delay_12() const { return ___delay_12; }
	inline float* get_address_of_delay_12() { return &___delay_12; }
	inline void set_delay_12(float value)
	{
		___delay_12 = value;
	}

	inline static int32_t get_offset_of_trackTime_13() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___trackTime_13)); }
	inline float get_trackTime_13() const { return ___trackTime_13; }
	inline float* get_address_of_trackTime_13() { return &___trackTime_13; }
	inline void set_trackTime_13(float value)
	{
		___trackTime_13 = value;
	}

	inline static int32_t get_offset_of_trackLast_14() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___trackLast_14)); }
	inline float get_trackLast_14() const { return ___trackLast_14; }
	inline float* get_address_of_trackLast_14() { return &___trackLast_14; }
	inline void set_trackLast_14(float value)
	{
		___trackLast_14 = value;
	}

	inline static int32_t get_offset_of_nextTrackLast_15() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___nextTrackLast_15)); }
	inline float get_nextTrackLast_15() const { return ___nextTrackLast_15; }
	inline float* get_address_of_nextTrackLast_15() { return &___nextTrackLast_15; }
	inline void set_nextTrackLast_15(float value)
	{
		___nextTrackLast_15 = value;
	}

	inline static int32_t get_offset_of_trackEnd_16() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___trackEnd_16)); }
	inline float get_trackEnd_16() const { return ___trackEnd_16; }
	inline float* get_address_of_trackEnd_16() { return &___trackEnd_16; }
	inline void set_trackEnd_16(float value)
	{
		___trackEnd_16 = value;
	}

	inline static int32_t get_offset_of_timeScale_17() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___timeScale_17)); }
	inline float get_timeScale_17() const { return ___timeScale_17; }
	inline float* get_address_of_timeScale_17() { return &___timeScale_17; }
	inline void set_timeScale_17(float value)
	{
		___timeScale_17 = value;
	}

	inline static int32_t get_offset_of_alpha_18() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___alpha_18)); }
	inline float get_alpha_18() const { return ___alpha_18; }
	inline float* get_address_of_alpha_18() { return &___alpha_18; }
	inline void set_alpha_18(float value)
	{
		___alpha_18 = value;
	}

	inline static int32_t get_offset_of_mixTime_19() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___mixTime_19)); }
	inline float get_mixTime_19() const { return ___mixTime_19; }
	inline float* get_address_of_mixTime_19() { return &___mixTime_19; }
	inline void set_mixTime_19(float value)
	{
		___mixTime_19 = value;
	}

	inline static int32_t get_offset_of_mixDuration_20() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___mixDuration_20)); }
	inline float get_mixDuration_20() const { return ___mixDuration_20; }
	inline float* get_address_of_mixDuration_20() { return &___mixDuration_20; }
	inline void set_mixDuration_20(float value)
	{
		___mixDuration_20 = value;
	}

	inline static int32_t get_offset_of_mixAlpha_21() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___mixAlpha_21)); }
	inline float get_mixAlpha_21() const { return ___mixAlpha_21; }
	inline float* get_address_of_mixAlpha_21() { return &___mixAlpha_21; }
	inline void set_mixAlpha_21(float value)
	{
		___mixAlpha_21 = value;
	}

	inline static int32_t get_offset_of_timelinesFirst_22() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___timelinesFirst_22)); }
	inline ExposedList_1_t2882476658 * get_timelinesFirst_22() const { return ___timelinesFirst_22; }
	inline ExposedList_1_t2882476658 ** get_address_of_timelinesFirst_22() { return &___timelinesFirst_22; }
	inline void set_timelinesFirst_22(ExposedList_1_t2882476658 * value)
	{
		___timelinesFirst_22 = value;
		Il2CppCodeGenWriteBarrier(&___timelinesFirst_22, value);
	}

	inline static int32_t get_offset_of_timelinesRotation_23() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___timelinesRotation_23)); }
	inline ExposedList_1_t1133411872 * get_timelinesRotation_23() const { return ___timelinesRotation_23; }
	inline ExposedList_1_t1133411872 ** get_address_of_timelinesRotation_23() { return &___timelinesRotation_23; }
	inline void set_timelinesRotation_23(ExposedList_1_t1133411872 * value)
	{
		___timelinesRotation_23 = value;
		Il2CppCodeGenWriteBarrier(&___timelinesRotation_23, value);
	}

	inline static int32_t get_offset_of_Interrupt_24() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___Interrupt_24)); }
	inline TrackEntryDelegate_t737668607 * get_Interrupt_24() const { return ___Interrupt_24; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Interrupt_24() { return &___Interrupt_24; }
	inline void set_Interrupt_24(TrackEntryDelegate_t737668607 * value)
	{
		___Interrupt_24 = value;
		Il2CppCodeGenWriteBarrier(&___Interrupt_24, value);
	}

	inline static int32_t get_offset_of_End_25() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___End_25)); }
	inline TrackEntryDelegate_t737668607 * get_End_25() const { return ___End_25; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_End_25() { return &___End_25; }
	inline void set_End_25(TrackEntryDelegate_t737668607 * value)
	{
		___End_25 = value;
		Il2CppCodeGenWriteBarrier(&___End_25, value);
	}

	inline static int32_t get_offset_of_Dispose_26() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___Dispose_26)); }
	inline TrackEntryDelegate_t737668607 * get_Dispose_26() const { return ___Dispose_26; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Dispose_26() { return &___Dispose_26; }
	inline void set_Dispose_26(TrackEntryDelegate_t737668607 * value)
	{
		___Dispose_26 = value;
		Il2CppCodeGenWriteBarrier(&___Dispose_26, value);
	}

	inline static int32_t get_offset_of_Complete_27() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___Complete_27)); }
	inline TrackEntryDelegate_t737668607 * get_Complete_27() const { return ___Complete_27; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Complete_27() { return &___Complete_27; }
	inline void set_Complete_27(TrackEntryDelegate_t737668607 * value)
	{
		___Complete_27 = value;
		Il2CppCodeGenWriteBarrier(&___Complete_27, value);
	}

	inline static int32_t get_offset_of_Start_28() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___Start_28)); }
	inline TrackEntryDelegate_t737668607 * get_Start_28() const { return ___Start_28; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Start_28() { return &___Start_28; }
	inline void set_Start_28(TrackEntryDelegate_t737668607 * value)
	{
		___Start_28 = value;
		Il2CppCodeGenWriteBarrier(&___Start_28, value);
	}

	inline static int32_t get_offset_of_Event_29() { return static_cast<int32_t>(offsetof(TrackEntry_t4106063311, ___Event_29)); }
	inline TrackEntryEventDelegate_t818460179 * get_Event_29() const { return ___Event_29; }
	inline TrackEntryEventDelegate_t818460179 ** get_address_of_Event_29() { return &___Event_29; }
	inline void set_Event_29(TrackEntryEventDelegate_t818460179 * value)
	{
		___Event_29 = value;
		Il2CppCodeGenWriteBarrier(&___Event_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
