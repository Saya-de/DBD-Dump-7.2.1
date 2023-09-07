// Class TheK31.K31DroneBaseAction
// Size: 0x30 (Inherited: 0x30)
struct UK31DroneBaseAction : UObject {
};

// Class TheK31.K31DroneChangeStateAction
// Size: 0x38 (Inherited: 0x30)
struct UK31DroneChangeStateAction : UK31DroneBaseAction {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TheK31.ActivateK31DroneAction
// Size: 0x38 (Inherited: 0x38)
struct UActivateK31DroneAction : UK31DroneChangeStateAction {
};

// Class TheK31.ActiveDroneZoneLingeringEffect
// Size: 0x3b8 (Inherited: 0x3b8)
struct UActiveDroneZoneLingeringEffect : UBaseLingeringStatusEffect {
};

// Class TheK31.Addon_K31Power_01
// Size: 0x2c8 (Inherited: 0x2b8)
struct UAddon_K31Power_01 : UItemAddon {
	struct UStatusEffect* _modifySkillCheckDifficultyEffectClass; // 0x2b8(0x08)
	float _skillCheckDifficultyModifier; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// Class TheK31.Addon_K31Power_02
// Size: 0x2d0 (Inherited: 0x2b8)
struct UAddon_K31Power_02 : UItemAddon {
	struct UStatusEffect* _blindnessEffectClass; // 0x2b8(0x08)
	float _blindnessEffectDuration; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UStatusEffect* _blindnessEffect; // 0x2c8(0x08)
};

// Class TheK31.Addon_K31Power_03
// Size: 0x2c8 (Inherited: 0x2b8)
struct UAddon_K31Power_03 : UItemAddon {
	struct UStatusEffect* _actionSpeedEffect; // 0x2b8(0x08)
	struct UStatusEffect* _hasteEffect; // 0x2c0(0x08)
};

// Class TheK31.Addon_K31Power_19
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_K31Power_19 : UItemAddon {
	float _batteryPercent; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	void Authority_OnLevelReadyToPlay(); // Function TheK31.Addon_K31Power_19.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5915a30
};

// Class TheK31.Addon_K31Power_20
// Size: 0x2e8 (Inherited: 0x2b8)
struct UAddon_K31Power_20 : UItemAddon {
	struct UK31PlayerZoneStatus* _playerZoneStatus; // 0x2b8(0x08)
	float _hasteEffectPercentageMultiplier; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UStatusEffect* _hasteEffectClass; // 0x2c8(0x08)
	struct UStatusEffect* _hasteEffect; // 0x2d0(0x08)
	struct TArray<struct AK31Drone*> _survivorActivatedDrones; // 0x2d8(0x10)
};

// Class TheK31.Addon_K31Power_21
// Size: 0x338 (Inherited: 0x2b8)
struct UAddon_K31Power_21 : UItemAddon {
	float _terrorRadiusSize; // 0x2b8(0x04)
	float _terrorRadiusDuration; // 0x2bc(0x04)
	struct TArray<enum class EK31DroneStateID> _allowedDroneStatesForEffectToApply; // 0x2c0(0x10)
	struct AK31Drone* _targetDrone; // 0x2d0(0x08)
	struct UTerrorRadiusEmitterComponent* _terrorRadius; // 0x2d8(0x08)
	char pad_2E0[0x30]; // 0x2e0(0x30)
	struct UStatusEffect* _indicatorEffectClass; // 0x310(0x08)
	struct UStatusEffect* _indicatorEffect; // 0x318(0x08)
	char pad_320[0x18]; // 0x320(0x18)

	void OnRep_TargetDrone(); // Function TheK31.Addon_K31Power_21.OnRep_TargetDrone // (Final|Native|Private) // @ game+0x59164d0
	void Authority_OnTerrorRadiusLifetimeTimerDone(); // Function TheK31.Addon_K31Power_21.Authority_OnTerrorRadiusLifetimeTimerDone // (Final|Native|Private) // @ game+0x5915dd0
	void Authority_OnGameEventReceived(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK31.Addon_K31Power_21.Authority_OnGameEventReceived // (Final|Native|Private|HasOutParms) // @ game+0x59155a0
};

// Class TheK31.DeployDroneInteraction
// Size: 0x650 (Inherited: 0x630)
struct UDeployDroneInteraction : UInteractionDefinition {
	bool _shouldDeploymentSetPowerOnCooldown; // 0x630(0x01)
	bool _canPlaceDroneWhilePowerIsOnCooldown; // 0x631(0x01)
	char pad_632[0x1e]; // 0x632(0x1e)
};

// Class TheK31.DroneRestrictedPlacementAreaStrategy
// Size: 0xc0 (Inherited: 0xa0)
struct UDroneRestrictedPlacementAreaStrategy : URestrictedPlacementAreaStrategy {
	char pad_A0[0x20]; // 0xa0(0x20)

	void OnDroneEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneEndPlay // (Final|Native|Private) // @ game+0x59162f0
	void OnDroneAcquiredChanged(bool acquired); // Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneAcquiredChanged // (Final|Native|Private) // @ game+0x5916260
};

// Class TheK31.HackableDroneState
// Size: 0x30 (Inherited: 0x30)
struct UHackableDroneState : UInterface {
};

// Class TheK31.HitPlayerInActiveZoneScoreEmitter
// Size: 0xb8 (Inherited: 0x38)
struct UHitPlayerInActiveZoneScoreEmitter : UPlayerScoreEmitter {
	float _activeZoneLingeringDuration; // 0x38(0x04)
	struct FGameplayTag _scoreEvent; // 0x3c(0x0c)
	struct TMap<struct AActor*, struct FActiveZoneOverlapTracker> _trackers; // 0x48(0x50)
	char pad_98[0x20]; // 0x98(0x20)
};

// Class TheK31.InspectK31DroneInteraction
// Size: 0x8d0 (Inherited: 0x760)
struct UInspectK31DroneInteraction : UChargeableInteractionDefinition {
	char pad_760[0x10]; // 0x760(0x10)
	struct UK31DroneActionProcessor* _actionProcessorClass; // 0x770(0x08)
	struct FDBDTunableRowHandle _inputInterval; // 0x778(0x28)
	struct UCurveFloat* _chargingSpeedCurve; // 0x7a0(0x08)
	struct UCurveFloat* _dechargingSpeedCurve; // 0x7a8(0x08)
	char pad_7B0[0x28]; // 0x7b0(0x28)
	struct UK31DroneActionProcessor* _actionProcessor; // 0x7d8(0x08)
	char pad_7E0[0xf0]; // 0x7e0(0xf0)

	void Server_SetIsPressingInput(bool isPressing); // Function TheK31.InspectK31DroneInteraction.Server_SetIsPressingInput // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x5916600
	void OnChargeCompletedChanged(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function TheK31.InspectK31DroneInteraction.OnChargeCompletedChanged // (Final|Native|Private|HasOutParms) // @ game+0x5916160
};

// Class TheK31.K31AnalyticsComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UK31AnalyticsComponent : UActorComponent {
	float _analyticInspectionTime; // 0xb8(0x04)
	char pad_BC[0x1c]; // 0xbc(0x1c)
};

// Class TheK31.K31AnimInstance
// Size: 0x660 (Inherited: 0x610)
struct UK31AnimInstance : UKillerAnimInstance {
	bool _isInspecting; // 0x610(0x01)
	bool _isDeployingADrone; // 0x611(0x01)
	bool _isReceivingADronePassively; // 0x612(0x01)
	bool _isRecallingADrone; // 0x613(0x01)
	bool _isActivatingADrone; // 0x614(0x01)
	char pad_615[0x3]; // 0x615(0x03)
	struct UCustomizationAnimationSelector* _animationSelector; // 0x618(0x08)
	char pad_620[0x40]; // 0x620(0x40)

	void ResetIsReceivingADronePassively(); // Function TheK31.K31AnimInstance.ResetIsReceivingADronePassively // (Final|Native|Protected|BlueprintCallable) // @ game+0x5916530
	void ResetIsRecallingADrone(); // Function TheK31.K31AnimInstance.ResetIsRecallingADrone // (Final|Native|Protected|BlueprintCallable) // @ game+0x5916510
	void ResetIsDeployingADrone(); // Function TheK31.K31AnimInstance.ResetIsDeployingADrone // (Final|Native|Protected|BlueprintCallable) // @ game+0x59164f0
	void ResetIsActivatingADrone(); // Function TheK31.K31AnimInstance.ResetIsActivatingADrone // (Final|Native|Protected|BlueprintCallable) // @ game+0x5889b90
	void OnGameEventReceived(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK31.K31AnimInstance.OnGameEventReceived // (Final|Native|Private|HasOutParms) // @ game+0x59163c0
	void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex); // Function TheK31.K31AnimInstance.OnCustomizationAnimationMappingIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	int32_t GetCustomizationMappingID(); // Function TheK31.K31AnimInstance.GetCustomizationMappingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5915f30
	struct TArray<struct FName> GetCustoAnimTags(); // Function TheK31.K31AnimInstance.GetCustoAnimTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5915eb0
};

// Class TheK31.K31ClawTrap
// Size: 0x230 (Inherited: 0x230)
struct AK31ClawTrap : AActor {

	void OnAnimNotifyManuallyRemoveTrap(); // Function TheK31.K31ClawTrap.OnAnimNotifyManuallyRemoveTrap // (Final|Native|Public|BlueprintCallable) // @ game+0x5916140
	void Cosmetic_Spark(); // Function TheK31.K31ClawTrap.Cosmetic_Spark // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTrapRemoved(bool wasRemovedAutomatically); // Function TheK31.K31ClawTrap.Cosmetic_OnTrapRemoved // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTrapAdded(); // Function TheK31.K31ClawTrap.Cosmetic_OnTrapAdded // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsBroadcastingChanged(bool isBroadcasting); // Function TheK31.K31ClawTrap.Cosmetic_OnIsBroadcastingChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnBatteryChargeUpdated(float newCharge); // Function TheK31.K31ClawTrap.Cosmetic_OnBatteryChargeUpdated // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK31.K31Drone
// Size: 0x418 (Inherited: 0x338)
struct AK31Drone : AInteractable {
	char pad_338[0x10]; // 0x338(0x10)
	struct USceneComponent* _movingRootComponent; // 0x348(0x08)
	struct UChildActorComponent* _laserChildActorComponent; // 0x350(0x08)
	struct UK31DroneLaserController* _laserController; // 0x358(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _droneMesh; // 0x360(0x08)
	struct UStaticMeshComponent* _activeZoneMesh; // 0x368(0x08)
	struct UK31DroneMovementComponent* _movementComponent; // 0x370(0x08)
	struct UK31DroneFlightController* _flightController; // 0x378(0x08)
	struct UAuthoritativePoolableActorComponent* _poolableActorComponent; // 0x380(0x08)
	struct UK31DroneOwnershipComponent* _ownershipComponent; // 0x388(0x08)
	struct UK31DroneStateController* _stateController; // 0x390(0x08)
	struct UK31DroneDebugComponent* _debugComponent; // 0x398(0x08)
	struct UK31DroneZoneComponent* _droneZoneComponent; // 0x3a0(0x08)
	struct UK31TrapProximitySensor* _trapProximitySensor; // 0x3a8(0x08)
	struct UK31DronePlacementRecaller* _placementRecallerComponent; // 0x3b0(0x08)
	struct UK31DroneHackableComponent* _hackableComponent; // 0x3b8(0x08)
	struct UK31DroneHackableAvoidanceSensor* _avoidanceSensor; // 0x3c0(0x08)
	struct UDeployDroneInteraction* _deployInteraction; // 0x3c8(0x08)
	struct UDBDNavModifierComponent* _navModifierComponent; // 0x3d0(0x08)
	struct UK31DroneDangerPredictionComponent* _dangerPredictionComponent; // 0x3d8(0x08)
	struct ADBDPlayer* _lastOwner; // 0x3e0(0x08)
	struct ULocalPlayerTrackerComponent* _localPlayerTracker; // 0x3e8(0x08)
	char pad_3F0[0x28]; // 0x3f0(0x28)

	void OnAcquiredChanged(bool acquired); // Function TheK31.K31Drone.OnAcquiredChanged // (Final|Native|Private) // @ game+0x59160b0
	void Native_OnLocallyObservedChanged(); // Function TheK31.K31Drone.Native_OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x5916090
	void Cosmetic_OnRevertToScoutingCurrentChargeChanged(float chargePercentage); // Function TheK31.K31Drone.Cosmetic_OnRevertToScoutingCurrentChargeChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLocallyObservedChanged(); // Function TheK31.K31Drone.Cosmetic_OnLocallyObservedChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsHackableStateChanged(bool IsHackable); // Function TheK31.K31Drone.Cosmetic_OnIsHackableStateChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK31.K31DroneActionProcessor
// Size: 0xb8 (Inherited: 0xb8)
struct UK31DroneActionProcessor : UActorComponent {

	void Server_RequestAction(struct FK31DroneActionRequest Request); // Function TheK31.K31DroneActionProcessor.Server_RequestAction // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x5916550
	void Client_ReceiveActionResponse(struct FK31DroneActionResponse Response); // Function TheK31.K31DroneActionProcessor.Client_ReceiveActionResponse // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5915df0
};

// Class TheK31.K31DroneState
// Size: 0x58 (Inherited: 0x30)
struct UK31DroneState : UObject {
	enum class EK31DroneStateID _id; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UK31DroneStateController* _stateController; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class TheK31.K31DroneActiveState
// Size: 0x410 (Inherited: 0x58)
struct UK31DroneActiveState : UK31DroneState {
	char pad_58[0x20]; // 0x58(0x20)
	struct FStatProperty _unhackableDuration; // 0x78(0x88)
	struct FStatProperty _revertToScoutingMaxDuration; // 0x100(0x88)
	struct FStatProperty _revertToScoutingMinDuration; // 0x188(0x88)
	struct FStatProperty _revertToScoutingRechargeRate; // 0x210(0x88)
	struct FStatProperty _revertToScoutingDechargeRate; // 0x298(0x88)
	struct FStatProperty _revertToScoutingDechargeDelay; // 0x320(0x88)
	bool _doNearbyClawTrapsDisableHacking; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UChargeableComponent* _revertToScoutingCharge; // 0x3b0(0x08)
	struct UTimerObject* _unhackableTimer; // 0x3b8(0x08)
	char pad_3C0[0x50]; // 0x3c0(0x50)

	float GetRevertToScoutingMaxCharge(); // Function TheK31.K31DroneActiveState.GetRevertToScoutingMaxCharge // (Final|Native|Public|BlueprintCallable) // @ game+0x5915f90
	float GetRevertToScoutingCurrentCharge(); // Function TheK31.K31DroneActiveState.GetRevertToScoutingCurrentCharge // (Final|Native|Public|BlueprintCallable) // @ game+0x5915f60
	void Authority_OnChargeDepleted(); // Function TheK31.K31DroneActiveState.Authority_OnChargeDepleted // (Final|Native|Private) // @ game+0x5915580
};

// Class TheK31.K31DroneAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UK31DroneAnimInstance : UAnimInstance {
	enum class EK31DroneStateID _droneState; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UK31DroneStateController* _droneStateController; // 0x2c8(0x08)
	struct AK31Drone* _owningDrone; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class TheK31.K31DroneBeingDeployed
// Size: 0x58 (Inherited: 0x58)
struct UK31DroneBeingDeployed : UK31DroneState {
};

// Class TheK31.K31DroneBeingHackedState
// Size: 0x78 (Inherited: 0x58)
struct UK31DroneBeingHackedState : UK31DroneState {
	char pad_58[0x20]; // 0x58(0x20)
};

// Class TheK31.K31DroneDangerPredictionComponent
// Size: 0x140 (Inherited: 0xd0)
struct UK31DroneDangerPredictionComponent : UDBDDangerPredictionComponent {
	char pad_D0[0x50]; // 0xd0(0x50)
	float _minimumTraverseAngle; // 0x120(0x04)
	float _maximumTraverseAngle; // 0x124(0x04)
	float _waitRangeMargin; // 0x128(0x04)
	float _crouchingHeightDifference; // 0x12c(0x04)
	float _maxCrouchRange; // 0x130(0x04)
	float _activeUnhackableWeight; // 0x134(0x04)
	float _activeHackableWeight; // 0x138(0x04)
	float _scoutingWeight; // 0x13c(0x04)
};

// Class TheK31.K31DroneDebugComponent
// Size: 0xf8 (Inherited: 0xb8)
struct UK31DroneDebugComponent : UActorComponent {
	char pad_B8[0x40]; // 0xb8(0x40)
};

// Class TheK31.K31DroneDestroyedState
// Size: 0x58 (Inherited: 0x58)
struct UK31DroneDestroyedState : UK31DroneState {
};

// Class TheK31.K31DroneFlightController
// Size: 0xd8 (Inherited: 0xb8)
struct UK31DroneFlightController : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct UGameplayTagContainerComponent* _objectState; // 0xd0(0x08)
};

// Class TheK31.K31DroneHackableAvoidanceSensor
// Size: 0x238 (Inherited: 0xb8)
struct UK31DroneHackableAvoidanceSensor : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct FDBDTunableRowHandle _survivorOverlapDetectionTime; // 0x100(0x28)
	struct UPrimitiveComponent* _killerDetectionPrimitive; // 0x128(0x08)
	struct UPrimitiveComponent* _survivorDetectionPrimitive; // 0x130(0x08)
	char pad_138[0x30]; // 0x138(0x30)
	struct TSet<struct ADBDPlayer*> _overlappingSurvivors; // 0x168(0x50)
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct TMap<struct ADBDPlayer*, bool> _overlappingKillerToVisibilityMap; // 0x1c0(0x50)
	char pad_210[0x28]; // 0x210(0x28)

	void Init(struct UPrimitiveComponent* killerPrimitive, struct UPrimitiveComponent* survivorPrimitive); // Function TheK31.K31DroneHackableAvoidanceSensor.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x5915fc0
	void Authority_OnSurvivorCollisionEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionEnd // (Final|Native|Private) // @ game+0x5915c70
	void Authority_OnSurvivorCollisionBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionBegin // (Final|Native|Private|HasOutParms) // @ game+0x5915a50
	void Authority_OnKillerCollisionEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionEnd // (Final|Native|Private) // @ game+0x59158d0
	void Authority_OnKillerCollisionBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionBegin // (Final|Native|Private|HasOutParms) // @ game+0x59156b0
};

// Class TheK31.K31DroneHackableComponent
// Size: 0x140 (Inherited: 0xb8)
struct UK31DroneHackableComponent : UActorComponent {
	struct FDBDTunableRowHandle _unhackableClearanceCooldownDuration; // 0xb8(0x28)
	bool _isHackable; // 0xe0(0x01)
	char pad_E1[0x5f]; // 0xe1(0x5f)

	void OnRep_IsHackable(); // Function TheK31.K31DroneHackableComponent.OnRep_IsHackable // (Final|Native|Private) // @ game+0x5919c10
	bool IsHackable(); // Function TheK31.K31DroneHackableComponent.IsHackable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4696e90
};

// Class TheK31.K31DroneInitializingState
// Size: 0xe8 (Inherited: 0x58)
struct UK31DroneInitializingState : UK31DroneState {
	struct FStatProperty _initializingDuration; // 0x58(0x88)
	struct UTimerObject* _initializingTimer; // 0xe0(0x08)
};

// Class TheK31.K31DroneInStashState
// Size: 0x70 (Inherited: 0x58)
struct UK31DroneInStashState : UK31DroneState {
	char pad_58[0x18]; // 0x58(0x18)
};

// Class TheK31.K31DroneLaserController
// Size: 0xf8 (Inherited: 0xb8)
struct UK31DroneLaserController : UActorComponent {
	struct ULocalPlayerTrackerComponent* _localPlayerTracker; // 0xb8(0x08)
	struct ADBDPlayer* _locallyObservedPlayer; // 0xc0(0x08)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct AK31DroneLaserScanActor* _laserActor; // 0xf0(0x08)

	void OnLocallyObservedChanged(); // Function TheK31.K31DroneLaserController.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x5919b00
};

// Class TheK31.K31DroneLaserScanActor
// Size: 0x550 (Inherited: 0x230)
struct AK31DroneLaserScanActor : AActor {
	struct UMaterialInstance* LaserScanMeshMaterial; // 0x230(0x08)
	float StaticCapturesLightAngle; // 0x238(0x04)
	float DynamicCapturesLightAngle; // 0x23c(0x04)
	float DepthCaptureNearPlaneOffset; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UStaticMeshComponent* FrontLaserScanSM; // 0x248(0x08)
	struct UStaticMeshComponent* BackLaserScanSM; // 0x250(0x08)
	struct UGMShadowDepthCaptureComponent* FrontDepthCaptureComponentDynamic; // 0x258(0x08)
	struct UGMShadowDepthCaptureComponent* BackDepthCaptureComponentDynamic; // 0x260(0x08)
	struct UGMShadowDepthCaptureComponent* XDepthCaptureComponentStatic; // 0x268(0x08)
	struct UGMShadowDepthCaptureComponent* YDepthCaptureComponentStatic; // 0x270(0x08)
	struct UGMShadowDepthCaptureComponent* NegXDepthCaptureComponentStatic; // 0x278(0x08)
	struct UGMShadowDepthCaptureComponent* NegYDepthCaptureComponentStatic; // 0x280(0x08)
	struct FBHVRPerDetailModeInt DynamicDepthCaptureSizeWidth; // 0x288(0xa0)
	struct FBHVRPerDetailModeInt DynamicDepthCaptureSizeHeight; // 0x328(0xa0)
	struct FBHVRPerDetailModeInt StaticDepthCaptureSizeWidth; // 0x3c8(0xa0)
	struct FBHVRPerDetailModeInt StaticDepthCaptureSizeHeight; // 0x468(0xa0)
	char pad_508[0x48]; // 0x508(0x48)

	void UpdateLaserScanMeshMaterial(struct UMaterialInstance* newLaserScanMeshMaterial); // Function TheK31.K31DroneLaserScanActor.UpdateLaserScanMeshMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5919d60
	void RequestStaticDepthCapturesUpdate(); // Function TheK31.K31DroneLaserScanActor.RequestStaticDepthCapturesUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x5919d40
	void InitDroneLaserScan(); // Function TheK31.K31DroneLaserScanActor.InitDroneLaserScan // (Final|Native|Public|BlueprintCallable) // @ game+0x5919950
	void DeactivateDroneLaserScan(); // Function TheK31.K31DroneLaserScanActor.DeactivateDroneLaserScan // (Final|Native|Public|BlueprintCallable) // @ game+0x5919790
	void ActivateDroneLaserScan(); // Function TheK31.K31DroneLaserScanActor.ActivateDroneLaserScan // (Final|Native|Public|BlueprintCallable) // @ game+0x5919770
};

// Class TheK31.K31DroneMovementComponent
// Size: 0x540 (Inherited: 0xf8)
struct UK31DroneMovementComponent : UMovementComponent {
	char pad_F8[0x48]; // 0xf8(0x48)
	struct FMulticastInlineDelegate OnDeployLocationChangedEvent; // 0x140(0x10)
	struct FMulticastInlineDelegate OnAttachToCharacterForDeployChangedEvent; // 0x150(0x10)
	struct FMulticastInlineDelegate OnAccelerationChangedEvent; // 0x160(0x10)
	struct FMulticastInlineDelegate OnFlightHeightChangedBlueprintEvent; // 0x170(0x10)
	struct FMulticastInlineDelegate OnMovementModeChangedBlueprintEvent; // 0x180(0x10)
	struct FStatProperty _rotationRate; // 0x190(0x88)
	float _rotationLerpTime; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FDBDTunableRowHandle _minHeightAboveGround; // 0x220(0x28)
	struct FDBDTunableRowHandle _maxHeightAboveGround; // 0x248(0x28)
	struct FDBDTunableRowHandle _heightAdjustmentMovingTime; // 0x270(0x28)
	float _deployMovementSpeed; // 0x298(0x04)
	float _replicationFrequency; // 0x29c(0x04)
	float _smoothingTime; // 0x2a0(0x04)
	float _maxSmoothUpdateDistance; // 0x2a4(0x04)
	float _noSmoothUpdateDistance; // 0x2a8(0x04)
	struct FName _deployCharacterSocket; // 0x2ac(0x0c)
	float _maxTravelDistance; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	float _maxDeployTime; // 0x2c0(0x04)
	float _gravity; // 0x2c4(0x04)
	float _velocityInterpolationAlpha; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UCurveFloat* _constantSpeedToAccelerationCurve; // 0x2d0(0x08)
	char pad_2D8[0x60]; // 0x2d8(0x60)
	struct AGameStateBase* _gameState; // 0x338(0x08)
	char pad_340[0x40]; // 0x340(0x40)
	struct FDroneDeployDatum _localDeployDatum; // 0x380(0x30)
	struct AActor* _interactingActor; // 0x3b0(0x08)
	char pad_3B8[0x30]; // 0x3b8(0x30)
	struct TArray<struct USceneComponent*> _additionalRotatingComponents; // 0x3e8(0x10)
	struct USceneComponent* _updatedComponentOriginalParent; // 0x3f8(0x08)
	char pad_400[0xd0]; // 0x400(0xd0)
	struct FDroneRepMovement _replicatedMovement; // 0x4d0(0x38)
	struct FDroneDeployDatum _repDeployDatum; // 0x508(0x30)
	char pad_538[0x8]; // 0x538(0x08)

	void OnRep_ReplicatedMovement(struct FDroneRepMovement& oldRepMovement); // Function TheK31.K31DroneMovementComponent.OnRep_ReplicatedMovement // (Final|Native|Private|HasOutParms) // @ game+0x5919c30
	void OnRep_DeployDatum(struct FDroneDeployDatum& oldDeployDatum); // Function TheK31.K31DroneMovementComponent.OnRep_DeployDatum // (Final|Native|Private|HasOutParms) // @ game+0x5919b40
	void OnDeployLocationChangedEvent__DelegateSignature(); // DelegateFunction TheK31.K31DroneMovementComponent.OnDeployLocationChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnAttachToCharacterForDeployChangedEvent__DelegateSignature(); // DelegateFunction TheK31.K31DroneMovementComponent.OnAttachToCharacterForDeployChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnAccelerationChangedEvent__DelegateSignature(struct FVector& Acceleration); // DelegateFunction TheK31.K31DroneMovementComponent.OnAccelerationChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x5e02c90
	void MovementBlueprintEvent__DelegateSignature(); // DelegateFunction TheK31.K31DroneMovementComponent.MovementBlueprintEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsMeshAttachedToCharacterForDeploy(); // Function TheK31.K31DroneMovementComponent.IsMeshAttachedToCharacterForDeploy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5919970
	bool HasReachedDeployLocation(); // Function TheK31.K31DroneMovementComponent.HasReachedDeployLocation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5919920
	enum class EDroneFlyingHeight GetTargetFlightHeight(); // Function TheK31.K31DroneMovementComponent.GetTargetFlightHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59198f0
	enum class EK31DroneMovementMode GetMovementMode(); // Function TheK31.K31DroneMovementComponent.GetMovementMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59198c0
	float GetDistanceToTarget(); // Function TheK31.K31DroneMovementComponent.GetDistanceToTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5919890
};

// Class TheK31.K31DroneOutlineUpdateStrategy
// Size: 0x130 (Inherited: 0xc0)
struct UK31DroneOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _killerColorNormal; // 0xc0(0x10)
	struct FLinearColor _killerColorActive; // 0xd0(0x10)
	struct FLinearColor _killerColorSelected; // 0xe0(0x10)
	struct FLinearColor _survivorColor; // 0xf0(0x10)
	struct TArray<enum class EK31DroneStateID> _invalidStates; // 0x100(0x10)
	float _killerMinimumDistance; // 0x110(0x04)
	float _survivorMinimumDistance; // 0x114(0x04)
	float _survivorMaximumDistanceXY; // 0x118(0x04)
	char pad_11C[0x14]; // 0x11c(0x14)
};

// Class TheK31.K31DroneOwnershipComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UK31DroneOwnershipComponent : UActorComponent {
	char pad_B8[0x28]; // 0xb8(0x28)
};

// Class TheK31.K31DronePlacementRecaller
// Size: 0x138 (Inherited: 0xb8)
struct UK31DronePlacementRecaller : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _maxDistanceXY; // 0xd0(0x28)
	struct FDBDTunableRowHandle _maxDistanceZ; // 0xf8(0x28)
	char pad_120[0x18]; // 0x120(0x18)
};

// Class TheK31.K31DronePlacementStrategy
// Size: 0x168 (Inherited: 0xf0)
struct UK31DronePlacementStrategy : UObjectPlacementValidationWithRestrictionStrategy {
	struct FDBDTunableRowHandle _sphereSweepRadius; // 0xf0(0x28)
	struct FDBDTunableRowHandle _minHeightAboveGround; // 0x118(0x28)
	struct FDBDTunableRowHandle _maxHeightAboveGround; // 0x140(0x28)
};

// Class TheK31.K31DroneRecallingState
// Size: 0xb0 (Inherited: 0x58)
struct UK31DroneRecallingState : UK31DroneState {
	char pad_58[0x30]; // 0x58(0x30)
	struct FDBDTunableRowHandle _recallingDuration; // 0x88(0x28)
};

// Class TheK31.K31DroneScoutDetectionComponent
// Size: 0x2c0 (Inherited: 0xb8)
struct UK31DroneScoutDetectionComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct FK31DroneScoutDetectionSphereRaycastStruct> _raycastSphereData; // 0xd0(0x10)
	struct TMap<struct ACamperPlayer*, struct FSurvivorDroneFrameDatum> _survivorLastFrameData; // 0xe0(0x50)
	struct TMap<struct ACamperPlayer*, struct FSurvivorDroneFrameDatum> _survivorCurrentFrameData; // 0x130(0x50)
	struct TArray<struct ACamperPlayer*> _detectedSurvivors; // 0x180(0x10)
	char pad_190[0x90]; // 0x190(0x90)
	struct FDBDTunableRowHandle _baseDetectionConeYawHalfAngleDegrees; // 0x220(0x28)
	struct FDBDTunableRowHandle _baseDetectionHalfHeight; // 0x248(0x28)
	struct FDBDTunableRowHandle _baseDetectionRadius; // 0x270(0x28)
	struct FDBDTunableRowHandle _sphereTraceRadius; // 0x298(0x28)

	void OnLaserDeactivate(struct UActorComponent* Component); // Function TheK31.K31DroneScoutDetectionComponent.OnLaserDeactivate // (Final|Native|Private) // @ game+0x5919a70
	void OnLaserActive(struct UActorComponent* Component, bool Reset); // Function TheK31.K31DroneScoutDetectionComponent.OnLaserActive // (Final|Native|Private) // @ game+0x59199a0
};

// Class TheK31.K31DroneScoutingState
// Size: 0xc8 (Inherited: 0x58)
struct UK31DroneScoutingState : UK31DroneState {
	char pad_58[0x70]; // 0x58(0x70)
};

// Class TheK31.K31DroneStateController
// Size: 0x188 (Inherited: 0xb8)
struct UK31DroneStateController : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct FMulticastInlineDelegate OnStateChangedBlueprintEvent; // 0xe8(0x10)
	struct TArray<struct UK31DroneState*> _stateClasses; // 0xf8(0x10)
	struct UK31DroneState* _defaultStateClass; // 0x108(0x08)
	struct AGameStateBase* _gameState; // 0x110(0x08)
	char pad_118[0x18]; // 0x118(0x18)
	struct TArray<struct UK31DroneState*> _states; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)
	struct FK31DroneTimestampedState _local_currentState; // 0x150(0x18)
	struct FK31DroneTimestampedState _authority_RepCurrentState; // 0x168(0x18)
	char pad_180[0x8]; // 0x180(0x08)

	void OnStateChangedBlueprintEvent__DelegateSignature(enum class EK31DroneStateID oldState, enum class EK31DroneStateID NewState); // DelegateFunction TheK31.K31DroneStateController.OnStateChangedBlueprintEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnRep_States(); // Function TheK31.K31DroneStateController.OnRep_States // (Final|Native|Private) // @ game+0x5919d20
	void OnRep_AuthorityRepCurrentState(); // Function TheK31.K31DroneStateController.OnRep_AuthorityRepCurrentState // (Final|Native|Private) // @ game+0x5919b20
	enum class EK31DroneStateID GetCurrentStateID(); // Function TheK31.K31DroneStateController.GetCurrentStateID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59197b0
};

// Class TheK31.K31DroneTargeter
// Size: 0x150 (Inherited: 0xb8)
struct UK31DroneTargeter : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct ADBDActorIndicator* _indicatorClass; // 0xd0(0x08)
	struct FDBDTunableRowHandle _maxAngleFromScreenCenter; // 0xd8(0x28)
	char pad_100[0x28]; // 0x100(0x28)
	struct ADBDActorIndicator* _indicator; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
	struct AK31Drone* _target; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)
};

// Class TheK31.K31DroneZoneComponent
// Size: 0x180 (Inherited: 0xb8)
struct UK31DroneZoneComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TMap<struct ADBDPlayer*, struct FK31PlayerDroneZoneStruct> _playerDroneZoneStructMap; // 0xd0(0x50)
	char pad_120[0x10]; // 0x120(0x10)
	struct FDBDTunableRowHandle _maxDistanceXY; // 0x130(0x28)
	struct FDBDTunableRowHandle _maxDistanceZ; // 0x158(0x28)
};

// Class TheK31.K31HasteEffect
// Size: 0x350 (Inherited: 0x350)
struct UK31HasteEffect : UStatusEffect {
};

// Class TheK31.K31InspectRadarScoreEmitter
// Size: 0xb0 (Inherited: 0x38)
struct UK31InspectRadarScoreEmitter : UPlayerScoreEmitter {
	float _timeAwaitingForInspect; // 0x38(0x04)
	char pad_3C[0x74]; // 0x3c(0x74)
};

// Class TheK31.K31MenuAnimInstance
// Size: 0x310 (Inherited: 0x300)
struct UK31MenuAnimInstance : UBaseMenuAnimInstance {
	struct UCustomizationAnimationSelector* _animationSelector; // 0x2f8(0x08)
	char pad_308[0x8]; // 0x308(0x08)

	void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex); // Function TheK31.K31MenuAnimInstance.OnCustomizationAnimationMappingIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	int32_t GetCustomizationMappingID(); // Function TheK31.K31MenuAnimInstance.GetCustomizationMappingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5919860
	struct TArray<struct FName> GetCustoAnimTags(); // Function TheK31.K31MenuAnimInstance.GetCustoAnimTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59197e0
};

// Class TheK31.K31P01
// Size: 0x400 (Inherited: 0x3c8)
struct UK31P01 : UPerk {
	float _hasteEffectMovementSpeedIncrease; // 0x3c8(0x04)
	float _hasteEffectDurationSeconds[0x3]; // 0x3cc(0x0c)
	struct UStatusEffect* _authority_hasteStatusEffect; // 0x3d8(0x08)
	struct UStatusEffect* _hasteEffectClass; // 0x3e0(0x08)
	bool _isPerkActive; // 0x3e8(0x01)
	char pad_3E9[0x17]; // 0x3e9(0x17)

	float GetHasteEffectMovementSpeedIncrease(); // Function TheK31.K31P01.GetHasteEffectMovementSpeedIncrease // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
	float GetHasteEffectDurationAtLevel(); // Function TheK31.K31P01.GetHasteEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
};

// Class TheK31.K31P02
// Size: 0x3e8 (Inherited: 0x3c8)
struct UK31P02 : UPerk {
	struct UStatusEffect* _revealAuraToKillerEffectClass; // 0x3c8(0x08)
	float _revealAuraSeconds; // 0x3d0(0x04)
	float _screamDistance[0x3]; // 0x3d4(0x0c)
	char pad_3E0[0x4]; // 0x3e0(0x04)
	bool _isPerkActive; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)

	void Multicast_RevealAndMakeSurvivorScream(struct ACamperPlayer* Survivor); // Function TheK31.K31P02.Multicast_RevealAndMakeSurvivorScream // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4ceef10
	float GetScreamDistance(); // Function TheK31.K31P02.GetScreamDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetRevealAuraSeconds(); // Function TheK31.K31P02.GetRevealAuraSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4340
	float GetActivePerkDurationAtLevel(); // Function TheK31.K31P02.GetActivePerkDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x591d8b0
	void BP_RevealAndMakeSurvivorScream(struct ACamperPlayer* survivorPlayer); // Function TheK31.K31P02.BP_RevealAndMakeSurvivorScream // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK31.K31P03
// Size: 0x400 (Inherited: 0x3c8)
struct UK31P03 : UPerk {
	float _healPenalty[0x3]; // 0x3c8(0x0c)
	float _reduceHealingSpeedEffectSeconds; // 0x3d4(0x04)
	struct UStatusEffect* _reduceHealingSpeedEffectClass; // 0x3d8(0x08)
	struct TArray<struct UStatusEffect*> _survivorDebuffs; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	float GetReduceHealingSpeedEffectSeconds(); // Function TheK31.K31P03.GetReduceHealingSpeedEffectSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6c0
	float GetHealPenaltyAtLevel(); // Function TheK31.K31P03.GetHealPenaltyAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK31.K31PlayerZoneStatus
// Size: 0x180 (Inherited: 0xb8)
struct UK31PlayerZoneStatus : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct TMap<struct UK31DroneZoneComponent*, struct FK31DroneZoneOverlapDatum> _overlappingZones; // 0x100(0x50)
	char pad_150[0x30]; // 0x150(0x30)
};

// Class TheK31.K31Power
// Size: 0x710 (Inherited: 0x4c8)
struct AK31Power : ACollectable {
	char pad_4C8[0x48]; // 0x4c8(0x48)
	struct UK31PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent; // 0x510(0x08)
	struct UK31PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent; // 0x518(0x08)
	struct UK31SurvivorDetection* _survivorDetectionClass; // 0x520(0x08)
	struct TArray<struct FStatusEffectSpawnData> _effects; // 0x528(0x10)
	struct UStatusEffect* _authority_scannerHasteEffect; // 0x538(0x08)
	struct UStatusEffect* _scannerHasteEffectClass; // 0x540(0x08)
	struct UInteractor* _interactor; // 0x548(0x08)
	struct UActorPoolInitializer* _dronePoolInitializer; // 0x550(0x08)
	struct UAuthoritativeActorPoolComponent* _dronePool; // 0x558(0x08)
	struct UK31Scanner* _scanner; // 0x560(0x08)
	char pad_568[0x3c]; // 0x568(0x3c)
	enum class EK31PowerState _powerState; // 0x5a4(0x01)
	char pad_5A5[0xb]; // 0x5a5(0x0b)
	struct FPlayerStatusEffectSpawnerHelper _effectSpawner; // 0x5b0(0x88)
	struct UK31SurvivorClawTrapComponent* _survivorClawTrapComponentClass; // 0x638(0x08)
	struct UTimerObject* _powerCooldownTimer; // 0x640(0x08)
	char pad_648[0x38]; // 0x648(0x38)
	struct FStatProperty _powerCooldownDuration; // 0x680(0x88)
	struct UCurveFloat* _hasteCurveBasedOnScannedSurvivors; // 0x708(0x08)

	void OnRepPowerState(); // Function TheK31.K31Power.OnRepPowerState // (Final|Native|Private|Const) // @ game+0x591dbe0
	void OnRepPowerCooldownTimer(); // Function TheK31.K31Power.OnRepPowerCooldownTimer // (Final|Native|Private) // @ game+0x591dbc0
	void Authority_UpdateHasteBasedOnScannedSurvivors(); // Function TheK31.K31Power.Authority_UpdateHasteBasedOnScannedSurvivors // (Final|Native|Private|Const) // @ game+0x591d890
};

// Class TheK31.K31PowerChargePresentationItemProgressComponent
// Size: 0xe0 (Inherited: 0xc0)
struct UK31PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	char pad_C0[0x18]; // 0xc0(0x18)
	struct AK31Power* _originatingPower; // 0xd8(0x08)
};

// Class TheK31.K31PowerChargePresentationPowerFadeComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UK31PowerChargePresentationPowerFadeComponent : UPresentationPowerFadeComponent {
	struct AK31Power* _originatingPower; // 0xb8(0x08)
};

// Class TheK31.K31PowerCosmeticHelper
// Size: 0xe0 (Inherited: 0xb8)
struct UK31PowerCosmeticHelper : UActorComponent {
	char pad_B8[0x28]; // 0xb8(0x28)

	void Cosmetic_IsOnPowerCooldownUpdatedEvent(bool isPowerOnCooldown); // Function TheK31.K31PowerCosmeticHelper.Cosmetic_IsOnPowerCooldownUpdatedEvent // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent(bool doesRadarDetectAnySurvivors); // Function TheK31.K31PowerCosmeticHelper.Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK31.K31PowerSubAnimInstance
// Size: 0x320 (Inherited: 0x2f0)
struct UK31PowerSubAnimInstance : UDBDBaseAnimInstance {
	bool _isChargingInspection; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float _inspectPlayRate; // 0x2f4(0x04)
	float _inspectSequenceStartPosition; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UAnimSequence* _inspectSequence; // 0x300(0x08)
	char pad_308[0x18]; // 0x308(0x18)
};

// Class TheK31.K31RadarAnimInstance
// Size: 0x300 (Inherited: 0x2c0)
struct UK31RadarAnimInstance : UAnimInstance {
	bool _isRecallingADrone; // 0x2c0(0x01)
	bool _isActivatingADrone; // 0x2c1(0x01)
	bool _isAbleToPlaceDrone; // 0x2c2(0x01)
	bool _isPowerOnCooldown; // 0x2c3(0x01)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct AK31Power* _owningK31Power; // 0x2c8(0x08)
	struct ASlasherPlayer* _killer; // 0x2d0(0x08)
	char pad_2D8[0x28]; // 0x2d8(0x28)

	void ResetIsRecallingADrone(); // Function TheK31.K31RadarAnimInstance.ResetIsRecallingADrone // (Final|Native|Protected|BlueprintCallable) // @ game+0x591dde0
	void ResetIsActivatingADrone(); // Function TheK31.K31RadarAnimInstance.ResetIsActivatingADrone // (Final|Native|Protected|BlueprintCallable) // @ game+0x591ddc0
	void OnGameEventReceived(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK31.K31RadarAnimInstance.OnGameEventReceived // (Final|Native|Private|HasOutParms) // @ game+0x591da90
};

// Class TheK31.K31Scanner
// Size: 0x230 (Inherited: 0xb8)
struct UK31Scanner : UActorComponent {
	struct FMulticastInlineDelegate OnScannerUpdated; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FStatProperty _radarRadius; // 0xe0(0x88)
	struct FDBDTunableRowHandle _levelHeightThreshold; // 0x168(0x28)
	struct UTexture* _debugPointTexture; // 0x190(0x08)
	char pad_198[0x28]; // 0x198(0x28)
	struct AActor* _owningActor; // 0x1c0(0x08)
	char pad_1C8[0x10]; // 0x1c8(0x10)
	struct TSet<struct ADBDPlayer*> _playersShownOnRadar; // 0x1d8(0x50)
	char pad_228[0x8]; // 0x228(0x08)

	void OnScannerUpdated__DelegateSignature(); // DelegateFunction TheK31.K31Scanner.OnScannerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	struct TArray<struct FLinearColor> GetEncodedPoints(); // Function TheK31.K31Scanner.GetEncodedPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x591d8e0
};

// Class TheK31.K31SurvivorAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct UK31SurvivorAnimInstance : UBaseSurvivorAnimInstance {
	bool _hasBeenSpottedByDrone; // 0x550(0x01)
	bool _isInsideAnActiveDroneZone; // 0x551(0x01)
	bool _isClawTrapped; // 0x552(0x01)
	bool _isRemovingClawTrap; // 0x553(0x01)
	bool _isHackingDrone; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	float _walkAnimSpeed; // 0x558(0x04)
	bool _isCrawling; // 0x55c(0x01)
	bool _isInsideCloset; // 0x55d(0x01)
	bool _isDead; // 0x55e(0x01)
	bool _isInteracting; // 0x55f(0x01)
	bool _isInjured; // 0x560(0x01)
	bool _isCrouched; // 0x561(0x01)
	bool _isHooked; // 0x562(0x01)
	bool _isIdle; // 0x563(0x01)
	bool _isUsingAimItem; // 0x564(0x01)
	bool _isInAir; // 0x565(0x01)
	bool _isBeingHealed; // 0x566(0x01)
	bool _isBeingCarried; // 0x567(0x01)
	char pad_568[0x8]; // 0x568(0x08)
};

// Class TheK31.K31SurvivorClawTrapComponent
// Size: 0x1d0 (Inherited: 0xb8)
struct UK31SurvivorClawTrapComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UTimerObject* _batteryChargeTimer; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct AK31Power* _originatingPower; // 0xd0(0x08)
	bool _isTrapped; // 0xd8(0x01)
	bool _isBroadcasting; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct USurvivorRemoveClawTrapInteraction* _removeClawTrapInteraction; // 0xe0(0x08)
	struct USurvivorRemoveClawTrapInteraction* _removeClawTrapInteractionClass; // 0xe8(0x08)
	struct AK31ClawTrap* _clawTrap; // 0xf0(0x08)
	struct AK31ClawTrap* _clawTrapClass; // 0xf8(0x08)
	struct FName _clawTrapAttachSocket; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UK31PlayerZoneStatus* _authority_playerZoneStatus; // 0x110(0x08)
	struct FClawTrapUntrapDatum _lastUntrapDatum; // 0x118(0x08)
	bool _wasLastRemovedAutomatically; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct AK31Drone* _authority_originatingDrone; // 0x128(0x08)
	struct FStatProperty _batteryMaxCharge; // 0x130(0x88)
	char pad_1B8[0x18]; // 0x1b8(0x18)

	void OnRep_RemoveClawTrapInteraction(); // Function TheK31.K31SurvivorClawTrapComponent.OnRep_RemoveClawTrapInteraction // (Final|Native|Private) // @ game+0x591dda0
	void OnRep_OriginatingPower(struct AK31Power* oldPower); // Function TheK31.K31SurvivorClawTrapComponent.OnRep_OriginatingPower // (Final|Native|Private) // @ game+0x591dc80
	void OnRep_IsTrapped(); // Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsTrapped // (Final|Native|Private) // @ game+0x591dc60
	void OnRep_IsBroadcasting(); // Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsBroadcasting // (Final|Native|Private) // @ game+0x591dc20
	void OnIntroCompleted(); // Function TheK31.K31SurvivorClawTrapComponent.OnIntroCompleted // (Final|Native|Private) // @ game+0x591dba0
	void OnCamperEscaped(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK31.K31SurvivorClawTrapComponent.OnCamperEscaped // (Final|Native|Private|HasOutParms) // @ game+0x591d980
	void Authority_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function TheK31.K31SurvivorClawTrapComponent.Authority_OnDamageStateChanged // (Final|Native|Private) // @ game+0x591d5b0
};

// Class TheK31.K31SurvivorCosmeticHelperActor
// Size: 0x2d0 (Inherited: 0x270)
struct AK31SurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	struct UK31PlayerZoneStatus* _playerZoneStatus; // 0x270(0x08)
	char pad_278[0x30]; // 0x278(0x30)
	struct FDBDTunableRowHandle _enterActiveZoneCosmeticCooldown; // 0x2a8(0x28)

	void Cosmetic_UpdateLockOnProgress(float currentProgressPercent, bool IsFullyLockedOn); // Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_UpdateLockOnProgress // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsTrappedByClawTrap(bool IsTrapped); // Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsTrappedByClawTrap // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner(bool isSurvivorDetectedAndVisibleOnScanner); // Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsOverlappingActiveZoneChanged(bool isOverlappingActiveZone); // Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsOverlappingActiveZoneChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsBroadcasting(bool isBroadcasting); // Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsBroadcasting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDetectedByDrone(struct AK31Drone* Drone, bool isOnCooldown); // Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnDetectedByDrone // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK31.K31SurvivorDetection
// Size: 0x470 (Inherited: 0xb8)
struct UK31SurvivorDetection : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UK31SurvivorExposedEffect* _effectClass; // 0xc0(0x08)
	struct FStatProperty _secondsToCharge; // 0xc8(0x88)
	struct FStatProperty _chargeRate; // 0x150(0x88)
	struct FStatProperty _chargeModifierWhenClawTrapped; // 0x1d8(0x88)
	struct FStatProperty _dechargeDelay; // 0x260(0x88)
	struct FStatProperty _dechargeRate; // 0x2e8(0x88)
	struct FStatProperty _fullyLockedOnDuration; // 0x370(0x88)
	struct UK31PlayerZoneStatus* _playerZoneStatus; // 0x3f8(0x08)
	struct AK31Power* _originatingPower; // 0x400(0x08)
	struct UChargeableComponent* _chargingLockedOnChargeableComponent; // 0x408(0x08)
	struct UTimerObject* _fullyLockedOnTimer; // 0x410(0x08)
	bool _isFullyLockedOn; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UStatusEffect* _effect; // 0x420(0x08)
	struct TArray<struct AK31Drone*> _overlappingDrones; // 0x428(0x10)
	struct TArray<struct AK31Drone*> _overlappingActiveDrones; // 0x438(0x10)
	float _lastActiveTime; // 0x448(0x04)
	char pad_44C[0x24]; // 0x44c(0x24)

	void OnRep_OriginatingPower(struct AK31Power* oldPower); // Function TheK31.K31SurvivorDetection.OnRep_OriginatingPower // (Final|Native|Private) // @ game+0x591dd10
	void OnRep_IsFullyLockedOn(); // Function TheK31.K31SurvivorDetection.OnRep_IsFullyLockedOn // (Final|Native|Private) // @ game+0x591dc40
	void OnRep_ChargeableComponent(); // Function TheK31.K31SurvivorDetection.OnRep_ChargeableComponent // (Final|Native|Private) // @ game+0x591dc00
	void Authority_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function TheK31.K31SurvivorDetection.Authority_OnDamageStateChanged // (Final|Native|Private) // @ game+0x591d680
	void Authority_OnChargeCompleted(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function TheK31.K31SurvivorDetection.Authority_OnChargeCompleted // (Final|Native|Private|HasOutParms) // @ game+0x591d4b0
};

// Class TheK31.K31SurvivorExposedEffect
// Size: 0x360 (Inherited: 0x360)
struct UK31SurvivorExposedEffect : UExposedEffect {
};

// Class TheK31.K31SurvivorInActiveZoneCondition
// Size: 0xe8 (Inherited: 0xe8)
struct UK31SurvivorInActiveZoneCondition : UEventDrivenModifierCondition {
};

// Class TheK31.K31TrapProximitySensor
// Size: 0x1a0 (Inherited: 0xb8)
struct UK31TrapProximitySensor : UActorComponent {
	char pad_B8[0x40]; // 0xb8(0x40)
	struct TSet<struct UGameplayTagContainerComponent*> _registeredObjectStates; // 0xf8(0x50)
	struct TSet<struct ADBDPlayer*> _trappedPlayersInZone; // 0x148(0x50)
	char pad_198[0x8]; // 0x198(0x08)
};

// Class TheK31.K31UndetectableEffect
// Size: 0x500 (Inherited: 0x3b8)
struct UK31UndetectableEffect : UBaseLingeringStatusEffect {
	struct FStatProperty _activateDelay; // 0x3b8(0x88)
	struct FStatProperty _lingerDurationStat; // 0x440(0x88)
	struct UK31PlayerZoneStatus* _zoneStatus; // 0x4c8(0x08)
	char pad_4D0[0x30]; // 0x4d0(0x30)
};

// Class TheK31.K31Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK31Utilities : UObject {
};

// Class TheK31.K31WeakPointScoreEmitter
// Size: 0xa0 (Inherited: 0x38)
struct UK31WeakPointScoreEmitter : UPlayerScoreEmitter {
	char pad_38[0x18]; // 0x38(0x18)
	struct TMap<struct ACamperPlayer*, struct FSurvivorWeakPointScoreDatum> _registeredSurvivors; // 0x50(0x50)

	void Authority_OnLevelReadyToPlay(); // Function TheK31.K31WeakPointScoreEmitter.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x591d870
	void Authority_OnDechargeEnd(struct UChargeableComponent* ChargeableComponent); // Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeEnd // (Final|Native|Private) // @ game+0x591d7e0
	void Authority_OnDechargeBegin(struct UChargeableComponent* ChargeableComponent); // Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeBegin // (Final|Native|Private) // @ game+0x591d750
};

// Class TheK31.KillerMakeUniqueSurvivorsScreamAchievement
// Size: 0xd0 (Inherited: 0x80)
struct UKillerMakeUniqueSurvivorsScreamAchievement : UOnGameEventAchievement {
	struct TSet<struct AActor*> _alreadyProcessedSurvivors; // 0x80(0x50)
};

// Class TheK31.RecallK31DroneAction
// Size: 0x38 (Inherited: 0x38)
struct URecallK31DroneAction : UK31DroneChangeStateAction {
};

// Class TheK31.S35P01
// Size: 0x3e8 (Inherited: 0x3c8)
struct US35P01 : UPerk {
	float _fastVaultsTimeSeconds[0x3]; // 0x3c8(0x0c)
	float _cooldownDurationSeconds; // 0x3d4(0x04)
	char pad_3D8[0x10]; // 0x3d8(0x10)

	float GetFastVaultsTimeSecondsAtLevel(); // Function TheK31.S35P01.GetFastVaultsTimeSecondsAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetCooldownDurationSeconds(); // Function TheK31.S35P01.GetCooldownDurationSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6c0
};

// Class TheK31.S35P02
// Size: 0x440 (Inherited: 0x3c8)
struct US35P02 : UPerk {
	float _hasteEffectDurationSeconds[0x3]; // 0x3c8(0x0c)
	float _hasteEffectMovementSpeedIncrease; // 0x3d4(0x04)
	struct UStatusEffect* _hasteEffectClass; // 0x3d8(0x08)
	struct TMap<struct ADBDPlayer*, struct UStatusEffect*> _survivorBuffs; // 0x3e0(0x50)
	char pad_430[0x10]; // 0x430(0x10)

	float GetHasteEffectDurationAtLevel(); // Function TheK31.S35P02.GetHasteEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK31.S35P02Effect
// Size: 0x358 (Inherited: 0x350)
struct US35P02Effect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
};

// Class TheK31.S35P03
// Size: 0x460 (Inherited: 0x3c8)
struct US35P03 : UPerk {
	bool _isStatusEffectActiveOnOwningSurvivor; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float _cooldownDuration[0x3]; // 0x3cc(0x0c)
	float _speedBoost; // 0x3d8(0x04)
	float _perkRange; // 0x3dc(0x04)
	struct US35P03Effect* _hasteEffectClass; // 0x3e0(0x08)
	struct TArray<struct ACamperPlayer*> _healedSurvivorsAffected; // 0x3e8(0x10)
	char pad_3F8[0x68]; // 0x3f8(0x68)

	void OnRep_IsStatusEffectActiveOnOwningSurvivor(); // Function TheK31.S35P03.OnRep_IsStatusEffectActiveOnOwningSurvivor // (Final|Native|Private) // @ game+0x591f940
	float GetPerkRange(); // Function TheK31.S35P03.GetPerkRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4170
	float GetCooldownDurationAtLevel(); // Function TheK31.S35P03.GetCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
};

// Class TheK31.S35P03Effect
// Size: 0x368 (Inherited: 0x350)
struct US35P03Effect : UStatusEffect {
	char pad_350[0x10]; // 0x350(0x10)
	bool _shouldGiveBuff; // 0x360(0x01)
	bool _isStatusEffectGivenToSelf; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)

	void OnRep_GiveBuffToPlayer(); // Function TheK31.S35P03Effect.OnRep_GiveBuffToPlayer // (Final|Native|Private) // @ game+0x591f900
};

// Class TheK31.S36P01
// Size: 0x418 (Inherited: 0x3c8)
struct US36P01 : UPerk {
	float _hasteEffectDurationSeconds; // 0x3c8(0x04)
	float _hasteEffectMovementSpeedIncrease; // 0x3cc(0x04)
	float _activationDurationSeconds[0x3]; // 0x3d0(0x0c)
	float _exhaustedEffectDurationSeconds[0x3]; // 0x3dc(0x0c)
	struct UStatusEffect* _hasteStatusEffect; // 0x3e8(0x08)
	struct UStatusEffect* _hasteEffectClass; // 0x3f0(0x08)
	struct UActivatableExhaustedEffect* _exhaustedStatusEffect; // 0x3f8(0x08)
	struct UActivatableExhaustedEffect* _exhaustedEffectClass; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)

	float GetHasteEffectMovementSpeedIncrease(); // Function TheK31.S36P01.GetHasteEffectMovementSpeedIncrease // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd7b0
	float GetHasteEffectDurationSeconds(); // Function TheK31.S36P01.GetHasteEffectDurationSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
	float GetExhaustedEffectDurationAtLevel(); // Function TheK31.S36P01.GetExhaustedEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf5600
	float GetActivationDurationAtLevel(); // Function TheK31.S36P01.GetActivationDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
	void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving); // Function TheK31.S36P01.Authority_OnIsRunningAndMovingChanged // (Final|Native|Private) // @ game+0x591f6d0
};

// Class TheK31.S36P02
// Size: 0x410 (Inherited: 0x3c8)
struct US36P02 : UPerk {
	float _brokenStatusEffectSeconds[0x3]; // 0x3c8(0x0c)
	int32_t _requiredHookStage; // 0x3d4(0x04)
	int32_t _currentHookStage; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UInteractionDefinition* _perkInteractionClass; // 0x3e0(0x08)
	struct UInteractionDefinition* _perkInteraction; // 0x3e8(0x08)
	struct UStatusEffect* _brokenStatusEffect; // 0x3f0(0x08)
	struct UStatusEffect* _brokenEffectClass; // 0x3f8(0x08)
	struct UStatusEffect* _exhaustedEffectClass; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void OnRecoverAbilityButtonTriggeredCosmetic(struct ACamperPlayer* OwningSurvivor); // Function TheK31.S36P02.OnRecoverAbilityButtonTriggeredCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetBrokenStatusDurationAtLevel(); // Function TheK31.S36P02.GetBrokenStatusDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	void Authority_OnCamperHealthStateChange(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function TheK31.S36P02.Authority_OnCamperHealthStateChange // (Final|Native|Private) // @ game+0x591f600
};

// Class TheK31.S36P02Interaction
// Size: 0x630 (Inherited: 0x630)
struct US36P02Interaction : UInteractionDefinition {

	void OnRecoverInteractionUsed_Cosmetic(struct ACamperPlayer* Survivor); // Function TheK31.S36P02Interaction.OnRecoverInteractionUsed_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK31.S36P03
// Size: 0x460 (Inherited: 0x3c8)
struct US36P03 : UPerk {
	bool _isStatusEffectActiveOnOwningSurvivor; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float _cooldownDuration[0x3]; // 0x3cc(0x0c)
	float _perkRange; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct US36P03Effect* _noScratchMarksEffectClass; // 0x3e0(0x08)
	struct TArray<struct ACamperPlayer*> _healersAffected; // 0x3e8(0x10)
	char pad_3F8[0x68]; // 0x3f8(0x68)

	void OnRep_IsStatusEffectActiveOnOwningSurvivor(); // Function TheK31.S36P03.OnRep_IsStatusEffectActiveOnOwningSurvivor // (Final|Native|Private) // @ game+0x591f940
	float GetPerkRange(); // Function TheK31.S36P03.GetPerkRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2770
	float GetCooldownDurationAtLevel(); // Function TheK31.S36P03.GetCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
};

// Class TheK31.S36P03Effect
// Size: 0x368 (Inherited: 0x350)
struct US36P03Effect : UStatusEffect {
	char pad_350[0x10]; // 0x350(0x10)
	bool _shouldGiveBuff; // 0x360(0x01)
	bool _isStatusEffectGivenToSelf; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)

	bool ShouldGiveBuff(); // Function TheK31.S36P03Effect.ShouldGiveBuff // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x591f960
	void OnRep_GiveBuffToPlayer(); // Function TheK31.S36P03Effect.OnRep_GiveBuffToPlayer // (Final|Native|Private) // @ game+0x591f920
};

// Class TheK31.SurvivorHackDroneInteraction
// Size: 0x710 (Inherited: 0x630)
struct USurvivorHackDroneInteraction : UInteractionDefinition {
	struct FDirectionalMiniGameDefinition _miniGameDefinition; // 0x630(0x20)
	char pad_650[0x28]; // 0x650(0x28)
	bool _isHackingComplete; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct FDBDTunableRowHandle _batteryStartingChargePercent; // 0x680(0x28)
	struct FName _playerSnapSocket; // 0x6a8(0x0c)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct FDBDTunableRowHandle _maximumTimeToAttemptDuration; // 0x6b8(0x28)
	char pad_6E0[0x30]; // 0x6e0(0x30)

	void Authority_OnMiniGameEnd(struct ACamperPlayer* Survivor, enum class EDirectionalMinigameResult Result); // Function TheK31.SurvivorHackDroneInteraction.Authority_OnMiniGameEnd // (Final|Native|Private) // @ game+0x591f760
};

// Class TheK31.SurvivorRemoveClawTrapInteraction
// Size: 0x710 (Inherited: 0x630)
struct USurvivorRemoveClawTrapInteraction : UInteractionDefinition {
	struct FDirectionalMiniGameDefinition _miniGameDefinition; // 0x630(0x20)
	bool _isHackingComplete; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct UK31SurvivorClawTrapComponent* _survivorClawTrapComponent; // 0x658(0x08)
	struct FDBDTunableRowHandle _batteryRechargeOnFailedRemovalPercent; // 0x660(0x28)
	struct FDBDTunableRowHandle _requiredTimeToRemainStillBeforeInteractingDuration; // 0x688(0x28)
	char pad_6B0[0x60]; // 0x6b0(0x60)

	void Authority_OnMiniGameEnd(struct ACamperPlayer* Survivor, enum class EDirectionalMinigameResult Result); // Function TheK31.SurvivorRemoveClawTrapInteraction.Authority_OnMiniGameEnd // (Final|Native|Private) // @ game+0x591f830
};

