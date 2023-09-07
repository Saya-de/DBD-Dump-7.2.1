// Class TheDoctor.Alert
// Size: 0x3e8 (Inherited: 0x3c8)
struct UAlert : UPerk {
	float _killerAuraRevealDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _alertKillerRevealEffect; // 0x3d8(0x08)
	struct UStatusEffect* _alertKillerRevealEffectClass; // 0x3e0(0x08)

	void OnPerkActivate_Cosmetic(); // Function TheDoctor.Alert.OnPerkActivate_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.CalmBaseAddon
// Size: 0x2e0 (Inherited: 0x2d8)
struct UCalmBaseAddon : USimpleSpawnEffectsOnAllSurvivorsAddon {
	float _terrorRadiusModification; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class TheDoctor.CalmIntermittentFakeTerrorRadiusEffect
// Size: 0x398 (Inherited: 0x350)
struct UCalmIntermittentFakeTerrorRadiusEffect : UStatusEffect {
	float _fakeTerrorRadiusDuration; // 0x350(0x04)
	float _fakeTerrorRadiusIntermittenceMin; // 0x354(0x04)
	float _fakeTerrorRadiusIntermittenceMax; // 0x358(0x04)
	char pad_35C[0x3c]; // 0x35c(0x3c)
};

// Class TheDoctor.CartersSpark
// Size: 0x5a0 (Inherited: 0x4c8)
struct ACartersSpark : ACollectable {
	char pad_4C8[0x18]; // 0x4c8(0x18)
	struct FDBDTunableRowHandle _shockAttackComboTimerDuration; // 0x4e0(0x28)
	struct USurvivorCartersSparkComponent* _survivorCartersSparkComponentClass; // 0x508(0x08)
	char pad_510[0x70]; // 0x510(0x70)
	struct UStatusEffect* _doctorBlockInterruptEffect; // 0x580(0x08)
	struct UStatusEffect* _madnessStatusEffect; // 0x588(0x08)
	struct UStatusEffect* _illusionaryDoctorEffect; // 0x590(0x08)
	struct UCartersSparkComponent* _cartersSparkComponent; // 0x598(0x08)

	void Cosmetic_OnShockTherapyZoneDetonated(struct ADBDPlayer* killer, int32_t survivorsHitCount); // Function TheDoctor.CartersSpark.Cosmetic_OnShockTherapyZoneDetonated // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void CancelSurvivorInteraction(struct ACamperPlayer* Survivor); // Function TheDoctor.CartersSpark.CancelSurvivorInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x56db960
	void Authority_StartShockAttackComboTimer(struct ACamperPlayer* shockedSurvivor); // Function TheDoctor.CartersSpark.Authority_StartShockAttackComboTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x56db8d0
};

// Class TheDoctor.DisciplineEffect
// Size: 0x3f8 (Inherited: 0x350)
struct UDisciplineEffect : UStatusEffect {
	float _deactivationDelay; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	bool _redStainInterpolating; // 0x358(0x01)
	char pad_359[0x9f]; // 0x359(0x9f)

	void SetRedStainInterpolating(bool isInterpolating); // Function TheDoctor.DisciplineEffect.SetRedStainInterpolating // (Final|Native|Protected|BlueprintCallable) // @ game+0x56dbe20
	void Cosmetic_UpdateSurvivorRedStain(bool visible, float DeltaTime); // Function TheDoctor.DisciplineEffect.Cosmetic_UpdateSurvivorRedStain // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_UpdateKillerRedStain(bool visible, float DeltaTime); // Function TheDoctor.DisciplineEffect.Cosmetic_UpdateKillerRedStain // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SpawnRedStains(); // Function TheDoctor.DisciplineEffect.Cosmetic_SpawnRedStains // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivateSurvivorRedStain(bool Activate); // Function TheDoctor.DisciplineEffect.Cosmetic_ActivateSurvivorRedStain // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivateKillerRedStain(bool Activate); // Function TheDoctor.DisciplineEffect.Cosmetic_ActivateKillerRedStain // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.DoctorAnimInstance
// Size: 0x610 (Inherited: 0x610)
struct UDoctorAnimInstance : UKillerAnimInstance {
};

// Class TheDoctor.DoctorCheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UDoctorCheatComponent : UActorComponent {

	void DBD_AddMadness(float madnessToAdd, struct FString localPlayerId); // Function TheDoctor.DoctorCheatComponent.DBD_AddMadness // (Final|Exec|Native|Public) // @ game+0x56dc300
};

// Class TheDoctor.DoctorPowerSubAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UDoctorPowerSubAnimInstance : UAnimInstance {
	enum class EDoctorAbilityType _abilityType; // 0x2c0(0x01)
	enum class EDoctorAbilityPhase _abilityPhase; // 0x2c1(0x01)
	bool _isShockTherapyInCooldown; // 0x2c2(0x01)
	char pad_2C3[0x1]; // 0x2c3(0x01)
	struct TWeakObjectPtr<struct UDoctorPowerAnimStateComponent> _powerStateComponent; // 0x2c4(0x08)
	char pad_2CC[0x4]; // 0x2cc(0x04)

	void OnShockTherapyAnimationAttackStop(); // Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStop // (Final|Native|Protected|BlueprintCallable) // @ game+0x56dc5f0
	void OnShockTherapyAnimationAttackStart(); // Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStart // (Final|Native|Protected|BlueprintCallable) // @ game+0x56dc5d0
};

// Class TheDoctor.DoctorSurvivorCosmeticHelperActor
// Size: 0x2f8 (Inherited: 0x270)
struct ADoctorSurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	char pad_270[0x88]; // 0x270(0x88)

	bool IsSurvivorOperatingLocker(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.IsSurvivorOperatingLocker // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dcf80
	struct USurvivorMadnessEffect* GetSurvivorMadnessEffect(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetSurvivorMadnessEffect // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dcf50
	struct AIllusionaryDoctor* GetIllusionaryDoctor(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetIllusionaryDoctor // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dcf20
	void Cosmetic_OnOwningSurvivorShocked(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorShocked // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnMadnessIntermittentScream(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessIntermittentScream // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnMadnessChanged(int32_t newTier, bool increased); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInsaneSkillCheck(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnInsaneSkillCheck // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIllusionaryPalletDeactivated(struct APallet* Pallet); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletDeactivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIllusionaryPalletActivated(struct APallet* Pallet); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletActivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIllusionaryDoctorApparitionSequenceStart(struct FTransform& illusionaryDoctorTransform, float apparitionDuration); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryDoctorApparitionSequenceStart // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	bool CanPlayShockedAnimation(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayShockedAnimation // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dce50
	bool CanPlayOverwhelmingMadnessAudio(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAudio // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dce20
	bool CanPlayOverwhelmingMadnessAnimation(); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAnimation // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dcdf0
	bool CanPlayerSeeIllusionaryPalletGlitch(struct APallet* Pallet); // Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayerSeeIllusionaryPalletGlitch // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dce80
};

// Class TheDoctor.IllusionaryDoctor
// Size: 0x270 (Inherited: 0x260)
struct AIllusionaryDoctor : ABaseHusk {
	struct UDBDOutlineComponent* _dbdOutline; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)

	void DeactivateIllusion(); // Function TheDoctor.IllusionaryDoctor.DeactivateIllusion // (Final|Native|Public|BlueprintCallable) // @ game+0x56dd230
	void ActivateIllusion(struct FTransform& Transform); // Function TheDoctor.IllusionaryDoctor.ActivateIllusion // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56dd150
};

// Class TheDoctor.IllusionaryDoctorEffect
// Size: 0x5c0 (Inherited: 0x350)
struct UIllusionaryDoctorEffect : UStatusEffect {
	char pad_350[0x18]; // 0x350(0x18)
	struct AIllusionaryDoctor* _illusionaryDoctorClass; // 0x368(0x08)
	struct AIllusionaryDoctor* _illusionaryDoctor; // 0x370(0x08)
	char pad_378[0x38]; // 0x378(0x38)
	struct FDBDTunableRowHandle _madness2IllusionaryDoctorIntervalMinimum; // 0x3b0(0x28)
	struct FDBDTunableRowHandle _madness2IllusionaryDoctorIntervalMaximum; // 0x3d8(0x28)
	struct FDBDTunableRowHandle _madness3IllusionaryDoctorIntervalMinimum; // 0x400(0x28)
	struct FDBDTunableRowHandle _madness3IllusionaryDoctorIntervalMaximum; // 0x428(0x28)
	struct FDBDTunableRowHandle _illusionaryDoctorMaximumDistance; // 0x450(0x28)
	struct FDBDTunableRowHandle _illusionaryDoctorMinimumDistance; // 0x478(0x28)
	struct FDBDTunableRowHandle _dotProductMinimumAcceptanceValue; // 0x4a0(0x28)
	struct FTunableStat _illusionaryDoctorApparitionDuration; // 0x4c8(0x80)
	int32_t _numberOfAttempsToFindIllusionaryDoctorTargetLocationPerTick; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct FTransform _illusionaryDoctorTransform; // 0x550(0x30)
	char pad_580[0x40]; // 0x580(0x40)

	void OnRep_IllusionaryDoctorTransform(); // Function TheDoctor.IllusionaryDoctorEffect.OnRep_IllusionaryDoctorTransform // (Final|Native|Private) // @ game+0x56dd530
	void Multicast_DebugDisplayInfo(float timeRemainingBeforeActivation, struct FColor messageColor); // Function TheDoctor.IllusionaryDoctorEffect.Multicast_DebugDisplayInfo // (Final|Net|Native|Event|NetMulticast|Private|HasDefaults) // @ game+0x56dd460
};

// Class TheDoctor.IllusionaryDoctorOutlineStrategy
// Size: 0x138 (Inherited: 0x138)
struct UIllusionaryDoctorOutlineStrategy : USourceBasedOutlineUpdateStrategy {
};

// Class TheDoctor.IllusionaryPalletBaseAddon
// Size: 0x348 (Inherited: 0x2d8)
struct UIllusionaryPalletBaseAddon : USimpleSpawnEffectsOnAllSurvivorsAddon {
	char pad_2D8[0x60]; // 0x2d8(0x60)
	float _illusionaryPalletInterval; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UIllusionaryPalletComponent* _palletComponentClass; // 0x340(0x08)

	void Multicast_DeactivateIllusionaryPallet(struct APallet* Pallet, struct ADBDPlayer* triggeringPlayer); // Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_DeactivateIllusionaryPallet // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56ddbe0
	void Multicast_ActivateIllusionaryPallet(struct APallet* Pallet, bool isPalletDown); // Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_ActivateIllusionaryPallet // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56ddb10
	void Authority_OnIllusionaryPalletActorOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheDoctor.IllusionaryPalletBaseAddon.Authority_OnIllusionaryPalletActorOverlapped // (Final|Native|Private|HasOutParms) // @ game+0x56dd8f0
};

// Class TheDoctor.IllusionaryPalletComponent
// Size: 0x200 (Inherited: 0xb8)
struct UIllusionaryPalletComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform _illusionaryPalletDownTransform; // 0xc0(0x30)
	struct UBoxComponent* _illusionaryPalletTriggerZone; // 0xf0(0x08)
	struct FVector _illusionaryPalletTriggerZoneBoxExtent; // 0xf8(0x0c)
	struct FVector _illusionaryPalletTriggerZoneLocation; // 0x104(0x0c)
	float _glitchEffectRange; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UStaticMeshComponent* _illusionaryPalletStaticMeshComponent; // 0x118(0x08)
	char pad_120[0xe0]; // 0x120(0xe0)

	void OnStartIllusionaryPalletDeactivation(struct ADBDPlayer* triggeringPlayer); // Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletDeactivation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnStartIllusionaryPalletActivation(bool isPalletDown); // Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletActivation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetGlitchEffectRange(); // Function TheDoctor.IllusionaryPalletComponent.GetGlitchEffectRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56de0b0
	void DeactivateIllusionaryPallet(); // Function TheDoctor.IllusionaryPalletComponent.DeactivateIllusionaryPallet // (Final|Native|Protected|BlueprintCallable) // @ game+0x56de090
	bool CanLocallyObservedPlayerSeeIllusionaryPallet(); // Function TheDoctor.IllusionaryPalletComponent.CanLocallyObservedPlayerSeeIllusionaryPallet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56de060
	void ActivateIllusionaryPallet(bool isPalletDown); // Function TheDoctor.IllusionaryPalletComponent.ActivateIllusionaryPallet // (Final|Native|Protected|BlueprintCallable) // @ game+0x56ddfd0
};

// Class TheDoctor.IridescentQueenEffect
// Size: 0x3a0 (Inherited: 0x350)
struct UIridescentQueenEffect : UStatusEffect {
	struct UCapsuleComponent* _authority_iridescentQueenDischargeDetectionZone; // 0x350(0x08)
	float _dischargeDetectionZoneHalfHeight; // 0x358(0x04)
	float _dischargeDetectionZoneRadius; // 0x35c(0x04)
	struct FDBDTunableRowHandle _madnessToAddOnDischarge; // 0x360(0x28)
	char pad_388[0x8]; // 0x388(0x08)
	bool _chargeActive; // 0x390(0x01)
	bool _charged; // 0x391(0x01)
	char pad_392[0xe]; // 0x392(0x0e)

	void OnRep_ChargeActive(); // Function TheDoctor.IridescentQueenEffect.OnRep_ChargeActive // (Final|Native|Private) // @ game+0x56de9b0
	void Multicast_DischargeOnSurvivor(struct ACamperPlayer* Survivor); // Function TheDoctor.IridescentQueenEffect.Multicast_DischargeOnSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56de920
	enum class EStaticFieldMovementSpeed GetStaticFieldMovementSpeed(); // Function TheDoctor.IridescentQueenEffect.GetStaticFieldMovementSpeed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x558eb60
	void Cosmetic_UpdateStaticFieldFX(); // Function TheDoctor.IridescentQueenEffect.Cosmetic_UpdateStaticFieldFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SpawnStaticFieldFX(); // Function TheDoctor.IridescentQueenEffect.Cosmetic_SpawnStaticFieldFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDischargeZoneDeactivated(); // Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneDeactivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDischargeZoneActivated(); // Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneActivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDischargeOnSurvivor(struct ADBDPlayer* survivorToShock); // Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeOnSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSurvivorOverlappedDischargeZone(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheDoctor.IridescentQueenEffect.Authority_OnSurvivorOverlappedDischargeZone // (Final|Native|Private|HasOutParms) // @ game+0x56de700
};

// Class TheDoctor.Lithe
// Size: 0x3e0 (Inherited: 0x3c8)
struct ULithe : UPerk {
	struct UStatusEffect* _exhaustedStatusEffectClass; // 0x3c8(0x08)
	struct UStatusEffect* _movementSpeedStatusEffectClass; // 0x3d0(0x08)
	float _movementSpeedPercentage; // 0x3d8(0x04)
	float _movementSpeedDuration; // 0x3dc(0x04)

	float GetMovementSpeedPercentage(); // Function TheDoctor.Lithe.GetMovementSpeedPercentage // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce26c0
	float GetMovementSpeedDuration(); // Function TheDoctor.Lithe.GetMovementSpeedDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x56debd0
};

// Class TheDoctor.MadnessSurvivorSubAnimInstance
// Size: 0x560 (Inherited: 0x550)
struct UMadnessSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isTotallyInsane; // 0x550(0x01)
	bool _isInjured; // 0x551(0x01)
	bool _isCrawling; // 0x552(0x01)
	bool _isIdle; // 0x553(0x01)
	bool _isCrouched; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	float _walkAnimSpeed; // 0x558(0x04)
	bool _isCarried; // 0x55c(0x01)
	bool _isInAir; // 0x55d(0x01)
	bool _isDead; // 0x55e(0x01)
	char pad_55F[0x1]; // 0x55f(0x01)
};

// Class TheDoctor.Overcharge
// Size: 0x4b0 (Inherited: 0x3c8)
struct UOvercharge : UPerk {
	float _skillCheckFailurePenalty[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UCurveFloat* _regressionRateMultiplierCurve; // 0x3d8(0x08)
	struct TMap<struct AGenerator*, struct FFastTimer> _overchargedGeneratorTimers; // 0x3e0(0x50)
	char pad_430[0x30]; // 0x430(0x30)
	struct TMap<struct AGenerator*, uint64_t> _gameplayModifierHandles; // 0x460(0x50)

	float GetSkillCheckFailurePenaltyAtLevel(); // Function TheDoctor.Overcharge.GetSkillCheckFailurePenaltyAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	struct UCurveFloat* GetRegressionRateMultiplierCurve(); // Function TheDoctor.Overcharge.GetRegressionRateMultiplierCurve // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56def30
};

// Class TheDoctor.RestraintRevealToKillerEffect
// Size: 0x380 (Inherited: 0x380)
struct URestraintRevealToKillerEffect : UActivateOnEventTimedStatusEffect {
};

// Class TheDoctor.ShockTherapy
// Size: 0x910 (Inherited: 0x760)
struct UShockTherapy : UChargeableInteractionDefinition {
	char pad_760[0x38]; // 0x760(0x38)
	struct AShockTherapyAOE* _shockTherapyConeAOEClass; // 0x798(0x08)
	struct AShockTherapyAOE* _shockTherapyLineAOEClass; // 0x7a0(0x08)
	struct AShockTherapyAOE* _shockTherapyCircleAOEClass; // 0x7a8(0x08)
	struct TArray<struct AShockTherapyAOE*> _shockTherapyZones; // 0x7b0(0x10)
	char pad_7C0[0x30]; // 0x7c0(0x30)
	struct FTunableStat _shockTherapyDetonationDelay; // 0x7f0(0x80)
	struct FDBDTunableRowHandle _shockTherapyBlockActionDuration; // 0x870(0x28)
	struct FDBDTunableRowHandle _shockTherapySecondsToCharge; // 0x898(0x28)
	struct UStatusEffect* _shockTherapyBlockAllInteractionsEffectClass; // 0x8c0(0x08)
	char pad_8C8[0x10]; // 0x8c8(0x10)
	struct FDBDTunableRowHandle _shockTherapyMadnessGain; // 0x8d8(0x28)
	char pad_900[0x10]; // 0x900(0x10)

	void OnLevelReadyToPlay(); // Function TheDoctor.ShockTherapy.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x56df5f0
	void Multicast_DetonateShockTherapy(struct TArray<struct ACamperPlayer*> shockedSurvivors, float madnessToAdd); // Function TheDoctor.ShockTherapy.Multicast_DetonateShockTherapy // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56df500
	void Multicast_ActivateShockTherapyAOE(struct FTransform shockTherapyZoneTransform); // Function TheDoctor.ShockTherapy.Multicast_ActivateShockTherapyAOE // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x56df430
	void Cosmetic_OnShockTherapyChargeEnd(struct ADBDPlayer* Player, bool charged); // Function TheDoctor.ShockTherapy.Cosmetic_OnShockTherapyChargeEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.ShockTherapyAOE
// Size: 0x320 (Inherited: 0x230)
struct AShockTherapyAOE : AActor {
	struct UStaticMeshComponent* _attackZone; // 0x230(0x08)
	struct USceneComponent* _rootComponent; // 0x238(0x08)
	struct FTunableStat _shockTherapyRange; // 0x240(0x80)
	float _killerOffset; // 0x2c0(0x04)
	float _baseZoneSize; // 0x2c4(0x04)
	struct AShockTherapyAOEPreview* _shockTherapyPreviewClass; // 0x2c8(0x08)
	struct AShockTherapyAOEPreview* _shockTherapyPreview; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct FTransform _previewTransform; // 0x2e0(0x30)
	char pad_310[0x10]; // 0x310(0x10)

	void OnScaleInitialized(); // Function TheDoctor.ShockTherapyAOE.OnScaleInitialized // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivateShockTherapyAOE(); // Function TheDoctor.ShockTherapyAOE.Cosmetic_ActivateShockTherapyAOE // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.ShockTherapyAOEPreview
// Size: 0x2c8 (Inherited: 0x230)
struct AShockTherapyAOEPreview : AActor {
	struct FVector _baseWorldScale; // 0x230(0x0c)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FTunableStat _shockTherapyRange; // 0x240(0x80)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void SetAttackZonePreviewScale(struct FVector& Scale); // Function TheDoctor.ShockTherapyAOEPreview.SetAttackZonePreviewScale // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.SnapOutOfIt
// Size: 0x7f0 (Inherited: 0x760)
struct USnapOutOfIt : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _postSnapOutOfItMadnessTier; // 0x760(0x28)
	struct FDBDTunableRowHandle _snapOutOfItSkillCheckFailTimePenalty; // 0x788(0x28)
	char pad_7B0[0x30]; // 0x7b0(0x30)
	bool _isSkillCheckFailureTimerActive; // 0x7e0(0x01)
	char pad_7E1[0xf]; // 0x7e1(0x0f)

	void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, struct ADBDPlayer* Player, bool TriggerLoudNoise, enum class ESkillCheckCustomType Type); // Function TheDoctor.SnapOutOfIt.Authority_OnSkillCheckResponseAuthority // (Final|Native|Private) // @ game+0x56dfbb0
};

// Class TheDoctor.StaticBlast
// Size: 0x860 (Inherited: 0x760)
struct UStaticBlast : UChargeableInteractionDefinition {
	char pad_760[0x90]; // 0x760(0x90)
	float _staticBlastActivationDelay; // 0x7f0(0x04)
	char pad_7F4[0x4]; // 0x7f4(0x04)
	struct FDBDTunableRowHandle _staticBlastMadnessGain; // 0x7f8(0x28)
	struct FDBDTunableRowHandle _staticBlastSecondsToCharge; // 0x820(0x28)
	char pad_848[0x18]; // 0x848(0x18)

	void Multicast_StaticBlastShockSurvivors(struct TArray<struct ACamperPlayer*> survivorsToShock); // Function TheDoctor.StaticBlast.Multicast_StaticBlastShockSurvivors // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56e0030
	void Cosmetic_OnStaticBlastChargeEnd(struct ADBDPlayer* Player, bool charged); // Function TheDoctor.StaticBlast.Cosmetic_OnStaticBlastChargeEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.SurvivorCartersSparkComponent
// Size: 0xd0 (Inherited: 0xb8)
struct USurvivorCartersSparkComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheDoctor.SurvivorMadnessEffect
// Size: 0x4a0 (Inherited: 0x350)
struct USurvivorMadnessEffect : UStatusEffect {
	char pad_350[0x20]; // 0x350(0x20)
	float _madnessAmount; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FDBDTunableRowHandle _maxMadnessTier; // 0x378(0x28)
	struct TArray<struct FDBDTunableRowHandle> _madnessThresholds; // 0x3a0(0x10)
	struct TArray<struct FDBDTunableRowHandle> _insaneSkillCheckChances; // 0x3b0(0x10)
	struct FDBDTunableRowHandle _screamDelayMin; // 0x3c0(0x28)
	struct FDBDTunableRowHandle _screamDelayMax; // 0x3e8(0x28)
	struct FName madnessStatusViewId; // 0x410(0x0c)
	char pad_41C[0x4c]; // 0x41c(0x4c)
	struct FGameplayTagContainer _survivorOperatingLockerSemanticTags; // 0x468(0x20)
	char pad_488[0x18]; // 0x488(0x18)

	void SpawnMadnessBubbleIndicator(); // Function TheDoctor.SurvivorMadnessEffect.SpawnMadnessBubbleIndicator // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_MadnessAmount(); // Function TheDoctor.SurvivorMadnessEffect.OnRep_MadnessAmount // (Final|Native|Private) // @ game+0x56e07b0
	void Multicast_OnMadnessTierChanged(int32_t newMadnessTier, int32_t oldMadnessTier); // Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierChanged // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56e06e0
	void Multicast_MadnessIntermittentScream(); // Function TheDoctor.SurvivorMadnessEffect.Multicast_MadnessIntermittentScream // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x55bf2d0
	int32_t GetMadnessTier(); // Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56e06b0
	void Authority_AddMadness(float amountToAdd); // Function TheDoctor.SurvivorMadnessEffect.Authority_AddMadness // (Final|Native|Public|BlueprintCallable) // @ game+0x56e0630
	void ActivateMadnessBubbleIndicator(); // Function TheDoctor.SurvivorMadnessEffect.ActivateMadnessBubbleIndicator // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheDoctor.TheDoctorUtilities
// Size: 0x30 (Inherited: 0x30)
struct UTheDoctorUtilities : UBlueprintFunctionLibrary {

	bool IsTotallyInsane(struct ADBDPlayer* Player); // Function TheDoctor.TheDoctorUtilities.IsTotallyInsane // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56e0ba0
	struct USurvivorMadnessEffect* GetSurvivorMadnessEffect(struct ADBDPlayer* Player); // Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56e0b10
	int32_t GetMadnessTier(struct ADBDPlayer* Player); // Function TheDoctor.TheDoctorUtilities.GetMadnessTier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56e0a80
	bool CanGainInsanity(struct ADBDPlayer* Player); // Function TheDoctor.TheDoctorUtilities.CanGainInsanity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56e09f0
};

