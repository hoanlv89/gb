#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.EventData
struct EventData_t937912058;
// System.String
struct String_t;
// Spine.AnimationState
struct AnimationState_t1491536497;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.WaitForSpineEvent
struct  WaitForSpineEvent_t4233871321  : public Il2CppObject
{
public:
	// Spine.EventData Spine.Unity.WaitForSpineEvent::m_TargetEvent
	EventData_t937912058 * ___m_TargetEvent_0;
	// System.String Spine.Unity.WaitForSpineEvent::m_EventName
	String_t* ___m_EventName_1;
	// Spine.AnimationState Spine.Unity.WaitForSpineEvent::m_AnimationState
	AnimationState_t1491536497 * ___m_AnimationState_2;
	// System.Boolean Spine.Unity.WaitForSpineEvent::m_WasFired
	bool ___m_WasFired_3;
	// System.Boolean Spine.Unity.WaitForSpineEvent::m_unsubscribeAfterFiring
	bool ___m_unsubscribeAfterFiring_4;

public:
	inline static int32_t get_offset_of_m_TargetEvent_0() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t4233871321, ___m_TargetEvent_0)); }
	inline EventData_t937912058 * get_m_TargetEvent_0() const { return ___m_TargetEvent_0; }
	inline EventData_t937912058 ** get_address_of_m_TargetEvent_0() { return &___m_TargetEvent_0; }
	inline void set_m_TargetEvent_0(EventData_t937912058 * value)
	{
		___m_TargetEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetEvent_0, value);
	}

	inline static int32_t get_offset_of_m_EventName_1() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t4233871321, ___m_EventName_1)); }
	inline String_t* get_m_EventName_1() const { return ___m_EventName_1; }
	inline String_t** get_address_of_m_EventName_1() { return &___m_EventName_1; }
	inline void set_m_EventName_1(String_t* value)
	{
		___m_EventName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventName_1, value);
	}

	inline static int32_t get_offset_of_m_AnimationState_2() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t4233871321, ___m_AnimationState_2)); }
	inline AnimationState_t1491536497 * get_m_AnimationState_2() const { return ___m_AnimationState_2; }
	inline AnimationState_t1491536497 ** get_address_of_m_AnimationState_2() { return &___m_AnimationState_2; }
	inline void set_m_AnimationState_2(AnimationState_t1491536497 * value)
	{
		___m_AnimationState_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_AnimationState_2, value);
	}

	inline static int32_t get_offset_of_m_WasFired_3() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t4233871321, ___m_WasFired_3)); }
	inline bool get_m_WasFired_3() const { return ___m_WasFired_3; }
	inline bool* get_address_of_m_WasFired_3() { return &___m_WasFired_3; }
	inline void set_m_WasFired_3(bool value)
	{
		___m_WasFired_3 = value;
	}

	inline static int32_t get_offset_of_m_unsubscribeAfterFiring_4() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t4233871321, ___m_unsubscribeAfterFiring_4)); }
	inline bool get_m_unsubscribeAfterFiring_4() const { return ___m_unsubscribeAfterFiring_4; }
	inline bool* get_address_of_m_unsubscribeAfterFiring_4() { return &___m_unsubscribeAfterFiring_4; }
	inline void set_m_unsubscribeAfterFiring_4(bool value)
	{
		___m_unsubscribeAfterFiring_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
