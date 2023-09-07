// Enum DBDGameplay.EFatherKeyCardState
enum class EFatherKeyCardState : uint8 {
	None = 0,
	Undiscovered = 1,
	Discovered = 2,
	Secured = 3,
	EFatherKeyCardState_MAX = 4
};

// Enum DBDGameplay.ESteamPipeState
enum class ESteamPipeState : uint8 {
	Ready = 0,
	Charged = 1,
	Warning = 2,
	Activated = 3,
	Disabled = 4,
	ESteamPipeState_MAX = 5
};

// ScriptStruct DBDGameplay.TerrorRadiusVisualIndicatorHeartStateRange
// Size: 0x10 (Inherited: 0x00)
struct FTerrorRadiusVisualIndicatorHeartStateRange {
	float StartVolume; // 0x00(0x04)
	struct FGameplayTag HeartTag; // 0x04(0x0c)
};

// ScriptStruct DBDGameplay.AimDirection
// Size: 0x24 (Inherited: 0x00)
struct FAimDirection {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct DBDGameplay.AITerrorEvent
// Size: 0x28 (Inherited: 0x00)
struct FAITerrorEvent {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* Instigator; // 0x10(0x08)
	struct UTerrorRadiusEmitterComponent* TerrorEmitter; // 0x18(0x08)
	struct FGenericTeamId TeamIdentifier; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DBDGameplay.DBDBidirectionalTimer
// Size: 0x28 (Inherited: 0x28)
struct FDBDBidirectionalTimer : FDBDTimer {
};

// ScriptStruct DBDGameplay.BlindTargetViewData
// Size: 0x40 (Inherited: 0x00)
struct FBlindTargetViewData {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct DBDGameplay.BlockFeedbackStyleOverride
// Size: 0x30 (Inherited: 0x00)
struct FBlockFeedbackStyleOverride {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct ABlockFeedbackBase*> BlockSelfFeedbacks; // 0x10(0x10)
	struct TArray<struct ABlockFeedbackBase*> BlockOtherFeedbacks; // 0x20(0x10)
};

// ScriptStruct DBDGameplay.Footstep
// Size: 0x50 (Inherited: 0x00)
struct FFootstep {
	char pad_0[0x20]; // 0x00(0x20)
	struct UCurveFloat* FadeCurve; // 0x20(0x08)
	struct UCurveFloat* VeinsCurve; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct UDBDDecalComponent* _decal; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct DBDGameplay.FootstepSpawnParameters
// Size: 0x20 (Inherited: 0x00)
struct FFootstepSpawnParameters {
	char pad_0[0x10]; // 0x00(0x10)
	struct UCurveFloat* FadeCurve; // 0x10(0x08)
	struct UCurveFloat* VeinsCurve; // 0x18(0x08)
};

// ScriptStruct DBDGameplay.ForAllSurvivorsStatusEffectImposer
// Size: 0x18 (Inherited: 0x00)
struct FForAllSurvivorsStatusEffectImposer {
	struct UStatusEffect* _effectClass; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct DBDGameplay.CustomKillerInstinctData
// Size: 0x28 (Inherited: 0x00)
struct FCustomKillerInstinctData {
	struct UNiagaraSystem* ParticleSystemAsset; // 0x00(0x08)
	struct TArray<struct FGameplayTag> SurvivorStateTags; // 0x08(0x10)
	struct TArray<struct FGameplayTag> KillerStateTags; // 0x18(0x10)
};

// ScriptStruct DBDGameplay.LullabyKillerData
// Size: 0x28 (Inherited: 0x00)
struct FLullabyKillerData {
	struct FGameplayTag KillerPresenceTag; // 0x00(0x0c)
	struct FGameplayTag KillerLullabyActivationState; // 0x0c(0x0c)
	struct FGameplayTag SurvivorLullabyActivationState; // 0x18(0x0c)
	float KillerLullabyDistance; // 0x24(0x04)
};

// ScriptStruct DBDGameplay.QuesitaPropStruct
// Size: 0x18 (Inherited: 0x00)
struct FQuesitaPropStruct {
	struct AActor* PropActorClass; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DBDGameplay.HideHeartIndicatorWithDelay
// Size: 0x10 (Inherited: 0x00)
struct FHideHeartIndicatorWithDelay {
	struct FGameplayTag HideTag; // 0x00(0x0c)
	float DelayWhenTagRemoved; // 0x0c(0x04)
};

// ScriptStruct DBDGameplay.TestableStatModifier
// Size: 0x30 (Inherited: 0x30)
struct FTestableStatModifier : FStatModifier {
};

// ScriptStruct DBDGameplay.TestableStat
// Size: 0x88 (Inherited: 0x80)
struct FTestableStat : FTunableStat {
	char pad_80[0x8]; // 0x80(0x08)
};

