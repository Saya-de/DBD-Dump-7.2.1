// Class TheDemogorgon.DemogorgonAnimInstance
// Size: 0x640 (Inherited: 0x610)
struct UDemogorgonAnimInstance : UKillerAnimInstance {
	float _leftArmPushback; // 0x610(0x04)
	float _rightArmPushback; // 0x614(0x04)
	bool _isDemogorgonCharging; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float _demogorgonChargingPercent; // 0x61c(0x04)
	char pad_620[0x20]; // 0x620(0x20)
};

// Class TheDemogorgon.DemogorgonAnimProxyComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UDemogorgonAnimProxyComponent : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
};

// Class TheDemogorgon.DemogorgonHuskAnimInstance
// Size: 0x340 (Inherited: 0x2c0)
struct UDemogorgonHuskAnimInstance : UAnimInstance {
	struct APawn* _owningPawn; // 0x2c0(0x08)
	float _teleportDuration; // 0x2c8(0x04)
	float _teleportExitPlayRate; // 0x2cc(0x04)
	bool _isSlowerExit; // 0x2d0(0x01)
	bool _isTeleporting; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct UAnimSequence* _huskPortalSlowerExit; // 0x2d8(0x08)
	struct UAnimSequence* _huskPortalExit; // 0x2e0(0x08)
	struct UAnimMontage* _demogorgonPortalExit; // 0x2e8(0x08)
	struct UAnimMontage* _demogorgonPortalEntry; // 0x2f0(0x08)
	struct TWeakObjectPtr<struct UDemogorgonPortalPlacerStateComponent> _demogorgonPortalPlacerState; // 0x2f8(0x08)
	char pad_300[0x40]; // 0x300(0x40)

	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet // (Final|Native|Private) // @ game+0x56c2440
};

// Class TheDemogorgon.DemogorgonPortal
// Size: 0x3f8 (Inherited: 0x338)
struct ADemogorgonPortal : AInteractable {
	char pad_338[0x10]; // 0x338(0x10)
	struct UPrimitiveComponent* _portalAreaCollider; // 0x348(0x08)
	struct UChargeableComponent* _destroyChargeable; // 0x350(0x08)
	struct UChargeableComponent* _teleportChargeable; // 0x358(0x08)
	enum class EDemogorgonPortalState _portalState; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UAkAudioEvent* _portalIdleSound; // 0x368(0x08)
	struct UAkAudioEvent* _portalDestroyingStart; // 0x370(0x08)
	struct UAkAudioEvent* _portalTeleportingSound; // 0x378(0x08)
	struct UParticleSystem* _destroyParticleSystem; // 0x380(0x08)
	float _destroyDuration; // 0x388(0x04)
	char pad_38C[0x24]; // 0x38c(0x24)
	struct TArray<struct ADBDPlayer*> _destroyingPlayers; // 0x3b0(0x10)
	char pad_3C0[0x30]; // 0x3c0(0x30)
	struct UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x3f0(0x08)

	void TriggerDirtExplosion(); // Function TheDemogorgon.DemogorgonPortal.TriggerDirtExplosion // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ShowPortalTeleportInteractionStartVFX(); // Function TheDemogorgon.DemogorgonPortal.ShowPortalTeleportInteractionStartVFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ShowPortalActiveVFX(); // Function TheDemogorgon.DemogorgonPortal.ShowPortalActiveVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void RemovePortalTeleportInteractionStartVFX(); // Function TheDemogorgon.DemogorgonPortal.RemovePortalTeleportInteractionStartVFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void RemovePortalActiveVFX(); // Function TheDemogorgon.DemogorgonPortal.RemovePortalActiveVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void PlaySoundFromPortal(struct UAkAudioEvent* SoundEvent); // Function TheDemogorgon.DemogorgonPortal.PlaySoundFromPortal // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown); // Function TheDemogorgon.DemogorgonPortal.OnTeleportAbilityCooldownChangedVFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnTargetedChanged(); // Function TheDemogorgon.DemogorgonPortal.OnTargetedChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnPortalStateChanged(enum class EDemogorgonPortalState State); // Function TheDemogorgon.DemogorgonPortal.OnPortalStateChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnPortalDestroyed(struct ADBDPlayer* Player); // Function TheDemogorgon.DemogorgonPortal.OnPortalDestroyed // (Final|Native|Public|BlueprintCallable) // @ game+0x56c32e0
	void OnEndOverlapPortalArea(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheDemogorgon.DemogorgonPortal.OnEndOverlapPortalArea // (Final|Native|Protected) // @ game+0x56c3180
	void OnBeginOverlapPortalArea(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheDemogorgon.DemogorgonPortal.OnBeginOverlapPortalArea // (Final|Native|Protected|HasOutParms) // @ game+0x56c2f60
	void MakePortalDisappearVFX(); // Function TheDemogorgon.DemogorgonPortal.MakePortalDisappearVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsTargeted(); // Function TheDemogorgon.DemogorgonPortal.IsTargeted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56c2f40
	void Authority_StopDestroyingPlayers(); // Function TheDemogorgon.DemogorgonPortal.Authority_StopDestroyingPlayers // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x56c2f20
	void Authority_OnTeleportChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheDemogorgon.DemogorgonPortal.Authority_OnTeleportChargePercentChanged // (Final|Native|Public) // @ game+0x56c2e10
	void Authority_OnDestroyChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheDemogorgon.DemogorgonPortal.Authority_OnDestroyChargePercentChanged // (Final|Native|Public) // @ game+0x56c2d00
};

// Class TheDemogorgon.DemogorgonPortalOutlineUpdateStrategy
// Size: 0xd0 (Inherited: 0xc0)
struct UDemogorgonPortalOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _survivorAuraColor; // 0xc0(0x10)
};

// Class TheDemogorgon.DemogorgonPortalPlacementValidationStrategy
// Size: 0x100 (Inherited: 0xe0)
struct UDemogorgonPortalPlacementValidationStrategy : UDefaultObjectPlacementValidationStrategy {
	struct UDemogorgonPortalPlacerStateComponent* _portalPlacerState; // 0xe0(0x08)
	struct UChargedAttackStateComponent* _chargedAttackState; // 0xe8(0x08)
	float _distanceForWorldCollisionDetection; // 0xf0(0x04)
	float _numberOfGroundTest; // 0xf4(0x04)
	float _portalEdgeTestRadius; // 0xf8(0x04)
	float _maxElevationDifferentialOnPortalEdge; // 0xfc(0x04)
};

// Class TheDemogorgon.DemogorgonPortalPlacerStateComponent
// Size: 0x158 (Inherited: 0xb8)
struct UDemogorgonPortalPlacerStateComponent : UActorComponent {
	struct FMulticastInlineDelegate OnTeleportCooldownComplete; // 0xb8(0x10)
	char pad_C8[0xc]; // 0xc8(0x0c)
	int32_t _remainingPortals; // 0xd4(0x04)
	char pad_D8[0x48]; // 0xd8(0x48)
	struct TArray<struct ADemogorgonPortal*> _placedPortals; // 0x120(0x10)
	struct TArray<struct FPortalRestrictedLocation> _restrictedPortalLocations; // 0x130(0x10)
	char pad_140[0x18]; // 0x140(0x18)

	void UpdateRemainingPortalCount(); // Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.UpdateRemainingPortalCount // (Final|Native|Private) // @ game+0x56c3cb0
	void OnLevelReadyToPlay(); // Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnLevelReadyToPlay // (Final|Native|Public) // @ game+0x56c3c90
	void OnDemogorgonTeleportCooldownComplete__DelegateSignature(); // DelegateFunction TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnDemogorgonTeleportCooldownComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsUsePortalCooldownDone(); // Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.IsUsePortalCooldownDone // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56c3c60
	void InitializeTunableValues(struct ASlasherPlayer* killer); // Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.InitializeTunableValues // (Final|Native|Private) // @ game+0x56c3bd0
	float GetTeleportDuration(); // Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetTeleportDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56c3bb0
	int32_t GetRemainingPortalCount(); // Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetRemainingPortalCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56c3b90
};

// Class TheDemogorgon.DemogorgonPortalRadiusDetectorComponent
// Size: 0x120 (Inherited: 0xb8)
struct UDemogorgonPortalRadiusDetectorComponent : UActorComponent {
	struct TArray<struct ADemogorgonPortal*> Portals; // 0xb8(0x10)
	struct TArray<struct ADBDPlayer*> _playersInsideRadius; // 0xc8(0x10)
	char pad_D8[0x38]; // 0xd8(0x38)
	struct UStatusEffect* _portalContactEffect; // 0x110(0x08)
	struct UStatusEffect* _portalProximityHuntingCamperEffect; // 0x118(0x08)

	void OnRep_PlayersInsideRadius(); // Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnRep_PlayersInsideRadius // (Final|Native|Private) // @ game+0x56c4040
	void OnPortalEffectsAppliedMultiDelegate__DelegateSignature(); // DelegateFunction TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnPortalEffectsAppliedMultiDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void Authority_OnLevelReadyToPlay(); // Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x56c4020
	void Authority_CallOnPortalEffectsApplied(struct FDelegate Callback); // Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_CallOnPortalEffectsApplied // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x56c3f70
};

// Class TheDemogorgon.DemogorgonPortalTargetingComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UDemogorgonPortalTargetingComponent : UActorComponent {
	struct ADemogorgonPortal* _targetedPortal; // 0xb8(0x08)
	struct UDemogorgonPortalPlacerStateComponent* _portalPlacerState; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)

	void SetIsPorting(bool isPorting); // Function TheDemogorgon.DemogorgonPortalTargetingComponent.SetIsPorting // (Final|Native|Public|BlueprintCallable) // @ game+0x56c44c0
	void Server_SetTargetedPortal(struct ADemogorgonPortal* targetedPortal); // Function TheDemogorgon.DemogorgonPortalTargetingComponent.Server_SetTargetedPortal // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x56c4400
	void Multicast_SetTargetedPortal(struct ADemogorgonPortal* targetedPortal); // Function TheDemogorgon.DemogorgonPortalTargetingComponent.Multicast_SetTargetedPortal // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0x56c4340
	struct ADemogorgonPortal* GetTargetedPortal(); // Function TheDemogorgon.DemogorgonPortalTargetingComponent.GetTargetedPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x56c4320
};

// Class TheDemogorgon.DemogorgonPounceAttack
// Size: 0x400 (Inherited: 0x390)
struct UDemogorgonPounceAttack : UPounceAttack {
	char pad_390[0x70]; // 0x390(0x70)
};

// Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate
// Size: 0x130 (Inherited: 0x130)
struct UDemogorgonPounceAttackOpenSubstate : UPounceAttackOpenSubstate {
};

// Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UDemogorgonPounceAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheDemogorgon.DemogorgonPounceAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UDemogorgonPounceAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UDemogorgonPounceAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheDemogorgon.DemogorgonPounceInteraction
// Size: 0x810 (Inherited: 0x760)
struct UDemogorgonPounceInteraction : UChargeableInteractionDefinition {
	char pad_760[0x68]; // 0x760(0x68)
	struct UChargedAttackStateComponent* _chargedAttackState; // 0x7c8(0x08)
	struct ASlasherPlayer* _owningSlasher; // 0x7d0(0x08)
	char pad_7D8[0x38]; // 0x7d8(0x38)

	void TriggerHuntingAudioEvent(bool isHunting); // Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void TriggerChargeCancelAudioEvent(); // Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnChargedAttackReadyChanged(bool Ready); // Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnCancelCooldownComplete(); // Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete // (Native|Event|Protected|BlueprintEvent) // @ game+0x56c4ec0
};

// Class TheDemogorgon.DemogorgonPower
// Size: 0x4d8 (Inherited: 0x4c8)
struct ADemogorgonPower : ACollectable {
	struct AActor* _demogorgonHuskClass; // 0x4c8(0x08)
	struct AActor* _demogorgonHusk; // 0x4d0(0x08)
};

// Class TheDemogorgon.DemogorgonPowerItemProgressComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UDemogorgonPowerItemProgressComponent : UPresentationItemProgressComponent {
	struct UDemogorgonPortalPlacerStateComponent* _portalPlacerState; // 0xc0(0x08)
};

// Class TheDemogorgon.DemogorgonScoreComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UDemogorgonScoreComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheDemogorgon.DemogorgonStealthComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UDemogorgonStealthComponent : UActorComponent {
	struct UStatusEffect* _stealthEffect; // 0xb8(0x08)
	struct UStatusEffect* _stealthEffectClass; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)

	void Authority_OnLevelReadyToPlay(); // Function TheDemogorgon.DemogorgonStealthComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x56c5530
};

// Class TheDemogorgon.DestroyDemogorgonPortalInteraction
// Size: 0x760 (Inherited: 0x760)
struct UDestroyDemogorgonPortalInteraction : UChargeableInteractionDefinition {
	struct ADemogorgonPortal* _owningPortal; // 0x758(0x08)

	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, struct AActor* chargeInstigator, bool wasCoop, float DeltaTime); // Function TheDemogorgon.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied // (Final|Native|Private) // @ game+0x56c56c0
};

// Class TheDemogorgon.ElevensSodaAddon
// Size: 0x2d0 (Inherited: 0x2b8)
struct UElevensSodaAddon : UItemAddon {
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct TArray<struct AGenerator*> _generatorsBeingRepaired; // 0x2c0(0x10)

	void Multicast_UnhighlightGenerator(struct AGenerator* Generator); // Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator // (Final|Net|NetReliableNative|Event|NetMulticast|Private|Const) // @ game+0x56c5c10
	void Multicast_HighlightGenerator(struct AGenerator* Generator); // Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator // (Final|Net|NetReliableNative|Event|NetMulticast|Private|Const) // @ game+0x56c5b80
};

// Class TheDemogorgon.LeproseLichenAddon
// Size: 0x2d0 (Inherited: 0x2b8)
struct ULeproseLichenAddon : UItemAddon {
	struct UStatusEffect* _timedRevealSurvivorEffectClass; // 0x2b8(0x08)
	float _revealDuration; // 0x2c0(0x04)
	float _portalSurvivorRange; // 0x2c4(0x04)
	struct UStatusEffect* _revealSurvivorsWhenTeleportingClass; // 0x2c8(0x08)
};

// Class TheDemogorgon.PortalSurvivorSubAnimInstance
// Size: 0x590 (Inherited: 0x550)
struct UPortalSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	char pad_550[0x38]; // 0x550(0x38)
	bool _isDestroyingPortal; // 0x588(0x01)
	bool _isSpooked; // 0x589(0x01)
	bool _hasSkillCheckFailed; // 0x58a(0x01)
	char pad_58B[0x5]; // 0x58b(0x05)
};

// Class TheDemogorgon.SetGroundPortalInteraction
// Size: 0x770 (Inherited: 0x760)
struct USetGroundPortalInteraction : UChargeableInteractionDefinition {
	struct UDemogorgonPortalPlacerStateComponent* _portalPlacerState; // 0x758(0x08)
	struct UObjectPlacerComponent* _trapPlacerComponent; // 0x760(0x08)
	struct ADemogorgonPortal* _portalClassToSpawn; // 0x768(0x08)
};

// Class TheDemogorgon.TeleportToDemogorgonPortalInteraction
// Size: 0x820 (Inherited: 0x760)
struct UTeleportToDemogorgonPortalInteraction : UChargeableInteractionDefinition {
	float TeleportToPortalSoundRange; // 0x758(0x04)
	float _enterPortalPhaseDuration; // 0x75c(0x04)
	float _cancelTeleportingPhaseDuration; // 0x760(0x04)
	struct UStatusEffect* _redMossStatusEffectClass; // 0x768(0x08)
	struct UDemogorgonPortalTargetingComponent* _portalTargetingComponent; // 0x770(0x08)
	struct UDemogorgonPortalPlacerStateComponent* _portalPlacerState; // 0x778(0x08)
	struct ADemogorgonPortal* _startingPortal; // 0x780(0x08)
	struct ADemogorgonPortal* _targetedPortal; // 0x788(0x08)
	struct ADBDPlayer* _interactingPlayer; // 0x790(0x08)
	char pad_79C[0x84]; // 0x79c(0x84)

	void OnTeleportInteractionCanceledVFX(); // Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnSlasherSet(struct ASlasherPlayer* killer); // Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnSlasherSet // (Final|Native|Private) // @ game+0x56c63d0
	void OnLocallyObservedChanged(bool isKillerLocallyObserved); // Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x56c6340
};

