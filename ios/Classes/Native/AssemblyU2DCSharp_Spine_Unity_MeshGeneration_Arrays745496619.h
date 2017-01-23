#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer
struct  SubmeshTriangleBuffer_t745496619  : public Il2CppObject
{
public:
	// System.Int32[] Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer::triangles
	Int32U5BU5D_t3030399641* ___triangles_0;
	// System.Int32 Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer::triangleCount
	int32_t ___triangleCount_1;
	// System.Int32 Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer::firstVertex
	int32_t ___firstVertex_2;

public:
	inline static int32_t get_offset_of_triangles_0() { return static_cast<int32_t>(offsetof(SubmeshTriangleBuffer_t745496619, ___triangles_0)); }
	inline Int32U5BU5D_t3030399641* get_triangles_0() const { return ___triangles_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_0() { return &___triangles_0; }
	inline void set_triangles_0(Int32U5BU5D_t3030399641* value)
	{
		___triangles_0 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_0, value);
	}

	inline static int32_t get_offset_of_triangleCount_1() { return static_cast<int32_t>(offsetof(SubmeshTriangleBuffer_t745496619, ___triangleCount_1)); }
	inline int32_t get_triangleCount_1() const { return ___triangleCount_1; }
	inline int32_t* get_address_of_triangleCount_1() { return &___triangleCount_1; }
	inline void set_triangleCount_1(int32_t value)
	{
		___triangleCount_1 = value;
	}

	inline static int32_t get_offset_of_firstVertex_2() { return static_cast<int32_t>(offsetof(SubmeshTriangleBuffer_t745496619, ___firstVertex_2)); }
	inline int32_t get_firstVertex_2() const { return ___firstVertex_2; }
	inline int32_t* get_address_of_firstVertex_2() { return &___firstVertex_2; }
	inline void set_firstVertex_2(int32_t value)
	{
		___firstVertex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
