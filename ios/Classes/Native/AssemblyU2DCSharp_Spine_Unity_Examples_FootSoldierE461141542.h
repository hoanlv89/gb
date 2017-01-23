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
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.FootSoldierExample
struct  FootSoldierExample_t461141542  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Examples.FootSoldierExample::idleAnimation
	String_t* ___idleAnimation_2;
	// System.String Spine.Unity.Examples.FootSoldierExample::attackAnimation
	String_t* ___attackAnimation_3;
	// System.String Spine.Unity.Examples.FootSoldierExample::moveAnimation
	String_t* ___moveAnimation_4;
	// System.String Spine.Unity.Examples.FootSoldierExample::eyesSlot
	String_t* ___eyesSlot_5;
	// System.String Spine.Unity.Examples.FootSoldierExample::eyesOpenAttachment
	String_t* ___eyesOpenAttachment_6;
	// System.String Spine.Unity.Examples.FootSoldierExample::blinkAttachment
	String_t* ___blinkAttachment_7;
	// System.Single Spine.Unity.Examples.FootSoldierExample::blinkDuration
	float ___blinkDuration_8;
	// UnityEngine.KeyCode Spine.Unity.Examples.FootSoldierExample::attackKey
	int32_t ___attackKey_9;
	// UnityEngine.KeyCode Spine.Unity.Examples.FootSoldierExample::rightKey
	int32_t ___rightKey_10;
	// UnityEngine.KeyCode Spine.Unity.Examples.FootSoldierExample::leftKey
	int32_t ___leftKey_11;
	// System.Single Spine.Unity.Examples.FootSoldierExample::moveSpeed
	float ___moveSpeed_12;
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.FootSoldierExample::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_13;

public:
	inline static int32_t get_offset_of_idleAnimation_2() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___idleAnimation_2)); }
	inline String_t* get_idleAnimation_2() const { return ___idleAnimation_2; }
	inline String_t** get_address_of_idleAnimation_2() { return &___idleAnimation_2; }
	inline void set_idleAnimation_2(String_t* value)
	{
		___idleAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimation_2, value);
	}

	inline static int32_t get_offset_of_attackAnimation_3() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___attackAnimation_3)); }
	inline String_t* get_attackAnimation_3() const { return ___attackAnimation_3; }
	inline String_t** get_address_of_attackAnimation_3() { return &___attackAnimation_3; }
	inline void set_attackAnimation_3(String_t* value)
	{
		___attackAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___attackAnimation_3, value);
	}

	inline static int32_t get_offset_of_moveAnimation_4() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___moveAnimation_4)); }
	inline String_t* get_moveAnimation_4() const { return ___moveAnimation_4; }
	inline String_t** get_address_of_moveAnimation_4() { return &___moveAnimation_4; }
	inline void set_moveAnimation_4(String_t* value)
	{
		___moveAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___moveAnimation_4, value);
	}

	inline static int32_t get_offset_of_eyesSlot_5() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___eyesSlot_5)); }
	inline String_t* get_eyesSlot_5() const { return ___eyesSlot_5; }
	inline String_t** get_address_of_eyesSlot_5() { return &___eyesSlot_5; }
	inline void set_eyesSlot_5(String_t* value)
	{
		___eyesSlot_5 = value;
		Il2CppCodeGenWriteBarrier(&___eyesSlot_5, value);
	}

	inline static int32_t get_offset_of_eyesOpenAttachment_6() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___eyesOpenAttachment_6)); }
	inline String_t* get_eyesOpenAttachment_6() const { return ___eyesOpenAttachment_6; }
	inline String_t** get_address_of_eyesOpenAttachment_6() { return &___eyesOpenAttachment_6; }
	inline void set_eyesOpenAttachment_6(String_t* value)
	{
		___eyesOpenAttachment_6 = value;
		Il2CppCodeGenWriteBarrier(&___eyesOpenAttachment_6, value);
	}

	inline static int32_t get_offset_of_blinkAttachment_7() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___blinkAttachment_7)); }
	inline String_t* get_blinkAttachment_7() const { return ___blinkAttachment_7; }
	inline String_t** get_address_of_blinkAttachment_7() { return &___blinkAttachment_7; }
	inline void set_blinkAttachment_7(String_t* value)
	{
		___blinkAttachment_7 = value;
		Il2CppCodeGenWriteBarrier(&___blinkAttachment_7, value);
	}

	inline static int32_t get_offset_of_blinkDuration_8() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___blinkDuration_8)); }
	inline float get_blinkDuration_8() const { return ___blinkDuration_8; }
	inline float* get_address_of_blinkDuration_8() { return &___blinkDuration_8; }
	inline void set_blinkDuration_8(float value)
	{
		___blinkDuration_8 = value;
	}

	inline static int32_t get_offset_of_attackKey_9() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___attackKey_9)); }
	inline int32_t get_attackKey_9() const { return ___attackKey_9; }
	inline int32_t* get_address_of_attackKey_9() { return &___attackKey_9; }
	inline void set_attackKey_9(int32_t value)
	{
		___attackKey_9 = value;
	}

	inline static int32_t get_offset_of_rightKey_10() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___rightKey_10)); }
	inline int32_t get_rightKey_10() const { return ___rightKey_10; }
	inline int32_t* get_address_of_rightKey_10() { return &___rightKey_10; }
	inline void set_rightKey_10(int32_t value)
	{
		___rightKey_10 = value;
	}

	inline static int32_t get_offset_of_leftKey_11() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___leftKey_11)); }
	inline int32_t get_leftKey_11() const { return ___leftKey_11; }
	inline int32_t* get_address_of_leftKey_11() { return &___leftKey_11; }
	inline void set_leftKey_11(int32_t value)
	{
		___leftKey_11 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_12() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___moveSpeed_12)); }
	inline float get_moveSpeed_12() const { return ___moveSpeed_12; }
	inline float* get_address_of_moveSpeed_12() { return &___moveSpeed_12; }
	inline void set_moveSpeed_12(float value)
	{
		___moveSpeed_12 = value;
	}

	inline static int32_t get_offset_of_skeletonAnimation_13() { return static_cast<int32_t>(offsetof(FootSoldierExample_t461141542, ___skeletonAnimation_13)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_13() const { return ___skeletonAnimation_13; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_13() { return &___skeletonAnimation_13; }
	inline void set_skeletonAnimation_13(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_13 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
