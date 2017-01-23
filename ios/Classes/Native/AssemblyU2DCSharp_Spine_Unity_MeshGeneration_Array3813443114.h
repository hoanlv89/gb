#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3970727598;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh>
struct DoubleBuffered_1_t1989537406;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct SubmeshedMeshInstruction_t2779064907;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>
struct ExposedList_1_t4097365855;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Arrays818279068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator
struct  ArraysSubmeshedMeshGenerator_t3813443114  : public ArraysMeshGenerator_t818279068
{
public:
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::separators
	List_1_t3970727598 * ___separators_10;
	// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::<ZSpacing>k__BackingField
	float ___U3CZSpacingU3Ek__BackingField_11;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::doubleBufferedSmartMesh
	DoubleBuffered_1_t1989537406 * ___doubleBufferedSmartMesh_12;
	// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::currentInstructions
	SubmeshedMeshInstruction_t2779064907 * ___currentInstructions_13;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::submeshBuffers
	ExposedList_1_t4097365855 * ___submeshBuffers_14;
	// UnityEngine.Material[] Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::sharedMaterials
	MaterialU5BU5D_t3123989686* ___sharedMaterials_15;

public:
	inline static int32_t get_offset_of_separators_10() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t3813443114, ___separators_10)); }
	inline List_1_t3970727598 * get_separators_10() const { return ___separators_10; }
	inline List_1_t3970727598 ** get_address_of_separators_10() { return &___separators_10; }
	inline void set_separators_10(List_1_t3970727598 * value)
	{
		___separators_10 = value;
		Il2CppCodeGenWriteBarrier(&___separators_10, value);
	}

	inline static int32_t get_offset_of_U3CZSpacingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t3813443114, ___U3CZSpacingU3Ek__BackingField_11)); }
	inline float get_U3CZSpacingU3Ek__BackingField_11() const { return ___U3CZSpacingU3Ek__BackingField_11; }
	inline float* get_address_of_U3CZSpacingU3Ek__BackingField_11() { return &___U3CZSpacingU3Ek__BackingField_11; }
	inline void set_U3CZSpacingU3Ek__BackingField_11(float value)
	{
		___U3CZSpacingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_doubleBufferedSmartMesh_12() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t3813443114, ___doubleBufferedSmartMesh_12)); }
	inline DoubleBuffered_1_t1989537406 * get_doubleBufferedSmartMesh_12() const { return ___doubleBufferedSmartMesh_12; }
	inline DoubleBuffered_1_t1989537406 ** get_address_of_doubleBufferedSmartMesh_12() { return &___doubleBufferedSmartMesh_12; }
	inline void set_doubleBufferedSmartMesh_12(DoubleBuffered_1_t1989537406 * value)
	{
		___doubleBufferedSmartMesh_12 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedSmartMesh_12, value);
	}

	inline static int32_t get_offset_of_currentInstructions_13() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t3813443114, ___currentInstructions_13)); }
	inline SubmeshedMeshInstruction_t2779064907 * get_currentInstructions_13() const { return ___currentInstructions_13; }
	inline SubmeshedMeshInstruction_t2779064907 ** get_address_of_currentInstructions_13() { return &___currentInstructions_13; }
	inline void set_currentInstructions_13(SubmeshedMeshInstruction_t2779064907 * value)
	{
		___currentInstructions_13 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_13, value);
	}

	inline static int32_t get_offset_of_submeshBuffers_14() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t3813443114, ___submeshBuffers_14)); }
	inline ExposedList_1_t4097365855 * get_submeshBuffers_14() const { return ___submeshBuffers_14; }
	inline ExposedList_1_t4097365855 ** get_address_of_submeshBuffers_14() { return &___submeshBuffers_14; }
	inline void set_submeshBuffers_14(ExposedList_1_t4097365855 * value)
	{
		___submeshBuffers_14 = value;
		Il2CppCodeGenWriteBarrier(&___submeshBuffers_14, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_15() { return static_cast<int32_t>(offsetof(ArraysSubmeshedMeshGenerator_t3813443114, ___sharedMaterials_15)); }
	inline MaterialU5BU5D_t3123989686* get_sharedMaterials_15() const { return ___sharedMaterials_15; }
	inline MaterialU5BU5D_t3123989686** get_address_of_sharedMaterials_15() { return &___sharedMaterials_15; }
	inline void set_sharedMaterials_15(MaterialU5BU5D_t3123989686* value)
	{
		___sharedMaterials_15 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
