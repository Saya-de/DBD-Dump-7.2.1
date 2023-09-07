// ScriptStruct ThePlague.PlagueSurvivorAnalytics
// Size: 0xd8 (Inherited: 0xa8)
struct FPlagueSurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t BecomeInfectCount; // 0xb8(0x04)
	int32_t RegularVomitHits; // 0xbc(0x04)
	int32_t SuperVomitHits; // 0xc0(0x04)
	int32_t CleanSicknessCount; // 0xc4(0x04)
	float TimeWithSickness; // 0xc8(0x04)
	float TimeWithMaximumSickness; // 0xcc(0x04)
	float TimeInSuperMode; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

