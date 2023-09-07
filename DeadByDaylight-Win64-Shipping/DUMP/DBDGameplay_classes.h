// Class DBDGameplay.ActorPairQueryEvaluatorUtilities
// Size: 0x30 (Inherited: 0x30)
struct UActorPairQueryEvaluatorUtilities : UBlueprintFunctionLibrary {
};

// Class DBDGameplay.AimableComponent
// Size: 0x110 (Inherited: 0xb8)
struct UAimableComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TArray<struct AActor*> _occlusionIgnoredActors; // 0xc0(0x10)
	float _maxAimDistance; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UAimDirectionProvider* _aimDirectionProvider; // 0xd8(0x08)
	bool _useOcclusion; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float _aimPointLerpFactor; // 0xe4(0x04)
	struct TArray<struct UAimPointProcessor*> _preOcclusionAimPointProcessors; // 0xe8(0x10)
	char pad_F8[0x18]; // 0xf8(0x18)

	void SetProcessors(struct TArray<struct UAimPointProcessor*> processors); // Function DBDGameplay.AimableComponent.SetProcessors // (Final|Native|Public|BlueprintCallable) // @ game+0x4d52390
	void SetOcclusionIgnoredActors(struct TArray<struct AActor*>& IgnoredActors); // Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d52250
	void SetMaxAimDistance(float maxAimDistance); // Function DBDGameplay.AimableComponent.SetMaxAimDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x4d520d0
};

// Class DBDGameplay.AimDirectionProvider
// Size: 0x30 (Inherited: 0x30)
struct UAimDirectionProvider : UObject {
};

// Class DBDGameplay.AimPointProcessor
// Size: 0xb8 (Inherited: 0xb8)
struct UAimPointProcessor : UActorComponent {
};

// Class DBDGameplay.AimPointPerlinNoise
// Size: 0xf0 (Inherited: 0xb8)
struct UAimPointPerlinNoise : UAimPointProcessor {
	char pad_B8[0x4]; // 0xb8(0x04)
	float _baseInaccuracyNoisePersistence; // 0xbc(0x04)
	int32_t _baseInaccuracyNoiseOctaveCount; // 0xc0(0x04)
	float _baseInaccuracyNoiseAmplitude; // 0xc4(0x04)
	char pad_C8[0x4]; // 0xc8(0x04)
	float _baseInaccuracyNoiseFrequency; // 0xcc(0x04)
	char pad_D0[0x4]; // 0xd0(0x04)
	float _timeOffset; // 0xd4(0x04)
	char pad_D8[0x18]; // 0xd8(0x18)

	void SetNoiseFrequencyMultiplier(float Multiplier); // Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x4d521d0
	void SetNoiseAmplitudeMultiplier(float Multiplier); // Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x4d52150
	void SetBaseInaccuracyNoisePersistence(float noisePersistence); // Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51cd0
	void SetBaseInaccuracyNoiseOctaveCount(int32_t octaveCount); // Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51c40
	void SetBaseInaccuracyNoiseFrequency(float Frequency); // Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51bc0
	void SetBaseInaccuracyNoiseAmplitude(float Amplitude); // Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51b40
};

// Class DBDGameplay.AISenseConfig_Terror
// Size: 0xb8 (Inherited: 0x50)
struct UAISenseConfig_Terror : UAISenseConfig {
	struct UAISense_Terror* Implementation; // 0x50(0x08)
	float MaxBreathingSoundRange; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<enum class EAITerrorLevel, float> TerrorRanges; // 0x60(0x50)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class DBDGameplay.AISenseEvent_Terror
// Size: 0x58 (Inherited: 0x30)
struct UAISenseEvent_Terror : UAISenseEvent {
	struct FAITerrorEvent Event; // 0x30(0x28)
};

// Class DBDGameplay.AISense_Terror
// Size: 0xf0 (Inherited: 0x90)
struct UAISense_Terror : UAISense {
	struct TArray<struct FAITerrorEvent> _events; // 0x90(0x10)
	char pad_A0[0x50]; // 0xa0(0x50)

	void ReportTerrorEvent(struct UObject* worldContextObj, struct FVector Location, struct AActor* Instigator, struct UTerrorRadiusEmitterComponent* TerrorEmitter); // Function DBDGameplay.AISense_Terror.ReportTerrorEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4d51960
};

// Class DBDGameplay.BlockFeedbackBase
// Size: 0x238 (Inherited: 0x230)
struct ABlockFeedbackBase : AActor {
	char pad_230[0x8]; // 0x230(0x08)
};

// Class DBDGameplay.AudioBlockFeedback
// Size: 0x250 (Inherited: 0x238)
struct AAudioBlockFeedback : ABlockFeedbackBase {
	struct UAkAudioEvent* _akAudioEventBlockStart; // 0x238(0x08)
	struct UAkAudioEvent* _akAudioEventBlockStop; // 0x240(0x08)
	struct UAkComponent* _blockableAudioComponent; // 0x248(0x08)
};

// Class DBDGameplay.AuraOverriderComponent
// Size: 0x108 (Inherited: 0xb8)
struct UAuraOverriderComponent : UActorComponent {
	char pad_B8[0x50]; // 0xb8(0x50)

	void ResetAura(struct AActor* Actor); // Function DBDGameplay.AuraOverriderComponent.ResetAura // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51ab0
	void ForceShowAura(struct AActor* Actor, struct FLinearColor& Color, bool IsAlwaysVisible, float MinimumOutlineDistanceVisible, float MinimumOutlineDistance); // Function DBDGameplay.AuraOverriderComponent.ForceShowAura // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4d51140
};

// Class DBDGameplay.BaseActorAttackableComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UBaseActorAttackableComponent : UAttackableComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FGameplayTagContainer _killerProjectilesThatCanDamageActor; // 0xd0(0x20)

	void HitWithProjectile(struct ABaseProjectile* Projectile); // Function DBDGameplay.BaseActorAttackableComponent.HitWithProjectile // (Native|Public|BlueprintCallable) // @ game+0x4d51430
};

// Class DBDGameplay.BaseCamperCollectable
// Size: 0x510 (Inherited: 0x4c8)
struct ABaseCamperCollectable : ACollectable {
	struct USpherePlayerOverlapComponent* _interactable; // 0x4c8(0x08)
	struct UInteractor* _collectableInteractor; // 0x4d0(0x08)
	struct UDropItemInteraction* _dropInteraction; // 0x4d8(0x08)
	struct UCollectItemInteraction* _collectInteraction; // 0x4e0(0x08)
	struct USphereComponent* _infectablePrimitive; // 0x4e8(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x4f0(0x08)
	struct UMaterialHelper* _materialHelper; // 0x4f8(0x08)
	struct USurvivorCollectableOutlineUpdateStrategy* _survivorCollectableOutlineUpdateStrategy; // 0x500(0x08)
	char pad_508[0x8]; // 0x508(0x08)
};

// Class DBDGameplay.BaseHusk
// Size: 0x260 (Inherited: 0x238)
struct ABaseHusk : ABaseVFX {
	struct USceneComponent* _rootComponent; // 0x238(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _huskMesh; // 0x240(0x08)
	struct UCustomizedSkeletalMesh* _huskCustomizedSkeletalMesh; // 0x248(0x08)
	bool _shouldDeactivateVFX; // 0x250(0x01)
	char pad_251[0xb]; // 0x251(0x0b)
	bool _updateWeaponAccessories; // 0x25c(0x01)
	bool _shouldWeaponBeVisible; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)

	void SetScalarParameterOnAllChildrenMeshes(struct FName ParameterName, float value, struct USkeletalMeshComponent* Mesh); // Function DBDGameplay.BaseHusk.SetScalarParameterOnAllChildrenMeshes // (Final|Native|Protected|BlueprintCallable) // @ game+0x4d52480
	void SetHuskVisibility(bool visible); // Function DBDGameplay.BaseHusk.SetHuskVisibility // (Final|Native|Protected|BlueprintCallable) // @ game+0x4d52040
	void InitializeHusk(struct UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy); // Function DBDGameplay.BaseHusk.InitializeHusk // (Final|Native|Public|BlueprintCallable) // @ game+0x4d514c0
	struct UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh(); // Function DBDGameplay.BaseHusk.GetCopiedCustomizedSkeletalMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d513a0
	void Cosmetic_InitializeSkeletalMesh(struct USkeletalMeshComponent* Mesh); // Function DBDGameplay.BaseHusk.Cosmetic_InitializeSkeletalMesh // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDGameplay.FlashlightableLightingStrategy
// Size: 0x30 (Inherited: 0x30)
struct UFlashlightableLightingStrategy : UObject {
};

// Class DBDGameplay.FlashlightablePointsLightingStrategy
// Size: 0x40 (Inherited: 0x30)
struct UFlashlightablePointsLightingStrategy : UFlashlightableLightingStrategy {
	struct UPointsProvider* _pointsProvider; // 0x30(0x08)
	float _impactPointDistanceError; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DBDGameplay.BlindFlashlightableLightingStrategy
// Size: 0x50 (Inherited: 0x40)
struct UBlindFlashlightableLightingStrategy : UFlashlightablePointsLightingStrategy {
	struct TArray<struct FGameplayTag> _flashlightableIgnoreTags; // 0x40(0x10)
};

// Class DBDGameplay.FlashlightTargetFXComponent
// Size: 0x100 (Inherited: 0xb8)
struct UFlashlightTargetFXComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	bool _modifiesBeamAngle; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UFlashlightableComponent* _flashlightable; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)

	void OnIsLitChanged(bool IsLit); // Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged // (Final|Native|Private) // @ game+0x4d55b10
};

// Class DBDGameplay.BlindFlashlightTargetFXComponent
// Size: 0x130 (Inherited: 0x100)
struct UBlindFlashlightTargetFXComponent : UFlashlightTargetFXComponent {
	char pad_100[0x30]; // 0x100(0x30)
};

// Class DBDGameplay.BlockFeedbackComponent
// Size: 0x140 (Inherited: 0xb8)
struct UBlockFeedbackComponent : UActorComponent {
	struct ULocalPlayerTrackerComponent* _localPlayerTracker; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
	struct TArray<struct ABlockFeedbackBase*> _defaultBlockSelfFeedbacks; // 0xd0(0x10)
	struct TArray<struct ABlockFeedbackBase*> _defaultBlockOtherFeedbacks; // 0xe0(0x10)
	struct TArray<struct ABlockFeedbackBase*> _defaultBlockSelfFeedbackClasses; // 0xf0(0x10)
	struct TArray<struct ABlockFeedbackBase*> _defaultBlockOtherFeedbackClasses; // 0x100(0x10)
	struct TArray<struct FBlockFeedbackStyleOverride> _styleOverrides; // 0x110(0x10)
	char pad_120[0x20]; // 0x120(0x20)

	void OnLocallyObservedChanged(); // Function DBDGameplay.BlockFeedbackComponent.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x4d51670
};

// Class DBDGameplay.FootstepCreatorComponent
// Size: 0x108 (Inherited: 0xb8)
struct UFootstepCreatorComponent : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct UCurveFloat* _fadeCurve; // 0xd8(0x08)
	struct UCurveFloat* _veinsCurve; // 0xe0(0x08)
	struct UFootstepManagerComponent* _footstepManagerComponentClass; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)
	float _secondsUntilFootprintTrigger; // 0xf8(0x04)
	bool _canSpawnFootstepsDefaultValue; // 0xfc(0x01)
	char pad_FD[0xb]; // 0xfd(0x0b)
};

// Class DBDGameplay.CamperFootstepCreatorComponent
// Size: 0x340 (Inherited: 0x108)
struct UCamperFootstepCreatorComponent : UFootstepCreatorComponent {
	struct TArray<struct FGameplayTag> _disallowFootstepsSpawnPerkFlags; // 0x108(0x10)
	struct FStatProperty _footstepIndicatorAngle; // 0x118(0x88)
	struct FStatProperty _footstepIndicatorDecalSize; // 0x1a0(0x88)
	struct FStatProperty _footstepIndicatorDurationAdditive; // 0x228(0x88)
	struct FStatProperty _footstepIndicatorDurationMultiplictive; // 0x2b0(0x88)
	char pad_338[0x8]; // 0x338(0x08)

	void OnLoudNoiseTriggered(struct AActor* originator, struct AActor* instigatingActor, struct FVector Location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise); // Function DBDGameplay.CamperFootstepCreatorComponent.OnLoudNoiseTriggered // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x4d51690
};

// Class DBDGameplay.FootstepPerceptionComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UFootstepPerceptionComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	bool _canSeeFootstepsDefaultValue; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class DBDGameplay.PlayerFootstepPerceptionComponent
// Size: 0x110 (Inherited: 0xd0)
struct UPlayerFootstepPerceptionComponent : UFootstepPerceptionComponent {
	struct TArray<struct FGameplayTag> _allowFootstepsSeenPerkFlags; // 0xd0(0x10)
	struct TArray<struct FGameplayTag> _disallowFootstepsSeenPerkFlags; // 0xe0(0x10)
	char pad_F0[0x20]; // 0xf0(0x20)
};

// Class DBDGameplay.CamperFootstepPerceptionComponent
// Size: 0x110 (Inherited: 0x110)
struct UCamperFootstepPerceptionComponent : UPlayerFootstepPerceptionComponent {
};

// Class DBDGameplay.CharacterOptimizer
// Size: 0xc8 (Inherited: 0xb8)
struct UCharacterOptimizer : UActorComponent {
	float _characterMovementTickRateWhenInsignificant; // 0xb8(0x04)
	char pad_BC[0xc]; // 0xbc(0x0c)
};

// Class DBDGameplay.ClosetHideInteraction
// Size: 0x670 (Inherited: 0x660)
struct UClosetHideInteraction : UBaseLockerInteraction {
	bool _rushed; // 0x660(0x01)
	char pad_661[0xf]; // 0x661(0x0f)

	void SetOtherInteractorsUsable(bool IsEnabled); // Function DBDGameplay.ClosetHideInteraction.SetOtherInteractorsUsable // (Final|Native|Public|BlueprintCallable) // @ game+0x4d52300
	void SetCollisionWithCloset(struct ADBDPlayer* Player, bool isEnable); // Function DBDGameplay.ClosetHideInteraction.SetCollisionWithCloset // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51d50
	bool IsRushed(); // Function DBDGameplay.ClosetHideInteraction.IsRushed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d51650
	bool IsOccupied(); // Function DBDGameplay.ClosetHideInteraction.IsOccupied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d51620
	bool IsInteractingPlayerInsideCloset(struct ADBDPlayer* Player); // Function DBDGameplay.ClosetHideInteraction.IsInteractingPlayerInsideCloset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d51580
	struct ADBDPlayer* GetPlayerInCloset(); // Function DBDGameplay.ClosetHideInteraction.GetPlayerInCloset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d513d0
	void FireSoundEventFromInteractor(struct AActor* Instigator, struct ADBDPlayer* instigatingPlayer); // Function DBDGameplay.ClosetHideInteraction.FireSoundEventFromInteractor // (Final|Native|Public|BlueprintCallable) // @ game+0x4d51070
};

// Class DBDGameplay.ClosetHideEnterInteraction
// Size: 0x680 (Inherited: 0x670)
struct UClosetHideEnterInteraction : UClosetHideInteraction {
	struct UStatusEffect* _closetBlindnessStatusEffectClass; // 0x668(0x08)
	float _ejectionFromLockerDelaySeconds; // 0x670(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)

	void NotifyClosetAnalytics(struct ACamperPlayer* Survivor); // Function DBDGameplay.ClosetHideEnterInteraction.NotifyClosetAnalytics // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void EjectSurvivorFromLocker(struct ACamperPlayer* Survivor, struct ALocker* Locker); // Function DBDGameplay.ClosetHideEnterInteraction.EjectSurvivorFromLocker // (Final|Native|Protected) // @ game+0x4d50fa0
	void AdjustActorLocation(struct ADBDPlayer* Player); // Function DBDGameplay.ClosetHideEnterInteraction.AdjustActorLocation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDGameplay.CollectableComponentUtilities
// Size: 0x30 (Inherited: 0x30)
struct UCollectableComponentUtilities : UBlueprintFunctionLibrary {

	struct ADBDPlayer* GetCollector(struct UActorComponent* Component); // Function DBDGameplay.CollectableComponentUtilities.GetCollector // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d51310
};

// Class DBDGameplay.CollectFatherKeyCardInteraction
// Size: 0x660 (Inherited: 0x660)
struct UCollectFatherKeyCardInteraction : UCollectItemInteraction {
};

// Class DBDGameplay.ConspicuousActionComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UConspicuousActionComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
};

// Class DBDGameplay.DBDCharacterPusherComponent
// Size: 0x180 (Inherited: 0x170)
struct UDBDCharacterPusherComponent : UCharacterPusherComponent {
	char pad_170[0x10]; // 0x170(0x10)
};

// Class DBDGameplay.DebugIndicator
// Size: 0x250 (Inherited: 0x230)
struct ADebugIndicator : AActor {
	struct UStaticMeshComponent* _staticMeshComponent; // 0x230(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)

	void SetVisible(bool visible); // Function DBDGameplay.DebugIndicator.SetVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x4d525b0
	void SetColor(struct FLinearColor Color); // Function DBDGameplay.DebugIndicator.SetColor // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4d51e20
};

// Class DBDGameplay.DecoySlasherComponent
// Size: 0xf8 (Inherited: 0xb8)
struct UDecoySlasherComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnStunned; // 0xc0(0x10)
	struct FMulticastInlineDelegate TriggerDecoyVisibilityVFX; // 0xd0(0x10)
	bool HasTerrorRadius; // 0xe0(0x01)
	bool HasRedGlow; // 0xe1(0x01)
	bool _isActive; // 0xe2(0x01)
	bool _initialized; // 0xe3(0x01)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UTerrorRadiusEmitterComponent* _terrorRadiusEmitter; // 0xe8(0x08)
	struct URedStainComponent* _redStainComponent; // 0xf0(0x08)

	void SetDecoyIsActive(bool IsActive, struct FVector& Location, struct FRotator& Rotation, bool visibleRedGlow); // Function DBDGameplay.DecoySlasherComponent.SetDecoyIsActive // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4d51eb0
	void OnRealSlasherTerrorRadiusChanged(float NewValue); // Function DBDGameplay.DecoySlasherComponent.OnRealSlasherTerrorRadiusChanged // (Final|Native|Private) // @ game+0x4d518e0
	bool IsDecoyActive(); // Function DBDGameplay.DecoySlasherComponent.IsDecoyActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d51550
	struct ASlasherPlayer* GetRealSlasher(); // Function DBDGameplay.DecoySlasherComponent.GetRealSlasher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d51400
	void DoPostVFXUpdates(struct FVector& Location, struct FRotator& Rotation); // Function DBDGameplay.DecoySlasherComponent.DoPostVFXUpdates // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4d50ec0
	void CopyCustomizationFromSlasher(); // Function DBDGameplay.DecoySlasherComponent.CopyCustomizationFromSlasher // (Final|Native|Private) // @ game+0x4d50ea0
};

// Class DBDGameplay.EtherealComponent
// Size: 0xf8 (Inherited: 0xb8)
struct UEtherealComponent : UActorComponent {
	char pad_B8[0x28]; // 0xb8(0x28)
	bool _isEthereal; // 0xe0(0x01)
	char pad_E1[0x17]; // 0xe1(0x17)

	void Server_SetIsEthereal(float Timestamp, bool Ethereal); // Function DBDGameplay.EtherealComponent.Server_SetIsEthereal // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x4d55e80
	void OnRep_OnIsEtherealChanged(); // Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged // (Final|Native|Private) // @ game+0x4d55c00
};

// Class DBDGameplay.RangeToActorsTrackerStrategy
// Size: 0x70 (Inherited: 0x30)
struct URangeToActorsTrackerStrategy : UObject {
	struct FDBDTunableRowHandle _range; // 0x30(0x28)
	char pad_58[0x18]; // 0x58(0x18)

	void OnInRangeToTrackedActorsChanged(bool inRange); // Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged // (Final|Native|Private) // @ game+0x4d5eb20
};

// Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
// Size: 0x70 (Inherited: 0x70)
struct UExitGateSwitchesRangeTrackerStrategy : URangeToActorsTrackerStrategy {
};

// Class DBDGameplay.FadeComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UFadeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnFadePercentChanged; // 0xb8(0x10)
	float _fadeDuration; // 0xc8(0x04)
	char pad_CC[0xc]; // 0xcc(0x0c)

	float GetFadePercent(); // Function DBDGameplay.FadeComponent.GetFadePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d558e0
};

// Class DBDGameplay.FadingBlockFeedback
// Size: 0x250 (Inherited: 0x238)
struct AFadingBlockFeedback : ABlockFeedbackBase {
	struct UCurveFloat* _fadeCurve; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)

	void OnFadeOutStarted(float fadeDuration); // Function DBDGameplay.FadingBlockFeedback.OnFadeOutStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnFadeOutEnded(); // Function DBDGameplay.FadingBlockFeedback.OnFadeOutEnded // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDGameplay.FatherHackableActor
// Size: 0x270 (Inherited: 0x230)
struct AFatherHackableActor : AActor {
	struct FGameplayTagContainer _hackedGameEvents; // 0x230(0x20)
	struct UWormholeFatherHackingComponent* _hackingComponent; // 0x250(0x08)
	char pad_258[0x18]; // 0x258(0x18)

	void OnHackedEvent(struct FGameplayTag GameEvent, struct FGameEventData& GameEventData); // Function DBDGameplay.FatherHackableActor.OnHackedEvent // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x4d55a00
};

// Class DBDGameplay.FatherKeyCard
// Size: 0x530 (Inherited: 0x510)
struct AFatherKeyCard : ABaseCamperCollectable {
	struct UCollectItemInteraction* _fatherKeyCardCollectionInteraction; // 0x510(0x08)
	enum class EFatherKeyCardState _keyCardState; // 0x518(0x01)
	char pad_519[0x17]; // 0x519(0x17)

	void RemoveInitialTag(struct ADBDPlayer* Character); // Function DBDGameplay.FatherKeyCard.RemoveInitialTag // (Final|Native|Private|Const) // @ game+0x4d55d30
	void OnRep_KeyCardState(); // Function DBDGameplay.FatherKeyCard.OnRep_KeyCardState // (Final|Native|Private) // @ game+0x4d55be0
	enum class EFatherKeyCardState GetKeyCardState(); // Function DBDGameplay.FatherKeyCard.GetKeyCardState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d55910
	void Cosmetic_OnKeyCardDropped(); // Function DBDGameplay.FatherKeyCard.Cosmetic_OnKeyCardDropped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKeyCardCollected(); // Function DBDGameplay.FatherKeyCard.Cosmetic_OnKeyCardCollected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ApplyInitialTag(struct ADBDPlayer* Character); // Function DBDGameplay.FatherKeyCard.ApplyInitialTag // (Final|Native|Private|Const) // @ game+0x4d55670
};

// Class DBDGameplay.FatherTerminalHackingInteraction
// Size: 0x700 (Inherited: 0x630)
struct UFatherTerminalHackingInteraction : UInteractionDefinition {
	struct FMulticastInlineDelegate Cosmetic_OnCooldownTimerStartOrDoneEvent; // 0x630(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnInteractionStarted; // 0x640(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnSuccessfullyEndMiniGameAnimationStarted; // 0x650(0x10)
	struct FDirectionalMiniGameDefinition _miniGameDefinition; // 0x660(0x20)
	float _cooldownDurationSeconds; // 0x680(0x04)
	char pad_684[0x14]; // 0x684(0x14)
	bool _isHackingCompleted; // 0x698(0x01)
	bool _isCooldownTimerRunning; // 0x699(0x01)
	bool _useSuccessfullyEndMiniGameExit; // 0x69a(0x01)
	char pad_69B[0x5]; // 0x69b(0x05)
	struct FAnimationMontageDescriptor _successfullyEndMiniGameAnimationMontageDescriptor; // 0x6a0(0x20)
	char pad_6C0[0x40]; // 0x6c0(0x40)

	void OnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted__DelegateSignature(); // DelegateFunction DBDGameplay.FatherTerminalHackingInteraction.OnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnWormholeTerminalHackingInteractionStarted__DelegateSignature(); // DelegateFunction DBDGameplay.FatherTerminalHackingInteraction.OnWormholeTerminalHackingInteractionStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnWormholeTerminalHackingCooldownTimerStartOrDone__DelegateSignature(bool IsRunning); // DelegateFunction DBDGameplay.FatherTerminalHackingInteraction.OnWormholeTerminalHackingCooldownTimerStartOrDone__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnRep_IsCooldownTimerRunning(); // Function DBDGameplay.FatherTerminalHackingInteraction.OnRep_IsCooldownTimerRunning // (Final|Native|Private) // @ game+0x4d55ba0
	void Authority_OnMiniGameEnd(struct ACamperPlayer* Survivor, enum class EDirectionalMinigameResult Result); // Function DBDGameplay.FatherTerminalHackingInteraction.Authority_OnMiniGameEnd // (Final|Native|Private) // @ game+0x4d55720
	void Authority_OnCooldownTimerDone(); // Function DBDGameplay.FatherTerminalHackingInteraction.Authority_OnCooldownTimerDone // (Final|Native|Private) // @ game+0x4d55700
};

// Class DBDGameplay.FirecrackerSpawner
// Size: 0x520 (Inherited: 0x510)
struct AFirecrackerSpawner : ABaseCamperCollectable {
	struct AActor* _firecrackerClass; // 0x510(0x08)
	float _possibleThrowHeight; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
};

// Class DBDGameplay.FirecrackerSpawnInteraction
// Size: 0x630 (Inherited: 0x630)
struct UFirecrackerSpawnInteraction : UInteractionDefinition {
};

// Class DBDGameplay.Flashlight
// Size: 0x5d8 (Inherited: 0x510)
struct AFlashlight : ABaseCamperCollectable {
	struct FGameplayTagContainer _allowedInteractionSemanticsDuringUse; // 0x510(0x20)
	char pad_530[0x58]; // 0x530(0x58)
	bool _shouldUseCooldowns; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	float _cooldownWhileOnDuration; // 0x58c(0x04)
	float _cooldownWhileOffDuration; // 0x590(0x04)
	char pad_594[0x44]; // 0x594(0x44)

	struct USpotLightComponent* GetSpotlightComponent(); // Function DBDGameplay.Flashlight.GetSpotlightComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d55970
};

// Class DBDGameplay.FlashlightableComponent
// Size: 0x140 (Inherited: 0xb8)
struct UFlashlightableComponent : UActorComponent {
	struct FMulticastInlineDelegate OnFlashlightAddedEvent; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnFlashlightRemovedEvent; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnFlashlightLitChangedEvent; // 0xd8(0x10)
	struct UFlashlightableLightingStrategy* _lightingStrategy; // 0xe8(0x08)
	struct TSet<struct UFlashlightComponent*> _flashlights; // 0xf0(0x50)

	void OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit); // DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnFlashlightAddedRemovedEvent__DelegateSignature(struct UFlashlightComponent* Flashlight); // DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsLit(); // Function DBDGameplay.FlashlightableComponent.IsLit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d559a0
};

// Class DBDGameplay.FlashlightComponent
// Size: 0x208 (Inherited: 0xb8)
struct UFlashlightComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnFlashlightTurnedOn; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnFlashlightTurnedOff; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnFlashlightablesUpdated; // 0xe0(0x10)
	struct FDBDTunableRowHandle _baseBlindnessDuration; // 0xf0(0x28)
	float _baseAccuracy; // 0x118(0x04)
	float _lagDuration; // 0x11c(0x04)
	struct TSet<struct UFlashlightableComponent*> _flashlightables; // 0x120(0x50)
	struct TSet<struct UFlashlightableComponent*> _autonomousLitFlashlightables; // 0x170(0x50)
	struct TArray<struct UFlashlightableComponent*> _replicatedLitFlashlightables; // 0x1c0(0x10)
	bool _isOwnerLagging; // 0x1d0(0x01)
	char pad_1D1[0x37]; // 0x1d1(0x37)

	void TurnOn(); // Function DBDGameplay.FlashlightComponent.TurnOn // (Final|Native|Public|BlueprintCallable) // @ game+0x4d56080
	void TurnOff(); // Function DBDGameplay.FlashlightComponent.TurnOff // (Final|Native|Public|BlueprintCallable) // @ game+0x4d56060
	void Server_SetAndUpdateAutonomousLitFlashlightables(struct TArray<struct UFlashlightableComponent*> newLitFlashlightables); // Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x4d55dc0
	void OnRep_ReplicatedLitFlashlightables(); // Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables // (Final|Native|Private) // @ game+0x4d55c20
	void OnRep_IsOwnerLagging(); // Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging // (Final|Native|Private) // @ game+0x4d55bc0
	void OnFlashlightEvent__DelegateSignature(); // DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsOn(); // Function DBDGameplay.FlashlightComponent.IsOn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d559d0
	float GetEffectiveTimeToBlindModifier(); // Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d558b0
	float GetEffectiveBlindnessDuration(); // Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d55820
};

// Class DBDGameplay.FlashlightConeComponent
// Size: 0x158 (Inherited: 0xb8)
struct UFlashlightConeComponent : UActorComponent {
	struct FVector AIAimBeamLocationOffset; // 0xb8(0x0c)
	struct FRotator AIAimBeamRotationOffset; // 0xc4(0x0c)
	struct USceneComponent* _flashlightBottom; // 0xd0(0x08)
	struct FDBDTunableRowHandle _baseBeamAngle; // 0xd8(0x28)
	struct FDBDTunableRowHandle _baseBeamLength; // 0x100(0x28)
	struct TWeakObjectPtr<struct AActor> _cacheCollidingActor; // 0x128(0x08)
	char pad_130[0x18]; // 0x130(0x18)
	struct TArray<struct FGameplayTag> _tagsPreventingBeamOcclusion; // 0x148(0x10)

	float GetOcclusionDistance(); // Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d55940
	float GetEffectiveConeLength(); // Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d55880
	float GetEffectiveConeHalfAngle(); // Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d55850
};

// Class DBDGameplay.FlashlightFXComponent
// Size: 0x268 (Inherited: 0xb8)
struct UFlashlightFXComponent : UActorComponent {
	struct FMulticastInlineDelegate OnFlashEvent; // 0xb8(0x10)
	struct USceneComponent* _tip; // 0xc8(0x08)
	struct UStaticMeshComponent* _centerGlowMesh; // 0xd0(0x08)
	struct USplineMeshComponent* _beamMesh; // 0xd8(0x08)
	float _minimumOcclusionDistanceForSpotlight; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UCurveFloat* _flashEffectIntensityCurve; // 0xe8(0x08)
	float _flashEffectDuration; // 0xf0(0x04)
	float _spotLightHalfAngle; // 0xf4(0x04)
	float _spotLightIntensity; // 0xf8(0x04)
	float _beamBlindingHalfAngle; // 0xfc(0x04)
	float _beamFlashHalfAngle; // 0x100(0x04)
	float _beamBlindingRatioInterpSpeedWithTarget; // 0x104(0x04)
	float _beamBlindingRatioInterpSpeedWithoutTarget; // 0x108(0x04)
	bool _resizeConeLength; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float _centerGlowWidthScaleWithoutBlindTarget; // 0x110(0x04)
	float _centerGlowWidthScaleWithBlindTarget; // 0x114(0x04)
	float _centerGlowWidthScaleDuringFlash; // 0x118(0x04)
	float _centerGlowShrinkDistance; // 0x11c(0x04)
	float _centerGlowLengthMaxScale; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FAkObservedPlayerSoundLoop _aimedAtSoundLoop; // 0x128(0x40)
	struct UFlashlightTargetFXComponent* _currentBeamModifyingTarget; // 0x168(0x08)
	struct TSet<struct UFlashlightTargetFXComponent*> _targets; // 0x170(0x50)
	char pad_1C0[0xa8]; // 0x1c0(0xa8)

	void UpdateFXTargets(); // Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets // (Final|Native|Private) // @ game+0x4d560a0
	void UpdateConeEvent(float Length, float halfAngle); // Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void PostUpdateEvent(); // Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTurnedOn(); // Function DBDGameplay.FlashlightFXComponent.OnTurnedOn // (Final|Native|Private) // @ game+0x4d55c60
	void OnTurnedOff(); // Function DBDGameplay.FlashlightFXComponent.OnTurnedOff // (Final|Native|Private) // @ game+0x4d55c40
	void OnStopEvent(); // Function DBDGameplay.FlashlightFXComponent.OnStopEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnStartEvent(); // Function DBDGameplay.FlashlightFXComponent.OnStartEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnFlashEvent__DelegateSignature(); // DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnDroppedEvent(); // Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved); // Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnCollectedEvent(struct ADBDPlayer* collector); // Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetBlindingSuccessRatio(); // Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d557f0
};

// Class DBDGameplay.FlashlightUtilities
// Size: 0x30 (Inherited: 0x30)
struct UFlashlightUtilities : UObject {
};

// Class DBDGameplay.FootstepManagerComponent
// Size: 0x3e8 (Inherited: 0xb8)
struct UFootstepManagerComponent : UActorComponent {
	struct FBHVRPerDetailModeInt _decalPoolSize; // 0xb8(0xa0)
	struct FBHVRPerDetailModeFloat _recycleThresholdPercentage; // 0x158(0xa0)
	struct FBHVRPerDetailModeFloat _recycleDistancePercentage; // 0x1f8(0xa0)
	struct FBHVRPerDetailModeInt _maxOverlapping; // 0x298(0xa0)
	float _raycastHalfAngle; // 0x338(0x04)
	float _raycastZOffset; // 0x33c(0x04)
	float _raycastDistance; // 0x340(0x04)
	float _minimumDecalSize; // 0x344(0x04)
	float _maximumDecalSize; // 0x348(0x04)
	float _projectionTickness; // 0x34c(0x04)
	struct UMaterial* _footstepsMaterial; // 0x350(0x08)
	struct TArray<struct FFootstep> _currentFootSteps; // 0x358(0x10)
	struct UDecalSpawner* _decalSpawner; // 0x368(0x08)
	char pad_370[0x78]; // 0x370(0x78)

	void TriggerSpawnFootstep(struct UFootstepCreatorComponent* originatorComponent, struct FVector Location); // Function DBDGameplay.FootstepManagerComponent.TriggerSpawnFootstep // (Final|Native|Public|HasDefaults) // @ game+0x4d55f80
	void OnUpdateObserverFootsteps(); // Function DBDGameplay.FootstepManagerComponent.OnUpdateObserverFootsteps // (Final|Native|Public) // @ game+0x4d55d10
	void OnUpdateCreatorFootsteps(struct UFootstepCreatorComponent* creator); // Function DBDGameplay.FootstepManagerComponent.OnUpdateCreatorFootsteps // (Final|Native|Public) // @ game+0x4d55c80
};

// Class DBDGameplay.GeneratorWithMostProgressTracker
// Size: 0xc8 (Inherited: 0xb8)
struct UGeneratorWithMostProgressTracker : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)

	void OnLevelReadyToPlay(); // Function DBDGameplay.GeneratorWithMostProgressTracker.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4d5aa60
	void OnGeneratorCompleted(bool isAutoCompleted); // Function DBDGameplay.GeneratorWithMostProgressTracker.OnGeneratorCompleted // (Final|Native|Private) // @ game+0x4d5a920
};

// Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
// Size: 0xd8 (Inherited: 0x70)
struct UHooksWithSurvivorRangeTrackerStrategy : URangeToActorsTrackerStrategy {
	char pad_70[0x68]; // 0x70(0x68)
};

// Class DBDGameplay.InteractionStarterComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UInteractionStarterComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UInteractionDefinition* _interaction; // 0xc0(0x08)
	bool _shouldStartInteraction; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	void OnRep_ShouldStartInteraction(); // Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction // (Final|Native|Private) // @ game+0x4d5ab50
	void OnInteractionStarted(); // Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted // (Final|Native|Private) // @ game+0x4d5a9b0
};

// Class DBDGameplay.KillerFlashlightSFXComponent
// Size: 0x158 (Inherited: 0xb8)
struct UKillerFlashlightSFXComponent : UActorComponent {
	struct FAkObservedPlayerSoundLoop _targetSoundLoop; // 0xb8(0x40)
	struct TArray<struct UFlashlightTargetFXComponent*> _flashlightTargets; // 0xf8(0x10)
	char pad_108[0x50]; // 0x108(0x50)
};

// Class DBDGameplay.KillerFootstepPerceptionComponent
// Size: 0x110 (Inherited: 0x110)
struct UKillerFootstepPerceptionComponent : UPlayerFootstepPerceptionComponent {
};

// Class DBDGameplay.KillerInstinctComponent
// Size: 0x230 (Inherited: 0xb8)
struct UKillerInstinctComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FCustomKillerInstinctData _defaultKillerInstinctAsset; // 0xc0(0x28)
	struct UNiagaraComponent* _particleSystemComponent; // 0xe8(0x08)
	char pad_F0[0x4]; // 0xf0(0x04)
	struct FLinearColor _camperHighlightColorOverride; // 0xf4(0x10)
	char pad_104[0xac]; // 0x104(0xac)
	struct TArray<struct FCustomKillerInstinctData> _customKillerInstinctData; // 0x1b0(0x10)
	struct FCustomKillerInstinctData _currentKillerInstinctData; // 0x1c0(0x28)
	char pad_1E8[0x48]; // 0x1e8(0x48)

	void SetParticleSystem(struct UNiagaraComponent* ParticleSystemComponent); // Function DBDGameplay.KillerInstinctComponent.SetParticleSystem // (Final|Native|Protected|BlueprintCallable) // @ game+0x4d5ac90
	void OnKillerLocallyObservedChanged(bool locallyObserved); // Function DBDGameplay.KillerInstinctComponent.OnKillerLocallyObservedChanged // (Final|Native|Private) // @ game+0x4d5a9d0
	bool IsOwnerInKillerInstinctRadius(); // Function DBDGameplay.KillerInstinctComponent.IsOwnerInKillerInstinctRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d59aa0
	struct UNiagaraComponent* GetParticleSystem(); // Function DBDGameplay.KillerInstinctComponent.GetParticleSystem // (Final|Native|Private|BlueprintCallable) // @ game+0x4d59a40
};

// Class DBDGameplay.LullabyFeedbackComponent
// Size: 0x138 (Inherited: 0xb8)
struct ULullabyFeedbackComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct FLullabyKillerData> _killersData; // 0xd0(0x10)
	char pad_E0[0x58]; // 0xe0(0x58)

	void OnSlasherSet(struct ASlasherPlayer* killer); // Function DBDGameplay.LullabyFeedbackComponent.OnSlasherSet // (Final|Native|Private) // @ game+0x4d5ab70
};

// Class DBDGameplay.MapCollectable
// Size: 0x510 (Inherited: 0x510)
struct AMapCollectable : ABaseCamperCollectable {

	struct UChargerComponent* GetChargerComponent(); // Function DBDGameplay.MapCollectable.GetChargerComponent // (Event|Public|BlueprintEvent|Const) // @ game+0x5e02c90
	struct UChargeableComponent* GetChargeableComponent(); // Function DBDGameplay.MapCollectable.GetChargeableComponent // (Event|Public|BlueprintEvent|Const) // @ game+0x5e02c90
	struct UActorKnowledgeCollection* GetActorKnowledgeCollection(); // Function DBDGameplay.MapCollectable.GetActorKnowledgeCollection // (Event|Public|BlueprintEvent|Const) // @ game+0x5e02c90
};

// Class DBDGameplay.MapObjectsCheatComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UMapObjectsCheatComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)

	void DBD_ShowQuesita(bool enable); // Function DBDGameplay.MapObjectsCheatComponent.DBD_ShowQuesita // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_ShowFatherKey(bool enable); // Function DBDGameplay.MapObjectsCheatComponent.DBD_ShowFatherKey // (Final|Exec|Native|Public) // @ game+0x46a2400
};

// Class DBDGameplay.Medkit
// Size: 0x550 (Inherited: 0x510)
struct AMedkit : ABaseCamperCollectable {
	struct UAkComponent* _akComponent; // 0x510(0x08)
	struct UChargerComponent* _charger; // 0x518(0x08)
	struct UParticleSystem* _dustRingTemplate; // 0x520(0x08)
	struct UAkAudioEvent* _medkitGetAkEvent; // 0x528(0x08)
	struct UAkAudioEvent* _medkitDropAkEvent; // 0x530(0x08)
	struct UAkAudioBank* _medkitBank; // 0x538(0x08)
	float _healOtherChargeMultiplier; // 0x540(0x04)
	char pad_544[0xc]; // 0x544(0x0c)

	void UseCharge(float Seconds); // Function DBDGameplay.Medkit.UseCharge // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5aee0
	void OnMedkitHealedCamper(struct ADBDPlayer* healedPlayer); // Function DBDGameplay.Medkit.OnMedkitHealedCamper // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4d5aa80
	bool HasCharge(); // Function DBDGameplay.Medkit.HasCharge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d59a70
	float GetChargeMultiplier(); // Function DBDGameplay.Medkit.GetChargeMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d599e0
	float GetCharge(); // Function DBDGameplay.Medkit.GetCharge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d599b0
	void Authority_OnChargeStateChange(bool Empty); // Function DBDGameplay.Medkit.Authority_OnChargeStateChange // (Final|Native|Protected) // @ game+0x4d598e0
	void Authority_OnAnyOngoingInteractionChanged(bool IsInteracting); // Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged // (Final|Native|Protected) // @ game+0x4d59850
	void Authority_ConsumeIfNotInteracting(); // Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting // (Final|Native|Protected) // @ game+0x4d59830
};

// Class DBDGameplay.PointsProvider
// Size: 0x30 (Inherited: 0x30)
struct UPointsProvider : UObject {
};

// Class DBDGameplay.MeshSocketPointsProvider
// Size: 0x78 (Inherited: 0x30)
struct UMeshSocketPointsProvider : UPointsProvider {
	struct FComponentReference _meshReference; // 0x30(0x30)
	struct UMeshComponent* _mesh; // 0x60(0x08)
	struct TArray<struct FName> _sockets; // 0x68(0x10)
};

// Class DBDGameplay.MoveToGroundComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UMoveToGroundComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)

	void MoveOwnerToGround(); // Function DBDGameplay.MoveToGroundComponent.MoveOwnerToGround // (Final|Native|Private) // @ game+0x4d5a750
};

// Class DBDGameplay.MultiSceneComponentPointProvider
// Size: 0x50 (Inherited: 0x30)
struct UMultiSceneComponentPointProvider : UPointsProvider {
	struct TArray<struct FComponentReference> _sceneReferences; // 0x30(0x10)
	struct TArray<struct USceneComponent*> _sceneComponents; // 0x40(0x10)
};

// Class DBDGameplay.NearestOutsideMapBoundsLocator
// Size: 0xe0 (Inherited: 0xb8)
struct UNearestOutsideMapBoundsLocator : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UAkComponent* _akComponent; // 0xc0(0x08)
	float _maxDistanceFromBorderAllowed; // 0xc8(0x04)
	float _heightOfOOBPosition; // 0xcc(0x04)
	char pad_D0[0x10]; // 0xd0(0x10)

	void OnGameEnd(enum class EEndGameReason endGameReason); // Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameEnd // (Final|Native|Private) // @ game+0x4d5a8a0
	void OnGameBegin(); // Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameBegin // (Final|Native|Private) // @ game+0x4d5a880
	void Client_InitializeAkLimitPointEvent(); // Function DBDGameplay.NearestOutsideMapBoundsLocator.Client_InitializeAkLimitPointEvent // (Final|Native|Private) // @ game+0x4d59990
};

// Class DBDGameplay.NiagaraBlockFeedback
// Size: 0x258 (Inherited: 0x250)
struct ANiagaraBlockFeedback : AFadingBlockFeedback {
	struct UNiagaraComponent* _effect; // 0x250(0x08)
};

// Class DBDGameplay.ParticleBlockFeedback
// Size: 0x258 (Inherited: 0x250)
struct AParticleBlockFeedback : AFadingBlockFeedback {
	struct UParticleSystemComponent* _effect; // 0x250(0x08)
};

// Class DBDGameplay.PlayerCameraAimDirectionProvider
// Size: 0x30 (Inherited: 0x30)
struct UPlayerCameraAimDirectionProvider : UAimDirectionProvider {
};

// Class DBDGameplay.PlayerInteractionListenerComponent
// Size: 0x108 (Inherited: 0xb8)
struct UPlayerInteractionListenerComponent : UActorComponent {
	char pad_B8[0x50]; // 0xb8(0x50)

	void UnlistenToInteractionStart(struct ADBDPlayer* Player, struct FGameplayTag& interactionSemantic); // Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d5ae00
	void UnlistenToInteractionEnd(struct ADBDPlayer* Player, struct FGameplayTag& interactionSemantic); // Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d5ad20
	void OnActorDestroyed(struct AActor* DestroyedActor); // Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed // (Final|Native|Private) // @ game+0x4d5a770
	void ListenToInteractionStart(struct ADBDPlayer* Player, struct FGameplayTag& interactionSemantic, struct FDelegate& interactionDelegate); // Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d59c30
	void ListenToInteractionEnd(struct ADBDPlayer* Player, struct FGameplayTag& interactionSemantic, struct FDelegate& interactionDelegate); // Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d59ad0
	void InteractionMulticastDelegate__DelegateSignature(struct ADBDPlayer* Player, struct FGameplayTag interactionSemantic); // DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void InteractionDelegate__DelegateSignature(struct ADBDPlayer* Player, struct FGameplayTag interactionSemantic); // DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature // (Public|Delegate) // @ game+0x5e02c90
};

// Class DBDGameplay.PlayerMovementUtilities
// Size: 0x30 (Inherited: 0x30)
struct UPlayerMovementUtilities : UBlueprintFunctionLibrary {

	void Local_SetGamepadYawCurve(struct ADBDPlayer* Player, struct UCurveFloat* Curve); // Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a690
	void Local_SetGamepadPitchCurve(struct ADBDPlayer* Player, struct UCurveFloat* Curve); // Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a5d0
	void Local_ResetRotationScale(struct ADBDPlayer* Player, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a510
	void Local_ResetGamepadLookCurves(struct ADBDPlayer* Player); // Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a490
	void Local_ApplyYawScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a390
	void Local_ApplyRotationScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a290
	void Local_ApplyPitchScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a190
	void Local_ApplyMouseYawScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d5a090
	void Local_ApplyMousePitchScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d59f90
	void Local_ApplyGamepadYawScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d59e90
	void Local_ApplyGamepadPitchScaleMultiplier(struct ADBDPlayer* Player, float Multiplier, float adjustmentTime); // Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4d59d90
};

// Class DBDGameplay.PoseableHusk
// Size: 0x268 (Inherited: 0x260)
struct APoseableHusk : ABaseHusk {
	char pad_260[0x8]; // 0x260(0x08)

	void SetIsActive(bool IsActive); // Function DBDGameplay.PoseableHusk.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5ac00
	void OnActiveStateChanged(bool IsActive); // Function DBDGameplay.PoseableHusk.OnActiveStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool GetIsActive(); // Function DBDGameplay.PoseableHusk.GetIsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d59a10
	void Cosmetic_OnAnimationPoseCaptured(); // Function DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void CapturePose(); // Function DBDGameplay.PoseableHusk.CapturePose // (Final|Native|Public|BlueprintCallable) // @ game+0x4d59970
};

// Class DBDGameplay.PositionLagCompensationComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UPositionLagCompensationComponent : UActorComponent {
	float _maxExtrapolationDurationInSeconds; // 0xb8(0x04)
	float _maxInterpolationToServerMoveInSeconds; // 0xbc(0x04)
};

// Class DBDGameplay.PowerChargeComponent
// Size: 0x160 (Inherited: 0xb8)
struct UPowerChargeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPowerChargeChanged; // 0xb8(0x10)
	char pad_C8[0x58]; // 0xc8(0x58)
	struct FSpeedBasedNetSyncedValue _currentCharge; // 0x120(0x38)
	char pad_158[0x4]; // 0x158(0x04)
	bool _forceFullCharge; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)

	void OnRep_CurrentCharge(); // Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge // (Final|Native|Private) // @ game+0x4d5ab10
	void OnCurrentChargeChanged(float value); // Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged // (Final|Native|Private) // @ game+0x4d5a800
};

// Class DBDGameplay.PowerChargePresentationItemProgressComponent
// Size: 0xd8 (Inherited: 0xc0)
struct UPowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UPowerChargeComponent* _powerChargeComponent; // 0xc0(0x08)
	struct UPowerToggleComponent* _powerToggleComponent; // 0xc8(0x08)
	float _chargeReadyThreshold; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class DBDGameplay.PowerToggleComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UPowerToggleComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	bool _isInPower; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	void OnRep_IsInPower(); // Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower // (Final|Native|Private|Const) // @ game+0x4d5ab30
};

// Class DBDGameplay.QuesitaClosetHideEnterInteraction
// Size: 0x6a0 (Inherited: 0x680)
struct UQuesitaClosetHideEnterInteraction : UClosetHideEnterInteraction {
	struct TArray<struct FQuesitaPropStruct> _propInfos; // 0x680(0x10)
	struct TArray<struct AActor*> _props; // 0x690(0x10)
};

// Class DBDGameplay.QuesitaManagerComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UQuesitaManagerComponent : UMapSpecificGameStateComponent {
	struct UQuesitaClosetHideEnterInteraction* _quesitaLockerInteraction; // 0xb8(0x08)
	struct UAkComponent* _akQuesitaComponent; // 0xc0(0x08)
	struct UQuesitaClosetHideEnterInteraction* _interaction; // 0xc8(0x08)
	struct ALocker* _locker; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)

	void OnRep_QuesitaLocker(struct ALocker* lastLocker); // Function DBDGameplay.QuesitaManagerComponent.OnRep_QuesitaLocker // (Final|Native|Private) // @ game+0x4d5ec70
	void OnRep_QuesitaInteraction(); // Function DBDGameplay.QuesitaManagerComponent.OnRep_QuesitaInteraction // (Final|Native|Private) // @ game+0x4d5ec50
	void Authority_OnQuesitaInteractionDone(); // Function DBDGameplay.QuesitaManagerComponent.Authority_OnQuesitaInteractionDone // (Final|Native|Private) // @ game+0x4d5e500
	void Authority_OnLockerInteractorChanged(bool IsLocked); // Function DBDGameplay.QuesitaManagerComponent.Authority_OnLockerInteractorChanged // (Final|Native|Private) // @ game+0x4d5e470
	void Authority_OnLevelReadyToPlay(); // Function DBDGameplay.QuesitaManagerComponent.Authority_OnLevelReadyToPlay // (Final|Native|Protected) // @ game+0x4d5e450
};

// Class DBDGameplay.RangeToActorsTrackerComponent
// Size: 0xc8 (Inherited: 0xb8)
struct URangeToActorsTrackerComponent : UActorComponent {
	struct TArray<struct URangeToActorsTrackerStrategy*> _rangeTrackers; // 0xb8(0x10)

	void OnLevelReadyToPlay(); // Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4d5ebb0
};

// Class DBDGameplay.RangeToActorsTrackerDefaultStrategy
// Size: 0x78 (Inherited: 0x70)
struct URangeToActorsTrackerDefaultStrategy : URangeToActorsTrackerStrategy {
	struct AActor* _actorClass; // 0x70(0x08)
};

// Class DBDGameplay.ReadMapInteraction
// Size: 0x760 (Inherited: 0x760)
struct UReadMapInteraction : UChargeableInteractionDefinition {
	bool _chargeCompleted; // 0x758(0x01)
};

// Class DBDGameplay.RespawnableComponent
// Size: 0x210 (Inherited: 0xb8)
struct URespawnableComponent : UActorComponent {
	struct FMulticastInlineDelegate Cosmetic_OnRespawn; // 0xb8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnDespawn; // 0xc8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnFirstSpawn; // 0xd8(0x10)
	bool _hasStartedRespawning; // 0xe8(0x01)
	bool _hasExceededMinRespawnTime; // 0xe9(0x01)
	enum class EGameplayElementType _gameplayElementSpawnType; // 0xea(0x01)
	enum class ETileSpawnPointType _tileSpawnType; // 0xeb(0x01)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UActorSpawner* _actorSpawnerInUse; // 0xf0(0x08)
	struct UTileSpawnPoint* _tileSpawnInUse; // 0xf8(0x08)
	struct FDBDTunableRowHandle _respawnFrequencyMin; // 0x100(0x28)
	struct FDBDTunableRowHandle _respawnFrequencyMax; // 0x128(0x28)
	float _disappearDuration; // 0x150(0x04)
	float _minTimeBetweenRespawns; // 0x154(0x04)
	float _spawnHeightOffset; // 0x158(0x04)
	char pad_15C[0x34]; // 0x15c(0x34)
	bool _usesGameplayElementSpawner; // 0x190(0x01)
	char pad_191[0x67]; // 0x191(0x67)
	struct FVector _actorLocation; // 0x1f8(0x0c)
	char pad_204[0x4]; // 0x204(0x04)
	float _collisionCapsuleHalfHeight; // 0x208(0x04)
	float _collisionCapsuleRadius; // 0x20c(0x04)

	void OnRep_OnLocationChanged(); // Function DBDGameplay.RespawnableComponent.OnRep_OnLocationChanged // (Final|Native|Private) // @ game+0x4d5ec30
	void OnLevelReadyToPlay(); // Function DBDGameplay.RespawnableComponent.OnLevelReadyToPlay // (Native|Protected) // @ game+0x4aa7040
	void OnDespawnCosmeticsComplete(); // Function DBDGameplay.RespawnableComponent.OnDespawnCosmeticsComplete // (Native|Public|BlueprintCallable) // @ game+0x4af1ac0
	void OnCosmeticNeeded__DelegateSignature(); // DelegateFunction DBDGameplay.RespawnableComponent.OnCosmeticNeeded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool Authority_TryTeleport(); // Function DBDGameplay.RespawnableComponent.Authority_TryTeleport // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4d5e840
	void Authority_OnTimerDone(); // Function DBDGameplay.RespawnableComponent.Authority_OnTimerDone // (Final|Native|Private) // @ game+0x4af1ae0
	void Authority_OnMinRespawnTimerDone(); // Function DBDGameplay.RespawnableComponent.Authority_OnMinRespawnTimerDone // (Final|Native|Private) // @ game+0x4af1aa0
};

// Class DBDGameplay.SceneComponentPointProvider
// Size: 0x68 (Inherited: 0x30)
struct USceneComponentPointProvider : UPointsProvider {
	struct FComponentReference _sceneReference; // 0x30(0x30)
	struct USceneComponent* _sceneComponent; // 0x60(0x08)
};

// Class DBDGameplay.SightRevealableComponent
// Size: 0x2d0 (Inherited: 0xb8)
struct USightRevealableComponent : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct FGameplayTagContainer _ignoredTags; // 0x100(0x20)
	struct FTunableStat _revealTimeBase; // 0x120(0x80)
	struct FTunableStat _revealRate; // 0x1a0(0x80)
	struct FTunableStat _revealRegressionRate; // 0x220(0x80)
	char pad_2A0[0x30]; // 0x2a0(0x30)
};

// Class DBDGameplay.TerrorRadiusEmitterComponent
// Size: 0x310 (Inherited: 0x220)
struct UTerrorRadiusEmitterComponent : USceneComponent {
	char pad_220[0x28]; // 0x220(0x28)
	float _simulatedFixedDistance; // 0x248(0x04)
	bool _imitatesAudioOnly; // 0x24c(0x01)
	bool _active; // 0x24d(0x01)
	bool _isFakeTerrorRadius; // 0x24e(0x01)
	char pad_24F[0x1]; // 0x24f(0x01)
	float _radius; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TMap<struct TWeakObjectPtr<struct UTerrorRadiusReceiverComponent>, bool> _receiversInTerrorRadiusMap; // 0x258(0x50)
	struct TMap<struct TWeakObjectPtr<struct UTerrorRadiusReceiverComponent>, bool> _receiversPhysicallyInRadiusRangeMap; // 0x2a8(0x50)
	char pad_2F8[0x18]; // 0x2f8(0x18)

	void SetTerrorRadius(float Radius); // Function DBDGameplay.TerrorRadiusEmitterComponent.SetTerrorRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5f210
	void SetSimulatedFixedDistance(float distance); // Function DBDGameplay.TerrorRadiusEmitterComponent.SetSimulatedFixedDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5f190
	void SetIsFakeTerrorRadius(bool value); // Function DBDGameplay.TerrorRadiusEmitterComponent.SetIsFakeTerrorRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5f100
	void SetImitatesAudioOnly(bool imitatesAudioOnly); // Function DBDGameplay.TerrorRadiusEmitterComponent.SetImitatesAudioOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5f070
	void SetEmitterActive(bool Active); // Function DBDGameplay.TerrorRadiusEmitterComponent.SetEmitterActive // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5efe0
	bool IsInTerrorRadius(struct UTerrorRadiusReceiverComponent* receiver); // Function DBDGameplay.TerrorRadiusEmitterComponent.IsInTerrorRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5ea20
	float GetSimulatedFixedDistance(); // Function DBDGameplay.TerrorRadiusEmitterComponent.GetSimulatedFixedDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5e9c0
	float GetRadius(); // Function DBDGameplay.TerrorRadiusEmitterComponent.GetRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5e9a0
	bool GetIsActive(); // Function DBDGameplay.TerrorRadiusEmitterComponent.GetIsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5e970
	bool GetImitatesAudioOnly(); // Function DBDGameplay.TerrorRadiusEmitterComponent.GetImitatesAudioOnly // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5e940
};

// Class DBDGameplay.SlasherTerrorRadiusEmitterComponent
// Size: 0x3a0 (Inherited: 0x310)
struct USlasherTerrorRadiusEmitterComponent : UTerrorRadiusEmitterComponent {
	char pad_310[0x90]; // 0x310(0x90)

	void SetBaseTerrorRadius(float baseTerrorRadius, bool progressive); // Function DBDGameplay.SlasherTerrorRadiusEmitterComponent.SetBaseTerrorRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x4d5ef00
};

// Class DBDGameplay.StaticMeshBlockFeedback
// Size: 0x260 (Inherited: 0x250)
struct AStaticMeshBlockFeedback : AFadingBlockFeedback {
	struct UStaticMeshComponent* _mesh; // 0x250(0x08)
	struct UMaterialHelper* _materialHelper; // 0x258(0x08)
};

// Class DBDGameplay.SteamPipe
// Size: 0x318 (Inherited: 0x230)
struct ASteamPipe : AActor {
	char pad_230[0x18]; // 0x230(0x18)
	struct UBoxComponent* _overlapVolume; // 0x248(0x08)
	enum class ESteamPipeState _currentSteamPipeState; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct TWeakObjectPtr<struct USteamPipeEffectComponent>> _overlappingPlayerComponents; // 0x258(0x10)
	char pad_268[0x30]; // 0x268(0x30)
	float _debugResetTimer; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FDBDTunableRowHandle _warningStateTime; // 0x2a0(0x28)
	struct FDBDTunableRowHandle _activeTime; // 0x2c8(0x28)
	struct FDBDTunableRowHandle _warningStateTimeNoCharge; // 0x2f0(0x28)

	void OnRep_SteamPipeState(); // Function DBDGameplay.SteamPipe.OnRep_SteamPipeState // (Final|Native|Private) // @ game+0x4d5ed20
	enum class ESteamPipeState GetCurrentSteamPipeState(); // Function DBDGameplay.SteamPipe.GetCurrentSteamPipeState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5e920
	void Cosmetic_OnSteamPipeStateChanged(enum class ESteamPipeState NewState); // Function DBDGameplay.SteamPipe.Cosmetic_OnSteamPipeStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DBDGameplay.SteamPipe.Authority_OnEndOverlap // (Final|Native|Private) // @ game+0x4d5e1e0
	void Authority_OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DBDGameplay.SteamPipe.Authority_OnBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x4d5df30
};

// Class DBDGameplay.SteamPipeEffectComponent
// Size: 0x120 (Inherited: 0xb8)
struct USteamPipeEffectComponent : UActorComponent {
	struct UStatusEffect* _hinderedEffectClass; // 0xb8(0x08)
	struct TArray<struct FGameplayTag> _stateTagsToIgnore; // 0xc0(0x10)
	struct FTagStateBool _isInActiveSteamPipeZone; // 0xd0(0x30)
	struct TWeakObjectPtr<struct ASteamPipe> _overlappingSteamPipe; // 0x100(0x08)
	char pad_108[0x18]; // 0x108(0x18)

	void Authority_OnStoppedCrouching(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function DBDGameplay.SteamPipeEffectComponent.Authority_OnStoppedCrouching // (Final|Native|Private|HasOutParms) // @ game+0x4d5e6f0
	void Authority_OnHealthStateChanged(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function DBDGameplay.SteamPipeEffectComponent.Authority_OnHealthStateChanged // (Final|Native|Private|HasOutParms) // @ game+0x4d5e340
};

// Class DBDGameplay.SteamPipeManagerComponent
// Size: 0x170 (Inherited: 0xb8)
struct USteamPipeManagerComponent : UActorComponent {
	struct USteamPipeEffectComponent* _steamPipeEffectComponentClass; // 0xb8(0x08)
	struct UChargeableComponent* _chargeableComponentClass; // 0xc0(0x08)
	struct FDBDTunableRowHandle _resetSwitchCooldownTime; // 0xc8(0x28)
	struct UChargeableComponent* _sharedChargeableComponent; // 0xf0(0x08)
	struct TArray<struct TWeakObjectPtr<struct ASteamPipe>> _steamPipes; // 0xf8(0x10)
	struct TArray<struct TWeakObjectPtr<struct ASteamPipeResetSwitch>> _steamPipeResetSwitches; // 0x108(0x10)
	char pad_118[0x40]; // 0x118(0x40)
	struct TArray<struct TWeakObjectPtr<struct ADBDPlayer>> _interactingPlayersArray; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)

	void OnLevelReadyToPlay(); // Function DBDGameplay.SteamPipeManagerComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4d5ebd0
	void Authority_UpdateCanUseResetSwitch(); // Function DBDGameplay.SteamPipeManagerComponent.Authority_UpdateCanUseResetSwitch // (Final|Native|Private) // @ game+0x4d5e870
	void Authority_OnSwitchCooldownComplete(); // Function DBDGameplay.SteamPipeManagerComponent.Authority_OnSwitchCooldownComplete // (Final|Native|Private) // @ game+0x4d5e800
	void Authority_OnSteamPipeStateChanged(struct ASteamPipe* SteamPipe, enum class ESteamPipeState NewState); // Function DBDGameplay.SteamPipeManagerComponent.Authority_OnSteamPipeStateChanged // (Final|Native|Private) // @ game+0x4d5e620
	void Authority_OnResetInteractionComplete(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function DBDGameplay.SteamPipeManagerComponent.Authority_OnResetInteractionComplete // (Final|Native|Private|HasOutParms) // @ game+0x4d5e520
	void Authority_OnCharacterAdded(struct ADBDPlayer* Character); // Function DBDGameplay.SteamPipeManagerComponent.Authority_OnCharacterAdded // (Final|Native|Private) // @ game+0x4d5e150
};

// Class DBDGameplay.SteamPipeResetSwitch
// Size: 0x3a8 (Inherited: 0x338)
struct ASteamPipeResetSwitch : AInteractable {
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent; // 0x338(0x08)
	struct FDBDTunableRowHandle _resetSoundDistance; // 0x340(0x28)
	struct USteamPipeManagerComponent* _managerComponentClass; // 0x368(0x08)
	struct UChargeableComponent* _sharedChargeableComponent; // 0x370(0x08)
	char pad_378[0x14]; // 0x378(0x14)
	bool _isOnCooldown; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	int32_t _numberOfDisabledSteamPipes; // 0x390(0x04)
	int32_t _totalSteamPipesInLevel; // 0x394(0x04)
	struct TWeakObjectPtr<struct USteamPipeManagerComponent> _steamPipeManagerComponent; // 0x398(0x08)
	char pad_3A0[0x4]; // 0x3a0(0x04)
	bool _canUseResetSwitch; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)

	void OnRep_SharedChargeableComponent(); // Function DBDGameplay.SteamPipeResetSwitch.OnRep_SharedChargeableComponent // (Final|Native|Private) // @ game+0x4d5ed00
	void OnRep_NumberOfDisabledSteamPipes(); // Function DBDGameplay.SteamPipeResetSwitch.OnRep_NumberOfDisabledSteamPipes // (Final|Native|Private) // @ game+0x4d5ec10
	void OnRep_IsOnCooldown(); // Function DBDGameplay.SteamPipeResetSwitch.OnRep_IsOnCooldown // (Final|Native|Private) // @ game+0x4d5ebf0
	int32_t GetTotalSteamPipesInLevel(); // Function DBDGameplay.SteamPipeResetSwitch.GetTotalSteamPipesInLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5e9f0
	void Cosmetic_OnTotalSteamPipesInLevelChanged(int32_t totalSteamPipesInLevel); // Function DBDGameplay.SteamPipeResetSwitch.Cosmetic_OnTotalSteamPipesInLevelChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSwitchTriggered(float cooldownTime); // Function DBDGameplay.SteamPipeResetSwitch.Cosmetic_OnSwitchTriggered // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCooldownDone(); // Function DBDGameplay.SteamPipeResetSwitch.Cosmetic_OnCooldownDone // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_NumberOfDisabledSteamPipesChanged(int32_t numberOfDisabledSteamPipes); // Function DBDGameplay.SteamPipeResetSwitch.Cosmetic_NumberOfDisabledSteamPipesChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDGameplay.SteamPipeResetSwitchInteraction
// Size: 0x7a0 (Inherited: 0x760)
struct USteamPipeResetSwitchInteraction : UChargeableInteractionDefinition {
	char pad_760[0x40]; // 0x760(0x40)
};

// Class DBDGameplay.StruggleComponent
// Size: 0x180 (Inherited: 0xb8)
struct UStruggleComponent : UActorComponent {
	char pad_B8[0x5c]; // 0xb8(0x5c)
	int32_t _skillCheckCount; // 0x114(0x04)
	char pad_118[0x68]; // 0x118(0x68)

	void OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, enum class ESkillCheckCustomType Type, struct ADBDPlayer* Player); // Function DBDGameplay.StruggleComponent.OnSkillCheckEnd // (Final|Native|Private) // @ game+0x4d5ed40
	void Authority_TryActivateSkillCheck(); // Function DBDGameplay.StruggleComponent.Authority_TryActivateSkillCheck // (Final|Native|Private) // @ game+0x4d5e820
};

// Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider
// Size: 0x30 (Inherited: 0x30)
struct USurvivorAimStanceCameraDirectionProvider : UAimDirectionProvider {
};

// Class DBDGameplay.SurvivorAimStateComponent
// Size: 0x120 (Inherited: 0xb8)
struct USurvivorAimStateComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct ACollectable* _aimableCollectable; // 0xd0(0x08)
	char pad_D8[0x48]; // 0xd8(0x48)
};

// Class DBDGameplay.TerrorRadiusAudioFeedbackComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UTerrorRadiusAudioFeedbackComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class DBDGameplay.TerrorRadiusBPMComponent
// Size: 0x110 (Inherited: 0xb8)
struct UTerrorRadiusBPMComponent : UActorComponent {
	char pad_B8[0x58]; // 0xb8(0x58)
};

// Class DBDGameplay.TerrorRadiusEmitterFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTerrorRadiusEmitterFunctionLibrary : UBlueprintFunctionLibrary {

	int32_t GetActiveFakeTerrorRadiusEmittersCount(struct UObject* WorldContextObject); // Function DBDGameplay.TerrorRadiusEmitterFunctionLibrary.GetActiveFakeTerrorRadiusEmittersCount // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x4d5e890
};

// Class DBDGameplay.TerrorRadiusReceiverComponent
// Size: 0x1d0 (Inherited: 0xb8)
struct UTerrorRadiusReceiverComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct UCurveFloat* _trVerticalDistanceFactor; // 0xe8(0x08)
	float _heartbeatSmoothingInterpolationSpeed; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FMulticastInlineDelegate OnIsInTerrorRadiusChanged; // 0xf8(0x10)
	char pad_108[0xc8]; // 0x108(0xc8)

	void OnIsInTerrorRadiusChanged__DelegateSignature(); // DelegateFunction DBDGameplay.TerrorRadiusReceiverComponent.OnIsInTerrorRadiusChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsInTerrorRadiusRange(); // Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadiusRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5eaf0
	bool IsInTerrorRadius(); // Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d5eac0
};

// Class DBDGameplay.TerrorRadiusScreenIndicatorComponent
// Size: 0x2f0 (Inherited: 0x230)
struct UTerrorRadiusScreenIndicatorComponent : UScreenIndicatorWorldMarkerComponent {
	struct TArray<struct FHideHeartIndicatorWithDelay> _hideHeartIndicatorWithDelay; // 0x230(0x10)
	char pad_240[0xb0]; // 0x240(0xb0)

	void OnHeartStateChanged(struct FGameplayTag heartState); // Function DBDGameplay.TerrorRadiusScreenIndicatorComponent.OnHeartStateChanged // (Final|Native|Private) // @ game+0x4d617a0
};

// Class DBDGameplay.TerrorRadiusVisualFeedbackComponent
// Size: 0x170 (Inherited: 0xb8)
struct UTerrorRadiusVisualFeedbackComponent : UActorComponent {
	struct FMulticastInlineDelegate OnHeartStateChanged; // 0xb8(0x10)
	struct TArray<struct FTerrorRadiusVisualIndicatorHeartStateRange> _heartStateRanges; // 0xc8(0x10)
	struct TArray<struct FGameplayTag> _hideHeartStateTags; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnHeartBeat; // 0xe8(0x10)
	char pad_F8[0x78]; // 0xf8(0x78)
};

// Class DBDGameplay.TracingConeFlashlightableLightingStrategy
// Size: 0x38 (Inherited: 0x30)
struct UTracingConeFlashlightableLightingStrategy : UFlashlightableLightingStrategy {
	int32_t _aroundConeCircleTraceCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class DBDGameplay.UnhookedSurvivorTrackerComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UUnhookedSurvivorTrackerComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
};

// Class DBDGameplay.VisibleHatchRangeTrackerStrategy
// Size: 0x98 (Inherited: 0x70)
struct UVisibleHatchRangeTrackerStrategy : URangeToActorsTrackerStrategy {
	char pad_70[0x28]; // 0x70(0x28)
};

// Class DBDGameplay.WiggleComponent
// Size: 0x248 (Inherited: 0xb8)
struct UWiggleComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnFailSkillCheckAudioEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnMissSkillCheckAudioEvent; // 0xd0(0x10)
	struct FString AUDIO_EVENT_SKILL_CHECK_WARNING; // 0xe0(0x10)
	struct FString AUDIO_EVENT_SKILL_CHECK_GOOD; // 0xf0(0x10)
	struct FString AUDIO_EVENT_SKILL_CHECK_GREAT; // 0x100(0x10)
	struct UChargeableComponent* _wiggleProgress; // 0x110(0x08)
	struct TWeakObjectPtr<struct ASlasherPlayer> _killerWigglingFrom; // 0x118(0x08)
	struct TWeakObjectPtr<struct UInputComponent> _inputComponent; // 0x120(0x08)
	char pad_128[0x110]; // 0x128(0x110)
	float _wiggleInputLockTime; // 0x238(0x04)
	char pad_23C[0xc]; // 0x23c(0x0c)

	void Server_OnWiggleEnd(); // Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4af1ac0
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, enum class ESkillCheckCustomType Type, struct ADBDPlayer* Player); // Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd // (Final|Native|Private) // @ game+0x4d621f0
	void OnWiggleInput(); // Function DBDGameplay.WiggleComponent.OnWiggleInput // (Final|Native|Private) // @ game+0x4d621d0
	void OnWiggleEnd(); // Function DBDGameplay.WiggleComponent.OnWiggleEnd // (Final|Native|Private) // @ game+0x4d621b0
	void OnPlayerPickedUpStart(struct ADBDPlayer* picker); // Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart // (Final|Native|Private) // @ game+0x4d61f50
	void OnPlayerPickedUpEnd(struct ADBDPlayer* picker); // Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd // (Final|Native|Private) // @ game+0x4d61ec0
	void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, enum class ESkillCheckCustomType Type, struct ADBDPlayer* Player); // Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd // (Final|Native|Private) // @ game+0x4d61d00
	void OnLevelReadyToPlay(); // Function DBDGameplay.WiggleComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4d61960
	void OnKeyBindingsChanged(); // Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged // (Final|Native|Private) // @ game+0x4d61940
	void OnHideWiggleSkillCheck(enum class ESkillCheckCustomType Type); // Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck // (Final|Native|Private) // @ game+0x4d61840
	struct UChargeableComponent* GetWiggleChargeable(); // Function DBDGameplay.WiggleComponent.GetWiggleChargeable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d61770
	void DBD_SetWiggleProgress(float ProgressPercent); // Function DBDGameplay.WiggleComponent.DBD_SetWiggleProgress // (Final|Exec|Native|Public|Const) // @ game+0x46a2490
	void Authority_TutorialEndWiggle(); // Function DBDGameplay.WiggleComponent.Authority_TutorialEndWiggle // (Final|Native|Public|BlueprintCallable) // @ game+0x4d61750
	void Authority_AddWiggleCharge(float ChargeAmount); // Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge // (Final|Native|Public|BlueprintCallable) // @ game+0x4d61500
};

// Class DBDGameplay.WiggleFreeComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UWiggleFreeComponent : UActorComponent {
	struct ASlasherPlayer* _killerWigglingFrom; // 0xb8(0x08)
	char pad_C0[0x28]; // 0xc0(0x28)

	void Authority_OnWiggleEnd(); // Function DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd // (Final|Native|Private) // @ game+0x4d61730
	void Authority_OnPlayerPickedUpEnd(struct ADBDPlayer* picker); // Function DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd // (Final|Native|Private) // @ game+0x4d616a0
	void Authority_OnLevelReadyToPlay(); // Function DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4d61680
	void Authority_OnChargeableCompleteEvent(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent // (Final|Native|Private|HasOutParms) // @ game+0x4d61580
};

// Class DBDGameplay.WiggleMotionComponent
// Size: 0x160 (Inherited: 0xb8)
struct UWiggleMotionComponent : UActorComponent {
	struct ADBDPlayer* _carriedPlayer; // 0xb8(0x08)
	struct UDBDCharacterMovementComponent* _ownerMovementComponent; // 0xc0(0x08)
	char pad_C8[0x48]; // 0xc8(0x48)
	struct FDBDTunableRowHandle _goodSkillCheckBumpsAmplitude; // 0x110(0x28)
	struct FDBDTunableRowHandle _greatSkillCheckBumpsAmplitude; // 0x138(0x28)

	void SetIsBeingWiggled(bool isBeingWiggled); // Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled // (Final|Native|Public|BlueprintCallable) // @ game+0x4d62690
	void Server_SetIsBeingWiggled(bool isBeingWiggled); // Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4d62570
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, enum class ESkillCheckCustomType Type, struct ADBDPlayer* Player); // Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd // (Final|Native|Private) // @ game+0x4d623b0
	void OnSurvivorRemoved(struct ADBDPlayer* Target); // Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved // (Final|Native|Private) // @ game+0x4d62120
	void OnSurvivorPickedUp(struct ADBDPlayer* Target); // Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp // (Final|Native|Private) // @ game+0x4d62090
	void OnHideWiggleSkillCheck(enum class ESkillCheckCustomType Type); // Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck // (Final|Native|Private) // @ game+0x4d618c0
};

// Class DBDGameplay.WormholeFatherDoorAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UWormholeFatherDoorAnimInstance : UAnimInstance {
	bool _isOpened; // 0x2c0(0x01)
	char pad_2C1[0xf]; // 0x2c1(0x0f)

	void OnStateChanged(bool HasBeenHacked); // Function DBDGameplay.WormholeFatherDoorAnimInstance.OnStateChanged // (Final|Native|Private) // @ game+0x4d62000
};

// Class DBDGameplay.WormholeFatherHackingComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UWormholeFatherHackingComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate Cosmetic_OnHasBeenHackedChanged; // 0xd0(0x10)
	bool _hasBeenHacked; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	void SetHasBeenHacked(bool HasBeenHacked); // Function DBDGameplay.WormholeFatherHackingComponent.SetHasBeenHacked // (Final|Native|Public|BlueprintCallable) // @ game+0x4d62600
	void OnWrmFatherHackedStateChangedDelegate__DelegateSignature(bool HasBeenHacked); // DelegateFunction DBDGameplay.WormholeFatherHackingComponent.OnWrmFatherHackedStateChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnRep_HasBeenHacked(); // Function DBDGameplay.WormholeFatherHackingComponent.OnRep_HasBeenHacked // (Final|Native|Protected|Const) // @ game+0x4d61fe0
	bool HasBeenHacked(); // Function DBDGameplay.WormholeFatherHackingComponent.HasBeenHacked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4696e90
};

// Class DBDGameplay.WormholeFatherKeyCardOutlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xe0)
struct UWormholeFatherKeyCardOutlineUpdateStrategy : USurvivorCollectableOutlineUpdateStrategy {
};

// Class DBDGameplay.WormholeFatherRoomZoneOverlap
// Size: 0x260 (Inherited: 0x230)
struct AWormholeFatherRoomZoneOverlap : AActor {
	struct USpherePlayerOverlapComponent* _wormholeFatherRoomZone; // 0x230(0x08)
	char pad_238[0x28]; // 0x238(0x28)

	void OnOverlapExit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DBDGameplay.WormholeFatherRoomZoneOverlap.OnOverlapExit // (Final|Native|Protected) // @ game+0x4d61ba0
	void OnOverlapEnter(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DBDGameplay.WormholeFatherRoomZoneOverlap.OnOverlapEnter // (Final|Native|Protected|HasOutParms) // @ game+0x4d61980
};

// Class DBDGameplay.WormholeFatherTerminal
// Size: 0x340 (Inherited: 0x338)
struct AWormholeFatherTerminal : AInteractable {
	struct USceneComponent* _wormholeKeyCardAttachment; // 0x338(0x08)
};

// Class DBDGameplay.WrmFatherDeadBody
// Size: 0x250 (Inherited: 0x230)
struct AWrmFatherDeadBody : AActor {
	struct UStaticMeshComponent* _wrmFatherDeadBodyStaticMesh; // 0x230(0x08)
	struct USceneComponent* _wrmFatherKeyCardAttachment; // 0x238(0x08)
	struct AFatherKeyCard* _wrmFatherEasterEggKeyCardStaticClass; // 0x240(0x08)
	struct AActor* _wrmFatherEasterEggSpawnedKeyCard; // 0x248(0x08)
};

