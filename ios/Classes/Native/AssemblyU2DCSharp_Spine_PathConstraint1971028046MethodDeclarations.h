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

// Spine.PathConstraint
struct PathConstraint_t1971028046;
// Spine.PathConstraintData
struct PathConstraintData_t2853837726;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.Slot
struct Slot_t306639170;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.PathAttachment
struct PathAttachment_t2721492598;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintData2853837726.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_Slot306639170.h"
#include "AssemblyU2DCSharp_Spine_PathAttachment2721492598.h"

// System.Void Spine.PathConstraint::.ctor(Spine.PathConstraintData,Spine.Skeleton)
extern "C"  void PathConstraint__ctor_m4200946901 (PathConstraint_t1971028046 * __this, PathConstraintData_t2853837726 * ___data0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraint::get_Order()
extern "C"  int32_t PathConstraint_get_Order_m1174029125 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_Position()
extern "C"  float PathConstraint_get_Position_m3974060736 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_Position(System.Single)
extern "C"  void PathConstraint_set_Position_m210533793 (PathConstraint_t1971028046 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_Spacing()
extern "C"  float PathConstraint_get_Spacing_m2549197098 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_Spacing(System.Single)
extern "C"  void PathConstraint_set_Spacing_m666296673 (PathConstraint_t1971028046 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_RotateMix()
extern "C"  float PathConstraint_get_RotateMix_m2962260172 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_RotateMix(System.Single)
extern "C"  void PathConstraint_set_RotateMix_m2007692477 (PathConstraint_t1971028046 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PathConstraint::get_TranslateMix()
extern "C"  float PathConstraint_get_TranslateMix_m2856380513 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_TranslateMix(System.Single)
extern "C"  void PathConstraint_set_TranslateMix_m3233934498 (PathConstraint_t1971028046 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.PathConstraint::get_Bones()
extern "C"  ExposedList_1_t3208170272 * PathConstraint_get_Bones_m721171098 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.PathConstraint::get_Target()
extern "C"  Slot_t306639170 * PathConstraint_get_Target_m2347515706 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::set_Target(Spine.Slot)
extern "C"  void PathConstraint_set_Target_m4760327 (PathConstraint_t1971028046 * __this, Slot_t306639170 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathConstraintData Spine.PathConstraint::get_Data()
extern "C"  PathConstraintData_t2853837726 * PathConstraint_get_Data_m1553300337 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::Apply()
extern "C"  void PathConstraint_Apply_m1631999066 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::Update()
extern "C"  void PathConstraint_Update_m4103041889 (PathConstraint_t1971028046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.PathConstraint::ComputeWorldPositions(Spine.PathAttachment,System.Int32,System.Boolean,System.Boolean,System.Boolean)
extern "C"  SingleU5BU5D_t577127397* PathConstraint_ComputeWorldPositions_m1855989342 (PathConstraint_t1971028046 * __this, PathAttachment_t2721492598 * ___path0, int32_t ___spacesCount1, bool ___tangents2, bool ___percentPosition3, bool ___percentSpacing4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::AddBeforePosition(System.Single,System.Single[],System.Int32,System.Single[],System.Int32)
extern "C"  void PathConstraint_AddBeforePosition_m2505909494 (PathConstraint_t1971028046 * __this, float ___p0, SingleU5BU5D_t577127397* ___temp1, int32_t ___i2, SingleU5BU5D_t577127397* ___output3, int32_t ___o4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::AddAfterPosition(System.Single,System.Single[],System.Int32,System.Single[],System.Int32)
extern "C"  void PathConstraint_AddAfterPosition_m2043913553 (PathConstraint_t1971028046 * __this, float ___p0, SingleU5BU5D_t577127397* ___temp1, int32_t ___i2, SingleU5BU5D_t577127397* ___output3, int32_t ___o4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraint::AddCurvePosition(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single[],System.Int32,System.Boolean)
extern "C"  void PathConstraint_AddCurvePosition_m1732102403 (PathConstraint_t1971028046 * __this, float ___p0, float ___x11, float ___y12, float ___cx13, float ___cy14, float ___cx25, float ___cy26, float ___x27, float ___y28, SingleU5BU5D_t577127397* ___output9, int32_t ___o10, bool ___tangents11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
