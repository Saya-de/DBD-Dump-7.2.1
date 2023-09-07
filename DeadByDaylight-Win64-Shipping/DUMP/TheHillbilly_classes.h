// Class TheHillbilly.ChainsawAnalyticsBaseComponent
// Size: 0x100 (Inherited: 0xb8)
struct UChainsawAnalyticsBaseComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	float _maxDistanceFromHookToBeConsideredCamping; // 0xd0(0x04)
	char pad_D4[0x2c]; // 0xd4(0x2c)
};

// Class TheHillbilly.HillbillyChainsawAttack
// Size: 0x400 (Inherited: 0x390)
struct UHillbillyChainsawAttack : UPounceAttack {
	char pad_390[0x58]; // 0x390(0x58)
	struct FGameplayTag _chainsawHitGameEventTag; // 0x3e8(0x0c)
	struct FGameplayTag _chainsawAttemptGameEventTag; // 0x3f4(0x0c)
};

// Class TheHillbilly.HillbillyChainsawAttackOpenSubstate
// Size: 0x178 (Inherited: 0x130)
struct UHillbillyChainsawAttackOpenSubstate : UPounceAttackOpenSubstate {
	char pad_130[0x48]; // 0x130(0x48)
};

// Class TheHillbilly.HillbillyChainsawAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UHillbillyChainsawAttackHittingSubstate : UPounceAttackHittingSubstate {
};

// Class TheHillbilly.HillbillyChainsawAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UHillbillyChainsawAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheHillbilly.HillbillyChainsawAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UHillbillyChainsawAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheHillbilly.HillbillyChainsawAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UHillbillyChainsawAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheHillbilly.ChainsawRevInteraction
// Size: 0x7c0 (Inherited: 0x760)
struct UChainsawRevInteraction : UChargeableInteractionDefinition {
	char pad_760[0x28]; // 0x760(0x28)
	struct FName _soundCueDistanceDataID; // 0x788(0x0c)
	char pad_794[0x4]; // 0x794(0x04)
	struct UAkAudioEvent* _chainsawRevStartAkAudioEvent; // 0x798(0x08)
	struct UAkAudioEvent* _chainsawRevEndAkAudioEvent; // 0x7a0(0x08)
	struct ASlasherPlayer* _owningSlasher; // 0x7a8(0x08)
	char pad_7B0[0x10]; // 0x7b0(0x10)

	void OnLevelReadyToPlay(); // Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x574f9d0
};

// Class TheHillbilly.ApexMufflerAddon
// Size: 0x2c8 (Inherited: 0x2c8)
struct UApexMufflerAddon : USpawnEffectsOnAllSurvivorsBaseAddon {
};

// Class TheHillbilly.HillbillyAnalyticsComponent
// Size: 0x188 (Inherited: 0x100)
struct UHillbillyAnalyticsComponent : UChainsawAnalyticsBaseComponent {
	char pad_100[0x88]; // 0x100(0x88)
};

// Class TheHillbilly.HillbillyAnimInstance
// Size: 0x610 (Inherited: 0x610)
struct UHillbillyAnimInstance : UKillerAnimInstance {
};

// Class TheHillbilly.HillbillyChainsawHitEventAddon
// Size: 0x2c8 (Inherited: 0x2c8)
struct UHillbillyChainsawHitEventAddon : UOnEventBaseAddon {
};

// Class TheHillbilly.HillbillyChainsawOverheatComponent
// Size: 0x518 (Inherited: 0xb8)
struct UHillbillyChainsawOverheatComponent : UActorComponent {
	struct FMulticastInlineDelegate OnHeatChargeUpdateDelegate; // 0xb8(0x10)
	char pad_C8[0x118]; // 0xc8(0x118)
	struct FTagStateBool _isChainsawOverheating; // 0x1e0(0x30)
	struct UPowerChargeComponent* _chainsawHeatCharge; // 0x210(0x08)
	struct FTunableStat _heatMaxCharge; // 0x218(0x80)
	struct FTunableStat _heatRevStartAmount; // 0x298(0x80)
	struct FTunableStat _heatRevChargeRate; // 0x318(0x80)
	struct FTunableStat _heatDashChargeRate; // 0x398(0x80)
	struct FTunableStat _heatDischargeRate; // 0x418(0x80)
	struct FTunableStat _overheatDischargeRate; // 0x498(0x80)

	void OnRep_IsChainsawOverheating(); // Function TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating // (Final|Native|Private) // @ game+0x5750c20
	void OnLevelReadyToPlay(); // Function TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5750c00
	void OnHeatChargeUpdate(float currentCharge, float previosCharge); // Function TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate // (Final|Native|Private) // @ game+0x5750b30
	bool IsChainsawOverheating(); // Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5750b00
	void Authority_OnHeatChargeFull(); // Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull // (Final|Native|Private) // @ game+0x5750ae0
	void Authority_OnHeatChargeEmpty(); // Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty // (Final|Native|Private) // @ game+0x5750ac0
};

// Class TheHillbilly.HillbillyChainsawRevInteraction
// Size: 0x810 (Inherited: 0x7c0)
struct UHillbillyChainsawRevInteraction : UChainsawRevInteraction {
	char pad_7C0[0x50]; // 0x7c0(0x50)
};

// Class TheHillbilly.HillbillyChainsawSubAnimInstance
// Size: 0x640 (Inherited: 0x620)
struct UHillbillyChainsawSubAnimInstance : UBaseKillerAttackSubAnimInstance {
	bool _isRevvingChainsaw; // 0x618(0x01)
	bool _isRevvingChainsawCancelled; // 0x619(0x01)
	bool _isChainsawSprinting; // 0x61a(0x01)
	bool _isWaitingForChainsaw; // 0x61b(0x01)
	char pad_624[0x1c]; // 0x624(0x1c)
};

// Class TheHillbilly.HillbillyOverheatPresentationItemProgressComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UHillbillyOverheatPresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UHillbillyChainsawOverheatComponent* _hillbillyChainsawOverheatComponent; // 0xc0(0x08)

	void SetHillbillyChainsawOverheatComponent(struct UHillbillyChainsawOverheatComponent* HillbillyChainsawOverheatComponent); // Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x549c400
};

// Class TheHillbilly.IridescentBrickAddon
// Size: 0x300 (Inherited: 0x2c8)
struct UIridescentBrickAddon : UOnEventBaseAddon {
	char pad_2C8[0x28]; // 0x2c8(0x28)
	struct UStatusEffect* _undetectableStatusEffectClass; // 0x2f0(0x08)
	struct UStatusEffect* _undetectableStatusEffect; // 0x2f8(0x08)
};

// Class TheHillbilly.LightbornAuraRevealEffect
// Size: 0x3b8 (Inherited: 0x3b8)
struct ULightbornAuraRevealEffect : UBaseLingeringStatusEffect {
};

// Class TheHillbilly.LightbornBlindFailedIndicatorCondition
// Size: 0x148 (Inherited: 0xe8)
struct ULightbornBlindFailedIndicatorCondition : UEventDrivenModifierCondition {
	float _conditionReevaluationTimerDurationAfterFailedBlind; // 0xe8(0x04)
	char pad_EC[0x5c]; // 0xec(0x5c)
};

// Class TheHillbilly.LoProChainsAddon
// Size: 0x310 (Inherited: 0x2b8)
struct ULoProChainsAddon : UItemAddon {
	struct FAnimationMontageDescriptor _breakPalletMontage; // 0x2b8(0x20)
	float _halfDamageDurationAfterBreakable; // 0x2d8(0x04)
	bool _doesAddonIncludeBreakableWalls; // 0x2dc(0x01)
	char pad_2DD[0x33]; // 0x2dd(0x33)
};

