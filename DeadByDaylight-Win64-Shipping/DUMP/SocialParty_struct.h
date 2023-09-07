// Enum SocialParty.EJoinPartyMethod
enum class EJoinPartyMethod : uint8 {
	None = 0,
	PlatformInvitation = 1,
	InGameInvitation = 2,
	JoinRequest = 3,
	EJoinPartyMethod_MAX = 4
};

// Enum SocialParty.EPartyBusyReason
enum class EPartyBusyReason : uint8 {
	None = 0,
	CreatingParty = 1,
	LeavingParty = 2,
	SyncingParty = 3,
	DestroyingParty = 4,
	InvitingPlayer = 5,
	AcceptingPartyInvite = 6,
	RejectingPartyInvite = 7,
	CancelingPartyInvite = 8,
	RequestingJoinParty = 9,
	ValidatingInvite = 10,
	AcceptingRequestJoinParty = 11,
	RejectingRequestJoinParty = 12,
	CancelingRequestJoinParty = 13,
	AcceptingPlatformInvite = 14,
	KickingPlayerFromParty = 15,
	LeavingPartyFromKick = 16,
	CreatingPartyPlatformSession = 17,
	LeavingCrossplatformPlatformSession = 18,
	WaitingForPlatformSessionInfo = 19,
	ProcessingPlatformSession = 20,
	EPartyBusyReason_MAX = 21
};

// Enum SocialParty.EPartyError
enum class EPartyError : uint8 {
	None = 0,
	CreatePartyFail = 1,
	CreatePartyFail_PlayerAlreadyInParty = 2,
	ConnectionToPartyManagementLost = 3,
	AcceptInvitationFail = 4,
	AcceptInvitationFail_InvitationExpired = 5,
	AcceptInvitationFail_PartyIsFull = 6,
	AcceptInvitationFail_PartyDoesNotExists = 7,
	AcceptInvitationFail_VersionMismatch = 8,
	AcceptInvitationFail_StreamingInstallationIncomplete = 9,
	AcceptInvitationFail_PartyAlreadyInMatchmaking = 10,
	AcceptInvitationFail_AllPartyMembersAreInMatch = 11,
	RejectInvitationFail = 12,
	RejectInvitationFail_PartyDoesNotExists = 13,
	InvitationFail = 14,
	InvitationFail_PartyDoesNotExists = 15,
	InvitationFail_PlayerAlreadyInParty = 16,
	InvitationFail_NotFriendsWithUser = 17,
	JoinRequestFail = 18,
	JoinRequestFail_PartyDoesNotExists = 19,
	JoinRequestFail_PlayerAlreadyInPartyOrPartyFull = 20,
	JoinRequestFail_BannedFromParty = 21,
	JoinRequestFail_FriendNotInParty = 22,
	JoinRequestFail_PartyIsPrivate = 23,
	JoinRequestAcceptedFail = 24,
	JoinRequestAcceptedFail_PartyDoesNotExists = 25,
	AcceptJoinRequestFail = 26,
	AcceptJoinRequestFail_RequestNotFound = 27,
	AcceptJoinRequestFail_PartyDoesNotExists = 28,
	RejectJoinRequestFail = 29,
	RejectJoinRequestFail_RequestNotFound = 30,
	RejectJoinRequestFail_PartyDoesNotExists = 31,
	CancelJoinRequestFail = 32,
	CancelJoinRequestFail_RequestNotFound = 33,
	RealTimeMessagingDisconnected = 34,
	FriendBlocked_UnableToJoinParty = 35,
	FriendBlocked_UnableToRemainInParty = 36,
	CancelInvitationFail = 37,
	CancelInvitationFail_PartyDoesNotExists = 38,
	SendPartyChatMessageFail = 39,
	SendPartyChatMessageFail_PartyDoesNotExists = 40,
	SendPartyChatMessageFail_MessageNotAllowed = 41,
	InvitationValidationError = 42,
	InvitationValidationError_StandardInviteFlowButActiveCrowdPlay = 43,
	InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay = 44,
	InvitationValidationError_PartyIsFull = 45,
	InvitationValidationError_PartyDoesNotExists = 46,
	InvitationValidationError_VersionMismatch = 47,
	InvitationValidationError_StreamingInstallationIncomplete = 48,
	InvitationValidationError_FriendBlocked = 49,
	InvitationValidationError_InsufficientPrivileges = 50,
	InvitationValidationError_PlayerBanned = 51,
	InvitationValidationError_LocalCrossplayIncompatibility = 52,
	InvitationValidationError_RemoteCrossplayIncompatibility = 53,
	InvitationValidationError_ListenServerCrossplayIncompatibility = 54,
	RemovePlayerFromPartyFail = 55,
	JoinFail_PlayerAlreadyInParty = 56,
	UnknownError = 57,
	EPartyError_MAX = 58
};

// Enum SocialParty.EPartyPostMatchmakingState
enum class EPartyPostMatchmakingState : uint8 {
	None = 0,
	InProgress = 1,
	Completed = 2,
	Error = 3,
	EPartyPostMatchmakingState_MAX = 4
};

// Enum SocialParty.EPartyPostMatchmakingRole
enum class EPartyPostMatchmakingRole : uint8 {
	None = 0,
	Client = 1,
	Host = 2,
	EPartyPostMatchmakingRole_MAX = 3
};

// Enum SocialParty.EMatchmakingState
enum class EMatchmakingState : uint8 {
	None = 0,
	Searching = 1,
	MatchFound = 2,
	Error = 3,
	EMatchmakingState_MAX = 4
};

// ScriptStruct SocialParty.CustomGameBotsData
// Size: 0x18 (Inherited: 0x00)
struct FCustomGameBotsData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FCustomGameBot> _bots; // 0x08(0x10)
};

// ScriptStruct SocialParty.CustomGameBot
// Size: 0xc0 (Inherited: 0x00)
struct FCustomGameBot {
	char pad_0[0x1]; // 0x00(0x01)
	char _role; // 0x01(0x01)
	char _difficulty; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t _characterIndex; // 0x04(0x04)
	int32_t _slotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString _botGUID; // 0x10(0x10)
	struct FString _botName; // 0x20(0x10)
	struct FLoadout _loadout; // 0x30(0x50)
	char pad_80[0x40]; // 0x80(0x40)
};

// ScriptStruct SocialParty.Loadout
// Size: 0x50 (Inherited: 0x00)
struct FLoadout {
	struct FName Offering; // 0x00(0x0c)
	struct FName Item; // 0x0c(0x0c)
	struct FName addon1; // 0x18(0x0c)
	struct FName addon2; // 0x24(0x0c)
	struct TArray<struct FName> _perks; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct SocialParty.SocialPartyMember
// Size: 0xe8 (Inherited: 0x00)
struct FSocialPartyMember {
	char pad_0[0x8]; // 0x00(0x08)
	struct FEquippedPlayerCustomization _playerCustomization; // 0x08(0x38)
	struct FString _playerName; // 0x40(0x10)
	struct FString _platformSessionId; // 0x50(0x10)
	struct FString _uniquePlayerId; // 0x60(0x10)
	int32_t _playerRank; // 0x70(0x04)
	int32_t _characterLevel; // 0x74(0x04)
	int32_t _prestigeLevel; // 0x78(0x04)
	int32_t _gameRole; // 0x7c(0x04)
	int32_t _characterId; // 0x80(0x04)
	struct FName _powerId; // 0x84(0x0c)
	int32_t _location; // 0x90(0x04)
	int32_t _queueDelayIteration; // 0x94(0x04)
	bool _ready; // 0x98(0x01)
	bool _crossplayAllowed; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString _playerPlatform; // 0xa0(0x10)
	struct FString _playerProvider; // 0xb0(0x10)
	struct FString _matchId; // 0xc0(0x10)
	enum class EPartyPostMatchmakingRole _postMatchmakingRole; // 0xd0(0x01)
	enum class EPartyPostMatchmakingState _postMatchmakingState; // 0xd1(0x01)
	char _roleRequested; // 0xd2(0x01)
	char _anonymousSuffix; // 0xd3(0x01)
	bool _isStateInitialized; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	int64_t _disconnectionPenaltyEndOfBan; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
};

// ScriptStruct SocialParty.SocialPartyState
// Size: 0x190 (Inherited: 0x00)
struct FSocialPartyState {
	char pad_0[0x8]; // 0x00(0x08)
	struct FCustomGamePresetData _customGamePresetData; // 0x08(0x38)
	struct FPartySessionSettings _partySessionSettings; // 0x40(0x98)
	struct FPartyMatchmakingSettings _partyMatchmakingSettings; // 0xd8(0x38)
	struct TArray<struct FName> _playerJoinOrder; // 0x110(0x10)
	struct TMap<struct FName, char> _playerChatIndices; // 0x120(0x50)
	int32_t _gameType; // 0x170(0x04)
	bool _isCrowdPlay; // 0x174(0x01)
	bool _isUsingDedicatedServer; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct FString _version; // 0x178(0x10)
	int32_t _lastUpdatedTime; // 0x188(0x04)
	int32_t _lastSentTime; // 0x18c(0x04)
};

// ScriptStruct SocialParty.PartyMatchmakingSettings
// Size: 0x38 (Inherited: 0x00)
struct FPartyMatchmakingSettings {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FString> _playerIds; // 0x08(0x10)
	enum class EMatchmakingState _matchmakingState; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	int64_t _startMatchmakingDateTimestamp; // 0x20(0x08)
	uint32_t _matchIncentive; // 0x28(0x04)
	bool _isInFinalCountdown; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t _postMatchmakingTransitionId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct SocialParty.PartySessionSettings
// Size: 0x98 (Inherited: 0x00)
struct FPartySessionSettings {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString _sessionId; // 0x08(0x10)
	struct TMap<struct FString, struct FString> _gameSessionInfos; // 0x18(0x50)
	struct FString _owningUserId; // 0x68(0x10)
	struct FString _owningUserName; // 0x78(0x10)
	bool _isDedicated; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	int64_t _matchmakingTimestamp; // 0x90(0x08)
};

// ScriptStruct SocialParty.CustomGamePresetData
// Size: 0x38 (Inherited: 0x00)
struct FCustomGamePresetData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<char> _mapAvailabilities; // 0x08(0x10)
	bool _arePerkAvailable; // 0x18(0x01)
	bool _areOfferingAvailable; // 0x19(0x01)
	bool _areItemAvailable; // 0x1a(0x01)
	bool _areItemAddonAvailable; // 0x1b(0x01)
	bool _areDlcContentAllowed; // 0x1c(0x01)
	bool _isPrivateMatch; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FCustomGameBotsData _botsData; // 0x20(0x18)
};

