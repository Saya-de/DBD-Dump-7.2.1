// Class TheClown.ActiveGasCloudTrackerComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UActiveGasCloudTrackerComponent : UActorComponent {
	struct TArray<struct ABaseGasCloudProjectile*> _activeToxinClouds; // 0xb8(0x10)
	struct TArray<struct ABaseGasCloudProjectile*> _activeAntidoteClouds; // 0xc8(0x10)
};

// Class TheClown.AISkill_InteractionTarget_ThrowAntidote
// Size: 0x2c8 (Inherited: 0x2b8)
struct UAISkill_InteractionTarget_ThrowAntidote : UAISkill_InteractionTarget_Throw {
	float _minPathLengthForThrow; // 0x2b8(0x04)
	float _minThrowDistance; // 0x2bc(0x04)
	float _cooldownTime; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)

	void OnPathUpdated(); // Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated // (Final|Native|Protected) // @ game+0x56ae200
};

// Class TheClown.AISkill_InteractionTarget_ThrowToxin
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAISkill_InteractionTarget_ThrowToxin : UAISkill_InteractionTarget_Throw {
};

// Class TheClown.AISkill_Interaction_ReloadClown
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_ReloadClown : UAISkill_Interaction {
};

// Class TheClown.AISkill_Interaction_SwapToAntidote
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_SwapToAntidote : UAISkill_Interaction {
};

// Class TheClown.AISkill_Interaction_SwapToToxin
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_SwapToToxin : UAISkill_Interaction {
};

// Class TheClown.BaseGasCloudProjectile
// Size: 0x4e0 (Inherited: 0x2b8)
struct ABaseGasCloudProjectile : APhysicsBasedProjectile {
	enum class EBombType _gasType; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UPoolableProjectileComponent* _poolableProjectile; // 0x2c0(0x08)
	struct FDBDTunableRowHandle _gasCloudDuration; // 0x2c8(0x28)
	struct FDBDTunableRowHandle _gasCloudGravityScale; // 0x2f0(0x28)
	struct FDBDTunableRowHandle _gasCloudBounciness; // 0x318(0x28)
	struct FDBDTunableRowHandle _gasCloudFriction; // 0x340(0x28)
	struct FDBDTunableRowHandle _dissipateGasCloudTime; // 0x368(0x28)
	struct FDBDTunableRowHandle _gasCloudMinimumLifetime; // 0x390(0x28)
	struct FDBDTunableRowHandle _gasCloudSimpleCollisionRadius; // 0x3b8(0x28)
	struct FDBDTunableRowHandle _gasCloudComplexCollisionRadius; // 0x3e0(0x28)
	struct FDBDTunableRowHandle _gasCloudSurvivorDetectionRadius; // 0x408(0x28)
	struct FDBDTunableRowHandle _gasCloudDetectionDelay; // 0x430(0x28)
	struct FDBDTunableRowHandle _gasCloudCosmeticFadeDuration; // 0x458(0x28)
	float _overlappingTime; // 0x480(0x04)
	bool _dissipating; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct TArray<struct ACamperPlayer*> _overlappingSurvivors; // 0x488(0x10)
	struct UParticleSystemComponent* _gasParticleSystem; // 0x498(0x08)
	struct USphereComponent* _simpleCollider; // 0x4a0(0x08)
	struct USphereComponent* _complexCollider; // 0x4a8(0x08)
	struct USpherePlayerOverlapComponent* _survivorDetector; // 0x4b0(0x08)
	struct UActiveGasCloudTrackerComponent* _activeGasCloudTracker; // 0x4b8(0x08)
	struct FGameplayTag _cloudSizeModifierTag; // 0x4c0(0x0c)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	float _cumulativeLifetime; // 0x4d0(0x04)
	char pad_4D4[0xc]; // 0x4d4(0x0c)

	void SetIsDissipating(bool IsDissipating); // Function TheClown.BaseGasCloudProjectile.SetIsDissipating // (Final|Native|Public|BlueprintCallable) // @ game+0x56af3f0
	void SetIgnoredActors(); // Function TheClown.BaseGasCloudProjectile.SetIgnoredActors // (Final|Native|Private) // @ game+0x56af3d0
	void SetGasAudioActive(bool activated); // Function TheClown.BaseGasCloudProjectile.SetGasAudioActive // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnOverlapEnd(struct UPrimitiveComponent* hitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex); // Function TheClown.BaseGasCloudProjectile.OnOverlapEnd // (Final|Native|Public) // @ game+0x56af270
	void OnOverlapBegin(struct UPrimitiveComponent* hitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheClown.BaseGasCloudProjectile.OnOverlapBegin // (Final|Native|Public|HasOutParms) // @ game+0x56af050
	void OnDelayedActivationStart(float Delay); // Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnAcquiredChanged(bool acquired); // Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged // (Final|Native|Private) // @ game+0x56aefc0
	void Multicast_DissipateGasCloud(); // Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x5560fa0
	bool IsSurvivorDetectionEnabled(); // Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x56aef90
	bool IsDissipating(); // Function TheClown.BaseGasCloudProjectile.IsDissipating // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x56aef70
	enum class EBombType GetGasType(); // Function TheClown.BaseGasCloudProjectile.GetGasType // (Final|Native|Public|BlueprintCallable) // @ game+0x56aef50
	void DissipateGasCloud(); // Function TheClown.BaseGasCloudProjectile.DissipateGasCloud // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5570170
	void Authority_SetCumulativeLifetime(float value); // Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x56aeed0
	float Authority_GetCumulativeLifetime(); // Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aeea0
	void ActivateCosmetic_BP(); // Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheClown.AntidoteCloudProjectile
// Size: 0x4e0 (Inherited: 0x4e0)
struct AAntidoteCloudProjectile : ABaseGasCloudProjectile {
};

// Class TheClown.BoilOverPerk
// Size: 0x480 (Inherited: 0x3c8)
struct UBoilOverPerk : UPerk {
	struct TArray<struct FStatusEffectSpawnData> _effectsToSpawn; // 0x3c8(0x10)
	struct FPlayerStatusEffectSpawnerHelper _spawnerHelper; // 0x3d8(0x88)
	float _additionnalWigglingProgressWhenFalling[0x3]; // 0x460(0x0c)
	float _greatHeightsValue; // 0x46c(0x04)
	char pad_470[0x10]; // 0x470(0x10)

	float GetGreatHeightsValue(); // Function TheClown.BoilOverPerk.GetGreatHeightsValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af940
	float GetAdditionnalWigglingProgressAtLevel(); // Function TheClown.BoilOverPerk.GetAdditionnalWigglingProgressAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af910
	void Authority_OnWiggleEnd(); // Function TheClown.BoilOverPerk.Authority_OnWiggleEnd // (Final|Native|Private) // @ game+0x56af8f0
	void Authority_OnPlayerPickedUpEnd(struct ADBDPlayer* picker); // Function TheClown.BoilOverPerk.Authority_OnPlayerPickedUpEnd // (Final|Native|Private) // @ game+0x56af860
};

// Class TheClown.BombLauncher
// Size: 0x198 (Inherited: 0x180)
struct UBombLauncher : UKillerProjectileLauncher {
	struct UCurveFloat* _speedCurve; // 0x180(0x08)
	struct UCurveFloat* _pitchCurve; // 0x188(0x08)
	enum class EBombType _currentBombType; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)

	void SetProjectileSpeedCurve(struct UCurveFloat* newProjectileSpeedCurve); // Function TheClown.BombLauncher.SetProjectileSpeedCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x56affc0
	void SetProjectilePitchCurve(struct UCurveFloat* newProjectilePitchCurve); // Function TheClown.BombLauncher.SetProjectilePitchCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x56aff30
	void SetPercentThrowStrength(float throwStrength); // Function TheClown.BombLauncher.SetPercentThrowStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x56afeb0
	void Server_SwitchBombType(); // Function TheClown.BombLauncher.Server_SwitchBombType // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x56afe60
	void LocalLaunch(float percentThrowStrength); // Function TheClown.BombLauncher.LocalLaunch // (Final|Native|Public|BlueprintCallable) // @ game+0x56afde0
	void Local_SwitchBombType(); // Function TheClown.BombLauncher.Local_SwitchBombType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool IsBombFullyCharged(); // Function TheClown.BombLauncher.IsBombFullyCharged // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56afdb0
	float GetPercentThrowStrenght(); // Function TheClown.BombLauncher.GetPercentThrowStrenght // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56afd90
	enum class EBombType GetCurrentBombType(); // Function TheClown.BombLauncher.GetCurrentBombType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56afd60
};

// Class TheClown.ClownFingersAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UClownFingersAnimInstance : UAnimInstance {
	bool _isObservedCharacterSlasher; // 0x2c0(0x01)
	char pad_2C1[0xf]; // 0x2c1(0x0f)
};

// Class TheClown.DanceWithMePerk
// Size: 0x3d8 (Inherited: 0x3c8)
struct UDanceWithMePerk : UPerk {
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void Authority_OnPerkActivate(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheClown.DanceWithMePerk.Authority_OnPerkActivate // (Final|Native|Private|HasOutParms) // @ game+0x56b03a0
};

// Class TheClown.GasDizzyCosmeticEffect
// Size: 0x250 (Inherited: 0x230)
struct AGasDizzyCosmeticEffect : AActor {
	struct UPostProcessComponent* _dizzyPostProcess; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)

	void SetWantsDizzyEffectActive(bool IsActive); // Function TheClown.GasDizzyCosmeticEffect.SetWantsDizzyEffectActive // (Final|Native|Public|BlueprintCallable) // @ game+0x56b06b0
	void Cosmetic_SetDizzyEffectActive(bool IsActive); // Function TheClown.GasDizzyCosmeticEffect.Cosmetic_SetDizzyEffectActive // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheClown.GassedStatusEffect
// Size: 0x408 (Inherited: 0x350)
struct UGassedStatusEffect : UStatusEffect {
	bool _isInCloud; // 0x350(0x01)
	bool _isInAntidoteCloud; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct TSet<struct ABaseGasCloudProjectile*> _overlappingClouds; // 0x358(0x50)
	struct TSet<struct ABaseGasCloudProjectile*> _overlappingAntidoteClouds; // 0x3a8(0x50)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	uint16_t _totalTimesEnteringToxicClouds; // 0x400(0x02)
	char pad_402[0x6]; // 0x402(0x06)

	void UpdateAntidoteEffectVFX(float durationRemaining); // Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetRemainingDuration(float value); // Function TheClown.GassedStatusEffect.SetRemainingDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x56b1530
	void SetRemainingAntidoteDuration(float value); // Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x56b14b0
	void OnToxinEffectEnd(float durationSkipped); // Function TheClown.GassedStatusEffect.OnToxinEffectEnd // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnToxinEffectBegin(float effectDuration); // Function TheClown.GassedStatusEffect.OnToxinEffectBegin // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnToxinCured(); // Function TheClown.GassedStatusEffect.OnToxinCured // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_TotalTimesEnteringToxicClouds(); // Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds // (Final|Native|Private) // @ game+0x56b1490
	void OnRep_IsInAntidoteCloud(); // Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud // (Final|Native|Private) // @ game+0x56b1470
	void OnDirectBottleHit(enum class EBombType bottleType); // Function TheClown.GassedStatusEffect.OnDirectBottleHit // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnAntidoteEffectEnd(float durationSkipped); // Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnAntidoteEffectBegin(float effectDuration); // Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsInCloud(); // Function TheClown.GassedStatusEffect.IsInCloud // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b1440
	bool IsInAntidoteCloud(); // Function TheClown.GassedStatusEffect.IsInAntidoteCloud // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b1410
	float GetRemainingDuration(); // Function TheClown.GassedStatusEffect.GetRemainingDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b13e0
	float GetRemainingAntidoteDuration(); // Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4310
	float GetCloudEffectDuration(); // Function TheClown.GassedStatusEffect.GetCloudEffectDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b13b0
	float GetAntidoteCloudEffectDuration(); // Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b1380
	void Authority_SetIsInCloud(bool value); // Function TheClown.GassedStatusEffect.Authority_SetIsInCloud // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x56b12f0
	void Authority_SetIsInAntidoteCloud(bool value); // Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x56b1260
	void Authority_RemoveOverlappingCloud(struct ABaseGasCloudProjectile* cloud); // Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x56b11d0
	void Authority_AddOverlappingCloud(struct ABaseGasCloudProjectile* cloud); // Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x56b1140
};

// Class TheClown.GassedSurvivorSubAnimInstance
// Size: 0x560 (Inherited: 0x550)
struct UGassedSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isGassed; // 0x550(0x01)
	bool _isIdle; // 0x551(0x01)
	bool _isCrouched; // 0x552(0x01)
	bool _isCrawling; // 0x553(0x01)
	char pad_554[0xc]; // 0x554(0x0c)
};

// Class TheClown.PopGoesTheWeasel
// Size: 0x3d8 (Inherited: 0x3c8)
struct UPopGoesTheWeasel : UPerk {
	float _activePerkDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)

	float GetActivePerkDurationAtLevel(); // Function TheClown.PopGoesTheWeasel.GetActivePerkDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheClown.SurvivorGasCloudEffect
// Size: 0x450 (Inherited: 0x408)
struct USurvivorGasCloudEffect : UGassedStatusEffect {
	struct AGasDizzyCosmeticEffect* _dizzyCosmeticEffect; // 0x408(0x08)
	struct AGasDizzyCosmeticEffect* _gasDizzyCosmeticEffectClass; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct FTransform _dizzyEffectRelativeTransform; // 0x420(0x30)
};

// Class TheClown.TheClownUtilities
// Size: 0x30 (Inherited: 0x30)
struct UTheClownUtilities : UBlueprintFunctionLibrary {

	bool IsGassed(struct ADBDPlayer* Player); // Function TheClown.TheClownUtilities.IsGassed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b20a0
	bool IsAffectedByAntidote(struct ADBDPlayer* Player); // Function TheClown.TheClownUtilities.IsAffectedByAntidote // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b2010
	struct UGassedStatusEffect* GetGassedStatusEffect(struct ADBDPlayer* Player); // Function TheClown.TheClownUtilities.GetGassedStatusEffect // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b1f80
	struct UActiveGasCloudTrackerComponent* GetActiveGasCloudTrackerComponent(struct UObject* WorldContextObject); // Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b1ef0
	bool CanBeGassed(struct ADBDPlayer* Player); // Function TheClown.TheClownUtilities.CanBeGassed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b1e60
};

