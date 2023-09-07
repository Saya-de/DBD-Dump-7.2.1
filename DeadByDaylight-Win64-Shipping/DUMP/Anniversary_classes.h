// Class Anniversary.AnniversaryPlayerComponentInterface
// Size: 0x30 (Inherited: 0x30)
struct UAnniversaryPlayerComponentInterface : UInterface {
};

// Class Anniversary.CrownPickupInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct UCrownPickupInteraction : UChargeableInteractionDefinition {
	char pad_760[0x28]; // 0x760(0x28)
	struct FName _attachToSocketName; // 0x788(0x0c)
	struct FGameplayTag _pickupScoreEvent; // 0x794(0x0c)
	bool _isInteractionChargeComplete; // 0x7a0(0x01)
	char pad_7A1[0xf]; // 0x7a1(0x0f)
};

// Class Anniversary.CrownPillarInteractable
// Size: 0x460 (Inherited: 0x360)
struct ACrownPillarInteractable : ARespawnableInteractable {
	struct FDBDTunableRowHandle _crownPillarInteractionSecondsToCharge; // 0x360(0x28)
	struct FDBDTunableRowHandle _crownPillarInteractionSecondsToChargeKiller; // 0x388(0x28)
	struct FDBDTunableRowHandle _offeringEnabledAuraVisibilityDistance; // 0x3b0(0x28)
	struct FDBDTunableRowHandle _defaultAuraVisibilityDistance; // 0x3d8(0x28)
	struct FName _anniversaryOfferingTag; // 0x400(0x0c)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UCrownPickupInteraction* _crownPillarInteraction; // 0x410(0x08)
	struct UCrownPickupInteraction* _crownPillarInteractionKiller; // 0x418(0x08)
	struct UChargeableComponent* _crownPillarInteractionChargeable; // 0x420(0x08)
	struct UChargeableComponent* _crownPillarInteractionChargeableKiller; // 0x428(0x08)
	struct UInteractor* _crownPillarInteractor; // 0x430(0x08)
	struct UPrimitiveComponent* _crownPillarInteractionZone; // 0x438(0x08)
	struct UStaticMeshComponent* _crownPillarStaticMesh; // 0x440(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x448(0x08)
	struct UNearTrackedActorComponent* _nearTrackedActorComponent; // 0x450(0x08)
	struct UCrownPillarOutlineUpdateStrategy* _crownPillarOutlineUpdateStrategy; // 0x458(0x08)

	void OnLocallyObservedChanged(); // Function Anniversary.CrownPillarInteractable.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x4a96410
	void Local_OnIntroCompleted(); // Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted // (Final|Native|Private) // @ game+0x4a963f0
	bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering(); // Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a963c0
	void Cosmetic_OnStoppedInteracting(); // Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCancelled(); // Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary.CrownPillarOutlineUpdateStrategy
// Size: 0xd0 (Inherited: 0xc0)
struct UCrownPillarOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _offeringEnabledAuraColor; // 0xc0(0x10)
};

// Class Anniversary.CrownPlayerComponent
// Size: 0x2e0 (Inherited: 0x220)
struct UCrownPlayerComponent : USceneComponent {
	char pad_220[0x8]; // 0x220(0x08)
	struct FGameplayTagContainer _crownVFXParticleDeactivateTags; // 0x228(0x20)
	struct FGameplayTagContainer _unhookGameEvents; // 0x248(0x20)
	struct FTagStateBool _isCrownEventActive; // 0x268(0x30)
	char pad_298[0x48]; // 0x298(0x48)

	void Cosmetic_SetVFXParticlesVisibility(bool IsVisible); // Function Anniversary.CrownPlayerComponent.Cosmetic_SetVFXParticlesVisibility // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

