#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh
struct SmartMesh_t396822684;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct SubmeshedMeshInstruction_t2779064907;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Subme2779064907.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::.ctor()
extern "C"  void SmartMesh__ctor_m3283138523 (SmartMesh_t396822684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::Set(UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color32[],Spine.Unity.MeshGeneration.SubmeshedMeshInstruction)
extern "C"  void SmartMesh_Set_m3227625309 (SmartMesh_t396822684 * __this, Vector3U5BU5D_t1172311765* ___verts0, Vector2U5BU5D_t686124026* ___uvs1, Color32U5BU5D_t30278651* ___colors2, SubmeshedMeshInstruction_t2779064907 * ___instruction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator/SmartMesh::StructureDoesntMatch(Spine.Unity.MeshGeneration.SubmeshedMeshInstruction)
extern "C"  bool SmartMesh_StructureDoesntMatch_m3071481860 (SmartMesh_t396822684 * __this, SubmeshedMeshInstruction_t2779064907 * ___instructions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
