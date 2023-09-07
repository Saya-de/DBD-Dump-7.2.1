// Class TheK29.AISkill_FindCollectable_K29SupplyCrate
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAISkill_FindCollectable_K29SupplyCrate : UAISkill_FindCollectable_Searchable {
	struct FAITunableParameter UrgencyGoalWeight; // 0x1b8(0x10)
	struct FAITunableParameter OpenedWeightMultiplier; // 0x1c8(0x10)
};

// Class TheK29.AISkill_InteractionUseItem_K29StabilizingSpray
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_K29StabilizingSpray : UAISkill_InteractionUseItem {
};

// Class TheK29.AISkill_InteractionUseItem_K29StabilizingSprayOther
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_K29StabilizingSprayOther : UAISkill_InteractionUseItem {
};

// Class TheK29.K29AnimInstance
// Size: 0x640 (Inherited: 0x610)
struct UK29AnimInstance : UKillerAnimInstance {
	bool _isRushing; // 0x610(0x01)
	bool _isHoldingSurvivor; // 0x611(0x01)
	bool _isChargingRushing; // 0x612(0x01)
	bool _isBetweenRushes; // 0x613(0x01)
	bool _isThrowing; // 0x614(0x01)
	bool _isBouncingBack; // 0x615(0x01)
	bool _hasStartedFinalRush; // 0x616(0x01)
	bool _hasRushEndedInSurvivorImpact; // 0x617(0x01)
	bool _hasRushEndedInLedgeDrop; // 0x618(0x01)
	bool _hasInstantlyPickedUpSurvivor; // 0x619(0x01)
	bool _isReadyToRushButHasNoPath; // 0x61a(0x01)
	char pad_61B[0x25]; // 0x61b(0x25)

	void ResetStartThrowingSurvivor(); // Function TheK29.K29AnimInstance.ResetStartThrowingSurvivor // (Final|Native|Public|BlueprintCallable) // @ game+0x5889b90
	void ResetHasRushEndedInSurvivorImpact(); // Function TheK29.K29AnimInstance.ResetHasRushEndedInSurvivorImpact // (Final|Native|Public|BlueprintCallable) // @ game+0x5889b70
	void ResetHasRushEndedInLedgeDrop(); // Function TheK29.K29AnimInstance.ResetHasRushEndedInLedgeDrop // (Final|Native|Public|BlueprintCallable) // @ game+0x5889b50
	void ResetHasInstantlyPickedUpSurvivor(); // Function TheK29.K29AnimInstance.ResetHasInstantlyPickedUpSurvivor // (Final|Native|Public|BlueprintCallable) // @ game+0x5889b30
	void OnStartThrowingSurvivor(); // Function TheK29.K29AnimInstance.OnStartThrowingSurvivor // (Final|Native|Private) // @ game+0x5889b10
	void OnHasRushEndedInSurvivorImpact(); // Function TheK29.K29AnimInstance.OnHasRushEndedInSurvivorImpact // (Final|Native|Private) // @ game+0x58898e0
	void OnHasRushEndedInLedgeDrop(); // Function TheK29.K29AnimInstance.OnHasRushEndedInLedgeDrop // (Final|Native|Private) // @ game+0x58898c0
	void OnHasInstantlyPickedUpSurvivor(); // Function TheK29.K29AnimInstance.OnHasInstantlyPickedUpSurvivor // (Final|Native|Private) // @ game+0x58898a0
	void OnGameEventReceived(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK29.K29AnimInstance.OnGameEventReceived // (Final|Native|Private|HasOutParms) // @ game+0x5889790
};

// Class TheK29.K29GateBlockerStatusEffect
// Size: 0x450 (Inherited: 0x430)
struct UK29GateBlockerStatusEffect : ULingeringMultiStateTagStatusEffect {
	struct FName _escapeZoneBoxComponentTagName; // 0x430(0x0c)
	char pad_43C[0x14]; // 0x43c(0x14)
};

// Class TheK29.K29InfectionRemovalCollectable
// Size: 0x550 (Inherited: 0x510)
struct AK29InfectionRemovalCollectable : ABaseCamperCollectable {
	struct FDBDTunableRowHandle _maxCharges; // 0x510(0x28)
	char pad_538[0x18]; // 0x538(0x18)
};

// Class TheK29.K29P01
// Size: 0x3d8 (Inherited: 0x3c8)
struct UK29P01 : UPerk {
	float _survivorVaultRushedEventRange; // 0x3c8(0x04)
	float _cooldownTime; // 0x3cc(0x04)
	char pad_3D0[0x8]; // 0x3d0(0x08)

	float GetSurvivorVaultRushedEventRange(); // Function TheK29.K29P01.GetSurvivorVaultRushedEventRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
};

// Class TheK29.K29P02
// Size: 0x490 (Inherited: 0x3c8)
struct UK29P02 : UPerk {
	float _revealRange[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _effectClass; // 0x3d8(0x08)
	struct TMap<struct TWeakObjectPtr<struct ACamperPlayer>, struct TWeakObjectPtr<struct UStatusEffect>> _survivorRevealedEffects; // 0x3e0(0x50)
	char pad_430[0x60]; // 0x430(0x60)

	float GetRevealRange(); // Function TheK29.K29P02.GetRevealRange // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd5d0
	void Authority_OnInRangeChanged(bool inRange, struct ACamperPlayer* Survivor); // Function TheK29.K29P02.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x5889150
};

// Class TheK29.K29P03
// Size: 0x3e0 (Inherited: 0x3c8)
struct UK29P03 : UPerk {
	float _brokenEffectDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _effectClass; // 0x3d8(0x08)
};

// Class TheK29.K29P03StatusEffect
// Size: 0x360 (Inherited: 0x360)
struct UK29P03StatusEffect : UAdjustableCooldownStatusEffect {
};

// Class TheK29.K29PathingCalculatorComponent
// Size: 0x2b8 (Inherited: 0xb8)
struct UK29PathingCalculatorComponent : UActorComponent {
	struct FDBDTunableRowHandle _maxStepHeight; // 0xb8(0x28)
	struct FDBDTunableRowHandle _maxStepHeightDownwards; // 0xe0(0x28)
	struct FDBDTunableRowHandle _horizontalAngle; // 0x108(0x28)
	struct FDBDTunableRowHandle _verticalAngle; // 0x130(0x28)
	struct FDBDTunableRowHandle _gridLength; // 0x158(0x28)
	struct FDBDTunableRowHandle _detectionHeightOffset; // 0x180(0x28)
	struct FDBDTunableRowHandle _floorSearchLengthFromActorLocation; // 0x1a8(0x28)
	struct FDBDTunableRowHandle _minimumWallDashDistanceCarryingSurvivor; // 0x1d0(0x28)
	float _floorCheckDistance; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FDBDTunableRowHandle _lineOfSightCapsuleRadius; // 0x200(0x28)
	struct FDBDTunableRowHandle _lineOfSightCapsuleHeight; // 0x228(0x28)
	struct FDBDTunableRowHandle _lineOfSightCapsuleHeightOffset; // 0x250(0x28)
	struct FDBDTunableRowHandle _maximumWalkableAngle; // 0x278(0x28)
	float _groundCollisionDetectionRadius; // 0x2a0(0x04)
	float _allowedGroundBlockerHeight; // 0x2a4(0x04)
	float _minimalLedgeDistance; // 0x2a8(0x04)
	char pad_2AC[0xc]; // 0x2ac(0x0c)
};

// Class TheK29.K29Power
// Size: 0x670 (Inherited: 0x4c8)
struct AK29Power : ACollectable {
	struct UChargeableComponent* _rushChargeableComponent; // 0x4c8(0x08)
	struct UInteractor* _interactor; // 0x4d0(0x08)
	struct UBoxPlayerOverlapComponent* _interactionVolume; // 0x4d8(0x08)
	struct UK29PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent; // 0x4e0(0x08)
	struct UK29PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent; // 0x4e8(0x08)
	struct UK29PowerStatusHandlerComponent* _powerStatusHandlerComponentClass; // 0x4f0(0x08)
	struct UK29RushChargesHandlerComponent* _rushChargesHandlerComponentClass; // 0x4f8(0x08)
	struct UK29PathingCalculatorComponent* _pathingCalculatorComponentClass; // 0x500(0x08)
	struct UStatusEffect* _blindnessProtectionStatusEffectClass; // 0x508(0x08)
	struct FTunableStat _rushChargeTime; // 0x510(0x80)
	struct FStatProperty _scorePercent; // 0x590(0x88)
	struct AAnimationFollowerActor* _moriTentaclesAnimationFollowerActorClass; // 0x618(0x08)
	char pad_620[0x8]; // 0x620(0x08)
	struct UK29PowerStatusHandlerComponent* _powerStatusHandlerComponent; // 0x628(0x08)
	struct UK29RushChargesHandlerComponent* _rushChargesHandlerComponent; // 0x630(0x08)
	struct UK29PathingCalculatorComponent* _pathingCalculatorComponent; // 0x638(0x08)
	char pad_640[0x30]; // 0x640(0x30)

	struct UInteractionDefinition* GetSlashSurvivorInteraction(); // Function TheK29.K29Power.GetSlashSurvivorInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	struct UInteractionDefinition* GetSlashBreakableInteraction(); // Function TheK29.K29Power.GetSlashBreakableInteraction // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	float GetScorePercent(); // Function TheK29.K29Power.GetScorePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5889690
	struct UK29RushCooldownInteraction* GetRushVaultCooldownInteraction(); // Function TheK29.K29Power.GetRushVaultCooldownInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	struct UStaticMeshComponent* GetRushSurvivorDetectionBox(); // Function TheK29.K29Power.GetRushSurvivorDetectionBox // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	struct UK29RushCooldownInteraction* GetRushCompleteSurvivorThrowCooldownInteraction(); // Function TheK29.K29Power.GetRushCompleteSurvivorThrowCooldownInteraction // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	struct UK29RushCooldownInteraction* GetRushCompleteSurvivorHitCooldownInteraction(); // Function TheK29.K29Power.GetRushCompleteSurvivorHitCooldownInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	struct UK29RushCooldownInteraction* GetRushCompleteNoSurvivorCooldownInteraction(); // Function TheK29.K29Power.GetRushCompleteNoSurvivorCooldownInteraction // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	struct UK29RushChargesHandlerComponent* GetRushChargesHandlerComponent(); // Function TheK29.K29Power.GetRushChargesHandlerComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x5889660
	struct UK29RushCooldownInteraction* GetRushChargeCancelCooldownInteraction(); // Function TheK29.K29Power.GetRushChargeCancelCooldownInteraction // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	struct UK29RushChargeableInteraction* GetRushChargeableInteraction(); // Function TheK29.K29Power.GetRushChargeableInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	struct UK29RushCooldownInteraction* GetRushBreakableCooldownInteraction(); // Function TheK29.K29Power.GetRushBreakableCooldownInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	struct UInteractionDefinition* GetPushSurvivorOverLedgeInteraction(); // Function TheK29.K29Power.GetPushSurvivorOverLedgeInteraction // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	struct UK29PowerStatusHandlerComponent* GetPowerStatusHandlerComponent(); // Function TheK29.K29Power.GetPowerStatusHandlerComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x5889630
	struct UK29RushCooldownInteraction* GetDropSurvivorCooldownInteraction(); // Function TheK29.K29Power.GetDropSurvivorCooldownInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void Authority_OnStun(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK29.K29Power.Authority_OnStun // (Final|Native|Private|HasOutParms) // @ game+0x58892d0
};

// Class TheK29.K29PowerChargePresentationItemProgressComponent
// Size: 0xd8 (Inherited: 0xc0)
struct UK29PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UK29PowerStatusHandlerComponent* _statusHandlerComponent; // 0xc0(0x08)
	struct UK29RushChargesHandlerComponent* _rushChargesHandlerComponent; // 0xc8(0x08)
	struct UK29RushChargeableInteraction* _rushInteraction; // 0xd0(0x08)
};

// Class TheK29.K29PowerChargePresentationPowerFadeComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UK29PowerChargePresentationPowerFadeComponent : UPresentationPowerFadeComponent {
	struct UK29RushChargesHandlerComponent* _rushChargesHandlerComponent; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)

	void SetDependencies(struct UK29RushChargesHandlerComponent* ammoHandler); // Function TheK29.K29PowerChargePresentationPowerFadeComponent.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x5482800
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK29.K29PowerChargePresentationPowerFadeComponent.OnKillerSet // (Final|Native|Private) // @ game+0x5889900
};

// Class TheK29.K29PowerStatusHandlerComponent
// Size: 0x428 (Inherited: 0xb8)
struct UK29PowerStatusHandlerComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct FDBDTunableRowHandle _maxInfectionLevel; // 0xe8(0x28)
	struct FTunableStat _infectionAddedPerTickWhileActive; // 0x110(0x80)
	struct UCurveFloat* _stabilizingHealAmountByUsage; // 0x190(0x08)
	struct FTunableStat _initialInfectionLevel; // 0x198(0x80)
	struct FTunableStat _addedInfectionLevelsOnGrab; // 0x218(0x80)
	struct FTunableStat _infectionHealingMultiplier; // 0x298(0x80)
	struct FDBDTunableRowHandle _infectionIncubationThreshold; // 0x318(0x28)
	struct FTunableStat _useInfectionRemoverChargeTime; // 0x340(0x80)
	struct UStatusEffect* _hinderedStatusEffectClass; // 0x3c0(0x08)
	struct UStatusEffect* _gateBlockerStatusEffectClass; // 0x3c8(0x08)
	struct UK29SurvivorThrowableComponent* _survivorThrowableClass; // 0x3d0(0x08)
	struct UChargeableInteractionDefinition* _useInfectionRemoverInteractionSelfClass; // 0x3d8(0x08)
	struct UChargeableInteractionDefinition* _useInfectionRemoverInteractionOtherClass; // 0x3e0(0x08)
	int32_t _maxInfectionLevelWhenHooked; // 0x3e8(0x04)
	float _recentlyGrabbedThresholdSeconds; // 0x3ec(0x04)
	struct TArray<struct FK29SurvivorStatus> _survivorStatusList; // 0x3f0(0x10)
	char pad_400[0x28]; // 0x400(0x28)

	void Server_ReleaseSurvivor(struct ACamperPlayer* Survivor, bool isForced); // Function TheK29.K29PowerStatusHandlerComponent.Server_ReleaseSurvivor // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x5889c80
	void Server_GrabSurvivor(struct ACamperPlayer* Survivor, bool isProcessingInitialInfection); // Function TheK29.K29PowerStatusHandlerComponent.Server_GrabSurvivor // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x5889bb0
	void OnRep_SurvivorStatusList(struct TArray<struct FK29SurvivorStatus> oldSurvivorStatus); // Function TheK29.K29PowerStatusHandlerComponent.OnRep_SurvivorStatusList // (Final|Native|Private) // @ game+0x5889a20
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK29.K29PowerStatusHandlerComponent.OnKillerSet // (Final|Native|Private) // @ game+0x5889990
	void Multicast_UseStabilizingSpray(struct ACamperPlayer* TargetSurvivor); // Function TheK29.K29PowerStatusHandlerComponent.Multicast_UseStabilizingSpray // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5490b20
	void Multicast_RemoveSurvivorFromCloset(struct ACamperPlayer* Survivor); // Function TheK29.K29PowerStatusHandlerComponent.Multicast_RemoveSurvivorFromCloset // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d51430
	void Multicast_ReleaseSurvivor(struct ACamperPlayer* Survivor, bool isForced); // Function TheK29.K29PowerStatusHandlerComponent.Multicast_ReleaseSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x58896c0
	void Multicast_GrabSurvivor(struct ACamperPlayer* Survivor, bool isProcessingInitialInfection); // Function TheK29.K29PowerStatusHandlerComponent.Multicast_GrabSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54c3890
	void Multicast_DropSurvivor(struct ACamperPlayer* leftSurvivor); // Function TheK29.K29PowerStatusHandlerComponent.Multicast_DropSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55700e0
	int32_t GetMaxInfectionLevel(); // Function TheK29.K29PowerStatusHandlerComponent.GetMaxInfectionLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x5889600
	int32_t GetInfectionLevel(struct ACamperPlayer* Survivor); // Function TheK29.K29PowerStatusHandlerComponent.GetInfectionLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x5889560
	void Cosmetic_OnGrabbingNonInfectedSurvivor(); // Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingNonInfectedSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnGrabbingInfectedSurvivor(); // Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingInfectedSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_UseStabilizingSpray(struct ACamperPlayer* instigatingSurvivor, struct ACamperPlayer* TargetSurvivor); // Function TheK29.K29PowerStatusHandlerComponent.Authority_UseStabilizingSpray // (Final|Native|Public|BlueprintCallable) // @ game+0x5889490
	void Authority_SetAllSurvivorsToMaxInfection(); // Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToMaxInfection // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void Authority_SetAllSurvivorsToInitialInfection(); // Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToInitialInfection // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void Authority_OnSurvivorImmoblizedChanged(); // Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorImmoblizedChanged // (Final|Native|Private) // @ game+0x5889470
	void Authority_OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorAdded // (Final|Native|Private) // @ game+0x58893e0
	void Authority_OnSlash(struct ACamperPlayer* TargetSurvivor); // Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSlash // (Final|Native|Public|BlueprintCallable) // @ game+0x5889240
	void Authority_OnIntroCompleted(); // Function TheK29.K29PowerStatusHandlerComponent.Authority_OnIntroCompleted // (Final|Native|Private) // @ game+0x5889220
	void Authority_HealInfectionLevels(struct ACamperPlayer* Survivor, int32_t infectionLevelsToHeal, bool shouldSetInfectionActiveToFalse); // Function TheK29.K29PowerStatusHandlerComponent.Authority_HealInfectionLevels // (Final|Native|Public|BlueprintCallable) // @ game+0x5889040
	void Authority_HealAllSurvivorsInfectionWithStabilizingSpray(); // Function TheK29.K29PowerStatusHandlerComponent.Authority_HealAllSurvivorsInfectionWithStabilizingSpray // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void Authority_AddInfectionLevels(struct ACamperPlayer* Survivor, int32_t infectionToAdd); // Function TheK29.K29PowerStatusHandlerComponent.Authority_AddInfectionLevels // (Final|Native|Public|BlueprintCallable) // @ game+0x5888f70
	void AddToTimesCuredByHeal(struct ACamperPlayer* Survivor); // Function TheK29.K29PowerStatusHandlerComponent.AddToTimesCuredByHeal // (Final|Native|Public|BlueprintCallable) // @ game+0x5888ee0
};

// Class TheK29.K29RushChargeableInteraction
// Size: 0xf60 (Inherited: 0x760)
struct UK29RushChargeableInteraction : UChargeableInteractionDefinition {
	char pad_760[0x8]; // 0x760(0x08)
	struct UK29RushChargesHandlerComponent* _rushChargesHandlerComponent; // 0x768(0x08)
	struct UK29PowerStatusHandlerComponent* _powerStatusHandlerComponent; // 0x770(0x08)
	struct UK29PathingCalculatorComponent* _pathingCalculatorComponent; // 0x778(0x08)
	struct AK29Power* _powerCollectable; // 0x780(0x08)
	struct TMap<enum class EK29RushPhase, struct FK29RushMovementSpeedSetting> _movementSpeedSettingsByState; // 0x788(0x50)
	struct UCurveFloat* _subsequentRushTimerTimeoutMovementSpeedMultiplierCurve; // 0x7d8(0x08)
	struct FTunableStat _subsequentRushTimerTimeoutMovementSpeedReductionDuration; // 0x7e0(0x80)
	struct FTunableStat _subsequentRushOpportunityTimerDuration; // 0x860(0x80)
	struct FTunableStat _rushDuration; // 0x8e0(0x80)
	struct FTunableStat _rushDurationAfterFirst; // 0x960(0x80)
	struct FDBDTunableRowHandle _capsuleRadius; // 0x9e0(0x28)
	struct FDBDTunableRowHandle _survivorRevealTimeOnInstantPickup; // 0xa08(0x28)
	struct FDBDTunableRowHandle _capsuleHeight; // 0xa30(0x28)
	struct FDBDTunableRowHandle _capsuleHeightOffset; // 0xa58(0x28)
	struct FDBDTunableRowHandle _bounceDuration; // 0xa80(0x28)
	struct FDBDTunableRowHandle _rushAccelerationMultiplier; // 0xaa8(0x28)
	struct FDBDTunableRowHandle _instantCarryAnimationDuration; // 0xad0(0x28)
	float _percentageForRushChargeEndAvailability; // 0xaf8(0x04)
	float _distanceInCmForNearMiss; // 0xafc(0x04)
	float _rushDetectionBackwardsOffset; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	struct UStatusEffect* _revealToSurvivorsStatusEffect; // 0xb08(0x08)
	struct FDBDTunableRowHandle _rushMovementSpeedInCmPerSecond; // 0xb10(0x28)
	struct FDBDTunableRowHandle _rushGrabMovementSpeedInCmPerSecond; // 0xb38(0x28)
	struct FTunableStat _grabRushDuration; // 0xb60(0x80)
	float _rotationStrengthTransitionTime; // 0xbe0(0x04)
	char pad_BE4[0x4]; // 0xbe4(0x04)
	struct FDBDTunableRowHandle _minimumRushDistance; // 0xbe8(0x28)
	struct FDBDTunableRowHandle _intoGrabbingTime; // 0xc10(0x28)
	struct FDBDTunableRowHandle _smashOutTimerDuration; // 0xc38(0x28)
	struct FDBDTunableRowHandle _isStoppingMomentumAtIntoGrabbing; // 0xc60(0x28)
	struct UCurveFloat* _movementSpeedCurveBetweenRushesIncreased; // 0xc88(0x08)
	struct UCurveFloat* _movementSpeedCurveChargingIncreased; // 0xc90(0x08)
	struct UCurveFloat* _rushMovementSpeedCurve; // 0xc98(0x08)
	struct UCurveFloat* _rushMovementSpeedCurveWithSurvivor; // 0xca0(0x08)
	struct FName _killerRushSmashAnimationName; // 0xca8(0x0c)
	struct FName _survivorRushSmashAnimationName; // 0xcb4(0x0c)
	struct FName _killerRushToCarryAnimationName; // 0xcc0(0x0c)
	struct FName _survivorRushToCarryAnimationName; // 0xccc(0x0c)
	struct FName _survivorRushDropAnimationName; // 0xcd8(0x0c)
	struct FName _killerRushCooldownAnimationName; // 0xce4(0x0c)
	struct FName _animTagFPV; // 0xcf0(0x0c)
	float _lagInSecondsUntilRushIsInvalid; // 0xcfc(0x04)
	float _rushDropForwardDistance; // 0xd00(0x04)
	float _decisiveStrikeSkillCheckDelay; // 0xd04(0x04)
	bool _isLagChecked; // 0xd08(0x01)
	char pad_D09[0x7]; // 0xd09(0x07)
	struct TArray<struct UInteractionDefinition*> _survivorInteractionPreventingGrab; // 0xd10(0x10)
	char pad_D20[0x240]; // 0xd20(0x240)

	void Server_SlashAtSurvivor(struct ACamperPlayer* Survivor, struct FVector currentKillerPosition); // Function TheK29.K29RushChargeableInteraction.Server_SlashAtSurvivor // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults) // @ game+0x588e200
	void Server_SetCurrentRushAsEndingInCollision(bool hitOtherSurvivor); // Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingInCollision // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x588e170
	void Server_SetCurrentRushAsEndingAtLedge(); // Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingAtLedge // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x588e150
	void Server_SetCurrentRush(struct FK29GuidedMovementInstance newRushInstance, enum class EK29RushPhase targetPhase); // Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRush // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x588e020
	void Server_DestroyPalletOrBreakable(struct AActor* destroyable); // Function TheK29.K29RushChargeableInteraction.Server_DestroyPalletOrBreakable // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x588df90
	void Server_DamageSurvivorAsCollision(struct ACamperPlayer* Survivor, struct FVector currentKillerPosition); // Function TheK29.K29RushChargeableInteraction.Server_DamageSurvivorAsCollision // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults) // @ game+0x588dec0
	void Server_ChangeRushPhase(enum class EK29RushPhase newRushPhase, float clientTimeStamp, bool forceLocallyControlled); // Function TheK29.K29RushChargeableInteraction.Server_ChangeRushPhase // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x588ddb0
	void Server_CancelInteraction(); // Function TheK29.K29RushChargeableInteraction.Server_CancelInteraction // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x581f300
	void RushComplete(bool rushEndedNaturally); // Function TheK29.K29RushChargeableInteraction.RushComplete // (Final|Native|Private) // @ game+0x588dd20
	void OnWindowOfOpportunityTimeoutCooldownEnd(); // Function TheK29.K29RushChargeableInteraction.OnWindowOfOpportunityTimeoutCooldownEnd // (Final|Native|Private) // @ game+0x588dcc0
	void OnSubsequentRushOpportunityTimeout(); // Function TheK29.K29RushChargeableInteraction.OnSubsequentRushOpportunityTimeout // (Final|Native|Private) // @ game+0x588dc10
	void OnSmashOutTimerCompleted(); // Function TheK29.K29RushChargeableInteraction.OnSmashOutTimerCompleted // (Final|Native|Private) // @ game+0x588dbf0
	void OnInstantCarryTimerComplete(struct ACamperPlayer* survivorToCarry); // Function TheK29.K29RushChargeableInteraction.OnInstantCarryTimerComplete // (Final|Native|Private) // @ game+0x588d8f0
	void OnGrabbingTransitionComplete(); // Function TheK29.K29RushChargeableInteraction.OnGrabbingTransitionComplete // (Final|Native|Private) // @ game+0x588d750
	void OnCollisionEnableTimerComplete(); // Function TheK29.K29RushChargeableInteraction.OnCollisionEnableTimerComplete // (Final|Native|Private) // @ game+0x588d620
	void Multicast_SmashSurvivor(struct ACamperPlayer* survivorToCarry); // Function TheK29.K29RushChargeableInteraction.Multicast_SmashSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d590
	void Multicast_SlashAtSurvivor(struct ACamperPlayer* Survivor, struct FVector currentKillerPosition, enum class ECamperDamageState survivorTargetDamageState); // Function TheK29.K29RushChargeableInteraction.Multicast_SlashAtSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x588d480
	void Multicast_SetCurrentRushAsEndingInCollision(); // Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingInCollision // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d460
	void Multicast_SetCurrentRushAsEndingAtLedge(); // Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingAtLedge // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d440
	void Multicast_SetCurrentRush(struct FK29GuidedMovementInstance newRushInstance); // Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRush // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d340
	void Multicast_RushValid(); // Function TheK29.K29RushChargeableInteraction.Multicast_RushValid // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d320
	void Multicast_RushInvalid(); // Function TheK29.K29RushChargeableInteraction.Multicast_RushInvalid // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x585e3a0
	void Multicast_DestroyPalletOrBreakable(struct AActor* destroyable); // Function TheK29.K29RushChargeableInteraction.Multicast_DestroyPalletOrBreakable // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d290
	void Multicast_DamageSurvivorAsCollision(struct FVector currentKillerPosition, struct ACamperPlayer* collidedSurvivor, enum class ECamperDamageState survivorTargetDamageState); // Function TheK29.K29RushChargeableInteraction.Multicast_DamageSurvivorAsCollision // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x588d180
	void Multicast_ChangeRushPhase(enum class EK29RushPhase newRushPhase, bool forceLocallyControlled); // Function TheK29.K29RushChargeableInteraction.Multicast_ChangeRushPhase // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d0a0
	void Multicast_CarrySurvivor(struct ACamperPlayer* survivorToCarry); // Function TheK29.K29RushChargeableInteraction.Multicast_CarrySurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x588d010
	void Multicast_CancelInteraction(); // Function TheK29.K29RushChargeableInteraction.Multicast_CancelInteraction // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56c4ec0
	float GetRushTimeLeft(); // Function TheK29.K29RushChargeableInteraction.GetRushTimeLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cef0
	void Cosmetic_ShowEndIndicator(struct FVector& endIndicatorLocation, struct FRotator& forwardRotation); // Function TheK29.K29RushChargeableInteraction.Cosmetic_ShowEndIndicator // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSlashAtSurvivor(struct ACamperPlayer* Survivor, enum class ECamperDamageState survivorTargetDamageState); // Function TheK29.K29RushChargeableInteraction.Cosmetic_OnSlashAtSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnRushStart(); // Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnRushPhaseChanged(enum class EK29RushPhase previousPhase, enum class EK29RushPhase newPhase); // Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushPhaseChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnRushEnd(); // Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeStart(); // Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeEnd(); // Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_HideEndIndicator(); // Function TheK29.K29RushChargeableInteraction.Cosmetic_HideEndIndicator // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DamageSurvivorAsCollision(struct ACamperPlayer* Survivor, enum class ECamperDamageState survivorTargetDamageState); // Function TheK29.K29RushChargeableInteraction.Cosmetic_DamageSurvivorAsCollision // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BounceComplete(); // Function TheK29.K29RushChargeableInteraction.BounceComplete // (Final|Native|Private) // @ game+0x588cd90
};

// Class TheK29.K29RushChargesHandlerComponent
// Size: 0x230 (Inherited: 0xb8)
struct UK29RushChargesHandlerComponent : UActorComponent {
	struct FTunableStat _maximumRushCharges; // 0xb8(0x80)
	struct UCurveFloat* _rechargeTimeByChargesLeft; // 0x138(0x08)
	struct FTunableStat _rechargeDurationMultiplier; // 0x140(0x80)
	struct FDBDTunableRowHandle _reducedChargeTimePerInfectionPlayers; // 0x1c0(0x28)
	char pad_1E8[0x48]; // 0x1e8(0x48)

	void SetToFullCharge(); // Function TheK29.K29RushChargesHandlerComponent.SetToFullCharge // (Final|Native|Private) // @ game+0x588e2d0
	void OnMaximumChargesChanged(float NewValue); // Function TheK29.K29RushChargesHandlerComponent.OnMaximumChargesChanged // (Final|Native|Private) // @ game+0x588dac0
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK29.K29RushChargesHandlerComponent.OnKillerSet // (Final|Native|Private) // @ game+0x588d980
	float GetPercentageRemainingUntilNextCharge(); // Function TheK29.K29RushChargesHandlerComponent.GetPercentageRemainingUntilNextCharge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cec0
	int32_t GetMaximumCharges(); // Function TheK29.K29RushChargesHandlerComponent.GetMaximumCharges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x588ce60
	int32_t GetAvailableCharges(); // Function TheK29.K29RushChargesHandlerComponent.GetAvailableCharges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cdd0
	void Cosmetic_OnRushChargeAdded(); // Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnRushChargeAdded // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnOutOfRushCharges(); // Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnOutOfRushCharges // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void AddSingleCharge(); // Function TheK29.K29RushChargesHandlerComponent.AddSingleCharge // (Final|Native|Private) // @ game+0x588cd70
};

// Class TheK29.K29RushCooldownInteraction
// Size: 0x710 (Inherited: 0x630)
struct UK29RushCooldownInteraction : UInteractionDefinition {
	struct FTunableStat _cooldownTime; // 0x630(0x80)
	bool _isCameraRestrictedForDuration; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct FDBDTunableRowHandle _cameraRestrictionTime; // 0x6b8(0x28)
	char pad_6E0[0x30]; // 0x6e0(0x30)

	void ResetCameraInputLimit(); // Function TheK29.K29RushCooldownInteraction.ResetCameraInputLimit // (Final|Native|Protected) // @ game+0x588dce0
};

// Class TheK29.K29SupplyCrateOutlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xe0)
struct UK29SupplyCrateOutlineUpdateStrategy : UDefaultOutlineUpdateStrategy {
};

// Class TheK29.K29SurvivorAnimInstance
// Size: 0x5b0 (Inherited: 0x550)
struct UK29SurvivorAnimInstance : UBaseSurvivorAnimInstance {
	bool _isBeingGrabbed; // 0x550(0x01)
	bool _isBeingThrown; // 0x551(0x01)
	bool _isKillerLocallyControlled; // 0x552(0x01)
	bool _isUsingInfectionRemoverOnSelf; // 0x553(0x01)
	bool _isUsingInfectionRemoverOnOther; // 0x554(0x01)
	bool _isInfectionRemoverUsedOnSelf; // 0x555(0x01)
	bool _hasLastThrowResultedInDamage; // 0x556(0x01)
	bool _isInfectionActive; // 0x557(0x01)
	bool _hasBeenThrown; // 0x558(0x01)
	bool _isCoughing; // 0x559(0x01)
	char pad_55A[0x2]; // 0x55a(0x02)
	float _timeBetweenRandomCoughingTry; // 0x55c(0x04)
	float _randomCoughMinProbabilityRange; // 0x560(0x04)
	float _randomCoughMaxProbabilityRange; // 0x564(0x04)
	float _randomCoughProbabilityThreshold; // 0x568(0x04)
	bool _isCrawling; // 0x56c(0x01)
	bool _isInsideCloset; // 0x56d(0x01)
	bool _isDead; // 0x56e(0x01)
	bool _isInteracting; // 0x56f(0x01)
	bool _isInjured; // 0x570(0x01)
	bool _isHoldingObject; // 0x571(0x01)
	bool _isCrouched; // 0x572(0x01)
	bool _isHooked; // 0x573(0x01)
	bool _isIdle; // 0x574(0x01)
	bool _isUsingAimItem; // 0x575(0x01)
	bool _isInAir; // 0x576(0x01)
	bool _isBeingHealed; // 0x577(0x01)
	char pad_578[0x38]; // 0x578(0x38)

	void ResetHasBeenThrown(); // Function TheK29.K29SurvivorAnimInstance.ResetHasBeenThrown // (Final|Native|Protected|BlueprintCallable) // @ game+0x588dd00
	void OnHasBeenThrown(); // Function TheK29.K29SurvivorAnimInstance.OnHasBeenThrown // (Final|Native|Private) // @ game+0x588d770
	void OnGameEventReceived(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK29.K29SurvivorAnimInstance.OnGameEventReceived // (Final|Native|Private|HasOutParms) // @ game+0x588d640
};

// Class TheK29.K29SurvivorCarriableComponent
// Size: 0x130 (Inherited: 0xb8)
struct UK29SurvivorCarriableComponent : UActorComponent {
	struct FName _rootJointName; // 0xb8(0x0c)
	struct FRotator _startingRotation; // 0xc4(0x0c)
	struct FVector _startingPosition; // 0xd0(0x0c)
	bool _isCarriedByK29Rush; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float _killerIngoreTime; // 0xe0(0x04)
	struct TWeakObjectPtr<struct ACamperPlayer> _owningSurvivor; // 0xe4(0x08)
	char pad_EC[0x44]; // 0xec(0x44)

	void OnRep_OwningSurvivor(); // Function TheK29.K29SurvivorCarriableComponent.OnRep_OwningSurvivor // (Final|Native|Private) // @ game+0x588dbd0
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK29.K29SurvivorCarriableComponent.OnKillerSet // (Final|Native|Private) // @ game+0x588da10
	bool IsBeingCarriedByK29RushOrMarkedForThrow(); // Function TheK29.K29SurvivorCarriableComponent.IsBeingCarriedByK29RushOrMarkedForThrow // (Final|Native|Protected|BlueprintCallable) // @ game+0x588cf20
	void EnableCollision(); // Function TheK29.K29SurvivorCarriableComponent.EnableCollision // (Final|Native|Public) // @ game+0x588cdb0
};

// Class TheK29.K29SurvivorCosmeticHelperActor
// Size: 0x338 (Inherited: 0x270)
struct AK29SurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	char pad_270[0xc8]; // 0x270(0xc8)

	void OnSurvivorGrabbed(struct ACamperPlayer* Survivor); // Function TheK29.K29SurvivorCosmeticHelperActor.OnSurvivorGrabbed // (Final|Native|Private) // @ game+0x588dc30
	void OnOwnerLocallyObserved(bool locallyObserved); // Function TheK29.K29SurvivorCosmeticHelperActor.OnOwnerLocallyObserved // (Final|Native|Private) // @ game+0x588db40
	void OnLevelReadyToPlay(); // Function TheK29.K29SurvivorCosmeticHelperActor.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x588daa0
	void OnInfectionRemovalCollectableUsed(struct ACamperPlayer* Survivor); // Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionRemovalCollectableUsed // (Final|Native|Private) // @ game+0x588d860
	void OnInfectionLevelsChanged(struct ACamperPlayer* TargetSurvivor, bool IsActive); // Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionLevelsChanged // (Final|Native|Private) // @ game+0x588d790
	bool IsInfectionIncubated(); // Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionIncubated // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cfe0
	bool IsInfectionCritical(); // Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionCritical // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cfb0
	bool IsInfectionActive(); // Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cf80
	bool IsInfected(); // Function TheK29.K29SurvivorCosmeticHelperActor.IsInfected // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588cf50
	int32_t GetMaximumInfectionLevels(); // Function TheK29.K29SurvivorCosmeticHelperActor.GetMaximumInfectionLevels // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588ce90
	float GetCurrentInfectionPercentage(); // Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionPercentage // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588ce30
	int32_t GetCurrentInfectionLevels(); // Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionLevels // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x588ce00
	void Cosmetic_OnOwningSurvivorHitCollisionWithRush(); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorHitCollisionWithRush // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnOwningSurvivorDied(); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorDied // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLocallyObservedChanged(); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInfectionRemovalCollectableUsed(); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionRemovalCollectableUsed // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInfectionLevelsChanged(bool IsActive); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionLevelsChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_IsInfectionIncubatedChanged(bool IsInfectionIncubated); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionIncubatedChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_IsInfectionCriticalChanged(bool IsInfectionCritical); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionCriticalChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_IsInfectedChanged(bool IsInfected); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_IsInfectedActiveChanged(bool IsInfectionActive); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedActiveChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_GrabbedByKiller(); // Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_GrabbedByKiller // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK29.K29SurvivorStatusComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UK29SurvivorStatusComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TWeakObjectPtr<struct UK29PowerStatusHandlerComponent> _powerStatusHandlerComponent; // 0xc0(0x08)
	struct TWeakObjectPtr<struct ACamperPlayer> _owningSurvivor; // 0xc8(0x08)
};

// Class TheK29.K29SurvivorThrowableComponent
// Size: 0x3d0 (Inherited: 0xb8)
struct UK29SurvivorThrowableComponent : UActorComponent {
	struct FTunableStat _throwDuration; // 0xb8(0x80)
	struct FDBDTunableRowHandle _capsuleRadius; // 0x138(0x28)
	struct FDBDTunableRowHandle _capsuleHeight; // 0x160(0x28)
	struct FDBDTunableRowHandle _capsuleHeightOffset; // 0x188(0x28)
	struct FDBDTunableRowHandle _minimumThrowDistance; // 0x1b0(0x28)
	struct FDBDTunableRowHandle _throwMovementSpeedInCmPerSecond; // 0x1d8(0x28)
	struct FDBDTunableRowHandle _movingDelay; // 0x200(0x28)
	struct FDBDTunableRowHandle _throwDelay; // 0x228(0x28)
	struct FDBDTunableRowHandle _throwLedgeDropDistance; // 0x250(0x28)
	struct FDBDTunableRowHandle _throwLedgeDropTime; // 0x278(0x28)
	struct UCurveFloat* _throwMovementSpeedMultiplierCurve; // 0x2a0(0x08)
	struct FDBDTunableRowHandle _throwAccelerationMultiplier; // 0x2a8(0x28)
	char pad_2D0[0x100]; // 0x2d0(0x100)

	void Server_EndThrow(); // Function TheK29.K29SurvivorThrowableComponent.Server_EndThrow // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4aa7040
	void Server_CancelThrowOnOtherSurvivorCollision(struct FVector collisionPosition, struct ACamperPlayer* survivorUsedAsCollision); // Function TheK29.K29SurvivorThrowableComponent.Server_CancelThrowOnOtherSurvivorCollision // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults) // @ game+0x5890ab0
	void OnWalkingAllowedAfterFall(); // Function TheK29.K29SurvivorThrowableComponent.OnWalkingAllowedAfterFall // (Final|Native|Private) // @ game+0x5890a90
	void OnThrowTimeout(); // Function TheK29.K29SurvivorThrowableComponent.OnThrowTimeout // (Final|Native|Private) // @ game+0x5890a70
	void Multicast_SetCurrentThrow(struct FK29GuidedMovementInstance throwInstance, struct ACamperPlayer* thrownSurvivor); // Function TheK29.K29SurvivorThrowableComponent.Multicast_SetCurrentThrow // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5890850
	void Multicast_InstantlyLetGoSurvivor(bool hasDealtDamage); // Function TheK29.K29SurvivorThrowableComponent.Multicast_InstantlyLetGoSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x58907c0
	void Multicast_EndThrow(); // Function TheK29.K29SurvivorThrowableComponent.Multicast_EndThrow // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	void Multicast_CancelThrowOnOtherSurvivorCollision(struct FVector collisionPosition, struct ACamperPlayer* survivorUsedAsCollision); // Function TheK29.K29SurvivorThrowableComponent.Multicast_CancelThrowOnOtherSurvivorCollision // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x58906e0
	void EndThrow(); // Function TheK29.K29SurvivorThrowableComponent.EndThrow // (Final|Native|Private) // @ game+0x5890530
	void Cosmetic_OnSurvivorUsedAsCollision(struct ACamperPlayer* Survivor); // Function TheK29.K29SurvivorThrowableComponent.Cosmetic_OnSurvivorUsedAsCollision // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK29.K29UseInfectionRemoverInteraction
// Size: 0x790 (Inherited: 0x760)
struct UK29UseInfectionRemoverInteraction : UChargeableInteractionDefinition {
	struct UStatusEffect* _killerInstinctClass; // 0x758(0x08)
	struct FDBDTunableRowHandle _killerInstinctDuration; // 0x760(0x28)

	void OnSurvivorCured_Cosmetic(); // Function TheK29.K29UseInfectionRemoverInteraction.OnSurvivorCured_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	struct ACamperPlayer* GetInteractionTarget(); // Function TheK29.K29UseInfectionRemoverInteraction.GetInteractionTarget // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x579f660
};

// Class TheK29.K29UseInfectionRemoverInteractionOther
// Size: 0x7b0 (Inherited: 0x790)
struct UK29UseInfectionRemoverInteractionOther : UK29UseInfectionRemoverInteraction {
	struct UStatusEffect* _crouchBlockStatusEffectClass; // 0x790(0x08)
	char pad_798[0x8]; // 0x798(0x08)
	struct UStatusEffect* _crouchBlockStatusEffect; // 0x7a0(0x08)
	char pad_7A8[0x8]; // 0x7a8(0x08)
};

// Class TheK29.K29UseInfectionRemoverInteractionSelf
// Size: 0x790 (Inherited: 0x790)
struct UK29UseInfectionRemoverInteractionSelf : UK29UseInfectionRemoverInteraction {
};

// Class TheK29.K29Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK29Utilities : UBlueprintFunctionLibrary {

	bool IsSurvivorAbleToBeAffectedByPower(struct AActor* survivorAsActor, struct ASlasherPlayer* killer); // Function TheK29.K29Utilities.IsSurvivorAbleToBeAffectedByPower // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5890610
	struct AK29Power* GetK29Power(struct UObject* WorldContextObject); // Function TheK29.K29Utilities.GetK29Power // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5890580
};

// Class TheK29.ReassuranceCondition
// Size: 0x230 (Inherited: 0x1e0)
struct UReassuranceCondition : UIsInRangeOfHookedSurvivor {
	char pad_1E0[0x50]; // 0x1e0(0x50)
};

// Class TheK29.S32P01
// Size: 0x488 (Inherited: 0x448)
struct US32P01 : UGeneratorTrapPerk {
	float _generatorRevealRange; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UStatusEffect* _revealEffect; // 0x450(0x08)
	struct UStatusEffect* _revealStatus; // 0x458(0x08)
	bool _isKillerInRange; // 0x460(0x01)
	char pad_461[0x27]; // 0x461(0x27)

	void OnRep_IsKillerInRange(); // Function TheK29.S32P01.OnRep_IsKillerInRange // (Final|Native|Private) // @ game+0x5890a30
	float GetGeneratorRevealRange(); // Function TheK29.S32P01.GetGeneratorRevealRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5890550
};

// Class TheK29.S32P02
// Size: 0x3e8 (Inherited: 0x3c8)
struct US32P02 : UPerk {
	float _hitDistanceToTriggerPerkEffect[0x3]; // 0x3c8(0x0c)
	float _healingProgressionIncreasedOnHit[0x3]; // 0x3d4(0x0c)
	float _tresholdToHealCompletely; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)

	float GetHitDistanceAtLevel(); // Function TheK29.S32P02.GetHitDistanceAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetHealingProgressionIncreaseAtLevel(); // Function TheK29.S32P02.GetHealingProgressionIncreaseAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
};

// Class TheK29.S32P03
// Size: 0x3e0 (Inherited: 0x3c8)
struct US32P03 : UPerk {
	float _activationTime[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0xc]; // 0x3d4(0x0c)

	float GetActivationTimeForLevel(); // Function TheK29.S32P03.GetActivationTimeForLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK29.S33P01
// Size: 0x3e0 (Inherited: 0x3c8)
struct US33P01 : UPerk {
	struct UStatusEffect* _S33P01StatusEffect; // 0x3c8(0x08)
	float _interactionProgressionAmount[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
};

// Class TheK29.S33P01StatusEffect
// Size: 0x358 (Inherited: 0x350)
struct US33P01StatusEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
};

// Class TheK29.S33P02
// Size: 0x400 (Inherited: 0x3c8)
struct US33P02 : UPerk {
	float _distanceRadius; // 0x3c8(0x04)
	float _struggleProgressionPausedDuration[0x3]; // 0x3cc(0x0c)
	struct UStatusEffect* _S33P02StatusEffect; // 0x3d8(0x08)
	struct TArray<struct ACamperPlayer*> _reassuredSurvivors; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void OnRep_ReassuredSurvivors(); // Function TheK29.S33P02.OnRep_ReassuredSurvivors // (Final|Native|Private) // @ game+0x5890a50
	void Local_EffectTriggered(struct FTransform Location); // Function TheK29.S33P02.Local_EffectTriggered // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	float GetStruggleProgressionAtLevel(); // Function TheK29.S33P02.GetStruggleProgressionAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
};

// Class TheK29.S33P02Interaction
// Size: 0x630 (Inherited: 0x630)
struct US33P02Interaction : UInteractionDefinition {
};

// Class TheK29.S33p02StatusEffect
// Size: 0x358 (Inherited: 0x350)
struct US33p02StatusEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
};

// Class TheK29.S33P03
// Size: 0x400 (Inherited: 0x3c8)
struct US33P03 : UPerk {
	float _skillCheckTriggerPercentPerToken; // 0x3c8(0x04)
	float _skillCheckCursorSpeedPerToken; // 0x3cc(0x04)
	float _skillCheckBonusPercentPerToken[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x24]; // 0x3dc(0x24)

	float GetSkillCheckTriggerPercentPerToken(); // Function TheK29.S33P03.GetSkillCheckTriggerPercentPerToken // (Final|Native|Public|BlueprintCallable) // @ game+0x4ceee40
	float GetSkillCheckCursorSpeedPerToken(); // Function TheK29.S33P03.GetSkillCheckCursorSpeedPerToken // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd7b0
	float GetSkillCheckBonusPercentPerTokenAtLevel(); // Function TheK29.S33P03.GetSkillCheckBonusPercentPerTokenAtLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd780
};

