// Class DBDBots.AIDisplayDebugInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIDisplayDebugInterface : UInterface {
};

// Class DBDBots.AIGoalGeneratorInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIGoalGeneratorInterface : UInterface {
};

// Class DBDBots.AIIntentionValidatorInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIIntentionValidatorInterface : UInterface {
};

// Class DBDBots.AIPathValidatorInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIPathValidatorInterface : UInterface {
};

// Class DBDBots.AISkill
// Size: 0xe0 (Inherited: 0x30)
struct UAISkill : UObject {
	struct FGameplayTagContainer RunContexts; // 0x30(0x20)
	bool StopIfPausedByNavLinkProxy; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float RunTimeLimit; // 0x54(0x04)
	float RunCooldownTime; // 0x58(0x04)
	float RunCooldownTimeDeviation; // 0x5c(0x04)
	struct UNavigationQueryFilter* SkillNavigationFilterClass; // 0x60(0x08)
	struct TArray<struct UAISenseConfig*> SkillSenseConfigs; // 0x68(0x10)
	struct TArray<struct FKillerFilterItem> KillerFilter; // 0x78(0x10)
	struct UBehaviorTree* DynamicSubtree; // 0x88(0x08)
	struct TArray<struct FAdditionalDynamicSubtree> AdditionalDynamicSubtrees; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)
	struct TArray<struct UObject*> _pausedByObjects; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)
	struct ADBDAIBTController* _aiControllerOwner; // 0xd8(0x08)
};

// Class DBDBots.AISkill_BuiltToLast
// Size: 0x110 (Inherited: 0xe0)
struct UAISkill_BuiltToLast : UAISkill {
	struct FDataTableDropdown perkId; // 0xe0(0x30)
};

// Class DBDBots.AISkill_Interaction
// Size: 0x190 (Inherited: 0xe0)
struct UAISkill_Interaction : UAISkill {
	enum class EPawnInputPressTypes inputType; // 0xe0(0x01)
	enum class EInteractionSkillInputModes InputMode; // 0xe1(0x01)
	enum class EPawnInputPressTypes CancelInputType; // 0xe2(0x01)
	enum class EInteractionCancelInputModes CancelInputMode; // 0xe3(0x01)
	bool AutoLockInput; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FAIRoll StartRoll; // 0xe8(0x24)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FString StartInteractionID; // 0x110(0x10)
	struct FString StopInteractionID; // 0x120(0x10)
	float MinHoldInputTime; // 0x130(0x04)
	bool AutoReleaseHoldInputWhenCharged; // 0x134(0x01)
	char pad_135[0x5b]; // 0x135(0x5b)
};

// Class DBDBots.AISkill_ChemicalTrapInChase
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_ChemicalTrapInChase : UAISkill_Interaction {
};

// Class DBDBots.AISkill_DirectionalMinigame
// Size: 0x148 (Inherited: 0xe0)
struct UAISkill_DirectionalMinigame : UAISkill {
	struct FAIRoll InputRoll; // 0xe0(0x24)
	struct FAITunableParameter InputTimeMinimum; // 0x104(0x10)
	struct FAITunableParameter InputTimeVariance; // 0x114(0x10)
	char pad_124[0x24]; // 0x124(0x24)

	void OnMinigameStart(struct TArray<enum class EDirectionalInputKey> Sequence, int32_t currentIndex); // Function DBDBots.AISkill_DirectionalMinigame.OnMinigameStart // (Final|Native|Private) // @ game+0x4c718c0
	void OnMinigameEnd(enum class EDirectionalMinigameResult Result); // Function DBDBots.AISkill_DirectionalMinigame.OnMinigameEnd // (Final|Native|Private) // @ game+0x4c71840
};

// Class DBDBots.AISkill_Diversion
// Size: 0x130 (Inherited: 0xe0)
struct UAISkill_Diversion : UAISkill {
	struct FName perkId; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct AActor*> DiversionFromGoalClasses; // 0xf0(0x10)
	enum class EAIDifficultyLevel ThrowOnInteractablesAtDifficultyLevel; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float MaxThrowOnInteractableHalfAngle; // 0x104(0x04)
	float MaxMoveToTargetDistance; // 0x108(0x04)
	struct FVector NavMeshFindLocationExtents; // 0x10c(0x0c)
	float PlanInterval; // 0x118(0x04)
	char pad_11C[0x14]; // 0x11c(0x14)
};

// Class DBDBots.AISkill_Find
// Size: 0x180 (Inherited: 0xe0)
struct UAISkill_Find : UAISkill {
	struct AActor* FindClass; // 0xe0(0x08)
	struct FGameplayTag BlackboardWishListTag; // 0xe8(0x0c)
	float SearchInterval; // 0xf4(0x04)
	bool MustBeSeen; // 0xf8(0x01)
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject; // 0xf9(0x01)
	bool IgnoreMindFocusCooldown; // 0xfa(0x01)
	bool AbandonIfInChase; // 0xfb(0x01)
	bool RejectIfInPressureZone; // 0xfc(0x01)
	bool RejectIfNotFocusedBySelf; // 0xfd(0x01)
	bool RejectIfInteractableFocusedByOther; // 0xfe(0x01)
	bool UsesActorLocation; // 0xff(0x01)
	struct FAITunableParameter GoalBasicWeight; // 0x100(0x10)
	struct FAITunableParameter GoalWeightMaxDistance; // 0x110(0x10)
	struct FAITunableParameter GoalWeightAtMinDistance; // 0x120(0x10)
	float SearchHeightAmplifier; // 0x130(0x04)
	float SearchHeightAmplifierActivationHeight; // 0x134(0x04)
	bool IsUnsafeAction; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FString UnsafeInteractionID; // 0x140(0x10)
	bool UnsafeActionUsesItemAddons; // 0x150(0x01)
	bool UnsafeActionIsSelfInteraction; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float UnsafeActionRange; // 0x154(0x04)
	struct TArray<struct UObject*> _currentWishedObjects; // 0x158(0x10)
	char pad_168[0x18]; // 0x168(0x18)
};

// Class DBDBots.AISkill_FindInteractable
// Size: 0x198 (Inherited: 0x180)
struct UAISkill_FindInteractable : UAISkill_Find {
	struct FString RequiredInteractionId; // 0x180(0x10)
	enum class EInputInteractionType RequiredInteractionInputType; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
};

// Class DBDBots.AISkill_FindCollectable
// Size: 0x1a0 (Inherited: 0x198)
struct UAISkill_FindCollectable : UAISkill_FindInteractable {
	int32_t CollectUnderItemCount; // 0x198(0x04)
	float CollectOverItemChargeRatio; // 0x19c(0x04)
};

// Class DBDBots.AISkill_FindCollectable_Camper
// Size: 0x1e0 (Inherited: 0x1a0)
struct UAISkill_FindCollectable_Camper : UAISkill_FindCollectable {
	float CollectUnderItemWeight; // 0x1a0(0x04)
	float CollectOverWeightRatioDifference; // 0x1a4(0x04)
	struct FAITunableParameter WantToKeepEmptyItemPenalty; // 0x1a8(0x10)
	struct FAITunableParameter CloseItemDistThreshold; // 0x1b8(0x10)
	struct FAITunableParameter CloseItemWeightBonus; // 0x1c8(0x10)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// Class DBDBots.AISkill_FindCollectable_Hatchet
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_FindCollectable_Hatchet : UAISkill_FindCollectable {
};

// Class DBDBots.AISkill_FindCollectable_Searchable
// Size: 0x1b8 (Inherited: 0x1a0)
struct UAISkill_FindCollectable_Searchable : UAISkill_FindCollectable {
	float SearchIntervalAfterOpenSearchable; // 0x1a0(0x04)
	float OpenSearchableRelevancyDuration; // 0x1a4(0x04)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct ASearchable* _relevantSearchable; // 0x1b0(0x08)
};

// Class DBDBots.AISkill_FindCollectable_Trap
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_FindCollectable_Trap : UAISkill_FindCollectable {
};

// Class DBDBots.AISkill_FindInteractable_CloseTelevisionNearGenerator
// Size: 0x1f8 (Inherited: 0x198)
struct UAISkill_FindInteractable_CloseTelevisionNearGenerator : UAISkill_FindInteractable {
	struct FAITunableParameter MaximumCondemnedPercentToCloseTelevision; // 0x198(0x10)
	struct FAITunableParameter DistanceBetweenGeneratorAndTelevisionThreshold; // 0x1a8(0x10)
	struct FAITunableParameter BaseValue; // 0x1b8(0x10)
	struct FAITunableParameter CloseTelevisionDistanceLinearWeight; // 0x1c8(0x10)
	struct FAITunableParameter CloseTelevisionMaximumDistanceFromCamper; // 0x1d8(0x10)
	struct FAITunableParameter MaxHeightDifferenceToCloseTelevisions; // 0x1e8(0x10)
};

// Class DBDBots.AISkill_FindInteractable_Drone
// Size: 0x1e0 (Inherited: 0x198)
struct UAISkill_FindInteractable_Drone : UAISkill_FindInteractable {
	struct FAITunableParameter BaseActiveWeight; // 0x198(0x10)
	struct FAITunableParameter BaseScoutingWeight; // 0x1a8(0x10)
	struct FGameplayTag ClawTrapStateTag; // 0x1b8(0x0c)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct TArray<struct AActor*> ValidGoalObjectClasses; // 0x1c8(0x10)
	float DroneRadiusMargin; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// Class DBDBots.AISkill_FindInteractable_K32ItemBox
// Size: 0x1f0 (Inherited: 0x198)
struct UAISkill_FindInteractable_K32ItemBox : UAISkill_FindInteractable {
	struct FName BBK32EmpTargetActor; // 0x198(0x0c)
	struct FName BBOriginalFocusedActor; // 0x1a4(0x0c)
	struct TArray<struct AActor*> GoalClassesToGiveAdditionalWeight; // 0x1b0(0x10)
	float EmpTargetNearGoalWeight; // 0x1c0(0x04)
	float NearEmpBoxGoalWeight; // 0x1c4(0x04)
	float NearEmpBoxDistance; // 0x1c8(0x04)
	int32_t K32EmpMaxCount; // 0x1cc(0x04)
	float K32ItemBoxChargeWeightRatio; // 0x1d0(0x04)
	char pad_1D4[0x1c]; // 0x1d4(0x1c)
};

// Class DBDBots.AISkill_FindInteractable_K33ControlStation
// Size: 0x1d8 (Inherited: 0x198)
struct UAISkill_FindInteractable_K33ControlStation : UAISkill_FindInteractable {
	struct FAITunableParameter GeneratorMaxRange; // 0x198(0x10)
	struct FAITunableParameter TurretProximityPenaltyMaxRange; // 0x1a8(0x10)
	struct FAITunableParameter TurretsRemainingWeightBonus; // 0x1b8(0x10)
	struct FAITunableParameter TurretProximityWeightPenalty; // 0x1c8(0x10)
};

// Class DBDBots.AISkill_FindInteractable_K33Turret
// Size: 0x1c8 (Inherited: 0x198)
struct UAISkill_FindInteractable_K33Turret : UAISkill_FindInteractable {
	struct FAITunableParameter RedeployGeneratorMaxRange; // 0x198(0x10)
	struct FAITunableParameter UndeployGeneratorMaxRange; // 0x1a8(0x10)
	struct FAITunableParameter UndeployCharacterMaxRange; // 0x1b8(0x10)
};

// Class DBDBots.AISkill_FindInteractable_Reassurance
// Size: 0x280 (Inherited: 0x198)
struct UAISkill_FindInteractable_Reassurance : UAISkill_FindInteractable {
	struct UStatusEffect* ReassuranceStatusEffect; // 0x198(0x08)
	struct FAITunableParameter AllyDangerStateGoalWeight; // 0x1a0(0x10)
	struct FAITunableParameter MaxHookTimeGoalWeight; // 0x1b0(0x10)
	struct FAITunableParameter HumanAllyHookedGoalWeight; // 0x1c0(0x10)
	struct FAITunableParameter IdealKillerDistanceFromHook; // 0x1d0(0x10)
	struct FAITunableParameter MaxKillerProximityWeight; // 0x1e0(0x10)
	struct FAITunableParameter BotDangerStateGoalWeight; // 0x1f0(0x10)
	struct FAITunableParameter IncapacitatedAlliesGoalWeight; // 0x200(0x10)
	struct FAITunableParameter BotInjuredStateGoalWeight; // 0x210(0x10)
	char pad_220[0x60]; // 0x220(0x60)
};

// Class DBDBots.AISkill_FindInteractable_SolveCondemned
// Size: 0x1d8 (Inherited: 0x198)
struct UAISkill_FindInteractable_SolveCondemned : UAISkill_FindInteractable {
	struct FAITunableParameter NearCondemnedWeight; // 0x198(0x10)
	struct FAITunableParameter HighCondemnedThreshold; // 0x1a8(0x10)
	struct FAITunableParameter SolveCondemnedBasicWeight; // 0x1b8(0x10)
	struct FAITunableParameter CondemnedLevelProportionalWeight; // 0x1c8(0x10)
};

// Class DBDBots.AISkill_FindInteractable_SolveRBT
// Size: 0x1b8 (Inherited: 0x198)
struct UAISkill_FindInteractable_SolveRBT : UAISkill_FindInteractable {
	struct FAITunableParameter UrgencyGoalWeight; // 0x198(0x10)
	struct FAITunableParameter PriorityGoalWeight; // 0x1a8(0x10)
};

// Class DBDBots.AISkill_FindInteractable_SolveSickness
// Size: 0x1c8 (Inherited: 0x198)
struct UAISkill_FindInteractable_SolveSickness : UAISkill_FindInteractable {
	struct FAITunableParameter BaseGoalWeight; // 0x198(0x10)
	struct FAITunableParameter UrgencyGoalWeight; // 0x1a8(0x10)
	struct FAITunableParameter InteractingGoalPenaltyWeight; // 0x1b8(0x10)
};

// Class DBDBots.AISkill_FindInteractable_StatusEffect
// Size: 0x1a8 (Inherited: 0x198)
struct UAISkill_FindInteractable_StatusEffect : UAISkill_FindInteractable {
	struct FGameplayTag RequiredPerkFlag; // 0x198(0x0c)
	bool InvertCondition; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
};

// Class DBDBots.AISkill_FindInteractable_StatusEffect_Plague
// Size: 0x1a8 (Inherited: 0x1a8)
struct UAISkill_FindInteractable_StatusEffect_Plague : UAISkill_FindInteractable_StatusEffect {
};

// Class DBDBots.AISkill_FindInteractable_Waker
// Size: 0x1a8 (Inherited: 0x198)
struct UAISkill_FindInteractable_Waker : UAISkill_FindInteractable {
	struct FAITunableParameter FixedGoalWeight; // 0x198(0x10)
};

// Class DBDBots.AISkill_Interaction_AttachRBT
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_AttachRBT : UAISkill_Interaction {
};

// Class DBDBots.AISkill_Interaction_BloodRush
// Size: 0x1e8 (Inherited: 0x190)
struct UAISkill_Interaction_BloodRush : UAISkill_Interaction {
	struct TArray<struct FAIHasExhaustionPerkCondition> ExhaustionPerks; // 0x190(0x10)
	struct TArray<struct FKillerFilterItem> RiskyKillerFilter; // 0x1a0(0x10)
	struct FAITunableParameter AfterExhaustionMinimumDelaySeconds; // 0x1b0(0x10)
	struct FAITunableParameter MinimumRemainingExhaustionCooldownSeconds; // 0x1c0(0x10)
	struct FAITunableParameter MinimumDistanceFromKiller; // 0x1d0(0x10)
	char pad_1E0[0x8]; // 0x1e0(0x08)
};

// Class DBDBots.AISkill_Interaction_Clairvoyance
// Size: 0x1a8 (Inherited: 0x190)
struct UAISkill_Interaction_Clairvoyance : UAISkill_Interaction {
	struct FGameplayTag DropCooldownTag; // 0x190(0x0c)
	float DropCooldownDuration; // 0x19c(0x04)
	bool bAddToExistingDuration; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// Class DBDBots.AISkill_Interaction_Dramaturgy
// Size: 0x1a0 (Inherited: 0x190)
struct UAISkill_Interaction_Dramaturgy : UAISkill_Interaction {
	struct FAITunableParameter UseDramaturgyUnderNavLinkDistance; // 0x190(0x10)
};

// Class DBDBots.AISkill_Interaction_ForThePeople
// Size: 0x1a8 (Inherited: 0x190)
struct UAISkill_Interaction_ForThePeople : UAISkill_Interaction {
	char pad_190[0x8]; // 0x190(0x08)
	struct FString BlockInteractionId; // 0x198(0x10)
};

// Class DBDBots.AISkill_Interaction_GeneratorSecondaryInteraction
// Size: 0x1b0 (Inherited: 0x190)
struct UAISkill_Interaction_GeneratorSecondaryInteraction : UAISkill_Interaction {
	struct TArray<struct FPerkIdDropdown> Perks; // 0x190(0x10)
	struct TArray<struct FName> GeneratorSecondaryInteractionIds; // 0x1a0(0x10)
};

// Class DBDBots.AISkill_Interaction_InLocker
// Size: 0x1e0 (Inherited: 0x190)
struct UAISkill_Interaction_InLocker : UAISkill_Interaction {
	struct FDataTableDropdown perkId; // 0x190(0x30)
	struct FGameplayTag CooldownTag; // 0x1c0(0x0c)
	float InitialRunningTime; // 0x1cc(0x04)
	bool StartRefreshingTime; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float RefreshTimeMargin; // 0x1d4(0x04)
	float RefreshTimeAmount; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// Class DBDBots.AISkill_Interaction_InLocker_BuiltToLast
// Size: 0x1e0 (Inherited: 0x1e0)
struct UAISkill_Interaction_InLocker_BuiltToLast : UAISkill_Interaction_InLocker {
};

// Class DBDBots.AISkill_Interaction_InLocker_Flashbang
// Size: 0x1e0 (Inherited: 0x1e0)
struct UAISkill_Interaction_InLocker_Flashbang : UAISkill_Interaction_InLocker {
};

// Class DBDBots.AISkill_Interaction_InLocker_HeadOn
// Size: 0x1f0 (Inherited: 0x1e0)
struct UAISkill_Interaction_InLocker_HeadOn : UAISkill_Interaction_InLocker {
	struct FAITunableParameter MaxKillerNearbyDistance; // 0x1e0(0x10)
};

// Class DBDBots.AISkill_Interaction_InLocker_InnerHealing
// Size: 0x1e0 (Inherited: 0x1e0)
struct UAISkill_Interaction_InLocker_InnerHealing : UAISkill_Interaction_InLocker {
};

// Class DBDBots.AISkill_Interaction_Kill
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_Kill : UAISkill_Interaction {
};

// Class DBDBots.AISkill_Interaction_PotentialEnergy
// Size: 0x210 (Inherited: 0x1b0)
struct UAISkill_Interaction_PotentialEnergy : UAISkill_Interaction_GeneratorSecondaryInteraction {
	float DangerousGeneratorsRatio; // 0x1b0(0x04)
	float SafeGeneratorsRatio; // 0x1b4(0x04)
	float MaxGeneratorRepairPercentToUseTokens; // 0x1b8(0x04)
	char pad_1BC[0x54]; // 0x1bc(0x54)
};

// Class DBDBots.AISkill_Interaction_RecoverWhileCrawling
// Size: 0x1a0 (Inherited: 0x190)
struct UAISkill_Interaction_RecoverWhileCrawling : UAISkill_Interaction {
	struct TArray<struct FPerkIdDropdown> Perks; // 0x190(0x10)
};

// Class DBDBots.AISkill_Interaction_Reel
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_Reel : UAISkill_Interaction {
};

// Class DBDBots.AISkill_Interaction_SendToDeathBed
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_SendToDeathBed : UAISkill_Interaction {
};

// Class DBDBots.AISkill_Interaction_SetGeneratorTrap
// Size: 0x1d0 (Inherited: 0x1b0)
struct UAISkill_Interaction_SetGeneratorTrap : UAISkill_Interaction_GeneratorSecondaryInteraction {
	float MinGeneratorRepairPercentToSetTrap; // 0x1b0(0x04)
	float CheckKillerDistanceInterval; // 0x1b4(0x04)
	float MinKillerApproachingSpeed; // 0x1b8(0x04)
	int32_t MinKillerApproachingFastStreak; // 0x1bc(0x04)
	enum class EAITerrorLevel TerrorLevelToSetTrap; // 0x1c0(0x01)
	enum class EAITerrorLevel TerrorLevelToSetTrapImmediately; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	float TerrorLevelCloseRange; // 0x1c4(0x04)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class DBDBots.AISkill_Interaction_StaticBlast
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_StaticBlast : UAISkill_Interaction {
};

// Class DBDBots.AISkill_InteractionSetTrap
// Size: 0x1a0 (Inherited: 0x190)
struct UAISkill_InteractionSetTrap : UAISkill_Interaction {
	struct AActor* TrapClass; // 0x190(0x08)
	float MaxDistanceFromPointOfInterest; // 0x198(0x04)
	float MaxDistanceFromAnotherSetTrap; // 0x19c(0x04)
};

// Class DBDBots.AISkill_InteractionSetTrap_Demogorgon
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionSetTrap_Demogorgon : UAISkill_InteractionSetTrap {
};

// Class DBDBots.AISkill_InteractionSetTrap_DreamPallet
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionSetTrap_DreamPallet : UAISkill_InteractionSetTrap {
};

// Class DBDBots.AISkill_InteractionSetTrap_DreamSnare
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionSetTrap_DreamSnare : UAISkill_InteractionSetTrap {
};

// Class DBDBots.AISkill_InteractionSetTrap_Phantom
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionSetTrap_Phantom : UAISkill_InteractionSetTrap {
};

// Class DBDBots.AISkill_InteractionTarget
// Size: 0x240 (Inherited: 0x190)
struct UAISkill_InteractionTarget : UAISkill_Interaction {
	enum class EInteractionTargetRequirements TargetRequirement; // 0x190(0x01)
	bool AutoSwapBestStimulusWithBestTarget; // 0x191(0x01)
	char pad_192[0x2]; // 0x192(0x02)
	float StartMinRange; // 0x194(0x04)
	float StartMaxRange; // 0x198(0x04)
	float StopMinRange; // 0x19c(0x04)
	float StopMaxRange; // 0x1a0(0x04)
	float StartMaxHalfAngle; // 0x1a4(0x04)
	float StopMaxHalfAngle; // 0x1a8(0x04)
	bool IsMaxHalfAngle2D; // 0x1ac(0x01)
	bool TestMaxHalfAngleOnPath; // 0x1ad(0x01)
	char pad_1AE[0x2]; // 0x1ae(0x02)
	struct UNavigationQueryFilter* MaxAngleFilterClass; // 0x1b0(0x08)
	enum class EInteractionTargetInSightModes InSightMode; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float OutOfSightModeDelay; // 0x1bc(0x04)
	float TargetMoveAwayTooFastStopDelay; // 0x1c0(0x04)
	float TargetMoveAwayTooFastCooldown; // 0x1c4(0x04)
	bool AlwaysStrafeAroundTarget; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct TArray<struct FAIDetectedStimulus> _unfilteredTargets; // 0x1d0(0x10)
	struct TArray<struct FAIDetectedStimulus> _filteredTargets; // 0x1e0(0x10)
	struct TMap<struct AActor*, struct FTargetMoveAwayToFastInfo> _targetsMoveAwayTooFastInfo; // 0x1f0(0x50)
};

// Class DBDBots.AISkill_InteractionTarget_Aim
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Aim : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_AmbushAttack
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_AmbushAttack : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_AmbushMode
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_AmbushMode : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_Cloak
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Cloak : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_Dash
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Dash : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_DashAttack
// Size: 0x250 (Inherited: 0x240)
struct UAISkill_InteractionTarget_DashAttack : UAISkill_InteractionTarget_Dash {
	float DashAttackUnderMaxRange; // 0x240(0x04)
	float DashAttackUnderMaxHalfAngle; // 0x244(0x04)
	enum class EAttackType ExpectedAttackType; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
};

// Class DBDBots.AISkill_InteractionTarget_DashAttack_Cannibal
// Size: 0x250 (Inherited: 0x250)
struct UAISkill_InteractionTarget_DashAttack_Cannibal : UAISkill_InteractionTarget_DashAttack {
};

// Class DBDBots.AISkill_InteractionTarget_DashAttack_Chainsaw
// Size: 0x250 (Inherited: 0x250)
struct UAISkill_InteractionTarget_DashAttack_Chainsaw : UAISkill_InteractionTarget_DashAttack {
};

// Class DBDBots.AISkill_InteractionTarget_DashAttack_Demogorgon
// Size: 0x250 (Inherited: 0x250)
struct UAISkill_InteractionTarget_DashAttack_Demogorgon : UAISkill_InteractionTarget_DashAttack {
};

// Class DBDBots.AISkill_InteractionTarget_DashHillbilly
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_DashHillbilly : UAISkill_InteractionTarget_Dash {
};

// Class DBDBots.AISkill_InteractionTarget_DeadHard
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_DeadHard : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_Fire
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Fire : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_Frenzy
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Frenzy : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_LungeAttack
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_LungeAttack : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_PhaseWalk
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_PhaseWalk : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_ReloadDeathSlinger
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_ReloadDeathSlinger : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_ShockTherapy
// Size: 0x248 (Inherited: 0x240)
struct UAISkill_InteractionTarget_ShockTherapy : UAISkill_InteractionTarget {
	float TargetToEvadePointMaxDistance; // 0x240(0x04)
	float CastShockTimeBuffer; // 0x244(0x04)
};

// Class DBDBots.AISkill_InteractionTarget_Stalk
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Stalk : UAISkill_InteractionTarget {
};

// Class DBDBots.AISkill_InteractionTarget_StalkGhost
// Size: 0x250 (Inherited: 0x240)
struct UAISkill_InteractionTarget_StalkGhost : UAISkill_InteractionTarget_Stalk {
	float CautiousModeUnderTargetRange; // 0x240(0x04)
	float CautiousModeSpeedFactor; // 0x244(0x04)
	float BackFromCautiousDelay; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// Class DBDBots.AISkill_InteractionTarget_StalkShape
// Size: 0x248 (Inherited: 0x240)
struct UAISkill_InteractionTarget_StalkShape : UAISkill_InteractionTarget_Stalk {
	int32_t StalkRangeLimitedAtEvilTier; // 0x240(0x04)
	float MaxStalkRangeWhenLimitedByEvilTier; // 0x244(0x04)
};

// Class DBDBots.AISkill_InteractionTarget_StealthGhost
// Size: 0x248 (Inherited: 0x240)
struct UAISkill_InteractionTarget_StealthGhost : UAISkill_InteractionTarget {
	float CrouchSwapDelay; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
};

// Class DBDBots.AISkill_InteractionTarget_Throw
// Size: 0x2b8 (Inherited: 0x240)
struct UAISkill_InteractionTarget_Throw : UAISkill_InteractionTarget {
	enum class EAIThrowPredictionModes ThrowPredictionMode; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t MaxAddPitchAngle; // 0x244(0x04)
	enum class EAIThrowProjectileModes ThrowProjectileMode; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	struct FAITunableParameter HoldInputTimeRandDeviation; // 0x24c(0x10)
	struct FAITunableParameter PitchAngleRandDeviation; // 0x25c(0x10)
	char pad_26C[0x4c]; // 0x26c(0x4c)
};

// Class DBDBots.AISkill_InteractionTarget_ThrowHatchet
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAISkill_InteractionTarget_ThrowHatchet : UAISkill_InteractionTarget_Throw {
};

// Class DBDBots.AISkill_InteractionTarget_ThrowPlague
// Size: 0x2c8 (Inherited: 0x2b8)
struct UAISkill_InteractionTarget_ThrowPlague : UAISkill_InteractionTarget_Throw {
	struct FGameplayTag ProjectileDamageSickTargetTag; // 0x2b8(0x0c)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// Class DBDBots.AISkill_InteractionTarget_TormentAttack
// Size: 0x270 (Inherited: 0x240)
struct UAISkill_InteractionTarget_TormentAttack : UAISkill_InteractionTarget {
	int32_t AdvancedAtNbDetectedTargets; // 0x240(0x04)
	struct FAIRoll AdvancedStartRoll; // 0x244(0x24)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class DBDBots.AISkill_InteractionTarget_TormentMode
// Size: 0x250 (Inherited: 0x240)
struct UAISkill_InteractionTarget_TormentMode : UAISkill_InteractionTarget {
	float ChasedTargetToEvadePointMaxDistance; // 0x240(0x04)
	float StartTormentInPatrolAboveChargeRatio; // 0x244(0x04)
	float StartTormentInChaseAboveChargeRatio; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// Class DBDBots.AISkill_InteractionTeleport
// Size: 0x198 (Inherited: 0x190)
struct UAISkill_InteractionTeleport : UAISkill_Interaction {
	float BlockTeleportWhenPathGoalUnderRange; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// Class DBDBots.AISkill_InteractionTeleportEthereal
// Size: 0x1f8 (Inherited: 0x198)
struct UAISkill_InteractionTeleportEthereal : UAISkill_InteractionTeleport {
	float TeleportPlanInterval; // 0x198(0x04)
	float MaxTeleportAlignHalfAngle; // 0x19c(0x04)
	float AbortNotWorkingTeleportDelay; // 0x1a0(0x04)
	float AbortAddRunCooldownPenaltyTime; // 0x1a4(0x04)
	char pad_1A8[0x18]; // 0x1a8(0x18)
	struct AActor* _onStimulusInstigator; // 0x1c0(0x08)
	char pad_1C8[0x30]; // 0x1c8(0x30)
};

// Class DBDBots.AISkill_InteractionTeleportEthereal_Blink
// Size: 0x208 (Inherited: 0x1f8)
struct UAISkill_InteractionTeleportEthereal_Blink : UAISkill_InteractionTeleportEthereal {
	float StartBlinkAtWarpLocationRange; // 0x1f8(0x04)
	float ValidateBlinkWarpRange; // 0x1fc(0x04)
	float BlinkAboveSavedPathLength; // 0x200(0x04)
	float BlinkIfTargetWillBeInRange; // 0x204(0x04)
};

// Class DBDBots.AISkill_InteractionTeleportEthereal_Demogorgon
// Size: 0x210 (Inherited: 0x1f8)
struct UAISkill_InteractionTeleportEthereal_Demogorgon : UAISkill_InteractionTeleportEthereal {
	float MaxRangeFromFirstPortal; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct ADemogorgonPortal* _firstPortal; // 0x200(0x08)
	struct ADemogorgonPortal* _secondPortal; // 0x208(0x08)
};

// Class DBDBots.AISkill_InteractionTeleportEthereal_Nightmare
// Size: 0x208 (Inherited: 0x1f8)
struct UAISkill_InteractionTeleportEthereal_Nightmare : UAISkill_InteractionTeleportEthereal {
	float TeleportIfPathLengthSavedAboveRange; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct AGenerator* _toGenerator; // 0x200(0x08)
};

// Class DBDBots.AISkill_InteractionUseItem
// Size: 0x1a0 (Inherited: 0x190)
struct UAISkill_InteractionUseItem : UAISkill_Interaction {
	enum class ELoadoutItemType ItemType; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct ACollectable* ItemClass; // 0x198(0x08)
};

// Class DBDBots.AISkill_InteractionUseItem_FirecrackerLike
// Size: 0x1b8 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_FirecrackerLike : UAISkill_InteractionUseItem {
	struct FAITunableParameter StartMaxRange; // 0x1a0(0x10)
	float TargetFaceMeMaxHalfAngle; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// Class DBDBots.AISkill_InteractionUseItem_Firecracker
// Size: 0x1b8 (Inherited: 0x1b8)
struct UAISkill_InteractionUseItem_Firecracker : UAISkill_InteractionUseItem_FirecrackerLike {
};

// Class DBDBots.AISkill_InteractionUseItem_Flashbang
// Size: 0x1b8 (Inherited: 0x1b8)
struct UAISkill_InteractionUseItem_Flashbang : UAISkill_InteractionUseItem_FirecrackerLike {
};

// Class DBDBots.AISkill_InteractionUseItem_Flashlight
// Size: 0x208 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_Flashlight : UAISkill_InteractionUseItem {
	struct FAIRoll VulnerableTargetStartRoll; // 0x1a0(0x24)
	float TargetFaceMeMaxHalfAngle; // 0x1c4(0x04)
	struct AActor* _targetActor; // 0x1c8(0x08)
	char pad_1D0[0x38]; // 0x1d0(0x38)
};

// Class DBDBots.AISkill_InteractionUseItem_K32Emp
// Size: 0x1e0 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_K32Emp : UAISkill_InteractionUseItem {
	float NearPodDistance; // 0x1a0(0x04)
	struct FName BBIsFleeing; // 0x1a4(0x0c)
	float SurvivorHeight; // 0x1b0(0x04)
	float DoNotUseEmpUnderNavLinkDistance; // 0x1b4(0x04)
	float MaxTimeToUseEmpAfterLockonCooldown; // 0x1b8(0x04)
	char pad_1BC[0x24]; // 0x1bc(0x24)
};

// Class DBDBots.AISkill_InteractionUseItem_Key_Addon
// Size: 0x1a8 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_Key_Addon : UAISkill_InteractionUseItem {
	float RemainingPercentChargeToKeep; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// Class DBDBots.AISkill_InteractionUseItem_Map
// Size: 0x1a0 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_Map : UAISkill_InteractionUseItem {
};

// Class DBDBots.AISkill_InteractionUseItem_Medkit_Addon
// Size: 0x1a8 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_Medkit_Addon : UAISkill_InteractionUseItem {
	float RemainingChargeThreshold; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// Class DBDBots.AISkill_K33UseTurret
// Size: 0xf0 (Inherited: 0xe0)
struct UAISkill_K33UseTurret : UAISkill {
	struct FName TurretItemID; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class DBDBots.AISkill_PlotTwist
// Size: 0x110 (Inherited: 0xe0)
struct UAISkill_PlotTwist : UAISkill {
	struct FPerkIdDropdown Perk; // 0xe0(0x10)
	struct FAITunableParameter MinimumDistanceFromKiller; // 0xf0(0x10)
	struct FAITunableParameter MinimumDistanceFromOtherSurvivor; // 0x100(0x10)
};

// Class DBDBots.AISkill_PossessTheKiller
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_PossessTheKiller : UAISkill_Interaction {
};

// Class DBDBots.AISkill_Scavenger
// Size: 0xe0 (Inherited: 0xe0)
struct UAISkill_Scavenger : UAISkill {
};

// Class DBDBots.AISkill_SkillCheck
// Size: 0x198 (Inherited: 0xe0)
struct UAISkill_SkillCheck : UAISkill {
	struct FAIRoll BaseRegularZoneRoll; // 0xe0(0x24)
	struct FAIRoll BaseBonusZoneRoll; // 0x104(0x24)
	struct FAIRoll WiggleRegularZoneRoll; // 0x128(0x24)
	struct FAIRoll WiggleBonusZoneRoll; // 0x14c(0x24)
	struct FAIRoll HookStruggleBonusZoneRoll; // 0x170(0x24)
	char pad_194[0x4]; // 0x194(0x04)
};

// Class DBDBots.AISkill_Strafe
// Size: 0x158 (Inherited: 0xe0)
struct UAISkill_Strafe : UAISkill {
	float StartMaxRange; // 0xe0(0x04)
	float StopMaxRange; // 0xe4(0x04)
	float StartMaxRangeAgainstRangedHostileStimulus; // 0xe8(0x04)
	float StopMaxRangeAgainstRangedHostileStimulus; // 0xec(0x04)
	float StrafeBackwardRange; // 0xf0(0x04)
	float StrafeFowardRange; // 0xf4(0x04)
	float IgnoreUnderNavLinkStartRange; // 0xf8(0x04)
	bool PauseStrafeOnAnimation; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FAITunableParameter StrafeHoldInterval; // 0x100(0x10)
	struct FAITunableParameter StrafeHoldDeviation; // 0x110(0x10)
	struct FAITunableParameter StrafePauseInterval; // 0x120(0x10)
	struct FAITunableParameter StrafePauseDeviation; // 0x130(0x10)
	char pad_140[0x18]; // 0x140(0x18)
};

// Class DBDBots.AISkill_StrafeChained
// Size: 0x158 (Inherited: 0x158)
struct UAISkill_StrafeChained : UAISkill_Strafe {
};

// Class DBDBots.AISkill_StrafeDodge
// Size: 0x180 (Inherited: 0x158)
struct UAISkill_StrafeDodge : UAISkill_Strafe {
	struct FAIRoll StartRoll; // 0x158(0x24)
	char pad_17C[0x4]; // 0x17c(0x04)
};

// Class DBDBots.AISkill_ThroughTorment
// Size: 0xf0 (Inherited: 0xe0)
struct UAISkill_ThroughTorment : UAISkill {
	enum class EAITerrorLevel ToleratedTerrorPressure; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class DBDBots.AISkill_UrbanEvasion
// Size: 0xe0 (Inherited: 0xe0)
struct UAISkill_UrbanEvasion : UAISkill {
};

// Class DBDBots.BTDecorator_TickableBase
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_TickableBase : UBTDecorator {
};

// Class DBDBots.BTDecorator_CanRecoverMore
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_CanRecoverMore : UBTDecorator_TickableBase {
};

// Class DBDBots.BTDecorator_CanRecoverTo
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_CanRecoverTo : UBTDecorator_TickableBase {
	float CanRecoverTo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class DBDBots.BTDecorator_CanRunSkill
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_CanRunSkill : UBTDecorator_TickableBase {
	struct FGameplayTag Context; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class DBDBots.BTDecorator_CanUnsafeAction
// Size: 0x168 (Inherited: 0x70)
struct UBTDecorator_CanUnsafeAction : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBUnsafeActionID; // 0x70(0x30)
	struct FBlackboardKeySelector BBUnsafeActionUsesItemAddons; // 0xa0(0x30)
	struct FBlackboardKeySelector BBUnsafeActionIsSelfInteraction; // 0xd0(0x30)
	struct FBlackboardKeySelector BBUnsafeActionRange; // 0x100(0x30)
	struct FBlackboardKeySelector BBGoalInteractor; // 0x130(0x30)
	float ExtraHealthyTime; // 0x160(0x04)
	float ExtraInjuredTime; // 0x164(0x04)
};

// Class DBDBots.BTDecorator_CompareInteractorCharge
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_CompareInteractorCharge : UBTDecorator_TickableBase {
	enum class EArithmeticKeyOperation ChargePercentQuery; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float ChargePercentValue; // 0x74(0x04)
	struct FBlackboardKeySelector BBInteractorObj; // 0x78(0x30)
};

// Class DBDBots.BTDecorator_CompareModifierValues
// Size: 0xb8 (Inherited: 0x70)
struct UBTDecorator_CompareModifierValues : UBTDecorator_TickableBase {
	struct FModifierValueData ModifierValueData1; // 0x70(0x20)
	enum class EArithmeticKeyOperation ArithmeticOperation; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FModifierValueData ModifierValueData2; // 0x94(0x20)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class DBDBots.BTDecorator_ContainsInteraction
// Size: 0xb0 (Inherited: 0x70)
struct UBTDecorator_ContainsInteraction : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBInteractorObj; // 0x70(0x30)
	struct TArray<struct FString> InteractionIds; // 0xa0(0x10)
};

// Class DBDBots.BTDecorator_ExtCompareBBEntries
// Size: 0xe0 (Inherited: 0xd8)
struct UBTDecorator_ExtCompareBBEntries : UBTDecorator_CompareBBEntries {
	float Tolerance; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class DBDBots.BTDecorator_ExtConeCheck
// Size: 0x110 (Inherited: 0x70)
struct UBTDecorator_ExtConeCheck : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBConeOrigin; // 0x70(0x30)
	struct FBlackboardKeySelector BBConeDirection; // 0xa0(0x30)
	struct FBlackboardKeySelector BBWith; // 0xd0(0x30)
	struct FAITunableParameter ConeHalfAngle; // 0x100(0x10)
};

// Class DBDBots.BTDecorator_ExtIsAtLocation
// Size: 0xb8 (Inherited: 0x70)
struct UBTDecorator_ExtIsAtLocation : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBLoc; // 0x70(0x30)
	bool UseAlternativeLoc; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FAITunableParameter AcceptableRadius; // 0xa4(0x10)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class DBDBots.BTDecorator_ExtIsBBEntryOfClass
// Size: 0xb0 (Inherited: 0xa8)
struct UBTDecorator_ExtIsBBEntryOfClass : UBTDecorator_IsBBEntryOfClass {
	bool InvertConditition; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class DBDBots.BTDecorator_ExtTimeLimit
// Size: 0xc8 (Inherited: 0x78)
struct UBTDecorator_ExtTimeLimit : UBTDecorator_TimeLimit {
	char pad_78[0x8]; // 0x78(0x08)
	struct FAITunableParameter MaxTimeLimit; // 0x80(0x10)
	struct FBlackboardKeySelector BBFilterKey; // 0x90(0x30)
	enum class EBasicKeyOperation FilterOperation; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class DBDBots.BTDecorator_GameplayModifierValue
// Size: 0x98 (Inherited: 0x70)
struct UBTDecorator_GameplayModifierValue : UBTDecorator_TickableBase {
	enum class EArithmeticKeyOperation ArithmeticOperation; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FModifierValueData ModifierValueData; // 0x74(0x20)
	float CompareToValue; // 0x94(0x04)
};

// Class DBDBots.BTDecorator_HasActivatedBoonPerk
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_HasActivatedBoonPerk : UBTDecorator_TickableBase {
};

// Class DBDBots.BTDecorator_HasBetterItemValue
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_HasBetterItemValue : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBTargetObject; // 0x70(0x30)
	float CollectUnderItemWeight; // 0xa0(0x04)
	float CollectOverWeightRatioDifference; // 0xa4(0x04)
};

// Class DBDBots.BTDecorator_HasDynamicSubtree
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_HasDynamicSubtree : UBTDecorator_TickableBase {
	struct FGameplayTag InjectTag; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class DBDBots.BTDecorator_HasGoodHookEscapeChance
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_HasGoodHookEscapeChance : UBTDecorator_TickableBase {
	float GoodHookEscapeProbability; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class DBDBots.BTDecorator_HasItemAddon
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_HasItemAddon : UBTDecorator_TickableBase {
	struct TArray<struct FAIHasItemAddonCondition> ItemAddOns; // 0x70(0x10)
};

// Class DBDBots.BTDecorator_HasPerk
// Size: 0x98 (Inherited: 0x70)
struct UBTDecorator_HasPerk : UBTDecorator_TickableBase {
	enum class EPlayerFilter PlayerFilter; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FAIHasPerkCondition> Perks; // 0x78(0x10)
	struct TArray<struct ADBDPlayer*> _players; // 0x88(0x10)
};

// Class DBDBots.BTDecorator_HasPerkFlag
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_HasPerkFlag : UBTDecorator_TickableBase {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x70(0x10)
};

// Class DBDBots.BTDecorator_HasStateTag
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_HasStateTag : UBTDecorator_TickableBase {
	struct TArray<struct FGameplayTag> StateTags; // 0x70(0x10)
};

// Class DBDBots.BTDecorator_HasStatusEffect
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_HasStatusEffect : UBTDecorator_TickableBase {
	struct TArray<struct FName> StatusEffectIds; // 0x70(0x10)
};

// Class DBDBots.BTDecorator_IsBeforeTimerExpiration
// Size: 0xb0 (Inherited: 0x70)
struct UBTDecorator_IsBeforeTimerExpiration : UBTDecorator {
	struct FAITunableParameter AdditionalTime; // 0x70(0x10)
	struct FBlackboardKeySelector BBFilterKey; // 0x80(0x30)
};

// Class DBDBots.BTDecorator_IsCamperState
// Size: 0xb0 (Inherited: 0x70)
struct UBTDecorator_IsCamperState : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBCamper; // 0x70(0x30)
	enum class ECamperDamageState damageState; // 0xa0(0x01)
	enum class EArithmeticKeyOperation DamageOp; // 0xa1(0x01)
	enum class EImmobilizedState ImmobilizeState; // 0xa2(0x01)
	enum class EArithmeticKeyOperation ImmobilizeOp; // 0xa3(0x01)
	enum class EIsCamperStateOnFilter OnFilter; // 0xa4(0x01)
	enum class EArithmeticKeyOperation OnOthersFilterOp; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	int32_t NbOnOthersCampers; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class DBDBots.BTDecorator_IsExitOpened
// Size: 0xa0 (Inherited: 0x70)
struct UBTDecorator_IsExitOpened : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBExitObj; // 0x70(0x30)
};

// Class DBDBots.BTDecorator_IsGameState
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_IsGameState : UBTDecorator_TickableBase {
	enum class EArithmeticKeyOperation RemainingObjectiveOp; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t NbRemainingObjectives; // 0x74(0x04)
	enum class EArithmeticKeyOperation SurvivorsLeftOp; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t NbSurvivorsLeft; // 0x7c(0x04)
};

// Class DBDBots.BTDecorator_IsInteractionAvailable
// Size: 0xc8 (Inherited: 0x70)
struct UBTDecorator_IsInteractionAvailable : UBTDecorator_TickableBase {
	enum class EInteractionCheckType InteractionCheckType; // 0x70(0x01)
	enum class EInputInteractionType inputType; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<struct FString> InteractionIds; // 0x78(0x10)
	enum class EIsInteractionAvailableOnFilter OnFilter; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FBlackboardKeySelector BBInteractor; // 0x90(0x30)
	bool FailIfAnotherOngoingInteraction; // 0xc0(0x01)
	bool FailIfNotPerformingInteraction; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
};

// Class DBDBots.BTDecorator_IsInteractorAvailable
// Size: 0xa0 (Inherited: 0x70)
struct UBTDecorator_IsInteractorAvailable : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBInteractorObj; // 0x70(0x30)
};

// Class DBDBots.BTDecorator_IsLocationInPressureZone
// Size: 0xa0 (Inherited: 0x70)
struct UBTDecorator_IsLocationInPressureZone : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBAtLocation; // 0x70(0x30)
};

// Class DBDBots.BTDecorator_IsNearestThan
// Size: 0xe0 (Inherited: 0x70)
struct UBTDecorator_IsNearestThan : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBFrom; // 0x70(0x30)
	bool CompareWithConstantDistance; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float ThanDistance; // 0xa4(0x04)
	struct FBlackboardKeySelector BBThan; // 0xa8(0x30)
	float AddDistanceBuffer; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class DBDBots.BTDecorator_IsObjectFocused
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_IsObjectFocused : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBObj; // 0x70(0x30)
	enum class EDecoratorIsObjFocusedFilter Filter; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class DBDBots.BTDecorator_IsTunable
// Size: 0x88 (Inherited: 0x70)
struct UBTDecorator_IsTunable : UBTDecorator_TickableBase {
	enum class ETunableComparison Operator; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FAITunableParameter TunableValue; // 0x74(0x10)
	float CompareToValue; // 0x84(0x04)
};

// Class DBDBots.BTDecorator_ItemType
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_ItemType : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBTargetObject; // 0x70(0x30)
	enum class EItemType ItemType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class DBDBots.BTDecorator_Random
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_Random : UBTDecorator_TickableBase {
	struct FAITunableParameter PercentageRatio; // 0x70(0x10)
};

// Class DBDBots.BTDecorator_RandomByDistance
// Size: 0x150 (Inherited: 0x70)
struct UBTDecorator_RandomByDistance : UBTDecorator_TickableBase {
	struct FBlackboardKeySelector BBAroundLoc; // 0x70(0x30)
	struct FBlackboardKeySelector BBRelativeFromTime; // 0xa0(0x30)
	struct FBlackboardKeySelector BBRelativeToTime; // 0xd0(0x30)
	struct FAITunableParameter StartDistance; // 0x100(0x10)
	struct FAITunableParameter EndDistance; // 0x110(0x10)
	struct FAITunableParameter PercentageAtStartDistance; // 0x120(0x10)
	struct FAITunableParameter PercentageAtEndDistance; // 0x130(0x10)
	struct TArray<struct FAIRandomByDistancePercentagesAtTime> PercentagesAtTimes; // 0x140(0x10)
};

// Class DBDBots.BTDecorator_RandomByRetry
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_RandomByRetry : UBTDecorator_TickableBase {
	struct FAITunableParameter BaseSuccessRate; // 0x70(0x10)
	struct FAITunableParameter PerRetrySuccessRate; // 0x80(0x10)
	bool ResetWhenValue; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FAITunableParameter ResetAfterTime; // 0x94(0x10)
	bool ResetOnCeaseRelevant; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
};

// Class DBDBots.BTService_AroundEQS
// Size: 0x190 (Inherited: 0x108)
struct UBTService_AroundEQS : UBTService_RunEQS {
	struct FBlackboardKeySelector BBAroundObj; // 0x108(0x30)
	struct FBlackboardKeySelector BBAroundLocation; // 0x138(0x30)
	float ValidLocationRefreshInterval; // 0x168(0x04)
	float InvalidLocationRefreshInterval; // 0x16c(0x04)
	float InvalidateLocationUnderTargetDistance; // 0x170(0x04)
	bool KeepResultWhileValid; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FName NavDataAgentName; // 0x178(0x0c)
	struct FVector NavMeshProjectionBoxExtent; // 0x184(0x0c)
};

// Class DBDBots.BTService_OnRelevantBase
// Size: 0x80 (Inherited: 0x78)
struct UBTService_OnRelevantBase : UBTService {
	enum class EAINodeRelevancyOptions When; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class DBDBots.BTService_ClearBBEntry
// Size: 0xb0 (Inherited: 0x80)
struct UBTService_ClearBBEntry : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBToResetKey; // 0x80(0x30)
};

// Class DBDBots.BTService_ClosestNavMeshLocation
// Size: 0x108 (Inherited: 0xa8)
struct UBTService_ClosestNavMeshLocation : UBTService_BlackboardBase {
	struct FBlackboardKeySelector BBAroundLocation; // 0xa8(0x30)
	float ValidLocationRefreshInterval; // 0xd8(0x04)
	float InvalidLocationRefreshInterval; // 0xdc(0x04)
	struct FName NavDataAgentName; // 0xe0(0x0c)
	struct FVector NavMeshProjectionBoxExtent; // 0xec(0x0c)
	struct UNavigationSystemV1* _navigationSystem; // 0xf8(0x08)
	struct ANavigationData* _navigationData; // 0x100(0x08)
};

// Class DBDBots.BTService_CopyBBEntry
// Size: 0xe8 (Inherited: 0x80)
struct UBTService_CopyBBEntry : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBFrom; // 0x80(0x30)
	struct FBlackboardKeySelector BBTo; // 0xb0(0x30)
	bool CopyOnlyValidKeyValue; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class DBDBots.BTService_Find_Character
// Size: 0xc0 (Inherited: 0x78)
struct UBTService_Find_Character : UBTService {
	enum class EPawnType CharacterFilter; // 0x78(0x01)
	enum class EKillerAbilities killerAbility; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FBlackboardKeySelector BBCharacterLocation; // 0x80(0x30)
	struct ADBDAIBTController* _aiOwner; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class DBDBots.BTService_FindInteractable
// Size: 0x1e0 (Inherited: 0x78)
struct UBTService_FindInteractable : UBTService {
	char pad_78[0x10]; // 0x78(0x10)
	struct FBlackboardKeySelector BBSearchAround; // 0x88(0x30)
	float SearchInterval; // 0xb8(0x04)
	float SearchHeightAmplifierActivationHeight; // 0xbc(0x04)
	float SearchHeightAmplifier; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xc8(0x08)
	bool RegisterAsDiscoveredWhenFound; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector BBOnlyFromActor; // 0xd8(0x30)
	bool RejectIfInPressureZone; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FName RejectCooldownContextName; // 0x10c(0x0c)
	bool AbandonIfInChase; // 0x118(0x01)
	bool RejectIfFocusedByOther; // 0x119(0x01)
	bool RejectIfNotFocusedBySelf; // 0x11a(0x01)
	bool IgnoreFocusFilterInEndgameCollapse; // 0x11b(0x01)
	bool RejectIfNotInSight; // 0x11c(0x01)
	bool IgnoreSightFilterIfDiscovered; // 0x11d(0x01)
	bool IgnoreSightFilterIfInRange; // 0x11e(0x01)
	char pad_11F[0x1]; // 0x11f(0x01)
	float RejectAboveRange; // 0x120(0x04)
	bool IgnoreRangeFilterIfDiscovered; // 0x124(0x01)
	bool IgnoreRangeFilterIfInSight; // 0x125(0x01)
	char pad_126[0x2]; // 0x126(0x02)
	struct FBlackboardKeySelector BBInteractableLocation; // 0x128(0x30)
	struct FBlackboardKeySelector BBInteractableObj; // 0x158(0x30)
	struct FAITunableParameter GoalBasicWeight; // 0x188(0x10)
	struct FAITunableParameter GoalWeightMaxDistance; // 0x198(0x10)
	struct FAITunableParameter GoalWeightAtMinDistance; // 0x1a8(0x10)
	struct FVector ProjectGoalLocationToNavigationExtent; // 0x1b8(0x0c)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct AInteractable* _goalInteractable; // 0x1c8(0x08)
	struct ADBDAIBTController* _aiOwner; // 0x1d0(0x08)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// Class DBDBots.BTService_FindInteractable_Totem
// Size: 0x210 (Inherited: 0x1e0)
struct UBTService_FindInteractable_Totem : UBTService_FindInteractable {
	char pad_1E0[0x30]; // 0x1e0(0x30)
};

// Class DBDBots.BTService_FindInteractor
// Size: 0x340 (Inherited: 0x78)
struct UBTService_FindInteractor : UBTService {
	char pad_78[0x10]; // 0x78(0x10)
	struct FBlackboardKeySelector BBSearchAround; // 0x88(0x30)
	float SearchInterval; // 0xb8(0x04)
	float SearchHeightAmplifierActivationHeight; // 0xbc(0x04)
	float SearchHeightAmplifier; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xc8(0x08)
	bool RegisterAsDiscoveredWhenFound; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector BBOnlyFromActor; // 0xd8(0x30)
	struct TArray<struct FString> OnlyWithInteractorIDs; // 0x108(0x10)
	float RejectIfTerrorIsCloserThanSelfMargin; // 0x118(0x04)
	float RejectIfInTerrorRadius; // 0x11c(0x04)
	bool RejectIfInPressureZone; // 0x120(0x01)
	bool UseLastKnownPositionForTerrorRejects; // 0x121(0x01)
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	struct FName RejectCooldownContextName; // 0x124(0x0c)
	bool IgnoreMindFocusCooldown; // 0x130(0x01)
	bool RejectIfAnySiblingInteractorHasCooldown; // 0x131(0x01)
	bool AbandonIfInChase; // 0x132(0x01)
	bool RejectIfFocusedByOther; // 0x133(0x01)
	bool RejectIfInteractableFocusedByOther; // 0x134(0x01)
	bool RejectIfNotFocusedBySelf; // 0x135(0x01)
	bool IgnoreFocusFilterInEndgameCollapse; // 0x136(0x01)
	bool RejectIfNotInSight; // 0x137(0x01)
	bool IgnoreSightFilterIfDiscovered; // 0x138(0x01)
	bool IgnoreSightFilterIfInRange; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float RejectAboveRange; // 0x13c(0x04)
	bool IgnoreRangeFilterIfDiscovered; // 0x140(0x01)
	bool IgnoreRangeFilterIfInSight; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct FBlackboardKeySelector BBInteractLocation; // 0x148(0x30)
	struct FBlackboardKeySelector BBInteractorObj; // 0x178(0x30)
	bool UsesActorLocation; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	struct FAITunableParameter CantInterruptGoalInteractionUnderRemainingTime; // 0x1ac(0x10)
	struct FAITunableParameter GoalBasicWeight; // 0x1bc(0x10)
	struct FAITunableParameter GoalWeightMaxDistance; // 0x1cc(0x10)
	struct FAITunableParameter GoalWeightAtMinDistance; // 0x1dc(0x10)
	struct FAITunableParameter GoalWeightAtEndgameStart; // 0x1ec(0x10)
	struct FAITunableParameter GoalWeightAtEndgameEnd; // 0x1fc(0x10)
	struct FAITunableParameter GoalWeightBonusWhileInteracting; // 0x20c(0x10)
	struct FName InteractionSpeedStatusEffectID; // 0x21c(0x0c)
	struct FAITunableParameter GoalWeightInteractionSpeedVariance; // 0x228(0x10)
	bool IsUnsafeAction; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct FBlackboardKeySelector BBUnsafeActionID; // 0x240(0x30)
	struct FBlackboardKeySelector BBUnsafeActionUsesItemAddons; // 0x270(0x30)
	struct FBlackboardKeySelector BBUnsafeActionIsSelfInteraction; // 0x2a0(0x30)
	struct FBlackboardKeySelector BBUnsafeActionRange; // 0x2d0(0x30)
	struct FString UnsafeInteractionID; // 0x300(0x10)
	bool UnsafeActionUsesItemAddons; // 0x310(0x01)
	bool UnsafeActionIsSelfInteraction; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	float UnsafeActionRange; // 0x314(0x04)
	struct FVector ProjectGoalLocationToNavigationExtent; // 0x318(0x0c)
	char pad_324[0x4]; // 0x324(0x04)
	struct UInteractor* _goalInteractor; // 0x328(0x08)
	struct ADBDAIBTController* _aiOwner; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
};

// Class DBDBots.BTService_FindInteractor_Camper
// Size: 0x3a8 (Inherited: 0x340)
struct UBTService_FindInteractor_Camper : UBTService_FindInteractor {
	enum class EFindInteractableCamperFilter StatusFilter; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FAITunableParameter AllyDangerStateGoalWeight; // 0x344(0x10)
	struct FAITunableParameter IncapacitatedAlliesGoalWeight; // 0x354(0x10)
	struct FAITunableParameter CrawlingRecoveryProgressGoalWeight; // 0x364(0x10)
	struct FAITunableParameter CrawlingDeathTimerGoalWeight; // 0x374(0x10)
	struct FAITunableParameter IdealKillerDistanceFromCrawling; // 0x384(0x10)
	struct FAITunableParameter MaxKillerProximityWeight; // 0x394(0x10)
	char pad_3A4[0x4]; // 0x3a4(0x04)
};

// Class DBDBots.BTService_FindInteractor_Exit
// Size: 0x3a8 (Inherited: 0x340)
struct UBTService_FindInteractor_Exit : UBTService_FindInteractor {
	enum class EFindInteractorExitOptions Filter; // 0x340(0x01)
	enum class EFindInteractorOpenConditions OpenCondition; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FBlackboardKeySelector BBFinalExitLocation; // 0x348(0x30)
	float ClosedDoorOffset; // 0x378(0x04)
	float OpenDoorOffset; // 0x37c(0x04)
	bool AbortOnBlockedExitSwitch; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	struct FAITunableParameter OpenedExitGoalWeight; // 0x384(0x10)
	struct FAITunableParameter HatchBonusGoalWeight; // 0x394(0x10)
	char pad_3A4[0x4]; // 0x3a4(0x04)
};

// Class DBDBots.BTService_FindInteractor_Generator
// Size: 0x398 (Inherited: 0x340)
struct UBTService_FindInteractor_Generator : UBTService_FindInteractor {
	enum class EFindInteractableGeneratorStatusFilter StatusFilter; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FAITunableParameter MinRepairRatioFilter; // 0x344(0x10)
	bool UsePerceptionToGetRepairRatio; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct FAITunableParameter MaxRepairGoalWeight; // 0x358(0x10)
	struct FAITunableParameter InfectedStateGoalWeight; // 0x368(0x10)
	struct FAITunableParameter HexRuinGoalWeight; // 0x378(0x10)
	struct FName HexRuinPerkId; // 0x388(0x0c)
	char pad_394[0x4]; // 0x394(0x04)
};

// Class DBDBots.BTService_FindInteractor_Locker
// Size: 0x368 (Inherited: 0x340)
struct UBTService_FindInteractor_Locker : UBTService_FindInteractor {
	enum class EFindInteractableLockerStatusFilter StatusFilter; // 0x340(0x01)
	bool LockerNeedsToBeOpenable; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct TArray<struct FInLockerPerk> PerksToRunInLocker; // 0x348(0x10)
	char pad_358[0x10]; // 0x358(0x10)
};

// Class DBDBots.BTService_FindInteractor_MeatHook
// Size: 0x418 (Inherited: 0x340)
struct UBTService_FindInteractor_MeatHook : UBTService_FindInteractor {
	enum class EFindInteractableMeatHookStatus StatusFilter; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FAITunableParameter AllyDangerStateGoalWeight; // 0x344(0x10)
	struct FAITunableParameter BotDangerStateGoalWeight; // 0x354(0x10)
	struct FAITunableParameter BotInjuredStateGoalWeight; // 0x364(0x10)
	struct FAITunableParameter HumanAllyHookedGoalWeight; // 0x374(0x10)
	struct FAITunableParameter MaxHookTimeGoalWeight; // 0x384(0x10)
	struct FAITunableParameter IncapacitatedAlliesGoalWeight; // 0x394(0x10)
	struct FAITunableParameter IdealKillerDistanceFromHook; // 0x3a4(0x10)
	struct FAITunableParameter MaxKillerProximityWeight; // 0x3b4(0x10)
	struct FAITunableParameter SabotageKillerDistanceToHookScore; // 0x3c4(0x10)
	struct FAITunableParameter SabotageKillerSpeedToHookScore; // 0x3d4(0x10)
	struct FAITunableParameter SabotageHookValidTargetTime; // 0x3e4(0x10)
	float KillerTargetUpdateInterval; // 0x3f4(0x04)
	float UnsafeSabotageHealthyMarginTime; // 0x3f8(0x04)
	float UnsafeSabotageInjuredMarginTime; // 0x3fc(0x04)
	struct FString NoToolboxInteractionID; // 0x400(0x10)
	char pad_410[0x8]; // 0x410(0x08)
};

// Class DBDBots.BTService_FindInteractor_Pallet
// Size: 0x4b0 (Inherited: 0x340)
struct UBTService_FindInteractor_Pallet : UBTService_FindInteractor {
	struct FBlackboardKeySelector BBPickSideRelativelyFrom; // 0x340(0x30)
	enum class EFindInteractablePalletIntentions IntentionFilter; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FName RaisePalletPerkId; // 0x374(0x0c)
	struct FAITunableParameter BrokenGeneratorGoalMaxDistance; // 0x380(0x10)
	struct FAITunableParameter BrokenGeneratorGoalMaxDistanceWeight; // 0x390(0x10)
	struct FAITunableParameter SpawnInSurvivorLOSPenalty; // 0x3a0(0x10)
	struct FAITunableParameter SpawnNearSurvivorMinDistanceSquared; // 0x3b0(0x10)
	struct FAITunableParameter SpawnNearSurvivorPenalty; // 0x3c0(0x10)
	struct FAITunableParameter PlacedNearGamePalletMinDistanceSquared; // 0x3d0(0x10)
	struct FAITunableParameter PlacedNearGamePalletPenalty; // 0x3e0(0x10)
	struct FAITunableParameter ConvincingFactorTolerance; // 0x3f0(0x10)
	bool SkipSafetyCheck; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector AcceptablePalletDropExtent; // 0x404(0x0c)
	struct FBlackboardKeySelector BBEvadePointCrossingDest; // 0x410(0x30)
	float ExtraHealthySurvivorActionTime; // 0x440(0x04)
	float ExtraInjuredSurvivorActionTime; // 0x444(0x04)
	float PalletInteractorLocationOffset; // 0x448(0x04)
	float AcceptableEvadePointCrossingDestDist; // 0x44c(0x04)
	char pad_450[0x60]; // 0x450(0x60)
};

// Class DBDBots.BTService_FindInteractor_Searchable
// Size: 0x350 (Inherited: 0x340)
struct UBTService_FindInteractor_Searchable : UBTService_FindInteractor {
	struct FAITunableParameter WantToKeepEmptyItemPenalty; // 0x340(0x10)
};

// Class DBDBots.BTService_FindInteractor_Totem
// Size: 0x390 (Inherited: 0x340)
struct UBTService_FindInteractor_Totem : UBTService_FindInteractor {
	struct FAITunableParameter InactiveGoalWeightMaxDistance; // 0x340(0x10)
	struct FAITunableParameter InactiveGoalWeightAtMinDistance; // 0x350(0x10)
	struct TArray<struct FAICleansePerkCondition> CleansePerks; // 0x360(0x10)
	bool SearchUsingBoundPerks; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct TArray<struct FName> BoundPerkIds; // 0x378(0x10)
	bool OnlyWhenInjured; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
};

// Class DBDBots.BTService_FindInteractor_Trap
// Size: 0x388 (Inherited: 0x340)
struct UBTService_FindInteractor_Trap : UBTService_FindInteractor {
	struct FAITunableParameter HelpDestroyDemoPortal; // 0x340(0x10)
	struct FAIRoll SeeStandardTrapRoll; // 0x350(0x24)
	float TrapGroundLocationOffset; // 0x374(0x04)
	struct TArray<struct FInteractableWithInteractionId> InteractableOnlyWithInteractionId; // 0x378(0x10)
};

// Class DBDBots.BTService_FindInteractor_WishList
// Size: 0x358 (Inherited: 0x340)
struct UBTService_FindInteractor_WishList : UBTService_FindInteractor {
	struct FGameplayTag WishListTag; // 0x340(0x0c)
	char pad_34C[0xc]; // 0x34c(0x0c)
};

// Class DBDBots.BTService_FindObject
// Size: 0x208 (Inherited: 0x78)
struct UBTService_FindObject : UBTService {
	enum class EKillerAbilities killerAbility; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FBlackboardKeySelector BBObject; // 0x80(0x30)
	struct FBlackboardKeySelector BBObjectLocation; // 0xb0(0x30)
	bool RunEQSWhenFoundObject; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xe8(0x50)
	struct FBlackboardKeySelector BBEQSResultLocation; // 0x138(0x30)
	bool RunDynamicSubtreeWhenFoundObject; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FGameplayTag DynamicSubtreeTag; // 0x16c(0x0c)
	struct UBehaviorTree* DynamicSubtree; // 0x178(0x08)
	struct ADBDAIBTController* _aiOwner; // 0x180(0x08)
	struct ASlasherPlayer* _killer; // 0x188(0x08)
	char pad_190[0x78]; // 0x190(0x78)
};

// Class DBDBots.BTService_FindObject_DangerObject
// Size: 0x298 (Inherited: 0x208)
struct UBTService_FindObject_DangerObject : UBTService_FindObject {
	bool GetDangerObjectsFromHostileStimulus; // 0x208(0x01)
	enum class ESurvivorFleePathStrategy FleePathStrategy; // 0x209(0x01)
	char pad_20A[0x2]; // 0x20a(0x02)
	float HideFromLosCooldown; // 0x20c(0x04)
	struct FAITunableParameter NotSensedReactionDelay; // 0x210(0x10)
	struct FAITunableParameter SensedReactionDelay; // 0x220(0x10)
	char pad_230[0x18]; // 0x230(0x18)
	struct TMap<struct UDBDDangerPredictionComponent*, struct FDangerObjectData> _lastDangerObjectsMap; // 0x248(0x50)
};

// Class DBDBots.BTService_FindObject_K32EmpTarget
// Size: 0x298 (Inherited: 0x208)
struct UBTService_FindObject_K32EmpTarget : UBTService_FindObject {
	struct TArray<struct AActor*> ValidGoalObjectClasses; // 0x208(0x10)
	float NearGoalPodHorizontalDistance; // 0x218(0x04)
	float NearGoalPodVerticalDistance; // 0x21c(0x04)
	float NearGoalSurvivorHorizontalDistance; // 0x220(0x04)
	float NearGoalSurvivorVerticalDistance; // 0x224(0x04)
	float OtherSurvivorNearTargetDistance; // 0x228(0x04)
	struct FVector NavMeshTargetLocationExtents; // 0x22c(0x0c)
	float CheckDynamicSubtreeInterval; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FBlackboardKeySelector BBOriginalFocusedActor; // 0x240(0x30)
	char pad_270[0x28]; // 0x270(0x28)
};

// Class DBDBots.BTService_Flee
// Size: 0x180 (Inherited: 0x78)
struct UBTService_Flee : UBTService {
	char pad_78[0x8]; // 0x78(0x08)
	struct FBlackboardKeySelector BBFleePath; // 0x80(0x30)
	struct FBlackboardKeySelector BBShouldFallPallet; // 0xb0(0x30)
	struct FBlackboardKeySelector BBEvadePointCrossingDest; // 0xe0(0x30)
	struct UPathStrategySelector* PathStrategySelectorClass; // 0x110(0x08)
	struct TArray<struct UObject*> IgnoreOnEndObjectInFocusCooldownTypes; // 0x118(0x10)
	float OnEndObjectInFocusCooldown; // 0x128(0x04)
	struct FAITunableParameter ShouldFallPalletUnderHostileHorizontalRange; // 0x12c(0x10)
	float ShouldFallPalletUnderHostileVerticalRange; // 0x13c(0x04)
	float ClearFleePathBBKeyDelay; // 0x140(0x04)
	char pad_144[0x14]; // 0x144(0x14)
	struct UNavMovePath* _activePath; // 0x158(0x08)
	struct TArray<struct UObject*> _lostFocusedObjects; // 0x160(0x10)
	struct UPathStrategySelector* _strategySelector; // 0x170(0x08)
	char pad_178[0x8]; // 0x178(0x08)
};

// Class DBDBots.BTService_GetPinLocation
// Size: 0xc0 (Inherited: 0x80)
struct UBTService_GetPinLocation : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBToSetKey; // 0x80(0x30)
	struct FGameplayTag PinTag; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class DBDBots.BTService_GetPinObject
// Size: 0xc0 (Inherited: 0x80)
struct UBTService_GetPinObject : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBToSetKey; // 0x80(0x30)
	struct FGameplayTag PinTag; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class DBDBots.BTService_GoalCoordinator
// Size: 0x110 (Inherited: 0x78)
struct UBTService_GoalCoordinator : UBTService {
	struct FAITunableParameter GoalChangeWeightBuffer; // 0x78(0x10)
	struct FBlackboardKeySelector BBLockedIntoGoal; // 0x88(0x30)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TMap<struct UObject*, struct FAIGoalWeightContainer> _managedGoals; // 0xc0(0x50)
};

// Class DBDBots.BTService_InputAtTiming
// Size: 0x88 (Inherited: 0x80)
struct UBTService_InputAtTiming : UBTService_OnRelevantBase {
	enum class EPawnInputPressTypes inputType; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class DBDBots.BTService_Patrol
// Size: 0x158 (Inherited: 0x78)
struct UBTService_Patrol : UBTService {
	struct FBlackboardKeySelector BBFilterKey; // 0x78(0x30)
	enum class EBasicKeyOperation FilterOperation; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FVector NavMeshFindLocationExtents; // 0xac(0x0c)
	float MinPatrolInvestigationDistance; // 0xb8(0x04)
	float PatrolPointsValidityCheckInterval; // 0xbc(0x04)
	struct FBlackboardKeySelector BBPatrolPointOwner; // 0xc0(0x30)
	struct FBlackboardKeySelector BBPatrolLocation; // 0xf0(0x30)
	struct FBlackboardKeySelector BBGoToNextPatrolLocation; // 0x120(0x30)
	char pad_150[0x8]; // 0x150(0x08)
};

// Class DBDBots.BTService_Patrol_Discovery
// Size: 0x168 (Inherited: 0x158)
struct UBTService_Patrol_Discovery : UBTService_Patrol {
	bool RejectPatrolPointIfInPressureZone; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	int32_t MaxFindRandomLocationOnTileAttempts; // 0x15c(0x04)
	int32_t FirstFindOnNbNeighborTiles; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// Class DBDBots.BTService_Patrol_PointOfInterest
// Size: 0x198 (Inherited: 0x158)
struct UBTService_Patrol_PointOfInterest : UBTService_Patrol {
	float OnEnterPatrolRefreshPointsDelay; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FBlackboardKeySelector BBMoveAroundPatrolLocation; // 0x160(0x30)
	float MoveAroundPatrolPointAboveStimulusStrength; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// Class DBDBots.BTService_PushObjectFocus
// Size: 0xa8 (Inherited: 0x78)
struct UBTService_PushObjectFocus : UBTService {
	struct FBlackboardKeySelector BBFocusObj; // 0x78(0x30)
};

// Class DBDBots.BTService_RunSkills
// Size: 0xc0 (Inherited: 0x78)
struct UBTService_RunSkills : UBTService {
	struct FGameplayTag Context; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector BBFilterKey; // 0x88(0x30)
	enum class EBasicKeyOperation FilterOperation; // 0xb8(0x01)
	bool RunEveryFrame; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// Class DBDBots.BTService_SetBBEntry
// Size: 0xd0 (Inherited: 0x80)
struct UBTService_SetBBEntry : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBToSetKey; // 0x80(0x30)
	struct FString ToSetValue; // 0xb0(0x10)
	struct FAITunableParameter RandomSetChance; // 0xc0(0x10)
};

// Class DBDBots.BTService_SetBBEntryTime
// Size: 0xb0 (Inherited: 0x80)
struct UBTService_SetBBEntryTime : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBToSetKey; // 0x80(0x30)
};

// Class DBDBots.BTService_SetFocusCooldown
// Size: 0xc8 (Inherited: 0x80)
struct UBTService_SetFocusCooldown : UBTService_OnRelevantBase {
	struct FBlackboardKeySelector BBOnObject; // 0x80(0x30)
	struct FName ContextName; // 0xb0(0x0c)
	bool InfiniteDuration; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float Duration; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class DBDBots.BTService_SetMovementMode
// Size: 0x80 (Inherited: 0x78)
struct UBTService_SetMovementMode : UBTService {
	enum class ECharacterMovementTypes OnEnterMovementMode; // 0x78(0x01)
	enum class ECharacterMovementTypes OnExitMovementMode; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class DBDBots.BTService_SetPathSpeedFactor
// Size: 0x80 (Inherited: 0x78)
struct UBTService_SetPathSpeedFactor : UBTService {
	float SpeedFactor; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class DBDBots.BTService_SetTagCooldown
// Size: 0x98 (Inherited: 0x80)
struct UBTService_SetTagCooldown : UBTService_OnRelevantBase {
	struct FGameplayTag CooldownTag; // 0x80(0x0c)
	float CooldownDuration; // 0x8c(0x04)
	bool bAddToExistingDuration; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class DBDBots.BTService_StateMonitor
// Size: 0xd8 (Inherited: 0x78)
struct UBTService_StateMonitor : UBTService {
	struct FBlackboardKeySelector BBIsIntroCompleted; // 0x78(0x30)
	struct FBlackboardKeySelector BBDifficultyLevel; // 0xa8(0x30)
};

// Class DBDBots.BTService_StateMonitor_Camper
// Size: 0x570 (Inherited: 0xd8)
struct UBTService_StateMonitor_Camper : UBTService_StateMonitor {
	struct FBlackboardKeySelector BBDamageState; // 0xd8(0x30)
	struct FBlackboardKeySelector BBImmoblizedState; // 0x108(0x30)
	struct FBlackboardKeySelector BBGuidedState; // 0x138(0x30)
	struct FBlackboardKeySelector BBEscapedState; // 0x168(0x30)
	struct FBlackboardKeySelector BBIsInInjuredBleedout; // 0x198(0x30)
	struct FBlackboardKeySelector BBDyingTimerPercentLeft; // 0x1c8(0x30)
	struct FBlackboardKeySelector BBItemType; // 0x1f8(0x30)
	struct FBlackboardKeySelector BBItemCharge; // 0x228(0x30)
	struct FBlackboardKeySelector BBIsHoldingEmptyItem; // 0x258(0x30)
	float EmptyItemChargeThreshold; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FBlackboardKeySelector BBSpecialItemID; // 0x290(0x30)
	struct FBlackboardKeySelector BBIsChased; // 0x2c0(0x30)
	struct FBlackboardKeySelector BBWasInStimulusSight; // 0x2f0(0x30)
	struct FBlackboardKeySelector BBWasBeingAimedAt; // 0x320(0x30)
	struct FBlackboardKeySelector BBIsBeingAimedAt; // 0x350(0x30)
	struct FBlackboardKeySelector BBIsBeingAttacked; // 0x380(0x30)
	struct FBlackboardKeySelector BBIsChained; // 0x3b0(0x30)
	struct FBlackboardKeySelector BBIsInPressureZone; // 0x3e0(0x30)
	struct FBlackboardKeySelector BBIsInActivatedRBT; // 0x410(0x30)
	struct FBlackboardKeySelector BBIsInDeathTimer; // 0x440(0x30)
	float DeathTimerEndGamePrecent; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FBlackboardKeySelector BBHasCrowAttached; // 0x478(0x30)
	struct FBlackboardKeySelector BBLastTrapSideStepExpirationTime; // 0x4a8(0x30)
	struct FBlackboardKeySelector BBLastAskedToMoveTime; // 0x4d8(0x30)
	struct FBlackboardKeySelector BBPreventDroppingEmptyItems; // 0x508(0x30)
	struct FBlackboardKeySelector BBIgnoreGoalPressure; // 0x538(0x30)
	float ChaseUnseenMinimumKillerRange; // 0x568(0x04)
	float ChaseSeenMinimumKillerRange; // 0x56c(0x04)
};

// Class DBDBots.BTService_StateMonitor_Slasher
// Size: 0x108 (Inherited: 0xd8)
struct UBTService_StateMonitor_Slasher : UBTService_StateMonitor {
	struct FBlackboardKeySelector BBIsCarrying; // 0xd8(0x30)
};

// Class DBDBots.BTService_StimuliMonitor
// Size: 0x1e8 (Inherited: 0x78)
struct UBTService_StimuliMonitor : UBTService {
	struct FBlackboardKeySelector BBStimulusOriginLocation; // 0x78(0x30)
	struct FBlackboardKeySelector BBStimulusNavLocation; // 0xa8(0x30)
	struct FBlackboardKeySelector BBStimulusActor; // 0xd8(0x30)
	struct FBlackboardKeySelector BBStimulusInSight; // 0x108(0x30)
	struct FBlackboardKeySelector BBStimulusWasInSight; // 0x138(0x30)
	float StimulusWasInSightDuration; // 0x168(0x04)
	struct FAITunableParameter StimuliRefreshInterval; // 0x16c(0x10)
	float ExtrapolateLoseSightDuration; // 0x17c(0x04)
	struct FVector NavMeshFindLocationExtents; // 0x180(0x0c)
	float SeenFriendlyStimuliExpiryInSeconds; // 0x18c(0x04)
	float ForcedStimulusInSightDistance; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct TMap<struct AActor*, float> _seenFriendlyStimuli; // 0x198(0x50)
};

// Class DBDBots.BTService_StimuliMonitor_Camper
// Size: 0x250 (Inherited: 0x1e8)
struct UBTService_StimuliMonitor_Camper : UBTService_StimuliMonitor {
	struct FBlackboardKeySelector BBTerrorPressure; // 0x1e8(0x30)
	struct FBlackboardKeySelector BBIsFleeing; // 0x218(0x30)
	float LastValidTerrorRadiusStimulusMemoryLifeTime; // 0x248(0x04)
	float IgnoreNonKillerStimulusWhileInSprintDistanceSquared; // 0x24c(0x04)
};

// Class DBDBots.BTService_StimuliMonitor_Slasher
// Size: 0x308 (Inherited: 0x1e8)
struct UBTService_StimuliMonitor_Slasher : UBTService_StimuliMonitor {
	struct FBlackboardKeySelector BBInvestigateStimulusLocation; // 0x1e8(0x30)
	struct FBlackboardKeySelector BBInvestigateStimulusActor; // 0x218(0x30)
	struct FBlackboardKeySelector BBInBehaviorInvestigationStep; // 0x248(0x30)
	struct FBlackboardKeySelector BBIsBlind; // 0x278(0x30)
	struct FBlackboardKeySelector BBChasedActor; // 0x2a8(0x30)
	struct FAITunableParameter UseNextStimulusInvestigationAfterChaseDelay; // 0x2d8(0x10)
	float IgnorePreviousChasedStimulusActorDelay; // 0x2e8(0x04)
	float DefaultStimulusToInvestigateMaxAge; // 0x2ec(0x04)
	float KOStimulusToInvestigateMaxAge; // 0x2f0(0x04)
	float NextStimulusInvestigationMinRange; // 0x2f4(0x04)
	float CantSeeOverBlindRatio; // 0x2f8(0x04)
	float FavorizeStandingTargetInRange; // 0x2fc(0x04)
	float FavorizeStandingTargetOutRange; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
};

// Class DBDBots.BTTask_ClearBBEntry
// Size: 0xa8 (Inherited: 0x78)
struct UBTTask_ClearBBEntry : UBTTaskNode {
	struct FBlackboardKeySelector BBToResetKey; // 0x78(0x30)
};

// Class DBDBots.BTTask_CopyBBEntry
// Size: 0xe0 (Inherited: 0x78)
struct UBTTask_CopyBBEntry : UBTTaskNode {
	struct FBlackboardKeySelector BBFrom; // 0x78(0x30)
	struct FBlackboardKeySelector BBTo; // 0xa8(0x30)
	bool CopyOnlyValidKeyValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class DBDBots.BTTask_ExtMoveDirecltyToward
// Size: 0xd0 (Inherited: 0xc8)
struct UBTTask_ExtMoveDirecltyToward : UBTTask_MoveDirectlyToward {
	enum class ECharacterMovementTypes MovementMode; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class DBDBots.BTTask_ExtMoveTo
// Size: 0x248 (Inherited: 0xc0)
struct UBTTask_ExtMoveTo : UBTTask_MoveTo {
	struct FBlackboardKeySelector BBStrafeFocus; // 0xc0(0x30)
	enum class EExtMoveToStrafeFocusOptions StrafeFocus; // 0xf0(0x01)
	bool StrafeFocusPitch; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	float StrafeNearFocusModeUnderDistance; // 0xf4(0x04)
	float IntermittentOnStrafeFocusInterval; // 0xf8(0x04)
	float IntermittentOnStrafeFocusDeviation; // 0xfc(0x04)
	float IntermittentOffStrafeFocusInterval; // 0x100(0x04)
	float IntermittentOffStrafeFocusDeviation; // 0x104(0x04)
	float EndMoveStrafeFocusPrecisionAngle; // 0x108(0x04)
	bool StrafeFocusOwnerOnComponentBBKey; // 0x10c(0x01)
	enum class ECharacterMovementTypes ToGoalMovementMode; // 0x10d(0x01)
	enum class ECharacterMovementTypes NearGoalMovementMode; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float NearGoalModeUnderDistance; // 0x110(0x04)
	float NormalMoveUnderNavLinkDistance; // 0x114(0x04)
	struct FBlackboardKeySelector BBIgnoreGroupAvoidance; // 0x118(0x30)
	float BlockedCheckInterval; // 0x148(0x04)
	int32_t BlockedContinueTimes; // 0x14c(0x04)
	float BlockedSpeedPercent; // 0x150(0x04)
	char MaxTriesToRepathAroundBlocker; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct TArray<struct FMovementModeNearActor> MovementModesNearActors; // 0x158(0x10)
	float RepathInterval; // 0x168(0x04)
	bool UseAccelerationForPaths; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float PathReachedPointRadius; // 0x170(0x04)
	struct FName UseContextualAcceptableRadius; // 0x174(0x0c)
	float FindRelevantDangerInterval; // 0x180(0x04)
	float UpdateTraverseStatesInterval; // 0x184(0x04)
	bool FailTaskOnUndodgeableDangerObject; // 0x188(0x01)
	bool IgnoreDangerObjects; // 0x189(0x01)
	char pad_18A[0x16]; // 0x18a(0x16)
	struct TMap<struct AActor*, bool> _seenActorsMap; // 0x1a0(0x50)
	char pad_1F0[0x58]; // 0x1f0(0x58)
};

// Class DBDBots.BTTask_ExtWait
// Size: 0xa0 (Inherited: 0x80)
struct UBTTask_ExtWait : UBTTask_Wait {
	struct FAITunableParameter WaitTimeInterval; // 0x80(0x10)
	struct FAITunableParameter WaitRandomDeviation; // 0x90(0x10)
};

// Class DBDBots.BTTask_FleeMoveTo
// Size: 0x260 (Inherited: 0x248)
struct UBTTask_FleeMoveTo : UBTTask_ExtMoveTo {
	float InScrambleMovementMinDistance; // 0x248(0x04)
	float OutScrambleMovementMinDistance; // 0x24c(0x04)
	float InScrambleMovementInterval; // 0x250(0x04)
	float LoopScrambleMovementInterval; // 0x254(0x04)
	float LoopScrambleMovementRandomDeviation; // 0x258(0x04)
	float CrouchWithinLastEvadeLoopPointRadius; // 0x25c(0x04)
};

// Class DBDBots.BTTask_InputPress
// Size: 0x98 (Inherited: 0x78)
struct UBTTask_InputPress : UBTTaskNode {
	enum class EPawnInputPressTypes Input; // 0x78(0x01)
	enum class ETaskInputPressModes InputMode; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FAITunableParameter InputPressLoopInterval; // 0x7c(0x10)
	bool LockInput; // 0x8c(0x01)
	char pad_8D[0xb]; // 0x8d(0x0b)
};

// Class DBDBots.BTTask_Interact
// Size: 0xb8 (Inherited: 0x78)
struct UBTTask_Interact : UBTTaskNode {
	struct FBlackboardKeySelector BBInteractorObj; // 0x78(0x30)
	enum class EPawnInputPressTypes Input; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float OnFailFocusCooldownDuration; // 0xac(0x04)
	bool PropagateCooldownOnInteractable; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float FailStartInteractTimeLimit; // 0xb4(0x04)
};

// Class DBDBots.BTTask_RotateToBBInteractor
// Size: 0xf0 (Inherited: 0xb0)
struct UBTTask_RotateToBBInteractor : UBTTask_BlueprintBase {
	struct FBlackboardKeySelector BBInteractorObj; // 0xb0(0x30)
	struct TArray<struct FString> InteractionIds; // 0xe0(0x10)
};

// Class DBDBots.BTTask_RunSkills
// Size: 0x88 (Inherited: 0x78)
struct UBTTask_RunSkills : UBTTaskNode {
	struct FGameplayTag Context; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class DBDBots.BTTask_SetBBEntry
// Size: 0xb8 (Inherited: 0x78)
struct UBTTask_SetBBEntry : UBTTaskNode {
	struct FBlackboardKeySelector BBToSetKey; // 0x78(0x30)
	struct FString ToSetValue; // 0xa8(0x10)
};

// Class DBDBots.BTTask_SetBBEntryTime
// Size: 0xa8 (Inherited: 0x78)
struct UBTTask_SetBBEntryTime : UBTTaskNode {
	struct FBlackboardKeySelector BBToSetKey; // 0x78(0x30)
};

// Class DBDBots.BTTask_SetFleeLoopCooldown
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_SetFleeLoopCooldown : UBTTaskNode {
	float Duration; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class DBDBots.BTTask_SetFocusCooldown
// Size: 0xc0 (Inherited: 0x78)
struct UBTTask_SetFocusCooldown : UBTTaskNode {
	struct FBlackboardKeySelector BBOnObject; // 0x78(0x30)
	struct FName ContextName; // 0xa8(0x0c)
	bool InfiniteDuration; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float Duration; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class DBDBots.BTTask_SetIsChased
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_SetIsChased : UBTTaskNode {
	bool ToSetValue; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class DBDBots.BTTask_SetMovementMode
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_SetMovementMode : UBTTaskNode {
	enum class ECharacterMovementTypes MovementMode; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class DBDBots.BTTask_SetRandomNavPoint
// Size: 0xf0 (Inherited: 0x78)
struct UBTTask_SetRandomNavPoint : UBTTaskNode {
	struct FBlackboardKeySelector BBFromLocation; // 0x78(0x30)
	struct FBlackboardKeySelector BBToLocation; // 0xa8(0x30)
	float MinAroundRadius; // 0xd8(0x04)
	float MaxAroundRadius; // 0xdc(0x04)
	int32_t MaxNbAttempts; // 0xe0(0x04)
	int32_t MaxSafeNbAttempts; // 0xe4(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xe8(0x08)
};

// Class DBDBots.BTTask_StealthMoveTo
// Size: 0x248 (Inherited: 0x248)
struct UBTTask_StealthMoveTo : UBTTask_ExtMoveTo {
};

// Class DBDBots.DBDAIBTController
// Size: 0x770 (Inherited: 0x638)
struct ADBDAIBTController : ADBDAIController {
	struct UBehaviorTree* BehaviorTree; // 0x638(0x08)
	struct TArray<struct UAISkill*> BaseSkills; // 0x640(0x10)
	struct TArray<struct UAISkill*> RoleSkills; // 0x650(0x10)
	struct TArray<struct FAISkillPerk> PerkSkills; // 0x660(0x10)
	bool ListenToAttackEvents; // 0x670(0x01)
	char pad_671[0x7]; // 0x671(0x07)
	struct UDBDAIPerceptionComponent* _dbdPerception; // 0x678(0x08)
	struct UDBDBlackboardComponent* _dbdBlackboard; // 0x680(0x08)
	struct UDBDPathFollowingComponent* _dbdPathFollowing; // 0x688(0x08)
	struct UDBDBehaviorTreeComponent* _dbdBehaviorTree; // 0x690(0x08)
	struct UDBDNavMeshExplorerComponent* _navMeshExplorer; // 0x698(0x08)
	struct UDBDAIStateComponent* _aiState; // 0x6a0(0x08)
	struct UDBDAIGoalComponent* _aiGoal; // 0x6a8(0x08)
	char pad_6B0[0x8]; // 0x6b0(0x08)
	struct TMap<struct FGameplayTag, struct FAISkillDynamicSubtreeStruct> _setDynamicSubtrees; // 0x6b8(0x50)
	struct TArray<struct UAISkill*> _aiSkills; // 0x708(0x10)
	char pad_718[0x58]; // 0x718(0x58)

	void OnPawnBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function DBDBots.DBDAIBTController.OnPawnBump // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x4c81720
	void Authority_FinishedPlaying(); // Function DBDBots.DBDAIBTController.Authority_FinishedPlaying // (Final|Native|Private) // @ game+0x4c81700
};

// Class DBDBots.DBDAIBTUtilities
// Size: 0x30 (Inherited: 0x30)
struct UDBDAIBTUtilities : UDBDAIUtilities {
};

// Class DBDBots.DBDAIGoalComponent
// Size: 0x160 (Inherited: 0xb8)
struct UDBDAIGoalComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TMap<struct UObject*, struct FAIGoal> _activeGoals; // 0xc0(0x50)
	struct TMap<struct UObject*, struct FAIGoalWeightContainer> _foundWeightedGoals; // 0x110(0x50)
};

// Class DBDBots.DBDAIPerceptionComponent
// Size: 0x3e8 (Inherited: 0x198)
struct UDBDAIPerceptionComponent : UAIPerceptionComponent {
	char pad_198[0x20]; // 0x198(0x20)
	struct TArray<enum class EAttackType> RangedAttackTypes; // 0x1b8(0x10)
	struct TArray<enum class EKillerAbilities> RangedKillerAbilities; // 0x1c8(0x10)
	bool UseSimulatedCameraLocationForStimulusReceiverLocation; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float CameraOffset; // 0x1dc(0x04)
	float StimulusHalfFOV; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct TMap<struct UObject*, struct UObject*> _objOverridingSenses; // 0x1e8(0x50)
	struct TArray<struct UAISenseConfig*> _originalSenseConfigs; // 0x238(0x10)
	struct TArray<struct FAIDetectedStimulus> _detectedHostileStimuli; // 0x248(0x10)
	struct FAIDetectedStimulus _bestDetectedHostileStimulus; // 0x258(0x88)
	struct FAIDetectedStimulus _lastBestDetectedHostileStimulusInMemory; // 0x2e0(0x88)
	char pad_368[0x60]; // 0x368(0x60)
	struct FAITunableParameter _activePhaseWalkingNoiseMaxRange; // 0x3c8(0x10)
	float ThreatDividerForNonControlledActor; // 0x3d8(0x04)
	float HighThreatDistanceForNonControlledActor; // 0x3dc(0x04)
	float CurrentThreatDivider; // 0x3e0(0x04)
	float TerrorDistanceMultiplierForNonControlledActor; // 0x3e4(0x04)
};

// Class DBDBots.DBDAIStateComponent
// Size: 0x330 (Inherited: 0xb8)
struct UDBDAIStateComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	int32_t UnsafeStateAtHookedCount; // 0xc0(0x04)
	int32_t DireStateAtHookedCount; // 0xc4(0x04)
	float MidObjectiveStateProgressionRatio; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TMap<enum class EAIObjectiveState, struct FDangerStateGameStateMapContainer> GameStateTable; // 0xd0(0x50)
	struct TMap<enum class EAIDifficultyLevel, struct FGameStatePressureZoneLevelMapContainer> PressureZoneLevelTable; // 0x120(0x50)
	struct TMap<enum class EAIDifficultyLevel, float> MinRadiusPressureZoneHabituation; // 0x170(0x50)
	struct TMap<enum class EAIPressureZoneLevel, float> PressureZoneHighToLowRangeLerpRatios; // 0x1c0(0x50)
	float DefaultChasedPhaseOutDuration; // 0x210(0x04)
	float InjuredChasedPhaseOutDuration; // 0x214(0x04)
	float DefaultBeingAimedAtPhaseOutDuration; // 0x218(0x04)
	float InjuredBeingAimedAtPhaseOutDuration; // 0x21c(0x04)
	float StimulusWasInSightDuration; // 0x220(0x04)
	float LoSFoVToStimulusCheckPeriod; // 0x224(0x04)
	float LoSToStimulusValidDuration; // 0x228(0x04)
	float FoVToStimulusValidDuration; // 0x22c(0x04)
	float BlockingSurvivorLocationLifetime; // 0x230(0x04)
	float BlockingSurvivorLocationAcceptableDistSq; // 0x234(0x04)
	float MaximumBlockingSurvivorLocationDist; // 0x238(0x04)
	float NotMovingCheckInterval; // 0x23c(0x04)
	float NotMovingSpeedPercent; // 0x240(0x04)
	char NotMovingContinuousTimes; // 0x244(0x01)
	char pad_245[0xeb]; // 0x245(0xeb)

	void OnUniqueGameplayEvent(enum class EDBDScoreTypes EventType, float Amount, struct AActor* Instigator, struct AActor* Target); // Function DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent // (Final|Native|Private) // @ game+0x4c81ae0
	void OnStartAimingEventDispatched(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched // (Final|Native|Private|HasOutParms) // @ game+0x4c819d0
	void OnSpecialAttackEventDispatched(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched // (Final|Native|Private|HasOutParms) // @ game+0x4c818c0
};

// Class DBDBots.DBDBehaviorTreeComponent
// Size: 0x300 (Inherited: 0x298)
struct UDBDBehaviorTreeComponent : UBehaviorTreeComponent {
	char pad_298[0x8]; // 0x298(0x08)
	struct TMap<struct UObject*, struct FRelevantNodeMemory> _lastRelevantNodeMemories; // 0x2a0(0x50)
	struct TArray<struct UObject*> _createdObjects; // 0x2f0(0x10)
};

// Class DBDBots.DBDBlackboardComponent
// Size: 0x4b0 (Inherited: 0x1c0)
struct UDBDBlackboardComponent : UBlackboardComponent {
	char pad_1C0[0x10]; // 0x1c0(0x10)
	struct TMap<struct UObject*, struct FMindFocusObjectEntry> _mindFocusEntries; // 0x1d0(0x50)
	struct TMap<struct FGameplayTag, struct FVector> _pinLocations; // 0x220(0x50)
	struct TMap<struct FGameplayTag, struct UObject*> _pinObjects; // 0x270(0x50)
	struct TMap<struct UObject*, float> _lostMindFocusEntries; // 0x2c0(0x50)
	struct TMap<struct FGameplayTag, struct FWeightedWishedObjectMapContainer> _objectWishListMap; // 0x310(0x50)
	struct TSet<struct UObject*> _discoveredObjects; // 0x360(0x50)
	struct TSet<struct UObject*> _intentionValidators; // 0x3b0(0x50)
	struct TMap<struct AActor*, struct FDistanceToTargetData> _killerToTargetDistances; // 0x400(0x50)
	struct TSet<struct APallet*> _convincingDreamPallets; // 0x450(0x50)
	struct TArray<struct UAISkill*> _dropItemLocks; // 0x4a0(0x10)
};

// Class DBDBots.DBDNavLinkCustomComponent
// Size: 0x208 (Inherited: 0x198)
struct UDBDNavLinkCustomComponent : UNavLinkCustomComponent {
	struct FVector BaseLinkRelativeStart; // 0x198(0x0c)
	struct FVector BaseLinkRelativeEnd; // 0x1a4(0x0c)
	enum class ENavLinkDirection BaseLinkDirection; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float AutoSnapSmartLinkPointsUpHeight; // 0x1b4(0x04)
	float AutoSnapSmartLinkPointsDownHeight; // 0x1b8(0x04)
	enum class ECollisionChannel AutoSnapCollisionChannel; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	float AutoSmartLinkDirectionMaxHeight; // 0x1c0(0x04)
	bool DisableSmartLinkOnPathObstruction; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	float PathObstructionTestDistance; // 0x1c8(0x04)
	float PathObstructionTestShapeRadius; // 0x1cc(0x04)
	float PathObstructionTestHeightOffset; // 0x1d0(0x04)
	enum class ECollisionChannel PathObstructionCollisionChannel; // 0x1d4(0x01)
	bool DisableOtherSmartLinkInProximityOnEnable; // 0x1d5(0x01)
	bool EnableOtherSmartLinkInProximityOnDisable; // 0x1d6(0x01)
	char pad_1D7[0x1]; // 0x1d7(0x01)
	float OtherSmartLinkInProximitySearchDistance; // 0x1d8(0x04)
	bool ShowDebugInfo; // 0x1dc(0x01)
	char pad_1DD[0x1b]; // 0x1dd(0x1b)
	struct TArray<struct ANavLinkProxy*> _navLinkProxyInProximity; // 0x1f8(0x10)

	void OnLevelReadyToPlay(); // Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4c86240
};

// Class DBDBots.DBDNavMeshExplorerComponent
// Size: 0x140 (Inherited: 0xb8)
struct UDBDNavMeshExplorerComponent : UActorComponent {
	float ExploreAtAgentMoveDistance; // 0xb8(0x04)
	float ExploreAtInterval; // 0xbc(0x04)
	struct FAITunableParameter ExplorationBoxHalfExtent; // 0xc0(0x10)
	int32_t FullyAutoExploredAtGameTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UDBDPathFollowingComponent* _pathFollowingComponent; // 0xd8(0x08)
	char pad_E0[0x60]; // 0xe0(0x60)
};

// Class DBDBots.DBDPathFollowingComponent
// Size: 0x488 (Inherited: 0x258)
struct UDBDPathFollowingComponent : UPathFollowingComponent {
	char pad_258[0x10]; // 0x258(0x10)
	float UnblockPathDeviationRadius; // 0x268(0x04)
	float UnblockPathTimeLimit; // 0x26c(0x04)
	float UnblockPathReachDistance; // 0x270(0x04)
	char pad_274[0x124]; // 0x274(0x124)
	struct TSet<struct ANavLinkProxy*> _onNavLinkProxies; // 0x398(0x50)
	char pad_3E8[0xa0]; // 0x3e8(0xa0)
};

// Class DBDBots.EnvQueryContext_CenterOfMap
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_CenterOfMap : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_EscapeDoors
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_EscapeDoors : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_FriendlyDangerObjects
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_FriendlyDangerObjects : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_Generators
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Generators : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_Hooks
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Hooks : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_IncompleteGenerators
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_IncompleteGenerators : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_K33ControlStations
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_K33ControlStations : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_Lockers
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Lockers : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_PinActor
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_PinActor : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_PinLocation
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_PinLocation : UEnvQueryContext {
};

// Class DBDBots.EnvQueryContext_TerrorRadius
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_TerrorRadius : UEnvQueryContext {
};

// Class DBDBots.EnvQueryTest_ApproachLureableDangerObject
// Size: 0x250 (Inherited: 0x238)
struct UEnvQueryTest_ApproachLureableDangerObject : UEnvQueryTest {
	struct UEnvQueryContext* QuerierContext; // 0x238(0x08)
	struct UEnvQueryContext* TargetContext; // 0x240(0x08)
	float TowardDangerObjectMaxAngle; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// Class DBDBots.EnvQueryTest_Basement
// Size: 0x3a0 (Inherited: 0x238)
struct UEnvQueryTest_Basement : UEnvQueryTest {
	struct UEnvQueryContext* QuerierContext; // 0x238(0x08)
	struct FAIDataProviderFloatValue BasementBottomPenalty; // 0x240(0x40)
	struct FAIDataProviderBoolValue ApplyEnteringPenaltyIfAlreadyInside; // 0x280(0x40)
	struct FAIDataProviderFloatValue EnteringBasementFixedPenalty; // 0x2c0(0x40)
	struct FAIDataProviderBoolValue Invert; // 0x300(0x40)
	struct FAIDataProviderFloatValue BasementBoxExtentShrink; // 0x340(0x40)
	char pad_380[0x20]; // 0x380(0x20)
};

// Class DBDBots.EnvQueryTest_IsInDangerObjectRange
// Size: 0x400 (Inherited: 0x238)
struct UEnvQueryTest_IsInDangerObjectRange : UEnvQueryTest {
	struct UEnvQueryContext* QuerierContext; // 0x238(0x08)
	struct FAIDataProviderBoolValue Invert; // 0x240(0x40)
	struct FAIDataProviderBoolValue MustHaveDangerVision; // 0x280(0x40)
	struct FAIDataProviderBoolValue CheckIfAnyBodyPartInDangerArea; // 0x2c0(0x40)
	struct FAIDataProviderBoolValue UseCrouchHeight; // 0x300(0x40)
	struct FAIDataProviderFloatValue SurvivorStandHeight; // 0x340(0x40)
	struct FAIDataProviderFloatValue SurvivorCrouchHeight; // 0x380(0x40)
	struct FAIDataProviderFloatValue SurvivorRadius; // 0x3c0(0x40)
};

// Class DBDBots.EnvQueryTest_IsValidDestination
// Size: 0x328 (Inherited: 0x238)
struct UEnvQueryTest_IsValidDestination : UEnvQueryTest {
	struct UEnvQueryContext* QuerierContext; // 0x238(0x08)
	struct FAIDataProviderBoolValue Invert; // 0x240(0x40)
	struct FAIDataProviderBoolValue ExcludeEscapeZoneIfReverseBearTrapIsActivated; // 0x280(0x40)
	struct FAIDataProviderBoolValue CheckDestinationOnDifferentNavMesh; // 0x2c0(0x40)
	struct FName NavDataAgentName; // 0x300(0x0c)
	struct FVector NavMeshProjectionBoxExtent; // 0x30c(0x0c)
	char pad_318[0x10]; // 0x318(0x10)
};

// Class DBDBots.EnvQueryTest_LineOfSight
// Size: 0x320 (Inherited: 0x238)
struct UEnvQueryTest_LineOfSight : UEnvQueryTest {
	struct UEnvQueryContext* QuerierContext; // 0x238(0x08)
	struct UEnvQueryContext* ToContext; // 0x240(0x08)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x248(0x40)
	struct FAIDataProviderBoolValue Invert; // 0x288(0x40)
	char pad_2C8[0x58]; // 0x2c8(0x58)
};

// Class DBDBots.EnvQueryTest_LureToDangerObject
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_LureToDangerObject : UEnvQueryTest {
	struct UEnvQueryContext* QuerierContext; // 0x238(0x08)
	struct UEnvQueryContext* TargetContext; // 0x240(0x08)
};

// Class DBDBots.EnvQueryTest_PathfindingBatchExt
// Size: 0x458 (Inherited: 0x2d0)
struct UEnvQueryTest_PathfindingBatchExt : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x2d0(0x40)
	struct FAIDataProviderFloatValue BadPathingPenaltyMultiplier; // 0x310(0x40)
	struct FAIDataProviderFloatValue MaxPenaltyAngle; // 0x350(0x40)
	struct FAIDataProviderFloatValue MinPenaltyAngle; // 0x390(0x40)
	struct FAIDataProviderFloatValue HeightMultiplier; // 0x3d0(0x40)
	struct FAIDataProviderFloatValue PlayerLocationHeight; // 0x410(0x40)
	struct UEnvQueryContext* TargetContext; // 0x450(0x08)
};

// Class DBDBots.NavArea_Blink
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Blink : UNavArea {
};

// Class DBDBots.NavArea_Breakable
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Breakable : UNavArea {
};

// Class DBDBots.NavArea_Vault
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Vault : UNavArea {
};

// Class DBDBots.NavigationQueryFilter_Player
// Size: 0x70 (Inherited: 0x50)
struct UNavigationQueryFilter_Player : UNavigationQueryFilter {
	int32_t MaxSearchNodes; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// Class DBDBots.NavigationQueryFilter_Camper
// Size: 0x90 (Inherited: 0x70)
struct UNavigationQueryFilter_Camper : UNavigationQueryFilter_Player {
	float SlasherAreaBoundsLimit; // 0x70(0x04)
	float SlasherAreaPenetrationCost; // 0x74(0x04)
	float SlasherInSightCost; // 0x78(0x04)
	float SlasherAreaExcludeUnderRange; // 0x7c(0x04)
	float SlasherAreaUnwalkableRange; // 0x80(0x04)
	float SlasherInExcludeAreaCost; // 0x84(0x04)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class DBDBots.NavigationQueryFilter_Camper_Cheap
// Size: 0x90 (Inherited: 0x90)
struct UNavigationQueryFilter_Camper_Cheap : UNavigationQueryFilter_Camper {
};

// Class DBDBots.NavigationQueryFilter_CamperStealth
// Size: 0x90 (Inherited: 0x90)
struct UNavigationQueryFilter_CamperStealth : UNavigationQueryFilter_Camper {
};

// Class DBDBots.NavigationQueryFilter_Slasher
// Size: 0x110 (Inherited: 0x70)
struct UNavigationQueryFilter_Slasher : UNavigationQueryFilter_Player {
	struct TMap<struct FString, float> DefaultInteractionsTimeCost; // 0x70(0x50)
	struct TMap<struct FString, float> FrenzyInteractionsTimeCost; // 0xc0(0x50)
};

// Class DBDBots.NavigationQueryFilter_Slasher_Limited
// Size: 0x70 (Inherited: 0x70)
struct UNavigationQueryFilter_Slasher_Limited : UNavigationQueryFilter_Player {
};

// Class DBDBots.NavLinkProxy_Base
// Size: 0x2f0 (Inherited: 0x280)
struct ANavLinkProxy_Base : ANavLinkProxy {
	float WaitLinkOffset; // 0x280(0x04)
	float MoveOnEndPointTimeLimit; // 0x284(0x04)
	int32_t NbMaxLinkUsers; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TMap<struct ADBDPlayer*, struct FMoveLinkPlayerInfo> _players; // 0x290(0x50)
	struct TArray<struct ADBDPlayer*> _linkUsedByPlayers; // 0x2e0(0x10)

	void OnSmartLinkReachedCallback(struct AActor* MovingActor, struct FVector& DestinationPoint); // Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x4c86260
	void AutoAdjustSmartLinkPoints(); // Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints // (Final|Native|Public|BlueprintCallable) // @ game+0x4c86200
};

// Class DBDBots.NavLinkProxy_DirectMove
// Size: 0x358 (Inherited: 0x2f0)
struct ANavLinkProxy_DirectMove : ANavLinkProxy_Base {
	struct TArray<struct FVector> CustomPathPoints; // 0x2f0(0x10)
	float MoveToPathPointTimeLimit; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct TMap<struct ADBDPlayer*, struct UNavMovePath*> _playersOnPath; // 0x308(0x50)

	void OnDisplayDebugInfo(); // Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo // (Final|Native|Private) // @ game+0x4c86220
};

// Class DBDBots.NavLinkProxy_Interaction
// Size: 0x398 (Inherited: 0x2f0)
struct ANavLinkProxy_Interaction : ANavLinkProxy_Base {
	struct TMap<enum class EPlayerRole, struct FNavLinkInteractPlayerSetup> PlayerSetups; // 0x2f0(0x50)
	float InteractionStartTimeLimit; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TMap<struct ADBDPlayer*, float> _playersInteractionInputAtTime; // 0x348(0x50)
};

// Class DBDBots.NavMovePath
// Size: 0x60 (Inherited: 0x30)
struct UNavMovePath : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class DBDBots.PathBuilder
// Size: 0x58 (Inherited: 0x30)
struct UPathBuilder : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float PathReachedPointRadius; // 0x38(0x04)
	enum class EAITerrorLevel ToleratedTerrorPressure; // 0x3c(0x01)
	bool OverridePreviousPathStrategy; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float MinimumValidPathTimeWhenPathReached; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UNavMovePath* _path; // 0x48(0x08)
	struct ADBDAIBTController* _aiOwner; // 0x50(0x08)
};

// Class DBDBots.PathBuilder_EQS
// Size: 0xd8 (Inherited: 0x58)
struct UPathBuilder_EQS : UPathBuilder {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x58(0x50)
	int32_t NbMaxEQSRequests; // 0xa8(0x04)
	bool MergeToSinglePathPoint; // 0xac(0x01)
	char pad_AD[0x23]; // 0xad(0x23)
	struct UPathBuilder_EQS* _pendingEQSRequestBuilder; // 0xd0(0x08)
};

// Class DBDBots.PathBuilder_EvadeLoop
// Size: 0x130 (Inherited: 0x58)
struct UPathBuilder_EvadeLoop : UPathBuilder {
	float ChaserMeleeAttackRange; // 0x58(0x04)
	float ForceEvadePointUnderDistance; // 0x5c(0x04)
	float ChaserCrossingVaultTimePenalty; // 0x60(0x04)
	float ChaserCrossingPalletTimePenalty; // 0x64(0x04)
	float ActivePathTimeBonus; // 0x68(0x04)
	float InactivePathTimePenalty; // 0x6c(0x04)
	float SwapPathTimePenalty; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString BreakPalletInteractionId; // 0x78(0x10)
	float OnPathRadius; // 0x88(0x04)
	float ClosePathPointRadius; // 0x8c(0x04)
	float MaxEvadeInteractableWeightDistance; // 0x90(0x04)
	float WeightAtMaxDistance; // 0x94(0x04)
	bool MaxWeightAtNearestDistanceIfHostileHasRangedAbility; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float WeightAtMaxSafety; // 0x9c(0x04)
	float MaxNearAllyPenaltyPathPointDistance; // 0xa0(0x04)
	float WeightWhenNearAlly; // 0xa4(0x04)
	float WeightWhenNearLureableDangerObject; // 0xa8(0x04)
	float LureableDangerObjectWeightDropoffPerDistance; // 0xac(0x04)
	struct FAITunableParameter MinSafetyRatingAgainstMeleeHostileStimulus; // 0xb0(0x10)
	struct FAITunableParameter MinSafetyRatingAgainstRangedHostileStimulus; // 0xc0(0x10)
	float SidekickToLoopInvalidateDistance; // 0xd0(0x04)
	float TrapToLoopInvalidateDistance; // 0xd4(0x04)
	struct UNavMovePath* _originalEvadeLoopWorkPath; // 0xd8(0x08)
	struct UNavMovePath* _querierWorkPathA; // 0xe0(0x08)
	struct UNavMovePath* _querierWorkPathB; // 0xe8(0x08)
	struct UNavMovePath* _chaserWorkPath; // 0xf0(0x08)
	struct UDBDNavEvadeLoopComponent* _pickedEvadeLoopComponent; // 0xf8(0x08)
	char pad_100[0x30]; // 0x100(0x30)
};

// Class DBDBots.PathBuilder_LastGoal
// Size: 0x58 (Inherited: 0x58)
struct UPathBuilder_LastGoal : UPathBuilder {
};

// Class DBDBots.PathStrategy
// Size: 0xb8 (Inherited: 0x30)
struct UPathStrategy : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UPathBuilder*> DefaultPathBuilders; // 0x40(0x10)
	float RefreshPartialPathDelay; // 0x50(0x04)
	float StartNextBranchBuildDelay; // 0x54(0x04)
	struct ADBDAIBTController* _aiOwner; // 0x58(0x08)
	struct TArray<struct UPathBuilder*> _pathBuilders; // 0x60(0x10)
	char pad_70[0x48]; // 0x70(0x48)
};

// Class DBDBots.PathStrategy_Flee
// Size: 0xb8 (Inherited: 0xb8)
struct UPathStrategy_Flee : UPathStrategy {
};

// Class DBDBots.PathStrategy_FleeLoop
// Size: 0x210 (Inherited: 0xb8)
struct UPathStrategy_FleeLoop : UPathStrategy_Flee {
	struct TMap<enum class EAIDifficultyLevel, struct FGameStateEvadeLoopStrategyMapContainer> GameStateFleeLoopStrategyTable; // 0xb8(0x50)
	struct TMap<enum class EAIFleeLoopStrategy, struct UPathBuilder_EvadeLoop*> FleeLoopStrategyPathBuilders; // 0x108(0x50)
	float CanBranchUnderEndPathDistance; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TMap<enum class EAIFleeLoopStrategy, struct FAIRoll> BranchRolls; // 0x160(0x50)
	float RejectLoopBranchUnderEndPointsDistance; // 0x1b0(0x04)
	float RejectBranchPointNearerHostileSourceDistance; // 0x1b4(0x04)
	float RejectBranchUnderNavLinkDistance; // 0x1b8(0x04)
	float AddDistanceToRequiredBranchEvadeGap; // 0x1bc(0x04)
	char pad_1C0[0x50]; // 0x1c0(0x50)
};

// Class DBDBots.PathStrategy_FleeLOS
// Size: 0xb8 (Inherited: 0xb8)
struct UPathStrategy_FleeLOS : UPathStrategy_Flee {
};

// Class DBDBots.PathStrategy_FleeLure
// Size: 0xc0 (Inherited: 0xb8)
struct UPathStrategy_FleeLure : UPathStrategy_Flee {
	float MaximumRangeToLureableDangerObject; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class DBDBots.PathStrategySelector
// Size: 0x68 (Inherited: 0x30)
struct UPathStrategySelector : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct ADBDAIBTController* _aiOwner; // 0x38(0x08)
	struct TArray<struct UPathStrategy*> _activePathStrategies; // 0x40(0x10)
	struct TArray<struct UPathStrategy*> _nextPathStrategies; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class DBDBots.PathStrategySelector_Flee
// Size: 0x110 (Inherited: 0x68)
struct UPathStrategySelector_Flee : UPathStrategySelector {
	struct TMap<enum class EAIFleePathStrategy, struct UPathStrategy*> FleePathStrategies; // 0x68(0x50)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TMap<enum class EAIFleePathStrategy, struct UPathStrategy*> _activeFleePathStrategiesMap; // 0xc0(0x50)
};

