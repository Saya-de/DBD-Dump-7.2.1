// Enum OnlineMessagesUtilities.EClaimableInboxMessageState
enum class EClaimableInboxMessageState : uint8 {
	NONE = 0,
	CLAIMED = 1,
	EClaimableInboxMessageState_MAX = 2
};

// Enum OnlineMessagesUtilities.EClaimableInboxMessageType
enum class EClaimableInboxMessageType : uint8 {
	None = 0,
	Currency = 1,
	Inventory = 2,
	EClaimableInboxMessageType_MAX = 3
};

// Enum OnlineMessagesUtilities.EOnlineMessageFlag
enum class EOnlineMessageFlag : uint8 {
	New = 0,
	Read = 1,
	Archived = 2,
	EOnlineMessageFlag_MAX = 3
};

// ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessage
// Size: 0x18 (Inherited: 0x00)
struct FClaimableInboxMessage {
	struct TArray<struct FClaimableInboxMessageData> Data; // 0x00(0x10)
	enum class EClaimableInboxMessageState State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessageData
// Size: 0x18 (Inherited: 0x00)
struct FClaimableInboxMessageData {
	enum class EClaimableInboxMessageType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
	struct FString ID; // 0x08(0x10)
};

// ScriptStruct OnlineMessagesUtilities.InboxMessageData
// Size: 0x70 (Inherited: 0x00)
struct FInboxMessageData {
	int64_t ID; // 0x00(0x08)
	struct FString Origin; // 0x08(0x10)
	struct FString RecipientId; // 0x18(0x10)
	int64_t ReceivedTimestamp; // 0x28(0x08)
	struct FString Subject; // 0x30(0x10)
	struct FString Body; // 0x40(0x10)
	struct TArray<struct FClaimableInboxMessageData> Claimable; // 0x50(0x10)
	bool AreRewardsClaimed; // 0x60(0x01)
	bool IsRead; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	int64_t ExpireTimestamp; // 0x68(0x08)
};

