// Enum DBDBots.EInteractionCancelInputModes
enum class EInteractionCancelInputModes : uint8 {
	PressCancelInput = 0,
	InvertWithStopInputFlow = 1,
	EInteractionCancelInputModes_MAX = 2
};

// Enum DBDBots.EInteractionSkillInputModes
enum class EInteractionSkillInputModes : uint8 {
	Once = 0,
	Hold = 1,
	Toggle = 2,
	ToggleHold = 3,
	OneClickHold = 4,
	EInteractionSkillInputModes_MAX = 5
};

// Enum DBDBots.EGeneratorDangerRating
enum class EGeneratorDangerRating : uint8 {
	Safe = 0,
	Neutral = 1,
	Dangerous = 2,
	EGeneratorDangerRating_MAX = 3
};

// Enum DBDBots.EInteractionTargetInSightModes
enum class EInteractionTargetInSightModes : uint8 {
	None = 0,
	MustBeInSight = 1,
	MustBeInSight_NoObstruction = 2,
	ActivateIfOutOfSight = 3,
	EInteractionTargetInSightModes_MAX = 4
};

// Enum DBDBots.EInteractionTargetRequirements
enum class EInteractionTargetRequirements : uint8 {
	BestTargetMustBeValid = 0,
	AnyValidTarget = 1,
	AnyTarget = 2,
	NoTarget = 3,
	None = 4,
	EInteractionTargetRequirements_MAX = 5
};

// Enum DBDBots.EAIThrowProjectileModes
enum class EAIThrowProjectileModes : uint8 {
	OneShot = 0,
	Continuous = 1,
	EAIThrowProjectileModes_MAX = 2
};

// Enum DBDBots.EAIThrowPredictionModes
enum class EAIThrowPredictionModes : uint8 {
	FindBestThrowPowerRatio = 0,
	FullThrowPowerRatio = 1,
	EAIThrowPredictionModes_MAX = 2
};

// Enum DBDBots.EPlayerFilter
enum class EPlayerFilter : uint8 {
	Self = 0,
	AnyFriend = 1,
	AnyOpponent = 2,
	EPlayerFilter_MAX = 3
};

// Enum DBDBots.EIsCamperStateOnFilter
enum class EIsCamperStateOnFilter : uint8 {
	OnBlackboardKey = 0,
	OnOthersThanSelf = 1,
	EIsCamperStateOnFilter_MAX = 2
};

// Enum DBDBots.EInteractionCheckType
enum class EInteractionCheckType : uint8 {
	InteractionID = 0,
	InputType = 1,
	EInteractionCheckType_MAX = 2
};

// Enum DBDBots.EIsInteractionAvailableOnFilter
enum class EIsInteractionAvailableOnFilter : uint8 {
	Self = 0,
	AnyFriend = 1,
	Interactor = 2,
	EIsInteractionAvailableOnFilter_MAX = 3
};

// Enum DBDBots.EDecoratorIsObjFocusedFilter
enum class EDecoratorIsObjFocusedFilter : uint8 {
	Self = 0,
	SelfNearest = 1,
	EDecoratorIsObjFocusedFilter_MAX = 2
};

// Enum DBDBots.ETunableComparison
enum class ETunableComparison : uint8 {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	ETunableComparison_MAX = 6
};

// Enum DBDBots.EItemType
enum class EItemType : uint8 {
	RegularItem = 0,
	SpecialItem = 1,
	CursedItem = 2,
	EItemType_MAX = 3
};

// Enum DBDBots.EFindInteractableCamperFilter
enum class EFindInteractableCamperFilter : uint8 {
	Crawling = 0,
	Standing = 1,
	GiveHelp = 2,
	RequestHelp = 3,
	RescuableBeingCarried = 4,
	EFindInteractableCamperFilter_MAX = 5
};

// Enum DBDBots.EFindInteractorOpenConditions
enum class EFindInteractorOpenConditions : uint8 {
	AllGate_OpenedHatch = 0,
	All = 1,
	ClosedOnly = 2,
	OpenedOnly = 3,
	EFindInteractorOpenConditions_MAX = 4
};

// Enum DBDBots.EFindInteractorExitOptions
enum class EFindInteractorExitOptions : uint8 {
	All = 0,
	HatchOnly = 1,
	GateOnly = 2,
	EFindInteractorExitOptions_MAX = 3
};

// Enum DBDBots.EFindInteractableGeneratorStatusFilter
enum class EFindInteractableGeneratorStatusFilter : uint8 {
	NeedRepair = 0,
	CanBeDamaged = 1,
	EFindInteractableGeneratorStatusFilter_MAX = 2
};

// Enum DBDBots.EInLockerPerkEmptyHandType
enum class EInLockerPerkEmptyHandType : uint8 {
	None = 0,
	SurvivorItem = 1,
	SpecialItem = 2,
	Both = 3,
	EInLockerPerkEmptyHandType_MAX = 4
};

// Enum DBDBots.EFindInteractableLockerStatusFilter
enum class EFindInteractableLockerStatusFilter : uint8 {
	Empty = 0,
	Occupied = 1,
	Both = 2,
	EFindInteractableLockerStatusFilter_MAX = 3
};

// Enum DBDBots.EFindInteractableMeatHookStatus
enum class EFindInteractableMeatHookStatus : uint8 {
	HookedSurvivor = 0,
	Available = 1,
	Sabotage = 2,
	EFindInteractableMeatHookStatus_MAX = 3
};

// Enum DBDBots.EFindInteractablePalletIntentions
enum class EFindInteractablePalletIntentions : uint8 {
	Fall = 0,
	Raise = 1,
	EFindInteractablePalletIntentions_MAX = 2
};

// Enum DBDBots.EAINodeRelevancyOptions
enum class EAINodeRelevancyOptions : uint8 {
	OnEnter = 0,
	OnExit = 1,
	OnEnterAndExit = 2,
	OnTick = 3,
	EAINodeRelevancyOptions_MAX = 4
};

// Enum DBDBots.EAIInvestigateSteps
enum class EAIInvestigateSteps : uint8 {
	None = 0,
	ToInvestigation = 1,
	Investigating = 2,
	EAIInvestigateSteps_MAX = 3
};

// Enum DBDBots.EExtMoveToStrafeFocusOptions
enum class EExtMoveToStrafeFocusOptions : uint8 {
	Never = 0,
	NearFocus = 1,
	NearGoal = 2,
	Always = 3,
	Intermittent = 4,
	EExtMoveToStrafeFocusOptions_MAX = 5
};

// Enum DBDBots.ETaskInputPressModes
enum class ETaskInputPressModes : uint8 {
	Once = 0,
	Loop = 1,
	Hold = 2,
	ETaskInputPressModes_MAX = 3
};

// Enum DBDBots.EAIPressureZoneLevel
enum class EAIPressureZoneLevel : uint8 {
	LMin = 0,
	L01 = 1,
	L02 = 2,
	LMax = 3,
	EAIPressureZoneLevel_MAX = 4
};

// Enum DBDBots.EAIGameState
enum class EAIGameState : uint8 {
	VeryEarly = 0,
	Early = 1,
	Mid = 2,
	Late = 3,
	VeryLate = 4,
	Max = 5,
	EAIGameState_MAX = 6
};

// Enum DBDBots.EAIObjectiveState
enum class EAIObjectiveState : uint8 {
	Early = 0,
	Mid = 1,
	Last = 2,
	Completed = 3,
	EAIObjectiveState_MAX = 4
};

// Enum DBDBots.EAIDangerState
enum class EAIDangerState : uint8 {
	Safe = 0,
	Unsafe = 1,
	Dire = 2,
	EAIDangerState_MAX = 3
};

// Enum DBDBots.ENavLinkPlayerStates
enum class ENavLinkPlayerStates : uint8 {
	RequestStart = 0,
	MoveStart = 1,
	Using = 2,
	MoveEnd = 3,
	Release = 4,
	ENavLinkPlayerStates_MAX = 5
};

// Enum DBDBots.EPathBuildResult
enum class EPathBuildResult : uint8 {
	None = 0,
	Failed = 1,
	Succeeded = 2,
	Partial = 3,
	InProgress = 4,
	EPathBuildResult_MAX = 5
};

// Enum DBDBots.EAIFleeLoopStrategy
enum class EAIFleeLoopStrategy : uint8 {
	LoseKiller = 0,
	WasteTime = 1,
	EAIFleeLoopStrategy_MAX = 2
};

// Enum DBDBots.EAIFleePathStrategy
enum class EAIFleePathStrategy : uint8 {
	None = 0,
	KeepGoal = 1,
	Away = 2,
	Loop = 3,
	AwayLOS = 4,
	Lure = 5,
	EAIFleePathStrategy_MAX = 6
};

// ScriptStruct DBDBots.AdditionalDynamicSubtree
// Size: 0x30 (Inherited: 0x00)
struct FAdditionalDynamicSubtree {
	struct FGameplayTagContainer DynamicSubtreeContexts; // 0x00(0x20)
	bool AlwaysEnable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UBehaviorTree* DynamicSubtree; // 0x28(0x08)
};

// ScriptStruct DBDBots.KillerFilterItem
// Size: 0x08 (Inherited: 0x00)
struct FKillerFilterItem {
	struct FCharacterDropdown Character; // 0x00(0x08)
};

// ScriptStruct DBDBots.AIHasExhaustionPerkCondition
// Size: 0x30 (Inherited: 0x00)
struct FAIHasExhaustionPerkCondition {
	struct FDataTableDropdown perkId; // 0x00(0x30)
};

// ScriptStruct DBDBots.TargetMoveAwayToFastInfo
// Size: 0x90 (Inherited: 0x00)
struct FTargetMoveAwayToFastInfo {
	float AccumulatedTime; // 0x00(0x04)
	float CooldownUntilTime; // 0x04(0x04)
	struct FAIDetectedStimulus Stimulus; // 0x08(0x88)
};

// ScriptStruct DBDBots.ModifierValueData
// Size: 0x20 (Inherited: 0x00)
struct FModifierValueData {
	struct FGameplayTag ModifierTag; // 0x00(0x0c)
	bool EstimateWithSemantics; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGameplayTag SemanticTag; // 0x10(0x0c)
	bool UsesItemAddons; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct DBDBots.AIHasItemAddonCondition
// Size: 0x30 (Inherited: 0x00)
struct FAIHasItemAddonCondition {
	struct FDataTableDropdown ItemAddonID; // 0x00(0x30)
};

// ScriptStruct DBDBots.AIHasPerkCondition
// Size: 0x38 (Inherited: 0x00)
struct FAIHasPerkCondition {
	struct FDataTableDropdown perkId; // 0x00(0x30)
	bool CompareDisplayPercent; // 0x30(0x01)
	enum class EArithmeticKeyOperation DisplayPercentQuery; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float DisplayPercentValue; // 0x34(0x04)
};

// ScriptStruct DBDBots.AIRandomByDistancePercentagesAtTime
// Size: 0x30 (Inherited: 0x00)
struct FAIRandomByDistancePercentagesAtTime {
	struct FAITunableParameter PercentageAtStartDistance; // 0x00(0x10)
	struct FAITunableParameter PercentageAtEndDistance; // 0x10(0x10)
	struct FAITunableParameter AtRelativeTime; // 0x20(0x10)
};

// ScriptStruct DBDBots.InLockerPerk
// Size: 0x98 (Inherited: 0x00)
struct FInLockerPerk {
	struct FDataTableDropdown perkId; // 0x00(0x30)
	bool PerkNeedToBeFullyCharged; // 0x30(0x01)
	enum class EInLockerPerkEmptyHandType RequiredHeldItemSlots; // 0x31(0x01)
	enum class EInLockerPerkEmptyHandType RequiredEmptyHandedSlots; // 0x32(0x01)
	bool NeedToBeInjured; // 0x33(0x01)
	bool NeedPerkSkillToBeRunnableAtLocation; // 0x34(0x01)
	bool MustBeFarFromLinkedObject; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float MinimumDistanceFromObject; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct AActor* LinkedObjectClass; // 0x40(0x08)
	bool UnusableIfLockerPenaltyReceived; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FBlackboardKeySelector BBLockerPenaltyReceived; // 0x50(0x30)
	float UnusableUnlessKillerIsFartherThan; // 0x80(0x04)
	struct FAITunableParameter PerkWeight; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct DBDBots.DreamPalletSpawnState
// Size: 0x24 (Inherited: 0x00)
struct FDreamPalletSpawnState {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct DBDBots.AICleansePerkCondition
// Size: 0x38 (Inherited: 0x00)
struct FAICleansePerkCondition {
	struct FDataTableDropdown CleansePerkID; // 0x00(0x30)
	enum class EArithmeticKeyOperation DisplayPercentQuery; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DisplayPercentValue; // 0x34(0x04)
};

// ScriptStruct DBDBots.InteractableWithInteractionId
// Size: 0x18 (Inherited: 0x00)
struct FInteractableWithInteractionId {
	struct AInteractable* InteractableClass; // 0x00(0x08)
	struct FString InteractionID; // 0x08(0x10)
};

// ScriptStruct DBDBots.CachedEQSResultData
// Size: 0x20 (Inherited: 0x00)
struct FCachedEQSResultData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct DBDBots.DangerObjectData
// Size: 0x08 (Inherited: 0x00)
struct FDangerObjectData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct DBDBots.MovementModeNearActor
// Size: 0x58 (Inherited: 0x00)
struct FMovementModeNearActor {
	enum class ECharacterMovementTypes NearActorMovementMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* NearActorClass; // 0x08(0x08)
	struct FAITunableParameter NearDistanceSquared; // 0x10(0x10)
	struct FAIRoll SeeActorRoll; // 0x20(0x24)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<enum class EPlayerRole> ApplyToPlayerRoles; // 0x48(0x10)
};

// ScriptStruct DBDBots.AISkillDynamicSubtreeStruct
// Size: 0x58 (Inherited: 0x00)
struct FAISkillDynamicSubtreeStruct {
	struct TMap<struct UAISkill*, struct UBehaviorTree*> AISkillDynamicSubtreeMap; // 0x00(0x50)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct DBDBots.AISkillPerk
// Size: 0x18 (Inherited: 0x00)
struct FAISkillPerk {
	struct TArray<struct FPerkIdDropdown> Perks; // 0x00(0x10)
	struct UAISkill* Skill; // 0x10(0x08)
};

// ScriptStruct DBDBots.AIGoalWeightContainer
// Size: 0x10 (Inherited: 0x00)
struct FAIGoalWeightContainer {
	struct TArray<struct FAIGoalWeight> WeightedGoals; // 0x00(0x10)
};

// ScriptStruct DBDBots.AIGoalWeight
// Size: 0x30 (Inherited: 0x00)
struct FAIGoalWeight {
	struct FAIGoal GoalInfo; // 0x00(0x18)
	float Weight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString WeightDebug; // 0x20(0x10)
};

// ScriptStruct DBDBots.AIGoal
// Size: 0x18 (Inherited: 0x00)
struct FAIGoal {
	struct UObject* Source; // 0x00(0x08)
	struct UObject* MetaGoal; // 0x08(0x08)
	struct UObject* Goal; // 0x10(0x08)
};

// ScriptStruct DBDBots.GameStatePressureZoneLevelMapContainer
// Size: 0x50 (Inherited: 0x00)
struct FGameStatePressureZoneLevelMapContainer {
	struct TMap<enum class EAIGameState, enum class EAIPressureZoneLevel> Map; // 0x00(0x50)
};

// ScriptStruct DBDBots.DangerStateGameStateMapContainer
// Size: 0x50 (Inherited: 0x00)
struct FDangerStateGameStateMapContainer {
	struct TMap<enum class EAIDangerState, enum class EAIGameState> Map; // 0x00(0x50)
};

// ScriptStruct DBDBots.RelevantNodeMemory
// Size: 0x18 (Inherited: 0x00)
struct FRelevantNodeMemory {
	struct UBTNode* Node; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct DBDBots.DistanceToTargetData
// Size: 0x18 (Inherited: 0x00)
struct FDistanceToTargetData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DBDBots.MindFocusObjectEntry
// Size: 0x78 (Inherited: 0x00)
struct FMindFocusObjectEntry {
	struct TArray<struct UObject*> FocusedBy; // 0x00(0x10)
	float FocusedStartTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, float> CooldownMap; // 0x18(0x50)
	char pad_68[0x10]; // 0x68(0x10)
};

// ScriptStruct DBDBots.WeightedWishedObjectMapContainer
// Size: 0x50 (Inherited: 0x00)
struct FWeightedWishedObjectMapContainer {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct DBDBots.WeightedWishedObjectData
// Size: 0x10 (Inherited: 0x00)
struct FWeightedWishedObjectData {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAISkill_Find* SkillSource; // 0x08(0x08)
};

// ScriptStruct DBDBots.ExplorableTileInfo
// Size: 0x2c (Inherited: 0x00)
struct FExplorableTileInfo {
	struct FGuid ID; // 0x00(0x10)
	struct FBox Bounds; // 0x10(0x1c)
};

// ScriptStruct DBDBots.MoveLinkPlayerInfo
// Size: 0x28 (Inherited: 0x00)
struct FMoveLinkPlayerInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct DBDBots.NavLinkInteractPlayerSetup
// Size: 0x28 (Inherited: 0x00)
struct FNavLinkInteractPlayerSetup {
	enum class EPawnInputPressTypes Input; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> InteractionIds; // 0x08(0x10)
	struct FAITunableParameter InputTimeDeviationInChase; // 0x18(0x10)
};

// ScriptStruct DBDBots.NavMovePathReshapeData
// Size: 0x08 (Inherited: 0x00)
struct FNavMovePathReshapeData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct DBDBots.NavMovePathPoint
// Size: 0x14 (Inherited: 0x00)
struct FNavMovePathPoint {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct DBDBots.PathToLoopInfo
// Size: 0x18 (Inherited: 0x00)
struct FPathToLoopInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DBDBots.GameStateEvadeLoopStrategyMapContainer
// Size: 0x50 (Inherited: 0x00)
struct FGameStateEvadeLoopStrategyMapContainer {
	struct TMap<enum class EAIGameState, enum class EAIFleeLoopStrategy> Map; // 0x00(0x50)
};

