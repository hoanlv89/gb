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

// Spine.TransformConstraint
struct TransformConstraint_t4071757855;
// Spine.TransformConstraintData
struct TransformConstraintData_t3710849647;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.Bone
struct Bone_t4151268332;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraintData3710849647.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_Bone4151268332.h"

// System.Void Spine.TransformConstraint::.ctor(Spine.TransformConstraintData,Spine.Skeleton)
extern "C"  void TransformConstraint__ctor_m2473547705 (TransformConstraint_t4071757855 * __this, TransformConstraintData_t3710849647 * ___data0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TransformConstraintData Spine.TransformConstraint::get_Data()
extern "C"  TransformConstraintData_t3710849647 * TransformConstraint_get_Data_m1410773785 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TransformConstraint::get_Order()
extern "C"  int32_t TransformConstraint_get_Order_m2055261140 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::get_Bones()
extern "C"  ExposedList_1_t3208170272 * TransformConstraint_get_Bones_m640485413 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.TransformConstraint::get_Target()
extern "C"  Bone_t4151268332 * TransformConstraint_get_Target_m570461191 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_Target(Spine.Bone)
extern "C"  void TransformConstraint_set_Target_m455647942 (TransformConstraint_t4071757855 * __this, Bone_t4151268332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_RotateMix()
extern "C"  float TransformConstraint_get_RotateMix_m155221175 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_RotateMix(System.Single)
extern "C"  void TransformConstraint_set_RotateMix_m2138356718 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_TranslateMix()
extern "C"  float TransformConstraint_get_TranslateMix_m2473675806 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_TranslateMix(System.Single)
extern "C"  void TransformConstraint_set_TranslateMix_m1724825103 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_ScaleMix()
extern "C"  float TransformConstraint_get_ScaleMix_m2491420006 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_ScaleMix(System.Single)
extern "C"  void TransformConstraint_set_ScaleMix_m3304956201 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_ShearMix()
extern "C"  float TransformConstraint_get_ShearMix_m3464522503 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_ShearMix(System.Single)
extern "C"  void TransformConstraint_set_ShearMix_m1663722838 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::Apply()
extern "C"  void TransformConstraint_Apply_m3518535285 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::Update()
extern "C"  void TransformConstraint_Update_m2835257168 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.TransformConstraint::ToString()
extern "C"  String_t* TransformConstraint_ToString_m85992098 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
