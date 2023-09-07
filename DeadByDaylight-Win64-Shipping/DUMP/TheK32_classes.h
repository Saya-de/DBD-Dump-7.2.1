// Class TheK32.InK32PodZoneLingeringEffect
// Size: 0x458 (Inherited: 0x3b8)
struct UInK32PodZoneLingeringEffect : UBaseLingeringStatusEffect {
	struct FDBDTunableRowHandle _range; // 0x3b8(0x28)
	struct TArray<struct AK32KillerPod*> _podsInRange; // 0x3e0(0x10)
	char pad_3F0[0x68]; // 0x3f0(0x68)

	void Authority_OnKillerPodDisabledChanged(bool IsDisabled); // Function TheK32.InK32PodZoneLingeringEffect.Authority_OnKillerPodDisabledChanged // (Final|Native|Private) // @ game+0x5955d10
	void Authority_OnKillerPodAcquiredChanged(bool IsAcquired); // Function TheK32.InK32PodZoneLingeringEffect.Authority_OnKillerPodAcquiredChanged // (Final|Native|Private) // @ game+0x5955c80
};

// Class TheK32.K32AnimInstance
// Size: 0x670 (Inherited: 0x610)
struct UK32AnimInstance : UKillerAnimInstance {
	bool _isAimingPodPlacement; // 0x610(0x01)
	bool _isShootingPod; // 0x611(0x01)
	bool _isInOverclockMode; // 0x612(0x01)
	bool _isTeleporting; // 0x613(0x01)
	bool _isControllingPod; // 0x614(0x01)
	bool _isTeleportingFromKillerPovWithInAntiCamp; // 0x615(0x01)
	char pad_616[0x2]; // 0x616(0x02)
	float _chargeKillerProjectileSpawnPercent; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct UStatusEffect* _overclockStatusEffectClass; // 0x620(0x08)
	char pad_628[0x48]; // 0x628(0x48)

	void ResetIsShootingPod(); // Function TheK32.K32AnimInstance.ResetIsShootingPod // (Final|Native|Protected|BlueprintCallable) // @ game+0x59164f0
	void OnGameEventReceived(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK32.K32AnimInstance.OnGameEventReceived // (Final|Native|Private|HasOutParms) // @ game+0x59562c0
};

// Class TheK32.K32AntiCampZoneIdentifierComponent
// Size: 0xf0 (Inherited: 0xf0)
struct UK32AntiCampZoneIdentifierComponent : UObjectPlacementValidationWithRestrictionStrategy {
};

// Class TheK32.K32AssimilationAnimInstance
// Size: 0x320 (Inherited: 0x2d0)
struct UK32AssimilationAnimInstance : UDynamicAccessoryAnimInstance {
	bool _isMale; // 0x2d0(0x01)
	bool _isBeingMoried; // 0x2d1(0x01)
	bool _isDeadOrInParadise; // 0x2d2(0x01)
	bool _isMoving; // 0x2d3(0x01)
	bool _isRunning; // 0x2d4(0x01)
	bool _isCrawling; // 0x2d5(0x01)
	bool _isRetrievingItem; // 0x2d6(0x01)
	bool _isInAir; // 0x2d7(0x01)
	bool _isHealing; // 0x2d8(0x01)
	bool _isBeingMended; // 0x2d9(0x01)
	bool _isBeingHooked; // 0x2da(0x01)
	bool _isBeingHealed; // 0x2db(0x01)
	bool _isCleansingTotem; // 0x2dc(0x01)
	bool _isOwnerUsingGesture; // 0x2dd(0x01)
	bool _isOwnerEscapingWithHatch; // 0x2de(0x01)
	bool _isInteractingWithLocker; // 0x2df(0x01)
	bool _isInteractingWithChest; // 0x2e0(0x01)
	bool _isAssimilated; // 0x2e1(0x01)
	bool _isDestroyedByEmp; // 0x2e2(0x01)
	bool _isDestroyedByHook; // 0x2e3(0x01)
	bool _isDestroyedByTeleport; // 0x2e4(0x01)
	bool _isOwnerCrouching; // 0x2e5(0x01)
	bool _isOwnerInjured; // 0x2e6(0x01)
	bool _isOwnerKO; // 0x2e7(0x01)
	bool _isOwnerInCloset; // 0x2e8(0x01)
	bool _isOwnerExitingLocker; // 0x2e9(0x01)
	bool _isOwnerBeingCarried; // 0x2ea(0x01)
	bool _isOwnerVaulting; // 0x2eb(0x01)
	bool _isOwnerBeingPulledFromCloset; // 0x2ec(0x01)
	bool _isBeingLookedAtByKillerPod; // 0x2ed(0x01)
	char pad_2EE[0x32]; // 0x2ee(0x32)

	void ResetIsDestroyedByHook(); // Function TheK32.K32AssimilationAnimInstance.ResetIsDestroyedByHook // (Final|Native|Public|BlueprintCallable) // @ game+0x5956900
	void ResetIsDestroyedByEmp(); // Function TheK32.K32AssimilationAnimInstance.ResetIsDestroyedByEmp // (Final|Native|Public|BlueprintCallable) // @ game+0x59568e0
};

// Class TheK32.K32BaseProjectile
// Size: 0x340 (Inherited: 0x230)
struct AK32BaseProjectile : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x238(0x10)
	struct FDBDTunableRowHandle _speedInMeterPerSecond; // 0x248(0x28)
	struct FDBDTunableRowHandle _hitDistance; // 0x270(0x28)
	char pad_298[0x98]; // 0x298(0x98)
	bool _isAcquiredFromPool; // 0x330(0x01)
	char pad_331[0xf]; // 0x331(0x0f)

	void OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool); // Function TheK32.K32BaseProjectile.OnRep_IsAcquiredFromPool // (Final|Native|Private) // @ game+0x5956530
	void Cosmetic_OnProjectileVisible(); // Function TheK32.K32BaseProjectile.Cosmetic_OnProjectileVisible // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnProjectileHidden(); // Function TheK32.K32BaseProjectile.Cosmetic_OnProjectileHidden // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32CollectItemInItemBoxInteraction
// Size: 0x680 (Inherited: 0x660)
struct UK32CollectItemInItemBoxInteraction : UCollectItemInteraction {
	struct AK32ItemBox* _owningItemBox; // 0x658(0x08)
	char pad_668[0x18]; // 0x668(0x18)
};

// Class TheK32.K32Emp
// Size: 0x6f8 (Inherited: 0x510)
struct AK32Emp : ABaseCamperCollectable {
	char pad_510[0x8]; // 0x510(0x08)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x518(0x10)
	struct FVector _customStrafingOffset; // 0x528(0x0c)
	char pad_534[0x4]; // 0x534(0x04)
	struct FDBDTunableRowHandle _strafingOffsetMultiplier; // 0x538(0x28)
	struct UK32EmpInteraction* _empInteraction; // 0x560(0x08)
	struct UChargeableComponent* _empInteractionChargeable; // 0x568(0x08)
	struct FDBDTunableRowHandle _empInteractionSecondsToCharge; // 0x570(0x28)
	struct FDBDTunableRowHandle _empRange; // 0x598(0x28)
	struct FDBDTunableRowHandle _empAmmoCount; // 0x5c0(0x28)
	struct UStatusEffect* _revealToSurvivorStatusEffectClass; // 0x5e8(0x08)
	struct TArray<struct ACamperPlayer*> _authority_assimilatedSurvivorsInRange; // 0x5f0(0x10)
	struct TArray<struct AK32KillerPod*> _authority_podsInRange; // 0x600(0x10)
	int32_t _numTargetsInRange; // 0x610(0x04)
	bool _isVisible; // 0x614(0x01)
	bool _isAcquiredFromPool; // 0x615(0x01)
	char pad_616[0x2]; // 0x616(0x02)
	struct TMap<struct ADBDPlayer*, struct UStatusEffect*> _revealToSurvivorStatusEffects; // 0x618(0x50)
	struct ADBDPlayer* _previousCollector; // 0x668(0x08)
	char pad_670[0x88]; // 0x670(0x88)

	void SetComponentContextProviders(); // Function TheK32.K32Emp.SetComponentContextProviders // (Final|Native|Private) // @ game+0x5956920
	void OnRep_NumTargetsInRange(); // Function TheK32.K32Emp.OnRep_NumTargetsInRange // (Final|Native|Private) // @ game+0x59566b0
	void OnRep_IsVisible(bool previousIsVisible); // Function TheK32.K32Emp.OnRep_IsVisible // (Final|Native|Private) // @ game+0x5956620
	void OnRep_IsAcquiredFromPool(); // Function TheK32.K32Emp.OnRep_IsAcquiredFromPool // (Final|Native|Private) // @ game+0x59565c0
	void OnEmpInteractionFinished(struct ADBDPlayer* interactingPlayer); // Function TheK32.K32Emp.OnEmpInteractionFinished // (Final|Native|Private) // @ game+0x5956230
	void OnEmpInteractionEntered(struct ADBDPlayer* interactingPlayer); // Function TheK32.K32Emp.OnEmpInteractionEntered // (Final|Native|Private) // @ game+0x59561a0
	void Multicast_UseEmp(int32_t numAffectedTargets, struct ADBDPlayer* interactingPlayer); // Function TheK32.K32Emp.Multicast_UseEmp // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5955f50
	void Cosmetic_OnVisibilityChanged(bool previousIsVisible, bool IsVisible); // Function TheK32.K32Emp.Cosmetic_OnVisibilityChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPickedUp(); // Function TheK32.K32Emp.Cosmetic_OnPickedUp // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnNumTargetsInRangeChanged(int32_t numberOfAffectedTargets); // Function TheK32.K32Emp.Cosmetic_OnNumTargetsInRangeChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnEmpInteractionStarted(); // Function TheK32.K32Emp.Cosmetic_OnEmpInteractionStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnEmpInteractionFinished(int32_t numberOfAffectedTargets, struct ADBDPlayer* interactingPlayer); // Function TheK32.K32Emp.Cosmetic_OnEmpInteractionFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnEmpInteractionCancelled(); // Function TheK32.K32Emp.Cosmetic_OnEmpInteractionCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDropped(); // Function TheK32.K32Emp.Cosmetic_OnDropped // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32EmpInteraction
// Size: 0x780 (Inherited: 0x760)
struct UK32EmpInteraction : UChargeableInteractionDefinition {
	char pad_760[0x10]; // 0x760(0x10)
	struct UCurveFloat* _chargingSpeedCurve; // 0x770(0x08)
	char pad_778[0x8]; // 0x778(0x08)
};

// Class TheK32.K32EmpScoreComponent
// Size: 0x260 (Inherited: 0xb8)
struct UK32EmpScoreComponent : UActorComponent {
	struct FDBDTunableRowHandle _minPodsRemovedForManyPodsRemovedScoreEvent; // 0xb8(0x28)
	struct FDBDTunableRowHandle _minUnhookedSurvivorAssimilationsRemovedForManyCleansedScoreEvent; // 0xe0(0x28)
	struct FDBDTunableRowHandle _minHookedSurvivorAssimilationsRemovedForManyCleansedScoreEvent; // 0x108(0x28)
	struct FDBDTunableRowHandle _basePodRemovalScoreValue; // 0x130(0x28)
	struct UCurveFloat* _podRemovedScoreEventDepreciationCurve; // 0x158(0x08)
	struct UCurveFloat* _unhookedSurvivorsCleansedScoreEventDepreciationCurve; // 0x160(0x08)
	struct UCurveFloat* _hookedSurvivorsCleansedScoreEventDepreciationCurve; // 0x168(0x08)
	char pad_170[0xf0]; // 0x170(0xf0)
};

// Class TheK32.K32GameStateComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UK32GameStateComponent : UActorComponent {
	struct TArray<struct AK32ItemBox*> _k32ItemBox; // 0xb8(0x10)
};

// Class TheK32.K32ItemBox
// Size: 0x3f8 (Inherited: 0x338)
struct AK32ItemBox : AInteractable {
	char pad_338[0x8]; // 0x338(0x08)
	struct UChargeableComponent* _chargeable; // 0x340(0x08)
	struct ACollectable* _spawnedItem; // 0x348(0x08)
	struct USceneComponent* _containingItemSpawnPoint; // 0x350(0x08)
	struct USceneComponent* _itemDropPoint; // 0x358(0x08)
	enum class EK32ItemBoxState _state; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UK32ItemBoxSpeedUpInteraction* _itemBoxSpeedUpInteraction; // 0x368(0x08)
	struct UInteractor* _interactor; // 0x370(0x08)
	struct UPrimitiveComponent* _interactionZone; // 0x378(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x380(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent; // 0x388(0x08)
	struct FDBDTunableRowHandle _inProgressDuration; // 0x390(0x28)
	struct FDBDTunableRowHandle _addon12ChargeTimeExtension; // 0x3b8(0x28)
	bool _isSurvivorInteracting; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct ADBDPlayer* _survivorInteracting; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void OnRep_State(); // Function TheK32.K32ItemBox.OnRep_State // (Final|Native|Private) // @ game+0x59568c0
	void OnRep_SpawnedItem(); // Function TheK32.K32ItemBox.OnRep_SpawnedItem // (Final|Native|Private) // @ game+0x59568a0
	void OnRep_IsSurvivorInteracting(); // Function TheK32.K32ItemBox.OnRep_IsSurvivorInteracting // (Final|Native|Private) // @ game+0x5956600
	void OnChargeableCompleteEvent(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function TheK32.K32ItemBox.OnChargeableCompleteEvent // (Final|Native|Private|HasOutParms) // @ game+0x5956020
	void Multicast_SetIsChargeTimeExtended(bool isAddonExtendingFirstActivationTimer); // Function TheK32.K32ItemBox.Multicast_SetIsChargeTimeExtended // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54ae4c0
	void Cosmetic_OnSurvivorInteractingChanged(bool IsInteracting); // Function TheK32.K32ItemBox.Cosmetic_OnSurvivorInteractingChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStateChanged(enum class EK32ItemBoxState NewState); // Function TheK32.K32ItemBox.Cosmetic_OnStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnItemPickup(struct ADBDPlayer* Player); // Function TheK32.K32ItemBox.Authority_OnItemPickup // (Final|Native|Private) // @ game+0x5955bf0
};

// Class TheK32.K32ItemBoxAnimInstance
// Size: 0x300 (Inherited: 0x2f0)
struct UK32ItemBoxAnimInstance : UDBDBaseAnimInstance {
	struct AK32ItemBox* _owningItemBox; // 0x2f0(0x08)
	enum class EK32ItemBoxState _currentState; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
};

// Class TheK32.K32ItemBoxIterativeWeightAdjustmentStrategy
// Size: 0x48 (Inherited: 0x30)
struct UK32ItemBoxIterativeWeightAdjustmentStrategy : UIterativeWeightAdjustmentStrategy {
	struct TArray<struct UActorSpawner*> _selectedSpawners; // 0x30(0x10)
	struct UCurveFloat* _penaltyFromDistanceToClosestK32ItemBox; // 0x40(0x08)
};

// Class TheK32.K32ItemBoxManagerComponent
// Size: 0x108 (Inherited: 0xb8)
struct UK32ItemBoxManagerComponent : UActorComponent {
	struct FDBDTunableRowHandle _initialNumberOfInProgressBoxes; // 0xb8(0x28)
	struct TArray<struct AK32ItemBox*> _itemBoxes; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)

	void Authority_OnLevelReadyToPlay(); // Function TheK32.K32ItemBoxManagerComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5955da0
	void Authority_OnItemBoxDeactivated(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK32.K32ItemBoxManagerComponent.Authority_OnItemBoxDeactivated // (Final|Native|Private|HasOutParms) // @ game+0x5955ae0
};

// Class TheK32.K32ItemBoxOutlineUpdateStrategy
// Size: 0x170 (Inherited: 0xc0)
struct UK32ItemBoxOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FTunableStat _distanceToShowOutline; // 0xc0(0x80)
	struct FDBDTunableRowHandle _isOutlineVisibleToSurvivorsWithEmp; // 0x140(0x28)
	char pad_168[0x8]; // 0x168(0x08)

	void OnDistanceStatValueUpdated(float distance); // Function TheK32.K32ItemBoxOutlineUpdateStrategy.OnDistanceStatValueUpdated // (Final|Native|Private) // @ game+0x5956120
};

// Class TheK32.K32ItemBoxSpeedUpInteraction
// Size: 0x7f0 (Inherited: 0x760)
struct UK32ItemBoxSpeedUpInteraction : UChargeableInteractionDefinition {
	char pad_760[0x10]; // 0x760(0x10)
	struct FTunableStat _interactionProgressMultiplier; // 0x770(0x80)

	void OnLevelReadyToPlay(); // Function TheK32.K32ItemBoxSpeedUpInteraction.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5956510
};

// Class TheK32.K32KillerPod
// Size: 0x418 (Inherited: 0x230)
struct AK32KillerPod : AActor {
	char pad_230[0x18]; // 0x230(0x18)
	struct FMulticastInlineDelegate OnDisabledChanged; // 0x248(0x10)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x258(0x10)
	struct UStaticMeshComponent* _overlapTestingMeshComponent; // 0x268(0x08)
	struct UMapActorComponent* _mapActorComponent; // 0x270(0x08)
	struct FTunableStat _podDisableTime; // 0x278(0x80)
	struct FDBDTunableRowHandle _addon14Delay; // 0x2f8(0x28)
	struct FK32KillerPodSettings _settings; // 0x320(0x58)
	bool _isAcquiredFromPool; // 0x378(0x01)
	char pad_379[0x77]; // 0x379(0x77)
	struct UK32PodDangerPredictionComponent* _dangerPredictionComponent; // 0x3f0(0x08)
	struct UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x3f8(0x08)
	char pad_400[0x18]; // 0x400(0x18)

	void OnVisibilityChanged(struct FK32KillerPodSettings previousSettings, struct FK32KillerPodSettings Settings); // Function TheK32.K32KillerPod.OnVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_Settings(struct FK32KillerPodSettings previousSettings); // Function TheK32.K32KillerPod.OnRep_Settings // (Final|Native|Private) // @ game+0x59566d0
	void OnRep_IsAcquiredFromPool(); // Function TheK32.K32KillerPod.OnRep_IsAcquiredFromPool // (Final|Native|Private) // @ game+0x59565e0
	void OnLevelReadyToPlay(); // Function TheK32.K32KillerPod.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x59564f0
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK32.K32KillerPod.OnKillerSet // (Final|Native|Private) // @ game+0x5956460
	void OnKillerLocallyObservedChanged(bool isKillerLocallyObserved); // Function TheK32.K32KillerPod.OnKillerLocallyObservedChanged // (Final|Native|Private) // @ game+0x59563d0
	void Multicast_OnPodDisabled(); // Function TheK32.K32KillerPod.Multicast_OnPodDisabled // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54ac490
	void Multicast_OnDestroyedByRecycle(); // Function TheK32.K32KillerPod.Multicast_OnDestroyedByRecycle // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55cddb0
	void Multicast_OnDestroyedByManualRemoval(); // Function TheK32.K32KillerPod.Multicast_OnDestroyedByManualRemoval // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5819bb0
	void Multicast_OnDestroyedByEmp(struct ADBDPlayer* destroyingSurvivor); // Function TheK32.K32KillerPod.Multicast_OnDestroyedByEmp // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5955ec0
	struct FK32KillerPodSettings GetSettings(); // Function TheK32.K32KillerPod.GetSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5955dc0
	void Cosmetic_OnSettingsChanged(struct FK32KillerPodSettings previousSettings, struct FK32KillerPodSettings Settings); // Function TheK32.K32KillerPod.Cosmetic_OnSettingsChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDisabledChanged(struct FK32KillerPodSettings previousSettings, struct FK32KillerPodSettings Settings); // Function TheK32.K32KillerPod.Cosmetic_OnDisabledChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDestroyedByRecycle(); // Function TheK32.K32KillerPod.Cosmetic_OnDestroyedByRecycle // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDestroyedByManualRemoval(); // Function TheK32.K32KillerPod.Cosmetic_OnDestroyedByManualRemoval // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDestroyedByEmp(struct ADBDPlayer* destroyingSurvivor); // Function TheK32.K32KillerPod.Cosmetic_OnDestroyedByEmp // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnControlledByKillerChanged(struct FK32KillerPodSettings previousSettings, struct FK32KillerPodSettings Settings); // Function TheK32.K32KillerPod.Cosmetic_OnControlledByKillerChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAddon14Started(); // Function TheK32.K32KillerPod.Cosmetic_OnAddon14Started // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_IsBlockingPodSpawningChanged(bool isBlocking, float distanceBetweenPods); // Function TheK32.K32KillerPod.Cosmetic_IsBlockingPodSpawningChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnDisabledTimerDone(); // Function TheK32.K32KillerPod.Authority_OnDisabledTimerDone // (Final|Native|Private) // @ game+0x5955ac0
};

// Class TheK32.K32KillerPodOutlineUpdateStrategy
// Size: 0x110 (Inherited: 0xc0)
struct UK32KillerPodOutlineUpdateStrategy : UOutlineUpdateStrategy {
	float _lastPodShowTime; // 0xc0(0x04)
	struct FLinearColor _revealedColorToSurvivor; // 0xc4(0x10)
	char pad_D4[0x3c]; // 0xd4(0x3c)
};

// Class TheK32.K32KillerPodPool
// Size: 0x2f8 (Inherited: 0x118)
struct UK32KillerPodPool : UAuthoritativeActorPoolComponent {
	struct FTunableStat _availableAmmo; // 0x118(0x80)
	struct FDBDTunableRowHandle _lastControlledPodLingerTime; // 0x198(0x28)
	struct FDBDTunableRowHandle _destroyPodDelay; // 0x1c0(0x28)
	struct FDBDTunableRowHandle _initialDestroyPodDelay; // 0x1e8(0x28)
	struct TWeakObjectPtr<struct AK32KillerPod> _controlledPod; // 0x210(0x08)
	char pad_218[0xe0]; // 0x218(0xe0)

	void OnLingeringLastControlledPodExpired(); // Function TheK32.K32KillerPodPool.OnLingeringLastControlledPodExpired // (Final|Native|Private) // @ game+0x595a5f0
	void OnLevelReadyToPlay(); // Function TheK32.K32KillerPodPool.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x595a5b0
	void OnKillerPodCreated(struct AActor* Actor); // Function TheK32.K32KillerPodPool.OnKillerPodCreated // (Final|Native|Private) // @ game+0x595a470
	void OnKillerPodAcquiredChanged(bool IsAcquired); // Function TheK32.K32KillerPodPool.OnKillerPodAcquiredChanged // (Final|Native|Private) // @ game+0x595a3e0
	void Authority_OnDestroyPodDelayTimerDone(struct ADBDPlayer* launchingSurvivor); // Function TheK32.K32KillerPodPool.Authority_OnDestroyPodDelayTimerDone // (Final|Native|Private) // @ game+0x5959d20
};

// Class TheK32.K32KillerPodRestrictedZone
// Size: 0x230 (Inherited: 0x230)
struct AK32KillerPodRestrictedZone : AActor {

	void OnLevelReadyToPlay(); // Function TheK32.K32KillerPodRestrictedZone.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x595a590
	struct UStaticMeshComponent* GetStaticMesh(); // Function TheK32.K32KillerPodRestrictedZone.GetStaticMesh // (Event|Protected|BlueprintEvent|Const) // @ game+0x5e02c90
};

// Class TheK32.K32KillerPodSpawningComponent
// Size: 0x4b0 (Inherited: 0xb8)
struct UK32KillerPodSpawningComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _podRemovalRange; // 0xd0(0x28)
	struct FDBDTunableRowHandle _maximumRange; // 0xf8(0x28)
	struct FDBDTunableRowHandle _maximumRelativeHeight; // 0x120(0x28)
	struct FDBDTunableRowHandle _podSurfaceDistance; // 0x148(0x28)
	float _worldDetectionTraceSphereSize; // 0x170(0x04)
	float _survivorDetectionSphereSize; // 0x174(0x04)
	float _lineOfSightTraceSphereSize; // 0x178(0x04)
	float _podCollisionToFinalLocationTraceSphereSize; // 0x17c(0x04)
	struct FDBDTunableRowHandle _podInteractableRestrictionRange; // 0x180(0x28)
	struct FDBDTunableRowHandle _podWindowRestrictionRange; // 0x1a8(0x28)
	struct FDBDTunableRowHandle _podGeneratorRestrictionRange; // 0x1d0(0x28)
	float _secondaryHitCheckDistance; // 0x1f8(0x04)
	float _secondaryHitCheckBackDistance; // 0x1fc(0x04)
	float _secondaryHitPitchRotationDegrees; // 0x200(0x04)
	float _secondaryHitYawRotationDegrees; // 0x204(0x04)
	float _floorSearchingLength; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FDBDTunableRowHandle _podSurfaceMinDegreesThreshold; // 0x210(0x28)
	struct FDBDTunableRowHandle _podSurfaceMaxDegreesThreshold; // 0x238(0x28)
	struct FDBDTunableRowHandle _minimumSpawnDistance; // 0x260(0x28)
	struct FDBDTunableRowHandle _requiredAttachmentPoints; // 0x288(0x28)
	float _attachmentPointGridHorizontalAngle; // 0x2b0(0x04)
	float _attachmentPointGridVerticalAngle; // 0x2b4(0x04)
	float _attachmentPointGridLength; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FDBDTunableRowHandle _distanceBetweenPods; // 0x2c0(0x28)
	struct FDBDTunableRowHandle _addon13EffectActivationRange; // 0x2e8(0x28)
	struct FDBDTunableRowHandle _addon13EffectDuration; // 0x310(0x28)
	struct UStatusEffect* _revealSurvivorToKillerStatusEffectClass; // 0x338(0x08)
	struct FDBDTunableRowHandle _attachmentPointsRays; // 0x340(0x28)
	float _validationAllowedDistanceOffset; // 0x368(0x04)
	float _indicatorPointToLocationFactor; // 0x36c(0x04)
	struct FName _traceProfile; // 0x370(0x0c)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FDBDTunableRowHandle _invalidShowDelay; // 0x380(0x28)
	struct FVector _projectileSpawnOffset; // 0x3a8(0x0c)
	float _forwardProjectileSpawnDistance; // 0x3b4(0x04)
	char pad_3B8[0xf8]; // 0x3b8(0xf8)

	void Server_FireKillerProjectile(struct FK32KillerPodSpawningInputData InputData, enum class EK32KillerPodSpawningResult expectedResult); // Function TheK32.K32KillerPodSpawningComponent.Server_FireKillerProjectile // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x595a6c0
	void OnIntroCompleted(); // Function TheK32.K32KillerPodSpawningComponent.OnIntroCompleted // (Final|Native|Private) // @ game+0x595a2a0
	void Multicast_FireKillerProjectile(); // Function TheK32.K32KillerPodSpawningComponent.Multicast_FireKillerProjectile // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	void Cosmetic_OnInvalidPodTriggers(struct FVector& invalidLocation); // Function TheK32.K32KillerPodSpawningComponent.Cosmetic_OnInvalidPodTriggers // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x5e02c90
};

// Class TheK32.K32KillerPodSpawningIndicator
// Size: 0x250 (Inherited: 0x230)
struct AK32KillerPodSpawningIndicator : AActor {
	struct FK32KillerPodSpawningIndicatorSettings _settings; // 0x230(0x1c)
	char pad_24C[0x4]; // 0x24c(0x04)

	struct FK32KillerPodSpawningIndicatorSettings GetSettings(); // Function TheK32.K32KillerPodSpawningIndicator.GetSettings // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5959db0
	void Cosmetic_OnSettingsChanged(struct FK32KillerPodSpawningIndicatorSettings previousSettings, struct FK32KillerPodSpawningIndicatorSettings Settings); // Function TheK32.K32KillerPodSpawningIndicator.Cosmetic_OnSettingsChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32KillerPodTargetIndicator
// Size: 0x250 (Inherited: 0x230)
struct AK32KillerPodTargetIndicator : AActor {
	struct FK32KillerPodTargetIndicatorSettings _settings; // 0x230(0x1c)
	char pad_24C[0x4]; // 0x24c(0x04)

	struct FK32KillerPodTargetIndicatorSettings GetSettings(); // Function TheK32.K32KillerPodTargetIndicator.GetSettings // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5959db0
	void Cosmetic_OnSettingsChanged(struct FK32KillerPodTargetIndicatorSettings previousSettings, struct FK32KillerPodTargetIndicatorSettings Settings); // Function TheK32.K32KillerPodTargetIndicator.Cosmetic_OnSettingsChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32KillerPodTargetingComponent
// Size: 0x110 (Inherited: 0xb8)
struct UK32KillerPodTargetingComponent : UActorComponent {
	char pad_B8[0x58]; // 0xb8(0x58)

	void Cosmetic_Local_NewKillerPodTargeted(struct AK32KillerPod* newTarget); // Function TheK32.K32KillerPodTargetingComponent.Cosmetic_Local_NewKillerPodTargeted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32KillerPodVisionController
// Size: 0x3c8 (Inherited: 0x230)
struct AK32KillerPodVisionController : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct FGameplayTagContainer _allowedInteractionSemancticsWithPodVision; // 0x238(0x20)
	struct FGameplayTagContainer _allowedPodVisionInteractionSemanctic; // 0x258(0x20)
	struct FDBDTunableRowHandle _podViewPitchMinimum; // 0x278(0x28)
	struct FDBDTunableRowHandle _podViewPitchMaximum; // 0x2a0(0x28)
	struct FDBDTunableRowHandle _collisionDisableTime; // 0x2c8(0x28)
	float _observerRotationSpeed; // 0x2f0(0x04)
	float _minTimeBetweenCameraRotationUpdateRPC; // 0x2f4(0x04)
	bool _hasVisionFromKillerPod; // 0x2f8(0x01)
	char pad_2F9[0xcf]; // 0x2f9(0xcf)

	void Server_TakeControlOfPod(struct AK32KillerPod* killerPodToBeControlled); // Function TheK32.K32KillerPodVisionController.Server_TakeControlOfPod // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x595aa10
	void Server_SetCameraOrientation(struct FRotator NewOrientation); // Function TheK32.K32KillerPodVisionController.Server_SetCameraOrientation // (Final|Net|Native|Event|Private|NetServer|HasDefaults) // @ game+0x595a8b0
	void Server_ReleaseControlOfPods(); // Function TheK32.K32KillerPodVisionController.Server_ReleaseControlOfPods // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x3dad230
	void OnRep_HasVisionFromKillerPod(); // Function TheK32.K32KillerPodVisionController.OnRep_HasVisionFromKillerPod // (Final|Native|Private) // @ game+0x595a610
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK32.K32KillerPodVisionController.OnKillerSet // (Final|Native|Private) // @ game+0x595a500
	void OnKillerLocallyObservedChanged(bool isKillerLocallyObserved); // Function TheK32.K32KillerPodVisionController.OnKillerLocallyObservedChanged // (Final|Native|Private) // @ game+0x595a350
	void OnInteractionStarted(struct UInteractionDefinition* Interaction); // Function TheK32.K32KillerPodVisionController.OnInteractionStarted // (Final|Native|Private) // @ game+0x595a210
	void OnControlledPodUnacquiredFromPool(bool IsAcquired); // Function TheK32.K32KillerPodVisionController.OnControlledPodUnacquiredFromPool // (Final|Native|Private) // @ game+0x595a180
	void Multicast_SetLocationAndRotation(struct FVector Location); // Function TheK32.K32KillerPodVisionController.Multicast_SetLocationAndRotation // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x5959fa0
	void Multicast_SetKillerCollisionDisabledForSurvivors(bool IsDisabled); // Function TheK32.K32KillerPodVisionController.Multicast_SetKillerCollisionDisabledForSurvivors // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x54919f0
	void Multicast_SetCameraOrientation(struct FRotator NewOrientation); // Function TheK32.K32KillerPodVisionController.Multicast_SetCameraOrientation // (Final|Net|Native|Event|NetMulticast|Private|HasDefaults) // @ game+0x5959f10
	void Multicast_OnControlledPodDisabledChanged(bool IsDisabled); // Function TheK32.K32KillerPodVisionController.Multicast_OnControlledPodDisabledChanged // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x5491a80
	void Cosmetic_Local_OnTakingControlOfPod(); // Function TheK32.K32KillerPodVisionController.Cosmetic_Local_OnTakingControlOfPod // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_Local_OnReleasingControlOfPod(); // Function TheK32.K32KillerPodVisionController.Cosmetic_Local_OnReleasingControlOfPod // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_Local_OnCurrentPodDisabledChanged(bool IsDisabled); // Function TheK32.K32KillerPodVisionController.Cosmetic_Local_OnCurrentPodDisabledChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnControlledPodDisabledChanged(bool IsDisabled); // Function TheK32.K32KillerPodVisionController.Authority_OnControlledPodDisabledChanged // (Final|Native|Private) // @ game+0x5959c90
	void Authority_OnCollisionDisableTimerComplete(); // Function TheK32.K32KillerPodVisionController.Authority_OnCollisionDisableTimerComplete // (Final|Native|Private) // @ game+0x5959c70
};

// Class TheK32.K32KillerPodVisionLockOnComponent
// Size: 0x300 (Inherited: 0xb8)
struct UK32KillerPodVisionLockOnComponent : UActorComponent {
	float _lineOfSightTraceSphereSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FDBDTunableRowHandle _lockOnScreenCoveragePercentageY; // 0xc0(0x28)
	struct FDBDTunableRowHandle _autoDetectSurvivorRange; // 0xe8(0x28)
	struct FDBDTunableRowHandle _lockOnRange; // 0x110(0x28)
	struct FDBDTunableRowHandle _lingerTime; // 0x138(0x28)
	struct FDBDTunableRowHandle _teleportLockOnTime; // 0x160(0x28)
	struct FDBDTunableRowHandle _assimilationLockOnTime; // 0x188(0x28)
	struct FDBDTunableRowHandle _cooldownTime; // 0x1b0(0x28)
	struct FDBDTunableRowHandle _antiCampLockOnRateMultiplier; // 0x1d8(0x28)
	struct FName _survivorProjectileTargetSocketName; // 0x200(0x0c)
	struct FName _traceProfile; // 0x20c(0x0c)
	float _feetOffsetMultiplier; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct AK32Power* _power; // 0x220(0x08)
	char pad_228[0xd8]; // 0x228(0xd8)

	void Server_SetSurvivorBeingLockedOn(struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32KillerPodVisionLockOnComponent.Server_SetSurvivorBeingLockedOn // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4d51430
	void Server_LaunchAssimilationProjectile(struct ACamperPlayer* TargetSurvivor, struct AK32KillerPod* currentPod); // Function TheK32.K32KillerPodVisionLockOnComponent.Server_LaunchAssimilationProjectile // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x595a7e0
	void Multicast_ShootPodProjectileAtSurvivor(struct AK32KillerPod* originKillerPod, struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32KillerPodVisionLockOnComponent.Multicast_ShootPodProjectileAtSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa6f70
	void Cosmetic_ShootPodProjectileAtSurvivor(struct AK32KillerPod* currentPod, struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_ShootPodProjectileAtSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_Local_OnCooldownStarted(); // Function TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_Local_OnCooldownStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_Local_OnCooldownEnded(); // Function TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_Local_OnCooldownEnded // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_Local_IsChargingChanged(bool IsCharging); // Function TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_Local_IsChargingChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32KillerProjectileSpawnChargeableInteractionDefinition
// Size: 0x880 (Inherited: 0x760)
struct UK32KillerProjectileSpawnChargeableInteractionDefinition : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _reloadTime; // 0x758(0x28)
	struct FDBDTunableRowHandle _secondsToCharge; // 0x780(0x28)
	struct FDBDTunableRowHandle _dechargeRate; // 0x7a8(0x28)
	char pad_7D8[0xa8]; // 0x7d8(0xa8)

	void Cosmetic_OnPodShot(); // Function TheK32.K32KillerProjectileSpawnChargeableInteractionDefinition.Cosmetic_OnPodShot // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32KillerToPodVisionInteractionDefinition
// Size: 0x680 (Inherited: 0x630)
struct UK32KillerToPodVisionInteractionDefinition : UInteractionDefinition {
	char pad_630[0x50]; // 0x630(0x50)
};

// Class TheK32.K32KillerToSurvivorTeleportInteractionDefinition
// Size: 0x8f0 (Inherited: 0x630)
struct UK32KillerToSurvivorTeleportInteractionDefinition : UInteractionDefinition {
	struct FDBDTunableRowHandle _teleportDuration; // 0x630(0x28)
	struct FDBDTunableRowHandle _wakeUpTime; // 0x658(0x28)
	struct FDBDTunableRowHandle _killerCollisionIgnoredLingerTime; // 0x680(0x28)
	struct FDBDTunableRowHandle _teleportDurationExtensionThirdPersonAntiCamp; // 0x6a8(0x28)
	struct FTunableStat _overclockDuration; // 0x6d0(0x80)
	struct FTunableStat _overheatDuration; // 0x750(0x80)
	struct UStatusEffect* _overlockStatusEffect; // 0x7d0(0x08)
	struct UStatusEffect* _overheatStatusEffect; // 0x7d8(0x08)
	float _killerSize; // 0x7e0(0x04)
	float _secondsOfOverclockPerAssimilatedSurvivor; // 0x7e4(0x04)
	char pad_7E8[0x108]; // 0x7e8(0x108)

	void Server_SetTeleportTarget(struct ACamperPlayer* Survivor, struct AK32KillerPod* initiatedPod); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Server_SetTeleportTarget // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x595a940
	void OnTeleportationComplete(struct ADBDPlayer* Player); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.OnTeleportationComplete // (Final|Native|Private) // @ game+0x595a630
	void OnLevelReadyToPlay(); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x595a5d0
	void OnKillerCollisionIngoreLingerComplete(struct ADBDPlayer* Player); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.OnKillerCollisionIngoreLingerComplete // (Final|Native|Private) // @ game+0x595a2c0
	void Multicast_SetTeleportTarget(struct ACamperPlayer* Survivor, struct FVector teleportEndLocation, struct FVector teleportStartLocation, struct AK32KillerPod* initiatedPod); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_SetTeleportTarget // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x595a020
	void Multicast_OnTeleportStarted(struct ADBDPlayer* Player, struct FVector teleportStartLocation, struct FVector teleportEndLocation); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_OnTeleportStarted // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x5959e00
	void Multicast_OnTeleportEnded(struct ADBDPlayer* Player); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_OnTeleportEnded // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56660b0
	void Multicast_DestroyPallet(struct APallet* Pallet); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_DestroyPallet // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57a31d0
	void Cosmetic_OnTeleportStart(struct FVector& teleportEndLocation, struct FVector& teleportStartLocation); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_OnTeleportStart // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportEnd(); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_OnTeleportEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_EnableTeleportVignette(struct ASlasherPlayer* killer); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_EnableTeleportVignette // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DisableTeleportVignette(struct ASlasherPlayer* killer); // Function TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_DisableTeleportVignette // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32OverclockStatusEffectBase
// Size: 0x3f0 (Inherited: 0x350)
struct UK32OverclockStatusEffectBase : UStatusEffect {
	struct UStatusEffect* _overheatStatusEffect; // 0x350(0x08)
	struct FTunableStat _overheatDuration; // 0x358(0x80)
	char pad_3D8[0x18]; // 0x3d8(0x18)

	void Multicast_DestroyPallet(struct APallet* Pallet, struct ASlasherPlayer* killer); // Function TheK32.K32OverclockStatusEffectBase.Multicast_DestroyPallet // (Net|NetReliableNative|Event|NetMulticast|Protected|Const) // @ game+0x4ce3210
};

// Class TheK32.K32OverheatStatusEffectBase
// Size: 0x350 (Inherited: 0x350)
struct UK32OverheatStatusEffectBase : UStatusEffect {
};

// Class TheK32.K32P01
// Size: 0x3e0 (Inherited: 0x3c8)
struct UK32P01 : UPerk {
	struct UStatusEffect* _K32P01ExhaustedStatusEffect; // 0x3c8(0x08)
	float _exhaustionDuration[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)

	float GetExhaustionDurationAtLevel(); // Function TheK32.K32P01.GetExhaustionDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
};

// Class TheK32.K32P02
// Size: 0x408 (Inherited: 0x3c8)
struct UK32P02 : UPerk {
	struct UStatusEffect* _hinderedStatusEffectClass; // 0x3c8(0x08)
	float _perkRange[0x3]; // 0x3d0(0x0c)
	float _hinderedEffectDuration[0x3]; // 0x3dc(0x0c)
	float _perkCooldown[0x3]; // 0x3e8(0x0c)
	char pad_3F4[0x14]; // 0x3f4(0x14)

	float GetPerkRangeAtLevel(); // Function TheK32.K32P02.GetPerkRangeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
	float GetPerkCooldownAtLevel(); // Function TheK32.K32P02.GetPerkCooldownAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd750
	float GetHinderedEffectDurationAtLevel(); // Function TheK32.K32P02.GetHinderedEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf5600
};

// Class TheK32.K32P03
// Size: 0x408 (Inherited: 0x3c8)
struct UK32P03 : UPerk {
	struct UStatusEffect* _undetectableStatusEffect; // 0x3c8(0x08)
	struct UStatusEffect* _hasteStatusEffect; // 0x3d0(0x08)
	float _statusEffectDuration[0x3]; // 0x3d8(0x0c)
	int32_t _generatorsDamagedRequired[0x3]; // 0x3e4(0x0c)
	float _hastePercent; // 0x3f0(0x04)
	float _generatorsDamaged; // 0x3f4(0x04)
	struct AGenerator* _compromisedGenerator; // 0x3f8(0x08)
	struct AGenerator* _lastCompromisedGenerator; // 0x400(0x08)

	void OnRep_CompromisedGenerator(); // Function TheK32.K32P03.OnRep_CompromisedGenerator // (Final|Native|Private) // @ game+0x595e0f0
	float GetStatusEffectDurationAtLevel(); // Function TheK32.K32P03.GetStatusEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf40e0
	float GetHastePercent(); // Function TheK32.K32P03.GetHastePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x595dc10
	void Cosmetic_OnTriggerCompromiseVFX(struct AGenerator* compromisedGenerator); // Function TheK32.K32P03.Cosmetic_OnTriggerCompromiseVFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCompromiseCompletedVFX(struct AGenerator* compromisedGenerator); // Function TheK32.K32P03.Cosmetic_OnCompromiseCompletedVFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32P03IconStrategy
// Size: 0x38 (Inherited: 0x38)
struct UK32P03IconStrategy : UBasePerkIconStrategy {
};

// Class TheK32.K32PodDangerPredictionComponent
// Size: 0x100 (Inherited: 0xd0)
struct UK32PodDangerPredictionComponent : UDBDDangerPredictionComponent {
	float _podMaxRange; // 0xd0(0x04)
	float _podRangeMargin; // 0xd4(0x04)
	float _dangerAreaCostMultiplierForIdlePod; // 0xd8(0x04)
	float _dangerAreaCostMultiplierForActivePod; // 0xdc(0x04)
	float _activePodWeightPenalty; // 0xe0(0x04)
	float _idlePodWeightPenalty; // 0xe4(0x04)
	struct AK32KillerPod* _pod; // 0xe8(0x08)
	struct TArray<struct AActor*> _allInGamePlayers; // 0xf0(0x10)
};

// Class TheK32.K32PodToKillerVisionInteractionDefinition
// Size: 0x6a0 (Inherited: 0x630)
struct UK32PodToKillerVisionInteractionDefinition : UInteractionDefinition {
	struct FDBDTunableRowHandle _regularWakeupTime; // 0x630(0x28)
	struct FDBDTunableRowHandle _antiCampWakeupMultiplier; // 0x658(0x28)
	char pad_680[0x20]; // 0x680(0x20)
};

// Class TheK32.K32PodToPodVisionInteractionDefinition
// Size: 0x670 (Inherited: 0x630)
struct UK32PodToPodVisionInteractionDefinition : UInteractionDefinition {
	enum class EPodVisionTransferDestination _podVisionTransferDestination; // 0x630(0x01)
	char pad_631[0x3f]; // 0x631(0x3f)
};

// Class TheK32.K32Power
// Size: 0x620 (Inherited: 0x4c8)
struct AK32Power : ACollectable {
	struct UInteractor* _interactor; // 0x4c8(0x08)
	struct UBoxPlayerOverlapComponent* _interactionVolume; // 0x4d0(0x08)
	struct UK32PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent; // 0x4d8(0x08)
	struct UK32PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent; // 0x4e0(0x08)
	struct UK32AntiCampZoneIdentifierComponent* _antiCampZoneIdentifierComponent; // 0x4e8(0x08)
	struct AK32KillerPodVisionController* _killerPodVisionControllerClass; // 0x4f0(0x08)
	struct AK32KillerPodTargetIndicator* _killerPodTargetIndicatorClass; // 0x4f8(0x08)
	struct AK32KillerPodSpawningIndicator* _killerPodSpawningIndicatorClass; // 0x500(0x08)
	struct UStatusEffect* _blindnessProtectionStatusEffect; // 0x508(0x08)
	struct UStatusEffect* _undetectableWhileInPodsStatusEffect; // 0x510(0x08)
	struct UStatusEffect* _overclockStatusEffectClass; // 0x518(0x08)
	struct FDBDTunableRowHandle _addon16RecentlyTeleportedTime; // 0x520(0x28)
	struct AK32KillerPodVisionController* _killerPodVisionController; // 0x548(0x08)
	struct AK32KillerPodTargetIndicator* _killerPodTargetIndicator; // 0x550(0x08)
	struct AK32KillerPodSpawningIndicator* _killerPodSpawningIndicator; // 0x558(0x08)
	struct UAimingCrosshairComponent* _aimingCrosshairComponent; // 0x560(0x08)
	struct UChargeableComponent* _killerProjectileSpawnChargeableComponent; // 0x568(0x08)
	struct UAuthoritativeActorPoolComponent* _empPool; // 0x570(0x08)
	struct UK32EmpScoreComponent* _empScoreComponent; // 0x578(0x08)
	char pad_580[0x70]; // 0x580(0x70)
	struct ACamperPlayer* _recentlyTeleportedToSurvivor; // 0x5f0(0x08)
	struct FDBDTunableRowHandle _maxTrackedTimeSinceTeleportToSurvivor; // 0x5f8(0x28)
};

// Class TheK32.K32PowerChargePresentationItemProgressComponent
// Size: 0xe8 (Inherited: 0xc0)
struct UK32PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	char pad_C0[0x28]; // 0xc0(0x28)
};

// Class TheK32.K32PowerChargePresentationPowerFadeComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UK32PowerChargePresentationPowerFadeComponent : UPresentationPowerFadeComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheK32.K32PowerStatusHandlerComponent
// Size: 0x310 (Inherited: 0xb8)
struct UK32PowerStatusHandlerComponent : UActorComponent {
	float _lineOfSightTraceSphereSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FTunableStat _crossAssimilationRange; // 0xc0(0x80)
	struct FTunableStat _crossAssimilationDelay; // 0x140(0x80)
	struct FDBDTunableRowHandle _affectedByPowerCrossAssimilationBuffer; // 0x1c0(0x28)
	struct FName _survivorProjectileTargetSocketName; // 0x1e8(0x0c)
	struct FName _traceProfile; // 0x1f4(0x0c)
	int32_t _maxOldSurvivorLocations; // 0x200(0x04)
	float _survivorLocationOverlapAvoidanceDistance; // 0x204(0x04)
	struct FDBDTunableRowHandle _recentLocationDistanceDelta; // 0x208(0x28)
	struct FDBDTunableRowHandle _assimilationCooldownTime; // 0x230(0x28)
	struct TArray<struct FK32SurvivorStatus> _survivorStatusList; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)
	struct TMap<struct ACamperPlayer*, struct FFastTimer> _assimilationCooldownTimers; // 0x270(0x50)
	char pad_2C0[0x50]; // 0x2c0(0x50)

	void OnRep_SurvivorStatusList(struct TArray<struct FK32SurvivorStatus> oldSurvivorStatus); // Function TheK32.K32PowerStatusHandlerComponent.OnRep_SurvivorStatusList // (Final|Native|Private) // @ game+0x595e110
	void OnIntroCompleted(); // Function TheK32.K32PowerStatusHandlerComponent.OnIntroCompleted // (Final|Native|Private) // @ game+0x595deb0
	void Multicast_SurvivorScream(struct ACamperPlayer* Survivor); // Function TheK32.K32PowerStatusHandlerComponent.Multicast_SurvivorScream // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x5490b20
	void Multicast_OnInRangeOfAssimilationSpreadingSurvivor(struct ACamperPlayer* originatingSurvivor, struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32PowerStatusHandlerComponent.Multicast_OnInRangeOfAssimilationSpreadingSurvivor // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x581dcb0
	void Multicast_OnAssimilationSpreadingToSurvivor(struct ACamperPlayer* originatingSurvivor, struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32PowerStatusHandlerComponent.Multicast_OnAssimilationSpreadingToSurvivor // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4aa6f70
	void Cosmetic_OnInRangeOfAssimilationSpreadingSurvivor(struct ACamperPlayer* originatingSurvivor, struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32PowerStatusHandlerComponent.Cosmetic_OnInRangeOfAssimilationSpreadingSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAssimilationSpreadingToSurvivor(struct ACamperPlayer* originatingSurvivor, struct ACamperPlayer* TargetSurvivor); // Function TheK32.K32PowerStatusHandlerComponent.Cosmetic_OnAssimilationSpreadingToSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAssimilationChanged(struct ACamperPlayer* Survivor, bool IsAssimilated); // Function TheK32.K32PowerStatusHandlerComponent.Cosmetic_OnAssimilationChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BP_SurvivorScream(struct ACamperPlayer* Survivor); // Function TheK32.K32PowerStatusHandlerComponent.BP_SurvivorScream // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function TheK32.K32PowerStatusHandlerComponent.Authority_OnSurvivorAdded // (Final|Native|Private) // @ game+0x595da50
};

// Class TheK32.K32SurvivorAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct UK32SurvivorAnimInstance : UBaseSurvivorAnimInstance {
	bool _isAssimilated; // 0x548(0x01)
	bool _isOwnerBeingCarried; // 0x549(0x01)
	bool _isSpeedingUpEmpGeneration; // 0x54a(0x01)
	bool _isRetrievingItem; // 0x54b(0x01)
	bool _isUsingEmp; // 0x54c(0x01)
	bool _hasBeenAssimilatedByAnotherSurvivor; // 0x54d(0x01)
	bool _hasBeenAssimilatedByKiller; // 0x54e(0x01)
	bool _hasBeenCleansedFromAssimilation; // 0x54f(0x01)
	char pad_558[0x18]; // 0x558(0x18)

	void ResetHasBeenCleansedFromAssimilation(); // Function TheK32.K32SurvivorAnimInstance.ResetHasBeenCleansedFromAssimilation // (Final|Native|Protected|BlueprintCallable) // @ game+0x595e250
	void ResetHasBeenAssimilatedByKiller(); // Function TheK32.K32SurvivorAnimInstance.ResetHasBeenAssimilatedByKiller // (Final|Native|Protected|BlueprintCallable) // @ game+0x595e230
	void ResetHasBeenAssimilatedByAnotherSurvivor(); // Function TheK32.K32SurvivorAnimInstance.ResetHasBeenAssimilatedByAnotherSurvivor // (Final|Native|Protected|BlueprintCallable) // @ game+0x595e210
};

// Class TheK32.K32SurvivorCosmeticHelperActor
// Size: 0x2b8 (Inherited: 0x270)
struct AK32SurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	struct FName _noseJointName; // 0x270(0x0c)
	char pad_27C[0x3c]; // 0x27c(0x3c)

	void OnKillerNoLongerLocksOnToSurvivor(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK32.K32SurvivorCosmeticHelperActor.OnKillerNoLongerLocksOnToSurvivor // (Final|Native|Private|HasOutParms) // @ game+0x595dfe0
	void OnKillerLocksOnToSurvivor(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK32.K32SurvivorCosmeticHelperActor.OnKillerLocksOnToSurvivor // (Final|Native|Private|HasOutParms) // @ game+0x595ded0
	struct FVector GetNoseLocation(); // Function TheK32.K32SurvivorCosmeticHelperActor.GetNoseLocation // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0x595dcc0
	void Cosmetic_OnTeleportStart(struct FVector& teleportStartLocation, struct FVector& teleportEndLocation); // Function TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnTeleportStart // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerNoLongerLocksOnToSurvivor(); // Function TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnKillerNoLongerLocksOnToSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerLocksOnToSurvivor(bool isTargetAssimilated); // Function TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnKillerLocksOnToSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsEffectiveEmpInRangeChanged(bool isEffectiveEmpInRange); // Function TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnIsEffectiveEmpInRangeChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK32.K32SurvivorStatusComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UK32SurvivorStatusComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class TheK32.K32Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK32Utilities : UBlueprintFunctionLibrary {

	bool IsSurvivorAbleToBeAffectedByPower(struct ACamperPlayer* Survivor, struct ASlasherPlayer* killer); // Function TheK32.K32Utilities.IsSurvivorAbleToBeAffectedByPower // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x595dde0
	bool IsPodOutlineAndIndicatorVisible(struct ASlasherPlayer* killer); // Function TheK32.K32Utilities.IsPodOutlineAndIndicatorVisible // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x595dd50
	struct AK32Power* GetK32Power(struct UObject* WorldContextObject); // Function TheK32.K32Utilities.GetK32Power // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x595dc30
	bool DoesEmpReach(struct FVector& launchPosition, struct FVector& targetLocation, float rangeSquared); // Function TheK32.K32Utilities.DoesEmpReach // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x595dae0
};

// Class TheK32.S37P01
// Size: 0x420 (Inherited: 0x3c8)
struct US37P01 : UPerk {
	float _killerRevealedTime[0x3]; // 0x3c8(0x0c)
	float _chaseLingeringTimer[0x3]; // 0x3d4(0x0c)
	struct UStatusEffect* _revealKillerStatusEffectClass; // 0x3e0(0x08)
	struct UStatusEffect* _revealGeneratorStatusEffectClass; // 0x3e8(0x08)
	struct UStatusEffect* _revealGeneratorStatusEffect; // 0x3f0(0x08)
	char pad_3F8[0x28]; // 0x3f8(0x28)

	float GetKillerRevealedTimeAtLevel(); // Function TheK32.S37P01.GetKillerRevealedTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetChaseLingeringTimerAtLevel(); // Function TheK32.S37P01.GetChaseLingeringTimerAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
};

// Class TheK32.S37P02
// Size: 0x3f8 (Inherited: 0x3c8)
struct US37P02 : UPerk {
	struct UStatusEffect* _enduranceStatusEffect; // 0x3c8(0x08)
	struct UStatusEffect* _hasteStatusEffect; // 0x3d0(0x08)
	float _enduranceEffectTimer[0x3]; // 0x3d8(0x0c)
	float _hasteSpeedAmount[0x3]; // 0x3e4(0x0c)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	float GetHasteSpeedAmountAtLevel(); // Function TheK32.S37P02.GetHasteSpeedAmountAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd660
	float GetEnduranceEffectTimerAtLevel(); // Function TheK32.S37P02.GetEnduranceEffectTimerAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf40e0
};

// Class TheK32.S37P03
// Size: 0x408 (Inherited: 0x3c8)
struct US37P03 : UPerk {
	int32_t _maxTokens; // 0x3c8(0x04)
	int32_t _repairSpeedDebuffTime[0x3]; // 0x3cc(0x0c)
	float _repairSpeedDebuffAmount; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UStatusEffect* _allowSearchChestForToolboxEffectClass; // 0x3e0(0x08)
	struct UStatusEffect* _repairSpeedDebuffEffectClass; // 0x3e8(0x08)
	struct UStatusEffect* _allowSearchChestForToolboxEffect; // 0x3f0(0x08)
	char pad_3F8[0x10]; // 0x3f8(0x10)

	float GetRepairSpeedDebuffTimeAtLevel(); // Function TheK32.S37P03.GetRepairSpeedDebuffTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x595dd00
	float GetRepairSpeedDebuffAmount(); // Function TheK32.S37P03.GetRepairSpeedDebuffAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce26c0
};

