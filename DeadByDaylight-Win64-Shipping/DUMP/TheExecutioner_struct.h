// Enum TheExecutioner.EProtagonist
enum class EProtagonist : uint8 {
	Instigator = 0,
	Target = 1,
	EProtagonist_MAX = 2
};

// Enum TheExecutioner.ETrailPointRefreshReason
enum class ETrailPointRefreshReason : uint8 {
	FrontNeighbourAdded = 0,
	BackNeighbourAdded = 1,
	BackNeighbourRemoved = 2,
	FrontNeighbourRemoved = 3,
	None = 4,
	ETrailPointRefreshReason_MAX = 5
};

// Enum TheExecutioner.ETrailType
enum class ETrailType : uint8 {
	NormalTrail = 0,
	RestrictionTrail = 1,
	None = 2,
	ETrailType_MAX = 3
};

// ScriptStruct TheExecutioner.AgonyDisplayFxEvent
// Size: 0x10 (Inherited: 0x00)
struct FAgonyDisplayFxEvent {
	struct FGameplayTag GameEvent; // 0x00(0x0c)
	enum class EProtagonist Protagonist; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TheExecutioner.TormentTrailPointInfo
// Size: 0x60 (Inherited: 0x00)
struct FTormentTrailPointInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TheExecutioner.ReplicatedTrailPointList
// Size: 0x120 (Inherited: 0x108)
struct FReplicatedTrailPointList : FFastArraySerializer {
	struct TArray<struct FReplicatedTrailItem> Items; // 0x108(0x10)
	struct ATormentTrailController* TormentTrailController; // 0x118(0x08)
};

// ScriptStruct TheExecutioner.ReplicatedTrailItem
// Size: 0x40 (Inherited: 0x0c)
struct FReplicatedTrailItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATormentTrailPoint* TrailPoint; // 0x10(0x08)
	char OrderInTrail; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector_NetQuantize10 PointRelativeLocation; // 0x1c(0x0c)
	struct FRotator PointRotation; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct TheExecutioner.SpawnedAttackPoint
// Size: 0x10 (Inherited: 0x00)
struct FSpawnedAttackPoint {
	struct ABaseTormentTrailPoint* AttackTrailPoint; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TheExecutioner.SpawnedTormentTrailPoint
// Size: 0x10 (Inherited: 0x00)
struct FSpawnedTormentTrailPoint {
	struct ATormentTrailPoint* TrailPoint; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

