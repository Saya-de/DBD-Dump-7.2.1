// Enum TheLegion.EFrenzyEndReason
enum class EFrenzyEndReason : uint8 {
	OutOfTime = 0,
	Manual = 1,
	PickUpCamper = 2,
	Stunned = 3,
	Mori = 4,
	Blinded = 5,
	ChainComplete = 6,
	EFrenzyEndReason_MAX = 7
};

// ScriptStruct TheLegion.LegionSurvivorAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FLegionSurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t DeepWoundCount; // 0xb8(0x04)
	int32_t FrenzyEffectivements; // 0xbc(0x04)
	int32_t DeepWoundDying; // 0xc0(0x04)
	bool DeepWoundEscape; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// ScriptStruct TheLegion.LegionKillerAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FLegionKillerAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t Pallet; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

