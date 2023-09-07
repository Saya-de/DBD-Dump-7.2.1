// Class Halloween2022.VoidEnergyChangeQEEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct UVoidEnergyChangeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x10]; // 0xb8(0x10)

	void ListenToOnComponentAddedEvent(); // Function Halloween2022.VoidEnergyChangeQEEvaluator.ListenToOnComponentAddedEvent // (Native|Protected) // @ game+0x564d140
};

// Class Halloween2022.DepositEnergyInMatchQEEvaluator
// Size: 0xc8 (Inherited: 0xc8)
struct UDepositEnergyInMatchQEEvaluator : UVoidEnergyChangeQEEvaluator {
};

// Class Halloween2022.DepositVoidEnergyTierQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UDepositVoidEnergyTierQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnVoidEnergyDeposited(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.DepositVoidEnergyTierQEEvaluator.OnVoidEnergyDeposited // (Final|Native|Public|HasOutParms) // @ game+0x564a630
};

// Class Halloween2022.HalloweenCentrifugeAnimInstance
// Size: 0x300 (Inherited: 0x2c0)
struct UHalloweenCentrifugeAnimInstance : UAnimInstance {
	bool _isActive; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float _blendSpaceValue; // 0x2c4(0x04)
	float _timeToChangeBlendValue; // 0x2c8(0x04)
	char pad_2CC[0x34]; // 0x2cc(0x34)

	void SetDesiredBlendValue(float blendValue); // Function Halloween2022.HalloweenCentrifugeAnimInstance.SetDesiredBlendValue // (Final|Native|Public|BlueprintCallable) // @ game+0x564b0f0
	void OnEnergySpawned(int32_t previousEnergy, int32_t currentEnergy); // Function Halloween2022.HalloweenCentrifugeAnimInstance.OnEnergySpawned // (Final|Native|Protected) // @ game+0x564b020
	void OnBlendValueChanged(float blendValue); // Function Halloween2022.HalloweenCentrifugeAnimInstance.OnBlendValueChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2022.GeneratorCentrifugeAnimInstance
// Size: 0x310 (Inherited: 0x300)
struct UGeneratorCentrifugeAnimInstance : UHalloweenCentrifugeAnimInstance {
	char pad_300[0x10]; // 0x300(0x10)

	void StopRepairing(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.GeneratorCentrifugeAnimInstance.StopRepairing // (Final|Native|Private|HasOutParms) // @ game+0x564ac40
	void StartRepairing(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.GeneratorCentrifugeAnimInstance.StartRepairing // (Final|Native|Private|HasOutParms) // @ game+0x564ab30
	void OnStopRepair(struct AGenerator* Generator); // Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStopRepair // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnStartRepair(struct AGenerator* Generator); // Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStartRepair // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2022.MeatHookCentrifugeAnimInstance
// Size: 0x340 (Inherited: 0x300)
struct UMeatHookCentrifugeAnimInstance : UHalloweenCentrifugeAnimInstance {
	char pad_300[0x30]; // 0x300(0x30)
	float _animationLength; // 0x330(0x04)
	char pad_334[0xc]; // 0x334(0x0c)

	void PlayerNoLongerOnHook(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerNoLongerOnHook // (Final|Native|Private|HasOutParms) // @ game+0x564b640
	void PlayerHooked(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerHooked // (Final|Native|Private|HasOutParms) // @ game+0x564b530
	void OnPlayerNoLongerOnHook(struct AMeatHook* MeatHook); // Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerNoLongerOnHook // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnPlayerHooked(struct AMeatHook* MeatHook); // Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerHooked // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2022.PlayerVoidEnergy
// Size: 0x308 (Inherited: 0xb8)
struct UPlayerVoidEnergy : UActorComponent {
	char pad_B8[0x60]; // 0xb8(0x60)
	enum class EVoidEnergyChangeReason _reasonLastVoidEnergyChangeOccurred; // 0x118(0x01)
	char pad_119[0xb]; // 0x119(0x0b)
	int32_t _currentVoidEnergy; // 0x124(0x04)
	struct TArray<struct FDBDTunableRowHandle> _bloodPointMultiplierTiers; // 0x128(0x10)
	int32_t _totalVoidEnergySpent; // 0x138(0x04)
	float _currentBloodpointsMultiplier; // 0x13c(0x04)
	char pad_140[0x28]; // 0x140(0x28)
	struct TArray<struct FDBDTunableRowHandle> _voidEnergyLevelsToStartNextTier; // 0x168(0x10)
	struct FDBDTunableRowHandle _maxEnergyOnPlayerAllowed; // 0x178(0x28)
	struct FDBDTunableRowHandle _maxEnergyPlayerCanBank; // 0x1a0(0x28)
	struct FDBDTunableRowHandle _amountLostOnDownAsSurvivor; // 0x1c8(0x28)
	struct FDBDTunableRowHandle _amountGainedOnDownAsKiller; // 0x1f0(0x28)
	struct FDBDTunableRowHandle _amountGainedOnStunAsSurvivor; // 0x218(0x28)
	struct FDBDTunableRowHandle _amountLostOnStunAsKiller; // 0x240(0x28)
	struct TArray<struct FDBDTunableRowHandle> _hasteValueTiers; // 0x268(0x10)
	struct FDBDTunableRowHandle _timeHasteEffectLasts; // 0x278(0x28)
	struct UStatusEffect* _hasteStatusEffect; // 0x2a0(0x08)
	struct UVoidEnergyOrbSpawner* _voidEnergyOrbSpawnerClass; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)
	struct TArray<struct FGameplayTag> _scoreEventTiers; // 0x2b8(0x10)
	struct TArray<struct FGameplayTag> _scoreEventTiersWithoutOffering; // 0x2c8(0x10)
	char pad_2D8[0x30]; // 0x2d8(0x30)

	void OnVoidEnergySpent(); // Function Halloween2022.PlayerVoidEnergy.OnVoidEnergySpent // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnVoidEnergyLost(); // Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyLost // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnVoidEnergyGained(); // Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyGained // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_TotalVoidEnergySpent(); // Function Halloween2022.PlayerVoidEnergy.OnRep_TotalVoidEnergySpent // (Final|Native|Private) // @ game+0x564bfc0
	void OnRep_CurrentVoidEnergy(int32_t previousEnergyCount); // Function Halloween2022.PlayerVoidEnergy.OnRep_CurrentVoidEnergy // (Final|Native|Private) // @ game+0x564bf30
	void OnLocallyObservedChanged(struct ADBDPlayer* Player); // Function Halloween2022.PlayerVoidEnergy.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x564bea0
	void OnLocallyControlledChanged(); // Function Halloween2022.PlayerVoidEnergy.OnLocallyControlledChanged // (Final|Native|Private) // @ game+0x564be80
	int32_t GetTotalVoidEnergyDeposited(); // Function Halloween2022.PlayerVoidEnergy.GetTotalVoidEnergyDeposited // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564be50
	int32_t GetMaxAmountOfVoidEnergyCanReceive(); // Function Halloween2022.PlayerVoidEnergy.GetMaxAmountOfVoidEnergyCanReceive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564be20
	int32_t GetCurrentVoidEnergyRewardTier(); // Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyRewardTier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564bdf0
	int32_t GetCurrentVoidEnergyCount(); // Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564bdc0
	float GetCurrentBloodPointMultiplier(); // Function Halloween2022.PlayerVoidEnergy.GetCurrentBloodPointMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564bd90
};

// Class Halloween2022.UnstableRift
// Size: 0x480 (Inherited: 0x378)
struct AUnstableRift : ASpecialBehaviourInteractable {
	bool _isInitialized; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UUnstableRiftInteraction* _unstableRiftInteractionSurvivor; // 0x380(0x08)
	struct UUnstableRiftInteraction* _unstableRiftInteractionKiller; // 0x388(0x08)
	struct UChargeableComponent* _unstableRiftInteractionChargeableSurvivor; // 0x390(0x08)
	struct UChargeableComponent* _unstableRiftInteractionChargeableKiller; // 0x398(0x08)
	struct UInteractor* _unstableRiftInteractor; // 0x3a0(0x08)
	struct UPrimitiveComponent* _unstableRiftInteractionZone; // 0x3a8(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x3b0(0x08)
	struct UUnstableRiftOutlineStrategy* _outlineStrategy; // 0x3b8(0x08)
	struct UStaticMeshComponent* _unstableRiftMesh; // 0x3c0(0x08)
	struct UUnstableRiftTeleportationComponent* _unstableRiftTeleportationComponent; // 0x3c8(0x08)
	struct UNearTrackedActorComponent* _nearTrackedActorComponent; // 0x3d0(0x08)
	struct FDBDTunableRowHandle _unstableRiftInteractionSecondsToChargeSurvivor; // 0x3d8(0x28)
	struct FDBDTunableRowHandle _unstableRiftInteractionSecondsToChargeKiller; // 0x400(0x28)
	struct FDBDTunableRowHandle _unstableRiftSecondsBeforeTeleport; // 0x428(0x28)
	struct FDBDTunableRowHandle _offeringDirectionalAudioCueDistance; // 0x450(0x28)
	struct UAkAudioEvent* _offeringAudioEvent; // 0x478(0x08)

	void OnIntroCompleted(); // Function Halloween2022.UnstableRift.OnIntroCompleted // (Final|Native|Private) // @ game+0x564c510
	void Cosmetic_OnTeleportStart(bool hadPlayerInteraction); // Function Halloween2022.UnstableRift.Cosmetic_OnTeleportStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportFinished(); // Function Halloween2022.UnstableRift.Cosmetic_OnTeleportFinished // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportDelayStarted(); // Function Halloween2022.UnstableRift.Cosmetic_OnTeleportDelayStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStoppedInteracting(); // Function Halloween2022.UnstableRift.Cosmetic_OnStoppedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Halloween2022.UnstableRift.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Halloween2022.UnstableRift.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ChangeUnstableVisibility(bool IsVisible); // Function Halloween2022.UnstableRift.Cosmetic_ChangeUnstableVisibility // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2022.UnstableRiftInteraction
// Size: 0x790 (Inherited: 0x760)
struct UUnstableRiftInteraction : UChargeableInteractionDefinition {
	char pad_760[0x2c]; // 0x760(0x2c)
	float _heightOffsetForOrbs; // 0x78c(0x04)
};

// Class Halloween2022.UnstableRiftOutlineStrategy
// Size: 0x150 (Inherited: 0x138)
struct UUnstableRiftOutlineStrategy : USourceBasedOutlineUpdateStrategy {
	struct FLinearColor _displayColor; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class Halloween2022.UnstableRiftTeleportationComponent
// Size: 0x200 (Inherited: 0xb8)
struct UUnstableRiftTeleportationComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _unstableRiftTeleportDelay; // 0xd0(0x28)
	struct FDBDTunableRowHandle _teleportationVisualsDelay; // 0xf8(0x28)
	struct FDBDTunableRowHandle _minDistanceFromOtherUnstableRifts; // 0x120(0x28)
	char pad_148[0x90]; // 0x148(0x90)
	enum class EGameplayElementType _spawnType; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct TArray<struct AUnstableRift*> _allUnstableRifts; // 0x1e0(0x10)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	void Multicast_TeleportUnstableRift(struct FVector Location); // Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_TeleportUnstableRift // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x4af5000
	void Multicast_PreTeleportation(struct FVector teleportLocation, bool hadPlayerInteraction); // Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_PreTeleportation // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x564ccb0
	void Authority_OnLevelReadyToPlay(); // Function Halloween2022.UnstableRiftTeleportationComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x564cc90
};

// Class Halloween2022.VoidEnergyAmountInMatchQEEvaluator
// Size: 0xd0 (Inherited: 0xc8)
struct UVoidEnergyAmountInMatchQEEvaluator : UVoidEnergyChangeQEEvaluator {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Halloween2022.VoidEnergyProducer
// Size: 0x190 (Inherited: 0xb8)
struct UVoidEnergyProducer : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _maxEnergyCanAward; // 0xd0(0x28)
	struct FDBDTunableRowHandle _energyToGiveOnEvent; // 0xf8(0x28)
	struct FGameplayTagContainer _gameEventToRewardEnergy; // 0x120(0x20)
	int32_t _totalEnergyGiven; // 0x140(0x04)
	char pad_144[0x1c]; // 0x144(0x1c)
	struct FName _voidEnergySpawnObjectName; // 0x160(0x0c)
	struct FName _voidEnergyHoverObjectName; // 0x16c(0x0c)
	char pad_178[0x18]; // 0x178(0x18)

	void OnRep_TotalEnergyGiven(int32_t lastTotalEnergyGivenValue); // Function Halloween2022.VoidEnergyProducer.OnRep_TotalEnergyGiven // (Final|Native|Protected) // @ game+0x564eae0
	bool HasEnergyLeftToGive(); // Function Halloween2022.VoidEnergyProducer.HasEnergyLeftToGive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564eab0
	int32_t GetRemainingEnergy(); // Function Halloween2022.VoidEnergyProducer.GetRemainingEnergy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564ea80
	void Cosmetic_OnVoidOrbsSpawned(int32_t orbsSpawned); // Function Halloween2022.VoidEnergyProducer.Cosmetic_OnVoidOrbsSpawned // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2022.VoidEnergyGeneratorComponent
// Size: 0x210 (Inherited: 0x190)
struct UVoidEnergyGeneratorComponent : UVoidEnergyProducer {
	struct FDBDTunableRowHandle _timeWorkingOnGeneratorNeededToAwardEnergy; // 0x190(0x28)
	char pad_1B8[0x58]; // 0x1b8(0x58)

	float GetCurrentTimeDoneOnGenerator(struct ADBDPlayer* Player); // Function Halloween2022.VoidEnergyGeneratorComponent.GetCurrentTimeDoneOnGenerator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564d350
};

// Class Halloween2022.VoidEnergyMeatHookComponent
// Size: 0x190 (Inherited: 0x190)
struct UVoidEnergyMeatHookComponent : UVoidEnergyProducer {
};

// Class Halloween2022.VoidEnergyOrb
// Size: 0x2f8 (Inherited: 0x230)
struct AVoidEnergyOrb : AActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct FName _characterBoneName; // 0x240(0x0c)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FDBDTunableRowHandle _timeHoverDuration; // 0x250(0x28)
	struct FDBDTunableRowHandle _timeToMoveToTarget; // 0x278(0x28)
	float _timeBeforeCollectionToPlaySound; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	float _minAmplitudeAllowed; // 0x2a8(0x04)
	float _maxAmplitudeAllowed; // 0x2ac(0x04)
	char pad_2B0[0x48]; // 0x2b0(0x48)

	void PlaceOrbInQueue(); // Function Halloween2022.VoidEnergyOrb.PlaceOrbInQueue // (Final|Native|Private|BlueprintCallable) // @ game+0x564d920
	void Cosmetic_OnOrbSpawned(struct ADBDPlayer* playerGivingOrbTo, bool isLargeOrb); // Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbSpawned // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnOrbDisappearWithoutCollection(bool isLargeOrb); // Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithoutCollection // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnOrbDisappearWithCollection(struct ADBDPlayer* playerGivingOrbTo); // Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithCollection // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DelayBeforeCollection(struct ADBDPlayer* playerGivingOrbTo); // Function Halloween2022.VoidEnergyOrb.Cosmetic_DelayBeforeCollection // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2022.VoidEnergyOrbSpawner
// Size: 0x220 (Inherited: 0xb8)
struct UVoidEnergyOrbSpawner : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FDBDTunableRowHandle _timeBetweenEachSpawn; // 0xc8(0x28)
	struct FDBDTunableRowHandle _totalDistanceForOrbs; // 0xf0(0x28)
	struct FDBDTunableRowHandle _maxDistanceDown; // 0x118(0x28)
	struct FDBDTunableRowHandle _timeOrbMoves; // 0x140(0x28)
	struct FDBDTunableRowHandle _timeOrbHovers; // 0x168(0x28)
	float _downedSurviorSpawnOffsetHeight; // 0x190(0x04)
	float _palletSpawnHeightOfOrbs; // 0x194(0x04)
	float _lockerSpawnForwardOffset; // 0x198(0x04)
	float _lockerSpawnUpwardOffset; // 0x19c(0x04)
	float _slasherSpawnOffset; // 0x1a0(0x04)
	float _slasherSpawnOffsetFarDown; // 0x1a4(0x04)
	char pad_1A8[0x10]; // 0x1a8(0x10)
	struct AActor* _voidEnergyOrbClass; // 0x1b8(0x08)
	char pad_1C0[0x60]; // 0x1c0(0x60)

	void Multicast_SpawnVoidEnergyOrb(struct FOrbProperties OrbProperties, bool isLargeOrb); // Function Halloween2022.VoidEnergyOrbSpawner.Multicast_SpawnVoidEnergyOrb // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x564e6a0
	void Authority_TimerSpawnVoidEnergyOrb(struct FOrbProperties OrbProperties, bool isLargeOrb); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_TimerSpawnVoidEnergyOrb // (Final|Native|Private) // @ game+0x564e560
	void Authority_SurvivorStunOnKiller(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunOnKiller // (Final|Native|Private|HasOutParms) // @ game+0x564e450
	void Authority_SurvivorStunKillerWithPallet(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithPallet // (Final|Native|Private|HasOutParms) // @ game+0x564e340
	void Authority_SurvivorStunKillerWithHeadOn(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithHeadOn // (Final|Native|Private|HasOutParms) // @ game+0x564e230
	void Authority_SurvivorStunKillerWithFlashLight(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithFlashLight // (Final|Native|Private|HasOutParms) // @ game+0x564e120
	void Authority_SpawnVoidEnergyOrbs(struct FOrbProperties& OrbProperties, int32_t numberOfOrbsToSpawn, int32_t numberOfOrbsThatCanBeAbsorbed); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_SpawnVoidEnergyOrbs // (Final|Native|Public|HasOutParms) // @ game+0x564dfc0
	void Authority_KillerDownSurvivor(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_KillerDownSurvivor // (Final|Native|Private|HasOutParms) // @ game+0x564deb0
	void Authority_GiveVoidEnergyToPlayer(enum class EVoidEnergyType VoidEnergyType, int32_t voidEnergyToAdd); // Function Halloween2022.VoidEnergyOrbSpawner.Authority_GiveVoidEnergyToPlayer // (Final|Native|Private) // @ game+0x564dde0
};

// Class Halloween2022.VoidEnergyPumpkinComponent
// Size: 0x208 (Inherited: 0x190)
struct UVoidEnergyPumpkinComponent : UVoidEnergyProducer {
	struct FDBDTunableRowHandle _treatVoidEnergyAmount; // 0x190(0x28)
	struct FDBDTunableRowHandle _trickVoidEnergyAmount; // 0x1b8(0x28)
	struct FDBDTunableRowHandle _neutralVoidEnergyAmount; // 0x1e0(0x28)
};

