// Class TheTrapper.Addon_Beartrap_05
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAddon_Beartrap_05 : UItemAddon {
};

// Class TheTrapper.Addon_Beartrap_DisarmRevealer
// Size: 0x318 (Inherited: 0x2b8)
struct UAddon_Beartrap_DisarmRevealer : UItemAddon {
	float _auraRevealDuration; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UStatusEffect* _timedRevealToKillerStatusEffect; // 0x2c0(0x08)
	struct TMap<struct ABearTrap*, struct ACamperPlayer*> _disarmedTrapMap; // 0x2c8(0x50)
};

// Class TheTrapper.BearTrap
// Size: 0x610 (Inherited: 0x4d0)
struct ABearTrap : ABaseTrap {
	struct UBoxPlayerOverlapComponent* _interactionVolume; // 0x4d0(0x08)
	struct UCapsulePlayerOverlapComponent* _trapPlayerDetectionZone; // 0x4d8(0x08)
	struct UBoxComponent* _killerSafetyZoneComponent; // 0x4e0(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x4e8(0x08)
	struct UBearTrapOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x4f0(0x08)
	struct UMapActorComponent* _mapActorComponent; // 0x4f8(0x08)
	struct USphereComponent* _mapActorCollision; // 0x500(0x08)
	struct USphereComponent* _trapBlocker; // 0x508(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x510(0x08)
	struct FMulticastInlineDelegate _onIsTrapSetChanged; // 0x518(0x10)
	struct ADBDPlayer* _ownerPlayer; // 0x528(0x08)
	struct UStatusEffect* _revealWhileTrappedStatusEffectClass; // 0x530(0x08)
	char pad_538[0x8]; // 0x538(0x08)
	struct UDBDNavModifierComponent* _dangerNavModifierComponent; // 0x540(0x08)
	bool _isTrapperOutOfSafetyZone; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	int32_t _maximumAttemptsForSelfUntrap; // 0x54c(0x04)
	int32_t _selfUntrapAttemptsRemaining; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UInteractor* _mainInteractor; // 0x558(0x08)
	struct UInteractionDefinition* _trapSurvivor; // 0x560(0x08)
	struct UInteractionDefinition* _trapKiller; // 0x568(0x08)
	struct ADBDPlayer* _trappedPlayer; // 0x570(0x08)
	char pad_578[0x68]; // 0x578(0x68)
	struct UAnimationMontageSlave* _animationMontageSlave; // 0x5e0(0x08)
	char pad_5E8[0x20]; // 0x5e8(0x20)
	struct UStatusEffect* _honingStoneStatusEffect; // 0x608(0x08)

	void TrySetTrappedPlayer(struct ADBDPlayer* Player); // Function TheTrapper.BearTrap.TrySetTrappedPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x5a59ee0
	void SetTrappedPlayerSinceMoved(bool didTrap); // Function TheTrapper.BearTrap.SetTrappedPlayerSinceMoved // (Final|Native|Public|BlueprintCallable) // @ game+0x5a59e50
	void SetTrappedPlayer(struct ADBDPlayer* trappedPlayer); // Function TheTrapper.BearTrap.SetTrappedPlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x5a59dc0
	void PlayMontage(struct UAnimMontage* Montage); // Function TheTrapper.BearTrap.PlayMontage // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5a59d30
	void OnTrappedPlayerPickedUp(struct ADBDPlayer* picker); // Function TheTrapper.BearTrap.OnTrappedPlayerPickedUp // (Final|Native|Private) // @ game+0x5a59ca0
	void OnTrapDetectionZoneOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd // (Final|Native|Private) // @ game+0x5a59b40
	void OnTrapDetectionZoneOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x5a59920
	void OnSlasherSet(struct ASlasherPlayer* Slasher); // Function TheTrapper.BearTrap.OnSlasherSet // (Final|Native|Protected) // @ game+0x5a59890
	void OnSafetyZoneEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap // (Final|Native|Private) // @ game+0x5a59730
	void OnLevelReadyToPlay_Implementation(); // Function TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation // (Final|Native|Private) // @ game+0x5a59710
	void OnCollectUpdateStart(); // Function TheTrapper.BearTrap.OnCollectUpdateStart // (Final|Native|Private) // @ game+0x5a596f0
	void OnCollectUpdateEnd(); // Function TheTrapper.BearTrap.OnCollectUpdateEnd // (Final|Native|Private) // @ game+0x5a596d0
	bool IsTrapperOutOfSafetyZone(); // Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a596a0
	void InitializeTrapSurvivorInteraction(struct UInteractionDefinition* Interaction); // Function TheTrapper.BearTrap.InitializeTrapSurvivorInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x5a59610
	void InitializeTrapKillerInteraction(struct UInteractionDefinition* Interaction); // Function TheTrapper.BearTrap.InitializeTrapKillerInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x5a59580
	void InitializeMainInteractor(struct UInteractor* Interactor); // Function TheTrapper.BearTrap.InitializeMainInteractor // (Final|Native|Public|BlueprintCallable) // @ game+0x5a594f0
	bool HasTrappedPlayerSinceMoved(); // Function TheTrapper.BearTrap.HasTrappedPlayerSinceMoved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a594c0
	bool HasTrappedPlayer(); // Function TheTrapper.BearTrap.HasTrappedPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a59490
	struct ADBDPlayer* GetTrappedPlayer(); // Function TheTrapper.BearTrap.GetTrappedPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a59460
	int32_t GetSelfUntrapAttemptsRemaining(); // Function TheTrapper.BearTrap.GetSelfUntrapAttemptsRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a59440
	int32_t GetMaximumAttemptsForSelfUntrap(); // Function TheTrapper.BearTrap.GetMaximumAttemptsForSelfUntrap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a59420
	struct UBearTrapAnimInstance* GetAnimInstance(); // Function TheTrapper.BearTrap.GetAnimInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a593f0
	struct UAkComponent* GetAkAudioComponent(); // Function TheTrapper.BearTrap.GetAkAudioComponent // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void Cosmetic_OnPlayerTrapped(struct ADBDPlayer* trappedPlayer); // Function TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_ImposeRevealAuraEffect(struct ACamperPlayer* Survivor); // Function TheTrapper.BearTrap.Authority_ImposeRevealAuraEffect // (Final|Native|Protected) // @ game+0x5a59360
};

// Class TheTrapper.BearTrapAnimInstance
// Size: 0x2e0 (Inherited: 0x2d0)
struct UBearTrapAnimInstance : USleepingAnimInstance {
	bool _isBeingCollected; // 0x2d0(0x01)
	bool _containsSurvivor; // 0x2d1(0x01)
	bool _isTrapSet; // 0x2d2(0x01)
	bool _wasJustDisarmed; // 0x2d3(0x01)
	char pad_2D4[0xc]; // 0x2d4(0x0c)

	void SetWasJustDisarmed(bool wasJustDisarmed); // Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed // (Final|Native|Public|BlueprintCallable) // @ game+0x5a5a2d0
	void SetIsTrapSet(bool IsTrapSet); // Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet // (Final|Native|Public|BlueprintCallable) // @ game+0x5a5a240
	void SetIsBeingCollected(bool isBeingCollected); // Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected // (Final|Native|Public|BlueprintCallable) // @ game+0x551ec30
	void SetContainsSurvivor(bool containsSurvivor); // Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor // (Final|Native|Public|BlueprintCallable) // @ game+0x5a5a1b0
};

// Class TheTrapper.BearTrapKillerComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UBearTrapKillerComponent : UActorComponent {

	void Server_TryDisarmTrap(struct ABearTrap* trapToDisarm); // Function TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x4d51430
	void Multicast_DisarmTrap(struct ABearTrap* trapToDisarm); // Function TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55700e0
};

// Class TheTrapper.DisarmBearTrapInteraction
// Size: 0x780 (Inherited: 0x760)
struct UDisarmBearTrapInteraction : UChargeableInteractionDefinition {
	float _averageMaxVelocity; // 0x758(0x04)
	float _averageMaxVelocitySquared; // 0x75c(0x04)
	struct FName _updateMontageID; // 0x760(0x0c)
	struct FName _loudNoiseAudibleRangeTunable; // 0x76c(0x0c)
};

// Class TheTrapper.IridescentStone
// Size: 0x2b8 (Inherited: 0x2b8)
struct UIridescentStone : UItemAddon {
};

// Class TheTrapper.ResetBearTrapInteraction
// Size: 0x7e0 (Inherited: 0x760)
struct UResetBearTrapInteraction : UChargeableInteractionDefinition {
	struct FName _enterMontageIDForBeartrap; // 0x758(0x0c)
	struct FName _udpateMontageIDForBeartrap; // 0x764(0x0c)
	struct UAnimSequence* _updateSequenceForBeartrap; // 0x770(0x08)
	struct FName _exitMontageForIDBeartrap; // 0x778(0x0c)
	struct FName _cancelExitMontage; // 0x784(0x0c)
	char pad_798[0x48]; // 0x798(0x48)
};

// Class TheTrapper.SelfUntrap
// Size: 0x810 (Inherited: 0x760)
struct USelfUntrap : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _trapImmunityDuration; // 0x758(0x28)
	struct FAnimationMontageDescriptor _successfulEscapeHealthy; // 0x780(0x20)
	struct FAnimationMontageDescriptor _successfulEscapeInjured; // 0x7a0(0x20)
	struct FAnimationMontageDescriptor _successfulEscapeCrawling; // 0x7c0(0x20)
	struct FAnimationMontageDescriptor _failedEscape; // 0x7e0(0x20)
	bool _canEscape; // 0x801(0x01)
	char pad_809[0x7]; // 0x809(0x07)
};

// Class TheTrapper.SetBearTrap
// Size: 0x810 (Inherited: 0x7c0)
struct USetBearTrap : USetTrapInteraction {
	struct FName _enterMontageIDForBeartrap; // 0x7b8(0x0c)
	struct FName _udpateMontageIDForBeartrap; // 0x7c4(0x0c)
	struct UAnimSequence* _updateSequenceForBeartrap; // 0x7d0(0x08)
	struct FName _exitMontageForIDBeartrap; // 0x7d8(0x0c)
	struct FName _cancelExitMontage; // 0x7e4(0x0c)
	char pad_7F8[0x18]; // 0x7f8(0x18)
};

// Class TheTrapper.SlashedOutOfBearTrapInteraction
// Size: 0x650 (Inherited: 0x630)
struct USlashedOutOfBearTrapInteraction : UInteractionDefinition {
	struct TArray<struct FString> _overridableInteractions; // 0x630(0x10)
	struct UAnimMontage* _updateMontage; // 0x640(0x08)
	char pad_648[0x8]; // 0x648(0x08)
};

// Class TheTrapper.SurvivorBearTrapAnimInstance
// Size: 0x560 (Inherited: 0x550)
struct USurvivorBearTrapAnimInstance : UBaseSurvivorAnimInstance {
	bool _isTrapped; // 0x550(0x01)
	enum class EInteractionAnimation _interactionType; // 0x551(0x01)
	char pad_552[0xe]; // 0x552(0x0e)
};

// Class TheTrapper.TrapCamperInteraction
// Size: 0x6d0 (Inherited: 0x630)
struct UTrapCamperInteraction : UInteractionDefinition {
	struct TArray<struct FString> _nonOverridableInteractions; // 0x630(0x10)
	struct FName _trapAttachSocket; // 0x640(0x0c)
	struct FName _updateMontageID; // 0x64c(0x0c)
	struct FName _updateNoScreamMontageID; // 0x658(0x0c)
	char pad_664[0x4]; // 0x664(0x04)
	struct FDBDTunableRowHandle _loudNoiseRangeTunable; // 0x668(0x28)
	struct FDBDTunableRowHandle _hemorrhageEffectDurationTunable; // 0x690(0x28)
	struct UStatusEffect* _hemorrhageStatusEffect; // 0x6b8(0x08)
	struct UStatusEffect* _mangledStatusEffect; // 0x6c0(0x08)
	struct UStatusEffect* _honingStoneWarningStatusEffect; // 0x6c8(0x08)
};

// Class TheTrapper.TrapKillerInteraction
// Size: 0x6a0 (Inherited: 0x630)
struct UTrapKillerInteraction : UInteractionDefinition {
	struct TArray<struct FString> _overridableInteractions; // 0x630(0x10)
	struct FRotator _caughtFootRotationOffset; // 0x640(0x0c)
	struct FName _openNotifyID; // 0x64c(0x0c)
	struct FName _footSocketName; // 0x658(0x0c)
	char pad_664[0x3c]; // 0x664(0x3c)
};

// Class TheTrapper.TrapperAnimInstance
// Size: 0x610 (Inherited: 0x610)
struct UTrapperAnimInstance : UKillerAnimInstance {
};

// Class TheTrapper.Untrap
// Size: 0x790 (Inherited: 0x760)
struct UUntrap : UChargeableInteractionDefinition {
	struct TArray<struct FString> _overridableInteractions; // 0x758(0x10)
	struct FName _bearTrapUpdateMontageID; // 0x768(0x0c)
	struct FName _bearTrapFinishMontageID; // 0x774(0x0c)
	char pad_788[0x8]; // 0x788(0x08)

	struct ABearTrap* GetTrap(); // Function TheTrapper.Untrap.GetTrap // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a5bce0
};

