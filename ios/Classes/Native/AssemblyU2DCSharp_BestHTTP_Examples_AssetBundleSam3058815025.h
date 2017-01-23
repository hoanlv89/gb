#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2674559435;
// BestHTTP.Examples.AssetBundleSample
struct AssetBundleSample_t4142830892;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1
struct  U3CProcessAssetBundleU3Ec__Iterator1_t3058815025  : public Il2CppObject
{
public:
	// UnityEngine.AssetBundle BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1::bundle
	AssetBundle_t2054978754 * ___bundle_0;
	// UnityEngine.AssetBundleRequest BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1::<asyncAsset>__0
	AssetBundleRequest_t2674559435 * ___U3CasyncAssetU3E__0_1;
	// BestHTTP.Examples.AssetBundleSample BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1::$this
	AssetBundleSample_t4142830892 * ___U24this_2;
	// System.Object BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 BestHTTP.Examples.AssetBundleSample/<ProcessAssetBundle>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_bundle_0() { return static_cast<int32_t>(offsetof(U3CProcessAssetBundleU3Ec__Iterator1_t3058815025, ___bundle_0)); }
	inline AssetBundle_t2054978754 * get_bundle_0() const { return ___bundle_0; }
	inline AssetBundle_t2054978754 ** get_address_of_bundle_0() { return &___bundle_0; }
	inline void set_bundle_0(AssetBundle_t2054978754 * value)
	{
		___bundle_0 = value;
		Il2CppCodeGenWriteBarrier(&___bundle_0, value);
	}

	inline static int32_t get_offset_of_U3CasyncAssetU3E__0_1() { return static_cast<int32_t>(offsetof(U3CProcessAssetBundleU3Ec__Iterator1_t3058815025, ___U3CasyncAssetU3E__0_1)); }
	inline AssetBundleRequest_t2674559435 * get_U3CasyncAssetU3E__0_1() const { return ___U3CasyncAssetU3E__0_1; }
	inline AssetBundleRequest_t2674559435 ** get_address_of_U3CasyncAssetU3E__0_1() { return &___U3CasyncAssetU3E__0_1; }
	inline void set_U3CasyncAssetU3E__0_1(AssetBundleRequest_t2674559435 * value)
	{
		___U3CasyncAssetU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CasyncAssetU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CProcessAssetBundleU3Ec__Iterator1_t3058815025, ___U24this_2)); }
	inline AssetBundleSample_t4142830892 * get_U24this_2() const { return ___U24this_2; }
	inline AssetBundleSample_t4142830892 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(AssetBundleSample_t4142830892 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CProcessAssetBundleU3Ec__Iterator1_t3058815025, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CProcessAssetBundleU3Ec__Iterator1_t3058815025, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CProcessAssetBundleU3Ec__Iterator1_t3058815025, ___U24PC_5)); }
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
