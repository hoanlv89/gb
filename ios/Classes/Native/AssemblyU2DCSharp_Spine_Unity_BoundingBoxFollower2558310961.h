#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// System.String
struct String_t;
// Spine.Slot
struct Slot_t306639170;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t3220183178;
// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,UnityEngine.PolygonCollider2D>
struct Dictionary_2_t60178393;
// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,System.String>
struct Dictionary_2_t3164182744;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.BoundingBoxFollower
struct  BoundingBoxFollower_t2558310961  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonRenderer Spine.Unity.BoundingBoxFollower::skeletonRenderer
	SkeletonRenderer_t2265953470 * ___skeletonRenderer_3;
	// System.String Spine.Unity.BoundingBoxFollower::slotName
	String_t* ___slotName_4;
	// System.Boolean Spine.Unity.BoundingBoxFollower::isTrigger
	bool ___isTrigger_5;
	// System.Boolean Spine.Unity.BoundingBoxFollower::clearStateOnDisable
	bool ___clearStateOnDisable_6;
	// Spine.Slot Spine.Unity.BoundingBoxFollower::slot
	Slot_t306639170 * ___slot_7;
	// Spine.BoundingBoxAttachment Spine.Unity.BoundingBoxFollower::currentAttachment
	BoundingBoxAttachment_t1898929740 * ___currentAttachment_8;
	// System.String Spine.Unity.BoundingBoxFollower::currentAttachmentName
	String_t* ___currentAttachmentName_9;
	// UnityEngine.PolygonCollider2D Spine.Unity.BoundingBoxFollower::currentCollider
	PolygonCollider2D_t3220183178 * ___currentCollider_10;
	// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,UnityEngine.PolygonCollider2D> Spine.Unity.BoundingBoxFollower::colliderTable
	Dictionary_2_t60178393 * ___colliderTable_11;
	// System.Collections.Generic.Dictionary`2<Spine.BoundingBoxAttachment,System.String> Spine.Unity.BoundingBoxFollower::nameTable
	Dictionary_2_t3164182744 * ___nameTable_12;

public:
	inline static int32_t get_offset_of_skeletonRenderer_3() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___skeletonRenderer_3)); }
	inline SkeletonRenderer_t2265953470 * get_skeletonRenderer_3() const { return ___skeletonRenderer_3; }
	inline SkeletonRenderer_t2265953470 ** get_address_of_skeletonRenderer_3() { return &___skeletonRenderer_3; }
	inline void set_skeletonRenderer_3(SkeletonRenderer_t2265953470 * value)
	{
		___skeletonRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_3, value);
	}

	inline static int32_t get_offset_of_slotName_4() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___slotName_4)); }
	inline String_t* get_slotName_4() const { return ___slotName_4; }
	inline String_t** get_address_of_slotName_4() { return &___slotName_4; }
	inline void set_slotName_4(String_t* value)
	{
		___slotName_4 = value;
		Il2CppCodeGenWriteBarrier(&___slotName_4, value);
	}

	inline static int32_t get_offset_of_isTrigger_5() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___isTrigger_5)); }
	inline bool get_isTrigger_5() const { return ___isTrigger_5; }
	inline bool* get_address_of_isTrigger_5() { return &___isTrigger_5; }
	inline void set_isTrigger_5(bool value)
	{
		___isTrigger_5 = value;
	}

	inline static int32_t get_offset_of_clearStateOnDisable_6() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___clearStateOnDisable_6)); }
	inline bool get_clearStateOnDisable_6() const { return ___clearStateOnDisable_6; }
	inline bool* get_address_of_clearStateOnDisable_6() { return &___clearStateOnDisable_6; }
	inline void set_clearStateOnDisable_6(bool value)
	{
		___clearStateOnDisable_6 = value;
	}

	inline static int32_t get_offset_of_slot_7() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___slot_7)); }
	inline Slot_t306639170 * get_slot_7() const { return ___slot_7; }
	inline Slot_t306639170 ** get_address_of_slot_7() { return &___slot_7; }
	inline void set_slot_7(Slot_t306639170 * value)
	{
		___slot_7 = value;
		Il2CppCodeGenWriteBarrier(&___slot_7, value);
	}

	inline static int32_t get_offset_of_currentAttachment_8() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___currentAttachment_8)); }
	inline BoundingBoxAttachment_t1898929740 * get_currentAttachment_8() const { return ___currentAttachment_8; }
	inline BoundingBoxAttachment_t1898929740 ** get_address_of_currentAttachment_8() { return &___currentAttachment_8; }
	inline void set_currentAttachment_8(BoundingBoxAttachment_t1898929740 * value)
	{
		___currentAttachment_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttachment_8, value);
	}

	inline static int32_t get_offset_of_currentAttachmentName_9() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___currentAttachmentName_9)); }
	inline String_t* get_currentAttachmentName_9() const { return ___currentAttachmentName_9; }
	inline String_t** get_address_of_currentAttachmentName_9() { return &___currentAttachmentName_9; }
	inline void set_currentAttachmentName_9(String_t* value)
	{
		___currentAttachmentName_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttachmentName_9, value);
	}

	inline static int32_t get_offset_of_currentCollider_10() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___currentCollider_10)); }
	inline PolygonCollider2D_t3220183178 * get_currentCollider_10() const { return ___currentCollider_10; }
	inline PolygonCollider2D_t3220183178 ** get_address_of_currentCollider_10() { return &___currentCollider_10; }
	inline void set_currentCollider_10(PolygonCollider2D_t3220183178 * value)
	{
		___currentCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentCollider_10, value);
	}

	inline static int32_t get_offset_of_colliderTable_11() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___colliderTable_11)); }
	inline Dictionary_2_t60178393 * get_colliderTable_11() const { return ___colliderTable_11; }
	inline Dictionary_2_t60178393 ** get_address_of_colliderTable_11() { return &___colliderTable_11; }
	inline void set_colliderTable_11(Dictionary_2_t60178393 * value)
	{
		___colliderTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___colliderTable_11, value);
	}

	inline static int32_t get_offset_of_nameTable_12() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961, ___nameTable_12)); }
	inline Dictionary_2_t3164182744 * get_nameTable_12() const { return ___nameTable_12; }
	inline Dictionary_2_t3164182744 ** get_address_of_nameTable_12() { return &___nameTable_12; }
	inline void set_nameTable_12(Dictionary_2_t3164182744 * value)
	{
		___nameTable_12 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_12, value);
	}
};

struct BoundingBoxFollower_t2558310961_StaticFields
{
public:
	// System.Boolean Spine.Unity.BoundingBoxFollower::DebugMessages
	bool ___DebugMessages_2;

public:
	inline static int32_t get_offset_of_DebugMessages_2() { return static_cast<int32_t>(offsetof(BoundingBoxFollower_t2558310961_StaticFields, ___DebugMessages_2)); }
	inline bool get_DebugMessages_2() const { return ___DebugMessages_2; }
	inline bool* get_address_of_DebugMessages_2() { return &___DebugMessages_2; }
	inline void set_DebugMessages_2(bool value)
	{
		___DebugMessages_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
