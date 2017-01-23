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

// UnityScript.Lang.Array
struct Array_t1396575355;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1396575355.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1396575355MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_CollectionBase1101587467MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Collections_ArrayList4252133567MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "Boo_Lang_Boo_Lang_Builtins3763248930MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m4252655432 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m2525885291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::push(System.Object)
extern "C"  int32_t Array_push_m3845507796 (Array_t1396575355 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		ArrayList_t4252133567 * L_2 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		return L_3;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern Il2CppCodeGenString* _stringLiteral372029314;
extern const uint32_t Array_ToString_m1547520517_MetadataUsageId;
extern "C"  String_t* Array_ToString_m1547520517 (Array_t1396575355 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1547520517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Array_Join_m140080931(__this, _stringLiteral372029314, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m2036613869(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityScript.Lang.Array::join(System.String)
extern "C"  String_t* Array_join_m2273326275 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m2036613869(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m1064559095 (Array_t1396575355 * __this, Il2CppObject * ___newValue0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
