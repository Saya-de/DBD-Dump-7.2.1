// Enum DBDUIManagers.EDPIScaleCurveRatio
enum class EDPIScaleCurveRatio : uint8 {
	Default = 0,
	SmallerEqual4_4 = 1,
	Mobile = 2,
	EDPIScaleCurveRatio_MAX = 3
};

// Enum DBDUIManagers.EScaleType
enum class EScaleType : uint8 {
	None = 0,
	Menu = 1,
	Hud = 2,
	SkillCheck = 3,
	EScaleType_MAX = 4
};

// ScriptStruct DBDUIManagers.DPIScaleCurveForRatio
// Size: 0x40 (Inherited: 0x08)
struct FDPIScaleCurveForRatio : FDBDTableRowBase {
	enum class EDPIScaleCurveRatio Ratio; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<UCurveFloat> DPIScaleCurve; // 0x10(0x30)
};

