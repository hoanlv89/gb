#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t2919945039;
// UniWebView
struct UniWebView_t3614141785;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView/<LoadFromJarPackage>c__Iterator0
struct  U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518  : public Il2CppObject
{
public:
	// System.String UniWebView/<LoadFromJarPackage>c__Iterator0::jarFilePath
	String_t* ___jarFilePath_0;
	// UnityEngine.WWW UniWebView/<LoadFromJarPackage>c__Iterator0::<stream>__0
	WWW_t2919945039 * ___U3CstreamU3E__0_1;
	// UniWebView UniWebView/<LoadFromJarPackage>c__Iterator0::$this
	UniWebView_t3614141785 * ___U24this_2;
	// System.Object UniWebView/<LoadFromJarPackage>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean UniWebView/<LoadFromJarPackage>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UniWebView/<LoadFromJarPackage>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_jarFilePath_0() { return static_cast<int32_t>(offsetof(U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518, ___jarFilePath_0)); }
	inline String_t* get_jarFilePath_0() const { return ___jarFilePath_0; }
	inline String_t** get_address_of_jarFilePath_0() { return &___jarFilePath_0; }
	inline void set_jarFilePath_0(String_t* value)
	{
		___jarFilePath_0 = value;
		Il2CppCodeGenWriteBarrier(&___jarFilePath_0, value);
	}

	inline static int32_t get_offset_of_U3CstreamU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518, ___U3CstreamU3E__0_1)); }
	inline WWW_t2919945039 * get_U3CstreamU3E__0_1() const { return ___U3CstreamU3E__0_1; }
	inline WWW_t2919945039 ** get_address_of_U3CstreamU3E__0_1() { return &___U3CstreamU3E__0_1; }
	inline void set_U3CstreamU3E__0_1(WWW_t2919945039 * value)
	{
		___U3CstreamU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstreamU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518, ___U24this_2)); }
	inline UniWebView_t3614141785 * get_U24this_2() const { return ___U24this_2; }
	inline UniWebView_t3614141785 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(UniWebView_t3614141785 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLoadFromJarPackageU3Ec__Iterator0_t3228334518, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
