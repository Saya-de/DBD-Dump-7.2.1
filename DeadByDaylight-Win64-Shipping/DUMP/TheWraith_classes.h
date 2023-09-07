// Class TheWraith.Addon_Wraith_TheSerpentSoot
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAddon_Wraith_TheSerpentSoot : UItemAddon {
};

// Class TheWraith.BaseCloakInteraction
// Size: 0x7e0 (Inherited: 0x790)
struct UBaseCloakInteraction : UBasicChargeableInteraction {
	char pad_790[0x50]; // 0x790(0x50)
};

// Class TheWraith.CloakComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UCloakComponent : UActorComponent {
	bool _isCloaked; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UBasicChargeableInteraction* _cloakInteraction; // 0xc0(0x08)
	struct UBasicChargeableInteraction* _uncloakInteraction; // 0xc8(0x08)

	void OnRep_IsCloaked(); // Function TheWraith.CloakComponent.OnRep_IsCloaked // (Final|Native|Private) // @ game+0x5a98070
};

// Class TheWraith.CloakInteraction
// Size: 0x7e0 (Inherited: 0x7e0)
struct UCloakInteraction : UBaseCloakInteraction {
};

// Class TheWraith.UncloakInteraction
// Size: 0x860 (Inherited: 0x7e0)
struct UUncloakInteraction : UBaseCloakInteraction {
	struct UCurveFloat* _postUncloakSpeedCurve; // 0x7d8(0x08)
	struct FTunableStat _postUncloakSpeedCurveDuration; // 0x7e0(0x80)
};

// Class TheWraith.WraithAnimInstance
// Size: 0x6b0 (Inherited: 0x610)
struct UWraithAnimInstance : UKillerAnimInstance {
	bool _isRingingBell; // 0x610(0x01)
	bool _isCloaking; // 0x611(0x01)
	bool _isUncloaking; // 0x612(0x01)
	char pad_613[0x5]; // 0x613(0x05)
	struct FPerspectiveDependentAnimSequenceSelector _cloakingInSelector; // 0x618(0x18)
	struct FPerspectiveDependentAnimSequenceSelector _cloakingSelector; // 0x630(0x18)
	struct FPerspectiveDependentAnimSequenceSelector _cloakingOutSelector; // 0x648(0x18)
	struct FPerspectiveDependentAnimSequenceSelector _uncloakingInSelector; // 0x660(0x18)
	struct FPerspectiveDependentAnimSequenceSelector _uncloakingSelector; // 0x678(0x18)
	struct FPerspectiveDependentAnimSequenceSelector _uncloakingOutSelector; // 0x690(0x18)
	float _cloakingPlayRate; // 0x6a8(0x04)
	char pad_6AC[0x4]; // 0x6ac(0x04)
};

// Class TheWraith.WraithPower
// Size: 0x4e0 (Inherited: 0x4c8)
struct AWraithPower : ACollectable {
	char pad_4C8[0x18]; // 0x4c8(0x18)

	bool IsUncloaking(); // Function TheWraith.WraithPower.IsUncloaking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a988c0
	bool IsCloaking(); // Function TheWraith.WraithPower.IsCloaking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a98890
	void ForceUncloak(); // Function TheWraith.WraithPower.ForceUncloak // (Final|Native|Public|BlueprintCallable) // @ game+0x5a98870
};

