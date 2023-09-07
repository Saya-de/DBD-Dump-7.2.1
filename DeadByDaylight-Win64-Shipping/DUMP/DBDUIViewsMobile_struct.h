// Enum DBDUIViewsMobile.EActionOnFriendType
enum class EActionOnFriendType : uint8 {
	None = 0,
	SendFriendRequest = 1,
	ConfirmFriendRequest = 2,
	DeclineFriendRequest = 3,
	RemoveFriend = 4,
	AddToFavorite = 5,
	RemoveToFavorite = 6,
	Mute = 7,
	Unmute = 8,
	InviteToParty = 9,
	CancelInviteToParty = 10,
	Select = 11,
	ConfirmAction = 12,
	DeclineAction = 13,
	RemovePlayerFromParty = 14,
	Count = 15,
	EActionOnFriendType_MAX = 16
};

// Enum DBDUIViewsMobile.EAtlantaFriendUIStatus
enum class EAtlantaFriendUIStatus : uint8 {
	Undefined = 0,
	FriendSuggestion = 1,
	FriendRequestSent = 2,
	FriendRequestReceived = 3,
	Available = 4,
	InAMatch = 5,
	Offline = 6,
	AddFriendToSeeStatus = 7,
	EAtlantaFriendUIStatus_MAX = 8
};

// Enum DBDUIViewsMobile.ECustomMatchDifficulty
enum class ECustomMatchDifficulty : uint8 {
	Easy = 0,
	Medium = 1,
	Hard = 2,
	Suggested = 3,
	Random = 4,
	None = 5,
	Max = 6,
	ECustomMatchDifficulty_MAX = 7
};

// Enum DBDUIViewsMobile.ECustomMatchOptions
enum class ECustomMatchOptions : uint8 {
	All = 0,
	None = 1,
	Owned = 2,
	Random = 3,
	Special = 4,
	Count = 5,
	ECustomMatchOptions_MAX = 6
};

// Enum DBDUIViewsMobile.ECustomMatchTab
enum class ECustomMatchTab : uint8 {
	Perks = 0,
	ItemsAndAddons = 1,
	Offerings = 2,
	Maps = 3,
	BotDifficulty = 4,
	BotCharacter = 5,
	Count = 6,
	ECustomMatchTab_MAX = 7
};

// Enum DBDUIViewsMobile.EFriendTypeButton
enum class EFriendTypeButton : uint8 {
	InvitePlayerToParty = 0,
	RemovePlayerFromParty = 1,
	EFriendTypeButton_MAX = 2
};

// ScriptStruct DBDUIViewsMobile.ActionOnFriend
// Size: 0x78 (Inherited: 0x00)
struct FActionOnFriend {
	enum class EActionOnFriendType ActionToProceed; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FAtlantaFriendUIData AtlantaFriendDataToUpdate; // 0x08(0x68)
	struct UUMGBaseFriendListElement* ActionOwner; // 0x70(0x08)
};

// ScriptStruct DBDUIViewsMobile.AtlantaFriendUIData
// Size: 0x68 (Inherited: 0x00)
struct FAtlantaFriendUIData {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct DBDUIViewsMobile.FriendStatusUIData
// Size: 0x58 (Inherited: 0x08)
struct FFriendStatusUIData : FDBDTableRowBase {
	enum class EAtlantaFriendUIStatus FriendStatus; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<UTexture2D> StatusIcon; // 0x10(0x30)
	struct FText StatusText; // 0x40(0x18)
};

// ScriptStruct DBDUIViewsMobile.MatchConfigDifficultyData
// Size: 0x30 (Inherited: 0x00)
struct FMatchConfigDifficultyData {
	struct TSoftObjectPtr<UPaperSprite> DifficultyIcon; // 0x00(0x30)
};

// ScriptStruct DBDUIViewsMobile.MatchOptionAssetData
// Size: 0x48 (Inherited: 0x00)
struct FMatchOptionAssetData {
	struct FText TextName; // 0x00(0x18)
	struct TSoftObjectPtr<UPaperSprite> Icon; // 0x18(0x30)
};

// ScriptStruct DBDUIViewsMobile.MatchConfigOptionUIData
// Size: 0x68 (Inherited: 0x00)
struct FMatchConfigOptionUIData {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString StringId; // 0x08(0x10)
	struct FText OptionName; // 0x18(0x18)
	struct TSoftObjectPtr<UPaperSprite> OptionIcon; // 0x30(0x30)
	enum class ECustomMatchOptions OptionType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct DBDUIViewsMobile.MatchConfigTabData
// Size: 0xb0 (Inherited: 0x00)
struct FMatchConfigTabData {
	struct TSoftClassPtr<UObject> Widget; // 0x00(0x30)
	struct TSoftObjectPtr<UPaperSprite> TabIcon; // 0x30(0x30)
	struct TMap<enum class ECustomMatchOptions, int32_t> DefaultOptionsID; // 0x60(0x50)
};

// ScriptStruct DBDUIViewsMobile.CustomMatchTabConfig
// Size: 0x40 (Inherited: 0x00)
struct FCustomMatchTabConfig {
	int32_t ItemWidth; // 0x00(0x04)
	int32_t ItemHeight; // 0x04(0x04)
	int32_t row; // 0x08(0x04)
	int32_t Column; // 0x0c(0x04)
	struct TSoftClassPtr<UObject> OptionButtonClass; // 0x10(0x30)
};

