// Class SnowmanWinterEvent.HideInSnowmanInteraction
// Size: 0x710 (Inherited: 0x630)
struct UHideInSnowmanInteraction : UInteractionDefinition {
	struct FDBDTunableRowHandle _timeToEnterSnowman; // 0x630(0x28)
	struct FDBDTunableRowHandle _attachToPlayerDelay; // 0x658(0x28)
	char pad_680[0x90]; // 0x680(0x90)

	void Multicast_StopControllingSnowman(struct ADBDPlayer* Player); // Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StopControllingSnowman // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x56660b0
	void Multicast_StartControllingSnowman(struct ADBDPlayer* Player); // Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StartControllingSnowman // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4d5aa80
};

// Class SnowmanWinterEvent.KillerHideInSnowmanInteraction
// Size: 0x850 (Inherited: 0x710)
struct UKillerHideInSnowmanInteraction : UHideInSnowmanInteraction {
	bool _shouldAttackOutOfSnowman; // 0x708(0x01)
	struct FDBDTunableRowHandle _minimumTimeToAttackAndExit; // 0x710(0x28)
	struct FDBDTunableRowHandle _mousePitchScaleMultiplier; // 0x738(0x28)
	struct FDBDTunableRowHandle _mouseYawScaleMultiplier; // 0x760(0x28)
	struct FDBDTunableRowHandle _gamepadPitchScaleMultiplier; // 0x788(0x28)
	struct FDBDTunableRowHandle _gamepadYawScaleMultiplier; // 0x7b0(0x28)
	struct UCurveFloat* _gamepadPitchCurve; // 0x7d8(0x08)
	struct UCurveFloat* _gamepadYawCurve; // 0x7e0(0x08)
	struct FDBDTunableRowHandle _rotationScaleAdjustmentTime; // 0x7e8(0x28)
	char pad_811[0x3f]; // 0x811(0x3f)
};

// Class SnowmanWinterEvent.Snowman
// Size: 0x648 (Inherited: 0x360)
struct ASnowman : ARespawnableInteractable {
	char pad_360[0x90]; // 0x360(0x90)
	struct FDBDTunableRowHandle _timeToRespawn; // 0x3f0(0x28)
	struct FDBDTunableRowHandle _maxRespawnsAfterKillerAttackWhileOccupied; // 0x418(0x28)
	struct FDBDTunableRowHandle _timeToBeDestroyed; // 0x440(0x28)
	struct FDBDTunableRowHandle _highFiveCooldown; // 0x468(0x28)
	struct FDBDTunableRowHandle _attachToPlayerDelay; // 0x490(0x28)
	enum class ESnowmanState _snowmanState; // 0x4b8(0x01)
	enum class ESnowmanDestructionType _snowmanDestructionType; // 0x4b9(0x01)
	char pad_4BA[0x6]; // 0x4ba(0x06)
	struct ADBDPlayer* _playerUsingThisSnowman; // 0x4c0(0x08)
	char pad_4C8[0xe0]; // 0x4c8(0xe0)
	struct UDBDSkeletalMeshComponentBudgeted* _snowmanSkeletalMesh; // 0x5a8(0x08)
	struct UDBDOutlineComponent* _snowmanOutlineComponent; // 0x5b0(0x08)
	struct UCapsuleComponent* _snowmanCapsule; // 0x5b8(0x08)
	struct UCapsuleComponent* _snowmanHandCapsule; // 0x5c0(0x08)
	struct UChargeableComponent* _hideInSnowmanInteractionChargeable; // 0x5c8(0x08)
	struct UInteractor* _snowmanInteractor; // 0x5d0(0x08)
	struct UPrimitiveComponent* _snowmanInteractionZone; // 0x5d8(0x08)
	struct UBaseActorAttackableComponent* _attackableComponent; // 0x5e0(0x08)
	bool _isAcquiredFromPool; // 0x5e8(0x01)
	char pad_5E9[0x1f]; // 0x5e9(0x1f)
	bool _isMoving; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct ASnowman* _highFiveFollower; // 0x610(0x08)
	char pad_618[0x30]; // 0x618(0x30)

	void OnRep_SnowmanState(); // Function SnowmanWinterEvent.Snowman.OnRep_SnowmanState // (Final|Native|Private) // @ game+0x56680f0
	void OnRep_SnowmanDestructionType(); // Function SnowmanWinterEvent.Snowman.OnRep_SnowmanDestructionType // (Final|Native|Private) // @ game+0x56680d0
	void OnRep_PlayerUsingSnowman(); // Function SnowmanWinterEvent.Snowman.OnRep_PlayerUsingSnowman // (Final|Native|Private) // @ game+0x56680b0
	void OnRep_IsMoving(); // Function SnowmanWinterEvent.Snowman.OnRep_IsMoving // (Final|Native|Private) // @ game+0x5668090
	void OnRep_HighFiveFollower(); // Function SnowmanWinterEvent.Snowman.OnRep_HighFiveFollower // (Final|Native|Private) // @ game+0x5668070
	void OnFinishedPlaying(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function SnowmanWinterEvent.Snowman.OnFinishedPlaying // (Final|Native|Public|HasOutParms) // @ game+0x5667f60
	void Multicast_StartSnowmanDestruction(enum class ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, struct ADBDPlayer* playerInSnowman); // Function SnowmanWinterEvent.Snowman.Multicast_StartSnowmanDestruction // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667df0
	void Multicast_SpawnSnowman(struct FSnowmanSpawnData spawnData); // Function SnowmanWinterEvent.Snowman.Multicast_SpawnSnowman // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667d50
	void Multicast_SetSnowmanMaterialVariant(int32_t materialVariantIndex); // Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanMaterialVariant // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667cc0
	void Multicast_SetSnowmanHiddenInGame(bool IsHidden); // Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanHiddenInGame // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667c30
	void Multicast_OnSnowmanStartBeingUsedBySurvivor(struct ACamperPlayer* survivorUsingSnowman); // Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667ba0
	void Multicast_OnSnowmanStartBeingUsedByKiller(struct ASlasherPlayer* killerUsingSnowman); // Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedByKiller // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5482030
	void Multicast_OnSnowmanStartBeingControlledBySurvivor(struct ACamperPlayer* survivorUsingSnowman); // Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667b10
	void Multicast_OnSnowmanStartBeingControlledByKiller(struct ASlasherPlayer* killerUsingSnowman); // Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledByKiller // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5667a80
	void Multicast_DrawDebugCollisionCheck(struct FVector BoxExtent, float debugLifetime); // Function SnowmanWinterEvent.Snowman.Multicast_DrawDebugCollisionCheck // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|Const) // @ game+0x56679a0
	void Cosmetic_SetSnowmanMaterialVariant(int32_t materialVariantIndex); // Function SnowmanWinterEvent.Snowman.Cosmetic_SetSnowmanMaterialVariant // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(struct ACamperPlayer* survivorUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanStartBeingUsedByKiller(struct ASlasherPlayer* killerUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedByKiller // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(struct ACamperPlayer* survivorUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanStartBeingControlledByKiller(struct ASlasherPlayer* killerUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledByKiller // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanSpawned(); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanSpawned // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanHighFive(struct ASnowman* otherSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanHighFive // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(struct ACamperPlayer* survivorUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanDestroyedByKillerCancelExit(); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerCancelExit // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanDestroyedByKillerAttackExit(struct ASlasherPlayer* killerUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerAttackExit // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(struct ASlasherPlayer* killerAttackingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(struct ACamperPlayer* survivorUsingSnowman, struct ASlasherPlayer* killerAttackingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(struct ACamperPlayer* survivorUsingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(struct ASlasherPlayer* killerAttackingSnowman); // Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSnowmanHandOverlapEnd(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapEnd // (Final|Native|Private) // @ game+0x5667840
	void Authority_OnSnowmanHandOverlapBegin(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x5667620
};

// Class SnowmanWinterEvent.SnowmanAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct USnowmanAnimInstance : UAnimInstance {
	bool _isIdle; // 0x2c0(0x01)
	bool _isBeingEntered; // 0x2c1(0x01)
	bool _isControlled; // 0x2c2(0x01)
	bool _isDestroyed; // 0x2c3(0x01)
	bool _isBeingDestroyedDueToSurvivorRunExit; // 0x2c4(0x01)
	bool _isBeingDestroyedDueToKillerAttackExit; // 0x2c5(0x01)
	bool _isBeingDestroyedDueToKillerAttackWhileControlled; // 0x2c6(0x01)
	bool _isBeingDestroyedDueToKillerAttackWhileEmpty; // 0x2c7(0x01)
	bool _isSurvivorUsingSnowmanMoving; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct TWeakObjectPtr<struct ASnowman> _snowman; // 0x2cc(0x08)
	struct TWeakObjectPtr<struct ADBDPlayer> _playerUsingSnowman; // 0x2d4(0x08)
	char pad_2DC[0x4]; // 0x2dc(0x04)

	void Cosmetic_OnSnowmanDestroyedEvent(enum class ESnowmanDestructionType snowmanDestructionType); // Function SnowmanWinterEvent.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class SnowmanWinterEvent.SnowmanSpawnPlacementStrategy
// Size: 0x2f8 (Inherited: 0xb8)
struct USnowmanSpawnPlacementStrategy : UActorComponent {
	struct FDBDTunableRowHandle _minDistanceFromOtherActiveSnowmen; // 0xb8(0x28)
	struct FDBDTunableRowHandle _minDistanceFromOtherPlayers; // 0xe0(0x28)
	struct FDBDTunableRowHandle _minHatchDistance; // 0x108(0x28)
	struct FDBDTunableRowHandle _minPalletDistance; // 0x130(0x28)
	struct FDBDTunableRowHandle _navmesh_radiusArea; // 0x158(0x28)
	struct FDBDTunableRowHandle _navmesh_minimumDistanceFromOriginSpawnPoint; // 0x180(0x28)
	struct FDBDTunableRowHandle _navmesh_minimumNumberOfNavmeshPointsToBeReady; // 0x1a8(0x28)
	struct FDBDTunableRowHandle _boxExtentXSize; // 0x1d0(0x28)
	struct FDBDTunableRowHandle _boxExtentYSize; // 0x1f8(0x28)
	struct FDBDTunableRowHandle _boxExtentZSize; // 0x220(0x28)
	struct FVector _collisionBoxHalfExtent; // 0x248(0x0c)
	float _collisionCapsuleHalfHeight; // 0x254(0x04)
	float _collisionCapsuleRadius; // 0x258(0x04)
	float _minDistanceFromOtherActiveSnowmenSquared; // 0x25c(0x04)
	float _minDistanceFromOtherPlayersSquared; // 0x260(0x04)
	float _minPalletDistanceSquared; // 0x264(0x04)
	float _minHatchSquaredDistance; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<enum class ETileSpawnPointType> _spawnPointsTileTypes; // 0x270(0x10)
	struct TArray<enum class EGameplayElementType> _spawnPointsGameplayElementTypes; // 0x280(0x10)
	struct TArray<struct FSnowmanSpawnLocationData> _spawnLocationData; // 0x290(0x10)
	struct TArray<struct AHatch*> _hatches; // 0x2a0(0x10)
	struct TArray<struct APallet*> _pallets; // 0x2b0(0x10)
	char pad_2C0[0x20]; // 0x2c0(0x20)
	struct FVector _collisionCheckBoxExtents; // 0x2e0(0x0c)
	float _downRaycastLength; // 0x2ec(0x04)
	float _rayCastZOffet; // 0x2f0(0x04)
	float _distanceToGroundToleranceSquared; // 0x2f4(0x04)

	void Authority_OnIntroCompletedOrLevelReadyToPlay(); // Function SnowmanWinterEvent.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay // (Final|Native|Private) // @ game+0x5668690
};

// Class SnowmanWinterEvent.SnowmanWinterEventComponent
// Size: 0x168 (Inherited: 0xb8)
struct USnowmanWinterEventComponent : UActorComponent {
	struct FDBDTunableRowHandle _numbSnowmenToSpawnAtStart; // 0xb8(0x28)
	char pad_E0[0x38]; // 0xe0(0x38)
	struct USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategyClass; // 0x118(0x08)
	struct ASnowman* _snowmanClass; // 0x120(0x08)
	struct UStatusEffect* _survivorInSnowmanEffect; // 0x128(0x08)
	struct UStatusEffect* _killerInSnowmanEffect; // 0x130(0x08)
	struct USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy; // 0x138(0x08)
	char pad_140[0x18]; // 0x140(0x18)
	struct TArray<struct ASnowman*> _snowmen; // 0x158(0x10)

	void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds); // Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021VisualizeCalculatedSpawnData // (Final|Exec|Native|Private) // @ game+0x56689a0
	void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds); // Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks // (Final|Exec|Native|Private) // @ game+0x5668920
	void DBD_Winter2021RecalculateSpawnPoints(); // Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021RecalculateSpawnPoints // (Final|Exec|Native|Private) // @ game+0x5668900
	void DBD_Winter2021ForceRespawnAllSnowmen(); // Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ForceRespawnAllSnowmen // (Final|Exec|Native|Private) // @ game+0x56688e0
};

// Class SnowmanWinterEvent.SnowmanWinterEventPlayerComponent
// Size: 0x180 (Inherited: 0xb8)
struct USnowmanWinterEventPlayerComponent : UActorComponent {
	struct FDBDTunableRowHandle _maxTrackedTimeSinceSnowmanExit; // 0xb8(0x28)
	struct TSet<struct TWeakObjectPtr<struct ADBDPlayer>> _previouslyHighFivedPlayers; // 0xe0(0x50)
	char pad_130[0x50]; // 0x130(0x50)
};

// Class SnowmanWinterEvent.SurvivorHideInSnowmanInteraction
// Size: 0x800 (Inherited: 0x710)
struct USurvivorHideInSnowmanInteraction : UHideInSnowmanInteraction {
	bool _shouldRunOutOfSnowman; // 0x708(0x01)
	bool _isSnowmanShieldDamaged; // 0x709(0x01)
	struct TArray<struct FGameplayTag> _nonDamagingSnowmanDestroyingEvents; // 0x710(0x10)
	struct FDBDTunableRowHandle _minimumTimeToRunAndExit; // 0x720(0x28)
	struct FDBDTunableRowHandle _cameraZoomBack; // 0x748(0x28)
	struct FDBDTunableRowHandle _timeToZoomEnter; // 0x770(0x28)
	struct FDBDTunableRowHandle _timeToZoomExit; // 0x798(0x28)
	char pad_7C2[0x3e]; // 0x7c2(0x3e)

	void Authority_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Authority_OnDamageStateChanged // (Final|Native|Private) // @ game+0x5668d70
};

