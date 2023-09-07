// Enum DBDUIPresenters.EContextSection
enum class EContextSection : uint8 {
	None = 0,
	Hud = 1,
	MainMenu = 2,
	Lobby = 3,
	Store = 4,
	Tally = 5,
	Archive = 6,
	Credits = 7,
	Onboarding = 8,
	Popups = 9,
	GenericPopups = 10,
	LightSensitivity = 11,
	EContextSection_MAX = 12
};

// Enum DBDUIPresenters.EPresenterPhase
enum class EPresenterPhase : uint8 {
	Initialization = 0,
	StartPresenting = 1,
	EPresenterPhase_MAX = 2
};

// Enum DBDUIPresenters.EGameLayer
enum class EGameLayer : uint8 {
	Default = 0,
	Overlay = 1,
	UMGPopup = 2,
	HighOverlay = 3,
	Tooltip = 4,
	Watermark = 5,
	EGameLayer_MAX = 6
};

// ScriptStruct DBDUIPresenters.QuestEventsTrackingData
// Size: 0x20 (Inherited: 0x00)
struct FQuestEventsTrackingData {
	struct FString QuestEventId; // 0x00(0x10)
	int32_t CurrentProgressionValue; // 0x10(0x04)
	int32_t MaxProgressionValue; // 0x14(0x04)
	enum class EQuestOperationType OperationType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DBDUIPresenters.PresenterGroupData
// Size: 0x10 (Inherited: 0x08)
struct FPresenterGroupData : FDBDTableRowBase {
	struct UPresenterGroup* PresenterGroup; // 0x08(0x08)
};

// ScriptStruct DBDUIPresenters.SubtitlesEntry
// Size: 0x18 (Inherited: 0x00)
struct FSubtitlesEntry {
	struct FString Subtitle; // 0x00(0x10)
	bool isAOneLiner; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

