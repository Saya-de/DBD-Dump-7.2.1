// Class TheK30.BTService_FindObject_GuardFlag
// Size: 0x208 (Inherited: 0x208)
struct UBTService_FindObject_GuardFlag : UBTService_FindObject {
};

// Class TheK30.DrawPatrolPathInteraction
// Size: 0x960 (Inherited: 0x790)
struct UDrawPatrolPathInteraction : UBasicChargeableInteraction {
	struct FMulticastInlineDelegate OnChargeStateChanged; // 0x790(0x10)
	char pad_7A0[0x40]; // 0x7a0(0x40)
	struct FSecondaryInteractionProperties _giveOrderProperties; // 0x7e0(0x38)
	struct FSecondaryInteractionProperties _releaseInteractionProperties; // 0x818(0x38)
	struct FDBDTunableRowHandle _maximumInteractionDuration; // 0x850(0x28)
	struct FDBDTunableRowHandle _pathLengthWarningPercent; // 0x878(0x28)
	struct FDBDTunableRowHandle _pathDrawingDurationWarningPercent; // 0x8a0(0x28)
	struct FDBDTunableRowHandle _minSlopeToCheckStepUp; // 0x8c8(0x28)
	struct UStatusEffect* _postPowerHasteClass; // 0x8f0(0x08)
	struct FDBDTunableRowHandle _postPowerHasteValue; // 0x8f8(0x28)
	struct UCurveFloat* _hasteDurationByPathLength; // 0x920(0x08)
	char pad_928[0x38]; // 0x928(0x38)

	void SetIsCharging(bool IsCharging); // Function TheK30.DrawPatrolPathInteraction.SetIsCharging // (Final|Native|Protected|BlueprintCallable) // @ game+0x58c24d0
	void Server_StartPatrol(); // Function TheK30.DrawPatrolPathInteraction.Server_StartPatrol // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x588d320
	void Server_SendOrder(struct AInteractable* Target); // Function TheK30.DrawPatrolPathInteraction.Server_SendOrder // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x58c2440
	void OnChargeStateChanged__DelegateSignature(bool IsCharging, bool IsChargeCompleted); // DelegateFunction TheK30.DrawPatrolPathInteraction.OnChargeStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnCancellationTimerCompleted(); // Function TheK30.DrawPatrolPathInteraction.OnCancellationTimerCompleted // (Final|Native|Private) // @ game+0x58c1cf0
	bool IsCharging(); // Function TheK30.DrawPatrolPathInteraction.IsCharging // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c1bf0
	bool IsChargeCompleted(); // Function TheK30.DrawPatrolPathInteraction.IsChargeCompleted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c1bd0
};

// Class TheK30.FloatingCameraNavigationComponent
// Size: 0x270 (Inherited: 0xb8)
struct UFloatingCameraNavigationComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TWeakObjectPtr<struct UObjectPlacerComponent> _ownerObjectPlacer; // 0xd0(0x08)
	struct FDBDTunableRowHandle _snappingDistance; // 0xd8(0x28)
	struct FDBDTunableRowHandle _previewSnappingTime; // 0x100(0x28)
	struct FDBDTunableRowHandle _drawPathModeYawInputLimit; // 0x128(0x28)
	struct FTunableStat _floatingCameraMaxSpeed; // 0x150(0x80)
	struct FDBDTunableRowHandle _floatingCameraAccelerationMultiplier; // 0x1d0(0x28)
	struct FDBDTunableRowHandle _strafeMovementSpeedMultiplier; // 0x1f8(0x28)
	struct TWeakObjectPtr<struct ADBDPlayer> _playerOwner; // 0x220(0x08)
	char pad_228[0x48]; // 0x228(0x48)

	void Server_EnableWalkOffLegdes(bool IsEnabled); // Function TheK30.FloatingCameraNavigationComponent.Server_EnableWalkOffLegdes // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x58c23b0
	void Multicast_EnableWalkOffLegdes(bool IsEnabled); // Function TheK30.FloatingCameraNavigationComponent.Multicast_EnableWalkOffLegdes // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d62570
};

// Class TheK30.GuardAttackableComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UGuardAttackableComponent : UAttackableComponent {
};

// Class TheK30.GuardAttackComponent
// Size: 0x140 (Inherited: 0xb8)
struct UGuardAttackComponent : UActorComponent {
	struct UStatusEffect* _killerInstinctEffectClass; // 0xb8(0x08)
	struct FDBDTunableRowHandle _killerInstinctEffectDuration; // 0xc0(0x28)
	enum class EDetectionZone _detectionZoneToUse; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TSet<struct TWeakObjectPtr<struct ACamperPlayer>> _survivorsInZone; // 0xf0(0x50)
};

// Class TheK30.GuardOrderBase
// Size: 0x640 (Inherited: 0x630)
struct UGuardOrderBase : UInteractionDefinition {
	bool _shouldWaitForCurrentInteraction; // 0x630(0x01)
	char pad_631[0x3]; // 0x631(0x03)
	struct FName _explodeInteractableAnimNotifyID; // 0x634(0x0c)
};

// Class TheK30.GuardBreakPallet
// Size: 0x640 (Inherited: 0x640)
struct UGuardBreakPallet : UGuardOrderBase {
};

// Class TheK30.GuardBreakWall
// Size: 0x640 (Inherited: 0x640)
struct UGuardBreakWall : UGuardOrderBase {
};

// Class TheK30.GuardController
// Size: 0x7e8 (Inherited: 0x770)
struct AGuardController : ADBDAIBTController {
	char pad_770[0x8]; // 0x770(0x08)
	struct TArray<struct FGameplayTag> _cannotHuntWhileIdleTags; // 0x778(0x10)
	struct FName _isPatrollingKey; // 0x788(0x0c)
	struct FName _patrolDestinationKey; // 0x794(0x0c)
	struct FName _patrolUseDirectPathKey; // 0x7a0(0x0c)
	struct FName _isHuntingKey; // 0x7ac(0x0c)
	struct FName _huntedSurvivorKey; // 0x7b8(0x0c)
	struct FName _huntDestinationKey; // 0x7c4(0x0c)
	struct FName _huntUseDirectPathKey; // 0x7d0(0x0c)
	struct FName _huntShouldSearchLockerKey; // 0x7dc(0x0c)

	void OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus); // Function TheK30.GuardController.OnTargetPerceptionUpdated // (Final|Native|Private) // @ game+0x58c2070
	void OnLoudNoiseTriggered(struct AActor* originator, struct AActor* instigatingActor, struct FVector Location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise); // Function TheK30.GuardController.OnLoudNoiseTriggered // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x58c1d10
};

// Class TheK30.GuardDamageGenerator
// Size: 0x640 (Inherited: 0x640)
struct UGuardDamageGenerator : UGuardOrderBase {
};

// Class TheK30.GuardFlag
// Size: 0x310 (Inherited: 0x230)
struct AGuardFlag : AActor {
	struct UPrimitiveComponent* _flagPickupHitbox; // 0x230(0x08)
	struct AKnightGuard* _owningGuard; // 0x238(0x08)
	struct ADBDPlayer* _huntedSurvivor; // 0x240(0x08)
	struct UStatusEffect* _flagPickupEnduranceEffectClass; // 0x248(0x08)
	struct FDBDTunableRowHandle _flagPickupEnduranceDuration; // 0x250(0x28)
	struct UStatusEffect* _flagPickupHasteEffectClass; // 0x278(0x08)
	struct FDBDTunableRowHandle _flagPickupHasteDuration; // 0x280(0x28)
	struct FDBDTunableRowHandle _flagPickupHasteModifier; // 0x2a8(0x28)
	char pad_2D0[0x38]; // 0x2d0(0x38)
	struct ADBDPlayer* _clientHuntedSurvivor; // 0x308(0x08)

	void OnRep_HuntedSurvivor(); // Function TheK30.GuardFlag.OnRep_HuntedSurvivor // (Final|Native|Private) // @ game+0x58c1f80
	void Multicast_OnCamperCapturedFlag(struct ADBDPlayer* huntedSurvivor); // Function TheK30.GuardFlag.Multicast_OnCamperCapturedFlag // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55b9b20
	struct ADBDPlayer* GetHuntedSurvivor(); // Function TheK30.GuardFlag.GetHuntedSurvivor // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c1bb0
	float GetActivationTimeLeft(); // Function TheK30.GuardFlag.GetActivationTimeLeft // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c1b80
	void Cosmetic_OnSurvivorCapturedFlag(struct ADBDPlayer* previouslyHuntedSurvivor); // Function TheK30.GuardFlag.Cosmetic_OnSurvivorCapturedFlag // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFlagSpawned(float activationTimerDuration); // Function TheK30.GuardFlag.Cosmetic_OnFlagSpawned // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFlagDisappearDueToHuntEnding(struct ADBDPlayer* previouslyHuntedSurvivor); // Function TheK30.GuardFlag.Cosmetic_OnFlagDisappearDueToHuntEnding // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFlagActivationTimerCompleted(); // Function TheK30.GuardFlag.Cosmetic_OnFlagActivationTimerCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& HitResult); // Function TheK30.GuardFlag.Authority_OnBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x58c1210
};

// Class TheK30.GuardFlagOUtlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xc0)
struct UGuardFlagOUtlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _killerColor; // 0xc0(0x10)
	struct FLinearColor _survivorColor; // 0xd0(0x10)
};

// Class TheK30.GuardHuntComponent
// Size: 0x188 (Inherited: 0xb8)
struct UGuardHuntComponent : UActorComponent {
	struct FMulticastInlineDelegate OnGuardPhaseProgressUpdate; // 0xb8(0x10)
	char pad_C8[0x24]; // 0xc8(0x24)
	float _maxPathingDetourLength; // 0xec(0x04)
	float _distanceBeforeGoingToNextWaypoint; // 0xf0(0x04)
	float _distanceBeforeGoingToNextWaypointOffNavmesh; // 0xf4(0x04)
	float _distanceFromLockerToClearWaypoints; // 0xf8(0x04)
	float _underWaypointZDistance; // 0xfc(0x04)
	struct FSpeedBasedNetSyncedValue _huntTimeLeft; // 0x100(0x38)
	struct ACamperPlayer* _huntedSurvivor; // 0x138(0x08)
	char pad_140[0x4]; // 0x140(0x04)
	struct FVector _huntStartingLocation; // 0x144(0x0c)
	char pad_150[0x20]; // 0x150(0x20)
	float _speedConsideredStuck; // 0x170(0x04)
	float _timeStuckToResetPathing; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)

	void OnRep_HuntStartingLocation(); // Function TheK30.GuardHuntComponent.OnRep_HuntStartingLocation // (Final|Native|Private) // @ game+0x58c1f60
	void OnRep_HuntedSurvivor(struct ACamperPlayer* previousChasedSurvivor); // Function TheK30.GuardHuntComponent.OnRep_HuntedSurvivor // (Final|Native|Private) // @ game+0x58c1fa0
	void OnGuardPhaseProgressUpdate__DelegateSignature(float completionProgress); // DelegateFunction TheK30.GuardHuntComponent.OnGuardPhaseProgressUpdate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	struct ACamperPlayer* GetHuntedSurvivor(); // Function TheK30.GuardHuntComponent.GetHuntedSurvivor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ae6060
	void Authority_OnCamperUnhooked(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK30.GuardHuntComponent.Authority_OnCamperUnhooked // (Final|Native|Private|HasOutParms) // @ game+0x58c1540
	void Authority_OnCamperInjuredOrDowned(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK30.GuardHuntComponent.Authority_OnCamperInjuredOrDowned // (Final|Native|Private|HasOutParms) // @ game+0x58c1430
};

// Class TheK30.GuardHuntTeleport
// Size: 0x660 (Inherited: 0x630)
struct UGuardHuntTeleport : UInteractionDefinition {
	struct FDBDTunableRowHandle _huntStartUpDuration; // 0x630(0x28)
	struct UCurveFloat* _huntStartUpDurationPathLengthMultiplier; // 0x658(0x08)
};

// Class TheK30.GuardInteractable
// Size: 0x378 (Inherited: 0x370)
struct AGuardInteractable : APlayerInteractable {
	struct UInteractionDefinition* _startHuntInteraction; // 0x370(0x08)
};

// Class TheK30.GuardOutlineUpdateStrategy
// Size: 0xd0 (Inherited: 0xc0)
struct UGuardOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _killerColor; // 0xc0(0x10)
};

// Class TheK30.GuardPatrolComponent
// Size: 0x1f0 (Inherited: 0xb8)
struct UGuardPatrolComponent : UActorComponent {
	char _currentDirection; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	float _patrolPathLength; // 0xd0(0x04)
	bool _isInPatrolStartup; // 0xd4(0x01)
	bool _isPatrolling; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
	struct FSpeedBasedNetSyncedValue _patrolTimeLeft; // 0xd8(0x38)
	char pad_110[0x30]; // 0x110(0x30)
	float _patrolTotalDuration; // 0x140(0x04)
	float _distanceBeforeHeadingToNextNode; // 0x144(0x04)
	float _maxDetourLength; // 0x148(0x04)
	char pad_14C[0x1c]; // 0x14c(0x1c)
	struct FDBDTunableRowHandle _spawningVisionAngle; // 0x168(0x28)
	struct FDBDTunableRowHandle _patrollingVisionAngle; // 0x190(0x28)
	struct FDBDTunableRowHandle _timeToInterpolateVisionRadius; // 0x1b8(0x28)
	struct UCurveFloat* _detectionRadiusInterpolationDurationPathLengthMultiplier; // 0x1e0(0x08)
	struct UCurveFloat* _detectionRadiusPathLenghtMultiplier; // 0x1e8(0x08)

	void OnRep_IsPatrolling(); // Function TheK30.GuardPatrolComponent.OnRep_IsPatrolling // (Final|Native|Private) // @ game+0x58c2030
};

// Class TheK30.GuardPullSurvivorOutOfLocker
// Size: 0x6e0 (Inherited: 0x660)
struct UGuardPullSurvivorOutOfLocker : UBaseLockerInteraction {
	struct ACamperPlayer* _targetSurvivor; // 0x660(0x08)
	struct FAnimationMontageDescriptor _healthySurvivorUpdateMontage; // 0x668(0x20)
	struct FAnimationMontageDescriptor _injuredSurvivorUpdateMontage; // 0x688(0x20)
	struct FDBDTunableRowHandle _pullOutOfLockerDuration; // 0x6a8(0x28)
	float _snapPositionDistanceOnPullOutHealthy; // 0x6d0(0x04)
	float _snapTime; // 0x6d4(0x04)
	char pad_6D8[0x8]; // 0x6d8(0x08)
};

// Class TheK30.GuardSlowingZone
// Size: 0x230 (Inherited: 0x230)
struct AGuardSlowingZone : AActor {

	void OnZoneEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TheK30.GuardSlowingZone.OnZoneEndOverlap // (Final|Native|Protected) // @ game+0x58c22e0
	void OnZoneBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TheK30.GuardSlowingZone.OnZoneBeginOverlap // (Final|Native|Protected) // @ game+0x58c2210
};

// Class TheK30.GuardPalletSlowingZone
// Size: 0x238 (Inherited: 0x230)
struct AGuardPalletSlowingZone : AGuardSlowingZone {
	struct APallet* _linkedPallet; // 0x230(0x08)

	void OnRep_LinkedPallet(); // Function TheK30.GuardPalletSlowingZone.OnRep_LinkedPallet // (Final|Native|Private) // @ game+0x58c2050
};

// Class TheK30.K30BaseStatusEffectAddon
// Size: 0x2d8 (Inherited: 0x2b8)
struct UK30BaseStatusEffectAddon : UItemAddon {
	struct TArray<struct UStatusEffect*> _baseStatusEffectClasses; // 0x2b8(0x10)
	float _lifetime; // 0x2c8(0x04)
	float _customParam; // 0x2cc(0x04)
	bool _shouldDisplay; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
};

// Class TheK30.K30InflictStatusOnEndHuntAddon
// Size: 0x2e8 (Inherited: 0x2d8)
struct UK30InflictStatusOnEndHuntAddon : UK30BaseStatusEffectAddon {
	struct TArray<enum class EGuardHuntEndReason> _huntEndReasonsToApplyEffect; // 0x2d8(0x10)

	void Authority_OnEndHunt(struct ADBDPlayer* Player, enum class EGuardHuntEndReason huntEndReason); // Function TheK30.K30InflictStatusOnEndHuntAddon.Authority_OnEndHunt // (Native|Protected) // @ game+0x58c5890
};

// Class TheK30.K30Addon14
// Size: 0x2f0 (Inherited: 0x2e8)
struct UK30Addon14 : UK30InflictStatusOnEndHuntAddon {
	int32_t _numberOfEscapesBeforeEffect; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
};

// Class TheK30.K30ApplyStatusOnWakeUpAddon
// Size: 0x2e0 (Inherited: 0x2d8)
struct UK30ApplyStatusOnWakeUpAddon : UK30BaseStatusEffectAddon {
	struct AKnightGuard* _applicableGuard; // 0x2d8(0x08)

	void Authority_OnWakeUp(struct AKnightGuard* currentGuard); // Function TheK30.K30ApplyStatusOnWakeUpAddon.Authority_OnWakeUp // (Native|Protected) // @ game+0x58c1950
};

// Class TheK30.K30Addon16
// Size: 0x2e0 (Inherited: 0x2e0)
struct UK30Addon16 : UK30ApplyStatusOnWakeUpAddon {
};

// Class TheK30.K30Addon17
// Size: 0x328 (Inherited: 0x2e0)
struct UK30Addon17 : UK30ApplyStatusOnWakeUpAddon {
	struct UStatusEffect* _revealAuraToKillerEffectClass; // 0x2e0(0x08)
	float _distanceForScreams; // 0x2e8(0x04)
	float _dealyForScreams; // 0x2ec(0x04)
	char pad_2F0[0x38]; // 0x2f0(0x38)

	void Multicast_OnMakeSurvivorScream(struct ADBDPlayer* Player, float lifetime); // Function TheK30.K30Addon17.Multicast_OnMakeSurvivorScream // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x58c1c10
	void BP_RevealAndMakeSurvivorScream(struct ADBDPlayer* survivorPlayer, float screamRevealDuration); // Function TheK30.K30Addon17.BP_RevealAndMakeSurvivorScream // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK30.K30Addon19
// Size: 0x2f0 (Inherited: 0x2e0)
struct UK30Addon19 : UK30ApplyStatusOnWakeUpAddon {
	int32_t _numberOfSummonsBeforeEffect; // 0x2e0(0x04)
	float _distanceThresholdForEffect; // 0x2e4(0x04)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class TheK30.K30Addon20
// Size: 0x360 (Inherited: 0x2d8)
struct UK30Addon20 : UK30BaseStatusEffectAddon {
	char pad_2D8[0x10]; // 0x2d8(0x10)
	struct TArray<struct AWindow*> _blockedWindows; // 0x2e8(0x10)
	struct ADBDPlayer* _huntedSurvivor; // 0x2f8(0x08)
	struct UStatusEffect* _gateBlockerEffectClass; // 0x300(0x08)
	float _trailPassThroughWindowBlockTime; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TMap<struct ACamperPlayer*, struct UStatusEffect*> _playerGateBlockerStatusEffects; // 0x310(0x50)

	void Authority_OnTrailCameraGoThroughWindow(struct AWindow* Window); // Function TheK30.K30Addon20.Authority_OnTrailCameraGoThroughWindow // (Final|Native|Private) // @ game+0x58c18c0
	void Authority_OnStartHunt(struct ADBDPlayer* Player); // Function TheK30.K30Addon20.Authority_OnStartHunt // (Final|Native|Private) // @ game+0x58c1830
	void Authority_OnHuntedSurvivorVault(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK30.K30Addon20.Authority_OnHuntedSurvivorVault // (Final|Native|Private|HasOutParms) // @ game+0x58c1720
	void Authority_OnEndHunt(struct ADBDPlayer* Player, enum class EGuardHuntEndReason huntEndReason); // Function TheK30.K30Addon20.Authority_OnEndHunt // (Final|Native|Private) // @ game+0x58c1650
};

// Class TheK30.K30AnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UK30AnimInstance : UKillerAnimInstance {
	bool _isChargingPower; // 0x610(0x01)
	bool _isSnapping; // 0x611(0x01)
	bool _isDrawingPath; // 0x612(0x01)
	char pad_613[0xd]; // 0x613(0x0d)
};

// Class TheK30.K30CheatComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UK30CheatComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)

	void DBD_K30ToggleGuardAttackDespawn(int32_t despawnOnAttack); // Function TheK30.K30CheatComponent.DBD_K30ToggleGuardAttackDespawn // (Final|Exec|Native|Public) // @ game+0x58c1af0
	void DBD_K30SetPatrolAndHuntDuration(float secondsToPatrol); // Function TheK30.K30CheatComponent.DBD_K30SetPatrolAndHuntDuration // (Final|Exec|Native|Public) // @ game+0x58c1a70
	void DBD_K30SetNextGuardIndex(int32_t nextGuardIndex); // Function TheK30.K30CheatComponent.DBD_K30SetNextGuardIndex // (Final|Exec|Native|Public) // @ game+0x58c19e0
};

// Class TheK30.K30InflictStatusOnDetectedAddon
// Size: 0x2d8 (Inherited: 0x2d8)
struct UK30InflictStatusOnDetectedAddon : UK30BaseStatusEffectAddon {

	void Authority_OnDetected(struct ADBDPlayer* Player); // Function TheK30.K30InflictStatusOnDetectedAddon.Authority_OnDetected // (Native|Protected) // @ game+0x58c1950
};

// Class TheK30.K30InflictStatusOnGuardHitAddon
// Size: 0x2d8 (Inherited: 0x2d8)
struct UK30InflictStatusOnGuardHitAddon : UK30BaseStatusEffectAddon {

	void Authority_OnGuardHit(struct ADBDPlayer* Player); // Function TheK30.K30InflictStatusOnGuardHitAddon.Authority_OnGuardHit // (Final|Native|Protected) // @ game+0x58c5960
};

// Class TheK30.K30KnightHuskOutlineUpdateStrategy
// Size: 0xd0 (Inherited: 0xc0)
struct UK30KnightHuskOutlineUpdateStrategy : UOutlineUpdateStrategy {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class TheK30.K30P01
// Size: 0x3e8 (Inherited: 0x3c8)
struct UK30P01 : UPerk {
	float _revealRange; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UStatusEffect* _revealToKillerEffectClass; // 0x3d0(0x08)
	float _revealDuration[0x3]; // 0x3d8(0x0c)
	char pad_3E4[0x4]; // 0x3e4(0x04)
};

// Class TheK30.K30P02
// Size: 0x488 (Inherited: 0x448)
struct UK30P02 : UHexPerk {
	struct ADBDPlayer* _cursedPlayer; // 0x448(0x08)
	struct TArray<struct UStatusEffect*> _activeStatusEffects; // 0x450(0x10)
	struct UStatusEffect* _screamEffectClass; // 0x460(0x08)
	float _screamLoudNoiseDuration; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UStatusEffect* _screamRevealAuraToKillerEffectClass; // 0x470(0x08)
	float _screamRevealAuraToKillerDuration; // 0x478(0x04)
	float _screamInterval[0x3]; // 0x47c(0x0c)

	float GetScreamInterval(); // Function TheK30.K30P02.GetScreamInterval // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5ea0
	void Authority_UncursePlayer(); // Function TheK30.K30P02.Authority_UncursePlayer // (Final|Native|Private) // @ game+0x58c5b50
	void Authority_OnTotemStateChanged(enum class ETotemState oldState, enum class ETotemState NewState); // Function TheK30.K30P02.Authority_OnTotemStateChanged // (Final|Native|Public) // @ game+0x58c5a80
	void Authority_OnSurvivorFirstScream(struct ADBDPlayer* Player); // Function TheK30.K30P02.Authority_OnSurvivorFirstScream // (Final|Native|Public) // @ game+0x58c59f0
};

// Class TheK30.K30P02ScreamStatusEffect
// Size: 0x3d0 (Inherited: 0x350)
struct UK30P02ScreamStatusEffect : UStatusEffect {
	char pad_350[0x28]; // 0x350(0x28)
	struct UStatusEffect* _screamingPlayerRevealAuraEffectClass; // 0x378(0x08)
	struct FGameplayTagContainer _screamPreventingTags; // 0x380(0x20)
	char pad_3A0[0x30]; // 0x3a0(0x30)

	void Multicast_MakePlayerScream(float screamRevealDuration); // Function TheK30.K30P02ScreamStatusEffect.Multicast_MakePlayerScream // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x58c60e0
	bool IsTimerPaused(); // Function TheK30.K30P02ScreamStatusEffect.IsTimerPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c6030
	bool IsTimerActive(); // Function TheK30.K30P02ScreamStatusEffect.IsTimerActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c6000
	float GetTimerRemainingTime(); // Function TheK30.K30P02ScreamStatusEffect.GetTimerRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5f30
	float GetTimerElapsedTime(); // Function TheK30.K30P02ScreamStatusEffect.GetTimerElapsedTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5f00
	float GetTimerDuration(); // Function TheK30.K30P02ScreamStatusEffect.GetTimerDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5ed0
	void BP_MakeSurvivorScream(struct ADBDPlayer* survivorPlayer, float screamRevealDuration); // Function TheK30.K30P02ScreamStatusEffect.BP_MakeSurvivorScream // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK30.K30P03
// Size: 0x3d8 (Inherited: 0x3c8)
struct UK30P03 : UPerk {
	struct UStatusEffect* _exposedEffectClass; // 0x3c8(0x08)
	float _cooldownTime; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

// Class TheK30.K30Power
// Size: 0x820 (Inherited: 0x4c8)
struct AK30Power : ACollectable {
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnMoriBegin; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnMoriEnd; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnPowerStateChanged; // 0x4f0(0x10)
	char pad_500[0x30]; // 0x500(0x30)
	struct UInteractor* _interactor; // 0x530(0x08)
	struct UDrawPatrolPathInteraction* _drawPathInteraction; // 0x538(0x08)
	struct UKnightOrderComponent* _orderComponent; // 0x540(0x08)
	char pad_548[0x50]; // 0x548(0x50)
	struct TArray<struct AKnightGuard*> _guards; // 0x598(0x10)
	struct TArray<struct AKnightGuard*> _guardClasses; // 0x5a8(0x10)
	struct UStatusEffect* _drawPathStatusEffectClass; // 0x5b8(0x08)
	struct UStatusEffect* _hideSurvivorVFXEffectClass; // 0x5c0(0x08)
	struct UStatusEffect* _immuneToBlindEffectClass; // 0x5c8(0x08)
	struct APoseableHusk* _knightHuskClass; // 0x5d0(0x08)
	struct AGuardPalletSlowingZone* _palletSlowingZoneClass; // 0x5d8(0x08)
	struct AGuardSlowingZone* _vaultSlowingZoneClass; // 0x5e0(0x08)
	struct UK30SurvivorStatusComponent* _k30SurvivorStatusComponentClass; // 0x5e8(0x08)
	struct UGuardPullSurvivorOutOfLocker* _pullSurvivorOutOfLockerInteractionClass; // 0x5f0(0x08)
	struct APoseableHusk* _knightHusk; // 0x5f8(0x08)
	struct AActor* _drawPathIndicatorClass; // 0x600(0x08)
	struct AActor* _drawPathIndicator; // 0x608(0x08)
	struct UPatrolTrailComponent* _patrolTrailComponent; // 0x610(0x08)
	struct UFloatingCameraNavigationComponent* _floatingCameraNavigationComponent; // 0x618(0x08)
	struct UK30PowerPresentationComponent* _powerPresentationComponent; // 0x620(0x08)
	char pad_628[0x8]; // 0x628(0x08)
	struct UPlayerInteractionHandler* _interactionHandler; // 0x630(0x08)
	char _currentGuardIndex; // 0x638(0x01)
	char _nextGuardIndex; // 0x639(0x01)
	char pad_63A[0x6e]; // 0x63a(0x6e)
	struct FDBDTunableRowHandle _lookAtPreviewSpeed; // 0x6a8(0x28)
	struct FTunableStat _maxPathLength; // 0x6d0(0x80)
	float _remainingPathLengthPercent; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
	struct FDBDTunableRowHandle _powerReadyDelay; // 0x758(0x28)
	struct TArray<struct FGameplayTag> _isVisibleDuringPathCreationModeTags; // 0x780(0x10)
	struct FDBDTunableRowHandle _pathCreationModeOverFadeInTime; // 0x790(0x28)
	float _enableInteractionAfterTeleportationDelay; // 0x7b8(0x04)
	char pad_7BC[0x64]; // 0x7bc(0x64)

	void Server_OnSnappingStateChanged(bool IsSnapping); // Function TheK30.K30Power.Server_OnSnappingStateChanged // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x5487840
	void SendPathNearlyEndingWarning(); // Function TheK30.K30Power.SendPathNearlyEndingWarning // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_KnightHusk(); // Function TheK30.K30Power.OnRep_KnightHusk // (Final|Native|Private) // @ game+0x58c6590
	void OnPowerStateChanged__DelegateSignature(enum class EPowerState previousState, enum class EPowerState NewState); // DelegateFunction TheK30.K30Power.OnPowerStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnOrderTargetChanged(); // Function TheK30.K30Power.OnOrderTargetChanged // (Final|Native|Private) // @ game+0x58c64e0
	void OnMoriStateChanged__DelegateSignature(); // DelegateFunction TheK30.K30Power.OnMoriStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnInteractionStateChanged(bool IsCharging, bool IsChargeCompleted); // Function TheK30.K30Power.OnInteractionStateChanged // (Final|Native|Public) // @ game+0x58c6410
	void OnEndOverlapWindow(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK30.K30Power.OnEndOverlapWindow // (Final|Native|Private) // @ game+0x58c62b0
	void Multicast_OnSnappingStateChanged(bool IsSnapping); // Function TheK30.K30Power.Multicast_OnSnappingStateChanged // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x58c6220
	bool IsSnapping(); // Function TheK30.K30Power.IsSnapping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5fd0
	bool IsDrawingPath(); // Function TheK30.K30Power.IsDrawingPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5f90
	bool IsChargingPower(); // Function TheK30.K30Power.IsChargingPower // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5f60
	void Cosmetic_UpdateRemainingPathLength(float remainingPathLengthPercent); // Function TheK30.K30Power.Cosmetic_UpdateRemainingPathLength // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPathDrawAvailableEnd(); // Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPathDrawAvailableBegin(); // Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableBegin // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK30.K30PowerPresentationComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UK30PowerPresentationComponent : UPresentationItemProgressComponent {
};

// Class TheK30.K30PresentationPowerFadeComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK30PresentationPowerFadeComponent : UPresentationPowerFadeComponent {
};

// Class TheK30.K30RepeatGuardSpawnAddon
// Size: 0x2c0 (Inherited: 0x2b8)
struct UK30RepeatGuardSpawnAddon : UItemAddon {
	char _guardIndexToRepeat; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
};

// Class TheK30.K30SurvivorCosmeticHelperActor
// Size: 0x290 (Inherited: 0x270)
struct AK30SurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	char pad_270[0x20]; // 0x270(0x20)

	void Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged(bool isFlagCaptureBuffActive); // Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHuntEnd(); // Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHuntBegin(); // Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntBegin // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK30.K30SurvivorStatusComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UK30SurvivorStatusComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct ACamperPlayer* _owningSurvivor; // 0xc0(0x08)
	struct TWeakObjectPtr<struct ACamperPlayer> _detectedSurvivor; // 0xc8(0x08)
	struct TWeakObjectPtr<struct AK30Power> _k30Power; // 0xd0(0x08)
};

// Class TheK30.K30Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK30Utilities : UBlueprintFunctionLibrary {

	int32_t GetNextGuardIndex(struct AActor* TheK30); // Function TheK30.K30Utilities.GetNextGuardIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x58c5db0
	struct AKnightGuard* GetNextGuard(struct AActor* TheK30); // Function TheK30.K30Utilities.GetNextGuard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x58c5d20
	struct AK30Power* GetK30Power(struct AActor* TheK30); // Function TheK30.K30Utilities.GetK30Power // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x58c5c90
	int32_t GetCurrentGuardIndex(struct AActor* TheK30); // Function TheK30.K30Utilities.GetCurrentGuardIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x58c5c00
	struct AKnightGuard* GetCurrentGuard(struct AActor* TheK30); // Function TheK30.K30Utilities.GetCurrentGuard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x58c5b70
};

// Class TheK30.KnightGuard
// Size: 0x1790 (Inherited: 0x11a0)
struct AKnightGuard : ADBDPlayer {
	char pad_11A0[0x58]; // 0x11a0(0x58)
	struct USceneComponent* _attackZonePivot; // 0x11f8(0x08)
	char pad_1200[0x8]; // 0x1200(0x08)
	float _guardNoiseEventTimeInterval; // 0x1208(0x04)
	float _guardNoiseEventRange; // 0x120c(0x04)
	bool _isActive; // 0x1210(0x01)
	char pad_1211[0x7]; // 0x1211(0x07)
	struct ASlasherPlayer* _owningKiller; // 0x1218(0x08)
	struct AK30Power* _killerPower; // 0x1220(0x08)
	struct AGuardFlag* _flagClass; // 0x1228(0x08)
	struct AGuardFlag* _guardFlag; // 0x1230(0x08)
	struct UGuardAttackComponent* _attackComponentClass; // 0x1238(0x08)
	struct UGuardAttackComponent* _attackComponent; // 0x1240(0x08)
	struct UGuardAttackableComponent* _attackableComponent; // 0x1248(0x08)
	struct UCapsuleComponent* _attackableCapsule; // 0x1250(0x08)
	struct UGuardHuntComponent* _huntComponentClass; // 0x1258(0x08)
	struct UGuardHuntComponent* _huntComponent; // 0x1260(0x08)
	struct UGuardPatrolComponent* _patrolComponentClass; // 0x1268(0x08)
	struct UGuardPatrolComponent* _patrolComponent; // 0x1270(0x08)
	struct AGuardController* _controllerClass; // 0x1278(0x08)
	struct UAnimationMontageSlave* _animationFollower; // 0x1280(0x08)
	struct FDBDTunableRowHandle _gravityScale; // 0x1288(0x28)
	struct FTunableStat _patrolMovementSpeed; // 0x12b0(0x80)
	struct FDBDTunableRowHandle _patrolStartupDelay; // 0x1330(0x28)
	struct FTunableStat _patrolDuration; // 0x1358(0x80)
	struct FDBDTunableRowHandle _huntMovementSpeed; // 0x13d8(0x28)
	struct FTunableStat _huntDuration; // 0x1400(0x80)
	struct FTunableStat _orderDuration; // 0x1480(0x80)
	struct FDBDTunableRowHandle _flagActivationTime; // 0x1500(0x28)
	struct FDBDTunableRowHandle _shouldInflictBleed; // 0x1528(0x28)
	struct FDBDTunableRowHandle _spawningVisionRange; // 0x1550(0x28)
	struct FTunableStat _patrollingVisionRange; // 0x1578(0x80)
	struct FDBDTunableRowHandle _palletAndVaultsSlowedDownSpeed; // 0x15f8(0x28)
	struct FDBDTunableRowHandle _palletAndVaultsSlowDownDuration; // 0x1620(0x28)
	struct FDBDTunableRowHandle _immediateGeneratorRegressionPercent; // 0x1648(0x28)
	struct FDBDTunableRowHandle _huntAuraVisibilityMinDistanceToKiller; // 0x1670(0x28)
	struct FGameplayTag _guardHitSurvivorScoreEvent; // 0x1698(0x0c)
	struct FGameplayTag _guardDetectSurvivorScoreEvent; // 0x16a4(0x0c)
	struct FGameplayTag _guardBreakInteractableEvent; // 0x16b0(0x0c)
	struct FGameplayTag _guardChaseEndedEvent; // 0x16bc(0x0c)
	char pad_16C8[0x4]; // 0x16c8(0x04)
	struct FName _guardAnimTag; // 0x16cc(0x0c)
	char pad_16D8[0x60]; // 0x16d8(0x60)
	struct TSet<struct AActor*> _overlappingSurvivorsAndVaults; // 0x1738(0x50)
	char pad_1788[0x8]; // 0x1788(0x08)

	void OnRep_OwningKiller(); // Function TheK30.KnightGuard.OnRep_OwningKiller // (Final|Native|Private) // @ game+0x58c65b0
	void OnRep_IsActive(bool previousIsActive); // Function TheK30.KnightGuard.OnRep_IsActive // (Final|Native|Private) // @ game+0x58c6500
	void Multicast_OnPatrolEnded(struct ADBDPlayer* foundSurvivor); // Function TheK30.KnightGuard.Multicast_OnPatrolEnded // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x58c6190
	void Multicast_OnOrderEnded(); // Function TheK30.KnightGuard.Multicast_OnOrderEnded // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x58c6170
	void Multicast_CosmeticHuntEnded(enum class EGuardHuntEndReason Reason); // Function TheK30.KnightGuard.Multicast_CosmeticHuntEnded // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x58c6060
	struct UGuardPatrolComponent* GetPatrolComponent(); // Function TheK30.KnightGuard.GetPatrolComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5e70
	struct ASlasherPlayer* GetOwningKiller(); // Function TheK30.KnightGuard.GetOwningKiller // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c5e40
	void Cosmetic_StopOverlappingVaultOrSurvivor(); // Function TheK30.KnightGuard.Cosmetic_StopOverlappingVaultOrSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_StartOverlappingVaultOrSurvivor(); // Function TheK30.KnightGuard.Cosmetic_StartOverlappingVaultOrSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ShowGuard(); // Function TheK30.KnightGuard.Cosmetic_ShowGuard // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPatrolStarted(); // Function TheK30.KnightGuard.Cosmetic_OnPatrolStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPatrolEnded(struct ADBDPlayer* foundSurvivor); // Function TheK30.KnightGuard.Cosmetic_OnPatrolEnded // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnOrderStarted(); // Function TheK30.KnightGuard.Cosmetic_OnOrderStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnOrderEnded(); // Function TheK30.KnightGuard.Cosmetic_OnOrderEnded // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHuntTeleportStarted(float Duration); // Function TheK30.KnightGuard.Cosmetic_OnHuntTeleportStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHuntEnded(enum class EGuardHuntEndReason Reason); // Function TheK30.KnightGuard.Cosmetic_OnHuntEnded // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnGuardVisionRadiusChanged(bool IsVisible, float Radius, float Angle); // Function TheK30.KnightGuard.Cosmetic_OnGuardVisionRadiusChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_HuntChaseStarted(); // Function TheK30.KnightGuard.Cosmetic_HuntChaseStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_HideGuard(); // Function TheK30.KnightGuard.Cosmetic_HideGuard // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK30.GuardAnimInstance
// Size: 0x560 (Inherited: 0x540)
struct UGuardAnimInstance : UPlayerAnimInstance {
	struct AKnightGuard* _owningGuard; // 0x540(0x08)
	float _forwardVelocity; // 0x548(0x04)
	float _lateralVelocity; // 0x54c(0x04)
	float _animSpeed; // 0x550(0x04)
	float _animDirection; // 0x554(0x04)
	bool _isActive; // 0x558(0x01)
	bool _isPatrolling; // 0x559(0x01)
	bool _isPatrollingForward; // 0x55a(0x01)
	bool _isHunting; // 0x55b(0x01)
	bool _isTeleporting; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
};

// Class TheK30.KnightGuardStateMachine
// Size: 0x130 (Inherited: 0x130)
struct UKnightGuardStateMachine : UPlayerStateMachine {
};

// Class TheK30.KnightHuskStunnableComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UKnightHuskStunnableComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class TheK30.KnightOrderComponent
// Size: 0x1f0 (Inherited: 0xb8)
struct UKnightOrderComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct TArray<struct AInteractable*> _possiblyTargetableObjects; // 0xc8(0x10)
	struct TArray<struct AInteractable*> _targetableObjects; // 0xd8(0x10)
	struct FLinearColor _targetedColor; // 0xe8(0x10)
	bool _showTargetableAura; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FLinearColor _targetableColor; // 0xfc(0x10)
	bool _showTargetableVFXWhilePowerIsReady; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct AInteractable* _currentTarget; // 0x110(0x08)
	struct AInteractable* _orderTarget; // 0x118(0x08)
	struct UInteractionDefinition* _bestInteraction; // 0x120(0x08)
	struct UInteractionDefinition* _currentInteraction; // 0x128(0x08)
	struct AKnightGuard* _guardWaitingForInteraction; // 0x130(0x08)
	char pad_138[0x38]; // 0x138(0x38)
	struct FDBDTunableRowHandle _targetingRange; // 0x170(0x28)
	struct UInteractionDefinition* _palletOrderClass; // 0x198(0x08)
	struct UInteractionDefinition* _killerBreakPalletClass; // 0x1a0(0x08)
	struct UInteractionDefinition* _generatorOrderClass; // 0x1a8(0x08)
	struct UInteractionDefinition* _killerBreakGeneratorClass; // 0x1b0(0x08)
	struct UInteractionDefinition* _breakableOrderClass; // 0x1b8(0x08)
	struct UInteractionDefinition* _killerBreakBreakableClass; // 0x1c0(0x08)
	float _updateRate; // 0x1c8(0x04)
	float _maxTargetingAngle; // 0x1cc(0x04)
	float _downRaycastLength; // 0x1d0(0x04)
	char pad_1D4[0x1c]; // 0x1d4(0x1c)

	void OnTargetChanged__DelegateSignature(); // DelegateFunction TheK30.KnightOrderComponent.OnTargetChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnGameEventDispatched(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK30.KnightOrderComponent.OnGameEventDispatched // (Final|Native|Private|HasOutParms) // @ game+0x58c8b00
	void OnCurrentInteractionFinished(); // Function TheK30.KnightOrderComponent.OnCurrentInteractionFinished // (Final|Native|Private) // @ game+0x58c8a10
	void Cosmetic_OnTargetableObjectsChanged(struct AInteractable* Object, bool isTargetable); // Function TheK30.KnightOrderComponent.Cosmetic_OnTargetableObjectsChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnNewTargetSelected(struct AInteractable* newTarget, struct AInteractable* oldTarget); // Function TheK30.KnightOrderComponent.Cosmetic_OnNewTargetSelected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK30.NavigationQueryFilter_Guard
// Size: 0x70 (Inherited: 0x70)
struct UNavigationQueryFilter_Guard : UNavigationQueryFilter_Player {
};

// Class TheK30.NearUndestroyedPallet
// Size: 0x148 (Inherited: 0xf0)
struct UNearUndestroyedPallet : URangeBasedCondition {
	char pad_F0[0x58]; // 0xf0(0x58)
};

// Class TheK30.NearFallenPallet
// Size: 0x148 (Inherited: 0x148)
struct UNearFallenPallet : UNearUndestroyedPallet {
};

// Class TheK30.PatrolTrailComponent
// Size: 0x1a0 (Inherited: 0xb8)
struct UPatrolTrailComponent : UActorComponent {
	struct FTrailData _trail; // 0xb8(0x30)
	struct FTrailSettings _trailSettings; // 0xe8(0x68)
	char pad_150[0x10]; // 0x150(0x10)
	float clearPathNodeDelay; // 0x160(0x04)
	char pad_164[0x3c]; // 0x164(0x3c)

	bool IsTrailCompleted(); // Function TheK30.PatrolTrailComponent.IsTrailCompleted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4696e90
	struct ATrailNode* GetPreviousNode(struct ATrailNode* currentNode); // Function TheK30.PatrolTrailComponent.GetPreviousNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c88b0
	struct ATrailNode* GetNextNode(struct ATrailNode* currentNode); // Function TheK30.PatrolTrailComponent.GetNextNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c8810
	struct FVector GetLastPosition(); // Function TheK30.PatrolTrailComponent.GetLastPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c87d0
	struct ATrailNode* GetLastNode(); // Function TheK30.PatrolTrailComponent.GetLastNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c87a0
	struct ATrailNode* GetFirstNode(); // Function TheK30.PatrolTrailComponent.GetFirstNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c8710
	float GetCurrentTrailLength(); // Function TheK30.PatrolTrailComponent.GetCurrentTrailLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c86e0
	bool DoesTrailExist(); // Function TheK30.PatrolTrailComponent.DoesTrailExist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c86b0
	void Authority_StopRecordingTrail(); // Function TheK30.PatrolTrailComponent.Authority_StopRecordingTrail // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x58c8690
	void Authority_StartRecordingTrail(); // Function TheK30.PatrolTrailComponent.Authority_StartRecordingTrail // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x58c8670
};

// Class TheK30.S34P01
// Size: 0x4e8 (Inherited: 0x3c8)
struct US34P01 : UPerk {
	struct UChargeStrategy* _chargeStrategyWhenActive; // 0x3c8(0x08)
	struct UChargeableInteractionDefinition* _redirectedInteraction; // 0x3d0(0x08)
	struct FSecondaryInteractionProperties _startAccumulateSecondaryActionProperties; // 0x3d8(0x38)
	struct FSecondaryInteractionProperties _useTokensSecondaryActionProperties; // 0x410(0x38)
	char pad_448[0x3c]; // 0x448(0x3c)
	bool _isPerkActive; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct FTagStateBool _isAccumulatingTokens; // 0x488(0x30)
	char pad_4B8[0x4]; // 0x4b8(0x04)
	float _initialCountdownTime[0x3]; // 0x4bc(0x0c)
	float _accumulatedPercentMultiplier; // 0x4c8(0x04)
	char pad_4CC[0x1c]; // 0x4cc(0x1c)

	void Server_AbilityTwoPressed(bool IsPressed); // Function TheK30.S34P01.Server_AbilityTwoPressed // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x58c8c70
	void OnRep_IsPerkActive(); // Function TheK30.S34P01.OnRep_IsPerkActive // (Final|Native|Private) // @ game+0x58c8c30
	void OnRep_IsAccumulatingTokens(); // Function TheK30.S34P01.OnRep_IsAccumulatingTokens // (Final|Native|Private) // @ game+0x58c8c10
	void OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function TheK30.S34P01.OnDamageStateChanged // (Final|Native|Private) // @ game+0x58c8a30
	void Multicast_OnUseTokens(); // Function TheK30.S34P01.Multicast_OnUseTokens // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceeef0
	bool IsPerkActive(); // Function TheK30.S34P01.IsPerkActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c89e0
	float GetInitialCountdownAtLevel(); // Function TheK30.S34P01.GetInitialCountdownAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c8770
	void Cosmetic_OnUseCharge(struct ADBDPlayer* OwningPlayer); // Function TheK30.S34P01.Cosmetic_OnUseCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStopChargingPerk(struct ADBDPlayer* OwningPlayer); // Function TheK30.S34P01.Cosmetic_OnStopChargingPerk // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartChargingPerk(struct ADBDPlayer* OwningPlayer); // Function TheK30.S34P01.Cosmetic_OnStartChargingPerk // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFullCharge(struct ADBDPlayer* OwningPlayer); // Function TheK30.S34P01.Cosmetic_OnFullCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSkillCheckResponse(bool success, bool Bonus, struct ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, enum class ESkillCheckCustomType Type, float ChargeChange); // Function TheK30.S34P01.Authority_OnSkillCheckResponse // (Final|Native|Private) // @ game+0x58c8430
	void Authority_OnAccumulateRedirectedCharge(float ChargeAmount, float maxCharge); // Function TheK30.S34P01.Authority_OnAccumulateRedirectedCharge // (Final|Native|Public) // @ game+0x58c8360
};

// Class TheK30.S34P02
// Size: 0x3d0 (Inherited: 0x3c8)
struct US34P02 : UPerk {
	struct UStatusEffect* _revealKillerStatusClass; // 0x3c8(0x08)
};

// Class TheK30.S34P03
// Size: 0x498 (Inherited: 0x3c8)
struct US34P03 : UPerk {
	struct TArray<struct AGenerator*> _generatorsInRange; // 0x3c8(0x10)
	struct TMap<struct ADBDPlayer*, struct UStatusEffect*> _activeStatusEffects; // 0x3d8(0x50)
	char pad_428[0x50]; // 0x428(0x50)
	float _generatorRangeFromPlayer; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UStatusEffect* _repairSpeedModifierClass; // 0x480(0x08)
	float _repairSpeedValues[0x3]; // 0x488(0x0c)
	char pad_494[0x4]; // 0x494(0x04)

	float GetRepairSpeedAtLevel(); // Function TheK30.S34P03.GetRepairSpeedAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c8950
	float GetGeneratorRangeFromPlayer(); // Function TheK30.S34P03.GetGeneratorRangeFromPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c8740
};

// Class TheK30.TrailNode
// Size: 0x240 (Inherited: 0x230)
struct ATrailNode : AActor {
	struct FVector PreviousNodePosition; // 0x230(0x0c)
	char pad_23C[0x4]; // 0x23c(0x04)

	void OnRep_PreviousNodePosition(); // Function TheK30.TrailNode.OnRep_PreviousNodePosition // (Final|Native|Protected) // @ game+0x58c8c50
	bool IsOwnerLocallyObserved(); // Function TheK30.TrailNode.IsOwnerLocallyObserved // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c89b0
	bool IsFirstNode(); // Function TheK30.TrailNode.IsFirstNode // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c8980
	void Cosmetic_PrepareForRemoval(); // Function TheK30.TrailNode.Cosmetic_PrepareForRemoval // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Client_UpdateTrail(); // Function TheK30.TrailNode.Client_UpdateTrail // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

