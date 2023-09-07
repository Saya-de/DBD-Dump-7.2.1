// Enum TheK26.EK26ProjectileState
enum class EK26ProjectileState : uint8 {
	Invalid = 0,
	Summoning = 1,
	Idle = 2,
	FollowingPath = 3,
	OffPath = 4,
	Destroyed = 5,
	EK26ProjectileState_MAX = 6
};

// Enum TheK26.EK26AmmoState
enum class EK26AmmoState : uint8 {
	Available = 0,
	Expiring = 1,
	Recharging = 2,
	EK26AmmoState_MAX = 3
};

// Enum TheK26.EK26AmmoCooldownReason
enum class EK26AmmoCooldownReason : uint8 {
	Expired = 0,
	Fired = 1,
	EK26AmmoCooldownReason_MAX = 2
};

// Enum TheK26.FK26AttachedCrowRemovalReason
enum class FK26AttachedCrowRemovalReason : uint8 {
	Invalid = 0,
	LockerEnter = 1,
	SurvivorDamagedByCrow = 2,
	SurvivorDowned = 3,
	SurvivorPickedUp = 4,
	CrowFlashlighted = 5,
	RemoveInteraction = 6,
	FK26AttachedCrowRemovalReason_MAX = 7
};

// ScriptStruct TheK26.K26ProjectileStateDetails
// Size: 0x108 (Inherited: 0x00)
struct FK26ProjectileStateDetails {
	struct FDBDTunableRowHandle VisualScaleX; // 0x00(0x28)
	struct FDBDTunableRowHandle VisualScaleY; // 0x28(0x28)
	struct FDBDTunableRowHandle VisualScaleZ; // 0x50(0x28)
	struct FDBDTunableRowHandle HitboxScaleX; // 0x78(0x28)
	struct FDBDTunableRowHandle HitboxScaleY; // 0xa0(0x28)
	struct FDBDTunableRowHandle HitboxScaleZ; // 0xc8(0x28)
	struct UStaticMesh* HitBoxStaticMesh; // 0xf0(0x08)
	struct FLinearColor DebugColor; // 0xf8(0x10)
};

// ScriptStruct TheK26.K26AttachmentStatus
// Size: 0x02 (Inherited: 0x00)
struct FK26AttachmentStatus {
	enum class FK26AttachedCrowRemovalReason LastRemovalReason; // 0x00(0x01)
	bool IsAttached; // 0x01(0x01)
};

// ScriptStruct TheK26.ActorPairQueryCrowPair
// Size: 0x28 (Inherited: 0x00)
struct FActorPairQueryCrowPair {
	char pad_0[0x20]; // 0x00(0x20)
	struct AK26CrowProjectile* crowProjectile; // 0x20(0x08)
};

// ScriptStruct TheK26.K26PathData
// Size: 0x40 (Inherited: 0x00)
struct FK26PathData {
	bool IsInUse; // 0x00(0x01)
	bool IsVisibleToKiller; // 0x01(0x01)
	bool IsVisibleForSurvivors; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t MaxVisibleIndex; // 0x04(0x04)
	struct TArray<struct FVector> PathPartLocations; // 0x08(0x10)
	struct TArray<struct FRotator> PathPartRotations; // 0x18(0x10)
	struct FVector PathEndLocation; // 0x28(0x0c)
	struct FRotator PathEndRotation; // 0x34(0x0c)
};

// ScriptStruct TheK26.K26Path
// Size: 0x18 (Inherited: 0x00)
struct FK26Path {
	struct AK26PathPart* PathEndArrow; // 0x00(0x08)
	struct TArray<struct AK26PathPart*> PathParts; // 0x08(0x10)
};

// ScriptStruct TheK26.K26SurvivorStatus
// Size: 0x48 (Inherited: 0x00)
struct FK26SurvivorStatus {
	bool IsPowerAttached; // 0x00(0x01)
	bool IsAttachementAuraOn; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LastAttachmentTime; // 0x04(0x04)
	float LastDetachmentTime; // 0x08(0x04)
	float LastRemovalStarted; // 0x0c(0x04)
	float LastRemovalStopped; // 0x10(0x04)
	float LastHitTime; // 0x14(0x04)
	struct AK26AttachedCrow* statusIndicator; // 0x18(0x08)
	struct ACamperPlayer* OwningSurvivor; // 0x20(0x08)
	struct UK26KillerInstinctStatusEffect* K26KillerInstinctStatusEffect; // 0x28(0x08)
	struct TArray<struct AActor*> IdleCrowsBeingTouched; // 0x30(0x10)
	struct FTimerHandle KillerInstinctTimeHandler; // 0x40(0x08)
};

