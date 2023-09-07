// Enum DBDAnalytics.EDBDAnalyticsGameMode
enum class EDBDAnalyticsGameMode : uint8 {
	AnalyticsServer = 0,
	AnalyticsClient = 1,
	AnalyticsLoading = 2,
	AnalyticsLobby = 3,
	AnalyticsMenu = 4,
	AnalyticsPostGame = 5,
	AnalyticsPerfTests = 6,
	AnalyticsSplashScreen = 7,
	EDBDAnalyticsGameMode_MAX = 8
};

// Enum DBDAnalytics.ECharacterStatus
enum class ECharacterStatus : uint8 {
	Crawling = 0,
	BeingPickedUp = 1,
	BeingCarried = 2,
	BeingHealed = 3,
	BeingMended = 4,
	BeingPutDown = 5,
	BeingPutOnHook = 6,
	BeingPulledFromCloset = 7,
	BeingKilled = 8,
	OnHook = 9,
	ECharacterStatus_MAX = 10
};

// Enum DBDAnalytics.EHealthStatus
enum class EHealthStatus : uint8 {
	Healthy = 0,
	Wounded = 1,
	DeepWounded = 2,
	Dying = 3,
	EHealthStatus_MAX = 4
};

// Enum DBDAnalytics.EDoorStatus
enum class EDoorStatus : uint8 {
	Closed = 0,
	Powered = 1,
	Open = 2,
	EDoorStatus_MAX = 3
};

// Enum DBDAnalytics.EHatchStatus
enum class EHatchStatus : uint8 {
	Hidden = 0,
	Visible = 1,
	Open = 2,
	Closed = 3,
	ClosedOrHidden = 4,
	EHatchStatus_MAX = 5
};

// ScriptStruct DBDAnalytics.UniquelyIdentifiedAnalytic
// Size: 0xa8 (Inherited: 0x18)
struct FUniquelyIdentifiedAnalytic : FBaseSingleStructIndexAnalytics {
	struct FString Version; // 0x18(0x10)
	struct FString Branch; // 0x28(0x10)
	struct FString Changelist; // 0x38(0x10)
	struct FString Configuration; // 0x48(0x10)
	struct FString MirrorsId; // 0x58(0x10)
	struct FString ClientId; // 0x68(0x10)
	struct FString platform; // 0x78(0x10)
	struct FString BackendEnv; // 0x88(0x10)
	struct FString DataContentVersion; // 0x98(0x10)
};

// ScriptStruct DBDAnalytics.ArchiveVignetteVideoAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FArchiveVignetteVideoAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ArchiveId; // 0xa8(0x10)
	struct FString VignetteId; // 0xb8(0x10)
	struct FString VideoId; // 0xc8(0x10)
	struct FString StartVideoTimestamp; // 0xd8(0x10)
	double VideoTimeSpent; // 0xe8(0x08)
	bool WasVideoWatchUntilEnd; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct DBDAnalytics.ArchiveVignetteEntryAnalytics
// Size: 0x108 (Inherited: 0xa8)
struct FArchiveVignetteEntryAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ArchiveId; // 0xa8(0x10)
	struct FString VignetteId; // 0xb8(0x10)
	int32_t EntryId; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString SelectEntryTimestamp; // 0xd0(0x10)
	double EntryTimeSpent; // 0xe0(0x08)
	bool IsTaggedAsNew; // 0xe8(0x01)
	bool HasVoiceOver; // 0xe9(0x01)
	bool StartWithAutoplayEnable; // 0xea(0x01)
	bool IsAutoplayEnableWhenDeselectingEntry; // 0xeb(0x01)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString StartVoiceoverTimestamp; // 0xf0(0x10)
	double VoiceoverLongestTimeSpent; // 0x100(0x08)
};

// ScriptStruct DBDAnalytics.BotReplacementAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FBotReplacementAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString KrakenMatchId; // 0xb8(0x10)
	enum class EPlayerRole Role; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MatchTime; // 0xcc(0x04)
	struct FString characterName; // 0xd0(0x10)
	struct FString ReplacedCharacterMirrorsId; // 0xe0(0x10)
	enum class EAIDifficultyLevel BotDifficultyLevel; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct DBDAnalytics.Gameplay_ChaseAnalytics
// Size: 0x188 (Inherited: 0xa8)
struct FGameplay_ChaseAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	bool IsABot; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString MirrorsIdSurvivor; // 0xc0(0x10)
	float CoordXStartKiller; // 0xd0(0x04)
	float CoordYStartKiller; // 0xd4(0x04)
	float CoordZStartKiller; // 0xd8(0x04)
	float CoordXEndKiller; // 0xdc(0x04)
	float CoordYEndKiller; // 0xe0(0x04)
	float CoordZEndKiller; // 0xe4(0x04)
	int32_t PalletsDestroyedByKiller; // 0xe8(0x04)
	int32_t WindowsVaultedByKiller; // 0xec(0x04)
	int32_t PalletsVaultedByKiller; // 0xf0(0x04)
	int32_t BasicAttackSwingsByKiller; // 0xf4(0x04)
	int32_t BasicAttackHitsByKiller; // 0xf8(0x04)
	int32_t SpecialAttackAttemptsByKiller; // 0xfc(0x04)
	int32_t SpecialAttackHitsByKiller; // 0x100(0x04)
	float DistanceCoveredKiller; // 0x104(0x04)
	float CoordXStartSurvivor; // 0x108(0x04)
	float CoordYStartSurvivor; // 0x10c(0x04)
	float CoordZStartSurvivor; // 0x110(0x04)
	float CoordXEndSurvivor; // 0x114(0x04)
	float CoordYEndSurvivor; // 0x118(0x04)
	float CoordZEndSurvivor; // 0x11c(0x04)
	int32_t PalletsDroppedBySurvivor; // 0x120(0x04)
	int32_t PalletsStunnedBySurvivor; // 0x124(0x04)
	int32_t WindowsVaultedBySurvivor; // 0x128(0x04)
	int32_t PalletsVaultedBySurvivor; // 0x12c(0x04)
	int32_t StartingHealthOfSurvivor; // 0x130(0x04)
	int32_t EndingHealthOfSurvivor; // 0x134(0x04)
	int32_t AmountHealedOfSurvivor; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FString StartingTileSurvivor; // 0x140(0x10)
	struct FString EndingTileSurvivor; // 0x150(0x10)
	int32_t AmountOfTilesVisitedSurvivor; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct TArray<struct FString> TilesVisitedSurvivor; // 0x168(0x10)
	float DistanceCoveredSurvivor; // 0x178(0x04)
	float DisplacementSurvivor; // 0x17c(0x04)
	float ChaseStartTimeInSecond; // 0x180(0x04)
	float ChaseEndTimeInSecond; // 0x184(0x04)
};

// ScriptStruct DBDAnalytics.ChatAnalytics
// Size: 0x118 (Inherited: 0xa8)
struct FChatAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString SenderMirrorsId; // 0xa8(0x10)
	struct FString SenderPlayerName; // 0xb8(0x10)
	struct FString MatchID; // 0xc8(0x10)
	struct FString ChatContent; // 0xd8(0x10)
	struct FString OriginalChatContent; // 0xe8(0x10)
	struct FString ChatContext; // 0xf8(0x10)
	struct FString InGameTimestamp; // 0x108(0x10)
};

// ScriptStruct DBDAnalytics.BaseCheatAnalytics
// Size: 0x130 (Inherited: 0xa8)
struct FBaseCheatAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Location; // 0xa8(0x10)
	struct FString NetMode; // 0xb8(0x10)
	struct FString requester; // 0xc8(0x10)
	struct FString RequesterPlatform; // 0xd8(0x10)
	struct FString RequesterRole; // 0xe8(0x10)
	int32_t RequesterCharacterId; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString RequesterCharacterName; // 0x100(0x10)
	struct FString MatchID; // 0x110(0x10)
	struct FString MatchType; // 0x120(0x10)
};

// ScriptStruct DBDAnalytics.SuspiciousBehaviourAnalytics
// Size: 0x180 (Inherited: 0x130)
struct FSuspiciousBehaviourAnalytics : FBaseCheatAnalytics {
	struct FString Type; // 0x130(0x10)
	struct FString ExtraField1String; // 0x140(0x10)
	int64_t ExtraField1Integer; // 0x150(0x08)
	double ExtraField1Floating; // 0x158(0x08)
	struct FString ExtraField2String; // 0x160(0x10)
	int64_t ExtraField2Integer; // 0x170(0x08)
	double ExtraField2Floating; // 0x178(0x08)
};

// ScriptStruct DBDAnalytics.ExecExecutedAnalytics
// Size: 0x148 (Inherited: 0x130)
struct FExecExecutedAnalytics : FBaseCheatAnalytics {
	struct FString Command; // 0x130(0x10)
	bool Executed; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct DBDAnalytics.CheatExecutedAnalytics
// Size: 0x158 (Inherited: 0x130)
struct FCheatExecutedAnalytics : FBaseCheatAnalytics {
	struct FString Command; // 0x130(0x10)
	struct FString Type; // 0x140(0x10)
	bool Successful; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// ScriptStruct DBDAnalytics.CheatValidatedAnalytics
// Size: 0x158 (Inherited: 0x130)
struct FCheatValidatedAnalytics : FBaseCheatAnalytics {
	struct FString Command; // 0x130(0x10)
	struct FString Type; // 0x140(0x10)
	bool Validated; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// ScriptStruct DBDAnalytics.ClientConnectionBaseAnalytics
// Size: 0x148 (Inherited: 0xa8)
struct FClientConnectionBaseAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ClientRole; // 0xa8(0x10)
	struct FString ClientSurvivorIndex; // 0xb8(0x10)
	struct FString ClientKillerIndex; // 0xc8(0x10)
	struct FString ClientPlatformAccountId; // 0xd8(0x10)
	struct FString ClientMirrorsId; // 0xe8(0x10)
	struct FString ClientPlatform; // 0xf8(0x10)
	struct FString ClientProvider; // 0x108(0x10)
	struct FString ClientName; // 0x118(0x10)
	struct FString MatchID; // 0x128(0x10)
	struct FString GameType; // 0x138(0x10)
};

// ScriptStruct DBDAnalytics.ClientLogoutAnalytics
// Size: 0x168 (Inherited: 0x148)
struct FClientLogoutAnalytics : FClientConnectionBaseAnalytics {
	struct FString GameState; // 0x148(0x10)
	struct FString GameFlowStep; // 0x158(0x10)
};

// ScriptStruct DBDAnalytics.ClientLoginAnalytics
// Size: 0x188 (Inherited: 0x148)
struct FClientLoginAnalytics : FClientConnectionBaseAnalytics {
	struct FString ClientOptions; // 0x148(0x10)
	struct FString ClientMatchId; // 0x158(0x10)
	struct FString ClientGameType; // 0x168(0x10)
	struct FString LoginResult; // 0x178(0x10)
};

// ScriptStruct DBDAnalytics.CrossfriendsAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FCrossfriendsAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Action; // 0xa8(0x10)
	struct FString TargetKrakenUserId; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.CurrencyBalanceAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FCurrencyBalanceAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString CurrencyName; // 0xa8(0x10)
	int32_t CurrencyBalance; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct DBDAnalytics.CustomerSupportClientLoginAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FCustomerSupportClientLoginAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString playerName; // 0xa8(0x10)
	struct FString Provider; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.CustomerSupportAnalytics
// Size: 0xa8 (Inherited: 0xa8)
struct FCustomerSupportAnalytics : FUniquelyIdentifiedAnalytic {
};

// ScriptStruct DBDAnalytics.CustomizationBaseAnalytics
// Size: 0x110 (Inherited: 0xa8)
struct FCustomizationBaseAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString CustomizationSlot1; // 0xa8(0x10)
	struct FString CustomizationSlot2; // 0xb8(0x10)
	struct FString CustomizationSlot3; // 0xc8(0x10)
	struct FString Charm1; // 0xd8(0x10)
	struct FString Charm2; // 0xe8(0x10)
	struct FString Charm3; // 0xf8(0x10)
	enum class EPlayerRole Role; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct DBDAnalytics.CustomizationLobbyAnalytics
// Size: 0x120 (Inherited: 0x110)
struct FCustomizationLobbyAnalytics : FCustomizationBaseAnalytics {
	struct FString LobbyId; // 0x110(0x10)
};

// ScriptStruct DBDAnalytics.CustomizationAnalytics
// Size: 0x120 (Inherited: 0x110)
struct FCustomizationAnalytics : FCustomizationBaseAnalytics {
	struct FString MatchID; // 0x110(0x10)
};

// ScriptStruct DBDAnalytics.DailyRitualAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FDailyRitualAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Status; // 0xa8(0x10)
	struct FString ritualId; // 0xb8(0x10)
	float HoursElapsed; // 0xc8(0x04)
	int32_t Progress; // 0xcc(0x04)
	int32_t Threshold; // 0xd0(0x04)
	int32_t PendingRituals; // 0xd4(0x04)
	int32_t SpecificCharacter; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct DBDAnalytics.DDoSDetectionAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FDDoSDetectionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Severity; // 0xa8(0x10)
	struct FString MatchID; // 0xb8(0x10)
	int32_t NonConnPacketCounter; // 0xc8(0x04)
	int32_t NetConnPacketCounter; // 0xcc(0x04)
	int32_t DisconnPacketCounter; // 0xd0(0x04)
	int32_t BadPacketCounter; // 0xd4(0x04)
	int32_t ErrorPacketCounter; // 0xd8(0x04)
	int32_t DroppedPacketCounter; // 0xdc(0x04)
};

// ScriptStruct DBDAnalytics.DedicatedServerStatusAnalytics
// Size: 0x140 (Inherited: 0xa8)
struct FDedicatedServerStatusAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString DSSessionProvider; // 0xa8(0x10)
	struct FString ServerStatus; // 0xb8(0x10)
	struct FString GameLiftSessionId; // 0xc8(0x10)
	struct FString MatchID; // 0xd8(0x10)
	struct FString SessionEndReason; // 0xe8(0x10)
	struct FString FleetId; // 0xf8(0x10)
	struct FString IpAddress; // 0x108(0x10)
	int32_t Port; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FString DnsName; // 0x120(0x10)
	struct FString Region; // 0x130(0x10)
};

// ScriptStruct DBDAnalytics.DetailedHitAnalytics
// Size: 0x140 (Inherited: 0xa8)
struct FDetailedHitAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString InstigatorMirrorsId; // 0xb8(0x10)
	struct FString TargetMirrorsId; // 0xc8(0x10)
	float Ping; // 0xd8(0x04)
	float HitTimestamp; // 0xdc(0x04)
	bool IsValidHit; // 0xe0(0x01)
	bool IsValidDistance; // 0xe1(0x01)
	bool IsValidCollision; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	float RecorderCacheTimespan; // 0xe4(0x04)
	float MaximumDistance; // 0xe8(0x04)
	float CapsuleInflation; // 0xec(0x04)
	struct FString InstigatorName; // 0xf0(0x10)
	struct FString HitPrimitiveName; // 0x100(0x10)
	float InstigatorCoordinateX; // 0x110(0x04)
	float InstigatorCoordinateY; // 0x114(0x04)
	float InstigatorCoordinateZ; // 0x118(0x04)
	float InstigatorRotationX; // 0x11c(0x04)
	float InstigatorRotationY; // 0x120(0x04)
	float InstigatorRotationZ; // 0x124(0x04)
	float TargetLocationInstigatorTimestamp; // 0x128(0x04)
	float TargetCoordinateX; // 0x12c(0x04)
	float TargetCoordinateY; // 0x130(0x04)
	float TargetCoordinateZ; // 0x134(0x04)
	float distance; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct DBDAnalytics.DisconnectionAnalytics
// Size: 0x120 (Inherited: 0xa8)
struct FDisconnectionAnalytics : FUniquelyIdentifiedAnalytic {
	double TimeSinceLastPacket; // 0xa8(0x08)
	struct FString GameFlowStep; // 0xb0(0x10)
	struct FString UnrealMapName; // 0xc0(0x10)
	struct FString MapName; // 0xd0(0x10)
	struct FString ThemeName; // 0xe0(0x10)
	struct FString FailureType; // 0xf0(0x10)
	struct FString ErrorString; // 0x100(0x10)
	struct FString MatchID; // 0x110(0x10)
};

// ScriptStruct DBDAnalytics.DisconnectionDetailsAnalytics
// Size: 0x100 (Inherited: 0xa8)
struct FDisconnectionDetailsAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString PlayerPlatform; // 0xa8(0x10)
	struct FString MatchID; // 0xb8(0x10)
	int32_t InGameTime; // 0xc8(0x04)
	enum class EPlayerRole Role; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct FString Reason; // 0xd0(0x10)
	enum class EHealthStatus Health; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<enum class ECharacterStatus> CharacterStatus; // 0xe8(0x10)
	int32_t GeneratorActivated; // 0xf8(0x04)
	enum class EHatchStatus HatchStatus; // 0xfc(0x01)
	enum class EDoorStatus DoorStatus; // 0xfd(0x01)
	enum class EGameState DisconnectionType; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
};

// ScriptStruct DBDAnalytics.DedicatedServerPlayerEquipDisabledItemAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FDedicatedServerPlayerEquipDisabledItemAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString PlayerMirrorsId; // 0xa8(0x10)
	struct FString EquipedDisabledItemIds; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.EACAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FEACAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString LogMessage; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.EACClientViolationAnalytics
// Size: 0xc8 (Inherited: 0xb8)
struct FEACClientViolationAnalytics : FEACAnalytics {
	struct FString ViolationCase; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.EACClientInitAnalytics
// Size: 0xc0 (Inherited: 0xb8)
struct FEACClientInitAnalytics : FEACAnalytics {
	char ValidationErrorType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct DBDAnalytics.EACServerValidateAnalytics
// Size: 0xc0 (Inherited: 0xc0)
struct FEACServerValidateAnalytics : FEACClientInitAnalytics {
};

// ScriptStruct DBDAnalytics.EACClientAuthChallengeAnalytics
// Size: 0xc0 (Inherited: 0xc0)
struct FEACClientAuthChallengeAnalytics : FEACClientInitAnalytics {
};

// ScriptStruct DBDAnalytics.EACClientAuthInitAnalytics
// Size: 0xc0 (Inherited: 0xc0)
struct FEACClientAuthInitAnalytics : FEACClientInitAnalytics {
};

// ScriptStruct DBDAnalytics.EmblemProgressionAnalytics
// Size: 0xf0 (Inherited: 0xa8)
struct FEmblemProgressionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString EmblemId; // 0xb8(0x10)
	float EmblemValue; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString EmblemQuality; // 0xd0(0x10)
	struct TArray<struct FEmblemProgressionDetailsAnalytics> ProgressionDetails; // 0xe0(0x10)
};

// ScriptStruct DBDAnalytics.EmblemProgressionDetailsAnalytics
// Size: 0x18 (Inherited: 0x00)
struct FEmblemProgressionDetailsAnalytics {
	struct FString ProgressionType; // 0x00(0x10)
	float ProgressionPoint; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DBDAnalytics.EndpointLatencyAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FEndpointLatencyAnalytics : FUniquelyIdentifiedAnalytic {
	struct TArray<struct FEndpointLatencyData> Endpoints; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.EndpointLatencyData
// Size: 0x18 (Inherited: 0x00)
struct FEndpointLatencyData {
	struct FString ID; // 0x00(0x10)
	uint32_t Latency; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DBDAnalytics.EnvironmentAnalytics
// Size: 0x208 (Inherited: 0xa8)
struct FEnvironmentAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Environment; // 0xa8(0x10)
	struct FString Endpoint; // 0xb8(0x10)
	struct FString Language; // 0xc8(0x10)
	struct FString SelectedCountry; // 0xd8(0x10)
	struct FString Timezone; // 0xe8(0x10)
	struct FString DeviceProfile; // 0xf8(0x10)
	struct FString GpuAdapter; // 0x108(0x10)
	struct FString GpuProviderName; // 0x118(0x10)
	struct FString GpuDriverVersion; // 0x128(0x10)
	struct FString RHIName; // 0x138(0x10)
	struct FString Cpu; // 0x148(0x10)
	int32_t QualitySetting; // 0x158(0x04)
	bool IsFullScreen; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	int32_t FullscreenMode; // 0x160(0x04)
	bool IsAutomaticResolution; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	int32_t ScreenResolutionSetting; // 0x168(0x04)
	int32_t EngineResolutionX; // 0x16c(0x04)
	int32_t EngineResolutionY; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString Provider; // 0x178(0x10)
	struct FString Device; // 0x188(0x10)
	struct FString OperatingSystem; // 0x198(0x10)
	bool IsPlayingUsingStreaming; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FString StreamingService; // 0x1b0(0x10)
	struct FString StreamingServerLocation; // 0x1c0(0x10)
	struct FString KrakenVersion; // 0x1d0(0x10)
	struct FString ContentVersion; // 0x1e0(0x10)
	bool IsUsingKeyboard; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FString ControllerType; // 0x1f8(0x10)
};

// ScriptStruct DBDAnalytics.ErrorAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FErrorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ErrorCategory; // 0xa8(0x10)
	float FloatField1; // 0xb8(0x04)
	float FloatField2; // 0xbc(0x04)
	float FloatField3; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString StringField1; // 0xc8(0x10)
	struct FString StringField2; // 0xd8(0x10)
	struct FString StringField3; // 0xe8(0x10)
};

// ScriptStruct DBDAnalytics.FallOutOfWorldAnalytics
// Size: 0xf0 (Inherited: 0xa8)
struct FFallOutOfWorldAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString FallOutMirrorsId; // 0xb8(0x10)
	float X; // 0xc8(0x04)
	float Y; // 0xcc(0x04)
	float Z; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString TileName; // 0xd8(0x10)
	float ElapsedMatchTime; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct DBDAnalytics.FeatureGateAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FFeatureGateAnalytics : FUniquelyIdentifiedAnalytic {
	bool Enabled; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FFeatureGateAnalyticsDBDFeature> Features; // 0xb0(0x10)
};

// ScriptStruct DBDAnalytics.FeatureGateAnalyticsDBDFeature
// Size: 0x18 (Inherited: 0x00)
struct FFeatureGateAnalyticsDBDFeature {
	struct FName ID; // 0x00(0x0c)
	struct FName State; // 0x0c(0x0c)
};

// ScriptStruct DBDAnalytics.FrameHikeAnalytics
// Size: 0x178 (Inherited: 0xa8)
struct FFrameHikeAnalytics : FUniquelyIdentifiedAnalytic {
	float FrameDeltaTime; // 0xa8(0x04)
	float TimeSinceApplicationStarted; // 0xac(0x04)
	float CurrentTimeoutThreshold; // 0xb0(0x04)
	bool IsOverConnectionTimeLimit; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FString CurrentMap; // 0xb8(0x10)
	struct FString CurrentGameMap; // 0xc8(0x10)
	struct FString GameFlowStep; // 0xd8(0x10)
	struct FString CurrentGameFlowContext; // 0xe8(0x10)
	struct FString PreviousGameFlowContext; // 0xf8(0x10)
	struct FString NavigationContext; // 0x108(0x10)
	struct FString PreviousNavigationContext; // 0x118(0x10)
	struct FString RecentLogs; // 0x128(0x10)
	struct FString KrakenMatchId; // 0x138(0x10)
	float FlushAsyncLoadingTime; // 0x148(0x04)
	int32_t FlushAsyncLoadingCount; // 0x14c(0x04)
	int32_t SyncLoadCount; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString GameType; // 0x158(0x10)
	struct FString NetMode; // 0x168(0x10)
};

// ScriptStruct DBDAnalytics.FreeTrialLoginAnalytics
// Size: 0xa8 (Inherited: 0xa8)
struct FFreeTrialLoginAnalytics : FUniquelyIdentifiedAnalytic {
};

// ScriptStruct DBDAnalytics.GameConsoleLogAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FGameConsoleLogAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Verbosity; // 0xa8(0x10)
	struct FString category; // 0xb8(0x10)
	uint64_t FrameCounter; // 0xc8(0x08)
	struct FString Message; // 0xd0(0x10)
	struct FString StackTrace; // 0xe0(0x10)
	uint32_t Repeated; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct DBDAnalytics.GameInitAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FGameInitAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString InitGuid; // 0xa8(0x10)
	struct FString ProgressionName; // 0xb8(0x10)
	bool success; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FString LoadCompleteState; // 0xd0(0x10)
	float ElapsedTime; // 0xe0(0x04)
	uint32_t FailureCount; // 0xe4(0x04)
	struct FString AdditionalInfo; // 0xe8(0x10)
};

// ScriptStruct DBDAnalytics.Gameplay_PigKillerAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FGameplay_PigKillerAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t AmbushHitCount; // 0xb8(0x04)
	int32_t RbtKilledCount; // 0xbc(0x04)
	int32_t Rbt1GeneratorCount; // 0xc0(0x04)
	int32_t Rbt2GeneratorCount; // 0xc4(0x04)
	int32_t Rbt3GeneratorCount; // 0xc8(0x04)
	int32_t Rbt4GeneratorCount; // 0xcc(0x04)
	int32_t Rbt5GeneratorCount; // 0xd0(0x04)
	float CrouchDuration; // 0xd4(0x04)
	int32_t RbtExitKill; // 0xd8(0x04)
	int32_t RbtHookKill; // 0xdc(0x04)
};

// ScriptStruct DBDAnalytics.Gameplay_KillerAnalytics
// Size: 0x160 (Inherited: 0xa8)
struct FGameplay_KillerAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	float Speed; // 0xb8(0x04)
	int32_t BloodlustTier1Count; // 0xbc(0x04)
	int32_t BloodlustTier2Count; // 0xc0(0x04)
	int32_t BloodlustTier3Count; // 0xc4(0x04)
	float BloodlustTier1Duration; // 0xc8(0x04)
	float BloodlustTier2Duration; // 0xcc(0x04)
	float BloodlustTier3Duration; // 0xd0(0x04)
	float BloodlustSpeed; // 0xd4(0x04)
	int32_t ChaseCount; // 0xd8(0x04)
	int32_t ChaseCountFail; // 0xdc(0x04)
	int32_t ChaseCountSuccess; // 0xe0(0x04)
	int32_t ChaseCountTier1Fail; // 0xe4(0x04)
	int32_t ChaseCountTier1Success; // 0xe8(0x04)
	int32_t ChaseCountTier2Fail; // 0xec(0x04)
	int32_t ChaseCountTier2Success; // 0xf0(0x04)
	int32_t ChaseCountTier3Fail; // 0xf4(0x04)
	int32_t ChaseCountTier3Success; // 0xf8(0x04)
	int32_t HookCount; // 0xfc(0x04)
	int32_t MurderCount; // 0x100(0x04)
	int32_t PalletSpawned; // 0x104(0x04)
	int32_t PalletProcedural; // 0x108(0x04)
	int32_t PalletProceduralSetCount; // 0x10c(0x04)
	uint32_t PalletGenerationId; // 0x110(0x04)
	int32_t PalletGeneric; // 0x114(0x04)
	int32_t PalletDestroyed; // 0x118(0x04)
	int32_t BreakableWallSpawned; // 0x11c(0x04)
	int32_t BreakableWallDestroyed; // 0x120(0x04)
	int32_t DropCount; // 0x124(0x04)
	int32_t HitCloseCount; // 0x128(0x04)
	int32_t HitCloseCountSuccess; // 0x12c(0x04)
	int32_t HitFarCount; // 0x130(0x04)
	int32_t HitFarCountSuccess; // 0x134(0x04)
	int32_t HitSpecialCount; // 0x138(0x04)
	int32_t HitSpecialCountSuccess; // 0x13c(0x04)
	int32_t ClosetOpen; // 0x140(0x04)
	int32_t ClosetOpenSuccess; // 0x144(0x04)
	int32_t EscapeesHatchCount; // 0x148(0x04)
	float SecondesAtLeastOneSurvivorHooked; // 0x14c(0x04)
	uint32_t AmountTilesVisited; // 0x150(0x04)
	float StartX; // 0x154(0x04)
	float StartY; // 0x158(0x04)
	float StartZ; // 0x15c(0x04)
};

// ScriptStruct DBDAnalytics.Gameplay_PigSurvivorAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FGameplay_PigSurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t RbtAttachedCount; // 0xb8(0x04)
	int32_t ActivatedRbtTimerCount; // 0xbc(0x04)
	int32_t RbtSuccessSearchCount; // 0xc0(0x04)
	int32_t RbtFailedSearchCount; // 0xc4(0x04)
	int32_t RbtDisabledPreActivation; // 0xc8(0x04)
	int32_t RbtDisabledPostActivation; // 0xcc(0x04)
	float RbtChaseDuration; // 0xd0(0x04)
	float RbtAverageTimeLeftBeforeDisable; // 0xd4(0x04)
	float RbtDuration; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct DBDAnalytics.Gameplay_SurvivorAnalytics
// Size: 0x138 (Inherited: 0xa8)
struct FGameplay_SurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	float Speed; // 0xb8(0x04)
	float InjuredSpeed; // 0xbc(0x04)
	float InjuredDuration; // 0xc0(0x04)
	float HealthyDuration; // 0xc4(0x04)
	float KODuration; // 0xc8(0x04)
	int32_t PalletSpawned; // 0xcc(0x04)
	int32_t PalletProcedural; // 0xd0(0x04)
	int32_t PalletProceduralSetCount; // 0xd4(0x04)
	uint32_t PalletGenerationId; // 0xd8(0x04)
	int32_t PalletGeneric; // 0xdc(0x04)
	int32_t PalletDrop; // 0xe0(0x04)
	int32_t PalletStun; // 0xe4(0x04)
	int32_t UnhookCount; // 0xe8(0x04)
	int32_t HealCount; // 0xec(0x04)
	int32_t HealCountSuccess; // 0xf0(0x04)
	int32_t ClosetEnter; // 0xf4(0x04)
	int32_t Hatch; // 0xf8(0x04)
	int32_t SkillCheckCount; // 0xfc(0x04)
	int32_t SkillCheckCountGood; // 0x100(0x04)
	int32_t SkillCheckCountGreat; // 0x104(0x04)
	float ChaseDuration; // 0x108(0x04)
	int32_t NumChases; // 0x10c(0x04)
	int32_t HitBySlasherCount; // 0x110(0x04)
	uint32_t AmountTilesVisited; // 0x114(0x04)
	float StartX; // 0x118(0x04)
	float StartY; // 0x11c(0x04)
	float StartZ; // 0x120(0x04)
	int32_t EmotePoint; // 0x124(0x04)
	int32_t EmoteCome; // 0x128(0x04)
	float CrouchingDuration; // 0x12c(0x04)
	int32_t CrouchingCount; // 0x130(0x04)
	float CrawlingDuration; // 0x134(0x04)
};

// ScriptStruct DBDAnalytics.GPUAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FGPUAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString MapName; // 0xb8(0x10)
	struct FString Marker; // 0xc8(0x10)
	float AverageMS; // 0xd8(0x04)
	float StdDevMs; // 0xdc(0x04)
};

// ScriptStruct DBDAnalytics.HangAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FHangAnalytics : FUniquelyIdentifiedAnalytic {
	bool IsHang; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString HangSourcesInfo; // 0xb0(0x10)
	struct FString HangLogs; // 0xc0(0x10)
	float LastLoadingProgression; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString RecentFenceLogs; // 0xd8(0x10)
	struct FString MatchID; // 0xe8(0x10)
};

// ScriptStruct DBDAnalytics.HeartbeatAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FHeartbeatAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString BeatTime; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.IAPCanceledAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FIAPCanceledAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ItemId; // 0xa8(0x10)
	struct FString Provider; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.InteractionAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FInteractionAnalytics : FUniquelyIdentifiedAnalytic {
	enum class EPlayerRole Role; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t InterruptionSuccessCount; // 0xac(0x04)
	int32_t InterruptionFailureCount; // 0xb0(0x04)
	int32_t InteractionPredictedCount; // 0xb4(0x04)
	int32_t InteractionAuthorizedCount; // 0xb8(0x04)
	int32_t InteractionDeniedByRaceConditionCount; // 0xbc(0x04)
	int32_t InteractionDeniedByTimeoutCount; // 0xc0(0x04)
	int32_t InteractionDeniedByErrorCount; // 0xc4(0x04)
};

// ScriptStruct DBDAnalytics.DedicatedServerInvalidLoadoutAnalytics
// Size: 0x100 (Inherited: 0xa8)
struct FDedicatedServerInvalidLoadoutAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString PlayerMirrorsId; // 0xa8(0x10)
	struct FString ItemType; // 0xb8(0x10)
	struct FString Items; // 0xc8(0x10)
	struct FString Reason; // 0xd8(0x10)
	struct FString PlayerRole; // 0xe8(0x10)
	int32_t characterId; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct DBDAnalytics.InvalidLoadoutAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FInvalidLoadoutAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t SlasherPerkCount; // 0xa8(0x04)
	int32_t PowerAddonCount; // 0xac(0x04)
	int32_t CamperPerkCount; // 0xb0(0x04)
	int32_t ItemAddonCount; // 0xb4(0x04)
	struct FString CallingFunctionName; // 0xb8(0x10)
	int32_t characterId; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct DBDAnalytics.NewKillerTutorialAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FNewKillerTutorialAnalytics : FUniquelyIdentifiedAnalytic {
	bool IsKickGeneratorComplete; // 0xa8(0x01)
	bool IsFollowSurvivorComplete; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32_t TimeToCompleteAreaOne; // 0xac(0x04)
	bool IsDestroyPalletComplete; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t TimeToCompleteAreaTwo; // 0xb4(0x04)
	bool IsBeartrapComplete; // 0xb8(0x01)
	bool IsHitSurvivorComplete; // 0xb9(0x01)
	bool IsKoSurvivorComplete; // 0xba(0x01)
	bool IsPickupSurvivorComplete; // 0xbb(0x01)
	bool IsHookSurvivorComplete; // 0xbc(0x01)
	bool IsCloseHatchComplete; // 0xbd(0x01)
	bool IsKillSurvivorComplete; // 0xbe(0x01)
	char pad_BF[0x1]; // 0xbf(0x01)
	int32_t TimeToCompleteAreaThree; // 0xc0(0x04)
	int32_t TotalTimeInTutorial; // 0xc4(0x04)
	struct FString tutorialId; // 0xc8(0x10)
	struct FString OnboardingModeId; // 0xd8(0x10)
	int32_t OnboardingEnabled; // 0xe8(0x04)
	int32_t OnboardingABTestingEnabled; // 0xec(0x04)
	int32_t OnboardingNumberActiveModes; // 0xf0(0x04)
	int32_t OnboardingNewAssignedMode; // 0xf4(0x04)
};

// ScriptStruct DBDAnalytics.KrakenRequestAnalytics
// Size: 0x118 (Inherited: 0xa8)
struct FKrakenRequestAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString KrakenUrl; // 0xa8(0x10)
	struct FString Method; // 0xb8(0x10)
	struct FString Route; // 0xc8(0x10)
	struct FString Status; // 0xd8(0x10)
	int32_t ResponseCode; // 0xe8(0x04)
	int32_t ProviderError; // 0xec(0x04)
	uint32_t AttemptCount; // 0xf0(0x04)
	bool success; // 0xf4(0x01)
	bool CanRetry; // 0xf5(0x01)
	bool WillRetry; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct FString Country; // 0xf8(0x10)
	float AttemptElapsedTime; // 0x108(0x04)
	float TotalElapsedTime; // 0x10c(0x04)
	float TotalElapsedTimeCapped; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct DBDAnalytics.LevelLoadingTimeoutAnalytics
// Size: 0xe8 (Inherited: 0xa8)
struct FLevelLoadingTimeoutAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString MapName; // 0xb8(0x10)
	int32_t Seed; // 0xc8(0x04)
	float TimeElapsed; // 0xcc(0x04)
	float TimeElapsedInStep; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString LoadingStep; // 0xd8(0x10)
};

// ScriptStruct DBDAnalytics.LevelLoadingStepAnalytics
// Size: 0xf0 (Inherited: 0xa8)
struct FLevelLoadingStepAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString MapName; // 0xb8(0x10)
	int32_t Seed; // 0xc8(0x04)
	float TimeElapsed; // 0xcc(0x04)
	float TimeElapsedInStep; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString LoadingStep; // 0xd8(0x10)
	bool IsTimeout; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct DBDAnalytics.LoadingTimeoutAnalytics
// Size: 0x100 (Inherited: 0xa8)
struct FLoadingTimeoutAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString match_id; // 0xa8(0x10)
	struct FString lobby_id; // 0xb8(0x10)
	struct FString timeout_timestamp; // 0xc8(0x10)
	float total_load_time; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FString current_map_name; // 0xe0(0x10)
	struct FString transition_id; // 0xf0(0x10)
};

// ScriptStruct DBDAnalytics.LoadingStepAnalytics
// Size: 0x110 (Inherited: 0xa8)
struct FLoadingStepAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString match_id; // 0xa8(0x10)
	struct FString lobby_id; // 0xb8(0x10)
	struct FString step_change_timestamp; // 0xc8(0x10)
	struct FString loading_step; // 0xd8(0x10)
	float time_on_prev_step; // 0xe8(0x04)
	float total_load_time; // 0xec(0x04)
	struct FString current_map_name; // 0xf0(0x10)
	struct FString transition_id; // 0x100(0x10)
};

// ScriptStruct DBDAnalytics.LoadoutBaseAnalytics
// Size: 0x130 (Inherited: 0xa8)
struct FLoadoutBaseAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString LoadoutItem; // 0xa8(0x10)
	struct FString LoadoutItemAddOn1; // 0xb8(0x10)
	struct FString LoadoutItemAddOn2; // 0xc8(0x10)
	struct FString LoadoutPerk1; // 0xd8(0x10)
	struct FString LoadoutPerk2; // 0xe8(0x10)
	struct FString LoadoutPerk3; // 0xf8(0x10)
	struct FString LoadoutPerk4; // 0x108(0x10)
	struct FString LoadoutOffering; // 0x118(0x10)
	enum class EPlayerRole Role; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t Rank; // 0x12c(0x04)
};

// ScriptStruct DBDAnalytics.LoadOutLobbyAnalytics
// Size: 0x158 (Inherited: 0x130)
struct FLoadOutLobbyAnalytics : FLoadoutBaseAnalytics {
	int32_t Level; // 0x130(0x04)
	int32_t Prestige; // 0x134(0x04)
	struct FString characterName; // 0x138(0x10)
	struct FString LobbyId; // 0x148(0x10)
};

// ScriptStruct DBDAnalytics.LoadOutAnalytics
// Size: 0x140 (Inherited: 0x130)
struct FLoadOutAnalytics : FLoadoutBaseAnalytics {
	struct FString MatchID; // 0x130(0x10)
};

// ScriptStruct DBDAnalytics.LogMirrorsAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FLogMirrorsAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString LogMirrors; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.LogPresencePluginAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FLogPresencePluginAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Context; // 0xa8(0x10)
	struct FString Message; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.MapCoordAnalytics
// Size: 0xc8 (Inherited: 0xa8)
struct FMapCoordAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct TArray<struct FMapCoordData> MapItem; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.MapCoordData
// Size: 0x30 (Inherited: 0x00)
struct FMapCoordData {
	struct FString Type; // 0x00(0x10)
	struct FString Actor; // 0x10(0x10)
	int32_t X; // 0x20(0x04)
	int32_t Y; // 0x24(0x04)
	int32_t Z; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DBDAnalytics.MapSelectionAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FMapSelectionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString KrakenMatchId; // 0xa8(0x10)
	struct FString SelectedMapId; // 0xb8(0x10)
	int32_t MapSeed; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FMapSelectionWeight> MapWeights; // 0xd0(0x10)
};

// ScriptStruct DBDAnalytics.MapSelectionWeight
// Size: 0x28 (Inherited: 0x00)
struct FMapSelectionWeight {
	struct FString MapId; // 0x00(0x10)
	struct FString ThemeId; // 0x10(0x10)
	float Weight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DBDAnalytics.MatchIncentivesGrantedAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FMatchIncentivesGrantedAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString playerID; // 0xb8(0x10)
	enum class EPlayerRole PlayerRole; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t Incentive; // 0xcc(0x04)
};

// ScriptStruct DBDAnalytics.MatchIncentivesFetchedAnalytics
// Size: 0xb0 (Inherited: 0xa8)
struct FMatchIncentivesFetchedAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t KillerPercentageIncentive; // 0xa8(0x04)
	int32_t SurvivorPercentageIncentive; // 0xac(0x04)
};

// ScriptStruct DBDAnalytics.MatchInfoAnalytics
// Size: 0x1f0 (Inherited: 0xa8)
struct FMatchInfoAnalytics : FUniquelyIdentifiedAnalytic {
	enum class EGameType GameMode; // 0xa8(0x01)
	enum class EPlayerRole Role; // 0xa9(0x01)
	bool IsABot; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FString BotId; // 0xb0(0x10)
	enum class EAIDifficultyLevel BotDifficultyLevel; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t PartySize; // 0xc4(0x04)
	struct FString characterName; // 0xc8(0x10)
	int32_t Rank; // 0xd8(0x04)
	int32_t Level; // 0xdc(0x04)
	int32_t Prestige; // 0xe0(0x04)
	int32_t Pips; // 0xe4(0x04)
	int32_t PipsTotal; // 0xe8(0x04)
	int32_t MapSeed; // 0xec(0x04)
	struct FString MapName; // 0xf0(0x10)
	struct FString PartyHostMirrorsId; // 0x100(0x10)
	struct FString LobbyId; // 0x110(0x10)
	struct FString MatchID; // 0x120(0x10)
	struct FString KrakenMatchId; // 0x130(0x10)
	struct FString playerName; // 0x140(0x10)
	struct FString SelectedCountry; // 0x150(0x10)
	bool FirstTimePlaying; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32_t CumulativeMatches; // 0x164(0x04)
	int32_t CumulativeMatchesAsSurvivor; // 0x168(0x04)
	int32_t CumulativeMatchesAsKiller; // 0x16c(0x04)
	struct FString LastMatchTimestamp; // 0x170(0x10)
	float ExactPing; // 0x180(0x04)
	bool hasAnActiveArchiveQuest; // 0x184(0x01)
	bool IsUsingKeyboard; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)
	struct FString ControllerType; // 0x188(0x10)
	struct FString ColorBlindMode; // 0x198(0x10)
	int32_t ColorblindIntensity; // 0x1a8(0x04)
	bool TerrorRadiusVisualSupport; // 0x1ac(0x01)
	bool IsTutorialBotMatch; // 0x1ad(0x01)
	char pad_1AE[0x2]; // 0x1ae(0x02)
	struct FString OnboardingModeId; // 0x1b0(0x10)
	int32_t OnboardingEnabled; // 0x1c0(0x04)
	int32_t OnboardingABTestingEnabled; // 0x1c4(0x04)
	int32_t OnboardingNumberActiveModes; // 0x1c8(0x04)
	int32_t OnboardingNewAssignedMode; // 0x1cc(0x04)
	struct FString ServerSessionId; // 0x1d0(0x10)
	struct FString ServerRegion; // 0x1e0(0x10)
};

// ScriptStruct DBDAnalytics.MatchmakingInfoExpiredAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FMatchmakingInfoExpiredAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchmakingSessionGuid; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.MatchmakingAnalytics
// Size: 0xd8 (Inherited: 0xa8)
struct FMatchmakingAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchmakingSessionGuid; // 0xa8(0x10)
	enum class EPlayerRole PlayerRole; // 0xb8(0x01)
	enum class EGameType GameType; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t PartySize; // 0xbc(0x04)
	int32_t Rank; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString characterName; // 0xc8(0x10)
};

// ScriptStruct DBDAnalytics.MatchmakingLobbyAnalytics
// Size: 0x118 (Inherited: 0xd8)
struct FMatchmakingLobbyAnalytics : FMatchmakingAnalytics {
	struct FString LobbyStartTime; // 0xd8(0x10)
	struct FString LobbyEndTime; // 0xe8(0x10)
	struct FString LobbyResult; // 0xf8(0x10)
	struct FString KrakenMatchId; // 0x108(0x10)
};

// ScriptStruct DBDAnalytics.MatchmakingQueueAnalytics
// Size: 0x110 (Inherited: 0xd8)
struct FMatchmakingQueueAnalytics : FMatchmakingAnalytics {
	struct FString QueueStartTime; // 0xd8(0x10)
	struct FString QueueEndTime; // 0xe8(0x10)
	struct FString QueueResult; // 0xf8(0x10)
	bool CrossPlayEnabled; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct DBDAnalytics.MatchmakingSearchCompleteAnalytics
// Size: 0x188 (Inherited: 0xa8)
struct FMatchmakingSearchCompleteAnalytics : FUniquelyIdentifiedAnalytic {
	bool success; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t NumMatches; // 0xac(0x04)
	bool UsedFallback; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString ConnectingToUser; // 0xb8(0x10)
	struct FString SearchParams; // 0xc8(0x10)
	struct FString SearchResultSettings; // 0xd8(0x10)
	char pad_E8[0xa0]; // 0xe8(0xa0)
};

// ScriptStruct DBDAnalytics.MatchmakingHostCreatedAnalytics
// Size: 0x118 (Inherited: 0xa8)
struct FMatchmakingHostCreatedAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t NumPublicConnections; // 0xa8(0x04)
	int32_t NumPrivateConnections; // 0xac(0x04)
	bool ShouldAdvertise; // 0xb0(0x01)
	bool IsLANMatch; // 0xb1(0x01)
	bool AllowInvites; // 0xb2(0x01)
	bool UsesPresence; // 0xb3(0x01)
	bool AllowJoinViaPresenceFriendsOnly; // 0xb4(0x01)
	bool AllowJoinInProgress; // 0xb5(0x01)
	bool AllowJoinViaPresence; // 0xb6(0x01)
	bool success; // 0xb7(0x01)
	struct FString HostSettings; // 0xb8(0x10)
	char pad_C8[0x50]; // 0xc8(0x50)
};

// ScriptStruct DBDAnalytics.MatchmakingJoinCompleteAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FMatchmakingJoinCompleteAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString SessionName; // 0xa8(0x10)
	int32_t Result; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct DBDAnalytics.MatchmakingJoinSessionAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FMatchmakingJoinSessionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Log; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.MatchmakingApproveLoginAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FMatchmakingApproveLoginAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t CurrentPlayers; // 0xa8(0x04)
	bool success; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FString Error; // 0xb0(0x10)
	struct FString JoiningUserID; // 0xc0(0x10)
};

// ScriptStruct DBDAnalytics.WaitTimeAnalytics
// Size: 0x128 (Inherited: 0xa8)
struct FWaitTimeAnalytics : FUniquelyIdentifiedAnalytic {
	float EnterLobbyWaitTime; // 0xa8(0x04)
	float EnterMatchWaitTime; // 0xac(0x04)
	struct FString MatchWaitStartUtc; // 0xb0(0x10)
	struct FString MatchWaitStopUtc; // 0xc0(0x10)
	struct FString LobbyWaitStartUtc; // 0xd0(0x10)
	struct FString LobbyWaitStopUtc; // 0xe0(0x10)
	struct FString LobbyWaitStopReason; // 0xf0(0x10)
	struct FString MatchID; // 0x100(0x10)
	enum class EGameType GameMode; // 0x110(0x01)
	enum class EPlayerRole Role; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	int32_t PartySize; // 0x114(0x04)
	int32_t Rank; // 0x118(0x04)
	int32_t RankDifference; // 0x11c(0x04)
	int32_t DaysSinceReset; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct DBDAnalytics.QueueAnalytics
// Size: 0x160 (Inherited: 0xa8)
struct FQueueAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t TimesQueuedSurvivor; // 0xa8(0x04)
	int32_t TimesQueuedKiller; // 0xac(0x04)
	int32_t MatchesAsSurvivor; // 0xb0(0x04)
	int32_t MatchesAsKiller; // 0xb4(0x04)
	struct FString SelectedCountry; // 0xb8(0x10)
	struct FString playerName; // 0xc8(0x10)
	bool FirstTimePlaying; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t CumulativeMatches; // 0xdc(0x04)
	int32_t CumulativeMatchesAsSurvivor; // 0xe0(0x04)
	int32_t CumulativeMatchesAsKiller; // 0xe4(0x04)
	struct FString LastMatchTimestamp; // 0xe8(0x10)
	struct FString SessionStartTimestamp; // 0xf8(0x10)
	struct FString SessionEndTimestamp; // 0x108(0x10)
	struct FString LastSessionTimestamp; // 0x118(0x10)
	int32_t CumulativeSessions; // 0x128(0x04)
	float CumulativePlaytime; // 0x12c(0x04)
	float TimeInCharacterMenu; // 0x130(0x04)
	float TimeInBloodwebMenu; // 0x134(0x04)
	float TimeInLoadoutMenu; // 0x138(0x04)
	float TimeInCustomizationMenu; // 0x13c(0x04)
	float TimeInFearMarket; // 0x140(0x04)
	float TimeInTallyScreen; // 0x144(0x04)
	float TimeInGameMatch; // 0x148(0x04)
	float TimeInHelpMenu; // 0x14c(0x04)
	float TimeInOfflineLobby; // 0x150(0x04)
	float TimeInOfflineLobbySurvivorGroup; // 0x154(0x04)
	float TimeInOnlineLobby; // 0x158(0x04)
	float TimeInOnlineLobbySurvivorGroup; // 0x15c(0x04)
};

// ScriptStruct DBDAnalytics.MatchRatingAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FMatchRatingAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t Rating; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString MatchID; // 0xb0(0x10)
};

// ScriptStruct DBDAnalytics.MemoryUsageAnalytics
// Size: 0xe8 (Inherited: 0xa8)
struct FMemoryUsageAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString GameFlowStep; // 0xa8(0x10)
	int64_t TotalPhysical; // 0xb8(0x08)
	int64_t TotalVirtual; // 0xc0(0x08)
	int64_t PeakUsedPhysical; // 0xc8(0x08)
	int64_t PeakUsedVirtual; // 0xd0(0x08)
	int64_t AvailablePhysical; // 0xd8(0x08)
	int64_t AvailableVirtual; // 0xe0(0x08)
};

// ScriptStruct DBDAnalytics.MenuFlowAnalytics
// Size: 0x120 (Inherited: 0xa8)
struct FMenuFlowAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString CurrentContext; // 0xa8(0x10)
	struct FString PreviousContext; // 0xb8(0x10)
	float TimeOnPreviousContext; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString ContextChangeTimetamp; // 0xd0(0x10)
	struct FString MatchID; // 0xe0(0x10)
	struct FString LobbyId; // 0xf0(0x10)
	struct TArray<struct FMenuFlowTabData> Tabs; // 0x100(0x10)
	struct TArray<struct FMenuFlowButtonPressData> Buttons; // 0x110(0x10)
};

// ScriptStruct DBDAnalytics.MenuFlowButtonPressData
// Size: 0x20 (Inherited: 0x00)
struct FMenuFlowButtonPressData {
	struct FString Button; // 0x00(0x10)
	struct FString ButtonPressTimestamp; // 0x10(0x10)
};

// ScriptStruct DBDAnalytics.MenuFlowTabData
// Size: 0x38 (Inherited: 0x00)
struct FMenuFlowTabData {
	struct FString CurrentTab; // 0x00(0x10)
	struct FString PreviousTab; // 0x10(0x10)
	float TimeOnPreviousTab; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString TabChangeTimestamp; // 0x28(0x10)
};

// ScriptStruct DBDAnalytics.StoreMenuFlowAnalytics
// Size: 0xd8 (Inherited: 0xa8)
struct FStoreMenuFlowAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString EventTimestamp; // 0xa8(0x10)
	struct FString EventName; // 0xb8(0x10)
	struct FString Data; // 0xc8(0x10)
};

// ScriptStruct DBDAnalytics.OnboardingAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FOnboardingAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t tabIndex; // 0xa8(0x04)
	int32_t GameManualIndex; // 0xac(0x04)
	struct FString EventTimestamp; // 0xb0(0x10)
};

// ScriptStruct DBDAnalytics.OnlineSessionErrorAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FOnlineSessionErrorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Reason; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.PakValidationAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FPakValidationAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ErrorType; // 0xa8(0x10)
	struct FString Filename; // 0xb8(0x10)
	int32_t ChunkIndex; // 0xc8(0x04)
	uint32_t ReceivedHash; // 0xcc(0x04)
};

// ScriptStruct DBDAnalytics.PartyAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FPartyAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString PartyId; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.PartyErrorAnalytics
// Size: 0xc8 (Inherited: 0xb8)
struct FPartyErrorAnalytics : FPartyAnalytics {
	struct FString Error; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.PartyDisbandedAnalytics
// Size: 0xc8 (Inherited: 0xb8)
struct FPartyDisbandedAnalytics : FPartyAnalytics {
	struct FString Error; // 0xb8(0x10)
};

// ScriptStruct DBDAnalytics.PartyJoinedAnalytics
// Size: 0xc0 (Inherited: 0xb8)
struct FPartyJoinedAnalytics : FPartyAnalytics {
	bool success; // 0xb8(0x01)
	bool FromJoinRequest; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// ScriptStruct DBDAnalytics.PartyGuestJoinedAnalytics
// Size: 0xd8 (Inherited: 0xb8)
struct FPartyGuestJoinedAnalytics : FPartyAnalytics {
	struct FString InviteeId; // 0xb8(0x10)
	struct FString InviteeName; // 0xc8(0x10)
};

// ScriptStruct DBDAnalytics.PartyInvitedAnalytics
// Size: 0xd0 (Inherited: 0xb8)
struct FPartyInvitedAnalytics : FPartyAnalytics {
	struct FString InviteeId; // 0xb8(0x10)
	bool success; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct DBDAnalytics.PartyCreatedAnalytics
// Size: 0xc0 (Inherited: 0xb8)
struct FPartyCreatedAnalytics : FPartyAnalytics {
	bool success; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct DBDAnalytics.PartyJoinFailureAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FPartyJoinFailureAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString PartyMembersFriendshipStatus; // 0xa8(0x10)
	uint32_t NumKrakenConfirmedFriendsInParty; // 0xb8(0x04)
	uint32_t NumPlatformAcceptedFriendsInParty; // 0xbc(0x04)
};

// ScriptStruct DBDAnalytics.PerformanceAnalytics
// Size: 0x2b0 (Inherited: 0xa8)
struct FPerformanceAnalytics : FUniquelyIdentifiedAnalytic {
	float AverageFPS; // 0xa8(0x04)
	float MinFPS; // 0xac(0x04)
	float MaxFPS; // 0xb0(0x04)
	float AverageFrameTime; // 0xb4(0x04)
	float MinFrameTime; // 0xb8(0x04)
	float MaxFrameTime; // 0xbc(0x04)
	float StandardDeviationFrameTime; // 0xc0(0x04)
	float PercentBelow60msFrameTime; // 0xc4(0x04)
	float PercentBelow47msFrameTime; // 0xc8(0x04)
	float PercentBelow34msFrameTime; // 0xcc(0x04)
	float PercentBelow17msFrameTime; // 0xd0(0x04)
	float PercentHitchesFrameTime; // 0xd4(0x04)
	float AverageRenderThreadTime; // 0xd8(0x04)
	float MinRenderThreadTime; // 0xdc(0x04)
	float MaxRenderThreadTime; // 0xe0(0x04)
	float StandardDeviationRenderThreadTime; // 0xe4(0x04)
	float PercentBelow60msRenderThreadTime; // 0xe8(0x04)
	float PercentBelow47msRenderThreadTime; // 0xec(0x04)
	float PercentBelow34msRenderThreadTime; // 0xf0(0x04)
	float PercentBelow17msRenderThreadTime; // 0xf4(0x04)
	float PercentHitchesRenderThreadTime; // 0xf8(0x04)
	float AverageGameThreadTime; // 0xfc(0x04)
	float MinGameThreadTime; // 0x100(0x04)
	float MaxGameThreadTime; // 0x104(0x04)
	float StandardDeviationGameThreadTime; // 0x108(0x04)
	float PercentBelow60msGameThreadTime; // 0x10c(0x04)
	float PercentBelow47msGameThreadTime; // 0x110(0x04)
	float PercentBelow34msGameThreadTime; // 0x114(0x04)
	float PercentBelow17msGameThreadTime; // 0x118(0x04)
	float PercentHitchesGameThreadTime; // 0x11c(0x04)
	float AverageRhiThreadTime; // 0x120(0x04)
	float MinRhiThreadTime; // 0x124(0x04)
	float MaxRhiThreadTime; // 0x128(0x04)
	float StandardDeviationRhiThreadTime; // 0x12c(0x04)
	float PercentBelow60msRhiThreadTime; // 0x130(0x04)
	float PercentBelow47msRhiThreadTime; // 0x134(0x04)
	float PercentBelow34msRhiThreadTime; // 0x138(0x04)
	float PercentBelow17msRhiThreadTime; // 0x13c(0x04)
	float PercentHitchesRhiThreadTime; // 0x140(0x04)
	float AverageGpuTime; // 0x144(0x04)
	float MinGpuTime; // 0x148(0x04)
	float MaxGpuTime; // 0x14c(0x04)
	float StandardDeviationGpuTime; // 0x150(0x04)
	float PercentBelow60msGpuTime; // 0x154(0x04)
	float PercentBelow47msGpuTime; // 0x158(0x04)
	float PercentBelow34msGpuTime; // 0x15c(0x04)
	float PercentBelow17msGpuTime; // 0x160(0x04)
	float PercentHitchesGpuTime; // 0x164(0x04)
	float AverageSlateTickTime; // 0x168(0x04)
	float AverageSlateRenderThreadTime; // 0x16c(0x04)
	float AverageSlateDrawWindowTime; // 0x170(0x04)
	float AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture; // 0x174(0x04)
	float AdaptiveShadowMapAverageActiveLightsPerFrame; // 0x178(0x04)
	float AdaptiveShadowMapPercentageOfFrameCapturingTiles; // 0x17c(0x04)
	float HitchesPerMinute50ms; // 0x180(0x04)
	float HitchesPerMinute100ms; // 0x184(0x04)
	float HitchesPerMinute200ms; // 0x188(0x04)
	float HitchesPerMinute400ms; // 0x18c(0x04)
	float HitchesPerMinute800ms; // 0x190(0x04)
	float HitchesPerMinute1600ms; // 0x194(0x04)
	float HitchesPerMinute3200ms; // 0x198(0x04)
	float HitchesPerMinute6400ms; // 0x19c(0x04)
	float HitchesPerMinute12800ms; // 0x1a0(0x04)
	float AverageInputLatency; // 0x1a4(0x04)
	float MinInputLatency; // 0x1a8(0x04)
	float MaxInputLatency; // 0x1ac(0x04)
	float AverageOutputLatency; // 0x1b0(0x04)
	float MinOutputLatency; // 0x1b4(0x04)
	float MaxOutputLatency; // 0x1b8(0x04)
	float AverageStandardDeviation; // 0x1bc(0x04)
	float MinStandardDeviation; // 0x1c0(0x04)
	float MaxStandardDeviation; // 0x1c4(0x04)
	struct FString DeviceProfile; // 0x1c8(0x10)
	int32_t MaxMemoryUsedKilobytes; // 0x1d8(0x04)
	float AveragePing; // 0x1dc(0x04)
	float MinPing; // 0x1e0(0x04)
	float MaxPing; // 0x1e4(0x04)
	int32_t DynamicResolutionScreenPercentageAvg; // 0x1e8(0x04)
	int32_t DynamicResolutionScreenPercentageMax; // 0x1ec(0x04)
	int32_t DynamicResolutionScreenPercentageMin; // 0x1f0(0x04)
	int32_t MatchCount; // 0x1f4(0x04)
	int32_t TotalFrames; // 0x1f8(0x04)
	float ResolutionQuality; // 0x1fc(0x04)
	int32_t ViewDistanceQuality; // 0x200(0x04)
	int32_t AntiAliasingQuality; // 0x204(0x04)
	int32_t AntiAliasingMode; // 0x208(0x04)
	float FrameCap; // 0x20c(0x04)
	bool isVsyncEnable; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32_t ShadowQuality; // 0x214(0x04)
	int32_t TextureQuality; // 0x218(0x04)
	int32_t EffectsQuality; // 0x21c(0x04)
	int32_t FoliageQuality; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct FString Scenario; // 0x228(0x10)
	struct FString Theme; // 0x238(0x10)
	struct FString MapName; // 0x248(0x10)
	int32_t TileListCount; // 0x258(0x04)
	int32_t Seed; // 0x25c(0x04)
	struct FString characterName; // 0x260(0x10)
	struct FString Cpu; // 0x270(0x10)
	struct FString GpuAdapter; // 0x280(0x10)
	struct FString MatchID; // 0x290(0x10)
	struct FString RHIName; // 0x2a0(0x10)
};

// ScriptStruct DBDAnalytics.PerformanceChartingAnalytics
// Size: 0x1e8 (Inherited: 0xa8)
struct FPerformanceChartingAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Scenario; // 0xa8(0x10)
	struct FString Theme; // 0xb8(0x10)
	struct FString map_name; // 0xc8(0x10)
	int32_t tile_spawn_count; // 0xd8(0x04)
	int32_t Seed; // 0xdc(0x04)
	struct FString match_id; // 0xe0(0x10)
	struct FString character_name; // 0xf0(0x10)
	struct FString cpu_name; // 0x100(0x10)
	struct FString gpu_name; // 0x110(0x10)
	struct FString Resolution; // 0x120(0x10)
	int32_t graphics_quality_level; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FString hitch_times; // 0x138(0x10)
	float target_30_fps; // 0x148(0x04)
	float target_60_fps; // 0x14c(0x04)
	float target_120_fps; // 0x150(0x04)
	float measured_perf_time; // 0x154(0x04)
	float mvp; // 0x158(0x04)
	float avg_fps; // 0x15c(0x04)
	float hitches_per_minute; // 0x160(0x04)
	float avg_hitch; // 0x164(0x04)
	float frame_time_avg; // 0x168(0x04)
	float frame_time_max; // 0x16c(0x04)
	float frame_time_min; // 0x170(0x04)
	float game_thread_avg; // 0x174(0x04)
	float game_thread_hitches_per_min; // 0x178(0x04)
	float game_thread_bound_frames; // 0x17c(0x04)
	float render_thread_avg; // 0x180(0x04)
	float render_thread_hitches_per_min; // 0x184(0x04)
	float render_thread_bound_frames; // 0x188(0x04)
	float rhi_thread_avg; // 0x18c(0x04)
	float rhi_thread_hitches_per_min; // 0x190(0x04)
	float rhi_thread_bound_frames; // 0x194(0x04)
	float gpu_avg; // 0x198(0x04)
	float gpu_hitches_per_min; // 0x19c(0x04)
	float gpu_bound_frames; // 0x1a0(0x04)
	float draw_calls_avg; // 0x1a4(0x04)
	float draw_calls_max; // 0x1a8(0x04)
	float draw_calls_min; // 0x1ac(0x04)
	float drawn_prims_avg; // 0x1b0(0x04)
	float drawn_prims_max; // 0x1b4(0x04)
	float drawn_prims_min; // 0x1b8(0x04)
	float cpu_memory_peak; // 0x1bc(0x04)
	float cpu_memory_used; // 0x1c0(0x04)
	float streaming_memory_peak; // 0x1c4(0x04)
	float streaming_memory_used; // 0x1c8(0x04)
	float physical_memory_peak; // 0x1cc(0x04)
	float physical_memory_used; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FString texturegroups_guid; // 0x1d8(0x10)
};

// ScriptStruct DBDAnalytics.PerkAcquisitionAnalytics
// Size: 0xf0 (Inherited: 0xa8)
struct FPerkAcquisitionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString characterName; // 0xa8(0x10)
	struct FString perkId; // 0xb8(0x10)
	struct FString PerkSource; // 0xc8(0x10)
	struct FString Duplicate; // 0xd8(0x10)
	int32_t PerkLevel; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct DBDAnalytics.BasePerkAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FBasePerkAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	float ElapsedMatchTime; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct DBDAnalytics.FranklinsHitNearDroppedItemAnalytics
// Size: 0xe0 (Inherited: 0xc0)
struct FFranklinsHitNearDroppedItemAnalytics : FBasePerkAnalytics {
	struct FString HitSurvivorMirrorsId; // 0xc0(0x10)
	struct FString AttackingSlasherMirrorsId; // 0xd0(0x10)
};

// ScriptStruct DBDAnalytics.FranklinsDemiseConsumedItemAnalytics
// Size: 0xd0 (Inherited: 0xc0)
struct FFranklinsDemiseConsumedItemAnalytics : FBasePerkAnalytics {
	struct FString PreviousOwnerSurvivorMirrorsId; // 0xc0(0x10)
};

// ScriptStruct DBDAnalytics.KnockoutSurvivorFoundAnalytics
// Size: 0xe0 (Inherited: 0xc0)
struct FKnockoutSurvivorFoundAnalytics : FBasePerkAnalytics {
	struct FString RescuingSurvivorMirrorsId; // 0xc0(0x10)
	struct FString FoundSurvivorMirrorsId; // 0xd0(0x10)
};

// ScriptStruct DBDAnalytics.TinkererUndetectableInterruptAnalytics
// Size: 0xe0 (Inherited: 0xc0)
struct FTinkererUndetectableInterruptAnalytics : FBasePerkAnalytics {
	struct FString InterruptedSurvivorMirrorsId; // 0xc0(0x10)
	struct FString InterruptingSlasherMirrorsId; // 0xd0(0x10)
};

// ScriptStruct DBDAnalytics.TinkererUndetectableHitNearGeneratorAnalytics
// Size: 0xe0 (Inherited: 0xc0)
struct FTinkererUndetectableHitNearGeneratorAnalytics : FBasePerkAnalytics {
	struct FString HitSurvivorMirrorsId; // 0xc0(0x10)
	struct FString AttackingSlasherMirrorsId; // 0xd0(0x10)
};

// ScriptStruct DBDAnalytics.LightbornAuraRevealedAnalytics
// Size: 0xe0 (Inherited: 0xc0)
struct FLightbornAuraRevealedAnalytics : FBasePerkAnalytics {
	struct FString RevealedSurvivorMirrorsId; // 0xc0(0x10)
	struct FString FlashlightedSlasherMirrorsId; // 0xd0(0x10)
};

// ScriptStruct DBDAnalytics.HookAnalytics
// Size: 0x150 (Inherited: 0xa8)
struct FHookAnalytics : FUniquelyIdentifiedAnalytic {
	float HookStartTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString MirrorsIdSurvivor; // 0xb0(0x10)
	char SurvivorIsABot; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FString MirrorsIdKiller; // 0xc8(0x10)
	char KillerIsABot; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FString MirrorsIdRescuer; // 0xe0(0x10)
	char RescuerIsABot; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t TimesOnHook; // 0xf4(0x04)
	struct FString Outcome; // 0xf8(0x10)
	float HookDuration; // 0x108(0x04)
	int32_t EscapeAttemptStart; // 0x10c(0x04)
	int32_t EscapeAttemptFull; // 0x110(0x04)
	int32_t SurvivorsRemaining; // 0x114(0x04)
	int32_t NumberOfActiveSurvivorsStart; // 0x118(0x04)
	int32_t NumberOfActiveSurvivorsEnd; // 0x11c(0x04)
	int32_t NumberOfActiveSurvivorsTotal; // 0x120(0x04)
	float DurationCampFace; // 0x124(0x04)
	float DurationCampHard; // 0x128(0x04)
	float DurationCampSoft; // 0x12c(0x04)
	int32_t NumberOfRescuers; // 0x130(0x04)
	float TimeForFirstRescuer; // 0x134(0x04)
	struct FString MatchID; // 0x138(0x10)
	bool ReverseBearTrapOn; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct DBDAnalytics.PlayerStatusEffectUpdateAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FPlayerStatusEffectUpdateAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	int32_t ElapsedMatchTime; // 0xb8(0x04)
	int32_t NbOfConcurrentStatusEffects; // 0xbc(0x04)
	struct TArray<struct FString> StatusEffects; // 0xc0(0x10)
};

// ScriptStruct DBDAnalytics.PostGameAnalyticsBase
// Size: 0x138 (Inherited: 0xa8)
struct FPostGameAnalyticsBase : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FString KrakenMatchId; // 0xb8(0x10)
	struct FString GameMode; // 0xc8(0x10)
	int32_t BloodwebPoints; // 0xd8(0x04)
	float GameDuration; // 0xdc(0x04)
	struct FString characterName; // 0xe0(0x10)
	int32_t Rank; // 0xf0(0x04)
	int32_t PipsGainedOrLost; // 0xf4(0x04)
	struct FString MatchEndReason; // 0xf8(0x10)
	bool IsTutorialBotMatch; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FString OnboardingModeId; // 0x110(0x10)
	int32_t OnboardingEnabled; // 0x120(0x04)
	int32_t OnboardingABTestingEnabled; // 0x124(0x04)
	int32_t OnboardingNumberActiveModes; // 0x128(0x04)
	int32_t OnboardingNewAssignedMode; // 0x12c(0x04)
	float ExactPing; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct DBDAnalytics.PostGame_KillerAnalytics
// Size: 0x1b0 (Inherited: 0x138)
struct FPostGame_KillerAnalytics : FPostGameAnalyticsBase {
	int32_t Brutality; // 0x138(0x04)
	int32_t Deviousness; // 0x13c(0x04)
	int32_t Hunter; // 0x140(0x04)
	int32_t Sacrifice; // 0x144(0x04)
	int32_t BrutalityBonus; // 0x148(0x04)
	int32_t DeviousnessBonus; // 0x14c(0x04)
	int32_t HunterBonus; // 0x150(0x04)
	int32_t SacrificeBonus; // 0x154(0x04)
	int32_t BonusEvent; // 0x158(0x04)
	int32_t MatchIncentive; // 0x15c(0x04)
	int32_t EscapeesCount; // 0x160(0x04)
	int32_t SacrificedCount; // 0x164(0x04)
	int32_t KilledCount; // 0x168(0x04)
	int32_t DisconnectCount; // 0x16c(0x04)
	int32_t BotCount; // 0x170(0x04)
	int32_t TimeOpenGate; // 0x174(0x04)
	struct FString SurvivorSpawningPosition; // 0x178(0x10)
	int32_t GeneratorsDone; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FString EGS_starter; // 0x190(0x10)
	float EGS_time; // 0x1a0(0x04)
	float EGS_duration; // 0x1a4(0x04)
	int32_t EGS_sacrifice; // 0x1a8(0x04)
	bool EGS_reachEnd; // 0x1ac(0x01)
	bool UsedController; // 0x1ad(0x01)
	bool UsedKeyboard; // 0x1ae(0x01)
	bool UsedHapticsVibration; // 0x1af(0x01)
};

// ScriptStruct DBDAnalytics.PostGame_SurvivorAnalytics
// Size: 0x180 (Inherited: 0x138)
struct FPostGame_SurvivorAnalytics : FPostGameAnalyticsBase {
	int32_t Objectives; // 0x138(0x04)
	int32_t Survival; // 0x13c(0x04)
	int32_t Altruism; // 0x140(0x04)
	int32_t Boldness; // 0x144(0x04)
	int32_t ObjectivesBonus; // 0x148(0x04)
	int32_t SurvivalBonus; // 0x14c(0x04)
	int32_t AltruismBonus; // 0x150(0x04)
	int32_t BoldnessBonus; // 0x154(0x04)
	int32_t BonusEvent; // 0x158(0x04)
	int32_t MatchIncentive; // 0x15c(0x04)
	struct FString Outcome; // 0x160(0x10)
	enum class ECamperDamageState damageState; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t HookedCount; // 0x174(0x04)
	bool UsedController; // 0x178(0x01)
	bool UsedKeyboard; // 0x179(0x01)
	bool UsedHapticsVibration; // 0x17a(0x01)
	char pad_17B[0x5]; // 0x17b(0x05)
};

// ScriptStruct DBDAnalytics.PrestigeLevelUpAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FPrestigeLevelUpAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString characterName; // 0xa8(0x10)
	int32_t NewPrestigeLevel; // 0xb8(0x04)
	int32_t BloodpointsSpent; // 0xbc(0x04)
	struct TArray<struct FPrestigeRewardItemAnalytic> ItemRewards; // 0xc0(0x10)
};

// ScriptStruct DBDAnalytics.PrestigeRewardItemAnalytic
// Size: 0x20 (Inherited: 0x00)
struct FPrestigeRewardItemAnalytic {
	struct FString Type; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
};

// ScriptStruct DBDAnalytics.ProceduralGenerationAnalytics
// Size: 0x1c0 (Inherited: 0xa8)
struct FProceduralGenerationAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t GenerationSeed; // 0xa8(0x04)
	int32_t MapSeed; // 0xac(0x04)
	struct FString MapName; // 0xb0(0x10)
	struct FString Procedural_MeatLocker_Small; // 0xc0(0x10)
	struct FString Procedural_MeatLocker_Big; // 0xd0(0x10)
	struct FString Procedural_Searchable; // 0xe0(0x10)
	struct FString Procedural_EdgeObjects; // 0xf0(0x10)
	struct FString Procedural_LivingWorldObjects; // 0x100(0x10)
	struct FString Procedural_Hatch; // 0x110(0x10)
	struct FString Procedural_BookShelves; // 0x120(0x10)
	struct FString Procedural_BreakableWalls; // 0x130(0x10)
	struct FString Procedural_Totems; // 0x140(0x10)
	struct FString Procedural_QuadrantSpawn; // 0x150(0x10)
	int32_t PalletSpawned; // 0x160(0x04)
	int32_t PalletProceduralMin; // 0x164(0x04)
	int32_t PalletProceduralMax; // 0x168(0x04)
	int32_t PalletProcedural; // 0x16c(0x04)
	int32_t PalletProceduralSetCount; // 0x170(0x04)
	uint32_t PalletGenerationId; // 0x174(0x04)
	int32_t PalletGeneric; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString KillerSpawn; // 0x180(0x10)
	struct FString SurvivorSpawn; // 0x190(0x10)
	struct FString MatchID; // 0x1a0(0x10)
	int32_t HookSpawned; // 0x1b0(0x04)
	bool UseFixedMaps; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	float NavmeshGenerationTime; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct DBDAnalytics.ReportAnalytics
// Size: 0x140 (Inherited: 0xa8)
struct FReportAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ClientIdTransmitter; // 0xa8(0x10)
	struct FString ClientIdReceiver; // 0xb8(0x10)
	struct FString MirrorsIdTransmitter; // 0xc8(0x10)
	struct FString MirrorsIdReceiver; // 0xd8(0x10)
	enum class EPlayerRole RoleTransmitter; // 0xe8(0x01)
	enum class EPlayerRole RoleReceiver; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct FString MatchID; // 0xf0(0x10)
	struct FString GameMode; // 0x100(0x10)
	struct FString ReportType; // 0x110(0x10)
	struct FString ReportCategory; // 0x120(0x10)
	struct FString Comments; // 0x130(0x10)
};

// ScriptStruct DBDAnalytics.BaseRPCAnalytics
// Size: 0x110 (Inherited: 0xa8)
struct FBaseRPCAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString Sender; // 0xa8(0x10)
	struct FString SenderPlatform; // 0xb8(0x10)
	struct FString MatchID; // 0xc8(0x10)
	struct FString MatchType; // 0xd8(0x10)
	struct FString Role; // 0xe8(0x10)
	int32_t characterId; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString characterName; // 0x100(0x10)
};

// ScriptStruct DBDAnalytics.RPCCountAnalytics
// Size: 0x288 (Inherited: 0x110)
struct FRPCCountAnalytics : FBaseRPCAnalytics {
	float MatchDuration; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString GameState; // 0x118(0x10)
	struct TArray<struct FNamedRPCCount> AllNamedCounts; // 0x128(0x10)
	int64_t TotalCount; // 0x138(0x08)
	struct TArray<struct FString> UnlistedNames; // 0x140(0x10)
	int64_t UnlistedCount; // 0x150(0x08)
	int32_t CallConsoleCmdOnServer_Server_Count; // 0x158(0x04)
	int32_t ServerAcknowledgePossession_Count; // 0x15c(0x04)
	int32_t ServerCheckClientPossession_Count; // 0x160(0x04)
	int32_t ServerCheckClientPossessionReliable_Count; // 0x164(0x04)
	int32_t ServerMovePacked_Count; // 0x168(0x04)
	int32_t ServerMoveOut_Count; // 0x16c(0x04)
	int32_t ServerNotifyLoadedWorld_Count; // 0x170(0x04)
	int32_t ServerSetSpectatorLocation_Count; // 0x174(0x04)
	int32_t ServerShortTimeout_Count; // 0x178(0x04)
	int32_t ServerUpdateCamera_Count; // 0x17c(0x04)
	int32_t ServerUpdateLevelVisibility_Count; // 0x180(0x04)
	int32_t ServerUpdateMultipleLevelsVisibility_Count; // 0x184(0x04)
	int32_t ServerVerifyViewTarget_Count; // 0x188(0x04)
	int32_t Server_ActivatePerk_Count; // 0x18c(0x04)
	int32_t Server_ActivateSkillCheck_Count; // 0x190(0x04)
	int32_t Server_AddMaxSpeedMovementCurve_Count; // 0x194(0x04)
	int32_t Server_Broadcast_ConfirmChargedCompleted_Count; // 0x198(0x04)
	int32_t Server_Broadcast_StoreInteraction_Count; // 0x19c(0x04)
	int32_t Server_ClearTargets_Count; // 0x1a0(0x04)
	int32_t Server_ClientPassedFence_Count; // 0x1a4(0x04)
	int32_t Server_DeactivateSkillCheck_Count; // 0x1a8(0x04)
	int32_t Server_EACMessageFromClient_Count; // 0x1ac(0x04)
	int32_t Server_HitTarget_Count; // 0x1b0(0x04)
	int32_t Server_SetImmobilized_Count; // 0x1b4(0x04)
	int32_t Server_Launch_Count; // 0x1b8(0x04)
	int32_t Server_LoadoutSpawned_Count; // 0x1bc(0x04)
	int32_t Server_NotifyStunHasBeenProcessed_Count; // 0x1c0(0x04)
	int32_t Server_OnIntroCompleted_Count; // 0x1c4(0x04)
	int32_t Server_OnSkillCheckFailure_Count; // 0x1c8(0x04)
	int32_t Server_OnSkillCheckSuccess_Count; // 0x1cc(0x04)
	int32_t Server_SetOverlappingEscape_Count; // 0x1d0(0x04)
	int32_t Server_PlayMontage_Count; // 0x1d4(0x04)
	int32_t Server_PlayerReady_Count; // 0x1d8(0x04)
	int32_t Server_ReceivePlayerProfile_Count; // 0x1dc(0x04)
	int32_t Server_RemoveMaxSpeedMovementCurve_Count; // 0x1e0(0x04)
	int32_t Server_RenderingFeaturesCompleted_Count; // 0x1e4(0x04)
	int32_t Server_ReplicateControlRotation_Count; // 0x1e8(0x04)
	int32_t Server_RequestEndGame_Count; // 0x1ec(0x04)
	int32_t Server_RequestServerTime_Count; // 0x1f0(0x04)
	int32_t Server_RequestStateChange_Count; // 0x1f4(0x04)
	int32_t Server_SendAttackInput_Count; // 0x1f8(0x04)
	int32_t Server_SendInteractionInput_Count; // 0x1fc(0x04)
	int32_t Server_SendFastInteractionInput_Count; // 0x200(0x04)
	int32_t Server_SendSecondaryActionPressed_Count; // 0x204(0x04)
	int32_t Server_SetCharacterData_Count; // 0x208(0x04)
	int32_t Server_SetConsecutiveMatchStreak_Count; // 0x20c(0x04)
	int32_t Server_SetCustomizationMeshes_Count; // 0x210(0x04)
	int32_t Server_SetEquipedPerks_Count; // 0x214(0x04)
	int32_t Server_SetEquipment_Count; // 0x218(0x04)
	int32_t Server_SetGroundFriction_Count; // 0x21c(0x04)
	int32_t Server_SetInteractionToSwapTo_Count; // 0x220(0x04)
	int32_t Server_SetIntroCompleted_Count; // 0x224(0x04)
	int32_t Server_SetIsReadyToPlay_Count; // 0x228(0x04)
	int32_t Server_SetMaxAcceleration_Count; // 0x22c(0x04)
	int32_t Server_SetPlayerGameState_Count; // 0x230(0x04)
	int32_t Server_SetPlayerLoadout_Count; // 0x234(0x04)
	int32_t Server_SetPlayerReady_Count; // 0x238(0x04)
	int32_t Server_SetPlayerWiggleSkillCheckEnabled_Count; // 0x23c(0x04)
	int32_t Server_SetPreloadCompleted_Count; // 0x240(0x04)
	int32_t Server_SetReadyToTravel_Count; // 0x244(0x04)
	int32_t Server_SetSpectatorMode_Count; // 0x248(0x04)
	int32_t Server_SendItemUseInput_Count; // 0x24c(0x04)
	int32_t Server_SendLeftRightMashedInput_Count; // 0x250(0x04)
	int32_t Server_SetMaxSpeedMultiplierScalar_Count; // 0x254(0x04)
	int32_t Server_SendMessage_Count; // 0x258(0x04)
	int32_t Server_SetSettings_Count; // 0x25c(0x04)
	int32_t Server_SetRunInput_Count; // 0x260(0x04)
	int32_t Server_SetStateStack_Count; // 0x264(0x04)
	int32_t Server_SetStopSnapping_Count; // 0x268(0x04)
	int32_t Server_StartSnapping_Count; // 0x26c(0x04)
	int32_t Server_StopMontage_Count; // 0x270(0x04)
	int32_t Server_StoreAttack_Count; // 0x274(0x04)
	int32_t Server_TryDetectPlayer_Count; // 0x278(0x04)
	int32_t Server_UpdateDiscernedCharacters_Count; // 0x27c(0x04)
	int32_t Server_UpdateReplicatedPips_Count; // 0x280(0x04)
	int32_t Server_UpdateScreenAspectRatio_Count; // 0x284(0x04)
};

// ScriptStruct DBDAnalytics.NamedRPCCount
// Size: 0x18 (Inherited: 0x00)
struct FNamedRPCCount {
	struct FString Name; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DBDAnalytics.RTMConnectionLostAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FRTMConnectionLostAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t ErrorCode; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString ErrorMessage; // 0xb0(0x10)
};

// ScriptStruct DBDAnalytics.RTMAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FRTMAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString RTMType; // 0xa8(0x10)
	uint32_t RTMSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString CurrentGameFlowStep; // 0xc0(0x10)
};

// ScriptStruct DBDAnalytics.S3CommandErrorAnalytics
// Size: 0xd8 (Inherited: 0xa8)
struct FS3CommandErrorAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString URL; // 0xa8(0x10)
	struct FString Verb; // 0xb8(0x10)
	int32_t ResponseCode; // 0xc8(0x04)
	bool InvalidRequest; // 0xcc(0x01)
	bool InvalidResponse; // 0xcd(0x01)
	bool DecryptionFailure; // 0xce(0x01)
	bool BadResponse; // 0xcf(0x01)
	bool ContentModifiedError; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct DBDAnalytics.S3CommandAnalytics
// Size: 0x108 (Inherited: 0xa8)
struct FS3CommandAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t RequestContentLength; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString ContentType; // 0xb0(0x10)
	float ElapsedTime; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString Status; // 0xc8(0x10)
	struct FString URL; // 0xd8(0x10)
	struct FString Verb; // 0xe8(0x10)
	int32_t ResponseContentLength; // 0xf8(0x04)
	int32_t ResponseCode; // 0xfc(0x04)
	bool success; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct DBDAnalytics.SaveGameLoadResultAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FSaveGameLoadResultAnalytics : FUniquelyIdentifiedAnalytic {
	bool LoadSuccessful; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString Message; // 0xb0(0x10)
};

// ScriptStruct DBDAnalytics.SaveGameSaveResultAnalytics
// Size: 0xb0 (Inherited: 0xa8)
struct FSaveGameSaveResultAnalytics : FUniquelyIdentifiedAnalytic {
	bool SaveSuccessful; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t ResponseCode; // 0xac(0x04)
};

// ScriptStruct DBDAnalytics.SaveGameErrorAnalytics
// Size: 0xe8 (Inherited: 0xa8)
struct FSaveGameErrorAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t ErrorCode; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString category; // 0xb0(0x10)
	struct FString ErrorDetails; // 0xc0(0x10)
	uint32_t KrakenErrorCode; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString StateName; // 0xd8(0x10)
};

// ScriptStruct DBDAnalytics.SaveGameSummaryPlayerStatsAnalytics
// Size: 0xd8 (Inherited: 0xa8)
struct FSaveGameSummaryPlayerStatsAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString OwnedPerks; // 0xa8(0x10)
	struct FString PlayerStatsProgression; // 0xb8(0x10)
	int32_t BloodwebPoints; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	int64_t CumulativePlaytime; // 0xd0(0x08)
};

// ScriptStruct DBDAnalytics.SerializablePlayerStatsProgression
// Size: 0x10 (Inherited: 0x00)
struct FSerializablePlayerStatsProgression {
	struct TArray<struct FStatsProgressionData> StatsProgression; // 0x00(0x10)
};

// ScriptStruct DBDAnalytics.StatsProgressionData
// Size: 0x10 (Inherited: 0x00)
struct FStatsProgressionData {
	struct FName Name; // 0x00(0x0c)
	float value; // 0x0c(0x04)
};

// ScriptStruct DBDAnalytics.SerializablePlayerPerks
// Size: 0x50 (Inherited: 0x00)
struct FSerializablePlayerPerks {
	struct TMap<struct FName, int32_t> Perks; // 0x00(0x50)
};

// ScriptStruct DBDAnalytics.DetailedScoreAnalytics
// Size: 0x108 (Inherited: 0xa8)
struct FDetailedScoreAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString ScorerMirrorsId; // 0xa8(0x10)
	struct FString TargetMirrorsId; // 0xb8(0x10)
	struct FString MatchID; // 0xc8(0x10)
	struct FName ScoreTypeId; // 0xd8(0x0c)
	int32_t ScoreExperience; // 0xe4(0x04)
	float ElapsedMatchTime; // 0xe8(0x04)
	float InstigatorCoordinateX; // 0xec(0x04)
	float InstigatorCoordinateY; // 0xf0(0x04)
	float InstigatorCoordinateZ; // 0xf4(0x04)
	float TargetCoordinateX; // 0xf8(0x04)
	float TargetCoordinateY; // 0xfc(0x04)
	float TargetCoordinateZ; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct DBDAnalytics.ScoreAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FScoreAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	struct FName ScoreTypeId; // 0xb8(0x0c)
	int32_t ScoreCount; // 0xc4(0x04)
	float ScoreBloodwebPoints; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct DBDAnalytics.ShopAnalytics
// Size: 0xb8 (Inherited: 0xa8)
struct FShopAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString LogMessage; // 0xa8(0x10)
};

// ScriptStruct DBDAnalytics.SpecialEventAnalytics
// Size: 0xe0 (Inherited: 0xa8)
struct FSpecialEventAnalytics : FUniquelyIdentifiedAnalytic {
	enum class EPlayerRole Role; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString MatchID; // 0xb0(0x10)
	struct FName EventName; // 0xc0(0x0c)
	struct FName Challenge; // 0xcc(0x0c)
	int32_t Amount; // 0xd8(0x04)
	int32_t CummulativeAmount; // 0xdc(0x04)
};

// ScriptStruct DBDAnalytics.ShortStats
// Size: 0x30 (Inherited: 0x00)
struct FShortStats {
	struct TArray<struct FStat> FlatAggregate; // 0x00(0x10)
	struct TArray<struct FCounter> CounterAggregate; // 0x10(0x10)
	struct TArray<struct FMemoryStat> MemoryAggregate; // 0x20(0x10)
};

// ScriptStruct DBDAnalytics.MemoryStat
// Size: 0x20 (Inherited: 0x00)
struct FMemoryStat {
	struct FString Name; // 0x00(0x10)
	float FloatValue; // 0x10(0x04)
	float FloatValueMin; // 0x14(0x04)
	float FloatValueMax; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DBDAnalytics.Counter
// Size: 0x20 (Inherited: 0x00)
struct FCounter {
	struct FString Name; // 0x00(0x10)
	float FloatValue; // 0x10(0x04)
	float FloatValueMin; // 0x14(0x04)
	float FloatValueMax; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DBDAnalytics.Stat
// Size: 0x20 (Inherited: 0x00)
struct FStat {
	struct FString Name; // 0x00(0x10)
	float FloatValue; // 0x10(0x04)
	float FloatValueMin; // 0x14(0x04)
	float FloatValueMax; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DBDAnalytics.StatsSystemUE4Analytics
// Size: 0x110 (Inherited: 0xa8)
struct FStatsSystemUE4Analytics : FUniquelyIdentifiedAnalytic {
	struct FString Name; // 0xa8(0x10)
	bool bIsBudget; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString MatchID; // 0xc0(0x10)
	struct FString MapName; // 0xd0(0x10)
	struct TArray<struct FStat> FlatAggregate; // 0xe0(0x10)
	struct TArray<struct FCounter> CounterAggregate; // 0xf0(0x10)
	struct TArray<struct FMemoryStat> MemoryAggregate; // 0x100(0x10)
};

// ScriptStruct DBDAnalytics.NewSurvivorTutorialAnalytics
// Size: 0x108 (Inherited: 0xa8)
struct FNewSurvivorTutorialAnalytics : FUniquelyIdentifiedAnalytic {
	bool IsLookAroundComplete; // 0xa8(0x01)
	bool IsWalkAroundComplete; // 0xa9(0x01)
	bool IsRunningComplete; // 0xaa(0x01)
	bool IsCrouchComplete; // 0xab(0x01)
	bool IsFirstVaultComplete; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	int32_t TimeToCompleteAreaOne; // 0xb0(0x04)
	bool IsGeneratorComplete; // 0xb4(0x01)
	bool IsSecondVaultComplete; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	int32_t TimeToCompleteAreaTwo; // 0xb8(0x04)
	bool IsBeartrapComplete; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32_t TimeToCompleteAreaThree; // 0xc0(0x04)
	bool IsPalletComplete; // 0xc4(0x01)
	bool IsUnhookMegComplete; // 0xc5(0x01)
	bool IsLockerComplete; // 0xc6(0x01)
	bool IsGetUnhookedComplete; // 0xc7(0x01)
	bool IsHealMegComplete; // 0xc8(0x01)
	bool IsGetHealedComplete; // 0xc9(0x01)
	bool IsOpenGateComplete; // 0xca(0x01)
	bool IsEscapeComplete; // 0xcb(0x01)
	int32_t TimeToCompleteAreaFour; // 0xcc(0x04)
	int32_t TotalTimeInTutorial; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString tutorialId; // 0xd8(0x10)
	struct FString OnboardingModeId; // 0xe8(0x10)
	int32_t OnboardingEnabled; // 0xf8(0x04)
	int32_t OnboardingABTestingEnabled; // 0xfc(0x04)
	int32_t OnboardingNumberActiveModes; // 0x100(0x04)
	int32_t OnboardingNewAssignedMode; // 0x104(0x04)
};

// ScriptStruct DBDAnalytics.SyncLoadAnalytics
// Size: 0x108 (Inherited: 0xa8)
struct FSyncLoadAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString AssetName; // 0xa8(0x10)
	float LoadTimeMilliseconds; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString DeviceProfileName; // 0xc0(0x10)
	struct FString BuildConfiguration; // 0xd0(0x10)
	int32_t ChangelistNumber; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString MapName; // 0xe8(0x10)
	struct FString GameFlowContext; // 0xf8(0x10)
};

// ScriptStruct DBDAnalytics.TexturegroupChartingAnalytics
// Size: 0xf8 (Inherited: 0xa8)
struct FTexturegroupChartingAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString texturegroup_name; // 0xa8(0x10)
	struct FString texturegroups_guid; // 0xb8(0x10)
	struct FString map_name; // 0xc8(0x10)
	int32_t avg_qty_streaming; // 0xd8(0x04)
	int32_t max_qty_streaming; // 0xdc(0x04)
	int32_t avg_memory_streaming; // 0xe0(0x04)
	int32_t max_memory_streaming; // 0xe4(0x04)
	int32_t avg_qty_non_streaming; // 0xe8(0x04)
	int32_t max_qty_non_streaming; // 0xec(0x04)
	int32_t avg_memory_non_streaming; // 0xf0(0x04)
	int32_t max_memory_non_streaming; // 0xf4(0x04)
};

// ScriptStruct DBDAnalytics.TransactionAnalytics
// Size: 0x130 (Inherited: 0xa8)
struct FTransactionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString TransactionType; // 0xa8(0x10)
	struct FString TransactionSource; // 0xb8(0x10)
	struct FString SourceID; // 0xc8(0x10)
	int32_t SourceTier; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FString CurrencyType; // 0xe0(0x10)
	int32_t CurrencyAmount; // 0xf0(0x04)
	int32_t CurrencyBalance; // 0xf4(0x04)
	int32_t LevelAchieved; // 0xf8(0x04)
	int32_t Prestige; // 0xfc(0x04)
	struct FString ItemIDAcquired; // 0x100(0x10)
	int32_t Rank; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString SelectedCharacter; // 0x118(0x10)
	bool TransactionTriggeredLevelUp; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// ScriptStruct DBDAnalytics.UnknownPrivilegeErrorAnalytics
// Size: 0xc0 (Inherited: 0xa8)
struct FUnknownPrivilegeErrorAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t PrivilegeResults; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FString> PlatformResults; // 0xb0(0x10)
};

// ScriptStruct DBDAnalytics.WalesCypherAnalytics
// Size: 0xd8 (Inherited: 0xa8)
struct FWalesCypherAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString EnteredSequence; // 0xa8(0x10)
	struct FString ExpectedSequence; // 0xb8(0x10)
	int32_t TimeoutThreshold; // 0xc8(0x04)
	bool success; // 0xcc(0x01)
	bool TIMEOUT; // 0xcd(0x01)
	bool CharmGranted; // 0xce(0x01)
	char pad_CF[0x1]; // 0xcf(0x01)
	int32_t ValidCharacterSelcted; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

