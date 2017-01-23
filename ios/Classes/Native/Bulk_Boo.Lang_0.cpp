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

// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Boo_Lang_U3CModuleU3E3783534214.h"
#include "Boo_Lang_U3CModuleU3E3783534214MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Builtins3763248930.h"
#include "Boo_Lang_Boo_Lang_Builtins3763248930MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern const uint32_t Builtins_join_m2036613869_MetadataUsageId;
extern "C"  String_t* Builtins_join_m2036613869 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___enumerable0, String_t* ___separator1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builtins_join_m2036613869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Il2CppObject * L_1 = ___enumerable0;
		NullCheck(L_1);
		Il2CppObject * L_2 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		Il2CppObject * L_3 = V_1;
		V_2 = ((Il2CppObject *)IsInst(L_3, IDisposable_t2427283555_il2cpp_TypeInfo_var));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			Il2CppObject * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			StringBuilder_t1221177846 * L_6 = V_0;
			Il2CppObject * L_7 = V_1;
			NullCheck(L_7);
			Il2CppObject * L_8 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_6);
			StringBuilder_Append_m3541816491(L_6, L_8, /*hidden argument*/NULL);
			goto IL_0046;
		}

IL_0031:
		{
			StringBuilder_t1221177846 * L_9 = V_0;
			String_t* L_10 = ___separator1;
			NullCheck(L_9);
			StringBuilder_Append_m3636508479(L_9, L_10, /*hidden argument*/NULL);
			StringBuilder_t1221177846 * L_11 = V_0;
			Il2CppObject * L_12 = V_1;
			NullCheck(L_12);
			Il2CppObject * L_13 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_12);
			NullCheck(L_11);
			StringBuilder_Append_m3541816491(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0046:
		{
			Il2CppObject * L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_16 = V_2;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			Il2CppObject * L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0063:
	{
		StringBuilder_t1221177846 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = StringBuilder_ToString_m1507807375(L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
