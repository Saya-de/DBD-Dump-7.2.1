// Class Lunar2023.Lunar2023EventComponent
// Size: 0x230 (Inherited: 0x1c0)
struct ULunar2023EventComponent : ULunar2022EventComponent {
	struct FDBDTunableRowHandle _paperLanternSwitchTimerMin; // 0x1c0(0x28)
	struct FDBDTunableRowHandle _paperLanternSwitchTimerMax; // 0x1e8(0x28)
	struct UTimedInteractionRespawnableTrigger* _timedInteractionRespawnableTrigger; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	void Authority_OnLevelReadyToPlay(); // Function Lunar2023.Lunar2023EventComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4a975a0
};

// Class Lunar2023.PaperLantern
// Size: 0x488 (Inherited: 0x360)
struct APaperLantern : ARespawnableInteractable {
	struct UPaperLanternInteraction* _paperLanternInteractionSurvivor; // 0x360(0x08)
	struct UPaperLanternInteraction* _paperLanternInteractionKiller; // 0x368(0x08)
	struct UChargeableComponent* _paperLanternInteractionChargeableSurvivor; // 0x370(0x08)
	struct UChargeableComponent* _paperLanternInteractionChargeableKiller; // 0x378(0x08)
	struct UInteractor* _paperLanternInteractor; // 0x380(0x08)
	struct UPrimitiveComponent* _paperLanternInteractionZone; // 0x388(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x390(0x08)
	struct UStaticMeshComponent* _paperLanternStaticMesh; // 0x398(0x08)
	struct FDBDTunableRowHandle _paperLanternInteractionSecondsToChargeSurvivor; // 0x3a0(0x28)
	struct FDBDTunableRowHandle _paperLanternInteractionSecondsToChargeKiller; // 0x3c8(0x28)
	struct FDBDTunableRowHandle _paperLanternSpeedBoost; // 0x3f0(0x28)
	struct FDBDTunableRowHandle _paperLanternVaultSpeedBoost; // 0x418(0x28)
	struct FDBDTunableRowHandle _paperLanternBuffDuration; // 0x440(0x28)
	struct FLinearColor _auraColorWhileInteracting; // 0x468(0x10)
	struct UStatusEffect* _paperLanternSpeedEffect; // 0x478(0x08)
	struct UStatusEffect* _paperLanternVaultSpeedEffect; // 0x480(0x08)

	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Lunar2023.PaperLantern.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCancelled(struct ADBDPlayer* interactingPlayer); // Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Lunar2023.PaperLanternInteraction
// Size: 0x780 (Inherited: 0x760)
struct UPaperLanternInteraction : UChargeableInteractionDefinition {
	char pad_760[0x20]; // 0x760(0x20)
};

