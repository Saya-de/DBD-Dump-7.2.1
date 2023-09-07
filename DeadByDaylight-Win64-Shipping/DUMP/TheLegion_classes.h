// Class TheLegion.Addon_Frenzy_ColdDirt
// Size: 0x320 (Inherited: 0x2b8)
struct UAddon_Frenzy_ColdDirt : UItemAddon {
	struct TMap<int32_t, int32_t> _mapTokenPerChainedHit; // 0x2b8(0x50)
	int32_t _tokensToReachForActivation; // 0x308(0x04)
	float _movementSpeedMultiplierModifier; // 0x30c(0x04)
	char pad_310[0x10]; // 0x310(0x10)
};

// Class TheLegion.BaseFrenzyMixtapeAddon
// Size: 0x2e0 (Inherited: 0x2b8)
struct UBaseFrenzyMixtapeAddon : UItemAddon {
	struct TArray<struct FName> _audioSwitchGroups; // 0x2b8(0x10)
	struct FName _audioSwitchState; // 0x2c8(0x0c)
	char pad_2D4[0xc]; // 0x2d4(0x0c)
};

// Class TheLegion.Addon_Frenzy_FranksMixTape
// Size: 0x2f0 (Inherited: 0x2e0)
struct UAddon_Frenzy_FranksMixTape : UBaseFrenzyMixtapeAddon {
	struct UStatusEffect* _statusEffectFranksWalls; // 0x2e0(0x08)
	struct UStatusEffect* _statusEffectFranksGenerators; // 0x2e8(0x08)
};

// Class TheLegion.Addon_Frenzy_FumingMixTape
// Size: 0x338 (Inherited: 0x2e0)
struct UAddon_Frenzy_FumingMixTape : UBaseFrenzyMixtapeAddon {
	char pad_2E0[0x50]; // 0x2e0(0x50)
	float _regressionModifier; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
};

// Class TheLegion.Addon_Frenzy_JoeysMixTape
// Size: 0x300 (Inherited: 0x2e0)
struct UAddon_Frenzy_JoeysMixTape : UBaseFrenzyMixtapeAddon {
	struct UStatusEffect* _statusEffectToImpose; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class TheLegion.Addon_Frenzy_MuralSketch
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_Frenzy_MuralSketch : UItemAddon {
	float _speedBonusPerHit; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class TheLegion.Addon_Frenzy_NeverSleepPills
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_Frenzy_NeverSleepPills : UItemAddon {
	float _speedModifierDuringFrenzy; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class TheLegion.Addon_Frenzy_StolenSketchBook
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_Frenzy_StolenSketchBook : UItemAddon {
	int32_t _dropItemAfterChainedHitNumber; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class TheLegion.BaseImposeEffectOnFrenzyBleedout
// Size: 0x2c0 (Inherited: 0x2b8)
struct UBaseImposeEffectOnFrenzyBleedout : UItemAddon {
	struct UStatusEffect* _statusEffectToImpose; // 0x2b8(0x08)
};

// Class TheLegion.FrenzyAttack
// Size: 0x3a0 (Inherited: 0x390)
struct UFrenzyAttack : UPounceAttack {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class TheLegion.FrenzyAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UFrenzyAttackHittingSubstate : UPounceAttackHittingSubstate {
};

// Class TheLegion.FrenzyAttackSuccessSubstate
// Size: 0x1a8 (Inherited: 0x118)
struct UFrenzyAttackSuccessSubstate : UPounceAttackSuccessSubstate {
	struct FDBDTunableRowHandle _healthyTime; // 0x118(0x28)
	struct FDBDTunableRowHandle _injuredTime; // 0x140(0x28)
	struct FDBDTunableRowHandle _bleedoutTime; // 0x168(0x28)
	struct UCurveFloat* _healthyCurve; // 0x190(0x08)
	struct UCurveFloat* _injuredCurve; // 0x198(0x08)
	struct UCurveFloat* _bleedoutCurve; // 0x1a0(0x08)
};

// Class TheLegion.FrenzyComponent
// Size: 0x758 (Inherited: 0xb8)
struct UFrenzyComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnFrenzyStarted; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnFrenzyEnded; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnFrenzyEndedNoCooldown; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnInjuredBleedoutStartedDuringFrenzy; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnFrenzyReadyToStart; // 0x100(0x10)
	struct FMulticastInlineDelegate OnFrenzyIncreasedTier; // 0x110(0x10)
	char pad_120[0x150]; // 0x120(0x150)
	struct FTunableStat _allowManuallyEndFrenzy; // 0x270(0x80)
	struct FTunableStat _chargeToLoseOnRemoveBleedoutTimeAttack; // 0x2f0(0x80)
	struct FTunableStat _chargeToLoseOnNonFrenzyAttack; // 0x370(0x80)
	struct FTunableStat _chargeToLoseOnMissedFrenzyAttack; // 0x3f0(0x80)
	struct FTunableStat _cooldownDuration; // 0x470(0x80)
	struct FTunableStat _frenzyMaxDuration; // 0x4f0(0x80)
	struct FTunableStat _frenzyRechargeDuration; // 0x570(0x80)
	struct FTunableStat _usagePercentNeededToStartFrenzy; // 0x5f0(0x80)
	struct ASlasherPlayer* _slasher; // 0x670(0x08)
	char pad_678[0x18]; // 0x678(0x18)
	struct UInteractionDefinition* _cooldownInteraction; // 0x690(0x08)
	struct UStatusEffect* _boltSlasherEffect; // 0x698(0x08)
	struct UStatusEffect* _frenzySlasherEffect; // 0x6a0(0x08)
	struct UStatusEffect* _frenzyTier0SlasherEffect; // 0x6a8(0x08)
	struct UStatusEffect* _frenzyTier1SlasherEffect; // 0x6b0(0x08)
	struct UStatusEffect* _frenzyTier2SlasherEffect; // 0x6b8(0x08)
	struct UStatusEffect* _frenzyTier3SlasherEffect; // 0x6c0(0x08)
	struct UStatusEffect* _frenzyTier4SlasherEffect; // 0x6c8(0x08)
	struct UStatusEffect* _frenzyCooldownEffect; // 0x6d0(0x08)
	struct UStatusEffect* _boltCamperEffect; // 0x6d8(0x08)
	struct UStatusEffect* _frenzyCamperEffect; // 0x6e0(0x08)
	char pad_6E8[0x70]; // 0x6e8(0x70)

	void StartFrenzy(); // Function TheLegion.FrenzyComponent.StartFrenzy // (Final|Native|Public|BlueprintCallable) // @ game+0x59c6490
	void SetStartingFrenzy(bool startingFrenzy); // Function TheLegion.FrenzyComponent.SetStartingFrenzy // (Final|Native|Public|BlueprintCallable) // @ game+0x59c6400
	void SetObjectState(struct UGameplayTagContainerComponent* objectState); // Function TheLegion.FrenzyComponent.SetObjectState // (Final|Native|Public|BlueprintCallable) // @ game+0x59c6370
	void ResumeFrenzyChargeDepletion(); // Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion // (Final|Native|Public|BlueprintCallable) // @ game+0x59c6350
	void PauseFrenzyChargeDepletion(); // Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion // (Final|Native|Public|BlueprintCallable) // @ game+0x59c6330
	void OnMoriStarted(); // Function TheLegion.FrenzyComponent.OnMoriStarted // (Final|Native|Private) // @ game+0x59c6310
	void OnFrenzyCooldownStarted(); // Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x59c62f0
	bool IsStartingFrenzy(); // Function TheLegion.FrenzyComponent.IsStartingFrenzy // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c62b0
	bool IsInFrenzyCooldown(); // Function TheLegion.FrenzyComponent.IsInFrenzyCooldown // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c6270
	bool IsInFrenzy(); // Function TheLegion.FrenzyComponent.IsInFrenzy // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c6230
	void InitializeFrenzy(); // Function TheLegion.FrenzyComponent.InitializeFrenzy // (Final|Native|Private) // @ game+0x59c6210
	bool HasStartedInjuredBleedoutDuringThisFrenzy(); // Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c61e0
	void EndFrenzy(enum class EFrenzyEndReason Reason); // Function TheLegion.FrenzyComponent.EndFrenzy // (Final|Native|Public|BlueprintCallable) // @ game+0x59c6160
	bool CanStartFrenzy(); // Function TheLegion.FrenzyComponent.CanStartFrenzy // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c6120
	bool CanManuallyEndFrenzy(); // Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c60f0
};

// Class TheLegion.FrenzySlasherVault
// Size: 0x710 (Inherited: 0x6e0)
struct UFrenzySlasherVault : USlasherVaultDefinition {
	struct UCurveFloat* _vaultFallSpeedCurve; // 0x6d8(0x08)
	struct FDBDTunableRowHandle _frenzyWindowVaultDuration; // 0x6e0(0x28)

	void OnSlasherSet(struct ASlasherPlayer* Slasher); // Function TheLegion.FrenzySlasherVault.OnSlasherSet // (Final|Native|Private) // @ game+0x59c6910
};

// Class TheLegion.JoeysMixtapeEffect
// Size: 0x358 (Inherited: 0x350)
struct UJoeysMixtapeEffect : UStatusEffect {
	struct UStatusEffect* _statusEffectToImpose; // 0x350(0x08)
};

// Class TheLegion.LegionAnimInstance
// Size: 0x630 (Inherited: 0x610)
struct ULegionAnimInstance : UKillerAnimInstance {
	bool _isFrenzy; // 0x610(0x01)
	char pad_611[0x1f]; // 0x611(0x1f)
};

// Class TheLegion.LegionAttackPicker
// Size: 0xd0 (Inherited: 0xb8)
struct ULegionAttackPicker : USlasherAttackPickerComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheLegion.LegionCheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct ULegionCheatComponent : UActorComponent {

	void DBD_LegionFrenzyForever(); // Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever // (Final|Exec|Native|Public) // @ game+0x59c7330
};

// Class TheLegion.LegionKillerAnalyticsComponent
// Size: 0xf0 (Inherited: 0xb8)
struct ULegionKillerAnalyticsComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)

	void SetGameEventDispatcher(struct UGameEventDispatcher* GameEventDispatcher); // Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher // (Final|Native|Public|BlueprintCallable) // @ game+0x59c74c0
};

// Class TheLegion.LegionSurvivorAnalyticsComponent
// Size: 0x110 (Inherited: 0xb8)
struct ULegionSurvivorAnalyticsComponent : UActorComponent {
	char pad_B8[0x58]; // 0xb8(0x58)

	void SetGameEventDispatcher(struct UGameEventDispatcher* GameEventDispatcher); // Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher // (Final|Native|Public|BlueprintCallable) // @ game+0x59c7800
	void OnGameEventDispatched(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched // (Final|Native|Private|HasOutParms) // @ game+0x59c76f0
};

// Class TheLegion.Madgrit
// Size: 0x3d0 (Inherited: 0x3c8)
struct UMadgrit : UPerk {
	struct UCurveFloat* _slashHittingSpeedCurve; // 0x3c8(0x08)
};

// Class TheLegion.ModifyFrenzyFOVEffect
// Size: 0x388 (Inherited: 0x350)
struct UModifyFrenzyFOVEffect : UStatusEffect {
	float _increaseFOVPerHit; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct FDBDTunableRowHandle _frenzyBaseFOV; // 0x358(0x28)
	char pad_380[0x8]; // 0x380(0x08)

	void Authority_OnFrenzyTierIncreased(int32_t tier); // Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased // (Final|Native|Private) // @ game+0x59c7c10
};

// Class TheLegion.OnSelfMendImposeEffect
// Size: 0x360 (Inherited: 0x350)
struct UOnSelfMendImposeEffect : UStatusEffect {
	float _statusEffectTime; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UStatusEffect* _statusEffectToImpose; // 0x358(0x08)
};

