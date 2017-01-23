#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t1667832231;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t1640977307;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct  SubmeshedMeshInstruction_t2779064907  : public Il2CppObject
{
public:
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction> Spine.Unity.MeshGeneration.SubmeshedMeshInstruction::submeshInstructions
	ExposedList_1_t1667832231 * ___submeshInstructions_0;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.MeshGeneration.SubmeshedMeshInstruction::attachmentList
	ExposedList_1_t1640977307 * ___attachmentList_1;
	// System.Int32 Spine.Unity.MeshGeneration.SubmeshedMeshInstruction::vertexCount
	int32_t ___vertexCount_2;

public:
	inline static int32_t get_offset_of_submeshInstructions_0() { return static_cast<int32_t>(offsetof(SubmeshedMeshInstruction_t2779064907, ___submeshInstructions_0)); }
	inline ExposedList_1_t1667832231 * get_submeshInstructions_0() const { return ___submeshInstructions_0; }
	inline ExposedList_1_t1667832231 ** get_address_of_submeshInstructions_0() { return &___submeshInstructions_0; }
	inline void set_submeshInstructions_0(ExposedList_1_t1667832231 * value)
	{
		___submeshInstructions_0 = value;
		Il2CppCodeGenWriteBarrier(&___submeshInstructions_0, value);
	}

	inline static int32_t get_offset_of_attachmentList_1() { return static_cast<int32_t>(offsetof(SubmeshedMeshInstruction_t2779064907, ___attachmentList_1)); }
	inline ExposedList_1_t1640977307 * get_attachmentList_1() const { return ___attachmentList_1; }
	inline ExposedList_1_t1640977307 ** get_address_of_attachmentList_1() { return &___attachmentList_1; }
	inline void set_attachmentList_1(ExposedList_1_t1640977307 * value)
	{
		___attachmentList_1 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentList_1, value);
	}

	inline static int32_t get_offset_of_vertexCount_2() { return static_cast<int32_t>(offsetof(SubmeshedMeshInstruction_t2779064907, ___vertexCount_2)); }
	inline int32_t get_vertexCount_2() const { return ___vertexCount_2; }
	inline int32_t* get_address_of_vertexCount_2() { return &___vertexCount_2; }
	inline void set_vertexCount_2(int32_t value)
	{
		___vertexCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
