// Class TheCannibal.BBQAndChili
// Size: 0x3e8 (Inherited: 0x3c8)
struct UBBQAndChili : UPerk {
	float _auraRevealDuration; // 0x3c8(0x04)
	float _minDistanceToHookedPlayerByLevel[0x3]; // 0x3cc(0x0c)
	struct UStatusEffect* _survivorImposedEffectClass; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)

	float GetMinDistanceToKillerByLevel(int32_t Level); // Function TheCannibal.BBQAndChili.GetMinDistanceToKillerByLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x56a4570
	float GetAuraRevealDuration(); // Function TheCannibal.BBQAndChili.GetAuraRevealDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840b20
};

// Class TheCannibal.CannibalChainsawHitEventAddon
// Size: 0x2c8 (Inherited: 0x2c8)
struct UCannibalChainsawHitEventAddon : UOnEventBaseAddon {
};

// Class TheCannibal.CannibalAddonBegrimedChains
// Size: 0x2c8 (Inherited: 0x2c8)
struct UCannibalAddonBegrimedChains : UCannibalChainsawHitEventAddon {
};

// Class TheCannibal.CannibalAnalyticsComponent
// Size: 0x120 (Inherited: 0x100)
struct UCannibalAnalyticsComponent : UChainsawAnalyticsBaseComponent {
	char pad_100[0x20]; // 0x100(0x20)
};

// Class TheCannibal.CannibalChainsawAttack
// Size: 0x470 (Inherited: 0x400)
struct UCannibalChainsawAttack : UHillbillyChainsawAttack {
	char pad_400[0x10]; // 0x400(0x10)
	struct FTagStateBool _isInTantrum; // 0x410(0x30)
	char pad_440[0x30]; // 0x440(0x30)
};

// Class TheCannibal.CannibalChainsawAttackOpenSubstate
// Size: 0x190 (Inherited: 0x178)
struct UCannibalChainsawAttackOpenSubstate : UHillbillyChainsawAttackOpenSubstate {
	char pad_178[0x18]; // 0x178(0x18)
};

// Class TheCannibal.CannibalChainsawAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UCannibalChainsawAttackHittingSubstate : UHillbillyChainsawAttackHittingSubstate {
};

// Class TheCannibal.CannibalChainsawAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UCannibalChainsawAttackSuccessSubstate : UHillbillyChainsawAttackSuccessSubstate {
};

// Class TheCannibal.CannibalChainsawAttackMissSubstate
// Size: 0x138 (Inherited: 0x120)
struct UCannibalChainsawAttackMissSubstate : UHillbillyChainsawAttackMissSubstate {
	char pad_120[0x18]; // 0x120(0x18)
};

// Class TheCannibal.CannibalChainsawAttackObstructSubstate
// Size: 0x188 (Inherited: 0x128)
struct UCannibalChainsawAttackObstructSubstate : UHillbillyChainsawAttackObstructSubstate {
	struct FTagStateBool _isInTantrum; // 0x128(0x30)
	char pad_158[0x30]; // 0x158(0x30)
};

// Class TheCannibal.CannibalChainsawPowerComponent
// Size: 0x6b0 (Inherited: 0xb8)
struct UCannibalChainsawPowerComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UPowerChargeComponent* _chainsawPowerCharge; // 0xc0(0x08)
	struct UPowerChargeComponent* _chainsawPowerDischarge; // 0xc8(0x08)
	struct UPowerChargeComponent* _tantrumPowerCharge; // 0xd0(0x08)
	char pad_D8[0xd0]; // 0xd8(0xd0)
	struct FTagStateBool _isInTantrum; // 0x1a8(0x30)
	int32_t _numPowerCharges; // 0x1d8(0x04)
	int32_t _numPowerChargesConsumed; // 0x1dc(0x04)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct FTunableStat _chainsawDashDuration; // 0x1e8(0x80)
	struct FTunableStat _chainsawPowerMaxCharge; // 0x268(0x80)
	struct FTunableStat _chainsawChargeRate; // 0x2e8(0x80)
	struct FTunableStat _chainsawMaxNumberOfCharges; // 0x368(0x80)
	struct FDBDTunableRowHandle _chainsawCooldownIncreaseRate; // 0x3e8(0x28)
	struct FTunableStat _chainsawCooldownDuration; // 0x410(0x80)
	struct FDBDTunableRowHandle _chainsawMaxCooldownDuration; // 0x490(0x28)
	struct FDBDTunableRowHandle _tantrumChargeRate; // 0x4b8(0x28)
	struct FDBDTunableRowHandle _tantrumDischargeRate; // 0x4e0(0x28)
	struct FTunableStat _tantrumMaxCharge; // 0x508(0x80)
	struct FDBDTunableRowHandle _tantrumDurationIncreaseRate; // 0x588(0x28)
	struct FTunableStat _tantrumDuration; // 0x5b0(0x80)
	struct FTunableStat _tantrumMaxDuration; // 0x630(0x80)

	void Server_OnTantrumPowerChargeFull(); // Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x56a5d40
	void OnRep_NumPowerCharges(int32_t previousNumPowerCharges); // Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges // (Final|Native|Private) // @ game+0x56a5cb0
	void OnLevelReadyToPlay(); // Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x56a5c90
	void Multicast_OnTantrumPowerChargeFull(); // Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	void Local_OnTantrumPowerChargeFull(); // Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull // (Final|Native|Private) // @ game+0x56a5c70
	int32_t GetNumberOfChainsawPowerCharges(); // Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a5c40
	void Authority_OnChainsawPowerChargeFull(); // Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull // (Final|Native|Private) // @ game+0x56a5c20
};

// Class TheCannibal.CannibalChainsawRevInteraction
// Size: 0x850 (Inherited: 0x7c0)
struct UCannibalChainsawRevInteraction : UChainsawRevInteraction {
	char pad_7C0[0x90]; // 0x7c0(0x90)
};

// Class TheCannibal.CannibalPowerPresentationItemProgressComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UCannibalPowerPresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UCannibalChainsawPowerComponent* _cannibalPowerChainsawComponent; // 0xc0(0x08)

	void SetCannibalChainsawPowerComponent(struct UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent); // Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x549c400
};

// Class TheCannibal.CarburetorTuningGuideAddon
// Size: 0x2e0 (Inherited: 0x2c8)
struct UCarburetorTuningGuideAddon : UOnEventBaseAddon {
	char pad_2C8[0x18]; // 0x2c8(0x18)
};

// Class TheCannibal.FranklinsDemise
// Size: 0x3d8 (Inherited: 0x3c8)
struct UFranklinsDemise : UPerk {
	float _timeBeforeItemIsConsumed[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)

	void Multicast_DroppedEvent(struct ACamperPlayer* hitPlayer, struct ACollectable* itemToDrop); // Function TheCannibal.FranklinsDemise.Multicast_DroppedEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ce2860
	float GetTimeBeforeItemIsConsumedAtLevel(); // Function TheCannibal.FranklinsDemise.GetTimeBeforeItemIsConsumedAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	void BP_OnPlayerHitCosmetic(struct ACamperPlayer* hitPlayer, struct ACollectable* itemToDrop); // Function TheCannibal.FranklinsDemise.BP_OnPlayerHitCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheCannibal.IridescentLeatherAddon
// Size: 0x2e0 (Inherited: 0x2c8)
struct UIridescentLeatherAddon : UCannibalChainsawHitEventAddon {
	char pad_2C8[0x18]; // 0x2c8(0x18)
};

// Class TheCannibal.Knockout
// Size: 0x420 (Inherited: 0x3c8)
struct UKnockout : UPerk {
	float _slowAndBlindDuration[0x3]; // 0x3c8(0x0c)
	float _crawlSpeedPenalty[0x3]; // 0x3d4(0x0c)
	float _auraDisruptionRange[0x3]; // 0x3e0(0x0c)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FForAllSurvivorsStatusEffectImposer _slowAndBlindEffectImposer; // 0x3f0(0x18)
	struct FForAllSurvivorsStatusEffectImposer _hideAuraEffectImposer; // 0x408(0x18)
};

// Class TheCannibal.ShopLubricantAddon
// Size: 0x2d8 (Inherited: 0x2c8)
struct UShopLubricantAddon : UOnEventBaseAddon {
	float _auraBlockingDuration; // 0x2c8(0x04)
	float _auraVisibleDistance; // 0x2cc(0x04)
	struct UStatusEffect* _hiddenFromOtherSurvivorsWhileDyingEffectClass; // 0x2d0(0x08)
};

