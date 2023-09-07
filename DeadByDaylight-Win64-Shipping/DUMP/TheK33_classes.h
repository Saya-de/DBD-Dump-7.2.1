// Class TheK33.IsInRangeOfK33ControlStation
// Size: 0x100 (Inherited: 0x100)
struct UIsInRangeOfK33ControlStation : UAnyActorPairQueryRangeIsTrue {
};

// Class TheK33.K33AnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UK33AnimInstance : UKillerAnimInstance {
	bool _isQuadruped; // 0x610(0x01)
	bool _isInSpecialMode; // 0x611(0x01)
	bool _isTailAttacking; // 0x612(0x01)
	bool _isTailAttackCharging; // 0x613(0x01)
	bool _isInTunnel; // 0x614(0x01)
	bool _useQuadrupedIK; // 0x615(0x01)
	bool _useBipedIK; // 0x616(0x01)
	bool _useLookAt; // 0x617(0x01)
	bool _usePushBack; // 0x618(0x01)
	bool _isBeingHitByTurret; // 0x619(0x01)
	bool _pushBackQuadrupedActive; // 0x61a(0x01)
	bool _pushBackBipedActive; // 0x61b(0x01)
	char pad_61C[0x4]; // 0x61c(0x04)
};

// Class TheK33.K33CheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK33CheatComponent : UActorComponent {

	void DBD_K33ForceSpecialMode(char force); // Function TheK33.K33CheatComponent.DBD_K33ForceSpecialMode // (Final|Exec|Native|Public) // @ game+0x59afee0
	void DBD_K33DrawTunnelBlockConnections(float secondsToDisplay); // Function TheK33.K33CheatComponent.DBD_K33DrawTunnelBlockConnections // (Final|Exec|Native|Public) // @ game+0x46a2490
};

// Class TheK33.K33CollectTurretFromControlStationInteraction
// Size: 0x7e0 (Inherited: 0x790)
struct UK33CollectTurretFromControlStationInteraction : UBasicChargeableInteraction {
	char pad_790[0x30]; // 0x790(0x30)
	struct FAnimationMontageDescriptor _cancelMontage; // 0x7c0(0x20)
};

// Class TheK33.K33ControlStation
// Size: 0x560 (Inherited: 0x338)
struct AK33ControlStation : AInteractable {
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent_TunnelEntranceSection; // 0x338(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent_turretSpawnerSection; // 0x340(0x08)
	struct UK33ControlStationTurretSpawnerOutlineUpdateStrategy* _outlineStrategy_TurretSpawnerSection; // 0x348(0x08)
	struct UK33ControlStationTunnelEntranceOutlineUpdateStrategy* _outlineStrategy_TunnelEntranceSection; // 0x350(0x08)
	struct UDBDOutlineComponent* _outlineComponent_tunnelEntranceSection; // 0x358(0x08)
	struct UDBDOutlineComponent* _outlineComponent_turretSpawnerSection; // 0x360(0x08)
	struct UBoxComponent* _interactionCollisionZone; // 0x368(0x08)
	struct UInteractor* _interactor; // 0x370(0x08)
	struct AK33TunnelBlock* _linkedTunnelBlock; // 0x378(0x08)
	struct TSoftClassPtr<UObject> _exitTunnelInteractableClass; // 0x380(0x30)
	struct AK33ExitTunnelInteractable* _exitTunnelInteractable; // 0x3b0(0x08)
	struct UMontagePlayer* _montagePlayer_turretSpawnerSection; // 0x3b8(0x08)
	struct UMontagePlayer* _montagePlayer_tunnelEntranceSection; // 0x3c0(0x08)
	struct UAnimationMontageSlave* _animationSlave_turretSpawnerSection; // 0x3c8(0x08)
	struct UAnimationMontageSlave* _animationSlave_tunnelEntranceSection; // 0x3d0(0x08)
	struct TWeakObjectPtr<struct AK33Turret> _linkedTurret; // 0x3d8(0x08)
	enum class EControlStationState _currentState; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FName _turretSocketName; // 0x3e4(0x0c)
	char pad_3F0[0x30]; // 0x3f0(0x30)
	struct FDBDTunableRowHandle _spawningDuration; // 0x420(0x28)
	struct FDBDTunableRowHandle _turretAvailabilityCooldownDuration; // 0x448(0x28)
	char pad_470[0x30]; // 0x470(0x30)
	float _worldTimeAtCooldownStart; // 0x4a0(0x04)
	float _malfunctionDuration; // 0x4a4(0x04)
	char pad_4A8[0x28]; // 0x4a8(0x28)
	struct FDBDTunableRowHandle _blockExitTime; // 0x4d0(0x28)
	char pad_4F8[0x60]; // 0x4f8(0x60)
	bool _isMalfunctioning; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)

	void OnRep_IsMalfunctioning(); // Function TheK33.K33ControlStation.OnRep_IsMalfunctioning // (Final|Native|Private) // @ game+0x59b02a0
	void OnRep_CurrentState(enum class EControlStationState oldState); // Function TheK33.K33ControlStation.OnRep_CurrentState // (Final|Native|Private) // @ game+0x59b0200
	struct FVector GetKillerExitTunnelEndLocation(); // Function TheK33.K33ControlStation.GetKillerExitTunnelEndLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x551e040
	void Cosmetic_UpdateControlStationCooldown(float cooldownElapsedTimePercent); // Function TheK33.K33ControlStation.Cosmetic_UpdateControlStationCooldown // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_StopControlStationMalfunctionReaction(); // Function TheK33.K33ControlStation.Cosmetic_StopControlStationMalfunctionReaction // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_StartControlStationMalfunctionReaction(); // Function TheK33.K33ControlStation.Cosmetic_StartControlStationMalfunctionReaction // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetTunnelCapVisibility(bool IsVisible); // Function TheK33.K33ControlStation.Cosmetic_SetTunnelCapVisibility // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretInPoolCountChanged(int32_t turretCount); // Function TheK33.K33ControlStation.Cosmetic_OnTurretInPoolCountChanged // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnControlStationExitingState(enum class EControlStationState exitingState); // Function TheK33.K33ControlStation.Cosmetic_OnControlStationExitingState // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnControlStationEnteringState(enum class EControlStationState enteringState); // Function TheK33.K33ControlStation.Cosmetic_OnControlStationEnteringState // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33ControlStationAttackableComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK33ControlStationAttackableComponent : UAttackableComponent {
};

// Class TheK33.K33ControlStationTunnelConnection
// Size: 0x258 (Inherited: 0x230)
struct AK33ControlStationTunnelConnection : AActor {
	struct UStaticMeshComponent* _tunnelConnectionMesh; // 0x230(0x08)
	char pad_238[0x20]; // 0x238(0x20)
};

// Class TheK33.K33ControlStationTunnelEntranceOutlineUpdateStrategy
// Size: 0x158 (Inherited: 0x138)
struct UK33ControlStationTunnelEntranceOutlineUpdateStrategy : USourceBasedOutlineUpdateStrategy {
	struct FLinearColor _controlStationIsFlaggedForTarget; // 0x138(0x10)
	struct FLinearColor _controlStationIsSelected; // 0x148(0x10)
};

// Class TheK33.K33ControlStationTurretSpawnerAnimInstance
// Size: 0x310 (Inherited: 0x2f0)
struct UK33ControlStationTurretSpawnerAnimInstance : UDBDBaseAnimInstance {
	bool _isBoxOpening; // 0x2f0(0x01)
	bool _isBoxOpened; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	float _boxOpeningPlayRate; // 0x2f4(0x04)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct UAnimSequence* _spawnTurretAnimSequence; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
};

// Class TheK33.K33ControlStationTurretSpawnerOutlineUpdateStrategy
// Size: 0x108 (Inherited: 0xe0)
struct UK33ControlStationTurretSpawnerOutlineUpdateStrategy : UDefaultOutlineUpdateStrategy {
	struct FDBDTunableRowHandle _maxDistanceToRevealToSurvivor; // 0xe0(0x28)
};

// Class TheK33.K33DeployTurretInteraction
// Size: 0x840 (Inherited: 0x790)
struct UK33DeployTurretInteraction : UBasicChargeableInteraction {
	char pad_790[0x78]; // 0x790(0x78)
	struct FAnimationMontageDescriptor _cancelMontage; // 0x808(0x20)
	float _cancelDeployDuration; // 0x828(0x04)
	struct FVector _dropOffLocation; // 0x82c(0x0c)
	char pad_838[0x8]; // 0x838(0x08)
};

// Class TheK33.K33EnterTunnelInteraction
// Size: 0x860 (Inherited: 0x760)
struct UK33EnterTunnelInteraction : UChargeableInteractionDefinition {
	struct FAnimationMontageDescriptor _confirmEnterControlStationMontage; // 0x758(0x20)
	struct FAnimationMontageDescriptor _cancelMontage; // 0x778(0x20)
	struct FAnimationMontageDescriptor _afterTeleportationMontage; // 0x798(0x20)
	struct FVector _cameraTransitionOffset; // 0x7b8(0x0c)
	struct FDBDTunableRowHandle _chargeInteractionTime; // 0x7c8(0x28)
	float _hideWorldElementsMontagePercentageTime; // 0x7f0(0x04)
	float _fadeOutDuration; // 0x7f4(0x04)
	char pad_7FC[0x64]; // 0x7fc(0x64)

	void Multicast_TeleportPlayerToTunnel(struct ADBDPlayer* Player, struct FVector Location, struct FRotator Rotation); // Function TheK33.K33EnterTunnelInteraction.Multicast_TeleportPlayerToTunnel // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x59b00d0
};

// Class TheK33.K33ExitTunnelInteractable
// Size: 0x368 (Inherited: 0x338)
struct AK33ExitTunnelInteractable : AInteractable {
	struct USceneComponent* _rootComponent; // 0x338(0x08)
	struct UInteractor* _interactor; // 0x340(0x08)
	struct UBoxComponent* _interactionCollisionZone; // 0x348(0x08)
	struct UK33ExitTunnelInteraction* _exitTunnelInteractionClass; // 0x350(0x08)
	struct UK33ExitTunnelInteraction* _exitTunnelInteraction; // 0x358(0x08)
	struct AK33ControlStation* _linkedControlStation; // 0x360(0x08)
};

// Class TheK33.K33ExitTunnelInteraction
// Size: 0x820 (Inherited: 0x630)
struct UK33ExitTunnelInteraction : UInteractionDefinition {
	struct FDBDTunableRowHandle _firstAnimationTime; // 0x630(0x28)
	struct FDBDTunableRowHandle _secondAnimationTime; // 0x658(0x28)
	struct FDBDTunableRowHandle _killerInstinctTriggerDistance; // 0x680(0x28)
	struct FTunableStat _killerInstinctLingerTime; // 0x6a8(0x80)
	struct FDBDTunableRowHandle _exitTunnelPenaltyRange; // 0x728(0x28)
	struct FDBDTunableRowHandle _exitTunnelPenaltyPercentage; // 0x750(0x28)
	struct UStatusEffect* _killerInstinctStatusEffectClass; // 0x778(0x08)
	float _exitTunnelAnimationTime; // 0x780(0x04)
	float _toggleMeshVisibilityAnimationPercentageTime; // 0x784(0x04)
	struct FVector _cameraOffset; // 0x788(0x0c)
	float _cameraRotationSpeed; // 0x794(0x04)
	float _fadeOutDuration; // 0x798(0x04)
	char pad_79C[0x7f]; // 0x79c(0x7f)
	bool _useExitTimePenalty; // 0x81b(0x01)
	char pad_81C[0x4]; // 0x81c(0x04)

	void Multicast_OnSnapTransitionCompleted(struct ADBDPlayer* Player, struct FVector Location, struct FRotator Rotation); // Function TheK33.K33ExitTunnelInteraction.Multicast_OnSnapTransitionCompleted // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x59affc0
};

// Class TheK33.K33FallOutOfWorldPositionFinderComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UK33FallOutOfWorldPositionFinderComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class TheK33.K33FeetVFX
// Size: 0x2a0 (Inherited: 0x230)
struct AK33FeetVFX : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	enum class EK33Foot _currentFootType; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float _footstepEffectDuration; // 0x23c(0x04)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x240(0x10)
	char pad_250[0x50]; // 0x250(0x50)

	void Cosmetic_TriggerFootstepVisibility(enum class EK33Foot footType, bool IsVisible); // Function TheK33.K33FeetVFX.Cosmetic_TriggerFootstepVisibility // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerFootstepTimeline(enum class EK33Foot footType, float effectLifetime, struct FVector& KillerLocation); // Function TheK33.K33FeetVFX.Cosmetic_TriggerFootstepTimeline // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33FXInterface
// Size: 0x30 (Inherited: 0x30)
struct UK33FXInterface : UInterface {

	void Cosmetic_UpdateTailAttackVFX(struct FVector& Location, struct FRotator& Rotation); // Function TheK33.K33FXInterface.Cosmetic_UpdateTailAttackVFX // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerTunnelTransitionFadeOut(float timeBeforeFadeOut); // Function TheK33.K33FXInterface.Cosmetic_TriggerTunnelTransitionFadeOut // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerTunnelTransitionFadeIn(float timeBeforeFadeIn); // Function TheK33.K33FXInterface.Cosmetic_TriggerTunnelTransitionFadeIn // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TailAttackObstructedVFX(struct FVector& obstructionLocation); // Function TheK33.K33FXInterface.Cosmetic_TailAttackObstructedVFX // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_StopTailAttackVFX(); // Function TheK33.K33FXInterface.Cosmetic_StopTailAttackVFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetVisibility(bool IsVisible); // Function TheK33.K33FXInterface.Cosmetic_SetVisibility // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetKillerInvisibleUnderCurrentFloor(bool shouldKillerBeInvisibleUnderFloor); // Function TheK33.K33FXInterface.Cosmetic_SetKillerInvisibleUnderCurrentFloor // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetKillerFPVAudioAmbiance(bool isTunnelAmbianceActive); // Function TheK33.K33FXInterface.Cosmetic_SetKillerFPVAudioAmbiance // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretMaxDamageReceived(); // Function TheK33.K33FXInterface.Cosmetic_OnTurretMaxDamageReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretHitByTailAttack(struct AK33Turret* turret); // Function TheK33.K33FXInterface.Cosmetic_OnTurretHitByTailAttack // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretDamageChanged(float damagePercent); // Function TheK33.K33FXInterface.Cosmetic_OnTurretDamageChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSurvivorHitByTailAttack(struct ACamperPlayer* Player); // Function TheK33.K33FXInterface.Cosmetic_OnSurvivorHitByTailAttack // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSpecialModeChanged(bool isInSpecialMode); // Function TheK33.K33FXInterface.Cosmetic_OnSpecialModeChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerShotByTurret(); // Function TheK33.K33FXInterface.Cosmetic_OnKillerShotByTurret // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33Husk
// Size: 0x2a0 (Inherited: 0x268)
struct AK33Husk : APoseableHusk {
	struct UMontagePlayer* _montagePlayer; // 0x268(0x08)
	struct UTerrorRadiusEmitterComponent* _terrorRadiusEmitterComponent; // 0x270(0x08)
	struct UAkComponent* _huskAudioComponent; // 0x278(0x08)
	struct UCurveFloat* _terrorRadiusDistanceOffsetCurve; // 0x280(0x08)
	char pad_288[0x18]; // 0x288(0x18)
};

// Class TheK33.K33HuskAnimInstance
// Size: 0x310 (Inherited: 0x2f0)
struct UK33HuskAnimInstance : UDBDBaseAnimInstance {
	bool _isFPV; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float _cameraPitchValue; // 0x2f4(0x04)
	char pad_2F8[0x18]; // 0x2f8(0x18)

	struct USkeletalMeshComponent* GetCopiedSkeletalMesh(); // Function TheK33.K33HuskAnimInstance.GetCopiedSkeletalMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59aff90
	struct UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh(); // Function TheK33.K33HuskAnimInstance.GetCopiedCustomizedSkeletalMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59aff60
};

// Class TheK33.K33KillerControlStationSelectorComponent
// Size: 0x2c8 (Inherited: 0xb8)
struct UK33KillerControlStationSelectorComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	float _thresholdDeltaSquaredDistanceForBestTargetRecalculation; // 0xd0(0x04)
	float _minDeltaDotProductForBestTargetRecalculation; // 0xd4(0x04)
	float _minDotProductForEligibleControlStationTarget; // 0xd8(0x04)
	float _minDistanceForEligibleControlStationTargetOutsideTunnel; // 0xdc(0x04)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct TSoftClassPtr<UObject> _actorIndicatorClass; // 0xe8(0x30)
	struct TSoftClassPtr<UObject> _tunnelNavigationComponentClass; // 0x118(0x30)
	struct ADBDActorIndicator* _indicatorInstance; // 0x148(0x08)
	struct UK33TunnelNavigationComponent* _tunnelNavigationComponentInstance; // 0x150(0x08)
	char pad_158[0x18]; // 0x158(0x18)
	struct AK33ControlStation* _replicated_selectedControlStation; // 0x170(0x08)
	struct UAimDirectionProvider* _aimDirectionProvider; // 0x178(0x08)
	char pad_180[0x148]; // 0x180(0x148)

	void Server_SetSelectedControlStation(struct AK33ControlStation* ControlStation); // Function TheK33.K33KillerControlStationSelectorComponent.Server_SetSelectedControlStation // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x59b03b0
	void OnRep_Replicated_SelectedControlStation(struct AK33ControlStation* previousSelectedControlStation); // Function TheK33.K33KillerControlStationSelectorComponent.OnRep_Replicated_SelectedControlStation // (Final|Native|Private) // @ game+0x59b02e0
};

// Class TheK33.K33KillerStunnedByTurretStatusEffect
// Size: 0x380 (Inherited: 0x350)
struct UK33KillerStunnedByTurretStatusEffect : UStatusEffect {
	struct UCurveFloat* _movementSpeedCurve; // 0x350(0x08)
	struct FDBDTunableRowHandle _movementSpeedDuration; // 0x358(0x28)
};

// Class TheK33.K33KillerTunnelStateComponent
// Size: 0x338 (Inherited: 0xb8)
struct UK33KillerTunnelStateComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTagStateBool _isInTunnel; // 0xc0(0x30)
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UK33TunnelMovementInputAccelerationConstraintStrategyComponent* _movementInputConstraintStrategyClass; // 0xf8(0x08)
	struct UK33TunnelMovementInputAccelerationConstraintStrategyComponent* _movementInputConstraintStrategy; // 0x100(0x08)
	struct TArray<struct AActor*> _inTunnelUntouchedClasses; // 0x108(0x10)
	char pad_118[0x50]; // 0x118(0x50)
	struct TSoftClassPtr<UObject> _controlStationTunnelConnectionClass; // 0x168(0x30)
	struct AK33ControlStationTunnelConnection* _controlStationTunnelConnectionInstance; // 0x198(0x08)
	struct FName _killerCameraSocketName; // 0x1a0(0x0c)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FDBDTunableRowHandle _accelerationMultiplier; // 0x1b0(0x28)
	struct FDBDTunableRowHandle _heightOffsetForDistanceChecks; // 0x1d8(0x28)
	float _defaultOcclusionRefreshInterval; // 0x200(0x04)
	float _minAnimPitchInTunnel; // 0x204(0x04)
	char pad_208[0x22]; // 0x208(0x22)
	bool _worldElementsVisibility; // 0x22a(0x01)
	bool _tunnelElementsVisibility; // 0x22b(0x01)
	enum class EK33KillerBlockCollisionType _killerCollisionBlockType; // 0x22c(0x01)
	char pad_22D[0x10b]; // 0x22d(0x10b)

	void OnRep_WorldElementsVisibility(); // Function TheK33.K33KillerTunnelStateComponent.OnRep_WorldElementsVisibility // (Final|Native|Private) // @ game+0x59b0390
	void OnRep_TunnelElementsVisibility(); // Function TheK33.K33KillerTunnelStateComponent.OnRep_TunnelElementsVisibility // (Final|Native|Private) // @ game+0x59b0370
	void OnRep_KillerCollisionBlockType(); // Function TheK33.K33KillerTunnelStateComponent.OnRep_KillerCollisionBlockType // (Final|Native|Private) // @ game+0x59b02c0
	void OnRep_IsInTunnel(); // Function TheK33.K33KillerTunnelStateComponent.OnRep_IsInTunnel // (Final|Native|Private) // @ game+0x59b0280
	void OnLevelReadyToPlay(); // Function TheK33.K33KillerTunnelStateComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x59b01e0
};

// Class TheK33.K33P01
// Size: 0x468 (Inherited: 0x3c8)
struct UK33P01 : UPerk {
	float _perkActivationTime; // 0x3c8(0x04)
	float _perkCooldownTime[0x3]; // 0x3cc(0x0c)
	struct UStatusEffect* _blindedStatusEffect; // 0x3d8(0x08)
	float _blindedEffectDuration[0x3]; // 0x3e0(0x0c)
	char pad_3EC[0x14]; // 0x3ec(0x14)
	struct TArray<struct ACamperPlayer*> _activatedSurvivors; // 0x400(0x10)
	char pad_410[0x58]; // 0x410(0x58)

	void Multicast_RevealAndMakeSurvivorScream(struct ACamperPlayer* Survivor); // Function TheK33.K33P01.Multicast_RevealAndMakeSurvivorScream // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4ceef10
	void BP_RevealAndMakeSurvivorScream(struct ACamperPlayer* survivorPlayer); // Function TheK33.K33P01.BP_RevealAndMakeSurvivorScream // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnHealthStateChanged(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK33.K33P01.Authority_OnHealthStateChanged // (Final|Native|Private|HasOutParms) // @ game+0x59b4830
};

// Class TheK33.K33P02
// Size: 0x3e0 (Inherited: 0x3c8)
struct UK33P02 : UPerk {
	struct UStatusEffect* _hasteStatusEffect; // 0x3c8(0x08)
	float _hasteDuration[0x3]; // 0x3d0(0x0c)
	float _hasteAmount; // 0x3dc(0x04)
};

// Class TheK33.K33P03
// Size: 0x3f0 (Inherited: 0x3c8)
struct UK33P03 : UPerk {
	float _perkAuraRevealDuration[0x3]; // 0x3c8(0x0c)
	float _obliviousDuration[0x3]; // 0x3d4(0x0c)
	struct UStatusEffect* _revealedStatusEffect; // 0x3e0(0x08)
	struct UStatusEffect* _obliviousStatusEffect; // 0x3e8(0x08)
};

// Class TheK33.K33Power
// Size: 0x648 (Inherited: 0x4c8)
struct AK33Power : ACollectable {
	char pad_4C8[0x18]; // 0x4c8(0x18)
	struct UChargeableComponent* _tailAttackChargeableComponent; // 0x4e0(0x08)
	struct UInteractor* _interactor; // 0x4e8(0x08)
	struct UBoxPlayerOverlapComponent* _interactionVolume; // 0x4f0(0x08)
	struct FTunableStat _tailAttackChargeTime; // 0x4f8(0x80)
	struct UK33PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress; // 0x578(0x08)
	struct UPowerChargeComponent* _k33PowerCharge; // 0x580(0x08)
	struct ULocalActorPoolComponent* _feetActorPool; // 0x588(0x08)
	struct TArray<struct UStatusEffect*> _killerStatusEffects; // 0x590(0x10)
	struct TArray<struct UStatusEffect*> _survivorStatusEffects; // 0x5a0(0x10)
	struct UK33KillerTunnelStateComponent* _killerTunnelComponentClass; // 0x5b0(0x08)
	struct UK33QuadrupedComponent* _quadrupedComponentClass; // 0x5b8(0x08)
	struct UK33KillerControlStationSelectorComponent* _controlStationSelectorComponentClass; // 0x5c0(0x08)
	struct UK33SurvivorDetectionComponent* _survivorDetectionComponentClass; // 0x5c8(0x08)
	struct UK33TurretDamageComponent* _turretDamageComponentClass; // 0x5d0(0x08)
	struct UK33TurretPlacer* _turretPlacerComponentClass; // 0x5d8(0x08)
	struct AK33Husk* _k33HuskClass; // 0x5e0(0x08)
	struct TArray<struct UK33TurretPlacer*> _turretPlacers; // 0x5e8(0x10)
	uint32_t _feetPoolSize; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct AK33FeetVFX* _feetActorClass; // 0x600(0x08)
	struct AK33Husk* _k33Husk; // 0x608(0x08)
	char pad_610[0x20]; // 0x610(0x20)
	struct UActorPoolInitializer* _turretPoolInitializer; // 0x630(0x08)
	struct UAuthoritativeActorPoolComponent* _turretPool; // 0x638(0x08)
	char pad_640[0x8]; // 0x640(0x08)

	void OnRep_TurretPlacers(); // Function TheK33.K33Power.OnRep_TurretPlacers // (Final|Native|Private) // @ game+0x59b4bc0
	struct UK33TailAttackInteraction* GetTailAttackInteraction(); // Function TheK33.K33Power.GetTailAttackInteraction // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
};

// Class TheK33.K33Power_Addon_15
// Size: 0x2e0 (Inherited: 0x2c8)
struct UK33Power_Addon_15 : UOnEventBaseAddon {
	struct UStatusEffect* _blindnessStatusEffect; // 0x2c8(0x08)
	float _blindnessDuration; // 0x2d0(0x04)
	float _survivorRangeDistanceFromTurretToTriggerEffect; // 0x2d4(0x04)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class TheK33.K33Power_Addon_16
// Size: 0x310 (Inherited: 0x2b8)
struct UK33Power_Addon_16 : UItemAddon {
	char pad_2B8[0x50]; // 0x2b8(0x50)
	float _turretRange; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
};

// Class TheK33.K33Power_Addon_17
// Size: 0x308 (Inherited: 0x2c8)
struct UK33Power_Addon_17 : UOnEventBaseAddon {
	float _activationLifetime; // 0x2c8(0x04)
	float _survivorRangeDistanceFromKillerToTriggerEffect; // 0x2cc(0x04)
	char pad_2D0[0x38]; // 0x2d0(0x38)

	void Multicast_TriggerSurvivorsScreamAndReveal(struct TArray<struct ACamperPlayer*> targetSurvivors); // Function TheK33.K33Power_Addon_17.Multicast_TriggerSurvivorsScreamAndReveal // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x569c5a0
	void BP_TriggerSurvivorScreamAndReveal(struct ACamperPlayer* TargetSurvivor); // Function TheK33.K33Power_Addon_17.BP_TriggerSurvivorScreamAndReveal // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33PowerAddon20StatusEffect
// Size: 0x378 (Inherited: 0x350)
struct UK33PowerAddon20StatusEffect : UActivatableStatusEffect {
	struct FDBDTunableRowHandle _effectDuration; // 0x350(0x28)
};

// Class TheK33.K33PowerAnimInstance
// Size: 0x620 (Inherited: 0x620)
struct UK33PowerAnimInstance : UBaseKillerAttackSubAnimInstance {
	bool _isObstructionFar; // 0x618(0x01)
	float _obstructionDistance; // 0x61c(0x04)
};

// Class TheK33.K33PowerChargePresentationItemProgressComponent
// Size: 0xf0 (Inherited: 0xc0)
struct UK33PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	char pad_C0[0x30]; // 0xc0(0x30)
};

// Class TheK33.K33PushbackAnimInstance
// Size: 0x390 (Inherited: 0x2c0)
struct UK33PushbackAnimInstance : UAnimInstance {
	bool IsActive; // 0x2c0(0x01)
	bool IsFPV; // 0x2c1(0x01)
	enum class ETraceTypeQuery _traceTypeQuery; // 0x2c2(0x01)
	bool _traceComplex; // 0x2c3(0x01)
	bool _ignoreTouches; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float _forwardCheckDistance; // 0x2c8(0x04)
	float _backwardCheckDistance; // 0x2cc(0x04)
	struct FVector _lineTraceStartOffset; // 0x2d0(0x0c)
	float ForwardHitDistance; // 0x2dc(0x04)
	float BackwardHitDistance; // 0x2e0(0x04)
	char pad_2E4[0x84]; // 0x2e4(0x84)
	struct ACharacter* _character; // 0x368(0x08)
	char pad_370[0x20]; // 0x370(0x20)
};

// Class TheK33.K33QuadrupedComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UK33QuadrupedComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTagStateBool _isInQuadrupedMode; // 0xc0(0x30)
};

// Class TheK33.K33SelectControlStationInteraction
// Size: 0x640 (Inherited: 0x630)
struct UK33SelectControlStationInteraction : UInteractionDefinition {
	char pad_630[0x10]; // 0x630(0x10)
};

// Class TheK33.K33SelectedControlStationLinkedActorOutlineUpdateStrategy
// Size: 0x130 (Inherited: 0xe0)
struct UK33SelectedControlStationLinkedActorOutlineUpdateStrategy : UDefaultOutlineUpdateStrategy {
	struct FLinearColor _revealedColorForSelectedLinkedControlStation; // 0xe0(0x10)
	struct FLinearColor _revealedColorForTargetedLinkedControlStation; // 0xf0(0x10)
	struct FDBDTunableRowHandle _exitProximityDistance; // 0x100(0x28)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class TheK33.K33SelectedControlStationOutlineFollower
// Size: 0x30 (Inherited: 0x30)
struct UK33SelectedControlStationOutlineFollower : UInterface {
};

// Class TheK33.K33SpawnTurretInteraction
// Size: 0x640 (Inherited: 0x630)
struct UK33SpawnTurretInteraction : UInteractionDefinition {
	char pad_630[0x10]; // 0x630(0x10)
};

// Class TheK33.K33SpecialModeComponent
// Size: 0x270 (Inherited: 0xb8)
struct UK33SpecialModeComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FTagStateBool _isInSpecialMode; // 0xc8(0x30)
	struct FDBDTunableRowHandle _specialModeMaxCharge; // 0xf8(0x28)
	struct FDBDTunableRowHandle _specialModeMaximumChargePercentOnPickUp; // 0x120(0x28)
	struct FDBDTunableRowHandle _specialModeMovingInTunnelChargeRate; // 0x148(0x28)
	struct FDBDTunableRowHandle _specialModeDechargeRatePerAttackingTurrets; // 0x170(0x28)
	struct FDBDTunableRowHandle _terrorRadiusSizeInSpecialMode; // 0x198(0x28)
	struct FNonTunableStat _specialModeNormalChargeRate; // 0x1c0(0x60)
	enum class EK33SpecialModeChargeState _chargeState; // 0x220(0x04)
	char pad_224[0x4c]; // 0x224(0x4c)

	void OnRep_IsInSpecialMode(); // Function TheK33.K33SpecialModeComponent.OnRep_IsInSpecialMode // (Final|Native|Private) // @ game+0x59b4b80
	void OnRep_ChargeState(); // Function TheK33.K33SpecialModeComponent.OnRep_ChargeState // (Final|Native|Private) // @ game+0x59b4b60
	void OnPowerChargeChanged(float currentChargePercent); // Function TheK33.K33SpecialModeComponent.OnPowerChargeChanged // (Final|Native|Private) // @ game+0x59b4ae0
	void Authority_OnIntroCompleted(); // Function TheK33.K33SpecialModeComponent.Authority_OnIntroCompleted // (Final|Native|Private) // @ game+0x59b4940
};

// Class TheK33.K33SurvivorCosmeticHelperActor
// Size: 0x308 (Inherited: 0x270)
struct AK33SurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	char pad_270[0x98]; // 0x270(0x98)

	struct AK33Turret* GetCarriedTurret(); // Function TheK33.K33SurvivorCosmeticHelperActor.GetCarriedTurret // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59b4a30
	void Cosmetic_UpdateTurretLaserPlacement(struct FVector& placementLocation, struct FRotator& placementRotation); // Function TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_UpdateTurretLaserPlacement // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretPlacementVisualFeedbackActivationChanged(bool activated, bool IsPlacementValid); // Function TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_OnTurretPlacementVisualFeedbackActivationChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretPlacementValidityChanged(bool IsPlacementValid); // Function TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_OnTurretPlacementValidityChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_InitializeTurretPlacementVisualFeedback(struct FName& SocketName, float Radius); // Function TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_InitializeTurretPlacementVisualFeedback // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33SurvivorDetectedFromTunnelStatusEffect
// Size: 0x400 (Inherited: 0x350)
struct UK33SurvivorDetectedFromTunnelStatusEffect : UStatusEffect {
	struct FDBDTunableRowHandle _timeBetweenFootsteps; // 0x350(0x28)
	enum class EHudScreenIndicatorType _offscreenIndicatorType; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FDBDTunableRowHandle _offscreenIndicatorMinVisibleDistance; // 0x380(0x28)
	struct FDBDTunableRowHandle _offscreenIndicatorLifetime; // 0x3a8(0x28)
	char pad_3D0[0x14]; // 0x3d0(0x14)
	float _indicatorLerpMultiplierSpeed; // 0x3e4(0x04)
	float _aboveKillerHeadRange; // 0x3e8(0x04)
	char pad_3EC[0x14]; // 0x3ec(0x14)
};

// Class TheK33.K33SurvivorDetectionComponent
// Size: 0x208 (Inherited: 0xb8)
struct UK33SurvivorDetectionComponent : UActorComponent {
	struct FTunableStat _detectionDistance; // 0xb8(0x80)
	struct UStatusEffect* _survivorStatusEffect; // 0x138(0x08)
	char pad_140[0x58]; // 0x140(0x58)
	struct TArray<struct TWeakObjectPtr<struct ACamperPlayer>> _survivorsInRange; // 0x198(0x10)
	struct FDBDTunableRowHandle _bufferTimeBeforeActivatingSurvivorDetection; // 0x1a8(0x28)
	char pad_1D0[0x38]; // 0x1d0(0x38)

	void OnRep_SurvivorsInRange(); // Function TheK33.K33SurvivorDetectionComponent.OnRep_SurvivorsInRange // (Final|Native|Private) // @ game+0x59b4ba0
	void Authority_OnSurvivorInRangeChanged(bool inRange, struct ACamperPlayer* Player); // Function TheK33.K33SurvivorDetectionComponent.Authority_OnSurvivorInRangeChanged // (Final|Native|Private) // @ game+0x59b4960
};

// Class TheK33.K33SurvivorTurretDestructionComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UK33SurvivorTurretDestructionComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheK33.K33TailAttack
// Size: 0x4d0 (Inherited: 0x390)
struct UK33TailAttack : UPounceAttack {
	char pad_390[0x8]; // 0x390(0x08)
	struct FDBDTunableRowHandle _useGamepadEmulationForYaw; // 0x398(0x28)
	struct FDBDTunableRowHandle _yawPitchSpeedSmoothingTime; // 0x3c0(0x28)
	struct FDBDTunableRowHandle _yawSpeedResetSmoothingTime; // 0x3e8(0x28)
	struct FDBDTunableRowHandle _yawScale; // 0x410(0x28)
	struct FDBDTunableRowHandle _pitchScale; // 0x438(0x28)
	struct FDBDTunableRowHandle _yawPitchDelayTime; // 0x460(0x28)
	char pad_488[0x48]; // 0x488(0x48)
};

// Class TheK33.K33TailAttackOpenSubstate
// Size: 0x130 (Inherited: 0x130)
struct UK33TailAttackOpenSubstate : UPounceAttackOpenSubstate {
};

// Class TheK33.K33TailAttackHittingSubstate
// Size: 0x398 (Inherited: 0x1a0)
struct UK33TailAttackHittingSubstate : UPounceAttackHittingSubstate {
	struct FDBDTunableRowHandle _useGamepadEmulationForYaw; // 0x1a0(0x28)
	struct FDBDTunableRowHandle _yawSpeedResetSmoothingTime; // 0x1c8(0x28)
	struct FDBDTunableRowHandle _attackSphereTraceRadius; // 0x1f0(0x28)
	struct FDBDTunableRowHandle _tailAttackLength; // 0x218(0x28)
	struct UCurveFloat* _tailMovementCurve; // 0x240(0x08)
	struct FDBDTunableRowHandle _tailAttackFromYOffset; // 0x248(0x28)
	struct FDBDTunableRowHandle _tailAttackStartHeight; // 0x270(0x28)
	struct FDBDTunableRowHandle _tailAttackEndHeight; // 0x298(0x28)
	struct FDBDTunableRowHandle _tailAttackEndPointInitialHeightOffset; // 0x2c0(0x28)
	struct FDBDTunableRowHandle _tailAttackEndPointEndHeightOffset; // 0x2e8(0x28)
	struct FDBDTunableRowHandle _maxSweepLength; // 0x310(0x28)
	float _minDistanceForFarObstructionHit; // 0x338(0x04)
	char pad_33C[0x5c]; // 0x33c(0x5c)
};

// Class TheK33.K33TailAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UK33TailAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheK33.K33TailAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UK33TailAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheK33.K33TailAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UK33TailAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheK33.K33TailAttackInteraction
// Size: 0x810 (Inherited: 0x760)
struct UK33TailAttackInteraction : UChargeableInteractionDefinition {
	bool _isChargeCompleted; // 0x758(0x01)
	struct FDBDTunableRowHandle _interactionViewPitchMax; // 0x760(0x28)
	struct FDBDTunableRowHandle _interactionViewPitchMin; // 0x788(0x28)
	struct FDBDTunableRowHandle _cancelAttackMovementSlowdownDuration; // 0x7b0(0x28)
	struct UCurveFloat* _cancelAttackMovementSlowdownCurve; // 0x7d8(0x08)
	char pad_7E1[0x2f]; // 0x7e1(0x2f)
};

// Class TheK33.K33TunnelBlock
// Size: 0x268 (Inherited: 0x230)
struct AK33TunnelBlock : AActor {
	struct USceneComponent* _rootComponent; // 0x230(0x08)
	struct UK33TunnelBlockCosmeticActorSpawner* _cosmeticActorSpawner; // 0x238(0x08)
	struct AK33TunnelBlockCosmetic* _tunnelCosmeticActor; // 0x240(0x08)
	char pad_248[0x20]; // 0x248(0x20)

	struct FRotator GetExitTunnelInteractableSpawnRotation(); // Function TheK33.K33TunnelBlock.GetExitTunnelInteractableSpawnRotation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x57f0000
	struct FVector GetExitTunnelInteractableSpawnLocation(); // Function TheK33.K33TunnelBlock.GetExitTunnelInteractableSpawnLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x59b4aa0
	struct FVector GetEnterTunnelTeleportLocation(); // Function TheK33.K33TunnelBlock.GetEnterTunnelTeleportLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x59b4a60
};

// Class TheK33.K33TunnelBlockCosmetic
// Size: 0x2a0 (Inherited: 0x230)
struct AK33TunnelBlockCosmetic : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	bool _hasTunnelExitTile; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USplineComponent* _splineComponent; // 0x240(0x08)
	struct USceneComponent* _rootComponent; // 0x248(0x08)
	struct AK33TunnelProceduralConnection* _tunnelProceduralConnectionClass; // 0x250(0x08)
	uint32_t _numberOfConnectionActors; // 0x258(0x04)
	float _initialConnectionOffsetFromCenter; // 0x25c(0x04)
	float _endConnectionOffsetFromCenter; // 0x260(0x04)
	float _lengthBetweenSplinePoints; // 0x264(0x04)
	float _rotationPerSplinePoint; // 0x268(0x04)
	float _firstSplinePointOffsetValue; // 0x26c(0x04)
	float _secondSplinePointOffsetValue; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct TArray<struct AK33TunnelProceduralConnection*> _tunnelProceduralConnections; // 0x278(0x10)
	struct TArray<struct TWeakObjectPtr<struct USceneComponent>> _vfxPathLightsTransforms; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)

	struct FVector GetExitTunnelLocation(); // Function TheK33.K33TunnelBlockCosmetic.GetExitTunnelLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x57f0000
	void Cosmetic_ShowTunnelBlockExit(); // Function TheK33.K33TunnelBlockCosmetic.Cosmetic_ShowTunnelBlockExit // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetTunnelExitAsBlocked(bool IsBlocked); // Function TheK33.K33TunnelBlockCosmetic.Cosmetic_SetTunnelExitAsBlocked // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTunnelBlockExitSelected(bool IsSelected); // Function TheK33.K33TunnelBlockCosmetic.Cosmetic_OnTunnelBlockExitSelected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_EnableTunnelVFXPathLight(struct FVector& Location, struct FRotator& Rotation); // Function TheK33.K33TunnelBlockCosmetic.Cosmetic_EnableTunnelVFXPathLight // (BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DisableTunnelVFXPathLight(); // Function TheK33.K33TunnelBlockCosmetic.Cosmetic_DisableTunnelVFXPathLight // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33TunnelBlockCosmeticActorSpawner
// Size: 0x380 (Inherited: 0x220)
struct UK33TunnelBlockCosmeticActorSpawner : USceneComponent {
	char pad_220[0xe0]; // 0x220(0xe0)
	struct FK33CosmeticTunnelBlockSpawnInfo _cosmeticBlockSpawnInfo; // 0x300(0x40)
	struct TSoftClassPtr<UObject> _selectedTunnelBlockCosmeticClass; // 0x340(0x30)
	int32_t _editorVariationIndex; // 0x370(0x04)
	char pad_374[0xc]; // 0x374(0x0c)
};

// Class TheK33.K33TunnelMovementInputAccelerationConstraintStrategyComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UK33TunnelMovementInputAccelerationConstraintStrategyComponent : UBaseInputAccelerationConstraintStrategy {
	struct TArray<struct FVector> _forcedDirectionalInputs; // 0xb8(0x10)
};

// Class TheK33.K33TunnelNavigationComponent
// Size: 0x180 (Inherited: 0xb8)
struct UK33TunnelNavigationComponent : UActorComponent {
	float _dotProductDeltaValueForPathRecalculation; // 0xb8(0x04)
	float _minDistanceDeltaForPathRecalculation; // 0xbc(0x04)
	struct UK33TunnelPulsationComponent* _tunnelPulsationComponentClass; // 0xc0(0x08)
	struct UK33TunnelPulsationComponent* _tunnelPulsationComponent; // 0xc8(0x08)
	struct UAimDirectionProvider* _aimDirectionProvider; // 0xd0(0x08)
	char pad_D8[0xa8]; // 0xd8(0xa8)
};

// Class TheK33.K33TunnelProceduralConnection
// Size: 0x2a8 (Inherited: 0x230)
struct AK33TunnelProceduralConnection : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct USplineComponent* _splineComponent; // 0x238(0x08)
	struct USceneComponent* _splineMeshContainer; // 0x240(0x08)
	struct UK33SelectedControlStationLinkedActorOutlineUpdateStrategy* _outlineStrategy; // 0x248(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x250(0x08)
	struct UStaticMesh* _staticMeshComponent; // 0x258(0x08)
	struct UMaterial* _staticMeshMaterial; // 0x260(0x08)
	enum class ESplineMeshAxis _splineMeshAxis; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FVector2D _meshScaling; // 0x26c(0x08)
	char pad_274[0x4]; // 0x274(0x04)
	struct USplineComponent* _splineMeshComponent; // 0x278(0x08)
	struct TArray<struct USplineMeshComponent*> _splineMeshes; // 0x280(0x10)
	char pad_290[0x18]; // 0x290(0x18)
};

// Class TheK33.K33TunnelProceduralGenerationComponent
// Size: 0x180 (Inherited: 0xb8)
struct UK33TunnelProceduralGenerationComponent : UKillerSpecificGameStateComponent {
	struct TArray<struct FK33TunnelBlockSpawnData> _blocksSpawnData; // 0xb8(0x10)
	struct TMap<enum class EK33TunnelBlockType, struct TSoftClassPtr<UObject>> _tunnelBlockAssetsReferences; // 0xc8(0x50)
	struct TMap<enum class EK33TunnelBlockType, struct UObject*> _tunnelBlockAssetClasses; // 0x118(0x50)
	struct TArray<struct AK33TunnelBlock*> _tunnelBlocks; // 0x168(0x10)
	float _blockSize; // 0x178(0x04)
	float _basementHeightOffset; // 0x17c(0x04)

	void OnRep_BlockSpawnData(); // Function TheK33.K33TunnelProceduralGenerationComponent.OnRep_BlockSpawnData // (Final|Native|Private) // @ game+0x59b8740
};

// Class TheK33.K33TunnelPulsationComponent
// Size: 0x130 (Inherited: 0xb8)
struct UK33TunnelPulsationComponent : UActorComponent {
	int32_t _initialPulsePoolSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AK33TunnelPulse* _tunnelPulseActorClass; // 0xc0(0x08)
	float _pulseSpeed; // 0xc8(0x04)
	float _timeBetweenPulseWaves; // 0xcc(0x04)
	int32_t _numberOfPulsesPerWaves; // 0xd0(0x04)
	float _timeBetweenPulsesInWave; // 0xd4(0x04)
	float _minDistanceToTriggerNextPulseWave; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct ULocalActorPoolComponent* _pool; // 0xe0(0x08)
	char pad_E8[0x48]; // 0xe8(0x48)
};

// Class TheK33.K33TunnelPulse
// Size: 0x2c8 (Inherited: 0x230)
struct AK33TunnelPulse : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	float _lastPulseForwardOffset; // 0x238(0x04)
	float _lastPulseUpOffset; // 0x23c(0x04)
	struct UCurveFloat* _sideOffsetCurveMultiplier; // 0x240(0x08)
	struct UCurveFloat* _firstTunnelBlockSideOffsetCurveMultiplier; // 0x248(0x08)
	struct UCurveFloat* _lastTunnelBlockSideOffsetCurveMultiplier; // 0x250(0x08)
	float _sideOffsetSize; // 0x258(0x04)
	char pad_25C[0x6c]; // 0x25c(0x6c)

	float Cosmetic_GetFadeOutPercentage(); // Function TheK33.K33TunnelPulse.Cosmetic_GetFadeOutPercentage // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59b86c0
	void Cosmetic_DeactivatePulse(); // Function TheK33.K33TunnelPulse.Cosmetic_DeactivatePulse // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivatePulse(int32_t idInPulseWave); // Function TheK33.K33TunnelPulse.Cosmetic_ActivatePulse // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33Turret
// Size: 0x5a8 (Inherited: 0x4c8)
struct AK33Turret : ACollectable {
	struct USceneComponent* _rootComponent; // 0x4c8(0x08)
	struct USpherePlayerOverlapComponent* _interactableZone; // 0x4d0(0x08)
	struct UInteractor* _turretInteractor; // 0x4d8(0x08)
	struct UDropItemInteraction* _dropInteraction; // 0x4e0(0x08)
	struct UCollectItemInteraction* _collectInteraction; // 0x4e8(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x4f0(0x08)
	struct UMaterialHelper* _materialHelper; // 0x4f8(0x08)
	struct UK33TurretOutlineUpdateStrategy* _turretOutlineUpdateStrategy; // 0x500(0x08)
	struct UChargeableComponent* _turretRepairChargeable; // 0x508(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x510(0x08)
	struct UAnimationMontageSlave* _montageFollower; // 0x518(0x08)
	struct UBoxComponent* _turretCollision; // 0x520(0x08)
	struct UBoxComponent* _tailAttackCollision; // 0x528(0x08)
	struct UK33TurretDangerPredictionComponent* _dangerPredictionComponent; // 0x530(0x08)
	struct UDBDNavModifierComponent* _navModifierComponent; // 0x538(0x08)
	struct USceneComponent* _laserRoot; // 0x540(0x08)
	struct UAuthoritativePoolableActorComponent* _poolableActorComponent; // 0x548(0x08)
	struct UStateController* _turretStateController; // 0x550(0x08)
	struct FName _detectionSocketName; // 0x558(0x0c)
	char pad_564[0x44]; // 0x564(0x44)

	void Cosmetic_UpdateTurretVolumeRTPC(int32_t turretsInRangeCount); // Function TheK33.K33Turret.Cosmetic_UpdateTurretVolumeRTPC // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_UpdateMotionTrackerSoundVolume(float distanceToKiller); // Function TheK33.K33Turret.Cosmetic_UpdateMotionTrackerSoundVolume // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_UpdateLaserLength(float laserLength); // Function TheK33.K33Turret.Cosmetic_UpdateLaserLength // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretHeatChanged(float heatAmount); // Function TheK33.K33Turret.Cosmetic_OnTurretHeatChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTurretDetectionRangeChanged(float newRange); // Function TheK33.K33Turret.Cosmetic_OnTurretDetectionRangeChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerEnteredSpecialModeFXReaction(); // Function TheK33.K33Turret.Cosmetic_OnKillerEnteredSpecialModeFXReaction // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_BipMotionTrackerFX(float distanceToKiller); // Function TheK33.K33Turret.Cosmetic_BipMotionTrackerFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.K33TurretAnimInstance
// Size: 0x360 (Inherited: 0x2f0)
struct UK33TurretAnimInstance : UDBDBaseAnimInstance {
	bool _isInPool; // 0x2f0(0x01)
	bool _isInsideControlStation; // 0x2f1(0x01)
	bool _isBeingCollected; // 0x2f2(0x01)
	bool _isCarryable; // 0x2f3(0x01)
	bool _isAttachedToSurvivor; // 0x2f4(0x01)
	bool _isBeingDeployed; // 0x2f5(0x01)
	bool _isDeployCancelled; // 0x2f6(0x01)
	bool _isDeployed; // 0x2f7(0x01)
	bool _isBeingUndeployed; // 0x2f8(0x01)
	bool _isUndeployCancelled; // 0x2f9(0x01)
	bool _isFiring; // 0x2fa(0x01)
	bool _isOverheated; // 0x2fb(0x01)
	bool _isBeingRepaired; // 0x2fc(0x01)
	bool _isDestroyed; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	float _isFiringAlpha; // 0x300(0x04)
	bool _isMalfunctioning; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float _animYaw; // 0x308(0x04)
	float _frontLegPitch; // 0x30c(0x04)
	float _backLegsPitch; // 0x310(0x04)
	char pad_314[0x4c]; // 0x314(0x4c)
};

// Class TheK33.K33TurretAttackableComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK33TurretAttackableComponent : UAttackableComponent {
};

// Class TheK33.K33TurretAudioVolumeAdjuster
// Size: 0x158 (Inherited: 0xb8)
struct UK33TurretAudioVolumeAdjuster : UActorComponent {
	char pad_B8[0x94]; // 0xb8(0x94)
	float _distanceToTrackTurrets; // 0x14c(0x04)
	char pad_150[0x8]; // 0x150(0x08)
};

// Class TheK33.K33TurretBeingCollectedFromControlStationState
// Size: 0x50 (Inherited: 0x50)
struct UK33TurretBeingCollectedFromControlStationState : UBaseReplicatedState {
};

// Class TheK33.K33TurretBeingDeployedState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretBeingDeployedState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33TurretBeingRepairedState
// Size: 0x50 (Inherited: 0x50)
struct UK33TurretBeingRepairedState : UBaseReplicatedState {
};

// Class TheK33.K33TurretBeingUndeployedState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretBeingUndeployedState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33TurretCarryableState
// Size: 0x78 (Inherited: 0x50)
struct UK33TurretCarryableState : UBaseReplicatedState {
	char pad_50[0x28]; // 0x50(0x28)
};

// Class TheK33.K33TurretCollisionsHandler
// Size: 0xd0 (Inherited: 0xb8)
struct UK33TurretCollisionsHandler : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheK33.K33TurretDamageComponent
// Size: 0x2a0 (Inherited: 0xb8)
struct UK33TurretDamageComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	float _currentDamageAmount; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FTagStateBool _isAttackedByTurret; // 0xf0(0x30)
	char pad_120[0x30]; // 0x120(0x30)
	struct UStatusEffect* _stunnedAfterFullyDamagedEffect; // 0x150(0x08)
	struct FDBDTunableRowHandle _stunnedAfterFullyDamagedDuration; // 0x158(0x28)
	struct FTunableStat _maxDamageAmount; // 0x180(0x80)
	struct FDBDTunableRowHandle _damageReductionRate; // 0x200(0x28)
	struct UCurveFloat* _damageRatePerTurretCurveFloat; // 0x228(0x08)
	struct FDBDTunableRowHandle _damageReductionDelayDuration; // 0x230(0x28)
	char pad_258[0x48]; // 0x258(0x48)

	void OnRep_IsAttackedByTurret(); // Function TheK33.K33TurretDamageComponent.OnRep_IsAttackedByTurret // (Final|Native|Private) // @ game+0x59b87a0
	void OnRep_CurrentDamageAmount(); // Function TheK33.K33TurretDamageComponent.OnRep_CurrentDamageAmount // (Final|Native|Private) // @ game+0x59b8760
	void Multicast_ReceivedMaxDamage(); // Function TheK33.K33TurretDamageComponent.Multicast_ReceivedMaxDamage // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
};

// Class TheK33.K33TurretDangerPredictionComponent
// Size: 0x108 (Inherited: 0xd0)
struct UK33TurretDangerPredictionComponent : UDBDDangerPredictionComponent {
	float MinimumLureDistanceFromKiller; // 0xd0(0x04)
	float IdealDistanceBehindTurret; // 0xd4(0x04)
	float MaxPenaltyAtAngle; // 0xd8(0x04)
	char pad_DC[0x2c]; // 0xdc(0x2c)
};

// Class TheK33.K33TurretDeployedState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretDeployedState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33TurretDestroyedState
// Size: 0x168 (Inherited: 0x50)
struct UK33TurretDestroyedState : UBaseReplicatedState {
	struct FTunableStat _destroyedDuration; // 0x50(0x80)
	float _timeBeforeDisappearance; // 0xd0(0x04)
	char pad_D4[0x94]; // 0xd4(0x94)
};

// Class TheK33.K33TurretDestructionComponent
// Size: 0x1a8 (Inherited: 0xb8)
struct UK33TurretDestructionComponent : UActorComponent {
	struct FDBDTunableRowHandle _autoDestroyTime; // 0xb8(0x28)
	struct FDBDTunableRowHandle _autoDestroyPauseSurvivorRange; // 0xe0(0x28)
	char pad_108[0xa0]; // 0x108(0xa0)

	float GetTurretDestructionDisappearanceDelay(); // Function TheK33.K33TurretDestructionComponent.GetTurretDestructionDisappearanceDelay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59b86f0
};

// Class TheK33.K33TurretFiringState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretFiringState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33TurretInPoolState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretInPoolState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33TurretKillerAttackComponent
// Size: 0x280 (Inherited: 0xb8)
struct UK33TurretKillerAttackComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	bool _isAttacking; // 0xd0(0x01)
	char pad_D1[0x97]; // 0xd1(0x97)
	struct TArray<struct FRaycastProperties> _bipedRaycastProperties; // 0x168(0x10)
	struct TArray<struct FRaycastProperties> _quadrupedRaycastProperties; // 0x178(0x10)
	struct FTunableStat _killerDetectionRadius; // 0x188(0x80)
	struct FActorPairQueryHeightRange _killerDetectionHeightRange; // 0x208(0x08)
	float _sphereTraceRadius; // 0x210(0x04)
	char pad_214[0x6c]; // 0x214(0x6c)
};

// Class TheK33.K33TurretLaserComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UK33TurretLaserComponent : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)

	void OnLocallyObservedPlayerChanged(); // Function TheK33.K33TurretLaserComponent.OnLocallyObservedPlayerChanged // (Final|Native|Private) // @ game+0x59b8720
};

// Class TheK33.K33TurretMalfunctionComponent
// Size: 0x1a0 (Inherited: 0xb8)
struct UK33TurretMalfunctionComponent : UActorComponent {
	char pad_B8[0x68]; // 0xb8(0x68)
	struct FTunableStat _malfunctionDuration; // 0x120(0x80)
};

// Class TheK33.K33TurretMalfunctioningState
// Size: 0x80 (Inherited: 0x50)
struct UK33TurretMalfunctioningState : UBaseReplicatedState {
	char pad_50[0x30]; // 0x50(0x30)
};

// Class TheK33.K33TurretMotionTrackerComponent
// Size: 0x118 (Inherited: 0xb8)
struct UK33TurretMotionTrackerComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* _secondsBetweenBipSoundPerKillerDistanceCurve; // 0xc0(0x08)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct FDBDTunableRowHandle _motionTrackerMaxDetectionRange; // 0xf0(0x28)
};

// Class TheK33.K33TurretOutlineUpdateStrategy
// Size: 0x170 (Inherited: 0x138)
struct UK33TurretOutlineUpdateStrategy : USourceBasedOutlineUpdateStrategy {
	char pad_138[0x14]; // 0x138(0x14)
	struct FLinearColor _outlineColor; // 0x14c(0x10)
	char pad_15C[0x14]; // 0x15c(0x14)
};

// Class TheK33.K33TurretOverheatComponent
// Size: 0x138 (Inherited: 0xb8)
struct UK33TurretOverheatComponent : UActorComponent {
	float _currentHeatAmount; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FDBDTunableRowHandle _turretHeatAccumulationRate; // 0xc0(0x28)
	struct FDBDTunableRowHandle _turretHeatDissipationRate; // 0xe8(0x28)
	char pad_110[0x28]; // 0x110(0x28)

	void OnRep_CurrentHeatAmount(); // Function TheK33.K33TurretOverheatComponent.OnRep_CurrentHeatAmount // (Final|Native|Private) // @ game+0x59b8780
};

// Class TheK33.K33TurretOverheatState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretOverheatState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33TurretPlacementValidationStrategy
// Size: 0x100 (Inherited: 0xe0)
struct UK33TurretPlacementValidationStrategy : UDefaultObjectPlacementValidationStrategy {
	struct FVector _navmeshProjectionBoxExtent; // 0xe0(0x0c)
	struct FVector _navmeshProjectionBoxExtentForSnapping; // 0xec(0x0c)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class TheK33.K33TurretPlacer
// Size: 0x300 (Inherited: 0x270)
struct UK33TurretPlacer : UObjectPlacerComponent {
	char pad_270[0x38]; // 0x270(0x38)
	struct UStaticMeshComponent* _turretVisualPlacementStaticMeshComponentClass; // 0x2a8(0x08)
	bool _replicatedIsPlacementValid; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FVector _replicatedPlacementLocation; // 0x2b4(0x0c)
	char pad_2C0[0x18]; // 0x2c0(0x18)
	struct UStaticMeshComponent* _turretStaticMesh; // 0x2d8(0x08)
	struct TArray<struct FVector> _otherTurretsDropOffLocations; // 0x2e0(0x10)
	float _turretMeshLerpSpeed; // 0x2f0(0x04)
	char pad_2F4[0xc]; // 0x2f4(0x0c)

	void OnRep_ReplicatedIsPlacementValid(); // Function TheK33.K33TurretPlacer.OnRep_ReplicatedIsPlacementValid // (Final|Native|Private) // @ game+0x59b87c0
};

// Class TheK33.K33TurretRepairInteraction
// Size: 0x7c0 (Inherited: 0x790)
struct UK33TurretRepairInteraction : UBasicChargeableInteraction {
	char pad_790[0x30]; // 0x790(0x30)

	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, struct AActor* chargeInstigator, bool wasCoop, float DeltaTime); // Function TheK33.K33TurretRepairInteraction.Authority_OnChargeApplied // (Final|Native|Private) // @ game+0x59b9ab0
};

// Class TheK33.K33TurretSpawnedOnControlStationState
// Size: 0x78 (Inherited: 0x50)
struct UK33TurretSpawnedOnControlStationState : UBaseReplicatedState {
	char pad_50[0x28]; // 0x50(0x28)
};

// Class TheK33.K33TurretSpawningState
// Size: 0x68 (Inherited: 0x50)
struct UK33TurretSpawningState : UBaseReplicatedState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheK33.K33UndeployTurretInteraction
// Size: 0x840 (Inherited: 0x790)
struct UK33UndeployTurretInteraction : UBasicChargeableInteraction {
	char pad_790[0x48]; // 0x790(0x48)
	struct FAnimationMontageDescriptor _cancelMontage; // 0x7d8(0x20)
	struct FAnimationMontageDescriptor _interruptedMontage; // 0x7f8(0x20)
	float _cancelUndeployDuration; // 0x818(0x04)
	char pad_81C[0x24]; // 0x81c(0x24)
};

// Class TheK33.K33Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK33Utilities : UBlueprintFunctionLibrary {

	struct UAuthoritativeActorPoolComponent* GetTurretsPool(struct UObject* WorldContextObject); // Function TheK33.K33Utilities.GetTurretsPool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59b9f60
	struct UK33SpecialModeComponent* GetSpecialModeComponent(struct UObject* WorldContextObject); // Function TheK33.K33Utilities.GetSpecialModeComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59b9ed0
	struct ULocalActorPoolComponent* GetK33VFXFeetPool(struct UObject* WorldContextObject); // Function TheK33.K33Utilities.GetK33VFXFeetPool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59b9e10
	struct AK33Power* GetK33Power(struct UObject* WorldContextObject); // Function TheK33.K33Utilities.GetK33Power // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59b9d80
	struct AK33Husk* GetK33Husk(struct UObject* WorldContextObject); // Function TheK33.K33Utilities.GetK33Husk // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59b9cf0
	int32_t GetAvailableTurretsCountInPool(struct UObject* WorldContextObject); // Function TheK33.K33Utilities.GetAvailableTurretsCountInPool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59b9c60
};

// Class TheK33.S39P01
// Size: 0x3f8 (Inherited: 0x3c8)
struct US39P01 : UPerk {
	float _bloodAndGruntSuppressionTime[0x3]; // 0x3c8(0x0c)
	float _survivorAuraRevealTime; // 0x3d4(0x04)
	float _generatorAuraRevealTime; // 0x3d8(0x04)
	float _perkCooldownTime[0x3]; // 0x3dc(0x0c)
	struct UStatusEffect* _suppressBloodAndGruntsEffectClass; // 0x3e8(0x08)
	struct UStatusEffect* _revealSurvivorAurasEffectClass; // 0x3f0(0x08)
};

// Class TheK33.S39P02
// Size: 0x480 (Inherited: 0x448)
struct US39P02 : USurvivorTrapPerk {
	struct TArray<struct FGameplayTag> _invalidEventTypes; // 0x448(0x10)
	float _slowTime; // 0x458(0x04)
	float _slowAmount; // 0x45c(0x04)
	struct UStatusEffect* _slowEffect; // 0x460(0x08)
	struct UStatusEffect* _slowStatusEffect; // 0x468(0x08)
	struct ATrapChemicalBomb* _trapBombClass; // 0x470(0x08)
	struct ATrapChemicalBomb* _trapChemicalBomb; // 0x478(0x08)

	void Multicast_Cosmetic_OnTrapTriggered(struct AInteractable* Pallet, struct ADBDPlayer* triggerer); // Function TheK33.S39P02.Multicast_Cosmetic_OnTrapTriggered // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x59ba1e0
	void Multicast_Cosmetic_OnTrapRemoved(struct AInteractable* Interactable, enum class ETrapRemovedReason removedReason); // Function TheK33.S39P02.Multicast_Cosmetic_OnTrapRemoved // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x59ba110
	void Multicast_Cosmetic_OnTrapActivated(struct APallet* Generator); // Function TheK33.S39P02.Multicast_Cosmetic_OnTrapActivated // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x59ba080
	void Multicast_Cosmetic_OnSlowEffectEnded(struct ADBDPlayer* Player); // Function TheK33.S39P02.Multicast_Cosmetic_OnSlowEffectEnded // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x59b9ff0
	float GetSlowTime(); // Function TheK33.S39P02.GetSlowTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59b9ea0
	struct ATrapChemicalBomb* GetChemicalBombTrap(); // Function TheK33.S39P02.GetChemicalBombTrap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55608c0
	void Cosmetic_TrapTriggered(struct AInteractable* Pallet, struct ADBDPlayer* triggerer); // Function TheK33.S39P02.Cosmetic_TrapTriggered // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TrapRemoved(struct AInteractable* Interactable, enum class ETrapRemovedReason removedReason); // Function TheK33.S39P02.Cosmetic_TrapRemoved // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TrapActivated(struct APallet* Pallet); // Function TheK33.S39P02.Cosmetic_TrapActivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSlowEffectEnded(struct ADBDPlayer* Player); // Function TheK33.S39P02.Cosmetic_OnSlowEffectEnded // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK33.S39p02TrapInteraction
// Size: 0x650 (Inherited: 0x640)
struct US39p02TrapInteraction : UTrapInteractableInteraction {
	struct ATrapChemicalBomb* _chemicalBomb; // 0x638(0x08)
	enum class EPalletSide _side; // 0x640(0x01)
	char pad_649[0x7]; // 0x649(0x07)
};

// Class TheK33.S39P03
// Size: 0x3d8 (Inherited: 0x3c8)
struct US39P03 : UPerk {
	float _perkCooldownTime[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

// Class TheK33.TurretNavMesh
// Size: 0x500 (Inherited: 0x500)
struct ATurretNavMesh : ARecastNavMesh {
};

