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

// Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator
struct ArraysSubmeshedMeshGenerator_t3813443114;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3970727598;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction
struct SubmeshedMeshInstruction_t2779064907;
// Spine.Skeleton
struct Skeleton_t1387859465;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_MeshA1995062502.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Subme2779064907.h"

// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::.ctor()
extern "C"  void ArraysSubmeshedMeshGenerator__ctor_m2605310134 (ArraysSubmeshedMeshGenerator_t3813443114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::get_Separators()
extern "C"  List_1_t3970727598 * ArraysSubmeshedMeshGenerator_get_Separators_m2212567099 (ArraysSubmeshedMeshGenerator_t3813443114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::get_ZSpacing()
extern "C"  float ArraysSubmeshedMeshGenerator_get_ZSpacing_m658798812 (ArraysSubmeshedMeshGenerator_t3813443114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::set_ZSpacing(System.Single)
extern "C"  void ArraysSubmeshedMeshGenerator_set_ZSpacing_m604121741 (ArraysSubmeshedMeshGenerator_t3813443114 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.SubmeshedMeshInstruction Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::GenerateInstruction(Spine.Skeleton)
extern "C"  SubmeshedMeshInstruction_t2779064907 * ArraysSubmeshedMeshGenerator_GenerateInstruction_m2745075738 (ArraysSubmeshedMeshGenerator_t3813443114 * __this, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.MeshAndMaterials Spine.Unity.MeshGeneration.ArraysSubmeshedMeshGenerator::GenerateMesh(Spine.Unity.MeshGeneration.SubmeshedMeshInstruction)
extern "C"  MeshAndMaterials_t1995062502  ArraysSubmeshedMeshGenerator_GenerateMesh_m2732978738 (ArraysSubmeshedMeshGenerator_t3813443114 * __this, SubmeshedMeshInstruction_t2779064907 * ___meshInstructions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
