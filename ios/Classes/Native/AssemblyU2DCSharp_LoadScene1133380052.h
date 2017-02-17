#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneBundleObject[]
struct SceneBundleObjectU5BU5D_t2523371260;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Slider
struct Slider_t297367283;

#include "AssemblyU2DCSharp_SuperScene3760801569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadScene
struct  LoadScene_t1133380052  : public SuperScene_t3760801569
{
public:
	// SceneBundleObject[] LoadScene::sceneBundles
	SceneBundleObjectU5BU5D_t2523371260* ___sceneBundles_30;
	// System.String LoadScene::optionalVariantBundle
	String_t* ___optionalVariantBundle_31;
	// System.String LoadScene::optionalVariantName
	String_t* ___optionalVariantName_32;
	// UnityEngine.UI.Text LoadScene::status
	Text_t356221433 * ___status_33;
	// UnityEngine.UI.Slider LoadScene::slider
	Slider_t297367283 * ___slider_34;
	// System.Int32 LoadScene::count
	int32_t ___count_35;

public:
	inline static int32_t get_offset_of_sceneBundles_30() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___sceneBundles_30)); }
	inline SceneBundleObjectU5BU5D_t2523371260* get_sceneBundles_30() const { return ___sceneBundles_30; }
	inline SceneBundleObjectU5BU5D_t2523371260** get_address_of_sceneBundles_30() { return &___sceneBundles_30; }
	inline void set_sceneBundles_30(SceneBundleObjectU5BU5D_t2523371260* value)
	{
		___sceneBundles_30 = value;
		Il2CppCodeGenWriteBarrier(&___sceneBundles_30, value);
	}

	inline static int32_t get_offset_of_optionalVariantBundle_31() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___optionalVariantBundle_31)); }
	inline String_t* get_optionalVariantBundle_31() const { return ___optionalVariantBundle_31; }
	inline String_t** get_address_of_optionalVariantBundle_31() { return &___optionalVariantBundle_31; }
	inline void set_optionalVariantBundle_31(String_t* value)
	{
		___optionalVariantBundle_31 = value;
		Il2CppCodeGenWriteBarrier(&___optionalVariantBundle_31, value);
	}

	inline static int32_t get_offset_of_optionalVariantName_32() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___optionalVariantName_32)); }
	inline String_t* get_optionalVariantName_32() const { return ___optionalVariantName_32; }
	inline String_t** get_address_of_optionalVariantName_32() { return &___optionalVariantName_32; }
	inline void set_optionalVariantName_32(String_t* value)
	{
		___optionalVariantName_32 = value;
		Il2CppCodeGenWriteBarrier(&___optionalVariantName_32, value);
	}

	inline static int32_t get_offset_of_status_33() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___status_33)); }
	inline Text_t356221433 * get_status_33() const { return ___status_33; }
	inline Text_t356221433 ** get_address_of_status_33() { return &___status_33; }
	inline void set_status_33(Text_t356221433 * value)
	{
		___status_33 = value;
		Il2CppCodeGenWriteBarrier(&___status_33, value);
	}

	inline static int32_t get_offset_of_slider_34() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___slider_34)); }
	inline Slider_t297367283 * get_slider_34() const { return ___slider_34; }
	inline Slider_t297367283 ** get_address_of_slider_34() { return &___slider_34; }
	inline void set_slider_34(Slider_t297367283 * value)
	{
		___slider_34 = value;
		Il2CppCodeGenWriteBarrier(&___slider_34, value);
	}

	inline static int32_t get_offset_of_count_35() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___count_35)); }
	inline int32_t get_count_35() const { return ___count_35; }
	inline int32_t* get_address_of_count_35() { return &___count_35; }
	inline void set_count_35(int32_t value)
	{
		___count_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
