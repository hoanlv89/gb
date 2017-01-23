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

// Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator
struct ArraysSubmeshSetMeshGenerator_t1569837987;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t1667832231;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_MeshA1995062502.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::.ctor()
extern "C"  void ArraysSubmeshSetMeshGenerator__ctor_m3407445225 (ArraysSubmeshSetMeshGenerator_t1569837987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::get_ZSpacing()
extern "C"  float ArraysSubmeshSetMeshGenerator_get_ZSpacing_m1500164069 (ArraysSubmeshSetMeshGenerator_t1569837987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::set_ZSpacing(System.Single)
extern "C"  void ArraysSubmeshSetMeshGenerator_set_ZSpacing_m81751406 (ArraysSubmeshSetMeshGenerator_t1569837987 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.MeshAndMaterials Spine.Unity.MeshGeneration.ArraysSubmeshSetMeshGenerator::GenerateMesh(Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>,System.Int32,System.Int32)
extern "C"  MeshAndMaterials_t1995062502  ArraysSubmeshSetMeshGenerator_GenerateMesh_m3232423283 (ArraysSubmeshSetMeshGenerator_t1569837987 * __this, ExposedList_1_t1667832231 * ___instructions0, int32_t ___startSubmesh1, int32_t ___endSubmesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
