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
// Spine.Unity.DoubleBufferedMesh
struct DoubleBufferedMesh_t3331042699;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Arrays818279068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator
struct  ArraysSimpleMeshGenerator_t1231969734  : public ArraysMeshGenerator_t818279068
{
public:
	// System.Single Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::scale
	float ___scale_10;
	// System.Single Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::<ZSpacing>k__BackingField
	float ___U3CZSpacingU3Ek__BackingField_11;
	// UnityEngine.Mesh Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::lastGeneratedMesh
	Mesh_t1356156583 * ___lastGeneratedMesh_12;
	// Spine.Unity.DoubleBufferedMesh Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::doubleBufferedMesh
	DoubleBufferedMesh_t3331042699 * ___doubleBufferedMesh_13;
	// System.Int32[] Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::triangles
	Int32U5BU5D_t3030399641* ___triangles_14;

public:
	inline static int32_t get_offset_of_scale_10() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t1231969734, ___scale_10)); }
	inline float get_scale_10() const { return ___scale_10; }
	inline float* get_address_of_scale_10() { return &___scale_10; }
	inline void set_scale_10(float value)
	{
		___scale_10 = value;
	}

	inline static int32_t get_offset_of_U3CZSpacingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t1231969734, ___U3CZSpacingU3Ek__BackingField_11)); }
	inline float get_U3CZSpacingU3Ek__BackingField_11() const { return ___U3CZSpacingU3Ek__BackingField_11; }
	inline float* get_address_of_U3CZSpacingU3Ek__BackingField_11() { return &___U3CZSpacingU3Ek__BackingField_11; }
	inline void set_U3CZSpacingU3Ek__BackingField_11(float value)
	{
		___U3CZSpacingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_lastGeneratedMesh_12() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t1231969734, ___lastGeneratedMesh_12)); }
	inline Mesh_t1356156583 * get_lastGeneratedMesh_12() const { return ___lastGeneratedMesh_12; }
	inline Mesh_t1356156583 ** get_address_of_lastGeneratedMesh_12() { return &___lastGeneratedMesh_12; }
	inline void set_lastGeneratedMesh_12(Mesh_t1356156583 * value)
	{
		___lastGeneratedMesh_12 = value;
		Il2CppCodeGenWriteBarrier(&___lastGeneratedMesh_12, value);
	}

	inline static int32_t get_offset_of_doubleBufferedMesh_13() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t1231969734, ___doubleBufferedMesh_13)); }
	inline DoubleBufferedMesh_t3331042699 * get_doubleBufferedMesh_13() const { return ___doubleBufferedMesh_13; }
	inline DoubleBufferedMesh_t3331042699 ** get_address_of_doubleBufferedMesh_13() { return &___doubleBufferedMesh_13; }
	inline void set_doubleBufferedMesh_13(DoubleBufferedMesh_t3331042699 * value)
	{
		___doubleBufferedMesh_13 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedMesh_13, value);
	}

	inline static int32_t get_offset_of_triangles_14() { return static_cast<int32_t>(offsetof(ArraysSimpleMeshGenerator_t1231969734, ___triangles_14)); }
	inline Int32U5BU5D_t3030399641* get_triangles_14() const { return ___triangles_14; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_14() { return &___triangles_14; }
	inline void set_triangles_14(Int32U5BU5D_t3030399641* value)
	{
		___triangles_14 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
