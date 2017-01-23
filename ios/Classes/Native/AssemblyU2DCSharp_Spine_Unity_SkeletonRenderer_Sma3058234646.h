#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct  Instruction_t3058234646  : public Il2CppObject
{
public:
	// System.Boolean Spine.Unity.SkeletonRenderer/SmartMesh/Instruction::immutableTriangles
	bool ___immutableTriangles_0;
	// System.Int32 Spine.Unity.SkeletonRenderer/SmartMesh/Instruction::vertexCount
	int32_t ___vertexCount_1;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.SkeletonRenderer/SmartMesh/Instruction::attachments
	ExposedList_1_t1640977307 * ___attachments_2;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction> Spine.Unity.SkeletonRenderer/SmartMesh/Instruction::submeshInstructions
	ExposedList_1_t1667832231 * ___submeshInstructions_3;

public:
	inline static int32_t get_offset_of_immutableTriangles_0() { return static_cast<int32_t>(offsetof(Instruction_t3058234646, ___immutableTriangles_0)); }
	inline bool get_immutableTriangles_0() const { return ___immutableTriangles_0; }
	inline bool* get_address_of_immutableTriangles_0() { return &___immutableTriangles_0; }
	inline void set_immutableTriangles_0(bool value)
	{
		___immutableTriangles_0 = value;
	}

	inline static int32_t get_offset_of_vertexCount_1() { return static_cast<int32_t>(offsetof(Instruction_t3058234646, ___vertexCount_1)); }
	inline int32_t get_vertexCount_1() const { return ___vertexCount_1; }
	inline int32_t* get_address_of_vertexCount_1() { return &___vertexCount_1; }
	inline void set_vertexCount_1(int32_t value)
	{
		___vertexCount_1 = value;
	}

	inline static int32_t get_offset_of_attachments_2() { return static_cast<int32_t>(offsetof(Instruction_t3058234646, ___attachments_2)); }
	inline ExposedList_1_t1640977307 * get_attachments_2() const { return ___attachments_2; }
	inline ExposedList_1_t1640977307 ** get_address_of_attachments_2() { return &___attachments_2; }
	inline void set_attachments_2(ExposedList_1_t1640977307 * value)
	{
		___attachments_2 = value;
		Il2CppCodeGenWriteBarrier(&___attachments_2, value);
	}

	inline static int32_t get_offset_of_submeshInstructions_3() { return static_cast<int32_t>(offsetof(Instruction_t3058234646, ___submeshInstructions_3)); }
	inline ExposedList_1_t1667832231 * get_submeshInstructions_3() const { return ___submeshInstructions_3; }
	inline ExposedList_1_t1667832231 ** get_address_of_submeshInstructions_3() { return &___submeshInstructions_3; }
	inline void set_submeshInstructions_3(ExposedList_1_t1667832231 * value)
	{
		___submeshInstructions_3 = value;
		Il2CppCodeGenWriteBarrier(&___submeshInstructions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
