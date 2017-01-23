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

// BundleManager
struct BundleManager_t1368323489;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Object
struct Object_t1021602117;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BundleManager::.ctor()
extern "C"  void BundleManager__ctor_m2518616342 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BundleManager::get_version()
extern "C"  String_t* BundleManager_get_version_m2244150172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BundleManager::get_pathToBundles()
extern "C"  String_t* BundleManager_get_pathToBundles_m2696826465 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BundleManager::get_isReady()
extern "C"  bool BundleManager_get_isReady_m3456948520 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::Awake()
extern "C"  void BundleManager_Awake_m3425675309 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::Update()
extern "C"  void BundleManager_Update_m3127309097 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::InternetIsNotAvailable()
extern "C"  void BundleManager_InternetIsNotAvailable_m4272341113 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::InternetAvailable()
extern "C"  void BundleManager_InternetAvailable_m1411701702 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadManifest(System.String)
extern "C"  Il2CppObject * BundleManager_LoadManifest_m389801041 (BundleManager_t1368323489 * __this, String_t* ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::showErrDialog()
extern "C"  void BundleManager_showErrDialog_m4177278090 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BundleManager::IsBundleLoaded(System.String)
extern "C"  bool BundleManager_IsBundleLoaded_m3238279703 (BundleManager_t1368323489 * __this, String_t* ___bundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::RegisterVariant(System.String,System.String)
extern "C"  void BundleManager_RegisterVariant_m1900691726 (BundleManager_t1368323489 * __this, String_t* ___bundleName0, String_t* ___variantName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object BundleManager::GetAssetFromBundle(System.String,System.String)
extern "C"  Object_t1021602117 * BundleManager_GetAssetFromBundle_m2571824073 (BundleManager_t1368323489 * __this, String_t* ___bundleName0, String_t* ___assetName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BundleManager::LoadBundle(System.String)
extern "C"  bool BundleManager_LoadBundle_m2925641976 (BundleManager_t1368323489 * __this, String_t* ___bundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadBundleCoroutine(System.String)
extern "C"  Il2CppObject * BundleManager_LoadBundleCoroutine_m3217449898 (BundleManager_t1368323489 * __this, String_t* ___bundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::OnDisable()
extern "C"  void BundleManager_OnDisable_m1453025189 (BundleManager_t1368323489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BundleManager::RemapVariantName(System.String)
extern "C"  String_t* BundleManager_RemapVariantName_m3598573320 (BundleManager_t1368323489 * __this, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
