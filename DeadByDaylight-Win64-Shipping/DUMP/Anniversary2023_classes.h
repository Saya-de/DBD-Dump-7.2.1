// Class Anniversary2023.Anniversary2023EventComponent
// Size: 0x120 (Inherited: 0xf0)
struct UAnniversary2023EventComponent : UAnniversary2021EventComponent {
	struct ASpawnedPalletTracker* _fragilePalletTrackerClass; // 0xf0(0x08)
	struct FName EditorPalletAssetPathName; // 0xf8(0x0c)
	char pad_104[0x1c]; // 0x104(0x1c)

	void OnLevelReadyToPlay(); // Function Anniversary2023.Anniversary2023EventComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4aa5280
};

// Class Anniversary2023.Anniversary2023Marionette
// Size: 0x298 (Inherited: 0x230)
struct AAnniversary2023Marionette : AActor {
	struct URespawnableComponent* _respawnableComponent; // 0x230(0x08)
	struct AActor* _dancerMask1; // 0x238(0x08)
	struct AActor* _dancerMask2; // 0x240(0x08)
	float _rotationRate; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct USphereComponent* _playerTracker; // 0x250(0x08)
	struct UStaticMeshComponent* _dancingCharacter; // 0x258(0x08)
	struct TArray<struct FMarionetteMeshData> _potentialMarionetteMeshes; // 0x260(0x10)
	struct TArray<struct AActor*> _potentialMasks; // 0x270(0x10)
	struct FName _maskLSocketName; // 0x280(0x0c)
	struct FName _maskRSocketName; // 0x28c(0x0c)
};

// Class Anniversary2023.InvitationInteractionDefinition
// Size: 0x630 (Inherited: 0x630)
struct UInvitationInteractionDefinition : UInteractionDefinition {
};

// Class Anniversary2023.BloodlustExpose
// Size: 0x670 (Inherited: 0x630)
struct UBloodlustExpose : UInvitationInteractionDefinition {
	struct UStatusEffect* _effectToApply; // 0x630(0x08)
	struct FDBDTunableRowHandle _bloodlustExposeDuration; // 0x638(0x28)
	char pad_660[0x10]; // 0x660(0x10)

	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Anniversary2023.BloodlustExpose.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.BloodlustExposeInteraction
// Size: 0x670 (Inherited: 0x630)
struct UBloodlustExposeInteraction : UInvitationInteractionDefinition {
	struct UStatusEffect* _effectToApply; // 0x630(0x08)
	struct FDBDTunableRowHandle _bloodlustExposeDuration; // 0x638(0x28)
	struct ACamperPlayer* _camper; // 0x660(0x08)
	char pad_668[0x8]; // 0x668(0x08)

	void Multicast_BloodlustExpose(struct ADBDPlayer* Player, struct ACamperPlayer* Target); // Function Anniversary2023.BloodlustExposeInteraction.Multicast_BloodlustExpose // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa59b0
	void Cosmetic_BloodlustExpose(struct ADBDPlayer* Player, struct ACamperPlayer* Target); // Function Anniversary2023.BloodlustExposeInteraction.Cosmetic_BloodlustExpose // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.FragilePalletComponent
// Size: 0x108 (Inherited: 0xb8)
struct UFragilePalletComponent : UActorComponent {
	struct FMulticastInlineDelegate Cosmetic_OnFragilePalletSpawnBegin; // 0xb8(0x10)
	struct FMulticastInlineDelegate Cosmetic_OnFragilePalletSpawnEnd; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FDBDTunableRowHandle _fragilePalletSpawnTime; // 0xe0(0x28)
};

// Class Anniversary2023.FragilePalletInteractionDefinition
// Size: 0x640 (Inherited: 0x630)
struct UFragilePalletInteractionDefinition : UInvitationInteractionDefinition {
	struct APallet* _fragilePalletClass; // 0x630(0x08)
	char pad_638[0x8]; // 0x638(0x08)
};

// Class Anniversary2023.FragilePalletTrackerVisibilityComponent
// Size: 0x118 (Inherited: 0xb8)
struct UFragilePalletTrackerVisibilityComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)
	struct FDBDTunableRowHandle _visibilityDistance; // 0xf0(0x28)

	void OnLocallyObservedChanged(); // Function Anniversary2023.FragilePalletTrackerVisibilityComponent.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x4aa6010
};

// Class Anniversary2023.InvitationPlayerComponent
// Size: 0x380 (Inherited: 0xb8)
struct UInvitationPlayerComponent : UActorComponent {
	char pad_B8[0x9a]; // 0xb8(0x9a)
	bool _isInEndGame; // 0x152(0x01)
	char pad_153[0xd]; // 0x153(0x0d)
	struct FSpeedBasedNetSyncedValue _invitationCharges; // 0x160(0x38)
	int32_t _invitationChargesInt; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UTimerObject* _cooldownTimer; // 0x1a0(0x08)
	char pad_1A8[0x68]; // 0x1a8(0x68)
	struct FGameplayTagQuery _particleVFXDeactivateTags; // 0x210(0x48)
	struct FDBDTunableRowHandle _invitationChargeGain; // 0x258(0x28)
	struct FDBDTunableRowHandle _maxNumberOfCharges; // 0x280(0x28)
	struct FDBDTunableRowHandle _chargeRechargeRate; // 0x2a8(0x28)
	struct FDBDTunableRowHandle _abilityCooldown; // 0x2d0(0x28)
	struct FDBDTunableRowHandle _chargesForReward; // 0x2f8(0x28)
	char pad_320[0x18]; // 0x320(0x18)
	struct FGameplayTagQuery _disablingPlayerTargetComponentTagsQuery; // 0x338(0x48)

	void OnRep_InvitationChargesInt(); // Function Anniversary2023.InvitationPlayerComponent.OnRep_InvitationChargesInt // (Final|Native|Protected) // @ game+0x4aa7080
	void OnRep_CooldownTimer(); // Function Anniversary2023.InvitationPlayerComponent.OnRep_CooldownTimer // (Final|Native|Protected) // @ game+0x4aa7060
	void OnLevelReadyToPlay(); // Function Anniversary2023.InvitationPlayerComponent.OnLevelReadyToPlay // (Native|Protected) // @ game+0x4aa7040
	void Multicast_CosmeticOnInvitationInteractionActivate(struct ADBDPlayer* Player, struct AActor* Target); // Function Anniversary2023.InvitationPlayerComponent.Multicast_CosmeticOnInvitationInteractionActivate // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4aa6f70
	float GetInvitationCharges(); // Function Anniversary2023.InvitationPlayerComponent.GetInvitationCharges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4aa6f40
	void Cosmetic_SetVFXParticlesVisibility(bool IsVisible); // Function Anniversary2023.InvitationPlayerComponent.Cosmetic_SetVFXParticlesVisibility // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPlayerInChaseStateChanged(bool inChase); // Function Anniversary2023.InvitationPlayerComponent.Cosmetic_OnPlayerInChaseStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInvitationInteractionReady(bool IsReady); // Function Anniversary2023.InvitationPlayerComponent.Cosmetic_OnInvitationInteractionReady // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInvitationInteractionActivate(struct ADBDPlayer* abilityCaster, struct AActor* Target); // Function Anniversary2023.InvitationPlayerComponent.Cosmetic_OnInvitationInteractionActivate // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInvitationChargesIntChanged(int32_t invitationCharge); // Function Anniversary2023.InvitationPlayerComponent.Cosmetic_OnInvitationChargesIntChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.InvitationKillerComponent
// Size: 0x3e0 (Inherited: 0x380)
struct UInvitationKillerComponent : UInvitationPlayerComponent {
	char pad_380[0x8]; // 0x380(0x08)
	struct UBloodlustExposeInteraction* _bloodlustExposeClass; // 0x388(0x08)
	struct URemoteDestroyInteraction* _remoteDestroyClass; // 0x390(0x08)
	struct UKillerNegateStunInteraction* _negateStunClass; // 0x398(0x08)
	struct UBloodlustExposeInteraction* _bloodlustExposeInteraction; // 0x3a0(0x08)
	struct URemoteDestroyInteraction* _remoteDestroyInteraction; // 0x3a8(0x08)
	struct UKillerNegateStunInteraction* _negateStunInteraction; // 0x3b0(0x08)
	char pad_3B8[0x28]; // 0x3b8(0x28)

	void OnRep_NegateStunInteraction(struct UKillerNegateStunInteraction* prevNegateStunInteraction); // Function Anniversary2023.InvitationKillerComponent.OnRep_NegateStunInteraction // (Final|Native|Protected) // @ game+0x4aa6590
	void Cosmetic_SetVignetteVisibility(bool IsVisible); // Function Anniversary2023.InvitationKillerComponent.Cosmetic_SetVignetteVisibility // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivateVFXOnKillerStunned(); // Function Anniversary2023.InvitationKillerComponent.Cosmetic_ActivateVFXOnKillerStunned // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.InvitationTargetComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UInvitationTargetComponent : UActorComponent {
	float _interactionAngleInDegrees; // 0xb8(0x04)
	struct FLinearColor _revealColor; // 0xbc(0x10)
	char pad_CC[0xc]; // 0xcc(0x0c)
	struct AActor* _targetGameObject; // 0xd8(0x08)

	void OnRep_TargetGameObject(struct AActor* previousTarget); // Function Anniversary2023.InvitationTargetComponent.OnRep_TargetGameObject // (Final|Native|Private) // @ game+0x4aa77e0
	void Cosmetic_OnTargetObjectChanged(struct AActor* Target, struct AActor* lastTarget); // Function Anniversary2023.InvitationTargetComponent.Cosmetic_OnTargetObjectChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.InvitationKillerTargetComponent
// Size: 0x158 (Inherited: 0xe0)
struct UInvitationKillerTargetComponent : UInvitationTargetComponent {
	struct FDBDTunableRowHandle _bloodlustExposeDistance; // 0xe0(0x28)
	struct FDBDTunableRowHandle _remoteDestroyDistance; // 0x108(0x28)
	struct FDBDTunableRowHandle _negateStunDistance; // 0x130(0x28)
};

// Class Anniversary2023.InvitationSurvivorComponent
// Size: 0x3b8 (Inherited: 0x380)
struct UInvitationSurvivorComponent : UInvitationPlayerComponent {
	struct UInteractionDefinition* _reverseBamboozleInteraction; // 0x380(0x08)
	struct UInteractionDefinition* _fragilePalletInteraction; // 0x388(0x08)
	struct UInteractionDefinition* _reverseBamboozle; // 0x390(0x08)
	struct UInteractionDefinition* _fragilePallet; // 0x398(0x08)
	char pad_3A0[0x18]; // 0x3a0(0x18)
};

// Class Anniversary2023.InvitationSurvivorTargetComponent
// Size: 0x138 (Inherited: 0xe0)
struct UInvitationSurvivorTargetComponent : UInvitationTargetComponent {
	struct FDBDTunableRowHandle _vaultBlockerDistance; // 0xe0(0x28)
	struct FDBDTunableRowHandle _fragilePalletDistance; // 0x108(0x28)
	struct UStatusEffect* _masqueradeRevealStatusEffect; // 0x130(0x08)
};

// Class Anniversary2023.KillerNegateStunInteraction
// Size: 0x6e0 (Inherited: 0x630)
struct UKillerNegateStunInteraction : UInvitationInteractionDefinition {
	char pad_630[0x18]; // 0x630(0x18)
	struct UStatusEffect* _negateStunEffect; // 0x648(0x08)
	struct UStatusEffect* _negateStunEffectIconShow; // 0x650(0x08)
	struct FDBDTunableRowHandle _negateStunPower; // 0x658(0x28)
	struct FDBDTunableRowHandle _negateStunDuration; // 0x680(0x28)
	char pad_6A8[0x20]; // 0x6a8(0x20)
	struct UStatusEffect* _negateStunStatusEffect; // 0x6c8(0x08)
	char pad_6D0[0x10]; // 0x6d0(0x10)

	void OnRep_StatusEffect(struct UStatusEffect* previousStatusEffect); // Function Anniversary2023.KillerNegateStunInteraction.OnRep_StatusEffect // (Final|Native|Private) // @ game+0x4aa7c00
	void Cosmetic_OnInteractionUpdateStart(struct ADBDPlayer* interactingPlayer, struct AInteractable* Interactable); // Function Anniversary2023.KillerNegateStunInteraction.Cosmetic_OnInteractionUpdateStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.RemoteDestroyInteraction
// Size: 0x690 (Inherited: 0x630)
struct URemoteDestroyInteraction : UInvitationInteractionDefinition {
	struct FDBDTunableRowHandle _remoteDestroyDuration; // 0x630(0x28)
	struct AInteractable* _interactable; // 0x658(0x08)
	char pad_660[0x30]; // 0x660(0x30)

	void Multicast_RemoteDestroy(struct ADBDPlayer* Player, struct AInteractable* Interactable); // Function Anniversary2023.RemoteDestroyInteraction.Multicast_RemoteDestroy // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa59b0
	void ExplodeInteractable(struct ADBDPlayer* Player, struct AInteractable* Interactable); // Function Anniversary2023.RemoteDestroyInteraction.ExplodeInteractable // (Final|Native|Protected|Const) // @ game+0x4aa7f20
	void Cosmetic_OnRemoteDestroy(struct ADBDPlayer* interactingPlayer, struct AInteractable* Interactable); // Function Anniversary2023.RemoteDestroyInteraction.Cosmetic_OnRemoteDestroy // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.ReverseBamboozleInteractionDefinition
// Size: 0x690 (Inherited: 0x630)
struct UReverseBamboozleInteractionDefinition : UInvitationInteractionDefinition {
	struct FDBDTunableRowHandle _vaultBlockerDuration; // 0x630(0x28)
	struct TArray<struct ABlockFeedbackBase*> _windowBlockSelfFeedbackClasses; // 0x658(0x10)
	struct TArray<struct ABlockFeedbackBase*> _windowBlockOtherFeedbackClasses; // 0x668(0x10)
	char pad_678[0x8]; // 0x678(0x08)
	struct AWindow* _authorityWindow; // 0x680(0x08)
	char pad_688[0x8]; // 0x688(0x08)

	void Multicast_OnWindowBlockBegin(struct ADBDPlayer* abilityCaster, struct AWindow* Window); // Function Anniversary2023.ReverseBamboozleInteractionDefinition.Multicast_OnWindowBlockBegin // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa59b0
	void Cosmetic_OnWindowBlockBegin(struct ADBDPlayer* abilityCaster, struct AWindow* Window, float Duration); // Function Anniversary2023.ReverseBamboozleInteractionDefinition.Cosmetic_OnWindowBlockBegin // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Anniversary2023.ShortenStunDurationEffect
// Size: 0x368 (Inherited: 0x350)
struct UShortenStunDurationEffect : UStatusEffect {
	char pad_350[0x18]; // 0x350(0x18)
};

// Class Anniversary2023.SpawnedPalletTracker
// Size: 0x280 (Inherited: 0x230)
struct ASpawnedPalletTracker : AActor {
	char pad_230[0x18]; // 0x230(0x18)
	struct USceneComponent* _indicatorLocation; // 0x248(0x08)
	struct APallet* _trackedPallet; // 0x250(0x08)
	char pad_258[0x28]; // 0x258(0x28)

	void SetIndicatorOutlineVisibility(bool activated); // Function Anniversary2023.SpawnedPalletTracker.SetIndicatorOutlineVisibility // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_TrackedPallet(); // Function Anniversary2023.SpawnedPalletTracker.OnRep_TrackedPallet // (Final|Native|Private) // @ game+0x4aa8a80
};

