// Class Gnome2021.Gnome
// Size: 0x400 (Inherited: 0x360)
struct AGnome : ARespawnableInteractable {
	struct UGnomeInteraction* _gnomeInteraction; // 0x360(0x08)
	struct UGnomeInteraction* _gnomeInteractionKiller; // 0x368(0x08)
	struct UChargeableComponent* _gnomeInteractionChargeable; // 0x370(0x08)
	struct UChargeableComponent* _gnomeInteractionChargeableKiller; // 0x378(0x08)
	struct UInteractor* _gnomeInteractor; // 0x380(0x08)
	struct UPrimitiveComponent* _gnomeInteractionZone; // 0x388(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x390(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _gnomeSkeletalMesh; // 0x398(0x08)
	struct FDBDTunableRowHandle _gnomeInteractionSecondsToCharge; // 0x3a0(0x28)
	struct FDBDTunableRowHandle _gnomeInteractionSecondsToChargeKiller; // 0x3c8(0x28)
	struct FLinearColor _auraColorWhileInteracting; // 0x3f0(0x10)

	void Cosmetic_OnStoppedInteracting(); // Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Gnome2021.GnomeEventComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UGnomeEventComponent : URespawningEventComponent {
	struct UInteractionRespawnableTrigger* _interactionRespawnableTrigger; // 0xc8(0x08)
	struct UTimedRespawnableTrigger* _timedRespawnableTrigger; // 0xd0(0x08)
	char pad_D8[0x18]; // 0xd8(0x18)

	void Authority_OnEndGameStarted(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted // (Final|Native|Private|HasOutParms) // @ game+0x5610790
};

// Class Gnome2021.GnomeInteraction
// Size: 0x770 (Inherited: 0x760)
struct UGnomeInteraction : UChargeableInteractionDefinition {
	char pad_760[0x10]; // 0x760(0x10)
};

// Class Gnome2021.GnomePlayerComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UGnomePlayerComponent : UActorComponent {
	bool _hasInteractedWithGnomeThisGame; // 0xb8(0x01)
	char pad_B9[0x27]; // 0xb9(0x27)
};

