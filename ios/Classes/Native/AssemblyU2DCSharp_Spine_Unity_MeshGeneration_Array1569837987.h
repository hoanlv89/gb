#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh>
struct DoubleBuffered_1_t3037131311;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t1667832231;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t1640977307;
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

// Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator
struct  ArraysSubmeshSetMeshGenerator_t1569837987  : public ArraysMeshGenerator_t818279068
{
public:
	// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::<ZSpacing>k__BackingField
	float ___U3CZSpacingU3Ek__BackingField_10;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator/SmartMesh> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::doubleBufferedSmartMesh
	DoubleBuffered_1_t3037131311 * ___doubleBufferedSmartMesh_11;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::currentInstructions
	ExposedList_1_t1667832231 * ___currentInstructions_12;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::attachmentBuffer
	ExposedList_1_t1640977307 * ___attachmentBuffer_13;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer> Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::submeshBuffers
	ExposedList_1_t4097365855 * ___submeshBuffers_14;
	// UnityEngine.Material[] Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::sharedMaterials
	MaterialU5BU5D_t3123989686* ___sharedMaterials_15;

public:
	inline static int32_t get_offset_of_U3CZSpacingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t1569837987, ___U3CZSpacingU3Ek__BackingField_10)); }
	inline float get_U3CZSpacingU3Ek__BackingField_10() const { return ___U3CZSpacingU3Ek__BackingField_10; }
	inline float* get_address_of_U3CZSpacingU3Ek__BackingField_10() { return &___U3CZSpacingU3Ek__BackingField_10; }
	inline void set_U3CZSpacingU3Ek__BackingField_10(float value)
	{
		___U3CZSpacingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_doubleBufferedSmartMesh_11() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t1569837987, ___doubleBufferedSmartMesh_11)); }
	inline DoubleBuffered_1_t3037131311 * get_doubleBufferedSmartMesh_11() const { return ___doubleBufferedSmartMesh_11; }
	inline DoubleBuffered_1_t3037131311 ** get_address_of_doubleBufferedSmartMesh_11() { return &___doubleBufferedSmartMesh_11; }
	inline void set_doubleBufferedSmartMesh_11(DoubleBuffered_1_t3037131311 * value)
	{
		___doubleBufferedSmartMesh_11 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedSmartMesh_11, value);
	}

	inline static int32_t get_offset_of_currentInstructions_12() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t1569837987, ___currentInstructions_12)); }
	inline ExposedList_1_t1667832231 * get_currentInstructions_12() const { return ___currentInstructions_12; }
	inline ExposedList_1_t1667832231 ** get_address_of_currentInstructions_12() { return &___currentInstructions_12; }
	inline void set_currentInstructions_12(ExposedList_1_t1667832231 * value)
	{
		___currentInstructions_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_12, value);
	}

	inline static int32_t get_offset_of_attachmentBuffer_13() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t1569837987, ___attachmentBuffer_13)); }
	inline ExposedList_1_t1640977307 * get_attachmentBuffer_13() const { return ___attachmentBuffer_13; }
	inline ExposedList_1_t1640977307 ** get_address_of_attachmentBuffer_13() { return &___attachmentBuffer_13; }
	inline void set_attachmentBuffer_13(ExposedList_1_t1640977307 * value)
	{
		___attachmentBuffer_13 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentBuffer_13, value);
	}

	inline static int32_t get_offset_of_submeshBuffers_14() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t1569837987, ___submeshBuffers_14)); }
	inline ExposedList_1_t4097365855 * get_submeshBuffers_14() const { return ___submeshBuffers_14; }
	inline ExposedList_1_t4097365855 ** get_address_of_submeshBuffers_14() { return &___submeshBuffers_14; }
	inline void set_submeshBuffers_14(ExposedList_1_t4097365855 * value)
	{
		___submeshBuffers_14 = value;
		Il2CppCodeGenWriteBarrier(&___submeshBuffers_14, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_15() { return static_cast<int32_t>(offsetof(ArraysSubmeshSetMeshGenerator_t1569837987, ___sharedMaterials_15)); }
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
