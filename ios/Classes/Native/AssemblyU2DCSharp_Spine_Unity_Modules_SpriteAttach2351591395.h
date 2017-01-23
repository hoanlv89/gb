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
// UnityEngine.Sprite
struct Sprite_t309593783;
// Spine.RegionAttachment
struct RegionAttachment_t3278399543;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,Spine.AtlasPage>
struct Dictionary_2_t3788511822;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SpriteAttacher
struct  SpriteAttacher_t2351591395  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Spine.Unity.Modules.SpriteAttacher::attachOnStart
	bool ___attachOnStart_4;
	// UnityEngine.Sprite Spine.Unity.Modules.SpriteAttacher::sprite
	Sprite_t309593783 * ___sprite_5;
	// System.String Spine.Unity.Modules.SpriteAttacher::slot
	String_t* ___slot_6;
	// Spine.RegionAttachment Spine.Unity.Modules.SpriteAttacher::attachment
	RegionAttachment_t3278399543 * ___attachment_7;
	// System.Boolean Spine.Unity.Modules.SpriteAttacher::applyPMA
	bool ___applyPMA_8;

public:
	inline static int32_t get_offset_of_attachOnStart_4() { return static_cast<int32_t>(offsetof(SpriteAttacher_t2351591395, ___attachOnStart_4)); }
	inline bool get_attachOnStart_4() const { return ___attachOnStart_4; }
	inline bool* get_address_of_attachOnStart_4() { return &___attachOnStart_4; }
	inline void set_attachOnStart_4(bool value)
	{
		___attachOnStart_4 = value;
	}

	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(SpriteAttacher_t2351591395, ___sprite_5)); }
	inline Sprite_t309593783 * get_sprite_5() const { return ___sprite_5; }
	inline Sprite_t309593783 ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(Sprite_t309593783 * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_5, value);
	}

	inline static int32_t get_offset_of_slot_6() { return static_cast<int32_t>(offsetof(SpriteAttacher_t2351591395, ___slot_6)); }
	inline String_t* get_slot_6() const { return ___slot_6; }
	inline String_t** get_address_of_slot_6() { return &___slot_6; }
	inline void set_slot_6(String_t* value)
	{
		___slot_6 = value;
		Il2CppCodeGenWriteBarrier(&___slot_6, value);
	}

	inline static int32_t get_offset_of_attachment_7() { return static_cast<int32_t>(offsetof(SpriteAttacher_t2351591395, ___attachment_7)); }
	inline RegionAttachment_t3278399543 * get_attachment_7() const { return ___attachment_7; }
	inline RegionAttachment_t3278399543 ** get_address_of_attachment_7() { return &___attachment_7; }
	inline void set_attachment_7(RegionAttachment_t3278399543 * value)
	{
		___attachment_7 = value;
		Il2CppCodeGenWriteBarrier(&___attachment_7, value);
	}

	inline static int32_t get_offset_of_applyPMA_8() { return static_cast<int32_t>(offsetof(SpriteAttacher_t2351591395, ___applyPMA_8)); }
	inline bool get_applyPMA_8() const { return ___applyPMA_8; }
	inline bool* get_address_of_applyPMA_8() { return &___applyPMA_8; }
	inline void set_applyPMA_8(bool value)
	{
		___applyPMA_8 = value;
	}
};

struct SpriteAttacher_t2351591395_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,Spine.AtlasPage> Spine.Unity.Modules.SpriteAttacher::atlasPageCache
	Dictionary_2_t3788511822 * ___atlasPageCache_9;

public:
	inline static int32_t get_offset_of_atlasPageCache_9() { return static_cast<int32_t>(offsetof(SpriteAttacher_t2351591395_StaticFields, ___atlasPageCache_9)); }
	inline Dictionary_2_t3788511822 * get_atlasPageCache_9() const { return ___atlasPageCache_9; }
	inline Dictionary_2_t3788511822 ** get_address_of_atlasPageCache_9() { return &___atlasPageCache_9; }
	inline void set_atlasPageCache_9(Dictionary_2_t3788511822 * value)
	{
		___atlasPageCache_9 = value;
		Il2CppCodeGenWriteBarrier(&___atlasPageCache_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
