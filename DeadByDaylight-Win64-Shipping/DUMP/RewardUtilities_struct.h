// Enum RewardUtilities.ERewardItemType
enum class ERewardItemType : uint8 {
	None = 0,
	Currency = 1,
	Inventory = 2,
	ERewardItemType_MAX = 3
};

// ScriptStruct RewardUtilities.RewardItem
// Size: 0x20 (Inherited: 0x00)
struct FRewardItem {
	enum class ERewardItemType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	int32_t Amount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

