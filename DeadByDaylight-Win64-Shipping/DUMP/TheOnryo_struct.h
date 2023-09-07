// Enum TheOnryo.ECondemnOrigin
enum class ECondemnOrigin : uint8 {
	None = 0,
	Addon = 1,
	BasicAttack = 2,
	PlayerHook = 3,
	Teleport = 4,
	VHS = 5,
	ECondemnOrigin_MAX = 6
};

// Enum TheOnryo.ETelevisionCosmeticState
enum class ETelevisionCosmeticState : uint8 {
	Off = 0,
	TurningOn = 1,
	TurningOff = 2,
	Static = 3,
	TransitionToSurvivorTape = 4,
	PlaySurvivorTape = 5,
	TransitionToKillerTape = 6,
	PlayKillerTape = 7,
	TransitionFromSurvivorTapeToStatic = 8,
	TransitionFromKillerTapeToStatic = 9,
	FakeTeleport = 10,
	TurningOffOnEject = 11,
	ETelevisionCosmeticState_MAX = 12
};

// Enum TheOnryo.EFlickerType
enum class EFlickerType : uint8 {
	None = 0,
	Flickering = 1,
	FlickeringFast = 2,
	EFlickerType_MAX = 3
};

// ScriptStruct TheOnryo.FlickerSettings
// Size: 0x78 (Inherited: 0x00)
struct FFlickerSettings {
	struct FDBDTunableRowHandle VisibleDuration; // 0x00(0x28)
	struct TArray<struct FGameplayTag> VisibileDurationAddModifiers; // 0x28(0x10)
	struct FDBDTunableRowHandle InvisibleDuration; // 0x38(0x28)
	struct TArray<struct FGameplayTag> InvisibleDurationAddModifiers; // 0x60(0x10)
	bool StartVisible; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

