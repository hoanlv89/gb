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
// Spine.AnimationStateData
struct AnimationStateData_t3672895841;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3162965251;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;
// Spine.EventQueue
struct EventQueue_t3612440949;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t428500383;
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

// Spine.AnimationState
struct  AnimationState_t1491536497  : public Il2CppObject
{
public:
	// Spine.AnimationStateData Spine.AnimationState::data
	AnimationStateData_t3672895841 * ___data_1;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::tracks
	ExposedList_1_t3162965251 * ___tracks_2;
	// System.Collections.Generic.HashSet`1<System.Int32> Spine.AnimationState::propertyIDs
	HashSet_1_t405338302 * ___propertyIDs_3;
	// Spine.ExposedList`1<Spine.Event> Spine.AnimationState::events
	ExposedList_1_t876769054 * ___events_4;
	// Spine.EventQueue Spine.AnimationState::queue
	EventQueue_t3612440949 * ___queue_5;
	// System.Boolean Spine.AnimationState::animationsChanged
	bool ___animationsChanged_6;
	// System.Single Spine.AnimationState::timeScale
	float ___timeScale_7;
	// Spine.Pool`1<Spine.TrackEntry> Spine.AnimationState::trackEntryPool
	Pool_1_t428500383 * ___trackEntryPool_8;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Interrupt
	TrackEntryDelegate_t737668607 * ___Interrupt_9;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::End
	TrackEntryDelegate_t737668607 * ___End_10;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Dispose
	TrackEntryDelegate_t737668607 * ___Dispose_11;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Complete
	TrackEntryDelegate_t737668607 * ___Complete_12;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Start
	TrackEntryDelegate_t737668607 * ___Start_13;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.AnimationState::Event
	TrackEntryEventDelegate_t818460179 * ___Event_14;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___data_1)); }
	inline AnimationStateData_t3672895841 * get_data_1() const { return ___data_1; }
	inline AnimationStateData_t3672895841 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(AnimationStateData_t3672895841 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_tracks_2() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___tracks_2)); }
	inline ExposedList_1_t3162965251 * get_tracks_2() const { return ___tracks_2; }
	inline ExposedList_1_t3162965251 ** get_address_of_tracks_2() { return &___tracks_2; }
	inline void set_tracks_2(ExposedList_1_t3162965251 * value)
	{
		___tracks_2 = value;
		Il2CppCodeGenWriteBarrier(&___tracks_2, value);
	}

	inline static int32_t get_offset_of_propertyIDs_3() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___propertyIDs_3)); }
	inline HashSet_1_t405338302 * get_propertyIDs_3() const { return ___propertyIDs_3; }
	inline HashSet_1_t405338302 ** get_address_of_propertyIDs_3() { return &___propertyIDs_3; }
	inline void set_propertyIDs_3(HashSet_1_t405338302 * value)
	{
		___propertyIDs_3 = value;
		Il2CppCodeGenWriteBarrier(&___propertyIDs_3, value);
	}

	inline static int32_t get_offset_of_events_4() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___events_4)); }
	inline ExposedList_1_t876769054 * get_events_4() const { return ___events_4; }
	inline ExposedList_1_t876769054 ** get_address_of_events_4() { return &___events_4; }
	inline void set_events_4(ExposedList_1_t876769054 * value)
	{
		___events_4 = value;
		Il2CppCodeGenWriteBarrier(&___events_4, value);
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___queue_5)); }
	inline EventQueue_t3612440949 * get_queue_5() const { return ___queue_5; }
	inline EventQueue_t3612440949 ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(EventQueue_t3612440949 * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier(&___queue_5, value);
	}

	inline static int32_t get_offset_of_animationsChanged_6() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___animationsChanged_6)); }
	inline bool get_animationsChanged_6() const { return ___animationsChanged_6; }
	inline bool* get_address_of_animationsChanged_6() { return &___animationsChanged_6; }
	inline void set_animationsChanged_6(bool value)
	{
		___animationsChanged_6 = value;
	}

	inline static int32_t get_offset_of_timeScale_7() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___timeScale_7)); }
	inline float get_timeScale_7() const { return ___timeScale_7; }
	inline float* get_address_of_timeScale_7() { return &___timeScale_7; }
	inline void set_timeScale_7(float value)
	{
		___timeScale_7 = value;
	}

	inline static int32_t get_offset_of_trackEntryPool_8() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___trackEntryPool_8)); }
	inline Pool_1_t428500383 * get_trackEntryPool_8() const { return ___trackEntryPool_8; }
	inline Pool_1_t428500383 ** get_address_of_trackEntryPool_8() { return &___trackEntryPool_8; }
	inline void set_trackEntryPool_8(Pool_1_t428500383 * value)
	{
		___trackEntryPool_8 = value;
		Il2CppCodeGenWriteBarrier(&___trackEntryPool_8, value);
	}

	inline static int32_t get_offset_of_Interrupt_9() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Interrupt_9)); }
	inline TrackEntryDelegate_t737668607 * get_Interrupt_9() const { return ___Interrupt_9; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Interrupt_9() { return &___Interrupt_9; }
	inline void set_Interrupt_9(TrackEntryDelegate_t737668607 * value)
	{
		___Interrupt_9 = value;
		Il2CppCodeGenWriteBarrier(&___Interrupt_9, value);
	}

	inline static int32_t get_offset_of_End_10() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___End_10)); }
	inline TrackEntryDelegate_t737668607 * get_End_10() const { return ___End_10; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_End_10() { return &___End_10; }
	inline void set_End_10(TrackEntryDelegate_t737668607 * value)
	{
		___End_10 = value;
		Il2CppCodeGenWriteBarrier(&___End_10, value);
	}

	inline static int32_t get_offset_of_Dispose_11() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Dispose_11)); }
	inline TrackEntryDelegate_t737668607 * get_Dispose_11() const { return ___Dispose_11; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Dispose_11() { return &___Dispose_11; }
	inline void set_Dispose_11(TrackEntryDelegate_t737668607 * value)
	{
		___Dispose_11 = value;
		Il2CppCodeGenWriteBarrier(&___Dispose_11, value);
	}

	inline static int32_t get_offset_of_Complete_12() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Complete_12)); }
	inline TrackEntryDelegate_t737668607 * get_Complete_12() const { return ___Complete_12; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Complete_12() { return &___Complete_12; }
	inline void set_Complete_12(TrackEntryDelegate_t737668607 * value)
	{
		___Complete_12 = value;
		Il2CppCodeGenWriteBarrier(&___Complete_12, value);
	}

	inline static int32_t get_offset_of_Start_13() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Start_13)); }
	inline TrackEntryDelegate_t737668607 * get_Start_13() const { return ___Start_13; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Start_13() { return &___Start_13; }
	inline void set_Start_13(TrackEntryDelegate_t737668607 * value)
	{
		___Start_13 = value;
		Il2CppCodeGenWriteBarrier(&___Start_13, value);
	}

	inline static int32_t get_offset_of_Event_14() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Event_14)); }
	inline TrackEntryEventDelegate_t818460179 * get_Event_14() const { return ___Event_14; }
	inline TrackEntryEventDelegate_t818460179 ** get_address_of_Event_14() { return &___Event_14; }
	inline void set_Event_14(TrackEntryEventDelegate_t818460179 * value)
	{
		___Event_14 = value;
		Il2CppCodeGenWriteBarrier(&___Event_14, value);
	}
};

struct AnimationState_t1491536497_StaticFields
{
public:
	// Spine.Animation Spine.AnimationState::EmptyAnimation
	Animation_t4237671184 * ___EmptyAnimation_0;

public:
	inline static int32_t get_offset_of_EmptyAnimation_0() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497_StaticFields, ___EmptyAnimation_0)); }
	inline Animation_t4237671184 * get_EmptyAnimation_0() const { return ___EmptyAnimation_0; }
	inline Animation_t4237671184 ** get_address_of_EmptyAnimation_0() { return &___EmptyAnimation_0; }
	inline void set_EmptyAnimation_0(Animation_t4237671184 * value)
	{
		___EmptyAnimation_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyAnimation_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
