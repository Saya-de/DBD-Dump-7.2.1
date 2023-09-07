// Enum Barrel2023.EBarrelType
enum class EBarrelType : uint8 {
	None = 0,
	RedBarrel = 1,
	BlueBarrel = 2,
	GreenBarrel = 3,
	EBarrelType_MAX = 4
};

// ScriptStruct Barrel2023.BarrelCharmInfo
// Size: 0x20 (Inherited: 0x00)
struct FBarrelCharmInfo {
	enum class EBarrelType BarrelType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString RewardId; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

