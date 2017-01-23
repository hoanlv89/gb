#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AttachmentLoader
struct AttachmentLoader_t459554434;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<Spine.SkeletonJson/LinkedMesh>
struct List_1_t2874830457;
// Spine.TransformMode[]
struct TransformModeU5BU5D_t1645436898;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonBinary
struct  SkeletonBinary_t2375091280  : public Il2CppObject
{
public:
	// System.Single Spine.SkeletonBinary::<Scale>k__BackingField
	float ___U3CScaleU3Ek__BackingField_12;
	// Spine.AttachmentLoader Spine.SkeletonBinary::attachmentLoader
	Il2CppObject * ___attachmentLoader_13;
	// System.Byte[] Spine.SkeletonBinary::buffer
	ByteU5BU5D_t3397334013* ___buffer_14;
	// System.Collections.Generic.List`1<Spine.SkeletonJson/LinkedMesh> Spine.SkeletonBinary::linkedMeshes
	List_1_t2874830457 * ___linkedMeshes_15;

public:
	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SkeletonBinary_t2375091280, ___U3CScaleU3Ek__BackingField_12)); }
	inline float get_U3CScaleU3Ek__BackingField_12() const { return ___U3CScaleU3Ek__BackingField_12; }
	inline float* get_address_of_U3CScaleU3Ek__BackingField_12() { return &___U3CScaleU3Ek__BackingField_12; }
	inline void set_U3CScaleU3Ek__BackingField_12(float value)
	{
		___U3CScaleU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_attachmentLoader_13() { return static_cast<int32_t>(offsetof(SkeletonBinary_t2375091280, ___attachmentLoader_13)); }
	inline Il2CppObject * get_attachmentLoader_13() const { return ___attachmentLoader_13; }
	inline Il2CppObject ** get_address_of_attachmentLoader_13() { return &___attachmentLoader_13; }
	inline void set_attachmentLoader_13(Il2CppObject * value)
	{
		___attachmentLoader_13 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentLoader_13, value);
	}

	inline static int32_t get_offset_of_buffer_14() { return static_cast<int32_t>(offsetof(SkeletonBinary_t2375091280, ___buffer_14)); }
	inline ByteU5BU5D_t3397334013* get_buffer_14() const { return ___buffer_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_14() { return &___buffer_14; }
	inline void set_buffer_14(ByteU5BU5D_t3397334013* value)
	{
		___buffer_14 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_14, value);
	}

	inline static int32_t get_offset_of_linkedMeshes_15() { return static_cast<int32_t>(offsetof(SkeletonBinary_t2375091280, ___linkedMeshes_15)); }
	inline List_1_t2874830457 * get_linkedMeshes_15() const { return ___linkedMeshes_15; }
	inline List_1_t2874830457 ** get_address_of_linkedMeshes_15() { return &___linkedMeshes_15; }
	inline void set_linkedMeshes_15(List_1_t2874830457 * value)
	{
		___linkedMeshes_15 = value;
		Il2CppCodeGenWriteBarrier(&___linkedMeshes_15, value);
	}
};

struct SkeletonBinary_t2375091280_StaticFields
{
public:
	// Spine.TransformMode[] Spine.SkeletonBinary::TransformModeValues
	TransformModeU5BU5D_t1645436898* ___TransformModeValues_16;

public:
	inline static int32_t get_offset_of_TransformModeValues_16() { return static_cast<int32_t>(offsetof(SkeletonBinary_t2375091280_StaticFields, ___TransformModeValues_16)); }
	inline TransformModeU5BU5D_t1645436898* get_TransformModeValues_16() const { return ___TransformModeValues_16; }
	inline TransformModeU5BU5D_t1645436898** get_address_of_TransformModeValues_16() { return &___TransformModeValues_16; }
	inline void set_TransformModeValues_16(TransformModeU5BU5D_t1645436898* value)
	{
		___TransformModeValues_16 = value;
		Il2CppCodeGenWriteBarrier(&___TransformModeValues_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
