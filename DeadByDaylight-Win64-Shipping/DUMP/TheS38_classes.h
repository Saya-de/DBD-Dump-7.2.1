// Class TheS38.S38P01
// Size: 0x4b8 (Inherited: 0x3c8)
struct US38P01 : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct UAnimInstance* _S38P01AnimInstance; // 0x3d0(0x08)
	struct UActivatableExposedEffect* _exposedStatusEffectClass; // 0x3d8(0x08)
	struct UActivatableExposedEffect* _exposedEffect; // 0x3e0(0x08)
	float _exposedDuration; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UActivatableStatusEffect* _hasteStatusEffectClass; // 0x3f0(0x08)
	struct UActivatableStatusEffect* _hasteEffect; // 0x3f8(0x08)
	float _hasteAmount; // 0x400(0x04)
	float _hasteDuration; // 0x404(0x04)
	struct UActivatableExhaustedEffect* _exhaustionEffectClass; // 0x408(0x08)
	struct UActivatableExhaustedEffect* _exhaustionEffect; // 0x410(0x08)
	float _exhaustionDuration[0x3]; // 0x418(0x0c)
	char pad_424[0x4]; // 0x424(0x04)
	struct TArray<struct ACollectable*> _collectableClasses; // 0x428(0x10)
	struct TArray<struct FName> _unsupportedItemAddons; // 0x438(0x10)
	struct US38P01Interaction* _interactionBP; // 0x448(0x08)
	float _animationDuration; // 0x450(0x04)
	char pad_454[0x64]; // 0x454(0x64)

	void Multicast_OnSecondaryPerkEffect(bool shouldScream); // Function TheS38.S38P01.Multicast_OnSecondaryPerkEffect // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5a4c970
	void Multicast_OnAnimationStart(); // Function TheS38.S38P01.Multicast_OnAnimationStart // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55b2e70
	struct TArray<struct FName> GetUnsupportedItemAddons(); // Function TheS38.S38P01.GetUnsupportedItemAddons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4c8e0
	float GetHasteDuration(); // Function TheS38.S38P01.GetHasteDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4c8b0
	float GetHasteAmount(); // Function TheS38.S38P01.GetHasteAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x579f690
	float GetExposedDuration(); // Function TheS38.S38P01.GetExposedDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceede0
	float GetExhaustionDurationAtLevel(); // Function TheS38.S38P01.GetExhaustionDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a333c0
	struct TArray<struct ACollectable*> GetCollectableClasses(); // Function TheS38.S38P01.GetCollectableClasses // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4c820
	void Cosmetic_MakeSurvivorScream(); // Function TheS38.S38P01.Cosmetic_MakeSurvivorScream // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnPerkActivated(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheS38.S38P01.Authority_OnPerkActivated // (Final|Native|Private|HasOutParms) // @ game+0x5a4c710
	void Authority_OnAnimationFinish(); // Function TheS38.S38P01.Authority_OnAnimationFinish // (Final|Native|Private) // @ game+0x5a4c6f0
	void Authority_GiveSecondaryPerkEffect(); // Function TheS38.S38P01.Authority_GiveSecondaryPerkEffect // (Final|Native|Private) // @ game+0x5a4c6d0
};

// Class TheS38.S38P01Interaction
// Size: 0x640 (Inherited: 0x630)
struct US38P01Interaction : UInteractionDefinition {
	char pad_630[0x10]; // 0x630(0x10)
};

// Class TheS38.S38P02
// Size: 0x448 (Inherited: 0x3c8)
struct US38P02 : UPerk {
	float _percentChanceOfDoubleScream; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UStatusEffect* _perkStatusEffectClass; // 0x3d0(0x08)
	struct UStatusEffect* _perkStatusEffect; // 0x3d8(0x08)
	struct UStatusEffect* _auraStatusEffectClass; // 0x3e0(0x08)
	float _auraDuration[0x3]; // 0x3e8(0x0c)
	float _extraAuraDurationPerExtraScream; // 0x3f4(0x04)
	float _screamDuration; // 0x3f8(0x04)
	float _minRandomScreamDelay; // 0x3fc(0x04)
	float _maxRandomScreamDelay; // 0x400(0x04)
	int32_t _maxScreamCount; // 0x404(0x04)
	float _cooldownDuration; // 0x408(0x04)
	char pad_40C[0x3c]; // 0x40c(0x3c)

	void OnSurvivorScream(); // Function TheS38.S38P02.OnSurvivorScream // (Final|Native|Private) // @ game+0x5a4d170
	void Multicast_MakeSurvivorScream(int32_t timesToScream); // Function TheS38.S38P02.Multicast_MakeSurvivorScream // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4cf5630
	float GetScreamDuration(); // Function TheS38.S38P02.GetScreamDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd810
	float GetMinRandomScreamDelay(); // Function TheS38.S38P02.GetMinRandomScreamDelay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4d150
	int32_t GetMaxScreamCount(); // Function TheS38.S38P02.GetMaxScreamCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4d130
	float GetMaxRandomScreamDelay(); // Function TheS38.S38P02.GetMaxRandomScreamDelay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4d110
	float GetExtraAuraDurationPerExtraScream(); // Function TheS38.S38P02.GetExtraAuraDurationPerExtraScream // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd830
	float GetCooldownDuration(); // Function TheS38.S38P02.GetCooldownDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a4d0f0
	float GetAuraDurationAtLevel(); // Function TheS38.S38P02.GetAuraDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd750
	void Cosmetic_MakeSurvivorScream(); // Function TheS38.S38P02.Cosmetic_MakeSurvivorScream // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnIsApplicableChanged(struct UGameplayModifierContainer* Container, bool IsApplicable); // Function TheS38.S38P02.Authority_OnIsApplicableChanged // (Final|Native|Private) // @ game+0x5a4d020
};

// Class TheS38.S38P02StatusEffect
// Size: 0x360 (Inherited: 0x350)
struct US38P02StatusEffect : UStatusEffect {
	struct FName _headJointName; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)
};

// Class TheS38.S38P03
// Size: 0x3f0 (Inherited: 0x3c8)
struct US38P03 : UPerk {
	struct UStatusEffect* _onGroundEffectClass; // 0x3c8(0x08)
	float _hasteDuration[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct US38P03Interaction* _interactionBP; // 0x3e0(0x08)
	struct UInteractionDefinition* _perkInteraction; // 0x3e8(0x08)

	float GetHasteDurationAtLevel(); // Function TheS38.S38P03.GetHasteDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
	void Authority_OnPickSelfUp(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheS38.S38P03.Authority_OnPickSelfUp // (Final|Native|Private|HasOutParms) // @ game+0x5a4d710
	void Authority_OnPerkActivated(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheS38.S38P03.Authority_OnPerkActivated // (Final|Native|Private|HasOutParms) // @ game+0x5a4d600
	void Authority_OnExitGatesPowered(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheS38.S38P03.Authority_OnExitGatesPowered // (Final|Native|Private|HasOutParms) // @ game+0x5a4d4f0
};

// Class TheS38.S38P03Interaction
// Size: 0x630 (Inherited: 0x630)
struct US38P03Interaction : UInteractionDefinition {
};

// Class TheS38.S38P03OnGroundStatusEffect
// Size: 0x3a0 (Inherited: 0x350)
struct US38P03OnGroundStatusEffect : UStatusEffect {
	struct UStatusEffect* _hasteStatusEffectClass; // 0x350(0x08)
	float _hastePercentage; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UStatusEffect* _hasteStatusEffect; // 0x360(0x08)
	char pad_368[0x38]; // 0x368(0x38)

	void Authority_OnPickSelfUp(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheS38.S38P03OnGroundStatusEffect.Authority_OnPickSelfUp // (Final|Native|Private|HasOutParms) // @ game+0x5a4dcc0
	void Authority_OnCamperHealthChange(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function TheS38.S38P03OnGroundStatusEffect.Authority_OnCamperHealthChange // (Final|Native|Private) // @ game+0x5a4dbf0
	void Authority_HealSelf(); // Function TheS38.S38P03OnGroundStatusEffect.Authority_HealSelf // (Final|Native|Private) // @ game+0x5a4dbd0
};

// Class TheS38.SurvivorPerkAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct USurvivorPerkAnimInstance : UBaseSurvivorAnimInstance {
	struct FGameplayTagContainer _tagsToTriggerAnimation; // 0x548(0x20)
	bool IsInPerkInteraction; // 0x568(0x01)
};

