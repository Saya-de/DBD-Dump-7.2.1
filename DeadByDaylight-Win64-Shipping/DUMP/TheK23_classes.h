// Class TheK23.ActivateSuperMode
// Size: 0x6b0 (Inherited: 0x630)
struct UActivateSuperMode : UInteractionDefinition {
	char pad_630[0x8]; // 0x630(0x08)
	struct FAnimationMontageDescriptor _activationMontage; // 0x638(0x20)
	struct FDBDTunableRowHandle _activationDuration; // 0x658(0x28)
	struct FDBDTunableRowHandle _confirmationChargeDuration; // 0x680(0x28)
	char pad_6A8[0x8]; // 0x6a8(0x08)
};

// Class TheK23.FastTrack
// Size: 0x3e0 (Inherited: 0x3c8)
struct UFastTrack : UPerk {
	int32_t _tokensToAdd[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0xc]; // 0x3d4(0x0c)

	void Cosmetic_OnTokenCountDecreased(); // Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK23.FlurryComboScoreComponent
// Size: 0x268 (Inherited: 0xb8)
struct UFlurryComboScoreComponent : UActorComponent {
	char pad_B8[0x1c]; // 0xb8(0x1c)
	float _comboScore; // 0xd4(0x04)
	struct FDBDTunableRowHandle _timeForCombo; // 0xd8(0x28)
	struct FDBDTunableRowHandle _baseKnifeComboScore; // 0x100(0x28)
	struct FDBDTunableRowHandle _maximumKnifeMultiplier; // 0x128(0x28)
	struct FDBDTunableRowHandle _fillLacerationComboScore; // 0x150(0x28)
	struct FDBDTunableRowHandle _longRangeThreshold; // 0x178(0x28)
	struct FDBDTunableRowHandle _closeRangeScoreMultiplier; // 0x1a0(0x28)
	struct FDBDTunableRowHandle _longRangeScoreMultiplier; // 0x1c8(0x28)
	struct TArray<float> _thresholds; // 0x1f0(0x10)
	struct TArray<float> _thresholdsScoreForAudio; // 0x200(0x10)
	struct TArray<struct FGameplayTag> _comboScoreEvents; // 0x210(0x10)
	char pad_220[0x48]; // 0x220(0x48)

	void OnRep_ComboScore(); // Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore // (Final|Native|Private|Const) // @ game+0x576f1a0
};

// Class TheK23.FlurryOfKnives
// Size: 0xc30 (Inherited: 0x760)
struct UFlurryOfKnives : UChargeableInteractionDefinition {
	char pad_760[0x40]; // 0x760(0x40)
	int32_t _replicatedNumOfStacksReduction; // 0x7a0(0x04)
	bool _isSuperModeThrow; // 0x7a4(0x01)
	char pad_7A5[0x4b]; // 0x7a5(0x4b)
	struct UStatusEffect* _selfSlowEffect; // 0x7f0(0x08)
	struct FDBDTunableRowHandle _flurryOfKnivesEnterDuration; // 0x7f8(0x28)
	struct FDBDTunableRowHandle _flurryOfKnivesExitDuration; // 0x820(0x28)
	struct FDBDTunableRowHandle _chargeTime; // 0x848(0x28)
	struct FTunableStat _baseTimeBetweenThrows; // 0x870(0x80)
	struct UCurveFloat* _throwRateModifierByKnivesThrown; // 0x8f0(0x08)
	struct FDBDTunableRowHandle _superModeThrowRateModifier; // 0x8f8(0x28)
	struct FDBDTunableRowHandle _knivesLaunchSpeed; // 0x920(0x28)
	struct FDBDTunableRowHandle _convergencePointDistance; // 0x948(0x28)
	struct UCurveFloat* _coneOfFireAngleCurve; // 0x970(0x08)
	struct FDBDTunableRowHandle _consecutiveKnivesStacksDecayTime; // 0x978(0x28)
	struct FDBDTunableRowHandle _maxConsecutiveKnivesStacks; // 0x9a0(0x28)
	struct UCurveFloat* _movementSpeedByKnivesThrown; // 0x9c8(0x08)
	struct FDBDTunableRowHandle _superModeBaseMovementSpeed; // 0x9d0(0x28)
	struct FDBDTunableRowHandle _baseWalkSpeed; // 0x9f8(0x28)
	struct UCurveFloat* _recoilIntensityByKnivesThrown; // 0xa20(0x08)
	struct FDBDTunableRowHandle _recoilDuration; // 0xa28(0x28)
	struct FDBDTunableRowHandle _recoilAngle; // 0xa50(0x28)
	struct FDBDTunableRowHandle _maximumRecoilAngleVariation; // 0xa78(0x28)
	struct FDBDTunableRowHandle _rotationSpeedAdjustmentTime; // 0xaa0(0x28)
	struct FDBDTunableRowHandle _aimingStanceRotationYawScaleAdjustment; // 0xac8(0x28)
	struct FDBDTunableRowHandle _aimingStanceRotationPitchScaleAdjustment; // 0xaf0(0x28)
	struct FDBDTunableRowHandle _throwingRotationYawScaleAdjustment; // 0xb18(0x28)
	struct FDBDTunableRowHandle _throwingRotationPitchScaleAdjustment; // 0xb40(0x28)
	struct FDBDTunableRowHandle _aimingStanceGamepadRotationYawScaleAdjustment; // 0xb68(0x28)
	struct FDBDTunableRowHandle _aimingStanceGamepadRotationPitchScaleAdjustment; // 0xb90(0x28)
	struct FDBDTunableRowHandle _throwingGamepadRotationYawScaleAdjustment; // 0xbb8(0x28)
	struct FDBDTunableRowHandle _throwingGamepadRotationPitchScaleAdjustment; // 0xbe0(0x28)
	struct UCurveFloat* _aimingGamepadPitchCurve; // 0xc08(0x08)
	struct UCurveFloat* _aimingGamepadYawCurve; // 0xc10(0x08)
	struct UCurveFloat* _throwingGamepadPitchCurve; // 0xc18(0x08)
	struct UCurveFloat* _throwingGamepadYawCurve; // 0xc20(0x08)
	char pad_C28[0x8]; // 0xc28(0x08)

	void Server_StartThrowing(); // Function TheK23.FlurryOfKnives.Server_StartThrowing // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x576f6b0
	void Server_DecreaseConsecutiveKnivesStacks(); // Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x576f660
	void OnRep_NumOfStacksReduction(); // Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction // (Final|Native|Private) // @ game+0x576f640
	void Multicast_StartThrowing(); // Function TheK23.FlurryOfKnives.Multicast_StartThrowing // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56c4ec0
};

// Class TheK23.HexCrowdControl
// Size: 0x458 (Inherited: 0x448)
struct UHexCrowdControl : UHexPerk {
	float _windowVaultBlockDuration[0x3]; // 0x448(0x0c)
	char pad_454[0x4]; // 0x454(0x04)
};

// Class TheK23.K23PowerProgressPresentationComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UK23PowerProgressPresentationComponent : UPresentationItemProgressComponent {
};

// Class TheK23.KnifeProjectile
// Size: 0x428 (Inherited: 0x338)
struct AKnifeProjectile : AKillerProjectile {
	struct UPrimitiveComponent* _worldCollider; // 0x338(0x08)
	struct UPrimitiveComponent* _camperDetector; // 0x340(0x08)
	char pad_348[0x10]; // 0x348(0x10)
	struct TSet<struct ADBDPlayer*> _playersAffectedThisThrow; // 0x358(0x50)
	struct UPoolableProjectileComponent* _poolableActorComponent; // 0x3a8(0x08)
	struct FDBDTunableRowHandle _knifeMaxRange; // 0x3b0(0x28)
	struct FDBDTunableRowHandle _addonExplosionRadius; // 0x3d8(0x28)
	struct FDBDTunableRowHandle _numberOfAddonBounces; // 0x400(0x28)

	bool WasLaunchedDuringSuperMode(); // Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57701f0
	bool ShouldPlayRicochetSound(); // Function TheK23.KnifeProjectile.ShouldPlayRicochetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57701c0
	void SetKnifeAcquired(bool acquired); // Function TheK23.KnifeProjectile.SetKnifeAcquired // (Final|Native|Protected|BlueprintCallable) // @ game+0x5770130
	void OnWorldColliderHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function TheK23.KnifeProjectile.OnWorldColliderHit // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x576ff50
	void OnProjectileBounce(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function TheK23.KnifeProjectile.OnProjectileBounce // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x576fe30
	bool KnifeCanPierceCampers(); // Function TheK23.KnifeProjectile.KnifeCanPierceCampers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x576fe00
	float GetAddonExplosionRadius(); // Function TheK23.KnifeProjectile.GetAddonExplosionRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x576fdd0
	void BP_SetKnifeActive(bool Active); // Function TheK23.KnifeProjectile.BP_SetKnifeActive // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BP_OnLaunchCosmetic(struct FLaunchInfo LaunchInfo, bool hasImpactOnLaunch); // Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BP_CosmeticOnAddonExplosion(struct FVector& Location, struct FVector& Normal); // Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK23.KnifeRack
// Size: 0x248 (Inherited: 0x248)
struct AKnifeRack : ABaseLockerItem {

	void OnReloadMontageStarted(float actionSpeedMultiplier, struct ADBDPlayer* Player); // Function TheK23.KnifeRack.OnReloadMontageStarted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnReloadEnded(struct ADBDPlayer* Player); // Function TheK23.KnifeRack.OnReloadEnded // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK23.KnivesLauncher
// Size: 0x288 (Inherited: 0x180)
struct UKnivesLauncher : UKillerProjectileLauncher {
	struct FDBDTunableRowHandle _knifeSpawnOffset; // 0x180(0x28)
	struct FDBDTunableRowHandle _knifeSpawnForwardOffset; // 0x1a8(0x28)
	struct FDBDTunableRowHandle _launchSpeed; // 0x1d0(0x28)
	struct FTunableStat _maxAmmoTunable; // 0x1f8(0x80)
	char pad_278[0x8]; // 0x278(0x08)
	bool _isInSuperModeThrow; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)

	struct AThrowingKnives* GetPower(); // Function TheK23.KnivesLauncher.GetPower // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5770870
	int32_t GetLocallyPredictedAmmo(); // Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5770840
};

// Class TheK23.KnivesProvider
// Size: 0x120 (Inherited: 0x118)
struct UKnivesProvider : UAuthoritativeActorPoolComponent {
	char pad_118[0x8]; // 0x118(0x08)
};

// Class TheK23.LacerationComponent
// Size: 0x498 (Inherited: 0xb8)
struct ULacerationComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)
	float _laceration; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)
	struct UStatusEffect* _onHitSpeedBoost; // 0x100(0x08)
	char pad_108[0x28]; // 0x108(0x28)
	struct FTunableStat _maxLaceration; // 0x130(0x80)
	struct FDBDTunableRowHandle _lacerationExplosionDamage; // 0x1b0(0x28)
	struct FTunableStat _lacerationRegressionPerSecond; // 0x1d8(0x80)
	struct FTunableStat _lacerationRegressionPerSecondWhileRunning; // 0x258(0x80)
	struct FDBDTunableRowHandle _speedBoostIntensity; // 0x2d8(0x28)
	struct FDBDTunableRowHandle _speedBoostDuration; // 0x300(0x28)
	struct FDBDTunableRowHandle _stopTickingRegressionWhileInjured; // 0x328(0x28)
	struct FDBDTunableRowHandle _stopTickingRegressionWhileInChase; // 0x350(0x28)
	struct FDBDTunableRowHandle _stopTickingRegressionWithinTerrorRadius; // 0x378(0x28)
	struct FTunableStat _timeBeforeLacerationDecayStarts; // 0x3a0(0x80)
	struct FDBDTunableRowHandle _regressionBufferTimerAlwaysTicks; // 0x420(0x28)
	struct FDBDTunableRowHandle _lacerationToRemoveOnBasicAttack; // 0x448(0x28)
	struct FDBDTunableRowHandle _thresholdForGraceTimerScoreEvent; // 0x470(0x28)

	void OnRepLaceration(float oldLaceration); // Function TheK23.LacerationComponent.OnRepLaceration // (Final|Native|Private) // @ game+0x5771170
	void Multicast_KnifeHit(float newLaceration, bool causedDamage, bool CausedKO, struct FVector impactLocation, struct FVector ImpactNormal); // Function TheK23.LacerationComponent.Multicast_KnifeHit // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x5770fa0
	void Cosmetic_OnLocallyObservedChanged(bool IsLocallyObserved, float lacerationPercent, bool isDangerous); // Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLacerationChanged(float lacerationPercent, bool isDangerous); // Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool CausedKO, struct FVector& ImpactNormal); // Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK23.BaseLacerationLevelCondition
// Size: 0xe8 (Inherited: 0xe8)
struct UBaseLacerationLevelCondition : UEventDrivenModifierCondition {
};

// Class TheK23.LacerationLevelCondition
// Size: 0xf0 (Inherited: 0xe8)
struct ULacerationLevelCondition : UBaseLacerationLevelCondition {
	float _lacerationLevelRequired; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class TheK23.LacerationAlmostFullCondition
// Size: 0xf0 (Inherited: 0xe8)
struct ULacerationAlmostFullCondition : UBaseLacerationLevelCondition {
	float _missingLacerationThreshold; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class TheK23.NoWayOut
// Size: 0x3f8 (Inherited: 0x3c8)
struct UNoWayOut : UPerk {
	float _exitGatePanelBlockBaseDuration[0x3]; // 0x3c8(0x0c)
	float _exitGatePanelBlockDurationPerToken[0x3]; // 0x3d4(0x0c)
	struct TArray<struct ACamperPlayer*> _hookedSurvivors; // 0x3e0(0x10)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void Multicast_TriggerLoudNoise(struct ADBDPlayer* Instigator, struct AEscapeDoor* EscapeDoor); // Function TheK23.NoWayOut.Multicast_TriggerLoudNoise // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ce2860
	float GetExitGatePanelBlockDurationPerTokenAtLevel(); // Function TheK23.NoWayOut.GetExitGatePanelBlockDurationPerTokenAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetExitGatePanelBlockBaseDurationAtLevel(); // Function TheK23.NoWayOut.GetExitGatePanelBlockBaseDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK23.ReloadKnives
// Size: 0x670 (Inherited: 0x660)
struct UReloadKnives : UBaseLockerInteraction {
	char pad_660[0x10]; // 0x660(0x10)
};

// Class TheK23.SelfPreservation
// Size: 0x3e0 (Inherited: 0x3c8)
struct USelfPreservation : UPerk {
	float _hitDistanceToTriggerPerkEffect[0x3]; // 0x3c8(0x0c)
	float _selfPreservationEffectDuration[0x3]; // 0x3d4(0x0c)

	float GetSelfPreservationEffectDuration(); // Function TheK23.SelfPreservation.GetSelfPreservationEffectDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetHitDistanceToTriggerPerkEffect(); // Function TheK23.SelfPreservation.GetHitDistanceToTriggerPerkEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK23.SmashHit
// Size: 0x3f8 (Inherited: 0x3c8)
struct USmashHit : UPerk {
	float _exhaustedTime[0x3]; // 0x3c8(0x0c)
	float _hasteTime; // 0x3d4(0x04)
	float _hasteValue; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UStatusEffect* _exhaustedEffect; // 0x3e0(0x08)
	struct UStatusEffect* _hasteEffect; // 0x3e8(0x08)
	struct UEnum* stunTypeEnum; // 0x3f0(0x08)
};

// Class TheK23.Starstruck
// Size: 0x4e8 (Inherited: 0x3c8)
struct UStarstruck : UPerk {
	float _exposedEffectDuration[0x3]; // 0x3c8(0x0c)
	float _perkCooldownDuration[0x3]; // 0x3d4(0x0c)
	struct TMap<struct TWeakObjectPtr<struct ACamperPlayer>, struct TWeakObjectPtr<struct UStatusEffect>> _camperExposedEffects; // 0x3e0(0x50)
	char pad_430[0xb8]; // 0x430(0xb8)

	float GetPerkCooldownDurationAtLevel(); // Function TheK23.Starstruck.GetPerkCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetExposedEffectDurationAtLevel(); // Function TheK23.Starstruck.GetExposedEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK23.SuperModeDeactivation
// Size: 0x660 (Inherited: 0x630)
struct USuperModeDeactivation : UInteractionDefinition {
	struct FDBDTunableRowHandle _deactivationDuration; // 0x630(0x28)
	char pad_658[0x8]; // 0x658(0x08)
};

// Class TheK23.ThrowingKnives
// Size: 0x570 (Inherited: 0x4c8)
struct AThrowingKnives : ACollectable {
	char pad_4C8[0x40]; // 0x4c8(0x40)
	struct UFlurryComboScoreComponent* _flurryScoreComponent; // 0x508(0x08)
	struct UTricksterSuperModeComponent* _superModeComponent; // 0x510(0x08)
	struct UK23PowerProgressPresentationComponent* _superModeChargePresentationComponent; // 0x518(0x08)
	struct UPowerChargeComponent* _superModeChargeComponent; // 0x520(0x08)
	struct UKnivesProvider* _knivesProvider; // 0x528(0x08)
	struct UKnivesLauncher* _knivesLauncher; // 0x530(0x08)
	struct ULacerationComponent* _lacerationComponentClass; // 0x538(0x08)
	struct UReloadKnives* _reloadInteractionClass; // 0x540(0x08)
	float _minimumTimeBetweenBroadcast; // 0x548(0x04)
	char pad_54C[0x24]; // 0x54c(0x24)

	void OnItemUsedStateChanged(bool Pressed); // Function TheK23.ThrowingKnives.OnItemUsedStateChanged // (Final|Native|Private) // @ game+0x57725b0
	void Multicast_OnUsePowerWhenOutOfAmmo(); // Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo // (Net|Native|Event|NetMulticast|Public) // @ game+0x5772590
	void Multicast_OnUsePowerWhenInCooldown(); // Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown // (Net|Native|Event|NetMulticast|Public) // @ game+0x57584d0
	struct ASlasherPlayer* GetSlasher(); // Function TheK23.ThrowingKnives.GetSlasher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5772560
	struct UKnivesLauncher* GetLauncher(); // Function TheK23.ThrowingKnives.GetLauncher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5772530
	void Cosmetic_OnUsePowerWhenOutOfAmmo(); // Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnUsePowerWhenInCooldown(); // Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLaunch(); // Function TheK23.ThrowingKnives.Cosmetic_OnLaunch // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio); // Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnComboFinished(bool isSRankCombo); // Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_SpawnReloadInteractionOnLockers(); // Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers // (Final|Native|Public) // @ game+0x5772510
};

// Class TheK23.ThrowingKnivesHitSubAnimInstance
// Size: 0x590 (Inherited: 0x550)
struct UThrowingKnivesHitSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _hitByKnifeTrigger; // 0x550(0x01)
	bool _knifeHitCausedKOTrigger; // 0x551(0x01)
	bool _knifeHitCausedDamageTrigger; // 0x552(0x01)
	bool _useAlternateHitReactionState; // 0x553(0x01)
	float _knifeHitStateHitAngle; // 0x554(0x04)
	float _alternateKnifeHitStateHitAngle; // 0x558(0x04)
	bool _isCrawling; // 0x55c(0x01)
	bool _hitByKnifeTriggerEventDriven; // 0x55d(0x01)
	bool _knifeHitCausedDamageTriggerEventDriven; // 0x55e(0x01)
	bool _knifeHitCausedKOTriggerEventDriven; // 0x55f(0x01)
	char pad_560[0x30]; // 0x560(0x30)
};

// Class TheK23.TricksterAnimInstance
// Size: 0x690 (Inherited: 0x610)
struct UTricksterAnimInstance : UKillerAnimInstance {
	bool _isAiming; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	float _isThrowInputPressed; // 0x614(0x04)
	bool _isThrowingWithLeftArm; // 0x618(0x01)
	bool _isThrowingWithRightArm; // 0x619(0x01)
	char pad_61A[0x2]; // 0x61a(0x02)
	float _throwPlayRate; // 0x61c(0x04)
	float _baseThrowDuration; // 0x620(0x04)
	int32_t _consecutiveKnivesThrownStacks; // 0x624(0x04)
	float _timeSinceLastKnifeLaunched; // 0x628(0x04)
	int32_t _currentAmmoCount; // 0x62c(0x04)
	bool _isInSuperMode; // 0x630(0x01)
	bool _isInActivation; // 0x631(0x01)
	char pad_632[0x2]; // 0x632(0x02)
	float _activationDuration; // 0x634(0x04)
	bool _isInDeactivation; // 0x638(0x01)
	char pad_639[0x3]; // 0x639(0x03)
	float _deactivationDuration; // 0x63c(0x04)
	char pad_640[0x40]; // 0x640(0x40)
	struct AThrowingKnives* _throwingKnives; // 0x680(0x08)
	char pad_688[0x8]; // 0x688(0x08)
};

// Class TheK23.TricksterChainedThrowsAddon
// Size: 0x2d0 (Inherited: 0x2b8)
struct UTricksterChainedThrowsAddon : UItemAddon {
	char pad_2B8[0x4]; // 0x2b8(0x04)
	bool _resetOnEnteringFlurryInteraction; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	float _lacerationPenaltyRangeThreshold; // 0x2c0(0x04)
	float _closeRangeLacerationPenalty; // 0x2c4(0x04)
	float _maximumMultiplier; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheK23.TricksterCharacterVFXInterface
// Size: 0x30 (Inherited: 0x30)
struct UTricksterCharacterVFXInterface : UInterface {

	void ShowWeapon(); // Function TheK23.TricksterCharacterVFXInterface.ShowWeapon // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetSuperModeActive(bool Active); // Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetKnivesVisibility(bool leftKnife, bool rightKnife); // Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetIsSuperModeReady(bool isSuperModeReady); // Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetIsInCooldown(bool isInCooldown); // Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideWeapon(); // Function TheK23.TricksterCharacterVFXInterface.HideWeapon // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK23.TricksterSuperModeComponent
// Size: 0x288 (Inherited: 0xb8)
struct UTricksterSuperModeComponent : UActorComponent {
	bool _isInSuperMode; // 0xb8(0x01)
	bool _isSuperModeReady; // 0xb9(0x01)
	bool _isInCooldown; // 0xba(0x01)
	char pad_BB[0xd]; // 0xbb(0x0d)
	struct FDBDTunableRowHandle _chargesToAddOnKnifeHit; // 0xc8(0x28)
	struct FDBDTunableRowHandle _superModeMaxCharge; // 0xf0(0x28)
	struct FDBDTunableRowHandle _superModeReadyDepletionPerSecond; // 0x118(0x28)
	struct FTunableStat _superModeActiveDuration; // 0x140(0x80)
	char pad_1C0[0x60]; // 0x1c0(0x60)
	struct FDBDTunableRowHandle _superModeCooldown; // 0x220(0x28)
	struct FDBDTunableRowHandle _shouldDisableFlurryDuringCooldown; // 0x248(0x28)
	char pad_270[0x18]; // 0x270(0x18)

	void OnRepIsSuperModeReady(); // Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady // (Final|Native|Private) // @ game+0x5773420
	void OnRepIsInSuperMode(); // Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode // (Final|Native|Private) // @ game+0x5773400
	void OnRepIsInCooldown(); // Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown // (Final|Native|Private) // @ game+0x57733e0
};

// Class TheK23.TriggerTimerOnLacerationAlmostFullEffect
// Size: 0x360 (Inherited: 0x350)
struct UTriggerTimerOnLacerationAlmostFullEffect : UStatusEffect {
	struct ULacerationComponent* _lacerationComponent; // 0x350(0x08)
	float _duration; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
};

