// Enum TheGhostface.EGhostStealthState
enum class EGhostStealthState : uint8 {
	AWAITING_ACTIVATION = 0,
	ACTIVATED = 1,
	COOLDOWN = 2,
	EGhostStealthState_MAX = 3
};

// ScriptStruct TheGhostface.GhostKillerAnalytics
// Size: 0xf0 (Inherited: 0xa8)
struct FGhostKillerAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t Stalk; // 0xb8(0x04)
	int32_t StalkStealth; // 0xbc(0x04)
	int32_t Stalk25; // 0xc0(0x04)
	int32_t Stalk50; // 0xc4(0x04)
	int32_t Stalk75; // 0xc8(0x04)
	int32_t Stalk100; // 0xcc(0x04)
	int32_t StalkLean25; // 0xd0(0x04)
	int32_t StalkLean50; // 0xd4(0x04)
	int32_t StalkLean75; // 0xd8(0x04)
	int32_t StalkLean100; // 0xdc(0x04)
	int32_t Lean; // 0xe0(0x04)
	int32_t DownExposedSurvivor; // 0xe4(0x04)
	float TimeInStealthMode; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

