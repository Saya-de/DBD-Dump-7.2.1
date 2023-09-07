// Class TheHag.HagAnimInstance
// Size: 0x610 (Inherited: 0x610)
struct UHagAnimInstance : UKillerAnimInstance {
};

// Class TheHag.HagDynamicAccessoryAnimInstance
// Size: 0x2d0 (Inherited: 0x2d0)
struct UHagDynamicAccessoryAnimInstance : UDynamicAccessoryAnimInstance {
};

// Class TheHag.HagScoreComponent
// Size: 0x168 (Inherited: 0xb8)
struct UHagScoreComponent : UActorComponent {
	struct FDBDTunableRowHandle _trapAttackDuration; // 0xb8(0x28)
	char pad_E0[0x88]; // 0xe0(0x88)

	void Authority_OnActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function TheHag.HagScoreComponent.Authority_OnActorEndPlay // (Final|Native|Private) // @ game+0x5744c50
};

// Class TheHag.HasActivePhantomTrap
// Size: 0x108 (Inherited: 0xe8)
struct UHasActivePhantomTrap : UEventDrivenModifierCondition {
	char pad_E8[0x20]; // 0xe8(0x20)
};

// Class TheHag.PhantomTrap
// Size: 0x438 (Inherited: 0x338)
struct APhantomTrap : AInteractable {
	char pad_338[0x18]; // 0x338(0x18)
	bool _phantomHasCollision; // 0x350(0x01)
	bool _silentTrapTrigger; // 0x351(0x01)
	bool _isDeactivating; // 0x352(0x01)
	char pad_353[0x5]; // 0x353(0x05)
	struct ADBDPlayer* _slasherOwner; // 0x358(0x08)
	struct UStatusEffect* _slowdownInTrapZoneEffect; // 0x360(0x08)
	struct UTerrorRadiusEmitterComponent* _terrorRadiusEmitter; // 0x368(0x08)
	float _camperOutlineDuration; // 0x370(0x04)
	float _lineOfSightTraceMinInterval; // 0x374(0x04)
	float _speedTolerance; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct USceneComponent* _trapLocation; // 0x380(0x08)
	struct USphereComponent* _triggerZone; // 0x388(0x08)
	struct TArray<struct UStatusEffect*> _survivorSlowdownEffects; // 0x390(0x10)
	struct UChargeableComponent* _wipeAwayInteractionChargeable; // 0x3a0(0x08)
	struct UWipeAwayPhantomTrapInteraction* _wipeAwayInteraction; // 0x3a8(0x08)
	struct UInteractor* _wipeAwayInteractor; // 0x3b0(0x08)
	struct UPrimitiveComponent* _wipeAwayInteractionZone; // 0x3b8(0x08)
	struct FDBDTunableRowHandle _wipeAwayTimeDuration; // 0x3c0(0x28)
	char pad_3E8[0xd]; // 0x3e8(0x0d)
	bool _hasTrapBeenSetOff; // 0x3f5(0x01)
	bool _hasTrapBeenDestroyed; // 0x3f6(0x01)
	bool _isInUse; // 0x3f7(0x01)
	struct FDBDTimer _activeTimer; // 0x3f8(0x28)
	bool _isSlasherHere; // 0x420(0x01)
	char pad_421[0x17]; // 0x421(0x17)

	void SetIsInUse(bool InUse); // Function TheHag.PhantomTrap.SetIsInUse // (Final|Native|Private|BlueprintCallable) // @ game+0x5745d60
	void RetrievePerkFlags(struct FGameplayTag silentTrapTag, struct FGameplayTag phantomCollisionTag); // Function TheHag.PhantomTrap.RetrievePerkFlags // (Final|Native|Protected|BlueprintCallable) // @ game+0x5745c60
	void OnTrapReset(); // Function TheHag.PhantomTrap.OnTrapReset // (Final|Native|Protected|BlueprintCallable) // @ game+0x5745c40
	void OnTrapActivated(); // Function TheHag.PhantomTrap.OnTrapActivated // (Final|Native|Protected|BlueprintCallable) // @ game+0x5745c20
	void Multicast_DestroyTrap(struct ACamperPlayer* playerDestroyingTrap); // Function TheHag.PhantomTrap.Multicast_DestroyTrap // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x54ad930
	bool IsTrapSet(); // Function TheHag.PhantomTrap.IsTrapSet // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x555bca0
	bool IsTrapDeactivating(); // Function TheHag.PhantomTrap.IsTrapDeactivating // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5745c00
	bool IsTrapActive(); // Function TheHag.PhantomTrap.IsTrapActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5745bd0
	bool IsSilentTrigger(); // Function TheHag.PhantomTrap.IsSilentTrigger // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5745ba0
	void InitializeTerrorRadiusEmitter(struct ASlasherPlayer* owningSlasher); // Function TheHag.PhantomTrap.InitializeTerrorRadiusEmitter // (Final|Native|Protected|BlueprintCallable) // @ game+0x5745b10
	bool HasKillerTeleported(); // Function TheHag.PhantomTrap.HasKillerTeleported // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5745af0
	struct USceneComponent* GetPhantomTransform(); // Function TheHag.PhantomTrap.GetPhantomTransform // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	struct USkeletalMeshComponent* GetMesh(); // Function TheHag.PhantomTrap.GetMesh // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	bool CanActivateTrap(struct ACamperPlayer* camper, bool IsInUse); // Function TheHag.PhantomTrap.CanActivateTrap // (Final|Native|Protected|BlueprintCallable) // @ game+0x5745a20
	void BP_OnTrapDestroyed(struct ACamperPlayer* playerDestroyingTrap); // Function TheHag.PhantomTrap.BP_OnTrapDestroyed // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BP_OnTrapActivate(struct ACamperPlayer* triggerer); // Function TheHag.PhantomTrap.BP_OnTrapActivate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnTriggerZoneEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheHag.PhantomTrap.Authority_OnTriggerZoneEndOverlap // (Final|Native|Private) // @ game+0x57458c0
	void Authority_OnTriggerZoneBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheHag.PhantomTrap.Authority_OnTriggerZoneBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x57456a0
	void ActivateSlasher(struct ASlasherPlayer* Slasher); // Function TheHag.PhantomTrap.ActivateSlasher // (Final|Native|Public|BlueprintCallable) // @ game+0x5745610
};

// Class TheHag.PhantomTrapOutlineStrategy
// Size: 0x158 (Inherited: 0x138)
struct UPhantomTrapOutlineStrategy : USourceBasedOutlineUpdateStrategy {
	struct TWeakObjectPtr<struct APhantomTrap> _cachedOwningPhantomTrap; // 0x138(0x08)
	struct FLinearColor _colorWhenTeleportationIsAvailable; // 0x140(0x10)
	struct UCurveFloat* _colorAlphaBasedOnDistance; // 0x150(0x08)
};

// Class TheHag.TeleportToPhantomTrap
// Size: 0x690 (Inherited: 0x630)
struct UTeleportToPhantomTrap : UInteractionDefinition {
	struct FDBDTunableRowHandle _teleportMaxDistance; // 0x630(0x28)
	struct FDBDTunableRowHandle _slowdownTimeAfterTeleport; // 0x658(0x28)
	struct UStatusEffect* _hagSlowdownAfterTeleportStatusEffect; // 0x680(0x08)
	char pad_688[0x8]; // 0x688(0x08)

	bool IsTeleportationPossible(struct ADBDPlayer* Player); // Function TheHag.TeleportToPhantomTrap.IsTeleportationPossible // (Event|Public|BlueprintEvent|Const) // @ game+0x5e02c90
	float GetTeleportMaxDistance(struct ASlasherPlayer* Slasher); // Function TheHag.TeleportToPhantomTrap.GetTeleportMaxDistance // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5746420
	struct APhantomTrap* GetPhantomTrap(); // Function TheHag.TeleportToPhantomTrap.GetPhantomTrap // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57463f0
	void Cosmetic_OnTeleport(struct ASlasherPlayer* Slasher, struct APhantomTrap* trap); // Function TheHag.TeleportToPhantomTrap.Cosmetic_OnTeleport // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionFinished(struct ADBDPlayer* Slasher, bool hasInteractionStarted); // Function TheHag.TeleportToPhantomTrap.Cosmetic_OnInteractionFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BP_OnTeleport(struct ASlasherPlayer* Slasher, struct APhantomTrap* trap); // Function TheHag.TeleportToPhantomTrap.BP_OnTeleport // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheHag.WipeAwayPhantomTrapInteraction
// Size: 0x790 (Inherited: 0x790)
struct UWipeAwayPhantomTrapInteraction : UBasicChargeableInteraction {

	void CancelInteraction(struct ADBDPlayer* Player); // Function TheHag.WipeAwayPhantomTrapInteraction.CancelInteraction // (Final|Native|Private) // @ game+0x5746800
};

