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

// iCloudManager
struct iCloudManager_t2506189173;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<iCloudData>
struct Action_1_t2882436870;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ISN_Result
struct ISN_Result_t2775631610;
// iCloudData
struct iCloudData_t3080637488;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_iCloudData3080637488.h"

// System.Void iCloudManager::.ctor()
extern "C"  void iCloudManager__ctor_m1134742466 (iCloudManager_t2506189173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::add_OnCloundInitAction(System.Action`1<ISN_Result>)
extern "C"  void iCloudManager_add_OnCloundInitAction_m3301239822 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::remove_OnCloundInitAction(System.Action`1<ISN_Result>)
extern "C"  void iCloudManager_remove_OnCloundInitAction_m33582019 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::add_OnCloudDataReceivedAction(System.Action`1<iCloudData>)
extern "C"  void iCloudManager_add_OnCloudDataReceivedAction_m3903530825 (Il2CppObject * __this /* static, unused */, Action_1_t2882436870 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::remove_OnCloudDataReceivedAction(System.Action`1<iCloudData>)
extern "C"  void iCloudManager_remove_OnCloudDataReceivedAction_m359701572 (Il2CppObject * __this /* static, unused */, Action_1_t2882436870 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_initCloud()
extern "C"  void iCloudManager__initCloud_m1091091068 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_setString(System.String,System.String)
extern "C"  void iCloudManager__setString_m89158044 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_setDouble(System.String,System.Single)
extern "C"  void iCloudManager__setDouble_m3879210787 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_setData(System.String,System.String)
extern "C"  void iCloudManager__setData_m3915679129 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_requestDataForKey(System.String)
extern "C"  void iCloudManager__requestDataForKey_m1822187782 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::Awake()
extern "C"  void iCloudManager_Awake_m67896225 (iCloudManager_t2506189173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::init()
extern "C"  void iCloudManager_init_m143061178 (iCloudManager_t2506189173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::setString(System.String,System.String)
extern "C"  void iCloudManager_setString_m2890721799 (iCloudManager_t2506189173 * __this, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::setFloat(System.String,System.Single)
extern "C"  void iCloudManager_setFloat_m3352024565 (iCloudManager_t2506189173 * __this, String_t* ___key0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::setData(System.String,System.Byte[])
extern "C"  void iCloudManager_setData_m3697762991 (iCloudManager_t2506189173 * __this, String_t* ___key0, ByteU5BU5D_t3397334013* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::requestDataForKey(System.String)
extern "C"  void iCloudManager_requestDataForKey_m610672163 (iCloudManager_t2506189173 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudInit()
extern "C"  void iCloudManager_OnCloudInit_m3299950434 (iCloudManager_t2506189173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudInitFail()
extern "C"  void iCloudManager_OnCloudInitFail_m2619899150 (iCloudManager_t2506189173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudDataChanged()
extern "C"  void iCloudManager_OnCloudDataChanged_m1416069706 (iCloudManager_t2506189173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudData(System.String)
extern "C"  void iCloudManager_OnCloudData_m3618590 (iCloudManager_t2506189173 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudDataEmpty(System.String)
extern "C"  void iCloudManager_OnCloudDataEmpty_m3694880251 (iCloudManager_t2506189173 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::.cctor()
extern "C"  void iCloudManager__cctor_m3378771047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::<OnCloundInitAction>m__0(ISN_Result)
extern "C"  void iCloudManager_U3COnCloundInitActionU3Em__0_m3014066091 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::<OnCloudDataReceivedAction>m__1(iCloudData)
extern "C"  void iCloudManager_U3COnCloudDataReceivedActionU3Em__1_m1815170003 (Il2CppObject * __this /* static, unused */, iCloudData_t3080637488 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
