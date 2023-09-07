// Enum DBDAnimation.EArmIkMode
enum class EArmIkMode : uint8 {
	None = 0,
	BothHand = 1,
	OnlyRight = 2,
	OnlyLeft = 3,
	OneHandAtTime = 4,
	BothAtSameTime = 5,
	EArmIkMode_MAX = 6
};

// ScriptStruct DBDAnimation.CustomizationAnimationMapping
// Size: 0x30 (Inherited: 0x08)
struct FCustomizationAnimationMapping : FDBDTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> AnimTags; // 0x10(0x10)
	struct TArray<struct FCustomizationCategoryAnimationMappingInfo> _mappingInfos; // 0x20(0x10)
};

// ScriptStruct DBDAnimation.CustomizationCategoryAnimationMappingInfo
// Size: 0x18 (Inherited: 0x00)
struct FCustomizationCategoryAnimationMappingInfo {
	enum class ECustomizationCategory CustomizationCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> Tags; // 0x08(0x10)
};

// ScriptStruct DBDAnimation.KillerSpecificSurvivorAnimationsRow
// Size: 0x48 (Inherited: 0x08)
struct FKillerSpecificSurvivorAnimationsRow : FDBDTableRowBase {
	struct FGameplayTag KillerPresenceStateTag; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftClassPtr<UObject> KillerSpecificSurvivorAnimation; // 0x18(0x30)
};

// ScriptStruct DBDAnimation.FootBoneData
// Size: 0x30 (Inherited: 0x00)
struct FFootBoneData {
	struct UCurveVector* RightFootCurve; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UCurveVector* LeftFootCurve; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct DBDAnimation.PerspectiveDependentAnimSequenceSelector
// Size: 0x18 (Inherited: 0x00)
struct FPerspectiveDependentAnimSequenceSelector {
	struct UAnimSequence* _current; // 0x00(0x08)
	struct UAnimSequence* _thirdPerson; // 0x08(0x08)
	struct UAnimSequence* _firstPerson; // 0x10(0x08)
};

