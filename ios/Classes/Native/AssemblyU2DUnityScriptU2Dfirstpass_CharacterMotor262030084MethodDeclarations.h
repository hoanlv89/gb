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

// CharacterMotor
struct CharacterMotor_t262030084;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit4070855101.h"

// System.Void CharacterMotor::.ctor()
extern "C"  void CharacterMotor__ctor_m4081518952 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Awake()
extern "C"  void CharacterMotor_Awake_m1719153399 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::UpdateFunction()
extern "C"  void CharacterMotor_UpdateFunction_m1626345733 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::FixedUpdate()
extern "C"  void CharacterMotor_FixedUpdate_m3703682021 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Update()
extern "C"  void CharacterMotor_Update_m2546334067 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::ApplyInputVelocityChange(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  CharacterMotor_ApplyInputVelocityChange_m4051799264 (CharacterMotor_t262030084 * __this, Vector3_t2243707580  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::ApplyGravityAndJumping(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  CharacterMotor_ApplyGravityAndJumping_m2743621754 (CharacterMotor_t262030084 * __this, Vector3_t2243707580  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void CharacterMotor_OnControllerColliderHit_m4088261964 (CharacterMotor_t262030084 * __this, ControllerColliderHit_t4070855101 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CharacterMotor::SubtractNewPlatformVelocity()
extern "C"  Il2CppObject * CharacterMotor_SubtractNewPlatformVelocity_m2541802268 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::MoveWithPlatform()
extern "C"  bool CharacterMotor_MoveWithPlatform_m2171095432 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::GetDesiredHorizontalVelocity()
extern "C"  Vector3_t2243707580  CharacterMotor_GetDesiredHorizontalVelocity_m2081900363 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::AdjustGroundVelocityToNormal(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  CharacterMotor_AdjustGroundVelocityToNormal_m1237848211 (CharacterMotor_t262030084 * __this, Vector3_t2243707580  ___hVelocity0, Vector3_t2243707580  ___groundNormal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsGroundedTest()
extern "C"  bool CharacterMotor_IsGroundedTest_m4211493588 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::GetMaxAcceleration(System.Boolean)
extern "C"  float CharacterMotor_GetMaxAcceleration_m2342667435 (CharacterMotor_t262030084 * __this, bool ___grounded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float CharacterMotor_CalculateJumpVerticalSpeed_m3823140890 (CharacterMotor_t262030084 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsJumping()
extern "C"  bool CharacterMotor_IsJumping_m22665268 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsSliding()
extern "C"  bool CharacterMotor_IsSliding_m1456990606 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsTouchingCeiling()
extern "C"  bool CharacterMotor_IsTouchingCeiling_m139932488 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsGrounded()
extern "C"  bool CharacterMotor_IsGrounded_m1798441976 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::TooSteep()
extern "C"  bool CharacterMotor_TooSteep_m3285924121 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::GetDirection()
extern "C"  Vector3_t2243707580  CharacterMotor_GetDirection_m1662088895 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::SetControllable(System.Boolean)
extern "C"  void CharacterMotor_SetControllable_m1201365818 (CharacterMotor_t262030084 * __this, bool ___controllable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::MaxSpeedInDirection(UnityEngine.Vector3)
extern "C"  float CharacterMotor_MaxSpeedInDirection_m1801846030 (CharacterMotor_t262030084 * __this, Vector3_t2243707580  ___desiredMovementDirection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::SetVelocity(UnityEngine.Vector3)
extern "C"  void CharacterMotor_SetVelocity_m1636506972 (CharacterMotor_t262030084 * __this, Vector3_t2243707580  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Main()
extern "C"  void CharacterMotor_Main_m1316009417 (CharacterMotor_t262030084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
