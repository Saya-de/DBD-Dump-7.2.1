// Class Barrel2023.Barrel
// Size: 0x450 (Inherited: 0x360)
struct ABarrel : ARespawnableInteractable {
	struct UBarrelInteraction* _barrelInteraction; // 0x360(0x08)
	struct UBarrelInteraction* _barrelInteractionKiller; // 0x368(0x08)
	struct UChargeableComponent* _barrelInteractionChargeable; // 0x370(0x08)
	struct UChargeableComponent* _barrelInteractionChargeableKiller; // 0x378(0x08)
	struct UPrimitiveComponent* _barrelInteractionZone; // 0x380(0x08)
	struct UInteractor* _barrelInteractor; // 0x388(0x08)
	struct UStaticMeshComponent* _barrelStaticMesh; // 0x390(0x08)
	struct UStaticMeshComponent* _extractorStaticMesh; // 0x398(0x08)
	struct FDBDTunableRowHandle _barrelInteractionSecondsToCharge; // 0x3a0(0x28)
	struct FDBDTunableRowHandle _barrelInteractionSecondsToChargeKiller; // 0x3c8(0x28)
	enum class EBarrelType _barrelType; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UDBDOutlineComponent* _outlineComponent; // 0x3f8(0x08)
	struct FGameplayTag _scoreTag; // 0x400(0x0c)
	char pad_40C[0x34]; // 0x40c(0x34)
	struct FVector _barrelLocation; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)

	void SetDissolveStarted(bool isDissolveStarted); // Function Barrel2023.Barrel.SetDissolveStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x4afc330
	void OnRep_OnLocationChanged(); // Function Barrel2023.Barrel.OnRep_OnLocationChanged // (Final|Native|Private) // @ game+0x4afc310
	void OnBarrelDespawnCosmeticsComplete(); // Function Barrel2023.Barrel.OnBarrelDespawnCosmeticsComplete // (Final|Native|Protected|BlueprintCallable) // @ game+0x4afc2f0
	void Cosmetic_OnStoppedInteracting(); // Function Barrel2023.Barrel.Cosmetic_OnStoppedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Barrel2023.Barrel.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionInterruptedByPlayer(); // Function Barrel2023.Barrel.Cosmetic_OnInteractionInterruptedByPlayer // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Barrel2023.Barrel.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFirstBarrelSpawn(); // Function Barrel2023.Barrel.Cosmetic_OnFirstBarrelSpawn // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnBarrelRespawn(); // Function Barrel2023.Barrel.Cosmetic_OnBarrelRespawn // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnBarrelDespawn(bool wasInteractionCompleted); // Function Barrel2023.Barrel.Cosmetic_OnBarrelDespawn // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class Barrel2023.BarrelEventComponent
// Size: 0x260 (Inherited: 0xb8)
struct UBarrelEventComponent : UActorComponent {
	struct TArray<struct ABarrel*> _spawnableBarrelClasses; // 0xb8(0x10)
	struct FDBDTunableRowHandle _barrelSwitchTimerMin; // 0xc8(0x28)
	struct FDBDTunableRowHandle _barrelSwitchTimerMax; // 0xf0(0x28)
	struct FDBDTunableRowHandle _redBarrelSpawnDelay; // 0x118(0x28)
	struct FDBDTunableRowHandle _numberOfGeneratorsToComplete; // 0x140(0x28)
	struct FDBDTunableRowHandle _numberOfHooksToComplete; // 0x168(0x28)
	char pad_190[0x38]; // 0x190(0x38)
	struct TMap<struct ABarrel*, struct FVector> _barrelLocations; // 0x1c8(0x50)
	char pad_218[0x40]; // 0x218(0x40)
	float _collisionCapsuleHalfHeight; // 0x258(0x04)
	float _collisionCapsuleRadius; // 0x25c(0x04)

	void DBD_BarrelSpawnRedBarrel(); // Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnRedBarrel // (Final|Exec|Native|Private) // @ game+0x4afc980
	void DBD_BarrelSpawnGreenBarrel(); // Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnGreenBarrel // (Final|Exec|Native|Private) // @ game+0x4afc960
	void DBD_BarrelSpawnBlueBarrel(); // Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnBlueBarrel // (Final|Exec|Native|Private) // @ game+0x4afc940
	void DBD_BarrelPauseAllTimers(bool shouldPause); // Function Barrel2023.BarrelEventComponent.DBD_BarrelPauseAllTimers // (Final|Exec|Native|Private) // @ game+0x4afc8b0
	void DBD_BarrelDebugBarrelSpawnPositions(float Duration); // Function Barrel2023.BarrelEventComponent.DBD_BarrelDebugBarrelSpawnPositions // (Final|Exec|Native|Private|Const) // @ game+0x4afc830
	void Authority_OnIntroComplete(); // Function Barrel2023.BarrelEventComponent.Authority_OnIntroComplete // (Final|Native|Private) // @ game+0x4afc810
	void Authority_OnBarrelTimerDone(struct ARespawnableInteractable* RespawnableInteractable); // Function Barrel2023.BarrelEventComponent.Authority_OnBarrelTimerDone // (Final|Native|Private) // @ game+0x4afc780
	void Authority_OnBarrelInteractionChanged(struct ARespawnableInteractable* RespawnableInteractable, bool IsInteracting); // Function Barrel2023.BarrelEventComponent.Authority_OnBarrelInteractionChanged // (Final|Native|Private) // @ game+0x4afc6b0
};

// Class Barrel2023.BarrelInteraction
// Size: 0x7a0 (Inherited: 0x760)
struct UBarrelInteraction : UChargeableInteractionDefinition {
	char pad_760[0x28]; // 0x760(0x28)
	bool _isInteractionChargeComplete; // 0x788(0x01)
	char pad_789[0x3]; // 0x789(0x03)
	float _facingTolerance; // 0x78c(0x04)
	float _facingHeightUpOffset; // 0x790(0x04)
	float _facingHeightDownOffset; // 0x794(0x04)
	char pad_798[0x8]; // 0x798(0x08)
};

// Class Barrel2023.BarrelPlayerComponent
// Size: 0x120 (Inherited: 0xb8)
struct UBarrelPlayerComponent : UActorComponent {
	struct TArray<enum class EBarrelType> _interactedBarrels; // 0xb8(0x10)
	char pad_C8[0x58]; // 0xc8(0x58)

	void Server_SetCharmInfo(bool isRedUnlocked, bool isGreenUnlocked, bool isBlueUnlocked); // Function Barrel2023.BarrelPlayerComponent.Server_SetCharmInfo // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4afcff0
	struct TArray<enum class EBarrelType> GetInteractedBarrels(); // Function Barrel2023.BarrelPlayerComponent.GetInteractedBarrels // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4afcf60
	void DBD_BarrelResetInteractedBarrels(); // Function Barrel2023.BarrelPlayerComponent.DBD_BarrelResetInteractedBarrels // (Final|Exec|Native|Private) // @ game+0x4afcf40
	void Cosmetic_TriggerPlayerVignette(struct ADBDPlayer* Player, enum class EBarrelType BarrelType); // Function Barrel2023.BarrelPlayerComponent.Cosmetic_TriggerPlayerVignette // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

