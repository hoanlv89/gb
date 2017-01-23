#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1356156583;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t1640977307;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t1667832231;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh
struct  SmartMesh_t396822684  : public Il2CppObject
{
public:
	// UnityEngine.Mesh Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::mesh
	Mesh_t1356156583 * ___mesh_0;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::attachmentsUsed
	ExposedList_1_t1640977307 * ___attachmentsUsed_1;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::instructionsUsed
	ExposedList_1_t1667832231 * ___instructionsUsed_2;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(SmartMesh_t396822684, ___mesh_0)); }
	inline Mesh_t1356156583 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t1356156583 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t1356156583 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_attachmentsUsed_1() { return static_cast<int32_t>(offsetof(SmartMesh_t396822684, ___attachmentsUsed_1)); }
	inline ExposedList_1_t1640977307 * get_attachmentsUsed_1() const { return ___attachmentsUsed_1; }
	inline ExposedList_1_t1640977307 ** get_address_of_attachmentsUsed_1() { return &___attachmentsUsed_1; }
	inline void set_attachmentsUsed_1(ExposedList_1_t1640977307 * value)
	{
		___attachmentsUsed_1 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentsUsed_1, value);
	}

	inline static int32_t get_offset_of_instructionsUsed_2() { return static_cast<int32_t>(offsetof(SmartMesh_t396822684, ___instructionsUsed_2)); }
	inline ExposedList_1_t1667832231 * get_instructionsUsed_2() const { return ___instructionsUsed_2; }
	inline ExposedList_1_t1667832231 ** get_address_of_instructionsUsed_2() { return &___instructionsUsed_2; }
	inline void set_instructionsUsed_2(ExposedList_1_t1667832231 * value)
	{
		___instructionsUsed_2 = value;
		Il2CppCodeGenWriteBarrier(&___instructionsUsed_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
