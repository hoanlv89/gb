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

// IOSStoreProductView
struct IOSStoreProductView_t607200268;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void IOSStoreProductView::.ctor()
extern "C"  void IOSStoreProductView__ctor_m515929291 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::.ctor(System.String[])
extern "C"  void IOSStoreProductView__ctor_m72927807 (IOSStoreProductView_t607200268 * __this, StringU5BU5D_t1642385972* ___ids0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_Loaded(System.Action)
extern "C"  void IOSStoreProductView_add_Loaded_m891075671 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_Loaded(System.Action)
extern "C"  void IOSStoreProductView_remove_Loaded_m3022796630 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_LoadFailed(System.Action)
extern "C"  void IOSStoreProductView_add_LoadFailed_m3966408705 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_LoadFailed(System.Action)
extern "C"  void IOSStoreProductView_remove_LoadFailed_m494021838 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_Appeared(System.Action)
extern "C"  void IOSStoreProductView_add_Appeared_m3266898906 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_Appeared(System.Action)
extern "C"  void IOSStoreProductView_remove_Appeared_m2850651365 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_Dismissed(System.Action)
extern "C"  void IOSStoreProductView_add_Dismissed_m3043607975 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_Dismissed(System.Action)
extern "C"  void IOSStoreProductView_remove_Dismissed_m3525600796 (IOSStoreProductView_t607200268 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::_createProductView(System.Int32,System.String)
extern "C"  void IOSStoreProductView__createProductView_m1338153561 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, String_t* ___productsId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::_showProductView(System.Int32)
extern "C"  void IOSStoreProductView__showProductView_m399716588 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::addProductId(System.String)
extern "C"  void IOSStoreProductView_addProductId_m1899443902 (IOSStoreProductView_t607200268 * __this, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::Load()
extern "C"  void IOSStoreProductView_Load_m764310273 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::Show()
extern "C"  void IOSStoreProductView_Show_m52823394 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSStoreProductView::get_id()
extern "C"  int32_t IOSStoreProductView_get_id_m4253295001 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnProductViewAppeard()
extern "C"  void IOSStoreProductView_OnProductViewAppeard_m272022207 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnProductViewDismissed()
extern "C"  void IOSStoreProductView_OnProductViewDismissed_m1942633723 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnContentLoaded()
extern "C"  void IOSStoreProductView_OnContentLoaded_m4032890632 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnContentLoadFailed()
extern "C"  void IOSStoreProductView_OnContentLoadFailed_m206520168 (IOSStoreProductView_t607200268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::SetId(System.Int32)
extern "C"  void IOSStoreProductView_SetId_m231812149 (IOSStoreProductView_t607200268 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<Loaded>m__0()
extern "C"  void IOSStoreProductView_U3CLoadedU3Em__0_m3081703351 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<LoadFailed>m__1()
extern "C"  void IOSStoreProductView_U3CLoadFailedU3Em__1_m2381908634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<Appeared>m__2()
extern "C"  void IOSStoreProductView_U3CAppearedU3Em__2_m2944910948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<Dismissed>m__3()
extern "C"  void IOSStoreProductView_U3CDismissedU3Em__3_m1887886240 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
