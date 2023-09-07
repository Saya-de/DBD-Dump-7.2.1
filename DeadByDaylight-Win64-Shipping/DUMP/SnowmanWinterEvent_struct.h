// Enum SnowmanWinterEvent.ESnowmanDestructionType
enum class ESnowmanDestructionType : uint8 {
	None = 0,
	SurvivorRunExit = 1,
	KillerAttackExit = 2,
	KillerCancelExit = 3,
	KillerAttackWhileControlled = 4,
	KillerAttackWhileEmpty = 5,
	ESnowmanDestructionType_MAX = 6
};

// Enum SnowmanWinterEvent.ESnowmanState
enum class ESnowmanState : uint8 {
	Idle = 0,
	BeingEntered = 1,
	Controlled = 2,
	Destroyed = 3,
	ESnowmanState_MAX = 4
};

// ScriptStruct SnowmanWinterEvent.SnowmanSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FSnowmanSpawnData {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator SpawnRotation; // 0x0c(0x0c)
};

// ScriptStruct SnowmanWinterEvent.SnowmanSpawnLocationData
// Size: 0x28 (Inherited: 0x00)
struct FSnowmanSpawnLocationData {
	struct FVector OriginLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVector> NavmeshLocations; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

