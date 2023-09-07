// Class Lunar2022.Lunar2022EventComponent
// Size: 0x1c0 (Inherited: 0xc8)
struct ULunar2022EventComponent : URespawningEventComponent {
	struct FName _eventTag; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct TWeakObjectPtr<struct ARedEnvelope>> _redEnvelopes; // 0xd8(0x10)
	char pad_E8[0xb4]; // 0xe8(0xb4)
	struct FGameplayTag _scoreNormal; // 0x19c(0x0c)
	struct FGameplayTag _scoreJackpot; // 0x1a8(0x0c)
	struct FGameplayTag _scoreOwner; // 0x1b4(0x0c)

	void Authority_OnPlayerFinishPlaying(struct ADBDPlayerState* PlayerState); // Function Lunar2022.Lunar2022EventComponent.Authority_OnPlayerFinishPlaying // (Final|Native|Private) // @ game+0x5656e60
};

// Class Lunar2022.RedEnvelope
// Size: 0x408 (Inherited: 0x338)
struct ARedEnvelope : AInteractable {
	struct ADBDPlayerState* _ownerPlayerState; // 0x338(0x08)
	char pad_340[0x8]; // 0x340(0x08)
	struct FRedEnvelopeData _redEnvelopeData; // 0x348(0x18)
	char pad_360[0x8]; // 0x360(0x08)
	struct URedEnvelopeInteraction* _redEnvelopeInteraction; // 0x368(0x08)
	struct URedEnvelopeInteraction* _redEnvelopeInteractionKiller; // 0x370(0x08)
	struct UChargeableComponent* _redEnvelopeInteractionChargeable; // 0x378(0x08)
	struct UChargeableComponent* _redEnvelopeInteractionChargeableKiller; // 0x380(0x08)
	struct UInteractor* _redEnvelopeInteractor; // 0x388(0x08)
	struct UPrimitiveComponent* _redEnvelopeInteractionZone; // 0x390(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x398(0x08)
	struct UStaticMeshComponent* _redEnvelopeMesh; // 0x3a0(0x08)
	struct FDBDTunableRowHandle _redEnvelopeInteractionSecondsToCharge; // 0x3a8(0x28)
	struct FDBDTunableRowHandle _redEnvelopeInteractionSecondsToChargeKiller; // 0x3d0(0x28)
	struct TWeakObjectPtr<struct ULunar2022EventComponent> _eventComponent; // 0x3f8(0x08)
	struct URedEnvelopeOutlineUpdateStrategy* _redEnvelopeOutlineUpdateStrategy; // 0x400(0x08)

	void OnRep_RedEnvelopeData(); // Function Lunar2022.RedEnvelope.OnRep_RedEnvelopeData // (Final|Native|Private) // @ game+0x5657680
	void OnRep_OwnerPlayerState(); // Function Lunar2022.RedEnvelope.OnRep_OwnerPlayerState // (Final|Native|Private) // @ game+0x5657660
	void OnLocallyObservedChanged(); // Function Lunar2022.RedEnvelope.OnLocallyObservedChanged // (Final|Native|Public) // @ game+0x5657640
	void Cosmetic_SetBackgroundVFX(bool isOwner); // Function Lunar2022.RedEnvelope.Cosmetic_SetBackgroundVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTriggerDisappearingVFX(struct ADBDPlayer* interactingPlayer, bool isOwner, bool IsJackpot); // Function Lunar2022.RedEnvelope.Cosmetic_OnTriggerDisappearingVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionUpdate(struct ADBDPlayer* interactingPlayer, float ChargePercent, bool isOwner); // Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionUpdate // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionStopped(struct ADBDPlayer* interactingPlayer, bool isOwner); // Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStopped // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionStart(struct ADBDPlayer* interactingPlayer, bool isOwner); // Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAddEmberEffect(struct ADBDPlayer* OwningPlayer); // Function Lunar2022.RedEnvelope.Cosmetic_OnAddEmberEffect // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Lunar2022.RedEnvelopeInteraction
// Size: 0x7c0 (Inherited: 0x760)
struct URedEnvelopeInteraction : UChargeableInteractionDefinition {
	char pad_760[0x60]; // 0x760(0x60)
};

// Class Lunar2022.RedEnvelopeOutlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xc0)
struct URedEnvelopeOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _auraColorOwner; // 0xc0(0x10)
	struct FLinearColor _auraColorNonOwner; // 0xd0(0x10)
};

