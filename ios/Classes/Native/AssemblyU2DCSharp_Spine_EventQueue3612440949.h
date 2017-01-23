#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.EventQueue/EventQueueEntry>
struct ExposedList_1_t3906020786;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t428500383;
// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.EventQueue
struct  EventQueue_t3612440949  : public Il2CppObject
{
public:
	// Spine.ExposedList`1<Spine.EventQueue/EventQueueEntry> Spine.EventQueue::eventQueueEntries
	ExposedList_1_t3906020786 * ___eventQueueEntries_0;
	// System.Boolean Spine.EventQueue::drainDisabled
	bool ___drainDisabled_1;
	// Spine.AnimationState Spine.EventQueue::state
	AnimationState_t1491536497 * ___state_2;
	// Spine.Pool`1<Spine.TrackEntry> Spine.EventQueue::trackEntryPool
	Pool_1_t428500383 * ___trackEntryPool_3;
	// System.Action Spine.EventQueue::AnimationsChanged
	Action_t3226471752 * ___AnimationsChanged_4;

public:
	inline static int32_t get_offset_of_eventQueueEntries_0() { return static_cast<int32_t>(offsetof(EventQueue_t3612440949, ___eventQueueEntries_0)); }
	inline ExposedList_1_t3906020786 * get_eventQueueEntries_0() const { return ___eventQueueEntries_0; }
	inline ExposedList_1_t3906020786 ** get_address_of_eventQueueEntries_0() { return &___eventQueueEntries_0; }
	inline void set_eventQueueEntries_0(ExposedList_1_t3906020786 * value)
	{
		___eventQueueEntries_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueueEntries_0, value);
	}

	inline static int32_t get_offset_of_drainDisabled_1() { return static_cast<int32_t>(offsetof(EventQueue_t3612440949, ___drainDisabled_1)); }
	inline bool get_drainDisabled_1() const { return ___drainDisabled_1; }
	inline bool* get_address_of_drainDisabled_1() { return &___drainDisabled_1; }
	inline void set_drainDisabled_1(bool value)
	{
		___drainDisabled_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(EventQueue_t3612440949, ___state_2)); }
	inline AnimationState_t1491536497 * get_state_2() const { return ___state_2; }
	inline AnimationState_t1491536497 ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(AnimationState_t1491536497 * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier(&___state_2, value);
	}

	inline static int32_t get_offset_of_trackEntryPool_3() { return static_cast<int32_t>(offsetof(EventQueue_t3612440949, ___trackEntryPool_3)); }
	inline Pool_1_t428500383 * get_trackEntryPool_3() const { return ___trackEntryPool_3; }
	inline Pool_1_t428500383 ** get_address_of_trackEntryPool_3() { return &___trackEntryPool_3; }
	inline void set_trackEntryPool_3(Pool_1_t428500383 * value)
	{
		___trackEntryPool_3 = value;
		Il2CppCodeGenWriteBarrier(&___trackEntryPool_3, value);
	}

	inline static int32_t get_offset_of_AnimationsChanged_4() { return static_cast<int32_t>(offsetof(EventQueue_t3612440949, ___AnimationsChanged_4)); }
	inline Action_t3226471752 * get_AnimationsChanged_4() const { return ___AnimationsChanged_4; }
	inline Action_t3226471752 ** get_address_of_AnimationsChanged_4() { return &___AnimationsChanged_4; }
	inline void set_AnimationsChanged_4(Action_t3226471752 * value)
	{
		___AnimationsChanged_4 = value;
		Il2CppCodeGenWriteBarrier(&___AnimationsChanged_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
