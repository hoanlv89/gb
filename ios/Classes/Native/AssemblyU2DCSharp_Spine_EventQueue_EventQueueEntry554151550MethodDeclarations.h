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

// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;
// Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_t554151550;
struct EventQueueEntry_t554151550_marshaled_pinvoke;
struct EventQueueEntry_t554151550_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_EventQueue_EventQueueEntry554151550.h"
#include "AssemblyU2DCSharp_Spine_EventQueue_EventType1374886603.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"

// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
extern "C"  void EventQueueEntry__ctor_m4225008657 (EventQueueEntry_t554151550 * __this, int32_t ___eventType0, TrackEntry_t4106063311 * ___trackEntry1, Event_t1819867114 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EventQueueEntry_t554151550;
struct EventQueueEntry_t554151550_marshaled_pinvoke;

extern "C" void EventQueueEntry_t554151550_marshal_pinvoke(const EventQueueEntry_t554151550& unmarshaled, EventQueueEntry_t554151550_marshaled_pinvoke& marshaled);
extern "C" void EventQueueEntry_t554151550_marshal_pinvoke_back(const EventQueueEntry_t554151550_marshaled_pinvoke& marshaled, EventQueueEntry_t554151550& unmarshaled);
extern "C" void EventQueueEntry_t554151550_marshal_pinvoke_cleanup(EventQueueEntry_t554151550_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EventQueueEntry_t554151550;
struct EventQueueEntry_t554151550_marshaled_com;

extern "C" void EventQueueEntry_t554151550_marshal_com(const EventQueueEntry_t554151550& unmarshaled, EventQueueEntry_t554151550_marshaled_com& marshaled);
extern "C" void EventQueueEntry_t554151550_marshal_com_back(const EventQueueEntry_t554151550_marshaled_com& marshaled, EventQueueEntry_t554151550& unmarshaled);
extern "C" void EventQueueEntry_t554151550_marshal_com_cleanup(EventQueueEntry_t554151550_marshaled_com& marshaled);
