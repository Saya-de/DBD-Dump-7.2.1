// Class TheExecutioner.ActivateTormentModeInteraction
// Size: 0x770 (Inherited: 0x760)
struct UActivateTormentModeInteraction : UChargeableInteractionDefinition {
	char pad_760[0x10]; // 0x760(0x10)

	void SetTormentMode(struct ATormentMode* tormentModeComponent); // Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode // (Final|Native|Public|BlueprintCallable) // @ game+0x570af60
};

// Class TheExecutioner.Addon_TormentMode_17
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_TormentMode_17 : USpawnEffectsOnAllSurvivorsBaseAddon {
	float _blindnessDuration; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheExecutioner.Addon_TormentMode_18
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_TormentMode_18 : USpawnEffectsOnAllSurvivorsBaseAddon {
	float _obliviousDuration; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheExecutioner.Addon_TormentMode_19
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_TormentMode_19 : UItemAddon {
	struct UHemorrhageStatusEffect* _hemorrhageEffect; // 0x2b8(0x08)
};

// Class TheExecutioner.Addon_TormentMode_20
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_TormentMode_20 : UItemAddon {
	float _lingerDuration; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class TheExecutioner.Addon_TormentMode_21
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_TormentMode_21 : USpawnEffectsOnAllSurvivorsBaseAddon {
	bool _revealSurvivorsInAgony; // 0x2c8(0x01)
	bool _revealSurvivorsNotInAgony; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	float _range; // 0x2cc(0x04)
	float _revealDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
};

// Class TheExecutioner.AgonyComponent
// Size: 0x1f8 (Inherited: 0xb8)
struct UAgonyComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FTagStateBool _isInAgony; // 0xc8(0x30)
	struct FTagStateBool _isAgonyMoriable; // 0xf8(0x30)
	struct FDBDTunableRowHandle _agonyNumberOfHookForMiniMori; // 0x128(0x28)
	char pad_150[0x38]; // 0x150(0x38)
	bool _inAttackTrailDamageCooldown; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FDBDTunableRowHandle _attackTrailDamageCooldownTime; // 0x190(0x28)
	char pad_1B8[0x18]; // 0x1b8(0x18)
	struct TArray<struct FAgonyDisplayFxEvent> _showAgonyFXEvents; // 0x1d0(0x10)
	struct TArray<struct FAgonyDisplayFxEvent> _hideAgonyFXEvents; // 0x1e0(0x10)
	char pad_1F0[0x8]; // 0x1f0(0x08)

	void ShowAgonyBarbWireFX_Cosmetic(); // Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTrailEffectStop_Cosmetic(); // Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTrailEffectStart_Cosmetic(); // Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnShowBarbWireFXOnGameEvent(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent // (Final|Native|Private|HasOutParms) // @ game+0x570a980
	void OnRep_IsInAgony(); // Function TheExecutioner.AgonyComponent.OnRep_IsInAgony // (Final|Native|Private) // @ game+0x570a940
	void OnLocallyObservedChanged(bool IsLocallyObserved); // Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnHitInAgony_Cosmetic(); // Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnHitByTormentAttackTrail_Cosmetic(); // Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnHideBarbWireFXOnGameEvent(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent // (Final|Native|Private|HasOutParms) // @ game+0x570a830
	void OnAgonyChanged_Cosmetic(bool IsInAgony); // Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsInAgony(); // Function TheExecutioner.AgonyComponent.IsInAgony // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a640
	bool IsAgonyMoriable(); // Function TheExecutioner.AgonyComponent.IsAgonyMoriable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a610
	void HideAgonyBarbWireFX_Cosmetic(); // Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnDrainStageChanged(int32_t DrainStage, struct ADBDPlayer* Target); // Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged // (Final|Native|Private) // @ game+0x570a2f0
	void Authority_OnAttackTrailDamageCooldownTimerDone(); // Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone // (Final|Native|Private) // @ game+0x570a2d0
};

// Class TheExecutioner.AgonyMoriInteraction
// Size: 0x7f0 (Inherited: 0x7f0)
struct UAgonyMoriInteraction : UKillInteractionDefinition {
};

// Class TheExecutioner.AgonySubAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct UAgonySubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isInAgony; // 0x550(0x01)
	bool _isInTormentTrail; // 0x551(0x01)
	bool _isInTormentTrailEffect; // 0x552(0x01)
	bool _isInDeathBed; // 0x553(0x01)
	bool _isDeadInDeathBed; // 0x554(0x01)
	bool _isInStruggleInDeathBed; // 0x555(0x01)
	bool _isIdle; // 0x556(0x01)
	bool _isCrouched; // 0x557(0x01)
	bool _isCrawling; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float _walkAnimSpeed; // 0x55c(0x04)
	enum class EInteractionAnimation _interactionType; // 0x560(0x01)
	bool _isInjured; // 0x561(0x01)
	bool _isBeingCarried; // 0x562(0x01)
	char pad_563[0xd]; // 0x563(0x0d)
};

// Class TheExecutioner.BaseTormentTrailPoint
// Size: 0x330 (Inherited: 0x230)
struct ABaseTormentTrailPoint : AActor {
	char pad_230[0x18]; // 0x230(0x18)
	struct USphereComponent* _collisionComponent; // 0x248(0x08)
	float _collisionRadius; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FTunableStat _tormentTrailAliveTime; // 0x258(0x80)
	char pad_2D8[0x30]; // 0x2d8(0x30)
	struct USplineMeshComponent* _splineMeshComponent; // 0x308(0x08)
	struct TArray<struct UStaticMesh*> _trailMeshList; // 0x310(0x10)
	char _indexInTrail; // 0x320(0x01)
	char pad_321[0xf]; // 0x321(0x0f)

	void EndOfDisapearCosmetic(); // Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic // (Final|Native|Protected|BlueprintCallable) // @ game+0x570a510
	void DisappearCosmetic(); // Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.BloodPact
// Size: 0x460 (Inherited: 0x3c8)
struct UBloodPact : UPerk {
	char pad_3C8[0x18]; // 0x3c8(0x18)
	bool _fullHealthStateOnly; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float _hasteEffectRange; // 0x3e4(0x04)
	float _hasteEffectMovementSpeedIncrease[0x3]; // 0x3e8(0x0c)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UStatusEffect* _bloodPactRevealEffect_Obsession; // 0x3f8(0x08)
	struct UStatusEffect* _bloodPactRevealEffect_Owner; // 0x400(0x08)
	struct UStatusEffect* _bloodPactHasteEffect; // 0x408(0x08)
	struct UStatusEffect* _decreaseObsessionChanceEffect; // 0x410(0x08)
	struct UStatusEffect* _ownerStatusEffect; // 0x418(0x08)
	struct UStatusEffect* _obsessionStatusEffect; // 0x420(0x08)
	struct UStatusEffect* _ownerHasteStatusEffect; // 0x428(0x08)
	struct UStatusEffect* _otherPlayerHasteStatusEffect; // 0x430(0x08)
	struct ADBDPlayer* _otherPlayer; // 0x438(0x08)
	char pad_440[0x20]; // 0x440(0x20)

	void Authority_OnInRangeChanged(bool inRange); // Function TheExecutioner.BloodPact.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x570a3c0
};

// Class TheExecutioner.DeathBedAntiCampComponent
// Size: 0x190 (Inherited: 0xb8)
struct UDeathBedAntiCampComponent : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct FDBDTunableRowHandle _anticampZoneDistance; // 0x100(0x28)
	struct FDBDTunableRowHandle _anticampZoneTimeToTrigger; // 0x128(0x28)
	char pad_150[0x40]; // 0x150(0x40)

	void Multicast_TriggerDeathBedRelocate(); // Function TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	void Authority_OnInRangeChanged(bool inRange); // Function TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x570a450
};

// Class TheExecutioner.DeathBedInteractable
// Size: 0x498 (Inherited: 0x338)
struct ADeathBedInteractable : AInteractable {
	char pad_338[0x10]; // 0x338(0x10)
	struct USceneComponent* _root; // 0x348(0x08)
	struct ACamperPlayer* _inDeathBedCamper; // 0x350(0x08)
	struct UChargeableComponent* _rescueChargeableComponent; // 0x358(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _deathBedSkeletalMesh; // 0x360(0x08)
	struct UBoxComponent* _interactionZone; // 0x368(0x08)
	struct UBoxComponent* _playerOverlapZone; // 0x370(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x378(0x08)
	char pad_380[0x10]; // 0x380(0x10)
	struct UBoxComponent* _deathBedCollision; // 0x390(0x08)
	char pad_398[0x50]; // 0x398(0x50)
	struct UAnimationMontageSlave* _animationMontageSlave; // 0x3e8(0x08)
	struct UAnimMontage* _montageToPlay; // 0x3f0(0x08)
	char pad_3F8[0x4]; // 0x3f8(0x04)
	struct FVector _rescuerSnapPosition; // 0x3fc(0x0c)
	struct UDeathBedAntiCampComponent* _deathBedAnticampComponent; // 0x408(0x08)
	char pad_410[0x40]; // 0x410(0x40)
	struct FDBDTunableRowHandle _anticampDrainCooldownTime; // 0x450(0x28)
	char pad_478[0x18]; // 0x478(0x18)
	struct UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x490(0x08)

	void TeleportCamperToDeathBed(bool shouldActivate); // Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed // (Final|Native|Private|BlueprintCallable) // @ game+0x570aff0
	void StartPlayerAbsorbedByGround(); // Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetInDeathBedCamper(struct ACamperPlayer* CamperPlayer); // Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper // (Final|Native|Public|BlueprintCallable) // @ game+0x570aed0
	void PlayerOverlapZoneEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap // (Final|Native|Private) // @ game+0x570acc0
	void PlayerOverlapZoneBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x570aab0
	void OnSkillCheckFailed_Cosmetic(); // Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnSkillCheckFailed(); // Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed // (Final|Native|Private) // @ game+0x570aa90
	void OnRescueCancelled(); // Function TheExecutioner.DeathBedInteractable.OnRescueCancelled // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRelocateStart_Cosmetic(); // Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDeathBedDeathEnd(); // Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x570a810
	void Multicast_RelocateToOtherDeathBed(struct ADeathBedInteractable* deathBed, struct ACamperPlayer* CamperPlayer); // Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x570a740
	struct FVector GetRescuerSnapPosition(); // Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a590
	struct UMontagePlayer* GetMontagePlayer(); // Function TheExecutioner.DeathBedInteractable.GetMontagePlayer // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a560
	struct ACamperPlayer* GetInDeathBedCamper(); // Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a530
	void FX_SurvivorSavedFromDeathBed(); // Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void FX_DeathBedAppear(); // Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void DeathBedDisappear(); // Function TheExecutioner.DeathBedInteractable.DeathBedDisappear // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	bool CanRescueSurvivor(); // Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a4e0
	void ActivateDeathBed(bool value); // Function TheExecutioner.DeathBedInteractable.ActivateDeathBed // (Final|Native|Private|BlueprintCallable) // @ game+0x570a240
};

// Class TheExecutioner.DeathBedOutlineUpdateStrategy
// Size: 0x138 (Inherited: 0x138)
struct UDeathBedOutlineUpdateStrategy : USourceBasedOutlineUpdateStrategy {
};

// Class TheExecutioner.DeathBedRescueInteraction
// Size: 0x790 (Inherited: 0x760)
struct UDeathBedRescueInteraction : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _loudNoiseRange; // 0x760(0x28)
	char pad_788[0x8]; // 0x788(0x08)

	struct FVector GetRescuerSnapPosition(); // Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition // (Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x570a5d0
};

// Class TheExecutioner.Deathbound
// Size: 0x428 (Inherited: 0x3c8)
struct UDeathbound : UPerk {
	float _distanceFromRescuedSurvivorForOblivious[0x3]; // 0x3c8(0x0c)
	float _activationDuration; // 0x3d4(0x04)
	float _rescueDistanceFromKillerToActivate; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	float _revealLocationDuration; // 0x3e0(0x04)
	bool _unhook; // 0x3e4(0x01)
	bool _fromDyingState; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	struct TArray<struct UStatusEffect*> _obliviousStatusEffects; // 0x3e8(0x10)
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct TArray<struct ADBDPlayer*> _survivorsToReveal; // 0x408(0x10)
	struct UStatusEffect* _obliviousEffectClass; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)

	void OnRep_SurvivorsToReveal(); // Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal // (Final|Native|Private) // @ game+0x570a960
	void MakeSurvivorScream(struct ACamperPlayer* Survivor); // Function TheExecutioner.Deathbound.MakeSurvivorScream // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetRevealLocationDuration(); // Function TheExecutioner.Deathbound.GetRevealLocationDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf41d0
};

// Class TheExecutioner.DeathboundStatusEffect
// Size: 0x368 (Inherited: 0x360)
struct UDeathboundStatusEffect : UObliviousEffect {
	char pad_360[0x8]; // 0x360(0x08)
};

// Class TheExecutioner.ExecutionerTormentAttack
// Size: 0x390 (Inherited: 0x390)
struct UExecutionerTormentAttack : UPounceAttack {

	void Server_TormentTryHitTargetNotInCoolDown(struct ADBDPlayer* Target); // Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x570ae10
	void Multicast_TormentHitTarget(struct ADBDPlayer* Target, bool hitCosmeticOnly); // Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56ddb10
};

// Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UExecutionerTormentAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheExecutioner.ExecutionerTormentAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UExecutionerTormentAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheExecutioner.ExecutionerTormentAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UExecutionerTormentAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheExecutioner.ForcedPenance
// Size: 0x408 (Inherited: 0x3c8)
struct UForcedPenance : UPerk {
	float _perkActivationDuration[0x3]; // 0x3c8(0x0c)
	bool _applyOblivious; // 0x3d4(0x01)
	bool _applyBroken; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	struct UStatusEffect* _timedObliviousStatusEffectClass; // 0x3d8(0x08)
	struct UStatusEffect* _brokenStatusEffectClass; // 0x3e0(0x08)
	struct TArray<struct UStatusEffect*> _camperObliviousEffects; // 0x3e8(0x10)
	struct TArray<struct UStatusEffect*> _camperBrokenEffects; // 0x3f8(0x10)
};

// Class TheExecutioner.MobileTormentTrailRenderer
// Size: 0x2b0 (Inherited: 0x230)
struct AMobileTormentTrailRenderer : AActor {
	struct UInstancedStaticMeshComponent* _pillarIsmComponent; // 0x230(0x08)
	struct UInstancedStaticMeshComponent* _wireIsmComponent; // 0x238(0x08)
	struct UInstancedStaticMeshComponent* _trailIsmComponent; // 0x240(0x08)
	struct UInstancedStaticMeshComponent* _pillarOutlineIsmComponent; // 0x248(0x08)
	struct UInstancedStaticMeshComponent* _wireOutlineIsmComponent; // 0x250(0x08)
	struct TMap<struct ABaseTormentTrailPoint*, struct FTormentTrailPointInfo> _instanceMap; // 0x258(0x50)
	struct UMaterialInstanceDynamic* _trailMaterialInstanceDynamic; // 0x2a8(0x08)

	void Multicast_RemoveInstance(struct ABaseTormentTrailPoint* TrailPoint); // Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x55b9b20
	void Multicast_AddInstance(struct ABaseTormentTrailPoint* TrailPoint, bool isAttackTrailPoint); // Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x570a670
};

// Class TheExecutioner.RepressedAlliance
// Size: 0x440 (Inherited: 0x3c8)
struct URepressedAlliance : UPerk {
	float _repairTimesNeededToActivate[0x3]; // 0x3c8(0x0c)
	float _generatorBlockDuration; // 0x3d4(0x04)
	struct FSecondaryInteractionProperties _secondaryActionProperties; // 0x3d8(0x38)
	struct UInteractionDefinition* _currentRepairInteractionWithAbility; // 0x410(0x08)
	char pad_418[0x18]; // 0x418(0x18)
	struct AGenerator* _blockedGenerator; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)

	void Server_OnActionInputPressed(struct AGenerator* Generator); // Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x570e9a0
	void OnRep_CurrentRepairInteractionWithAbility(struct UInteractionDefinition* oldRepairInteraction); // Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility // (Final|Native|Private) // @ game+0x570e6c0
	void OnRep_BlockedGenerator(struct AGenerator* oldGenerator); // Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator // (Final|Native|Private) // @ game+0x570e630
	float GetRepairTimesNeededToActivateAtLevel(); // Function TheExecutioner.RepressedAlliance.GetRepairTimesNeededToActivateAtLevel // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetGeneratorBlockDuration(); // Function TheExecutioner.RepressedAlliance.GetGeneratorBlockDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6c0
};

// Class TheExecutioner.SendToDeathBedInteraction
// Size: 0x770 (Inherited: 0x760)
struct USendToDeathBedInteraction : UChargeableInteractionDefinition {
	struct ADeathBedInteractable* _deathBed; // 0x760(0x08)
	char pad_768[0x8]; // 0x768(0x08)

	void Multicast_SendCamperToDeathBed(struct ADeathBedInteractable* deathBed); // Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d80390
	struct ACamperPlayer* GetOwningSurvivor(); // Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x570e050
	void FX_InteractionStart(); // Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void FX_InteractionCancel(); // Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.SoulGuard
// Size: 0x3f8 (Inherited: 0x3c8)
struct USoulGuard : UPerk {
	float _cooldownLevels[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _enduranceEffectClass; // 0x3d8(0x08)
	bool _recover; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float _enduranceEffectDuration[0x3]; // 0x3e4(0x0c)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void Authority_OnSurvivorHealed(struct FCamperHealResult& healResult); // Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed // (Final|Native|Private|HasOutParms) // @ game+0x570de90
};

// Class TheExecutioner.TormentTrailDetectorComponent
// Size: 0x1f8 (Inherited: 0xb8)
struct UTormentTrailDetectorComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct ATormentTrailPoint*> _overlappedTrailPoints; // 0xd0(0x10)
	struct FTagStateBool _isInTormentTrail; // 0xe0(0x30)
	struct FTagStateBool _isInTormentTrailEffect; // 0x110(0x30)
	char pad_140[0x8]; // 0x140(0x08)
	struct FTunableStat _inTormentTrailLastingEffectTime; // 0x148(0x80)
	char pad_1C8[0x30]; // 0x1c8(0x30)
};

// Class TheExecutioner.SurvivorTormentTrailDetector
// Size: 0x210 (Inherited: 0x1f8)
struct USurvivorTormentTrailDetector : UTormentTrailDetectorComponent {
	char pad_1F8[0x18]; // 0x1f8(0x18)
};

// Class TheExecutioner.TheExecutionerAnimInstance
// Size: 0x6a0 (Inherited: 0x610)
struct UTheExecutionerAnimInstance : UKillerAnimInstance {
	bool _isInTormentMode; // 0x610(0x01)
	bool _isChargingTormentMode; // 0x611(0x01)
	bool _isTormentModeAttacking; // 0x612(0x01)
	char pad_613[0x1]; // 0x613(0x01)
	float _tormentModeVerticalInput; // 0x614(0x04)
	float _tormentModeHorizontalInput; // 0x618(0x04)
	char pad_61C[0x84]; // 0x61c(0x84)

	void NoInputFeedbackCosmetic(); // Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.TheExecutionerCheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UTheExecutionerCheatComponent : UActorComponent {

	void DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool value, struct FString localPlayerId); // Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer // (Final|Exec|Native|Public) // @ game+0x570df40
	void DBD_SetAgonyOnLocallyControlledPlayer(bool value, struct FString localPlayerId); // Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer // (Final|Exec|Native|Public) // @ game+0x570df40
	void DBD_LocalKillSurvivorInDeathBed(); // Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_DisplayAllDeathBed(bool value); // Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_DeathBedPlayStruggleHitReaction(); // Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction // (Final|Exec|Native|Public) // @ game+0x4032ad0
};

// Class TheExecutioner.TrailControllerBase
// Size: 0x288 (Inherited: 0x230)
struct ATrailControllerBase : AActor {
	struct UTormentTrailPointCollectionComponent* _tormentTrailPointCollection; // 0x230(0x08)
	struct FDBDTunableRowHandle _distanceBetweenTormentTrailPoint; // 0x238(0x28)
	struct USplineComponent* _splineComponent; // 0x260(0x08)
	char pad_268[0x10]; // 0x268(0x10)
	struct UAuthoritativePoolableActorComponent* _poolableComponent; // 0x278(0x08)
	enum class ETrailType _trailType; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)

	void RemoveTormentTrailController(); // Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController // (Final|Native|Protected|BlueprintCallable) // @ game+0x570e980
	void OnTrailPointDeath(struct ABaseTormentTrailPoint* baseTrailPoint); // Function TheExecutioner.TrailControllerBase.OnTrailPointDeath // (Native|Protected) // @ game+0x570e860
	void OnAcquireChanged(bool acquired); // Function TheExecutioner.TrailControllerBase.OnAcquireChanged // (Native|Protected) // @ game+0x570e490
	void ActivateCosmetic(bool value); // Function TheExecutioner.TrailControllerBase.ActivateCosmetic // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.TormentAttackTrailController
// Size: 0x400 (Inherited: 0x288)
struct ATormentAttackTrailController : ATrailControllerBase {
	struct ATormentAttackTrailPoint* _tormentTrailAttackPointClass; // 0x288(0x08)
	struct AActor* _tormentTrailAttackSign; // 0x290(0x08)
	struct FDBDTunableRowHandle _trailSpawnDelay; // 0x298(0x28)
	struct FDBDTunableRowHandle _timeIntervalBetweenPointsSpawn; // 0x2c0(0x28)
	struct FTunableStat _attackTrailLenght; // 0x2e8(0x80)
	struct FDBDTunableRowHandle _consideredAsSlopeAngle; // 0x368(0x28)
	struct TArray<struct FTransform> _pointsTransform; // 0x390(0x10)
	struct FVector _slopeDetectionOverGroundVector; // 0x3a0(0x0c)
	struct FVector _groundDetectionEndVector; // 0x3ac(0x0c)
	struct FVector _slopeCompensationVector; // 0x3b8(0x0c)
	char pad_3C4[0x1c]; // 0x3c4(0x1c)
	struct TArray<struct FSpawnedAttackPoint> _spawnedAttackPointList; // 0x3e0(0x10)
	bool _trailSpawnStarted; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float _soundDistanceOnTrail; // 0x3f4(0x04)
	struct AMobileTormentTrailRenderer* _mobileTormentTrailRenderer; // 0x3f8(0x08)

	void OnTrailPointRemovedCosmetic(int32_t index); // Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic // (Native|Event|Protected|BlueprintEvent) // @ game+0x570e8f0
	void OnStartTrailTimerDone(); // Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone // (Final|Native|Private) // @ game+0x570e750
	void OnIntervalBetweenPointsTimerDone(); // Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone // (Final|Native|Private) // @ game+0x570e5f0
	void OnAttackTrailStartCosmetic(); // Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_StartAttackTrail(float serverTimeSpawn, struct FVector_NetQuantize10 Location, struct FRotator Rotation); // Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x570e2d0
	void DisplayAttackTrailSpawnSign(); // Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign // (Native|Event|Protected|BlueprintEvent) // @ game+0x570e030
};

// Class TheExecutioner.TormentAttackTrailPoint
// Size: 0x388 (Inherited: 0x330)
struct ATormentAttackTrailPoint : ABaseTormentTrailPoint {
	char pad_330[0x30]; // 0x330(0x30)
	struct FDBDTunableRowHandle _attackPointDelayToEnableCollision; // 0x360(0x28)

	void DisplayTrailSplineMesh(struct USplineComponent* splinemesh, int32_t indexInTrail); // Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.TormentMode
// Size: 0x918 (Inherited: 0x4c8)
struct ATormentMode : ACollectable {
	char pad_4C8[0x78]; // 0x4c8(0x78)
	struct UChargeableComponent* _activateTormentModeCharge; // 0x540(0x08)
	struct UPowerChargeComponent* _tormentModeCharge; // 0x548(0x08)
	char pad_550[0x8]; // 0x550(0x08)
	struct UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation; // 0x558(0x08)
	struct UPowerToggleComponent* _powerToggleComponent; // 0x560(0x08)
	struct UTormentTrailSpawnerComponent* _tormentTrailSpawnerComponent; // 0x568(0x08)
	struct UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent; // 0x570(0x08)
	struct UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent; // 0x578(0x08)
	struct UAuthoritativeActorPoolComponent* _tormentTrailControllerPool; // 0x580(0x08)
	struct UAuthoritativeActorPoolComponent* _tormentAttackTrailControllerPool; // 0x588(0x08)
	struct UAuthoritativeActorPoolComponent* _restrictedTormentTrailControllerPool; // 0x590(0x08)
	struct UAuthoritativeActorPoolComponent* _tormentTrailPointPool; // 0x598(0x08)
	struct UAuthoritativeActorPoolComponent* _restrictedTormentTrailPointPool; // 0x5a0(0x08)
	struct FDBDTunableRowHandle _activateTormentModeSecondsToCharge; // 0x5a8(0x28)
	struct FDBDTunableRowHandle _tormentModeMaxCharge; // 0x5d0(0x28)
	struct FTunableStat _tormentModeChargeRate; // 0x5f8(0x80)
	struct FTunableStat _tormentModeDischargeRate; // 0x678(0x80)
	struct FDBDTunableRowHandle _tormentModePauseChargeRate; // 0x6f8(0x28)
	struct FDBDTunableRowHandle _tormentModeAttackConsumePower; // 0x720(0x28)
	struct FDBDTunableRowHandle _tormentModeMinimumPercentToActivate; // 0x748(0x28)
	struct FDBDTunableRowHandle _tormentModeMouseYawScale; // 0x770(0x28)
	struct FDBDTunableRowHandle _tormentModeYawAdjustTime; // 0x798(0x28)
	struct FDBDTunableRowHandle _tormentModeGamePadYawScale; // 0x7c0(0x28)
	struct FDBDTunableRowHandle _tormentModeYawInputLimit; // 0x7e8(0x28)
	struct FDBDTunableRowHandle _tormentModeNotMovingYawScaleMultiplier; // 0x810(0x28)
	struct FDBDTunableRowHandle _tormentModeNotMovingYawAdjustTime; // 0x838(0x28)
	struct FDBDTunableRowHandle _tormentModeWalkSpeed; // 0x860(0x28)
	struct FDBDTunableRowHandle _normalWalkSpeed; // 0x888(0x28)
	struct FDBDTunableRowHandle _tormentModeForcedPitch; // 0x8b0(0x28)
	struct UAgonyComponent* _agonyComponentClass; // 0x8d8(0x08)
	char pad_8E0[0x10]; // 0x8e0(0x10)
	struct UTormentTrailDetectorComponent* _killerTormentTrailDetectorClass; // 0x8f0(0x08)
	struct UTormentTrailDetectorComponent* _survivorTormentTrailDetectorClass; // 0x8f8(0x08)
	struct UTormentModeCooldownInteraction* _tormentModeCooldownInteraction; // 0x900(0x08)
	struct UCurveFloat* _tormentModeChargeSpeedCurve; // 0x908(0x08)
	struct AMobileTormentTrailRenderer* _mobileTormentTrailRendererClass; // 0x910(0x08)

	void Server_RequestMoreActorInAttackPool(); // Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x570eab0
	void OnTormentModeStop_Cosmetic(); // Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTormentModeStart_Cosmetic(); // Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTormentModeChargeEmpty(); // Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty // (Final|Native|Private) // @ game+0x570e770
	bool IsInTormentMode(); // Function TheExecutioner.TormentMode.IsInTormentMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x570e2a0
};

// Class TheExecutioner.TormentModeCooldownInteraction
// Size: 0x6b0 (Inherited: 0x630)
struct UTormentModeCooldownInteraction : UInteractionDefinition {
	struct FDBDTunableRowHandle _tormentModeCooldownTime; // 0x630(0x28)
	struct FDBDTunableRowHandle _tormentModeCancelWalkSpeed; // 0x658(0x28)
	struct FDBDTunableRowHandle _normalWalkSpeed; // 0x680(0x28)
	char pad_6A8[0x8]; // 0x6a8(0x08)
};

// Class TheExecutioner.Tormentor
// Size: 0x30 (Inherited: 0x30)
struct UTormentor : UInterface {

	struct FVector GetTormentTrailSpawnPoint(); // Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	struct FVector GetTormentTrailAttackSpawnPoint(); // Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.TormentTrailController
// Size: 0x3b0 (Inherited: 0x288)
struct ATormentTrailController : ATrailControllerBase {
	struct FReplicatedTrailPointList _trailPointList; // 0x288(0x120)
	struct AMobileTormentTrailRenderer* _mobileTormentTrailRenderer; // 0x3a8(0x08)

	void Server_SpawnTormentTrailPoint(struct ATormentTrailPoint* TrailPoint, struct FVector_NetQuantize10 Location, struct FRotator Rotation); // Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x570ebb0
};

// Class TheExecutioner.TormentTrailPoint
// Size: 0x358 (Inherited: 0x330)
struct ATormentTrailPoint : ABaseTormentTrailPoint {
	char pad_330[0x18]; // 0x330(0x18)
	struct UAuthoritativePoolableActorComponent* _poolableComponent; // 0x348(0x08)
	float _splineMeshOverlapDistance; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)

	void Server_RemoveTrailPoint(); // Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x570ea60
	void RefreshTrailPointCosmetic(enum class ETrailPointRefreshReason trailPointRefreshReason); // Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnAcquireChanged(bool acquired); // Function TheExecutioner.TormentTrailPoint.OnAcquireChanged // (Final|Native|Private) // @ game+0x570e400
	void Multicast_TriggerTrailPointDisappear(); // Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x3dad230
	void GetTrailLocationAndTangeant(int32_t indexInTrail, struct USplineComponent* SplineComponent, struct FVector& outStartLocation, struct FVector& outStartTangent, struct FVector& outEndLocation, struct FVector& outEndTangent); // Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant // (Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x570e080
	void AddTrailCosmetic(struct USplineComponent* SplineComponent, char indexInTrail); // Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ActivateCosmetic(bool value); // Function TheExecutioner.TormentTrailPoint.ActivateCosmetic // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheExecutioner.TormentTrailPointCollectionComponent
// Size: 0x100 (Inherited: 0xb8)
struct UTormentTrailPointCollectionComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _maxNumberOfTrailPointInGame; // 0xd0(0x28)
	char pad_F8[0x8]; // 0xf8(0x08)

	void OnTrailAcquireChanged(struct ATormentTrailPoint* TrailPoint, bool value); // Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged // (Final|Native|Private) // @ game+0x570e790
};

// Class TheExecutioner.TormentTrailSpawnerComponent
// Size: 0x248 (Inherited: 0xb8)
struct UTormentTrailSpawnerComponent : UActorComponent {
	struct ATormentTrailController* _currentTrailController; // 0xb8(0x08)
	struct FDBDTunableRowHandle _restrictionRangeToHooks; // 0xc0(0x28)
	struct FDBDTunableRowHandle _restrictionRangeToGenerators; // 0xe8(0x28)
	struct FDBDTunableRowHandle _restrictionRangeToExitSwitch; // 0x110(0x28)
	struct FDBDTunableRowHandle _maxSlopeAngleForTrail; // 0x138(0x28)
	struct FDBDTunableRowHandle _minSlopeAngleForTrail; // 0x160(0x28)
	struct FDBDTunableRowHandle _restrictionRangeToHatch; // 0x188(0x28)
	struct FDBDTunableRowHandle _restrictionMaxVerticalDistance; // 0x1b0(0x28)
	struct UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent; // 0x1d8(0x08)
	struct UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent; // 0x1e0(0x08)
	struct UAuthoritativeActorPoolComponent* _tormentTrailControllerPool; // 0x1e8(0x08)
	struct UAuthoritativeActorPoolComponent* _tormentRestrictedTrailControllerPool; // 0x1f0(0x08)
	char pad_1F8[0x18]; // 0x1f8(0x18)
	struct TArray<struct AActor*> _actorsInRange; // 0x210(0x10)
	struct FVector _slopeDetectionOverGroundVector; // 0x220(0x0c)
	struct FVector _slopeDetectionEndVector; // 0x22c(0x0c)
	float _forwardMultiplierSlopeDetection; // 0x238(0x04)
	float _epsilonToAddToSpawnLocationInZ; // 0x23c(0x04)
	char pad_240[0x8]; // 0x240(0x08)

	void Sever_SpawnTrailController(struct ATormentTrailController* trailController, struct FVector_NetQuantize10 Location, struct FRotator Rotation); // Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x570ed30
	void Server_StopTrailController(struct ATormentTrailController* trailController); // Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x55700e0
	void Server_RequestMoreActorInPool(enum class ETrailType trailType); // Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x570eb00
	void OnLevelReadyToPlay(); // Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x570e610
	void OnInRangeChanged(bool inRange, struct AActor* Actor); // Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged // (Final|Native|Private) // @ game+0x570e520
};

// Class TheExecutioner.TrailEffectLastingTimeBaseAddon
// Size: 0x2d0 (Inherited: 0x2c8)
struct UTrailEffectLastingTimeBaseAddon : USpawnEffectsOnAllSurvivorsBaseAddon {
	float _trailEffectLastingTimeModifierValue; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheExecutioner.TrailOfTorment
// Size: 0x408 (Inherited: 0x3c8)
struct UTrailOfTorment : UPerk {
	struct UStatusEffect* _trailOfTormentEffect; // 0x3c8(0x08)
	char pad_3D0[0x18]; // 0x3d0(0x18)
	float _cooldownDuration[0x3]; // 0x3e8(0x0c)
	int32_t _highlightPriority; // 0x3f4(0x04)
	struct AGenerator* _highlightedGenerator; // 0x3f8(0x08)
	struct UStatusEffect* _statusEffect; // 0x400(0x08)

	void OnRep_HighlightGenerator(struct AGenerator* oldHighlightedGenerator); // Function TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator // (Final|Native|Private|Const) // @ game+0x570f420
};

// Class TheExecutioner.TrailPointOutlineUpdateStrategy
// Size: 0x160 (Inherited: 0x138)
struct UTrailPointOutlineUpdateStrategy : USourceBasedOutlineUpdateStrategy {
	struct FDBDTunableRowHandle _tormentTrailRevealDistance; // 0x138(0x28)
};

