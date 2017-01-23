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

// Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator
struct ArraysSimpleMeshGenerator_t1231969734;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// Spine.Skeleton
struct Skeleton_t1387859465;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::.ctor()
extern "C"  void ArraysSimpleMeshGenerator__ctor_m2906193116 (ArraysSimpleMeshGenerator_t1231969734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::get_Scale()
extern "C"  float ArraysSimpleMeshGenerator_get_Scale_m2000192473 (ArraysSimpleMeshGenerator_t1231969734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::set_Scale(System.Single)
extern "C"  void ArraysSimpleMeshGenerator_set_Scale_m2219990982 (ArraysSimpleMeshGenerator_t1231969734 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::get_ZSpacing()
extern "C"  float ArraysSimpleMeshGenerator_get_ZSpacing_m656856814 (ArraysSimpleMeshGenerator_t1231969734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::set_ZSpacing(System.Single)
extern "C"  void ArraysSimpleMeshGenerator_set_ZSpacing_m2553557269 (ArraysSimpleMeshGenerator_t1231969734 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::get_LastGeneratedMesh()
extern "C"  Mesh_t1356156583 * ArraysSimpleMeshGenerator_get_LastGeneratedMesh_m3958824804 (ArraysSimpleMeshGenerator_t1231969734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Spine.Unity.MeshGeneration.ArraysSimpleMeshGenerator::GenerateMesh(Spine.Skeleton)
extern "C"  Mesh_t1356156583 * ArraysSimpleMeshGenerator_GenerateMesh_m2733722415 (ArraysSimpleMeshGenerator_t1231969734 * __this, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
