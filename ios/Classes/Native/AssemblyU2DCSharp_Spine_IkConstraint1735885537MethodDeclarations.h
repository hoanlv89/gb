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

// Spine.IkConstraint
struct IkConstraint_t1735885537;
// Spine.IkConstraintData
struct IkConstraintData_t590779377;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.Bone
struct Bone_t4151268332;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_IkConstraintData590779377.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_Bone4151268332.h"

// System.Void Spine.IkConstraint::.ctor(Spine.IkConstraintData,Spine.Skeleton)
extern "C"  void IkConstraint__ctor_m475670549 (IkConstraint_t1735885537 * __this, IkConstraintData_t590779377 * ___data0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.IkConstraintData Spine.IkConstraint::get_Data()
extern "C"  IkConstraintData_t590779377 * IkConstraint_get_Data_m3332563849 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.IkConstraint::get_Order()
extern "C"  int32_t IkConstraint_get_Order_m3206966002 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.IkConstraint::get_Bones()
extern "C"  ExposedList_1_t3208170272 * IkConstraint_get_Bones_m2679025603 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.IkConstraint::get_Target()
extern "C"  Bone_t4151268332 * IkConstraint_get_Target_m1390220373 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::set_Target(Spine.Bone)
extern "C"  void IkConstraint_set_Target_m2756949596 (IkConstraint_t1735885537 * __this, Bone_t4151268332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.IkConstraint::get_BendDirection()
extern "C"  int32_t IkConstraint_get_BendDirection_m2806878178 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::set_BendDirection(System.Int32)
extern "C"  void IkConstraint_set_BendDirection_m1611510367 (IkConstraint_t1735885537 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.IkConstraint::get_Mix()
extern "C"  float IkConstraint_get_Mix_m2395125064 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::set_Mix(System.Single)
extern "C"  void IkConstraint_set_Mix_m2761818563 (IkConstraint_t1735885537 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Update()
extern "C"  void IkConstraint_Update_m3241829842 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Apply()
extern "C"  void IkConstraint_Apply_m1616546963 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.IkConstraint::ToString()
extern "C"  String_t* IkConstraint_ToString_m1549971754 (IkConstraint_t1735885537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Apply(Spine.Bone,System.Single,System.Single,System.Single)
extern "C"  void IkConstraint_Apply_m3643513903 (Il2CppObject * __this /* static, unused */, Bone_t4151268332 * ___bone0, float ___targetX1, float ___targetY2, float ___alpha3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraint::Apply(Spine.Bone,Spine.Bone,System.Single,System.Single,System.Int32,System.Single)
extern "C"  void IkConstraint_Apply_m461384223 (Il2CppObject * __this /* static, unused */, Bone_t4151268332 * ___parent0, Bone_t4151268332 * ___child1, float ___targetX2, float ___targetY3, int32_t ___bendDir4, float ___alpha5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
