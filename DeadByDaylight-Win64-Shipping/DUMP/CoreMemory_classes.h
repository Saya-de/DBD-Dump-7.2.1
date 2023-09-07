// Class CoreMemory.CoreMemoryBehaviourBase
// Size: 0x30 (Inherited: 0x30)
struct UCoreMemoryBehaviourBase : UObject {
};

// Class CoreMemory.CoreMemoryChallengePlayerSpecificController
// Size: 0x2d8 (Inherited: 0x230)
struct ACoreMemoryChallengePlayerSpecificController : AInfo {
	char pad_230[0x78]; // 0x230(0x78)
	struct ADBDPlayer* _owningPlayer; // 0x2a8(0x08)
	struct UCoreMemoryController* _controller; // 0x2b0(0x08)
	struct TArray<struct UCoreMemoryFragmentComponent*> _fragments; // 0x2b8(0x10)
	int32_t _numFragmentsToCollect; // 0x2c8(0x04)
	char pad_2CC[0xc]; // 0x2cc(0x0c)

	void StartQuest(); // Function CoreMemory.CoreMemoryChallengePlayerSpecificController.StartQuest // (Final|Native|Public) // @ game+0x4b0bce0
	void OnRep_Fragments(); // Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Fragments // (Final|Native|Private) // @ game+0x4b0bcc0
	void OnRep_Controller(); // Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Controller // (Final|Native|Private) // @ game+0x4b0bca0
	void OnPortalReplicated(); // Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnPortalReplicated // (Final|Native|Private) // @ game+0x4b0bc80
};

// Class CoreMemory.CoreMemoryController
// Size: 0x120 (Inherited: 0xb8)
struct UCoreMemoryController : UActorComponent {
	struct TArray<struct UCoreMemoryBehaviourBase*> _behaviours; // 0xb8(0x10)
	struct TArray<struct ACoreMemoryChallengePlayerSpecificController*> _playerSpecificControllers; // 0xc8(0x10)
	struct FName _archiveSpecialBehaviourId; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct ACoreMemoryPortal* _coreMemoryPortalClass; // 0xe8(0x08)
	struct ACoreMemoryPortal* _coreMemoryPortal; // 0xf0(0x08)
	char pad_F8[0x28]; // 0xf8(0x28)

	void OnRep_CoreMemoryPortal(); // Function CoreMemory.CoreMemoryController.OnRep_CoreMemoryPortal // (Final|Native|Private) // @ game+0x4b0c0b0
	void Authority_OnCharacterAdded(struct ADBDPlayer* Player); // Function CoreMemory.CoreMemoryController.Authority_OnCharacterAdded // (Final|Native|Private) // @ game+0x4b0c020
	void Authority_CreatePlayerSpecificController(struct ADBDPlayer* Player); // Function CoreMemory.CoreMemoryController.Authority_CreatePlayerSpecificController // (Final|Native|Private) // @ game+0x4b0bf90
};

// Class CoreMemory.CoreMemoryDebugSpawnBehaviour
// Size: 0x40 (Inherited: 0x30)
struct UCoreMemoryDebugSpawnBehaviour : UCoreMemoryBehaviourBase {
	struct ACoreMemoryFragment* _fragmentClass; // 0x30(0x08)
	int32_t _numberOfFragmentsToSpawn; // 0x38(0x04)
	float _fragmentSpawnOffset; // 0x3c(0x04)
};

// Class CoreMemory.CoreMemoryDefaultQuestProgressBehaviour
// Size: 0x68 (Inherited: 0x30)
struct UCoreMemoryDefaultQuestProgressBehaviour : UCoreMemoryBehaviourBase {
	struct FGameplayTag _onPlayerExitWithMemoryAcquiredScoreTag; // 0x30(0x0c)
	struct FGameplayTag _onFragmentCollectedScoreTag; // 0x3c(0x0c)
	struct FGameplayTag _onMemoryAcquiredScoreTag; // 0x48(0x0c)
	struct FGameplayTag _onMemorySynchronizedScoreTag; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class CoreMemory.CoreMemoryFragment
// Size: 0x2f0 (Inherited: 0x230)
struct ACoreMemoryFragment : AActor {
	char pad_230[0x18]; // 0x230(0x18)
	struct UStaticMeshComponent* _coreMemoryFragmentStaticMesh; // 0x248(0x08)
	struct UStaticMeshComponent* _coreMemoryTendrilStaticMesh; // 0x250(0x08)
	struct UCoreMemoryFragmentComponent* _coreMemoryFragmentComponent; // 0x258(0x08)
	struct UCoreMemoryFragmentFXComponent* _coreMemoryFragmentFXComponent; // 0x260(0x08)
	struct USphereComponent* _coreMemoryFragmentTriggerZone; // 0x268(0x08)
	struct USphereComponent* _coreMemoryFragmentCollectionZone; // 0x270(0x08)
	struct FVector _spawnLocation; // 0x278(0x0c)
	char pad_284[0x4]; // 0x284(0x04)
	struct FDBDTunableRowHandle _triggerZoneRadius; // 0x288(0x28)
	struct FDBDTunableRowHandle _collectionZoneRadius; // 0x2b0(0x28)
	struct FLinearColor _outlineColour; // 0x2d8(0x10)
	struct UDBDOutlineComponent* _outlineComponent; // 0x2e8(0x08)

	void OnRep_SpawnLocation(struct FVector& Location); // Function CoreMemory.CoreMemoryFragment.OnRep_SpawnLocation // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x4b0c580
};

// Class CoreMemory.CoreMemoryFragmentAlwaysVisibleOutlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xe0)
struct UCoreMemoryFragmentAlwaysVisibleOutlineUpdateStrategy : UDefaultOutlineUpdateStrategy {
};

// Class CoreMemory.CoreMemoryFragmentComponent
// Size: 0x1c0 (Inherited: 0xb8)
struct UCoreMemoryFragmentComponent : UActorComponent {
	char pad_B8[0x60]; // 0xb8(0x60)
	struct ADBDPlayer* _owningPlayer; // 0x118(0x08)
	struct ACoreMemoryChallengePlayerSpecificController* _controller; // 0x120(0x08)
	float _lineOfSightTimerRate; // 0x128(0x04)
	bool _wasTriggered; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FGameplayTagContainer _killerPreventingTags; // 0x130(0x20)
	struct FGameplayTagContainer _camperPreventingTags; // 0x150(0x20)
	char pad_170[0x50]; // 0x170(0x50)

	void Server_OnFragmentCollected(); // Function CoreMemory.CoreMemoryFragmentComponent.Server_OnFragmentCollected // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4af1ac0
	void OnRep_WasTriggered(); // Function CoreMemory.CoreMemoryFragmentComponent.OnRep_WasTriggered // (Final|Native|Private) // @ game+0x4b0d220
	void OnRep_OwningPlayer(); // Function CoreMemory.CoreMemoryFragmentComponent.OnRep_OwningPlayer // (Final|Native|Private) // @ game+0x4b0d200
	void OnLocallyObservedChanged(bool IsLocallyObserved); // Function CoreMemory.CoreMemoryFragmentComponent.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x4b0d170
	void OnCollectZoneEntered(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function CoreMemory.CoreMemoryFragmentComponent.OnCollectZoneEntered // (Final|Native|Private|HasOutParms) // @ game+0x4b0cf50
	void Authority_OnTriggerZoneExited(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneExited // (Final|Native|Private) // @ game+0x4b0cdf0
	void Authority_OnTriggerZoneEntered(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneEntered // (Final|Native|Private|HasOutParms) // @ game+0x4b0cbd0
	void Authority_CheckLineOfSight(); // Function CoreMemory.CoreMemoryFragmentComponent.Authority_CheckLineOfSight // (Final|Native|Private) // @ game+0x4b0cbb0
};

// Class CoreMemory.CoreMemoryFragmentFXComponent
// Size: 0x118 (Inherited: 0xb8)
struct UCoreMemoryFragmentFXComponent : UActorComponent {
	struct FMulticastInlineDelegate Cosmetic_FragmentTriggered; // 0xb8(0x10)
	struct FMulticastInlineDelegate Cosmetic_FragmentSpawned; // 0xc8(0x10)
	struct FMulticastInlineDelegate Cosmetic_FragmentDespawn; // 0xd8(0x10)
	struct FMulticastInlineDelegate Cosmetic_FragmentCollected; // 0xe8(0x10)
	struct FRotator _tendrilMeshRotationOffset; // 0xf8(0x0c)
	float _hoverHeight; // 0x104(0x04)
	char pad_108[0x10]; // 0x108(0x10)
};

// Class CoreMemory.CoreMemoryFragmentNavAgentComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UCoreMemoryFragmentNavAgentComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class CoreMemory.CoreMemoryFragmentSimpleMovementComponent
// Size: 0x108 (Inherited: 0xb8)
struct UCoreMemoryFragmentSimpleMovementComponent : UActorComponent {
	struct FName _characterBoneName; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FDBDTunableRowHandle _fragmentMoveSpeed; // 0xd0(0x28)
	struct UCurveFloat* _speedCurve; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class CoreMemory.CoreMemoryImposeStatusEffectBehaviour
// Size: 0x110 (Inherited: 0x30)
struct UCoreMemoryImposeStatusEffectBehaviour : UCoreMemoryBehaviourBase {
	char pad_30[0x18]; // 0x30(0x18)
	struct FCoreMemoryStatusEffectDetails _statusEffectToImposeOnFragmentCollected; // 0x48(0x30)
	struct FCoreMemoryStatusEffectDetails _statusEffectToImposeOnMemoryAcquired; // 0x78(0x30)
	struct FCoreMemoryStatusEffectDetails _statusEffectToImposeOnStartedSynchronizingMemory; // 0xa8(0x30)
	struct FCoreMemoryStatusEffectDetails _statusEffectToImposeOnMemorySynchronized; // 0xd8(0x30)
	bool _shouldUseSameEffectForLastFragment; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class CoreMemory.CoreMemoryNavMovementComponent
// Size: 0x1f8 (Inherited: 0x168)
struct UCoreMemoryNavMovementComponent : UActorNavMovementComponent {
	struct FAIMoveRequest _moveRequest; // 0x168(0x40)
	struct UNavigationQueryFilter* _navFilter; // 0x1a8(0x08)
	float _movementAcceptanceRadius; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FDBDTunableRowHandle _fragmentMoveSpeed; // 0x1b8(0x28)
	struct UCoreMemoryFragmentNavAgentComponent* _navAgentComponent; // 0x1e0(0x08)
	char pad_1E8[0x10]; // 0x1e8(0x10)
};

// Class CoreMemory.CoreMemoryPortal
// Size: 0x428 (Inherited: 0x378)
struct ACoreMemoryPortal : ASpecialBehaviourInteractable {
	char pad_378[0x18]; // 0x378(0x18)
	struct UStaticMeshComponent* _coreMemoryPortalStaticMesh; // 0x390(0x08)
	struct UCoreMemoryPortalComponent* _coreMemoryPortalComponent; // 0x398(0x08)
	struct UCoreMemoryPortalFXComponent* _coreMemoryPortalFXComponent; // 0x3a0(0x08)
	struct UInteractor* _synchronizeCoreMemoryInteractor; // 0x3a8(0x08)
	struct USynchronizeCoreMemoryInteraction* _synchronizeCoreMemoryInteraction; // 0x3b0(0x08)
	struct USynchronizeCoreMemoryInteraction* _synchronizeCoreMemoryInteractionKiller; // 0x3b8(0x08)
	struct UChargeableComponent* _synchronizeCoreMemoryInteractionChargeable; // 0x3c0(0x08)
	struct UChargeableComponent* _synchronizeCoreMemoryInteractionChargeableKiller; // 0x3c8(0x08)
	struct UPrimitiveComponent* _synchronizeCoreMemoryInteractionZone; // 0x3d0(0x08)
	struct FDBDTunableRowHandle _synchronizeCoreMemoryInteractionSecondsToCharge; // 0x3d8(0x28)
	struct FDBDTunableRowHandle _synchronizeCoreMemoryInteractionSecondsToChargeKiller; // 0x400(0x28)
};

// Class CoreMemory.CoreMemoryPortalComponent
// Size: 0x140 (Inherited: 0xb8)
struct UCoreMemoryPortalComponent : UActorComponent {
	char pad_B8[0x78]; // 0xb8(0x78)
	struct TArray<struct ADBDPlayer*> _playersWithActivePortal; // 0x130(0x10)

	struct TArray<struct ADBDPlayer*> GetPlayersWithActivePortal(); // Function CoreMemory.CoreMemoryPortalComponent.GetPlayersWithActivePortal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b0e220
};

// Class CoreMemory.CoreMemoryPortalDefaultBehaviour
// Size: 0x30 (Inherited: 0x30)
struct UCoreMemoryPortalDefaultBehaviour : UCoreMemoryBehaviourBase {
};

// Class CoreMemory.CoreMemoryPortalFXComponent
// Size: 0x120 (Inherited: 0xb8)
struct UCoreMemoryPortalFXComponent : UActorComponent {
	struct FMulticastInlineDelegate Cosmetic_OnPortalSpawned; // 0xb8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnPlayerStartedInteractingWithPortal; // 0xc8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnPortalInteractionInterrupted; // 0xd8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnPortalDeactivated; // 0xe8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnInteractionComplete; // 0xf8(0x10)
	char pad_108[0x18]; // 0x108(0x18)
};

// Class CoreMemory.CoreMemoryPortalOutlineUpdateStrategy
// Size: 0xf0 (Inherited: 0xe0)
struct UCoreMemoryPortalOutlineUpdateStrategy : UDefaultOutlineUpdateStrategy {
	struct FLinearColor _outlineColor; // 0xe0(0x10)
};

// Class CoreMemory.CoreMemoryRemoveStatusEffectBehaviour
// Size: 0x50 (Inherited: 0x30)
struct UCoreMemoryRemoveStatusEffectBehaviour : UCoreMemoryBehaviourBase {
	struct UStatusEffect* _statusEffectToRemoveOnFragmentCollected; // 0x30(0x08)
	struct UStatusEffect* _statusEffectToRemoveOnMemoryAcquired; // 0x38(0x08)
	struct UStatusEffect* _statusEffectToRemoveOnStartedSynchronizingMemory; // 0x40(0x08)
	struct UStatusEffect* _statusEffectToRemoveOnMemorySynchronized; // 0x48(0x08)
};

// Class CoreMemory.CoreMemoryScreamBehaviour
// Size: 0x38 (Inherited: 0x30)
struct UCoreMemoryScreamBehaviour : UCoreMemoryBehaviourBase {
	bool _shouldScreamOnCollect; // 0x30(0x01)
	bool _shouldScreamOnAcquired; // 0x31(0x01)
	bool _shouldScreamOnSynchronized; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)

	void Cosmetic_Scream(struct ACamperPlayer* camper); // Function CoreMemory.CoreMemoryScreamBehaviour.Cosmetic_Scream // (BlueprintCosmetic|Event|Protected|BlueprintEvent|Const) // @ game+0x5e02c90
};

// Class CoreMemory.CoreMemorySpawnedStatusEffectTrackerComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UCoreMemorySpawnedStatusEffectTrackerComponent : UActorComponent {
	struct TArray<struct TWeakObjectPtr<struct UStatusEffect>> _authority_spawnedStatusEffects; // 0xb8(0x10)
	struct TWeakObjectPtr<struct UCoreMemoryImposeStatusEffectBehaviour> _authority_imposeStatusEffectBehaviour; // 0xc8(0x08)

	void Authority_AddSpawnedStatusEffect(struct UStatusEffect* StatusEffect, struct ACoreMemoryChallengePlayerSpecificController* PlayerController); // Function CoreMemory.CoreMemorySpawnedStatusEffectTrackerComponent.Authority_AddSpawnedStatusEffect // (Final|Native|Private) // @ game+0x4b0ec90
};

// Class CoreMemory.CoreMemorySpawnFragmentsOnCollectBehaviour
// Size: 0x48 (Inherited: 0x30)
struct UCoreMemorySpawnFragmentsOnCollectBehaviour : UCoreMemoryBehaviourBase {
	struct FCoreMemoryFragmentSpawnData _fragmentSpawnData; // 0x30(0x18)
};

// Class CoreMemory.CoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour
// Size: 0x48 (Inherited: 0x30)
struct UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour : UCoreMemoryBehaviourBase {
	struct FCoreMemoryFragmentSpawnData _fragmentSpawnData; // 0x30(0x18)
};

// Class CoreMemory.CoreMemoryUtilities
// Size: 0x30 (Inherited: 0x30)
struct UCoreMemoryUtilities : UObject {
};

// Class CoreMemory.SynchronizeCoreMemoryInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct USynchronizeCoreMemoryInteraction : UChargeableInteractionDefinition {
	char pad_760[0x50]; // 0x760(0x50)
};

