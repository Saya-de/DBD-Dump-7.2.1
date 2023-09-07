// Class TheNightmare.BlackBox
// Size: 0x2f8 (Inherited: 0x2b8)
struct UBlackBox : UItemAddon {
	struct FDBDTunableRowHandle _blockDuration; // 0x2b8(0x28)
	char pad_2E0[0x18]; // 0x2e0(0x18)
};

// Class TheNightmare.BloodWarden
// Size: 0x438 (Inherited: 0x3c8)
struct UBloodWarden : UPerk {
	char pad_3C8[0x50]; // 0x3c8(0x50)
	struct UStatusEffect* _bloodWardenBlockerStatusEffectClass; // 0x418(0x08)
	struct UStatusEffect* _revealPlayerStatusEffectClass; // 0x420(0x08)
	float _perkLevelSpikeDurations[0x3]; // 0x428(0x0c)
	char pad_434[0x4]; // 0x434(0x04)

	float GetPerkLevelSpikeDurationsAtLevel(); // Function TheNightmare.BloodWarden.GetPerkLevelSpikeDurationsAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59ce210
};

// Class TheNightmare.DreamInducerComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UDreamInducerComponent : UActorComponent {
	struct UActorComponent* _generatorDreamworldClass; // 0xb8(0x08)

	void Authority_OnLevelReadyToPlay(); // Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x59ce3b0
};

// Class TheNightmare.DreamSnare
// Size: 0x238 (Inherited: 0x230)
struct ADreamSnare : AActor {
	bool _isActive; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class TheNightmare.DreamSnareEffect
// Size: 0x350 (Inherited: 0x350)
struct UDreamSnareEffect : UStatusEffect {

	void OnActorEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TheNightmare.DreamSnareEffect.OnActorEndOverlap // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnActorBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TheNightmare.DreamSnareEffect.OnActorBeginOverlap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheNightmare.FireUp
// Size: 0x3d8 (Inherited: 0x3c8)
struct UFireUp : UPerk {
	float _speedBonuses[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)

	float GetSpeedBonusAtLevel(); // Function TheNightmare.FireUp.GetSpeedBonusAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheNightmare.GeneratorDreamworldComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UGeneratorDreamworldComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TArray<struct FName> _beamSocketsForBloodEffect; // 0xc0(0x10)

	void OnRepairSkillCheckFailed(bool success, bool Bonus, struct ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, enum class ESkillCheckCustomType Type, float ChargeChange); // Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed // (Final|Native|Private) // @ game+0x59cea00
	void Cosmetic_OnPlayerFailSkillCheck(struct ADBDPlayer* Player); // Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheNightmare.GeneratorTeleportInteraction
// Size: 0x820 (Inherited: 0x760)
struct UGeneratorTeleportInteraction : UChargeableInteractionDefinition {
	float OnBloodSpurtsAINoiseEventRange; // 0x758(0x04)
	struct UTimerObject* _teleportCooldownTimer; // 0x760(0x08)
	char pad_76C[0x3c]; // 0x76c(0x3c)
	struct AGenerator* _selectedGenerator; // 0x7a8(0x08)
	struct AGenerator* _locallySelectedGenerator; // 0x7b0(0x08)
	char pad_7B8[0x8]; // 0x7b8(0x08)
	struct FTransform _selectedTeleportLocation; // 0x7c0(0x30)
	bool _isInteractionOngoing; // 0x7f0(0x01)
	bool _teleportFailed; // 0x7f1(0x01)
	bool _noTeleportableGenerators; // 0x7f2(0x01)
	char pad_7F3[0x1]; // 0x7f3(0x01)
	float _bloodSpurtInterval; // 0x7f4(0x04)
	float _collisionCheckCapsuleHalfHeight; // 0x7f8(0x04)
	float _collisionCheckCapsuleRadius; // 0x7fc(0x04)
	struct FVector _collisionCheckLocationOffset; // 0x800(0x0c)
	float _capsuleTraceAngleIncrement; // 0x80c(0x04)
	float _generatorTeleportMaxAngle; // 0x810(0x04)
	float _downRaycastLength; // 0x814(0x04)
	char pad_818[0x8]; // 0x818(0x08)

	void StopBloodSpurts(); // Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts // (Final|Native|Protected|BlueprintCallable) // @ game+0x59cfd30
	void StartBloodSpurts(); // Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts // (Final|Native|Protected|BlueprintCallable) // @ game+0x59cfd10
	void ShowBloodSpurtsVFX(); // Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Server_SetSelectedGenerator(struct AGenerator* Generator); // Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x59cfc50
	void OnTeleportReady(); // Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTeleportLocationChosen(struct AGenerator* Generator, struct FTransform Location); // Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void OnTeleported(struct FTransform transformBeforeTeleport); // Function TheNightmare.GeneratorTeleportInteraction.OnTeleported // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void OnSelectedGeneratorSet(struct AGenerator* selectedGenerator); // Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_TeleportCooldownTimer(); // Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer // (Final|Native|Private) // @ game+0x59cfc30
	void OnRep_SelectedGenerator(); // Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator // (Final|Native|Private) // @ game+0x59cfc10
	void OnLocallySelectedGeneratorSet(struct AGenerator* selectedGenerator); // Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnIntroCompleted(); // Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted // (Final|Native|Protected) // @ game+0x59cfbf0
	void OnBloodSpurts(); // Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts // (Final|Native|Protected) // @ game+0x59cfbd0
	void Multicast_TeleportPlayer(struct FVector Location, struct FRotator Rotation); // Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x57f04b0
	void Multicast_OnTeleportLocationChosen(struct AGenerator* Generator, struct FTransform Location); // Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x59cfa80
	bool IsTeleportAvailable(); // Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59cfa50
	void InitializeTunableValues(struct ASlasherPlayer* killer); // Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues // (Final|Native|Private) // @ game+0x59cf9c0
	bool HasTeleportFailed(); // Function TheNightmare.GeneratorTeleportInteraction.HasTeleportFailed // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x59cf990
	struct ADBDPlayer* GetOwningPlayer(); // Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59cf960
	struct AGenerator* GetInlineGenerator(struct ADBDPlayer* Player); // Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59cf8c0
	bool CanTeleportAtGenerator(struct AGenerator* Generator); // Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x59cf820
	bool Authority_TeleportPlayerToGenerator(struct ADBDPlayer* playerToTeleport, struct AGenerator* Generator); // Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x59cf750
	void Authority_StartTeleportCooldown(bool teleported); // Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x59cf6c0
};

// Class TheNightmare.InDreamSurvivorSubAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct UInDreamSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _shouldLookSleepy; // 0x550(0x01)
	bool _isCrawling; // 0x551(0x01)
	bool _isBeingCarried; // 0x552(0x01)
	bool _isDead; // 0x553(0x01)
	bool _isHooked; // 0x554(0x01)
	bool _isCrouched; // 0x555(0x01)
	bool _isIdle; // 0x556(0x01)
	char pad_557[0x1]; // 0x557(0x01)
	float _walkAnimSpeed; // 0x558(0x04)
	char pad_55C[0x14]; // 0x55c(0x14)
};

// Class TheNightmare.NightmareAnimInstance
// Size: 0x610 (Inherited: 0x610)
struct UNightmareAnimInstance : UKillerAnimInstance {
};

// Class TheNightmare.NightmareCheatComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UNightmareCheatComponent : UActorComponent {
	bool _allowWakeUpAnyClock; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	void OnRep_AllowWakeUpAnyClock(); // Function TheNightmare.NightmareCheatComponent.OnRep_AllowWakeUpAnyClock // (Final|Native|Private) // @ game+0x4032ad0
	void DBD_AllowWakeUpAtAnyClock(bool allow); // Function TheNightmare.NightmareCheatComponent.DBD_AllowWakeUpAtAnyClock // (Final|Exec|Native|Public) // @ game+0x46a2400
};

// Class TheNightmare.PlaceDreamPalletInteraction
// Size: 0x650 (Inherited: 0x630)
struct UPlaceDreamPalletInteraction : UInteractionDefinition {
	struct TArray<struct APalletTracker*> _palletTrackers; // 0x630(0x10)
	char pad_640[0x8]; // 0x640(0x08)
	struct APalletTracker* _closestTracker; // 0x648(0x08)

	void SpawnDreamPallet(struct APalletTracker* trackerAtLocation); // Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void InitializeTunableValues(struct ASlasherPlayer* killer); // Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues // (Final|Native|Private) // @ game+0x59d0530
	struct APalletTracker* GetTargetedPallet(); // Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59d0500
	bool CanSpawnDreamPalletAtTracker(struct APalletTracker* tracker); // Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59d0460
};

// Class TheNightmare.PresentationGeneratorTeleportProgressComponent
// Size: 0xd8 (Inherited: 0xc0)
struct UPresentationGeneratorTeleportProgressComponent : UPresentationItemProgressComponent {
	char pad_C0[0x18]; // 0xc0(0x18)
};

// Class TheNightmare.RememberMe
// Size: 0x3c8 (Inherited: 0x3c8)
struct URememberMe : UPerk {

	bool DidLoseHealthState(struct AActor* DamagedActor, int32_t oldHealthStateCount); // Function TheNightmare.RememberMe.DidLoseHealthState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59d0870
};

// Class TheNightmare.SetDreamSnareInteraction
// Size: 0x770 (Inherited: 0x760)
struct USetDreamSnareInteraction : UChargeableInteractionDefinition {
	float MinPitch; // 0x758(0x04)
	float MinPlacementDistance; // 0x75c(0x04)
	float MaxPlacementDistance; // 0x760(0x04)
	char pad_76C[0x4]; // 0x76c(0x04)

	bool HasCancelledDreamSnare(); // Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80110
	float GetTrapDistanceFromControlRotation(); // Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59d0b40
};

// Class TheNightmare.TheNightmareUtilities
// Size: 0x30 (Inherited: 0x30)
struct UTheNightmareUtilities : UBlueprintFunctionLibrary {

	struct UDreamSnareEffect* GetDreamSnareStatusEffect(struct ADBDPlayer* Player); // Function TheNightmare.TheNightmareUtilities.GetDreamSnareStatusEffect // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59d0d00
};

// Class TheNightmare.WakerObjectOutlineStrategy
// Size: 0x138 (Inherited: 0x138)
struct UWakerObjectOutlineStrategy : USourceBasedOutlineUpdateStrategy {
};

