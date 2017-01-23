#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t3201915814;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3961629604;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2825504181;
// System.Func`2<System.Object,System.Single>
struct Func_2_t2212564818;
// System.Func`4<System.Object,System.Object,System.Object,System.Boolean>
struct Func_4_t4066896662;
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t2930771239;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_Core_System_Func_2_gen3201915814.h"
#include "System_Core_System_Func_2_gen3201915814MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "System_Core_System_Func_2_gen3961629604.h"
#include "System_Core_System_Func_2_gen3961629604MethodDeclarations.h"
#include "System_Core_System_Func_2_gen2825504181.h"
#include "System_Core_System_Func_2_gen2825504181MethodDeclarations.h"
#include "System_Core_System_Func_2_gen2212564818.h"
#include "System_Core_System_Func_2_gen2212564818MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "System_Core_System_Func_4_gen4066896662.h"
#include "System_Core_System_Func_4_gen4066896662MethodDeclarations.h"
#include "System_Core_System_Func_4_gen2930771239.h"
#include "System_Core_System_Func_4_gen2930771239MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m809665740_gshared (Func_2_t3201915814 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m174842950_gshared (Func_2_t3201915814 * __this, KeyValuePair_2_t38854645  ___arg10, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Func_2_Invoke_m174842950((Func_2_t3201915814 *)__this->get_prev_9(),___arg10, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Il2CppObject *, void* __this, KeyValuePair_2_t38854645  ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef bool (*FunctionPointerType) (void* __this, KeyValuePair_2_t38854645  ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppClass* KeyValuePair_2_t38854645_il2cpp_TypeInfo_var;
extern const uint32_t Func_2_BeginInvoke_m2337603003_MetadataUsageId;
extern "C"  Il2CppObject * Func_2_BeginInvoke_m2337603003_gshared (Func_2_t3201915814 * __this, KeyValuePair_2_t38854645  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_2_BeginInvoke_m2337603003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t38854645_il2cpp_TypeInfo_var, &___arg10);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m4101312048_gshared (Func_2_t3201915814 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1354888807_gshared (Func_2_t3961629604 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m2968608789_gshared (Func_2_t3961629604 * __this, Il2CppObject * ___arg10, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Func_2_Invoke_m2968608789((Func_2_t3961629604 *)__this->get_prev_9(),___arg10, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (void* __this, Il2CppObject * ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef bool (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1429757044_gshared (Func_2_t3961629604 * __this, Il2CppObject * ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg10;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m924416567_gshared (Func_2_t3961629604 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1684831714_gshared (Func_2_t2825504181 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m3288232740_gshared (Func_2_t2825504181 * __this, Il2CppObject * ___arg10, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Func_2_Invoke_m3288232740((Func_2_t2825504181 *)__this->get_prev_9(),___arg10, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, Il2CppObject * ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4034295761_gshared (Func_2_t2825504181 * __this, Il2CppObject * ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg10;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m1674435418_gshared (Func_2_t2825504181 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Il2CppObject *)__result;
}
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1874497973_gshared (Func_2_t2212564818 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m1144286175_gshared (Func_2_t2212564818 * __this, Il2CppObject * ___arg10, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Func_2_Invoke_m1144286175((Func_2_t2212564818 *)__this->get_prev_9(),___arg10, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (void* __this, Il2CppObject * ___arg10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef float (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m669892004_gshared (Func_2_t2212564818 * __this, Il2CppObject * ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg10;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m971580865_gshared (Func_2_t2212564818 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m2172527533_gshared (Func_4_t4066896662 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Boolean>::Invoke(T1,T2,T3)
extern "C"  bool Func_4_Invoke_m4093412051_gshared (Func_4_t4066896662 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Func_4_Invoke_m4093412051((Func_4_t4066896662 *)__this->get_prev_9(),___arg10, ___arg21, ___arg32, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (void* __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef bool (*FunctionPointerType) (void* __this, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Boolean>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_4_BeginInvoke_m3963604364_gshared (Func_4_t4066896662 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_4_EndInvoke_m568092533_gshared (Func_4_t4066896662 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m1682155356_gshared (Func_4_t2930771239 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C"  Il2CppObject * Func_4_Invoke_m1680586528_gshared (Func_4_t2930771239 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Func_4_Invoke_m1680586528((Func_4_t2930771239 *)__this->get_prev_9(),___arg10, ___arg21, ___arg32, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_4_BeginInvoke_m2447375651_gshared (Func_4_t2930771239 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_4_EndInvoke_m304102752_gshared (Func_4_t2930771239 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Il2CppObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
