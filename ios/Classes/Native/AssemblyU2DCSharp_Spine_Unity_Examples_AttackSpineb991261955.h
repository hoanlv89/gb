#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;
// Spine.Unity.Examples.SpineGauge
struct SpineGauge_t1350063658;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.AttackSpineboy
struct  AttackSpineboy_t991261955  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.AttackSpineboy::spineboy
	SkeletonAnimation_t1845683983 * ___spineboy_2;
	// Spine.Unity.Examples.SpineGauge Spine.Unity.Examples.AttackSpineboy::gauge
	SpineGauge_t1350063658 * ___gauge_3;
	// UnityEngine.UI.Text Spine.Unity.Examples.AttackSpineboy::healthText
	Text_t356221433 * ___healthText_4;
	// System.Int32 Spine.Unity.Examples.AttackSpineboy::currentHealth
	int32_t ___currentHealth_5;

public:
	inline static int32_t get_offset_of_spineboy_2() { return static_cast<int32_t>(offsetof(AttackSpineboy_t991261955, ___spineboy_2)); }
	inline SkeletonAnimation_t1845683983 * get_spineboy_2() const { return ___spineboy_2; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_spineboy_2() { return &___spineboy_2; }
	inline void set_spineboy_2(SkeletonAnimation_t1845683983 * value)
	{
		___spineboy_2 = value;
		Il2CppCodeGenWriteBarrier(&___spineboy_2, value);
	}

	inline static int32_t get_offset_of_gauge_3() { return static_cast<int32_t>(offsetof(AttackSpineboy_t991261955, ___gauge_3)); }
	inline SpineGauge_t1350063658 * get_gauge_3() const { return ___gauge_3; }
	inline SpineGauge_t1350063658 ** get_address_of_gauge_3() { return &___gauge_3; }
	inline void set_gauge_3(SpineGauge_t1350063658 * value)
	{
		___gauge_3 = value;
		Il2CppCodeGenWriteBarrier(&___gauge_3, value);
	}

	inline static int32_t get_offset_of_healthText_4() { return static_cast<int32_t>(offsetof(AttackSpineboy_t991261955, ___healthText_4)); }
	inline Text_t356221433 * get_healthText_4() const { return ___healthText_4; }
	inline Text_t356221433 ** get_address_of_healthText_4() { return &___healthText_4; }
	inline void set_healthText_4(Text_t356221433 * value)
	{
		___healthText_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthText_4, value);
	}

	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(AttackSpineboy_t991261955, ___currentHealth_5)); }
	inline int32_t get_currentHealth_5() const { return ___currentHealth_5; }
	inline int32_t* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(int32_t value)
	{
		___currentHealth_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
