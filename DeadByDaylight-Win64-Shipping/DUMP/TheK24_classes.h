// Class TheK24.ActivateK24PowerInteraction
// Size: 0x7f0 (Inherited: 0x760)
struct UActivateK24PowerInteraction : UChargeableInteractionDefinition {
	char pad_760[0x8]; // 0x760(0x08)
	struct FDBDTunableRowHandle _interactionViewPitchMax; // 0x768(0x28)
	struct FDBDTunableRowHandle _interactionViewPitchMin; // 0x790(0x28)
	struct FDBDTunableRowHandle _maximumTimeToTriggerRegularAttack; // 0x7b8(0x28)
	char pad_7E0[0x10]; // 0x7e0(0x10)

	void SetK24Power(struct AK24Power* K24Power); // Function TheK24.ActivateK24PowerInteraction.SetK24Power // (Final|Native|Public|BlueprintCallable) // @ game+0x579f940
};

// Class TheK24.Addon_K24_04
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAddon_K24_04 : UOnEventBaseAddon {
	float _effectTime; // 0x2c8(0x04)
	struct FLinearColor OutlineColor; // 0x2cc(0x10)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class TheK24.Addon_K24_19
// Size: 0x2e0 (Inherited: 0x2d8)
struct UAddon_K24_19 : UImposeStatusEffectOnEventAddon {
	struct AZombieEscapeDoorPointsActor* _zombieEscapeDoorPointsActor; // 0x2d8(0x08)
};

// Class TheK24.AISkill_FindCollectable_SupplyCrate
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAISkill_FindCollectable_SupplyCrate : UAISkill_FindCollectable_Searchable {
	struct FAITunableParameter UrgencyGoalWeight; // 0x1b8(0x10)
	struct FAITunableParameter OpenedWeightMultiplier; // 0x1c8(0x10)
};

// Class TheK24.AISkill_InteractionUseItem_Serum
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_Serum : UAISkill_InteractionUseItem {
};

// Class TheK24.BiteTheBullet
// Size: 0x3d8 (Inherited: 0x3c8)
struct UBiteTheBullet : UPerk {
	struct UBiteTheBulletEffect* _effectClass; // 0x3c8(0x08)
	struct ADBDPlayer* _server_healTarget; // 0x3d0(0x08)
};

// Class TheK24.BiteTheBulletEffect
// Size: 0x3c0 (Inherited: 0x3b8)
struct UBiteTheBulletEffect : UBaseLingeringStatusEffect {
	char pad_3B8[0x8]; // 0x3b8(0x08)
};

// Class TheK24.BlastMine
// Size: 0x468 (Inherited: 0x448)
struct UBlastMine : UGeneratorTrapPerk {
	struct UGeneratorBlastMinePlacerComponent* _blastMinePlacerClass; // 0x448(0x08)
	struct ABlastMineFirecracker* _blastMineFirecrackerClass; // 0x450(0x08)
	struct ABlastMineFirecracker* _blastMine; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)

	void TrapAttachedToGenerator_Cosmetic(struct AGenerator* trappedGenerator); // Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ThrowBubbleIndicator_Cosmetic(struct FTransform Location); // Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic // (BlueprintCosmetic|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Client_TrapActivatedLoudNotification(struct FTransform Location); // Function TheK24.BlastMine.Client_TrapActivatedLoudNotification // (Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient) // @ game+0x579f570
};

// Class TheK24.BlastMineFirecracker
// Size: 0x410 (Inherited: 0x390)
struct ABlastMineFirecracker : AFirecracker {
	char pad_390[0x30]; // 0x390(0x30)
	struct FMulticastInlineDelegate OnTrapRemovedBlueprintEvent; // 0x3c0(0x10)
	struct AGenerator* _trappedGenerator; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct USimpleStateMachine* _stateMachine; // 0x3e0(0x08)
	struct UBlastMineKickSensor* _kickSensor; // 0x3e8(0x08)
	struct UBlastMineVisibilityController* _visibilityController; // 0x3f0(0x08)
	float _lifetime; // 0x3f8(0x04)
	int32_t _authority_ExplosionCount; // 0x3fc(0x04)
	struct FName _authority_CurrentState; // 0x400(0x0c)
	char pad_40C[0x4]; // 0x40c(0x04)

	void OnTrapRemovedBlueprintEvent__DelegateSignature(enum class EBlastMineRemovedReason removedReason); // DelegateFunction TheK24.BlastMineFirecracker.OnTrapRemovedBlueprintEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnRep_Lifetime(); // Function TheK24.BlastMineFirecracker.OnRep_Lifetime // (Final|Native|Private) // @ game+0x579f920
	void OnRep_AuthorityExplosionCount(); // Function TheK24.BlastMineFirecracker.OnRep_AuthorityExplosionCount // (Final|Native|Private) // @ game+0x579f8c0
	void OnRep_AuthorityCurrentState(); // Function TheK24.BlastMineFirecracker.OnRep_AuthorityCurrentState // (Final|Native|Private) // @ game+0x579f8a0
};

// Class TheK24.BlastMineKickSensor
// Size: 0x118 (Inherited: 0xb8)
struct UBlastMineKickSensor : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FFloatRange _kickChargeTriggerRange; // 0xd0(0x10)
	struct ASlasherPlayer* _kickingKiller; // 0xe0(0x08)
	struct UChargeableComponent* _kickGeneratorChargeable; // 0xe8(0x08)
	struct AGenerator* _generator; // 0xf0(0x08)
	char pad_F8[0x20]; // 0xf8(0x20)

	void Authority_OnKickChargeablePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheK24.BlastMineKickSensor.Authority_OnKickChargeablePercentChanged // (Final|Native|Private) // @ game+0x579f2b0
};

// Class TheK24.BlastMineState_Explode
// Size: 0x70 (Inherited: 0x48)
struct UBlastMineState_Explode : USimpleStateMachineBaseState {
	char pad_48[0x28]; // 0x48(0x28)
};

// Class TheK24.BlastMineTransition_ExplodeToHidden
// Size: 0x50 (Inherited: 0x50)
struct UBlastMineTransition_ExplodeToHidden : USimpleStateMachineBaseTransition {
};

// Class TheK24.BlastMineState_Hidden
// Size: 0x60 (Inherited: 0x48)
struct UBlastMineState_Hidden : USimpleStateMachineBaseState {
	char pad_48[0x18]; // 0x48(0x18)
};

// Class TheK24.BlastMineTransition_HiddenToSpawned
// Size: 0x50 (Inherited: 0x50)
struct UBlastMineTransition_HiddenToSpawned : USimpleStateMachineBaseTransition {
};

// Class TheK24.BlastMineState_Spawned
// Size: 0xa0 (Inherited: 0x48)
struct UBlastMineState_Spawned : USimpleStateMachineBaseState {
	char pad_48[0x58]; // 0x48(0x58)
};

// Class TheK24.BlastMineTransition_SpawnedToExplode
// Size: 0x50 (Inherited: 0x50)
struct UBlastMineTransition_SpawnedToExplode : USimpleStateMachineBaseTransition {
};

// Class TheK24.BlastMineTransition_SpawnedToHidden
// Size: 0x50 (Inherited: 0x50)
struct UBlastMineTransition_SpawnedToHidden : USimpleStateMachineBaseTransition {
};

// Class TheK24.BlastMineVisibilityController
// Size: 0x1d0 (Inherited: 0xb8)
struct UBlastMineVisibilityController : UActorComponent {
	char pad_B8[0x70]; // 0xb8(0x70)
	struct TSet<struct UFXSystemComponent*> _systems; // 0x128(0x50)
	struct TSet<struct UMeshComponent*> _meshes; // 0x178(0x50)
	char pad_1C8[0x8]; // 0x1c8(0x08)

	bool IsVisible(); // Function TheK24.BlastMineVisibilityController.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x579f6c0
	void AddMeshComponent(struct UMeshComponent* MeshComponent); // Function TheK24.BlastMineVisibilityController.AddMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x579f190
	void AddFXSystem(struct UFXSystemComponent* System); // Function TheK24.BlastMineVisibilityController.AddFXSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x579f100
};

// Class TheK24.BlindZombieFlashlightableLightingStrategy
// Size: 0x40 (Inherited: 0x40)
struct UBlindZombieFlashlightableLightingStrategy : UFlashlightablePointsLightingStrategy {
};

// Class TheK24.BTTask_MoveToAbortIfStuck
// Size: 0xd8 (Inherited: 0xc0)
struct UBTTask_MoveToAbortIfStuck : UBTTask_MoveTo {
	char pad_C0[0x4]; // 0xc0(0x04)
	float _deltaConsideredStuck; // 0xc4(0x04)
	char pad_C8[0xc]; // 0xc8(0x0c)
	float _maxTimeStuck; // 0xd4(0x04)
};

// Class TheK24.ChangeZombieStateBTTask
// Size: 0xb8 (Inherited: 0xb0)
struct UChangeZombieStateBTTask : UBTTask_BlueprintBase {
	enum class EZombieState _zombieState; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class TheK24.ContaminationSerumCollectable
// Size: 0x528 (Inherited: 0x510)
struct AContaminationSerumCollectable : ABaseCamperCollectable {
	char pad_510[0x18]; // 0x510(0x18)
};

// Class TheK24.ContaminationSubAnimInstance
// Size: 0x5c0 (Inherited: 0x550)
struct UContaminationSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isContaminated; // 0x550(0x01)
	bool _isInjectingSerumSelf; // 0x551(0x01)
	bool _isInjectingSerumOther; // 0x552(0x01)
	bool _isBeingInjectedWithSerum; // 0x553(0x01)
	bool _isBeingHealed; // 0x554(0x01)
	bool _isFirstContaminationHit; // 0x555(0x01)
	bool _triggerCough; // 0x556(0x01)
	char pad_557[0x1]; // 0x557(0x01)
	float _timeBetweenCough; // 0x558(0x04)
	bool _isIdle; // 0x55c(0x01)
	bool _isCrouched; // 0x55d(0x01)
	bool _isInsideCloset; // 0x55e(0x01)
	bool _isInteracting; // 0x55f(0x01)
	bool _isHoldingAimItem; // 0x560(0x01)
	bool _isCrawling; // 0x561(0x01)
	bool _isHooked; // 0x562(0x01)
	bool _isDead; // 0x563(0x01)
	bool _isFrightScreaming; // 0x564(0x01)
	bool _isHoldingSmallItem; // 0x565(0x01)
	bool _isUsingAimItem; // 0x566(0x01)
	bool _isHoldingHandleItem; // 0x567(0x01)
	bool _isInjured; // 0x568(0x01)
	bool _isCarried; // 0x569(0x01)
	enum class EInteractionAnimation _interactionType; // 0x56a(0x01)
	char pad_56B[0x55]; // 0x56b(0x55)
};

// Class TheK24.Counterforce
// Size: 0x3f0 (Inherited: 0x3c8)
struct UCounterforce : UPerk {
	char pad_3C8[0x4]; // 0x3c8(0x04)
	float _totemAuraVisibleDuration[0x3]; // 0x3cc(0x0c)
	float _startingTotemCleanseSpeedBonus[0x3]; // 0x3d8(0x0c)
	float _stackableTotemCleanseSpeedBonus[0x3]; // 0x3e4(0x0c)

	void Multicast_ShowTotemAura(struct ATotem* Totem); // Function TheK24.Counterforce.Multicast_ShowTotemAura // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceef10
};

// Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_ZombiePatrolAreaPoint : UEnvQueryContext {
};

// Class TheK24.Eruption
// Size: 0x418 (Inherited: 0x3c8)
struct UEruption : UPerk {
	struct TArray<struct AGenerator*> _server_affectedGenerators; // 0x3c8(0x10)
	bool _isPerkEnabled; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float _generatorRegressPercentage[0x3]; // 0x3dc(0x0c)
	float _survivorImposedStatusEffectDuration[0x3]; // 0x3e8(0x0c)
	float _perkCooldownDuration[0x3]; // 0x3f4(0x0c)
	float _screamRevealLocationDuration; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct UStatusEffect* _survivorEffectClass; // 0x408(0x08)
	char pad_410[0x8]; // 0x410(0x08)

	void Multicast_TriggerPerk(struct TArray<struct AGenerator*> explodingGenerators); // Function TheK24.Eruption.Multicast_TriggerPerk // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4cf4040
	void Multicast_HighlightGenerator(struct AGenerator* Generator); // Function TheK24.Eruption.Multicast_HighlightGenerator // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55198a0
	float GetSurvivorImposedStatusEffectDurationAtLevel(); // Function TheK24.Eruption.GetSurvivorImposedStatusEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd750
	float GetScreamRevealLocationDuration(); // Function TheK24.Eruption.GetScreamRevealLocationDuration // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x579f690
	float GetGeneratorRegressPercentageAtLevel(); // Function TheK24.Eruption.GetGeneratorRegressPercentageAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf5600
	void Cosmetic_OnGeneratorHighlightStart(struct AGenerator* highlightedGenerator); // Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnGeneratorHighlightEnd(struct AGenerator* highlightedGenerator); // Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK24.EruptionIconStrategy
// Size: 0x38 (Inherited: 0x38)
struct UEruptionIconStrategy : UBasePerkIconStrategy {
};

// Class TheK24.Flashbang
// Size: 0x3f0 (Inherited: 0x3c8)
struct UFlashbang : UPerk {
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct AGenerator* _generatorBeingRepaired; // 0x3d8(0x08)
	float _generatorsRepairTargetProgression; // 0x3e0(0x04)
	float _generatorRepairPercentToCraftFlashbang[0x3]; // 0x3e4(0x0c)

	void OnRep_GeneratorsRepairProgress(); // Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress // (Final|Native|Private) // @ game+0x579f900
	float GetGeneratorRepairPercentToCraftFlashbangAtLevel(); // Function TheK24.Flashbang.GetGeneratorRepairPercentToCraftFlashbangAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd660
	void Cosmetic_OnGeneratorRepairProgressionTargetAchieved(); // Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Client_OnGeneratorRepairProgressionTargetAchieved(); // Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved // (Final|Net|Native|Event|Private|NetClient) // @ game+0x4ceeef0
	void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, struct AActor* chargeInstigator, bool wasCoop, float DeltaTime); // Function TheK24.Flashbang.Authority_OnRepairProgressApplied // (Final|Native|Private) // @ game+0x579f3c0
};

// Class TheK24.GeneratorBlastMinePlacerComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UGeneratorBlastMinePlacerComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	float _mineRelativeHeightFromGenerator; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct ABlastMineFirecracker* _blastMine; // 0xd8(0x08)

	void OnRep_BlastMine(); // Function TheK24.GeneratorBlastMinePlacerComponent.OnRep_BlastMine // (Final|Native|Private) // @ game+0x579f8e0
};

// Class TheK24.Hysteria
// Size: 0x440 (Inherited: 0x3c8)
struct UHysteria : UPerk {
	float _obliviousEffectDuration[0x3]; // 0x3c8(0x0c)
	float _perkCooldownDuration[0x3]; // 0x3d4(0x0c)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct UHysteriaObliviousEffect* _obliviousEffectClass; // 0x3e8(0x08)
	struct TMap<struct ACamperPlayer*, struct UHysteriaObliviousEffect*> _obliviousEffectPerSurvivorMap; // 0x3f0(0x50)

	float GetPerkCooldownDurationAtLevel(); // Function TheK24.Hysteria.GetPerkCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetObliviousEffectDurationAtLevel(); // Function TheK24.Hysteria.GetObliviousEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK24.HysteriaObliviousEffect
// Size: 0x360 (Inherited: 0x360)
struct UHysteriaObliviousEffect : UTimedObliviousEffect {
};

// Class TheK24.InClosetFlashbangItemCraftInteraction
// Size: 0x650 (Inherited: 0x650)
struct UInClosetFlashbangItemCraftInteraction : UItemCraftInteraction {
};

// Class TheK24.IncreaseZombiesSpeedStatusEffect
// Size: 0x358 (Inherited: 0x350)
struct UIncreaseZombiesSpeedStatusEffect : UStatusEffect {
	float _zombieSpeedAdditive; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
};

// Class TheK24.InjectSerumInteraction
// Size: 0x820 (Inherited: 0x760)
struct UInjectSerumInteraction : UChargeableInteractionDefinition {
	struct FTunableStat _injectSerumKillerInstinctTime; // 0x758(0x80)
	struct FGameplayTag _scoreEvent; // 0x7e0(0x0c)
	char pad_7EC[0x4]; // 0x7ec(0x04)
	struct FDBDTunableRowHandle _serumApplyHeal; // 0x7f0(0x28)
	char pad_818[0x8]; // 0x818(0x08)

	void OnSurvivorCured_Cosmetic(); // Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK24.InjectSerumInteraction.OnKillerSet // (Final|Native|Private) // @ game+0x579f810
	struct ACamperPlayer* GetInjectionTarget(); // Function TheK24.InjectSerumInteraction.GetInjectionTarget // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x579f660
	void Authority_CureSurvivor(struct ACamperPlayer* CamperPlayer); // Function TheK24.InjectSerumInteraction.Authority_CureSurvivor // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x579f220
};

// Class TheK24.InjectSerumOther
// Size: 0x820 (Inherited: 0x820)
struct UInjectSerumOther : UInjectSerumInteraction {
};

// Class TheK24.InjectSerumSelf
// Size: 0x820 (Inherited: 0x820)
struct UInjectSerumSelf : UInjectSerumInteraction {
};

// Class TheK24.K24AnimInstance
// Size: 0x630 (Inherited: 0x610)
struct UK24AnimInstance : UKillerAnimInstance {
	bool _isInPowerMode; // 0x610(0x01)
	bool _isChargingPower; // 0x611(0x01)
	bool _isK24PowerAttacking; // 0x612(0x01)
	bool _isRequestingPowerAttack; // 0x613(0x01)
	int32_t _powerLevel; // 0x614(0x04)
	char pad_618[0x18]; // 0x618(0x18)

	void OnKillerPowerLevelChanged(int32_t powerlevel); // Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged // (Final|Native|Private) // @ game+0x579f780
};

// Class TheK24.K24CharacterFXComponent
// Size: 0x110 (Inherited: 0xb8)
struct UK24CharacterFXComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPowerLevelChangedFx; // 0xb8(0x10)
	struct FMulticastInlineDelegate Local_OnKillerHitZombie; // 0xc8(0x10)
	struct FMulticastInlineDelegate Local_OnKillerContaminatedSurvivor; // 0xd8(0x10)
	char pad_E8[0x28]; // 0xe8(0x28)

	void Local_OnKillerPowerLevelChanged(int32_t powerlevel); // Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged // (Final|Native|Private) // @ game+0x579f6f0
};

// Class TheK24.K24CheatComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UK24CheatComponent : UActorComponent {
	struct AZombiesManagement* _zombieManagementClass; // 0xb8(0x08)
	struct AZombiesManagement* _zombiesManagement; // 0xc0(0x08)

	void DBD_TeleportZombiesTo(float X, float Y, float Z); // Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo // (Final|Exec|Native|Public) // @ game+0x54c7b10
	void DBD_K24ZombieFall(float Zvalue); // Function TheK24.K24CheatComponent.DBD_K24ZombieFall // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_K24StopAllZombies(); // Function TheK24.K24CheatComponent.DBD_K24StopAllZombies // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_K24StartAllZombies(); // Function TheK24.K24CheatComponent.DBD_K24StartAllZombies // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_K24SpawnZombieOnKiller(); // Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller // (Final|Exec|Native|Public) // @ game+0x57a3030
	void DBD_K24SetPowerLevelPoints(float value); // Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_K24SetContaminationOnSurvivor(bool value); // Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_K24ComeToMeMyZombies(); // Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies // (Final|Exec|Native|Public) // @ game+0x4032ad0
};

// Class TheK24.K24PounceAttack
// Size: 0x390 (Inherited: 0x390)
struct UK24PounceAttack : UPounceAttack {

	void Server_HitZombie(struct AZombieCharacter* zombie, float TargetLocationTimestamp); // Function TheK24.K24PounceAttack.Server_HitZombie // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x57a3520
};

// Class TheK24.K24Power
// Size: 0x8f0 (Inherited: 0x4c8)
struct AK24Power : ACollectable {
	char pad_4C8[0x88]; // 0x4c8(0x88)
	struct FDBDTunableRowHandle _powerWalkSpeed; // 0x550(0x28)
	struct FDBDTunableRowHandle _powerWalkSpeedLevel3; // 0x578(0x28)
	struct FDBDTunableRowHandle _normalWalkSpeed; // 0x5a0(0x28)
	struct FDBDTunableRowHandle _powerMouseYawScale; // 0x5c8(0x28)
	struct FDBDTunableRowHandle _powerYawAdjustTime; // 0x5f0(0x28)
	struct FDBDTunableRowHandle _powerGamePadYawScale; // 0x618(0x28)
	struct UChargeableComponent* _activateK24PowerCharge; // 0x640(0x08)
	struct FDBDTunableRowHandle _activateK24PowerSecondsToCharge; // 0x648(0x28)
	struct UCurveFloat* _activatePowerChargeSpeedCurve; // 0x670(0x08)
	struct UCurveFloat* _activatePowerChargeLvl3SpeedCurve; // 0x678(0x08)
	struct UCurveFloat* _playedPowerChargeSpeedCurve; // 0x680(0x08)
	struct UInteractionDefinition* _k24PowerCooldownInteraction; // 0x688(0x08)
	struct FDBDTunableRowHandle _whipLengthLevel1; // 0x690(0x28)
	struct FDBDTunableRowHandle _whipLengthLevel2; // 0x6b8(0x28)
	struct FDBDTunableRowHandle _whipLengthLevel3; // 0x6e0(0x28)
	struct USurvivorContaminationComponent* _contaminationComponentBP; // 0x708(0x08)
	struct FTunableStat _powerChargeSurvivorContaminatedPoint; // 0x710(0x80)
	struct FTunableStat _powerChargeZombieKilledPoint; // 0x790(0x80)
	struct FTunableStat _powerChargeSurvivorHitPoint; // 0x810(0x80)
	float _powerLevelPoints; // 0x890(0x04)
	char pad_894[0x4]; // 0x894(0x04)
	struct FDBDTunableRowHandle _powerLevelPointsToLevel2; // 0x898(0x28)
	struct FDBDTunableRowHandle _powerLevelPointsToLevel3; // 0x8c0(0x28)
	char pad_8E8[0x8]; // 0x8e8(0x08)

	void WhipAttackStart_Cosmetic(); // Function TheK24.K24Power.WhipAttackStart_Cosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void WhipAttackMove_Cosmetic(struct FVector whipStartLocation, struct FVector whipEndLocation, bool isFirstRayCast); // Function TheK24.K24Power.WhipAttackMove_Cosmetic // (BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void WhipAttackHit_Cosmetic(struct FVector whipStartLocation, struct FVector impactPointLocation, struct FVector whipEndLocation, bool isFirstHit, struct FVector ImpactNormal, struct FName phyMaterial, bool hitACharacter); // Function TheK24.K24Power.WhipAttackHit_Cosmetic // (BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void WhipAttackEnd_Cosmetic(); // Function TheK24.K24Power.WhipAttackEnd_Cosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Server_PowerDestroyPallet(struct APallet* Pallet); // Function TheK24.K24Power.Server_PowerDestroyPallet // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57a3760
	void Server_PowerDestroyBreakable(struct ABreakableBase* breakable); // Function TheK24.K24Power.Server_PowerDestroyBreakable // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57a36d0
	void Server_KillAZombie(struct AZombieCharacter* zombie, enum class EAttackType attackType); // Function TheK24.K24Power.Server_KillAZombie // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57a3600
	void PowerHitStateEnd_Cosmetic(struct FVector whipStartLocation, struct FVector whipEndLocation); // Function TheK24.K24Power.PowerHitStateEnd_Cosmetic // (BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void PowerCooldownEnd_Cosmetic(); // Function TheK24.K24Power.PowerCooldownEnd_Cosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_PowerLevelPoints(); // Function TheK24.K24Power.OnRep_PowerLevelPoints // (Final|Native|Private) // @ game+0x57a3390
	void OnPowerStop_Cosmetic(); // Function TheK24.K24Power.OnPowerStop_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnPowerStartCharge_Cosmetic(); // Function TheK24.K24Power.OnPowerStartCharge_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnPowerLevelChanged_Cosmetic(int32_t powerlevel); // Function TheK24.K24Power.OnPowerLevelChanged_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_PowerDestroyPallet(struct APallet* Pallet); // Function TheK24.K24Power.Multicast_PowerDestroyPallet // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57a31d0
	void Multicast_PowerDestroyBreakable(struct ABreakableBase* breakable); // Function TheK24.K24Power.Multicast_PowerDestroyBreakable // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d5aa80
	bool IsInPower(); // Function TheK24.K24Power.IsInPower // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a3180
	float GetWhipLength(); // Function TheK24.K24Power.GetWhipLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a3080
	int32_t GetPowerLevel(); // Function TheK24.K24Power.GetPowerLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a3050
	void Authority_OnSurvivorContaminated(enum class EContaminator contaminator); // Function TheK24.K24Power.Authority_OnSurvivorContaminated // (Final|Native|Public) // @ game+0x57a2d40
};

// Class TheK24.K24PowerAnimInstance
// Size: 0x420 (Inherited: 0x2c0)
struct UK24PowerAnimInstance : UAnimInstance {
	struct ASlasherPlayer* _owningKiller; // 0x2c0(0x08)
	bool _isInPowerMode; // 0x2c8(0x01)
	bool _isChargingPower; // 0x2c9(0x01)
	bool _isK24PowerAttacking; // 0x2ca(0x01)
	bool _isRequestingPowerAttack; // 0x2cb(0x01)
	float _tentacleLength; // 0x2cc(0x04)
	bool _isFirstPersonView; // 0x2d0(0x01)
	enum class EAttackSubstate _attackSubstate; // 0x2d1(0x01)
	bool _isIntroCompleted; // 0x2d2(0x01)
	bool _isLevelReadyToPlay; // 0x2d3(0x01)
	int32_t _powerLevel; // 0x2d4(0x04)
	float _forwardVelocity; // 0x2d8(0x04)
	float _lateralVelocity; // 0x2dc(0x04)
	bool _isIdle; // 0x2e0(0x01)
	bool _isKilling; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct UAnimSequence* _swingIdleTPVSequences[0x3]; // 0x2e8(0x18)
	struct UAnimSequence* _wipeIdleTPVSequences[0x3]; // 0x300(0x18)
	struct UAnimSequence* _missIdleTPVSequences[0x3]; // 0x318(0x18)
	struct UAnimSequence* _bowIdleTPVSequences[0x3]; // 0x330(0x18)
	struct UAnimSequence* _swingIdleTPVSequence; // 0x348(0x08)
	struct UAnimSequence* _wipeIdleTPVSequence; // 0x350(0x08)
	struct UAnimSequence* _missIdleTPVSequence; // 0x358(0x08)
	struct UAnimSequence* _bowIdleTPVSequence; // 0x360(0x08)
	struct UAnimSequence* _swingLocoTPVSequence; // 0x368(0x08)
	struct UAnimSequence* _wipeLocoTPVSequence; // 0x370(0x08)
	struct UAnimSequence* _missLocoTPVSequence; // 0x378(0x08)
	struct UAnimSequence* _bowLocoTPVSequence; // 0x380(0x08)
	struct UAnimSequence* _swingFPVSequences[0x3]; // 0x388(0x18)
	struct UAnimSequence* _wipeFPVSequences[0x3]; // 0x3a0(0x18)
	struct UAnimSequence* _missFPVSequences[0x3]; // 0x3b8(0x18)
	struct UAnimSequence* _bowFPVSequences[0x3]; // 0x3d0(0x18)
	struct UAnimSequence* _swingFPVSequence; // 0x3e8(0x08)
	struct UAnimSequence* _wipeFPVSequence; // 0x3f0(0x08)
	struct UAnimSequence* _missFPVSequence; // 0x3f8(0x08)
	struct UAnimSequence* _bowFPVSequence; // 0x400(0x08)
	struct AK24Power* _k24Power; // 0x408(0x08)
	char pad_410[0x10]; // 0x410(0x10)

	void OnLevelReadyToPlay(); // Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x57a3310
	void OnKillerPowerLevelChanged(int32_t powerlevel); // Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged // (Final|Native|Private) // @ game+0x57a3280
	void OnIntroCompleted(); // Function TheK24.K24PowerAnimInstance.OnIntroCompleted // (Final|Native|Private) // @ game+0x57a3260
};

// Class TheK24.k24PowerCooldownInteraction
// Size: 0x680 (Inherited: 0x630)
struct Uk24PowerCooldownInteraction : UInteractionDefinition {
	struct FDBDTunableRowHandle _k24PowerCooldownTime; // 0x630(0x28)
	struct UCurveFloat* _cooldownSpeedCurve; // 0x658(0x08)
	struct UCurveFloat* _cooldownLvl3SpeedCurve; // 0x660(0x08)
	struct UCurveFloat* _playedCooldownSpeedCurve; // 0x668(0x08)
	char pad_670[0x10]; // 0x670(0x10)

	void SetK24Power(struct AK24Power* K24Power); // Function TheK24.k24PowerCooldownInteraction.SetK24Power // (Final|Native|Public|BlueprintCallable) // @ game+0x57a37f0
};

// Class TheK24.K24PowerPresentationItemProgressComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UK24PowerPresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct AK24Power* _k24Power; // 0xc0(0x08)

	void SetK24Power(struct AK24Power* K24Power); // Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power // (Final|Native|Public|BlueprintCallable) // @ game+0x549c400
};

// Class TheK24.K24SlashAttack
// Size: 0x390 (Inherited: 0x390)
struct UK24SlashAttack : UK24PounceAttack {
};

// Class TheK24.K24WhipAttack
// Size: 0x400 (Inherited: 0x390)
struct UK24WhipAttack : UPounceAttack {
	struct FDBDTunableRowHandle _attackSphereTraceRadius; // 0x390(0x28)
	struct FDBDTunableRowHandle _attackMinDistanceToObstruction; // 0x3b8(0x28)
	struct FVector _whipMovementFromOffset; // 0x3e0(0x0c)
	struct FVector _whipMovementToOffset; // 0x3ec(0x0c)
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void Server_HitBreakableOrZombie(); // Function TheK24.K24WhipAttack.Server_HitBreakableOrZombie // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x55b3f90
	void Server_ContaminatePlayer(struct ACamperPlayer* Target, float TargetLocationTimestamp); // Function TheK24.K24WhipAttack.Server_ContaminatePlayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57a3440
	void Client_ContaminationResult(struct ADBDPlayer* Target, bool IsValid); // Function TheK24.K24WhipAttack.Client_ContaminationResult // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x57a2f60
};

// Class TheK24.K24WhipAttackOpenSubstate
// Size: 0x138 (Inherited: 0x130)
struct UK24WhipAttackOpenSubstate : UPounceAttackOpenSubstate {
	struct UCurveFloat* _lvl3SpeedCurve; // 0x130(0x08)
};

// Class TheK24.K24WhipAttackHittingSubstate
// Size: 0x260 (Inherited: 0x1a0)
struct UK24WhipAttackHittingSubstate : UPounceAttackHittingSubstate {
	struct FDBDTunableRowHandle _attackSphereTraceRadius; // 0x1a0(0x28)
	struct FDBDTunableRowHandle _powerAttackBreakObjectLevel; // 0x1c8(0x28)
	struct FDBDTunableRowHandle _powerCanBreakObjectAfterAPlayerDamage; // 0x1f0(0x28)
	struct FVector _whipMovementFromOffset; // 0x218(0x0c)
	struct FVector _whipMovementToOffset; // 0x224(0x0c)
	struct UCurveFloat* _whipMovementCurve; // 0x230(0x08)
	struct UCurveFloat* _lvl3SpeedCurve; // 0x238(0x08)
	float _whipGroundDetectionOffset; // 0x240(0x04)
	char pad_244[0x1c]; // 0x244(0x1c)
};

// Class TheK24.K24WhipAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UK24WhipAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheK24.K24WhipAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UK24WhipAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheK24.K24WhipAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UK24WhipAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheK24.LethalPursuer
// Size: 0x3e0 (Inherited: 0x3c8)
struct ULethalPursuer : UPerk {
	float _survivorRevealDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _timedRevealEffect; // 0x3d8(0x08)

	void Server_ActivatePerk(); // Function TheK24.LethalPursuer.Server_ActivatePerk // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4ceeef0
	void Local_OnIntroCompleted(); // Function TheK24.LethalPursuer.Local_OnIntroCompleted // (Final|Native|Private) // @ game+0x57a31b0
	float GetSurvivorRevealDurationAtLevel(); // Function TheK24.LethalPursuer.GetSurvivorRevealDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK24.Resurgence
// Size: 0x3d8 (Inherited: 0x3c8)
struct UResurgence : UPerk {
	float _healRegainPercentage[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

// Class TheK24.RookieSpirit
// Size: 0x3d8 (Inherited: 0x3c8)
struct URookieSpirit : UPerk {
	int32_t _numberOfGreatSkillChecksOnGeneratorRepair; // 0x3c8(0x04)
	int32_t _numberOfGeneratorRepairGreatSkillChecksRequired[0x3]; // 0x3cc(0x0c)

	void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair(); // Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair // (Final|Native|Private) // @ game+0x57a3370
	void HandleGeneratorIsDamagedChanged(struct AGenerator* Generator, struct ADBDPlayer* Player); // Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged // (Final|Native|Private) // @ game+0x57a30b0
};

// Class TheK24.SupplyCrateOutlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xe0)
struct USupplyCrateOutlineUpdateStrategy : UDefaultOutlineUpdateStrategy {
};

// Class TheK24.SurvivorContaminationComponent
// Size: 0x208 (Inherited: 0xb8)
struct USurvivorContaminationComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FTagStateBool _isContaminated; // 0xd0(0x30)
	struct UChargeableComponent* _injectSerumChargeable; // 0x100(0x08)
	struct FDBDTunableRowHandle _injectSerumSecondsToCharge; // 0x108(0x28)
	struct UStatusEffect* _hinderedEffect; // 0x130(0x08)
	struct FTunableStat _contaminationHinderedSeconds; // 0x138(0x80)
	struct FDBDTunableRowHandle _contaminationHinderedValue; // 0x1b8(0x28)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct TArray<struct UInteractionDefinition*> _injectSerumInteractionsClasses; // 0x1e8(0x10)
	struct TArray<struct UInteractionDefinition*> _injectSerumInteractions; // 0x1f8(0x10)

	void OnRep_IsContaminated(); // Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated // (Final|Native|Private) // @ game+0x57a3350
	void OnRep_InjectSerumInteractions(); // Function TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions // (Final|Native|Private) // @ game+0x57a3330
	void OnContaminationCured_Cosmetic(); // Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnContaminated_SFX_Stinger_Cosmetic(); // Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnContaminated_Cosmetic(enum class EContaminator contaminator); // Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_OnContaminated_Cosmetic(enum class EContaminator contaminator); // Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x54c8350
	bool IsContaminated(); // Function TheK24.SurvivorContaminationComponent.IsContaminated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x54a18f0
};

// Class TheK24.TheK24Utilities
// Size: 0x30 (Inherited: 0x30)
struct UTheK24Utilities : UBlueprintFunctionLibrary {
};

// Class TheK24.ZombieAcquirePatrolAreaBTService
// Size: 0xa0 (Inherited: 0xa0)
struct UZombieAcquirePatrolAreaBTService : UBTService_BlueprintBase {
};

// Class TheK24.ZombieAcquireTargetBTService
// Size: 0xa0 (Inherited: 0xa0)
struct UZombieAcquireTargetBTService : UBTService_BlueprintBase {
};

// Class TheK24.ZombieAIController
// Size: 0x630 (Inherited: 0x340)
struct AZombieAIController : AAIController {
	char pad_340[0x18]; // 0x340(0x18)
	struct UBehaviorTree* _zombieBehaviorTree; // 0x358(0x08)
	struct UAIPerceptionComponent* _aiPerceptionComponent; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)
	struct TArray<struct ACamperPlayer*> _survivorInVision; // 0x370(0x10)
	struct ACamperPlayer* _chaseTargetSurvivor; // 0x380(0x08)
	struct FVector _goToLocation; // 0x388(0x0c)
	char pad_394[0x4]; // 0x394(0x04)
	struct AMeatHook* _patrolArea; // 0x398(0x08)
	struct TArray<struct ACamperPlayer*> _survivorsInAttackDetector; // 0x3a0(0x10)
	struct TArray<struct FGameplayTag> _cannotChaseWhileIdleTags; // 0x3b0(0x10)
	struct FDBDTunableRowHandle _zombieAttackHitTime; // 0x3c0(0x28)
	struct FDBDTunableRowHandle _zombieAttackOpenTime; // 0x3e8(0x28)
	struct FDBDTunableRowHandle _zombieAnimSpawnTime; // 0x410(0x28)
	struct FDBDTunableRowHandle _zombieAnimDyingTime; // 0x438(0x28)
	struct FTunableStat _zombieSightRadius; // 0x460(0x80)
	struct FTunableStat _zombieLoseSightRadius; // 0x4e0(0x80)
	struct FTunableStat _zombieVisionHalfAngle; // 0x560(0x80)
	struct FDBDTunableRowHandle _zombieFallSmashTime; // 0x5e0(0x28)
	struct FDBDTunableRowHandle _zombieAttackCooldownTime; // 0x608(0x28)

	void OnSlasherSet(struct ASlasherPlayer* Slasher); // Function TheK24.ZombieAIController.OnSlasherSet // (Final|Native|Private) // @ game+0x57a33b0
	void Authority_OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus); // Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated // (Final|Native|Private) // @ game+0x57a2dc0
};

// Class TheK24.ZombieAnimInstance
// Size: 0x350 (Inherited: 0x2c0)
struct UZombieAnimInstance : UAnimInstance {
	bool _isChasing; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float _chaseLocomotionPlayRate; // 0x2c4(0x04)
	float _chaseSequenceMaxSpeed; // 0x2c8(0x04)
	int32_t _chaseLocomotionIndex; // 0x2cc(0x04)
	int32_t _chaseLocomotionMaxIndex; // 0x2d0(0x04)
	struct FFloatRange _chaseLocomotionIndexChangeTimerDurationRange; // 0x2d4(0x10)
	bool _isUsingFirstChaseLocomotionPlayer; // 0x2e4(0x01)
	bool _isAttacking; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	int32_t _attackIndex; // 0x2e8(0x04)
	int32_t _maxAttackIndex; // 0x2ec(0x04)
	bool _isPatrollingOrSearching; // 0x2f0(0x01)
	bool _isStunned; // 0x2f1(0x01)
	bool _isDying; // 0x2f2(0x01)
	bool _isSpawning; // 0x2f3(0x01)
	bool _isInPool; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct AZombieCharacter* _zombieCharacter; // 0x2f8(0x08)
	float _speed; // 0x300(0x04)
	bool _isMoving; // 0x304(0x01)
	bool _isFalling; // 0x305(0x01)
	bool _isMale; // 0x306(0x01)
	char pad_307[0x1]; // 0x307(0x01)
	float _currentDirection; // 0x308(0x04)
	struct FRotator _currentRotation; // 0x30c(0x0c)
	float _rotationInterpolationSpeed; // 0x318(0x04)
	float _rotationInterpolationSpeedDuringChase; // 0x31c(0x04)
	char pad_320[0x30]; // 0x320(0x30)
};

// Class TheK24.ZombieAttackSurvivorBTTask
// Size: 0xb0 (Inherited: 0xb0)
struct UZombieAttackSurvivorBTTask : UBTTask_BlueprintBase {
};

// Class TheK24.ZombieAttractedByGeneratorBTService
// Size: 0xd0 (Inherited: 0xa0)
struct UZombieAttractedByGeneratorBTService : UBTService_BlueprintBase {
	float _genRepairingHearingRange; // 0xa0(0x04)
	char pad_A4[0x2c]; // 0xa4(0x2c)

	void OnInRangeChanged(bool inRange, struct AGenerator* Generator); // Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged // (Final|Native|Private) // @ game+0x57a6850
};

// Class TheK24.ZombieBlindableComponent
// Size: 0x248 (Inherited: 0x240)
struct UZombieBlindableComponent : UBlindableBaseComponent {
	struct UGameplayTagContainerComponent* _ownerObjectState; // 0x240(0x08)
};

// Class TheK24.ZombieBlindingFXComponent
// Size: 0x150 (Inherited: 0x150)
struct UZombieBlindingFXComponent : UKillerBlindingFXComponent {
};

// Class TheK24.ZombieCharacter
// Size: 0x810 (Inherited: 0x4d0)
struct AZombieCharacter : ACharacter {
	char pad_4D0[0x38]; // 0x4d0(0x38)
	struct FTunableStat _zombieWalkSpeed; // 0x508(0x80)
	char pad_588[0x8]; // 0x588(0x08)
	struct UAuthoritativePoolableActorComponent* _poolableComponent; // 0x590(0x08)
	struct USphereComponent* _zombieAttackDetector; // 0x598(0x08)
	struct UStaticMeshComponent* _attackDamageZone; // 0x5a0(0x08)
	enum class EZombieState _zombieState; // 0x5a8(0x01)
	char pad_5A9[0x3f]; // 0x5a9(0x3f)
	struct FTunableStat _zombieRespawnTimeKilledBySlasher; // 0x5e8(0x80)
	struct FTunableStat _zombieRespawnTimeKilledBySurvivor; // 0x668(0x80)
	char pad_6E8[0x8]; // 0x6e8(0x08)
	struct FTransform _respawnPositionBehindGate; // 0x6f0(0x30)
	enum class EZombieGender _zombieGender; // 0x720(0x01)
	char pad_721[0x7]; // 0x721(0x07)
	struct USkeletalMesh* _femaleSkeletalMesh; // 0x728(0x08)
	struct FString _audioSwitchState; // 0x730(0x10)
	struct UZombieBlindableComponent* _blindableComponent; // 0x740(0x08)
	struct UChargeableComponent* _blindingChargeableComponent; // 0x748(0x08)
	struct UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent; // 0x750(0x08)
	struct UFlashlightableComponent* _flashLightableComponent; // 0x758(0x08)
	char pad_760[0x38]; // 0x760(0x38)
	struct FDBDTunableRowHandle _zombieStunBaseTime; // 0x798(0x28)
	struct UGameplayTagContainerComponent* _objectState; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)
	struct UCharacterPositionRecorderComponent* _positionRecorder; // 0x7d0(0x08)
	struct UAuthoritativeMovementComponent* _authoritativeMovementComponent; // 0x7d8(0x08)
	struct UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler; // 0x7e0(0x08)
	struct TArray<struct AActor*> _ignoreActors; // 0x7e8(0x10)
	char pad_7F8[0x4]; // 0x7f8(0x04)
	float _zombieStunnedCapsuleRadius; // 0x7fc(0x04)
	float _minFallHeight; // 0x800(0x04)
	char pad_804[0x8]; // 0x804(0x08)
	float _afterInAirAttackCooldown; // 0x80c(0x04)

	void ZombieKilledByKiller_Cosmetic(enum class EAttackType attackType); // Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetCharacterActive_Cosmetic(bool value); // Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnZombieStateChanged_Cosmetic(enum class EZombieState ZombieState); // Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnSlasherSet(struct ASlasherPlayer* Slasher); // Function TheK24.ZombieCharacter.OnSlasherSet // (Final|Native|Private) // @ game+0x57a69c0
	void OnRep_ZombieState(enum class EZombieState previousState); // Function TheK24.ZombieCharacter.OnRep_ZombieState // (Final|Native|Private) // @ game+0x57a6940
	void OnRep_ZombieGender(); // Function TheK24.ZombieCharacter.OnRep_ZombieGender // (Final|Native|Private) // @ game+0x57a6920
	void OnFemaleGenderSet_Cosmetic(); // Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnEndOverlapZombieAttackDetector(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector // (Final|Native|Private) // @ game+0x57a66f0
	void OnBeginOverlapZombieAttackDetector(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector // (Final|Native|Private|HasOutParms) // @ game+0x57a64d0
	void Multicast_ZombieKilledByKillerCosmetic(enum class EAttackType attackType); // Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x57a6450
	enum class EZombieGender GetZombieGender(); // Function TheK24.ZombieCharacter.GetZombieGender // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a6420
	struct UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler(); // Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a6400
	struct UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent(); // Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a63c0
	struct FString GetAudioSwitchState(); // Function TheK24.ZombieCharacter.GetAudioSwitchState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a6340
	void Authority_OnZombieStateChanged(enum class EZombieState ZombieState); // Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged // (Final|Native|Private) // @ game+0x57a62c0
	void Authority_OnFlashlightRemoved(struct UFlashlightComponent* Flashlight); // Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved // (Final|Native|Private) // @ game+0x57a5e20
	void Authority_OnFlashlightAdded(struct UFlashlightComponent* Flashlight); // Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded // (Final|Native|Private) // @ game+0x57a5d90
	void Authority_OnFirecrackerInRangeBegin(struct FFirecrackerEffectData& effectData); // Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin // (Final|Native|Private|HasOutParms) // @ game+0x57a5cf0
	void Authority_DeactivateZombieAndStartRespawnTimer(); // Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer // (Final|Native|Private) // @ game+0x57a5cd0
};

// Class TheK24.ZombieChaseStateBTService
// Size: 0xa0 (Inherited: 0xa0)
struct UZombieChaseStateBTService : UBTService_BlueprintBase {
};

// Class TheK24.ZombieChaseSurvivorTargetBTTask
// Size: 0xb0 (Inherited: 0xb0)
struct UZombieChaseSurvivorTargetBTTask : UBTTask_BlueprintBase {
};

// Class TheK24.ZombieCustomizationComponent
// Size: 0x438 (Inherited: 0x430)
struct UZombieCustomizationComponent : UCustomizedSkeletalMesh {
	struct TWeakObjectPtr<struct ACamperPlayer> _survivorSource; // 0x430(0x08)

	void Multicast_SetZombieCustomization(struct ACamperPlayer* Survivor); // Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x4d51430
};

// Class TheK24.ZombieEscapeDoorPointsActor
// Size: 0x240 (Inherited: 0x230)
struct AZombieEscapeDoorPointsActor : AActor {
	struct TArray<struct UArrowComponent*> _availablePoints; // 0x230(0x10)
};

// Class TheK24.ZombieEvaluateEnterChaseBTService
// Size: 0xa0 (Inherited: 0xa0)
struct UZombieEvaluateEnterChaseBTService : UBTService_BlueprintBase {
};

// Class TheK24.ZombieEvaluteEnterAttackBTService
// Size: 0xa0 (Inherited: 0xa0)
struct UZombieEvaluteEnterAttackBTService : UBTService_BlueprintBase {
};

// Class TheK24.ZombieFallDetectorComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UZombieFallDetectorComponent : UActorComponent {
	struct FDBDTunableRowHandle _zombieDistanceConsideredSmashFall; // 0xb8(0x28)
	char pad_E0[0x10]; // 0xe0(0x10)

	void Authority_OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange // (Final|Native|Private) // @ game+0x57a61b0
};

// Class TheK24.ZombieOutlineUpdateStrategy
// Size: 0x140 (Inherited: 0x138)
struct UZombieOutlineUpdateStrategy : USourceBasedOutlineUpdateStrategy {
	struct AZombieCharacter* _zombieCharacter; // 0x138(0x08)
};

// Class TheK24.ZombieResurrector
// Size: 0x120 (Inherited: 0xb8)
struct UZombieResurrector : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _powerLevelToSpawnZombie; // 0xd0(0x28)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct TArray<struct AZombieCharacter*> _delayedSpawnZombies; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)

	void Authority_OnKillerPowerLevelChanged(int32_t powerlevel); // Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged // (Final|Native|Private) // @ game+0x57a5ed0
};

// Class TheK24.ZombieRotateTowardsTargetBTTask
// Size: 0xb0 (Inherited: 0xb0)
struct UZombieRotateTowardsTargetBTTask : UBTTask_BlueprintBase {
};

// Class TheK24.ZombiesInterestEventManager
// Size: 0xe8 (Inherited: 0xb8)
struct UZombiesInterestEventManager : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct FGameplayTag> _zombieInterestEvents; // 0xd0(0x10)
	char pad_E0[0x8]; // 0xe0(0x08)

	void Authority_OnLoudNoiseTriggered(struct AActor* originator, struct AActor* instigatingActor, struct FVector Location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise); // Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x57a5f60
};

// Class TheK24.ZombiesManagement
// Size: 0x2e8 (Inherited: 0x230)
struct AZombiesManagement : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct UAuthoritativeActorPoolComponent* _zombiePool; // 0x238(0x08)
	struct UZombiesPatrolAreaManager* _zombiesPatrolAreaManager; // 0x240(0x08)
	struct TArray<struct AZombieCharacter*> _spawnedZombiesArray; // 0x248(0x10)
	char pad_258[0x30]; // 0x258(0x30)
	struct FDBDTunableRowHandle _firstZombieSpawnTime; // 0x288(0x28)
	struct FDBDTunableRowHandle _numberOfZombieToSpawnAtStart; // 0x2b0(0x28)
	struct TArray<struct AZombieEscapeDoorPointsActor*> _zombieEscapeDoorPoints; // 0x2d8(0x10)

	void Authority_OnIntroComplete(); // Function TheK24.ZombiesManagement.Authority_OnIntroComplete // (Final|Native|Private) // @ game+0x57a5eb0
};

// Class TheK24.ZombiesPatrolAreaManager
// Size: 0xe0 (Inherited: 0xb8)
struct UZombiesPatrolAreaManager : UActorComponent {
	struct TArray<struct AMeatHook*> _availablePatrolAreas; // 0xb8(0x10)
	struct TArray<struct AMeatHook*> _usedPatrolAreas; // 0xc8(0x10)
	float _maxDistanceBetweenMeatHookAndPlayers; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class TheK24.ZombieStunnableComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UZombieStunnableComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

