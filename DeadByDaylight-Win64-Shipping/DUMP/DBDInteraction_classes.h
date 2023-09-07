// Class DBDInteraction.BaseLockerInteraction
// Size: 0x660 (Inherited: 0x630)
struct UBaseLockerInteraction : UInteractionDefinition {
	struct ALocker* _owningLocker; // 0x630(0x08)
	struct FGameplayTagContainer _lockerPreventingTags; // 0x638(0x20)
	bool _lockerIsMontageFollower; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)

	struct ALocker* GetLocker(); // Function DBDInteraction.BaseLockerInteraction.GetLocker // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7ff90
};

// Class DBDInteraction.CollectItemInteraction
// Size: 0x660 (Inherited: 0x630)
struct UCollectItemInteraction : UInteractionDefinition {
	struct FMulticastInlineDelegate OnCollectUpdateStart; // 0x630(0x10)
	struct FMulticastInlineDelegate OnCollectUpdateEnd; // 0x640(0x10)
	char pad_650[0x10]; // 0x650(0x10)

	struct ACollectable* GetItem(); // Function DBDInteraction.CollectItemInteraction.GetItem // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7ff90
};

// Class DBDInteraction.BaseStalkModeInteraction
// Size: 0x640 (Inherited: 0x630)
struct UBaseStalkModeInteraction : UInteractionDefinition {
	char pad_630[0x10]; // 0x630(0x10)

	struct UStalkerComponent* GetStalkerComponent(); // Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80050
	bool CanStalk(); // Function DBDInteraction.BaseStalkModeInteraction.CanStalk // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7fdb0
};

// Class DBDInteraction.BasicChargeableInteraction
// Size: 0x790 (Inherited: 0x760)
struct UBasicChargeableInteraction : UChargeableInteractionDefinition {
	bool AutoSpawnChargeableComponent; // 0x758(0x01)
	bool ResetProgressWhenStoppingInteraction; // 0x759(0x01)
	bool AutoAddCharge; // 0x75a(0x01)
	struct UChargeableComponent* _spawnedChargeable; // 0x760(0x08)
	struct FDBDTunableRowHandle _chargeTime; // 0x768(0x28)

	void OnRep_SpawnedChargeable(); // Function DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable // (Final|Native|Private) // @ game+0x4d80420
};

// Class DBDInteraction.BlessTotem
// Size: 0x780 (Inherited: 0x760)
struct UBlessTotem : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _blessHexTotemSpeedPenalty; // 0x758(0x28)

	struct ATotem* GetTotem(); // Function DBDInteraction.BlessTotem.GetTotem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d800b0
};

// Class DBDInteraction.CleanseTotem
// Size: 0x760 (Inherited: 0x760)
struct UCleanseTotem : UChargeableInteractionDefinition {
};

// Class DBDInteraction.CollectItemFromSearchableInteraction
// Size: 0x670 (Inherited: 0x660)
struct UCollectItemFromSearchableInteraction : UCollectItemInteraction {
	char pad_660[0x10]; // 0x660(0x10)
};

// Class DBDInteraction.CollectItemInCrateInteraction
// Size: 0x670 (Inherited: 0x660)
struct UCollectItemInCrateInteraction : UCollectItemInteraction {
	struct ASupplyCrateInteractable* _owningSupplyCrate; // 0x658(0x08)
	char pad_668[0x8]; // 0x668(0x08)
};

// Class DBDInteraction.DropItemInteraction
// Size: 0x630 (Inherited: 0x630)
struct UDropItemInteraction : UInteractionDefinition {

	struct ACollectable* GetItem(); // Function DBDInteraction.DropItemInteraction.GetItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7ffc0
};

// Class DBDInteraction.EscapeMapInteraction
// Size: 0x630 (Inherited: 0x630)
struct UEscapeMapInteraction : UInteractionDefinition {
};

// Class DBDInteraction.GeneratorDamageInteraction
// Size: 0x780 (Inherited: 0x760)
struct UGeneratorDamageInteraction : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _baseImmediateDamagePercent; // 0x758(0x28)

	void Authority_DamageGenerator(struct ADBDPlayer* damageBy, struct AGenerator* Generator); // Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x4d7fb20
};

// Class DBDInteraction.GeneratorRepairInteraction
// Size: 0x7e0 (Inherited: 0x760)
struct UGeneratorRepairInteraction : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _penaltyPerRepairPlayerCount[0x3]; // 0x758(0x78)
	char pad_7D8[0x8]; // 0x7d8(0x08)

	void SetIsObstructed(bool obstructed); // Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed // (Final|Native|Public|BlueprintCallable) // @ game+0x4d80440
	bool IsObstructed(); // Function DBDInteraction.GeneratorRepairInteraction.IsObstructed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80330
	bool IsInteractionPossibleInternal(struct ADBDPlayer* Player); // Function DBDInteraction.GeneratorRepairInteraction.IsInteractionPossibleInternal // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80290
	bool IsBeingRepaired(); // Function DBDInteraction.GeneratorRepairInteraction.IsBeingRepaired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80260
	struct AGenerator* GetOwningGenerator(); // Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80020
	float GetInteractionChargeSpeedMultiplier_Implementation(struct ADBDPlayer* Character); // Function DBDInteraction.GeneratorRepairInteraction.GetInteractionChargeSpeedMultiplier_Implementation // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7fe70
	void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, struct ADBDPlayer* Player, bool TriggerLoudNoise, enum class ESkillCheckCustomType Type); // Function DBDInteraction.GeneratorRepairInteraction.Authority_OnSkillCheckResponseAuthority // (Final|Native|Private) // @ game+0x4d7fbf0
};

// Class DBDInteraction.GeneratorToolboxRepairInteraction
// Size: 0x860 (Inherited: 0x7e0)
struct UGeneratorToolboxRepairInteraction : UGeneratorRepairInteraction {
	struct FText _interactionTextWhenEmpty; // 0x7d8(0x18)
	struct FDBDTunableRowHandle _repairSkillCheckDurationWhenEmpty; // 0x7f0(0x28)
	struct FDBDTunableRowHandle _repairSkillCheckChanceWhenEmpty; // 0x818(0x28)
	char pad_848[0x18]; // 0x848(0x18)

	bool HasChargedToolBox(struct ADBDPlayer* Player); // Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80140
	struct FString GetInteractionTextWhenEmpty(); // Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7ff10
};

// Class DBDInteraction.HealInteraction
// Size: 0x760 (Inherited: 0x760)
struct UHealInteraction : UChargeableInteractionDefinition {

	struct ACamperPlayer* GetTargetSurvivor(); // Function DBDInteraction.HealInteraction.GetTargetSurvivor // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80080
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, struct AActor* chargeInstigator, bool wasCoop, float DeltaTime); // Function DBDInteraction.HealInteraction.Authority_OnChargeApplied // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDInteraction.HookSurvivorDefinition
// Size: 0x7a0 (Inherited: 0x760)
struct UHookSurvivorDefinition : UChargeableInteractionDefinition {
	struct ACamperPlayer* _survivorBeingHooked; // 0x758(0x08)
	float _smallestScreamTime; // 0x760(0x04)
	char pad_76C[0x34]; // 0x76c(0x34)

	struct AMeatHook* GetMeatHook(); // Function DBDInteraction.HookSurvivorDefinition.GetMeatHook // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d7fff0
};

// Class DBDInteraction.InstallBrandNewPartInteraction
// Size: 0x8b0 (Inherited: 0x860)
struct UInstallBrandNewPartInteraction : UGeneratorToolboxRepairInteraction {
	float _permanentProgressPercent; // 0x858(0x04)
	float _existingSkillCheckDelay; // 0x85c(0x04)
	struct FText _repairToolboxText; // 0x860(0x18)
	char pad_880[0x30]; // 0x880(0x30)

	void Multicast_OnTriggerSkillCheck(struct ADBDPlayer* Player); // Function DBDInteraction.InstallBrandNewPartInteraction.Multicast_OnTriggerSkillCheck // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d80390
};

// Class DBDInteraction.ItemCraftInteraction
// Size: 0x650 (Inherited: 0x630)
struct UItemCraftInteraction : UInteractionDefinition {
	struct FName _attachToSocketName; // 0x630(0x0c)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct ACollectable* _collectableClass; // 0x640(0x08)
	char pad_648[0x8]; // 0x648(0x08)
};

// Class DBDInteraction.LinkedVomitInteraction
// Size: 0x780 (Inherited: 0x760)
struct ULinkedVomitInteraction : UChargeableInteractionDefinition {
	char pad_760[0x20]; // 0x760(0x20)

	bool IsVomiting(); // Function DBDInteraction.LinkedVomitInteraction.IsVomiting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80360
	struct UVomitStateComponent* GetVomitStateComponent(); // Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d800e0
};

// Class DBDInteraction.LockerFakeEnterInteraction
// Size: 0x690 (Inherited: 0x660)
struct ULockerFakeEnterInteraction : UBaseLockerInteraction {
	float _lockerInteractionBlockTime; // 0x660(0x04)
	char pad_664[0x4]; // 0x664(0x04)
	struct FDBDTunableRowHandle _fakeEnterLoudNoiseRange; // 0x668(0x28)
};

// Class DBDInteraction.SearchChestInteractionBase
// Size: 0x780 (Inherited: 0x760)
struct USearchChestInteractionBase : UChargeableInteractionDefinition {
	bool _handleCompletionScoreEvents; // 0x758(0x01)
	struct FGameplayTag _searchableCompleteContributionPercentTag; // 0x75c(0x0c)
	bool _scoreEventFired; // 0x768(0x01)
	char pad_76E[0x2]; // 0x76e(0x02)
	struct ASearchable* _owningChest; // 0x770(0x08)
	bool _onLastInteractionWasComplete; // 0x778(0x01)
	char pad_779[0x7]; // 0x779(0x07)

	void FireChestScoreEvent(struct ADBDPlayer* Player); // Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent // (Final|Native|Private|BlueprintCallable) // @ game+0x4d7fde0
};

// Class DBDInteraction.OpenChestInteraction
// Size: 0x7a0 (Inherited: 0x780)
struct UOpenChestInteraction : USearchChestInteractionBase {
	struct FGameplayTag _camperSearchablePercentTag; // 0x780(0x0c)
	char pad_78C[0x4]; // 0x78c(0x04)
	struct UAnimSequence* _successExitTimeAnimSequenceReference; // 0x790(0x08)
	float _startTime; // 0x798(0x04)
	char pad_79C[0x4]; // 0x79c(0x04)
};

// Class DBDInteraction.OpenEscapeInteraction
// Size: 0x770 (Inherited: 0x760)
struct UOpenEscapeInteraction : UChargeableInteractionDefinition {
	struct AEscapeDoor* _escapeDoor; // 0x758(0x08)
	struct FName _jointCrankTargetName; // 0x760(0x0c)
};

// Class DBDInteraction.OpenHatchInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct UOpenHatchInteraction : UChargeableInteractionDefinition {
	float SnapToEscapeLocationDuration; // 0x758(0x04)
	struct FAnimationMontageDescriptor InteractionStoppedMontage; // 0x760(0x20)
	struct FAnimationMontageDescriptor InteractionSucceedMontage; // 0x780(0x20)
	char pad_7A4[0xc]; // 0x7a4(0x0c)
};

// Class DBDInteraction.PalletPullUpInteraction
// Size: 0x770 (Inherited: 0x760)
struct UPalletPullUpInteraction : UChargeableInteractionDefinition {
	enum class EPalletSide _side; // 0x758(0x01)
	struct APallet* _owningPallet; // 0x760(0x08)
	char pad_769[0x7]; // 0x769(0x07)
};

// Class DBDInteraction.SacrificeSurvivorInteraction
// Size: 0x630 (Inherited: 0x630)
struct USacrificeSurvivorInteraction : UInteractionDefinition {
};

// Class DBDInteraction.SearchOpenedChestInteraction
// Size: 0x780 (Inherited: 0x780)
struct USearchOpenedChestInteraction : USearchChestInteractionBase {
};

// Class DBDInteraction.SelfUnhook
// Size: 0x820 (Inherited: 0x760)
struct USelfUnhook : UChargeableInteractionDefinition {
	struct FAnimationMontageDescriptor _selfUnhookMontage; // 0x758(0x20)
	struct FString _guaranteedUnhookAttemptText; // 0x778(0x10)
	struct FDBDTunableRowHandle _enduranceEffectDuration; // 0x788(0x28)
	struct FDBDTunableRowHandle _movementSpeedBonusDuration; // 0x7b0(0x28)
	struct UStatusEffect* _enduranceEffectClass; // 0x7d8(0x08)
	struct UStatusEffect* _movementSpeedBonusEffectClass; // 0x7e0(0x08)
	char pad_7F0[0x30]; // 0x7f0(0x30)
};

// Class DBDInteraction.SetTrapInteraction
// Size: 0x7c0 (Inherited: 0x760)
struct USetTrapInteraction : UChargeableInteractionDefinition {
	struct FSocketOrBoneCache _dropSocket; // 0x758(0x60)
};

// Class DBDInteraction.SnuffTotem
// Size: 0x640 (Inherited: 0x630)
struct USnuffTotem : UInteractionDefinition {
	float _slasherFacingTolerance; // 0x630(0x04)
	char pad_634[0xc]; // 0x634(0x0c)
};

// Class DBDInteraction.ThrowInteraction
// Size: 0x770 (Inherited: 0x760)
struct UThrowInteraction : UChargeableInteractionDefinition {
	struct UCurveFloat* _throwCancelledSpeedCurve; // 0x758(0x08)
	float _throwCancellationExitTime; // 0x760(0x04)
	char pad_76C[0x4]; // 0x76c(0x04)

	void InitThrowCancellationExitTime(float value); // Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime // (Final|Native|Protected|BlueprintCallable) // @ game+0x4d801e0
	bool HasCancelledThrow(); // Function DBDInteraction.ThrowInteraction.HasCancelledThrow // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d80110
};

// Class DBDInteraction.TrapInteractableInteraction
// Size: 0x640 (Inherited: 0x630)
struct UTrapInteractableInteraction : UInteractionDefinition {
	struct AInteractable* _owningInteractable; // 0x630(0x08)
	char pad_638[0x8]; // 0x638(0x08)
};

// Class DBDInteraction.Unhook
// Size: 0x820 (Inherited: 0x760)
struct UUnhook : UChargeableInteractionDefinition {
	struct TArray<struct USceneComponent*> _snapPoints; // 0x758(0x10)
	struct FDBDTunableRowHandle _unhookLoudNoiseRange; // 0x768(0x28)
	struct FDBDTunableRowHandle _enduranceEffectDuration; // 0x790(0x28)
	struct FDBDTunableRowHandle _movementSpeedBonusDuration; // 0x7b8(0x28)
	struct UStatusEffect* _enduranceEffectClass; // 0x7e0(0x08)
	struct UStatusEffect* _movementSpeedBonusEffectClass; // 0x7e8(0x08)
	struct UStatusEffect* _survivorRecentlyUnhookedEffectClass; // 0x7f0(0x08)
	struct ADBDPlayer* _unhookingPlayer; // 0x800(0x08)
	float _hookedCharacterSnapTime; // 0x808(0x04)
	char pad_80C[0x4]; // 0x80c(0x04)
	struct ACamperPlayer* _playerBeingUnhooked; // 0x810(0x08)
	char pad_818[0x8]; // 0x818(0x08)
};

// Class DBDInteraction.UnhookReplicationComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UUnhookReplicationComponent : UActorComponent {

	void Multicast_SetPlayerBeingUnhooked(struct UUnhook* unhookInteraction, struct ACamperPlayer* playerBeingUnhooked); // Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa6f70
};

