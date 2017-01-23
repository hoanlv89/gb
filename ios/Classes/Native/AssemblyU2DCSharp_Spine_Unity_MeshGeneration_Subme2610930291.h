#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Skeleton
struct Skeleton_t1387859465;
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.SubmeshInstruction
struct  SubmeshInstruction_t2610930291 
{
public:
	// Spine.Skeleton Spine.Unity.MeshGeneration.SubmeshInstruction::skeleton
	Skeleton_t1387859465 * ___skeleton_0;
	// System.Int32 Spine.Unity.MeshGeneration.SubmeshInstruction::startSlot
	int32_t ___startSlot_1;
	// System.Int32 Spine.Unity.MeshGeneration.SubmeshInstruction::endSlot
	int32_t ___endSlot_2;
	// UnityEngine.Material Spine.Unity.MeshGeneration.SubmeshInstruction::material
	Material_t193706927 * ___material_3;
	// System.Int32 Spine.Unity.MeshGeneration.SubmeshInstruction::triangleCount
	int32_t ___triangleCount_4;
	// System.Int32 Spine.Unity.MeshGeneration.SubmeshInstruction::vertexCount
	int32_t ___vertexCount_5;
	// System.Int32 Spine.Unity.MeshGeneration.SubmeshInstruction::firstVertexIndex
	int32_t ___firstVertexIndex_6;
	// System.Boolean Spine.Unity.MeshGeneration.SubmeshInstruction::forceSeparate
	bool ___forceSeparate_7;

public:
	inline static int32_t get_offset_of_skeleton_0() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___skeleton_0)); }
	inline Skeleton_t1387859465 * get_skeleton_0() const { return ___skeleton_0; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_0() { return &___skeleton_0; }
	inline void set_skeleton_0(Skeleton_t1387859465 * value)
	{
		___skeleton_0 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_0, value);
	}

	inline static int32_t get_offset_of_startSlot_1() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___startSlot_1)); }
	inline int32_t get_startSlot_1() const { return ___startSlot_1; }
	inline int32_t* get_address_of_startSlot_1() { return &___startSlot_1; }
	inline void set_startSlot_1(int32_t value)
	{
		___startSlot_1 = value;
	}

	inline static int32_t get_offset_of_endSlot_2() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___endSlot_2)); }
	inline int32_t get_endSlot_2() const { return ___endSlot_2; }
	inline int32_t* get_address_of_endSlot_2() { return &___endSlot_2; }
	inline void set_endSlot_2(int32_t value)
	{
		___endSlot_2 = value;
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___material_3)); }
	inline Material_t193706927 * get_material_3() const { return ___material_3; }
	inline Material_t193706927 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t193706927 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_firstVertexIndex_6() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___firstVertexIndex_6)); }
	inline int32_t get_firstVertexIndex_6() const { return ___firstVertexIndex_6; }
	inline int32_t* get_address_of_firstVertexIndex_6() { return &___firstVertexIndex_6; }
	inline void set_firstVertexIndex_6(int32_t value)
	{
		___firstVertexIndex_6 = value;
	}

	inline static int32_t get_offset_of_forceSeparate_7() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2610930291, ___forceSeparate_7)); }
	inline bool get_forceSeparate_7() const { return ___forceSeparate_7; }
	inline bool* get_address_of_forceSeparate_7() { return &___forceSeparate_7; }
	inline void set_forceSeparate_7(bool value)
	{
		___forceSeparate_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Spine.Unity.MeshGeneration.SubmeshInstruction
struct SubmeshInstruction_t2610930291_marshaled_pinvoke
{
	Skeleton_t1387859465 * ___skeleton_0;
	int32_t ___startSlot_1;
	int32_t ___endSlot_2;
	Material_t193706927 * ___material_3;
	int32_t ___triangleCount_4;
	int32_t ___vertexCount_5;
	int32_t ___firstVertexIndex_6;
	int32_t ___forceSeparate_7;
};
// Native definition for COM marshalling of Spine.Unity.MeshGeneration.SubmeshInstruction
struct SubmeshInstruction_t2610930291_marshaled_com
{
	Skeleton_t1387859465 * ___skeleton_0;
	int32_t ___startSlot_1;
	int32_t ___endSlot_2;
	Material_t193706927 * ___material_3;
	int32_t ___triangleCount_4;
	int32_t ___vertexCount_5;
	int32_t ___firstVertexIndex_6;
	int32_t ___forceSeparate_7;
};
