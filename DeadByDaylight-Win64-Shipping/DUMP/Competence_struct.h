// ScriptStruct Competence.ModifierReplicatedEventConditionData
// Size: 0x10 (Inherited: 0x00)
struct FModifierReplicatedEventConditionData {
	struct UEventDrivenModifierCondition* EventDrivenCondition; // 0x00(0x08)
	bool HasCondition; // 0x08(0x01)
	bool AuthorityDataSet; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Competence.GameplayFlagCache
// Size: 0xa0 (Inherited: 0x00)
struct FGameplayFlagCache {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Competence.GameplayModifierData
// Size: 0x30 (Inherited: 0x00)
struct FGameplayModifierData {
	struct TArray<struct UBaseModifierCondition*> Conditions; // 0x00(0x10)
	struct TArray<struct FGamePlayModifier> Modifiers; // 0x10(0x10)
	struct TArray<struct FGameplayTag> TaggedFlags; // 0x20(0x10)
};

// ScriptStruct Competence.GamePlayModifier
// Size: 0x10 (Inherited: 0x00)
struct FGamePlayModifier {
	struct FGameplayTag Type; // 0x00(0x0c)
	float ModifierValue; // 0x0c(0x04)
};

// ScriptStruct Competence.GameplayModifierCache
// Size: 0xa0 (Inherited: 0x00)
struct FGameplayModifierCache {
	char pad_0[0xa0]; // 0x00(0xa0)
};

