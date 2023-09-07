// Enum Archives.ECustomValueComparator
enum class ECustomValueComparator : uint8 {
	Equal = 0,
	LessOrEqual = 1,
	GreaterOrEqual = 2,
	ECustomValueComparator_MAX = 3
};

// Enum Archives.EEventSubject
enum class EEventSubject : uint8 {
	Instigator = 0,
	Target = 1,
	Any = 2,
	None = 3,
	EEventSubject_MAX = 4
};

// Enum Archives.EEventCountComparisonOperator
enum class EEventCountComparisonOperator : uint8 {
	EqualTo = 0,
	GreaterThan = 1,
	GreaterThanEqualTo = 2,
	LessThan = 3,
	LessThanEqualTo = 4,
	EEventCountComparisonOperator_MAX = 5
};

// Enum Archives.ESubjectPerspective
enum class ESubjectPerspective : uint8 {
	Me = 0,
	Other = 1,
	ESubjectPerspective_MAX = 2
};

// Enum Archives.EAllowedPlayerType
enum class EAllowedPlayerType : uint8 {
	All = 0,
	KillerOnly = 1,
	SurvivorOnly = 2,
	EAllowedPlayerType_MAX = 3
};

// Enum Archives.ERecentlyActiveModifierTimerStartType
enum class ERecentlyActiveModifierTimerStartType : uint8 {
	OnTagAdded = 0,
	OnTagRemoved = 1,
	ERecentlyActiveModifierTimerStartType_MAX = 2
};

// Enum Archives.ERecentlyActiveModifierType
enum class ERecentlyActiveModifierType : uint8 {
	AnyTrue = 0,
	AllTrue = 1,
	ERecentlyActiveModifierType_MAX = 2
};

// Enum Archives.EInChaseTargetLogic
enum class EInChaseTargetLogic : uint8 {
	AnyOf = 0,
	AllOf = 1,
	NoneOf = 2,
	EInChaseTargetLogic_MAX = 3
};

// Enum Archives.EInstigatorTargetDistanceComparator
enum class EInstigatorTargetDistanceComparator : uint8 {
	LessOrEqual = 0,
	GreaterOrEqual = 1,
	EInstigatorTargetDistanceComparator_MAX = 2
};

// Enum Archives.EAttackerSubject
enum class EAttackerSubject : uint8 {
	Instigator = 0,
	Target = 1,
	EAttackerSubject_MAX = 2
};

// Enum Archives.EQueryConditionType
enum class EQueryConditionType : uint8 {
	AllTrue = 0,
	AnyTrue = 1,
	EQueryConditionType_MAX = 2
};

// Enum Archives.ENearGameObjectQuestObjectType
enum class ENearGameObjectQuestObjectType : uint8 {
	Generator = 0,
	Pallet = 1,
	Chest = 2,
	Totem = 3,
	Window = 4,
	Wall = 5,
	K32ItemBox = 6,
	Killer = 7,
	Count = 8,
	ENearGameObjectQuestObjectType_MAX = 9
};

// Enum Archives.ERecentlyActiveStateTagTimerStartType
enum class ERecentlyActiveStateTagTimerStartType : uint8 {
	OnTagAdded = 0,
	OnTagRemoved = 1,
	ERecentlyActiveStateTagTimerStartType_MAX = 2
};

// Enum Archives.ERecentlyActiveStateTagType
enum class ERecentlyActiveStateTagType : uint8 {
	AnyTrue = 0,
	AllTrue = 1,
	ERecentlyActiveStateTagType_MAX = 2
};

// ScriptStruct Archives.EventOccurrenceConditionData
// Size: 0x60 (Inherited: 0x00)
struct FEventOccurrenceConditionData {
	struct FGameplayTag GameEventTag; // 0x00(0x0c)
	enum class EConditionSubject PreviousConditionSubject; // 0x0c(0x01)
	enum class EConditionSubject CurrentConditionSubject; // 0x0d(0x01)
	char pad_E[0x52]; // 0x0e(0x52)
};

// ScriptStruct Archives.AnyEventConditionData
// Size: 0x60 (Inherited: 0x00)
struct FAnyEventConditionData {
	struct FGameplayTag GameEventTag; // 0x00(0x0c)
	enum class EConditionSubject PreviousConditionSubject; // 0x0c(0x01)
	enum class EConditionSubject CurrentConditionSubject; // 0x0d(0x01)
	char pad_E[0x52]; // 0x0e(0x52)
};

// ScriptStruct Archives.GameObjectQuery
// Size: 0x58 (Inherited: 0x00)
struct FGameObjectQuery {
	enum class ENearGameObjectQuestObjectType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagQuery GameplayTagQuery; // 0x08(0x48)
	char pad_50[0x8]; // 0x50(0x08)
};

