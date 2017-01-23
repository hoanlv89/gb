#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// DisconnectButton
struct DisconnectButton_t3965161390;
// ConnectionButton
struct ConnectionButton_t3853092004;
// ClickManager
struct ClickManager_t4152430967;
// PTPGameController
struct PTPGameController_t90729750;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PTPGameController
struct  PTPGameController_t90729750  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PTPGameController::pref
	GameObject_t1756533147 * ___pref_2;
	// DisconnectButton PTPGameController::d
	DisconnectButton_t3965161390 * ___d_3;
	// ConnectionButton PTPGameController::b
	ConnectionButton_t3853092004 * ___b_4;
	// ClickManager PTPGameController::m
	ClickManager_t4152430967 * ___m_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PTPGameController::spheres
	List_1_t1125654279 * ___spheres_7;

public:
	inline static int32_t get_offset_of_pref_2() { return static_cast<int32_t>(offsetof(PTPGameController_t90729750, ___pref_2)); }
	inline GameObject_t1756533147 * get_pref_2() const { return ___pref_2; }
	inline GameObject_t1756533147 ** get_address_of_pref_2() { return &___pref_2; }
	inline void set_pref_2(GameObject_t1756533147 * value)
	{
		___pref_2 = value;
		Il2CppCodeGenWriteBarrier(&___pref_2, value);
	}

	inline static int32_t get_offset_of_d_3() { return static_cast<int32_t>(offsetof(PTPGameController_t90729750, ___d_3)); }
	inline DisconnectButton_t3965161390 * get_d_3() const { return ___d_3; }
	inline DisconnectButton_t3965161390 ** get_address_of_d_3() { return &___d_3; }
	inline void set_d_3(DisconnectButton_t3965161390 * value)
	{
		___d_3 = value;
		Il2CppCodeGenWriteBarrier(&___d_3, value);
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(PTPGameController_t90729750, ___b_4)); }
	inline ConnectionButton_t3853092004 * get_b_4() const { return ___b_4; }
	inline ConnectionButton_t3853092004 ** get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(ConnectionButton_t3853092004 * value)
	{
		___b_4 = value;
		Il2CppCodeGenWriteBarrier(&___b_4, value);
	}

	inline static int32_t get_offset_of_m_5() { return static_cast<int32_t>(offsetof(PTPGameController_t90729750, ___m_5)); }
	inline ClickManager_t4152430967 * get_m_5() const { return ___m_5; }
	inline ClickManager_t4152430967 ** get_address_of_m_5() { return &___m_5; }
	inline void set_m_5(ClickManager_t4152430967 * value)
	{
		___m_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_5, value);
	}

	inline static int32_t get_offset_of_spheres_7() { return static_cast<int32_t>(offsetof(PTPGameController_t90729750, ___spheres_7)); }
	inline List_1_t1125654279 * get_spheres_7() const { return ___spheres_7; }
	inline List_1_t1125654279 ** get_address_of_spheres_7() { return &___spheres_7; }
	inline void set_spheres_7(List_1_t1125654279 * value)
	{
		___spheres_7 = value;
		Il2CppCodeGenWriteBarrier(&___spheres_7, value);
	}
};

struct PTPGameController_t90729750_StaticFields
{
public:
	// PTPGameController PTPGameController::instance
	PTPGameController_t90729750 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(PTPGameController_t90729750_StaticFields, ___instance_6)); }
	inline PTPGameController_t90729750 * get_instance_6() const { return ___instance_6; }
	inline PTPGameController_t90729750 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(PTPGameController_t90729750 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
