// Enum DBDCompetence.EImposeEffectTo
enum class EImposeEffectTo : uint8 {
	EventInstigator = 0,
	EventTarget = 1,
	AddonOwner = 2,
	AllSurvivors = 3,
	EImposeEffectTo_MAX = 4
};

// Enum DBDCompetence.EMultiLingeringStateTagStrategy
enum class EMultiLingeringStateTagStrategy : uint8 {
	And = 0,
	Or = 1,
	EMultiLingeringStateTagStrategy_MAX = 2
};

// Enum DBDCompetence.EStatusEffectSpawnerReceiverStrategy
enum class EStatusEffectSpawnerReceiverStrategy : uint8 {
	AllCharacter = 0,
	PawnType = 1,
	OriginatingPlayer = 2,
	EStatusEffectSpawnerReceiverStrategy_MAX = 3
};

// Enum DBDCompetence.ESecondWindState
enum class ESecondWindState : uint8 {
	Loading = 0,
	Locked = 1,
	Available = 2,
	InUse = 3,
	ESecondWindState_MAX = 4
};

// Enum DBDCompetence.ETheMettleOfManPhase
enum class ETheMettleOfManPhase : uint8 {
	Uninitialized = 0,
	GainingTokens = 1,
	CancelNextAttack = 2,
	RevealWhenHealthy = 3,
	RevealedToKiller = 4,
	ETheMettleOfManPhase_MAX = 5
};

// ScriptStruct DBDCompetence.StatusEffectInfo
// Size: 0x18 (Inherited: 0x00)
struct FStatusEffectInfo {
	float StatusEffectLifetime; // 0x00(0x04)
	float CustomParamValue; // 0x04(0x04)
	enum class EImposeEffectTo ImposeEffectTo; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UStatusEffect* StatusEffect; // 0x10(0x08)
};

// ScriptStruct DBDCompetence.PlayerStatusEffectSpawnerHelper
// Size: 0x88 (Inherited: 0x00)
struct FPlayerStatusEffectSpawnerHelper {
	struct FPlayerStatusEffectSpawnerHelperInitParams _initParams; // 0x00(0x28)
	struct TSet<struct UStatusEffect*> _spawnedEffects; // 0x28(0x50)
	char pad_78[0x10]; // 0x78(0x10)
};

// ScriptStruct DBDCompetence.PlayerStatusEffectSpawnerHelperInitParams
// Size: 0x28 (Inherited: 0x00)
struct FPlayerStatusEffectSpawnerHelperInitParams {
	struct UObject* WorldContextObject; // 0x00(0x08)
	struct ADBDPlayer* originatingPlayer; // 0x08(0x08)
	struct UGameplayModifierContainer* originatingEffect; // 0x10(0x08)
	struct TArray<struct FStatusEffectSpawnData> EffectsToSpawn; // 0x18(0x10)
};

// ScriptStruct DBDCompetence.StatusEffectSpawnData
// Size: 0x28 (Inherited: 0x00)
struct FStatusEffectSpawnData {
	struct FString DEPRECATED_EffectId; // 0x00(0x10)
	struct UStatusEffect* EffectClass; // 0x10(0x08)
	float customParam; // 0x18(0x04)
	enum class EStatusEffectSpawnerReceiverStrategy ReceiverStrategy; // 0x1c(0x04)
	enum class EPawnType PawnType; // 0x20(0x01)
	bool SkipOriginatingPlayer; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddonParams
// Size: 0x20 (Inherited: 0x00)
struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams {
	struct FName _statusEffectIdDeprecated; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStatusEffect* _effectClass; // 0x10(0x08)
	float _customParam; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DBDCompetence.PerkLevelEffectArray
// Size: 0x10 (Inherited: 0x00)
struct FPerkLevelEffectArray {
	struct TArray<struct FStatusEffectSpawnData> EffectsToSpawn; // 0x00(0x10)
};

// ScriptStruct DBDCompetence.StatusEffectsProperties
// Size: 0x10 (Inherited: 0x00)
struct FStatusEffectsProperties {
	struct UStatusEffect* StatusEffectClass; // 0x00(0x08)
	float customParam; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

