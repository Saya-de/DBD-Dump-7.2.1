// Enum TheK33.EControlStationState
enum class EControlStationState : uint8 {
	Available = 0,
	SpawningTurret = 1,
	SpawnedTurret = 2,
	Cooldown = 3,
	EControlStationState_MAX = 4
};

// Enum TheK33.EK33Foot
enum class EK33Foot : uint8 {
	LeftFoot = 0,
	RightFoot = 1,
	EK33Foot_MAX = 2
};

// Enum TheK33.EK33KillerBlockCollisionType
enum class EK33KillerBlockCollisionType : uint8 {
	AllCollisionsEnabled = 0,
	WorldCollisionsOnly = 1,
	TunnelCollisionsOnly = 2,
	EK33KillerBlockCollisionType_MAX = 3
};

// Enum TheK33.EK33SpecialModeChargeState
enum class EK33SpecialModeChargeState : uint8 {
	Idle = 0,
	Charging = 1,
	Discharging = 2,
	EK33SpecialModeChargeState_MAX = 3
};

// Enum TheK33.EK33TunnelBlockType
enum class EK33TunnelBlockType : uint8 {
	None = 0,
	Straight = 1,
	Corner = 2,
	T_Junction = 3,
	CrossJunction = 4,
	DeadEnd = 5,
	EK33TunnelBlockType_MAX = 6
};

// ScriptStruct TheK33.TurretRangeChangedHandleData
// Size: 0x18 (Inherited: 0x00)
struct FTurretRangeChangedHandleData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheK33.K33CosmeticTunnelBlockSpawnInfo
// Size: 0x40 (Inherited: 0x00)
struct FK33CosmeticTunnelBlockSpawnInfo {
	struct TSoftClassPtr<UObject> DefaultClassType; // 0x00(0x30)
	struct TArray<struct FK33CosmeticTunnelBlockVariationInfo> Variations; // 0x30(0x10)
};

// ScriptStruct TheK33.K33CosmeticTunnelBlockVariationInfo
// Size: 0x38 (Inherited: 0x00)
struct FK33CosmeticTunnelBlockVariationInfo {
	float PercentageChance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> TunnelBlockCosmeticClass; // 0x08(0x30)
};

// ScriptStruct TheK33.K33TunnelBlockSpawnData
// Size: 0x30 (Inherited: 0x00)
struct FK33TunnelBlockSpawnData {
	struct FRotator _worldRotation; // 0x00(0x0c)
	enum class EK33TunnelBlockType _blockType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FK33TunnelGridCellData _gridInfo; // 0x10(0x20)
};

// ScriptStruct TheK33.K33TunnelGridCellData
// Size: 0x20 (Inherited: 0x00)
struct FK33TunnelGridCellData {
	struct FVector GridWorldLocation; // 0x00(0x0c)
	struct TWeakObjectPtr<struct AK33ControlStation> ControlStation; // 0x0c(0x08)
	struct FK33GridCellLocation _gridLocation; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TheK33.K33GridCellLocation
// Size: 0x08 (Inherited: 0x00)
struct FK33GridCellLocation {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct TheK33.TurretInRangeAudioData
// Size: 0x28 (Inherited: 0x00)
struct FTurretInRangeAudioData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TheK33.RaycastProperties
// Size: 0x08 (Inherited: 0x00)
struct FRaycastProperties {
	float HalfHeightPercentage; // 0x00(0x04)
	float RadiusPercentage; // 0x04(0x04)
};

