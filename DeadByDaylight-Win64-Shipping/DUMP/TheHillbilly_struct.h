// ScriptStruct TheHillbilly.ChainsawAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FChainsawAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct TArray<struct FChainsawEventWhileCamping> DownSurvivorsWithChainsawWhileCampingEvents; // 0xb8(0x10)
};

// ScriptStruct TheHillbilly.ChainsawEvent
// Size: 0x04 (Inherited: 0x00)
struct FChainsawEvent {
	float ElapsedMatchTime; // 0x00(0x04)
};

// ScriptStruct TheHillbilly.ChainsawEventWhileCamping
// Size: 0x08 (Inherited: 0x04)
struct FChainsawEventWhileCamping : FChainsawEvent {
	float DistanceFromClosestHook; // 0x04(0x04)
};

// ScriptStruct TheHillbilly.HillbillyAnalytics
// Size: 0x108 (Inherited: 0xc8)
struct FHillbillyAnalytics : FChainsawAnalytics {
	struct TArray<struct FChainsawEvent> OverheatEvents; // 0xc8(0x10)
	struct TArray<struct FChainsawEvent> OverheatWhileSprintingEvents; // 0xd8(0x10)
	struct TArray<struct FChainsawEventWhileCamping> OverheatWhileCampingEvents; // 0xe8(0x10)
	struct TArray<struct FChainsawEvent> RevFromZeroHeatEvents; // 0xf8(0x10)
};

