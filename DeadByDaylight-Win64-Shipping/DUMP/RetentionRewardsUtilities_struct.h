// Enum RetentionRewardsUtilities.EClaimType
enum class EClaimType : uint8 {
	Minute = 0,
	Hour = 1,
	Day = 2,
	Week = 3,
	Month = 4,
	Year = 5,
	EClaimType_MAX = 6
};

// Enum RetentionRewardsUtilities.EClaimResponseCodes
enum class EClaimResponseCodes : uint8 {
	Claimed = 0,
	CalendarNotFound = 1,
	RewardNotAvailable = 2,
	RewardNotSupported = 3,
	EClaimResponseCodes_MAX = 4
};

// ScriptStruct RetentionRewardsUtilities.RetentionCalendar
// Size: 0x38 (Inherited: 0x00)
struct FRetentionCalendar {
	struct FString ID; // 0x00(0x10)
	struct FDateTime starttime; // 0x10(0x08)
	struct FDateTime EndTime; // 0x18(0x08)
	enum class EClaimType ClaimType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FRetentionReward> Rewards; // 0x28(0x10)
};

// ScriptStruct RetentionRewardsUtilities.RetentionReward
// Size: 0x68 (Inherited: 0x00)
struct FRetentionReward {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Amount; // 0x10(0x04)
	enum class ERewardItemType RewardType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TMap<struct FName, struct FString> GameSpecificData; // 0x18(0x50)
};

// ScriptStruct RetentionRewardsUtilities.CampaignStatus
// Size: 0x18 (Inherited: 0x00)
struct FCampaignStatus {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime StartDate; // 0x08(0x08)
	struct FDateTime EndDate; // 0x10(0x08)
};

// ScriptStruct RetentionRewardsUtilities.ClaimStatus
// Size: 0x10 (Inherited: 0x00)
struct FClaimStatus {
	bool isSet; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LastClaimedIndex; // 0x04(0x04)
	struct FDateTime NextClaimTime; // 0x08(0x08)
};

