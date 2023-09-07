// Enum Halloween2022.EVoidEnergyTier
enum class EVoidEnergyTier : uint8 {
	None = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	Count = 4,
	EVoidEnergyTier_MAX = 5
};

// Enum Halloween2022.EVoidEnergyType
enum class EVoidEnergyType : uint8 {
	None = 0,
	PalletStun = 1,
	WiggleStun = 2,
	LockerStun = 3,
	FlashlightStun = 4,
	GeneratorProgress = 5,
	MeatHook = 6,
	Pumpkin = 7,
	DownSurvivor = 8,
	EVoidEnergyType_MAX = 9
};

// Enum Halloween2022.EVoidEnergyChangeReason
enum class EVoidEnergyChangeReason : uint8 {
	None = 0,
	AddEnergy = 1,
	LoseEnergy = 2,
	SpendEnergy = 3,
	EVoidEnergyChangeReason_MAX = 4
};

// ScriptStruct Halloween2022.OrbProperties
// Size: 0x30 (Inherited: 0x00)
struct FOrbProperties {
	enum class EVoidEnergyType VoidEnergyType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector SpawnLocation; // 0x04(0x0c)
	struct FVector HoverLocation; // 0x10(0x0c)
	struct FVector CustomEndLocation; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
};

