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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.DoubleBufferedMesh
struct  DoubleBufferedMesh_t3331042699  : public Il2CppObject
{
public:
	// UnityEngine.Mesh Spine.Unity.DoubleBufferedMesh::mesh1
	Mesh_t1356156583 * ___mesh1_0;
	// UnityEngine.Mesh Spine.Unity.DoubleBufferedMesh::mesh2
	Mesh_t1356156583 * ___mesh2_1;
	// System.Boolean Spine.Unity.DoubleBufferedMesh::usingMesh1
	bool ___usingMesh1_2;

public:
	inline static int32_t get_offset_of_mesh1_0() { return static_cast<int32_t>(offsetof(DoubleBufferedMesh_t3331042699, ___mesh1_0)); }
	inline Mesh_t1356156583 * get_mesh1_0() const { return ___mesh1_0; }
	inline Mesh_t1356156583 ** get_address_of_mesh1_0() { return &___mesh1_0; }
	inline void set_mesh1_0(Mesh_t1356156583 * value)
	{
		___mesh1_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh1_0, value);
	}

	inline static int32_t get_offset_of_mesh2_1() { return static_cast<int32_t>(offsetof(DoubleBufferedMesh_t3331042699, ___mesh2_1)); }
	inline Mesh_t1356156583 * get_mesh2_1() const { return ___mesh2_1; }
	inline Mesh_t1356156583 ** get_address_of_mesh2_1() { return &___mesh2_1; }
	inline void set_mesh2_1(Mesh_t1356156583 * value)
	{
		___mesh2_1 = value;
		Il2CppCodeGenWriteBarrier(&___mesh2_1, value);
	}

	inline static int32_t get_offset_of_usingMesh1_2() { return static_cast<int32_t>(offsetof(DoubleBufferedMesh_t3331042699, ___usingMesh1_2)); }
	inline bool get_usingMesh1_2() const { return ___usingMesh1_2; }
	inline bool* get_address_of_usingMesh1_2() { return &___usingMesh1_2; }
	inline void set_usingMesh1_2(bool value)
	{
		___usingMesh1_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
