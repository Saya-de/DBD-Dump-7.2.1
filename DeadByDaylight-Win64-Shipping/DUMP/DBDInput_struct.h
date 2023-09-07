// Enum DBDInput.EAnalogCursorDataType
enum class EAnalogCursorDataType : uint8 {
	MaxSpeedDefault = 0,
	MaxSpeedDefaultSlow = 1,
	MaxSpeedStickyDefault = 2,
	MaxSpeedStickySlow = 3,
	MaxSpeedStickyButtonMedium = 4,
	MaxSpeedStickyButtonLarge = 5,
	MaxSpeedDefaultBloodweb = 6,
	MaxSpeedStickyBloodweb = 7,
	CustomAcceleration = 8,
	DeadZone = 9,
	HandheldSpeedBoostFactor = 10,
	DragZoneMaxDelta = 11,
	EAnalogCursorDataType_MAX = 12
};

// Enum DBDInput.EDBDInputMode
enum class EDBDInputMode : uint8 {
	None = 0,
	Scaleform = 1,
	UMG = 2,
	Game = 3,
	EDBDInputMode_MAX = 4
};

// Enum DBDInput.EUIActionType
enum class EUIActionType : uint8 {
	None = 0,
	Accept = 1,
	Cancel = 2,
	Previous = 3,
	Next = 4,
	PreviousSecondary = 5,
	NextSecondary = 6,
	ArchivesSurvivorSlot = 7,
	ArchivesKillerAndSurvivorSlot = 8,
	ArchivesKillerSlot = 9,
	FaceButtonLeft = 10,
	FaceButtonTop = 11,
	Scroll = 12,
	Options = 13,
	EUIActionType_MAX = 14
};

// ScriptStruct DBDInput.AnalogCursorData
// Size: 0x18 (Inherited: 0x08)
struct FAnalogCursorData : FDBDTableRowBase {
	enum class EAnalogCursorDataType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float value; // 0x0c(0x04)
	bool ScalesWithDPI; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

