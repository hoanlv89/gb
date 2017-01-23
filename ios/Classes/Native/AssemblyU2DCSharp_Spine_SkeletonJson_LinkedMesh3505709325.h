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
// Spine.MeshAttachment
struct MeshAttachment_t1666512816;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonJson/LinkedMesh
struct  LinkedMesh_t3505709325  : public Il2CppObject
{
public:
	// System.String Spine.SkeletonJson/LinkedMesh::parent
	String_t* ___parent_0;
	// System.String Spine.SkeletonJson/LinkedMesh::skin
	String_t* ___skin_1;
	// System.Int32 Spine.SkeletonJson/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment Spine.SkeletonJson/LinkedMesh::mesh
	MeshAttachment_t1666512816 * ___mesh_3;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_t3505709325, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier(&___parent_0, value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(LinkedMesh_t3505709325, ___skin_1)); }
	inline String_t* get_skin_1() const { return ___skin_1; }
	inline String_t** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(String_t* value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier(&___skin_1, value);
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_t3505709325, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_t3505709325, ___mesh_3)); }
	inline MeshAttachment_t1666512816 * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_t1666512816 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_t1666512816 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
