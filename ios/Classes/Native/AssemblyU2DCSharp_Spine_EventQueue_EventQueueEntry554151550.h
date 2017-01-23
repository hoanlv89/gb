#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Spine_EventQueue_EventType1374886603.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.EventQueue/EventQueueEntry
struct  EventQueueEntry_t554151550 
{
public:
	// Spine.EventQueue/EventType Spine.EventQueue/EventQueueEntry::type
	int32_t ___type_0;
	// Spine.TrackEntry Spine.EventQueue/EventQueueEntry::entry
	TrackEntry_t4106063311 * ___entry_1;
	// Spine.Event Spine.EventQueue/EventQueueEntry::e
	Event_t1819867114 * ___e_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EventQueueEntry_t554151550, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(EventQueueEntry_t554151550, ___entry_1)); }
	inline TrackEntry_t4106063311 * get_entry_1() const { return ___entry_1; }
	inline TrackEntry_t4106063311 ** get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(TrackEntry_t4106063311 * value)
	{
		___entry_1 = value;
		Il2CppCodeGenWriteBarrier(&___entry_1, value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EventQueueEntry_t554151550, ___e_2)); }
	inline Event_t1819867114 * get_e_2() const { return ___e_2; }
	inline Event_t1819867114 ** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(Event_t1819867114 * value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier(&___e_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_t554151550_marshaled_pinvoke
{
	int32_t ___type_0;
	TrackEntry_t4106063311 * ___entry_1;
	Event_t1819867114 * ___e_2;
};
// Native definition for COM marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_t554151550_marshaled_com
{
	int32_t ___type_0;
	TrackEntry_t4106063311 * ___entry_1;
	Event_t1819867114 * ___e_2;
};
