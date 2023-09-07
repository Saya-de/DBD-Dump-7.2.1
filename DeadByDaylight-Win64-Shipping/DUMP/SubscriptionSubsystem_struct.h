// Enum SubscriptionSubsystem.ESubscriptionClaimType
enum class ESubscriptionClaimType : uint8 {
	None = 0,
	Daily = 1,
	Renewal = 2,
	ESubscriptionClaimType_MAX = 3
};

// ScriptStruct SubscriptionSubsystem.SubscriptionRewardMap
// Size: 0x50 (Inherited: 0x00)
struct FSubscriptionRewardMap {
	struct TMap<enum class ESubscriptionClaimType, struct FSubscriptionReward> RewardsByClaimType; // 0x00(0x50)
};

// ScriptStruct SubscriptionSubsystem.SubscriptionReward
// Size: 0x28 (Inherited: 0x00)
struct FSubscriptionReward {
	struct TArray<struct FRewardItem> Rewards; // 0x00(0x10)
	struct FDateTime NextClaimTime; // 0x10(0x08)
	struct FString AnalyticsEventId; // 0x18(0x10)
};

