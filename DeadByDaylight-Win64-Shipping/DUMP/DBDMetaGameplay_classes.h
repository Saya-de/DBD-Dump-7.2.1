// Class DBDMetaGameplay.DBDEmblem_KillerChaser
// Size: 0x1c0 (Inherited: 0x108)
struct UDBDEmblem_KillerChaser : UDBDEmblem {
	char pad_108[0x40]; // 0x108(0x40)
	struct UCurveFloat* _chasePointsByDurationCurve; // 0x148(0x08)
	char pad_150[0x18]; // 0x150(0x18)
	struct TMap<struct ACamperPlayer*, float> _hookedPlayersPenaltyDelay; // 0x168(0x50)
	struct UDBDRankDesignTunables* _rankTunablesClass; // 0x1b8(0x08)

	void OnChaseStart(struct ADBDPlayer* chasedPlayer); // Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart // (Final|Native|Public) // @ game+0x4d897a0
};

// Class DBDMetaGameplay.DBDEmblem_KillerDevout
// Size: 0x140 (Inherited: 0x108)
struct UDBDEmblem_KillerDevout : UDBDEmblem {
	char pad_108[0x20]; // 0x108(0x20)
	struct TArray<struct ACamperPlayer*> _playersToHook; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void OnLevelReadyToPlay(); // Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4d89a60
};

// Class DBDMetaGameplay.DBDEmblem_KillerGatekeeper
// Size: 0x138 (Inherited: 0x108)
struct UDBDEmblem_KillerGatekeeper : UDBDEmblem {
	char pad_108[0x30]; // 0x108(0x30)
};

// Class DBDMetaGameplay.DBDEmblem_KillerMalicious
// Size: 0x170 (Inherited: 0x108)
struct UDBDEmblem_KillerMalicious : UDBDEmblem {
	char pad_108[0x10]; // 0x108(0x10)
	struct TMap<struct ACamperPlayer*, int32_t> _remainingSurvivorHookStates; // 0x118(0x50)
	char pad_168[0x8]; // 0x168(0x08)

	void OnLevelReadyToPlay(); // Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay // (Final|Native|Public) // @ game+0x4d89db0
};

// Class DBDMetaGameplay.DBDEmblem_SurvivorBenevolent
// Size: 0x168 (Inherited: 0x108)
struct UDBDEmblem_SurvivorBenevolent : UDBDEmblem {
	char pad_108[0x60]; // 0x108(0x60)
};

// Class DBDMetaGameplay.DBDEmblem_SurvivorEvader
// Size: 0x180 (Inherited: 0x108)
struct UDBDEmblem_SurvivorEvader : UDBDEmblem {
	char pad_108[0x50]; // 0x108(0x50)
	struct UCurveFloat* _killerDistanceStealthPointCurve; // 0x158(0x08)
	struct UCurveFloat* _killerDistanceStealthPointCurveChasing; // 0x160(0x08)
	struct UCurveFloat* _chaseDurationPointCurve; // 0x168(0x08)
	struct UCurveFloat* _ZAxisDistanceScalingCurve; // 0x170(0x08)
	struct UDBDRankDesignTunables* _rankTunablesClass; // 0x178(0x08)

	void OnChaseStartEvent(struct ADBDPlayer* chasedPlayer); // Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent // (Final|Native|Public) // @ game+0x4d8a200
};

// Class DBDMetaGameplay.DBDEmblem_SurvivorLightbringer
// Size: 0x190 (Inherited: 0x108)
struct UDBDEmblem_SurvivorLightbringer : UDBDEmblem {
	char pad_108[0x88]; // 0x108(0x88)
};

// Class DBDMetaGameplay.DBDEmblem_SurvivorUnbroken
// Size: 0x138 (Inherited: 0x108)
struct UDBDEmblem_SurvivorUnbroken : UDBDEmblem {
	char pad_108[0x10]; // 0x108(0x10)
	struct UCurveFloat* _pointsForTimeAlive; // 0x118(0x08)
	char pad_120[0x10]; // 0x120(0x10)
	struct UDBDRankDesignTunables* _rankTunablesClass; // 0x130(0x08)

	void OnIntroCompleted(); // Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted // (Final|Native|Private) // @ game+0x4d8a5b0
};

// Class DBDMetaGameplay.DBDEmblem_KillerGatekeeperTest
// Size: 0x140 (Inherited: 0x138)
struct UDBDEmblem_KillerGatekeeperTest : UDBDEmblem_KillerGatekeeper {
	struct ADBDGameState* _gameState; // 0x138(0x08)
};

