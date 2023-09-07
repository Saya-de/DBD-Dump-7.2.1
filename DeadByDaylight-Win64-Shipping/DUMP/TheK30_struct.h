// Enum TheK30.EPowerState
enum class EPowerState : uint8 {
	Ready = 0,
	Charging = 1,
	Snapping = 2,
	DrawPath = 3,
	DrawPathDone = 4,
	OrderStarted = 5,
	PatrolStarted = 6,
	HuntStarted = 7,
	InCooldown = 8,
	EPowerState_MAX = 9
};

// Enum TheK30.EChargeState
enum class EChargeState : uint8 {
	Inactive = 0,
	Charging = 1,
	ChargeCompleted = 2,
	EChargeState_MAX = 3
};

// Enum TheK30.EGuardHuntEndReason
enum class EGuardHuntEndReason : uint8 {
	TimerExpired = 0,
	GuardHitSurvivor = 1,
	SurvivorCapturedFlag = 2,
	UnhookedSurvivor = 3,
	KillerDamagedSurvivor = 4,
	GuardPulledSurvivorOutOfLocker = 5,
	UnexpectedError = 6,
	EGuardHuntEndReason_MAX = 7
};

// ScriptStruct TheK30.TrailData
// Size: 0x30 (Inherited: 0x00)
struct FTrailData {
	struct TArray<struct ATrailNode*> _visualNodes; // 0x00(0x10)
	struct TArray<struct FVector> _navigationWaypoints; // 0x10(0x10)
	struct AActor* _owner; // 0x20(0x08)
	bool _isCompleted; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TheK30.TrailSettings
// Size: 0x68 (Inherited: 0x00)
struct FTrailSettings {
	struct FDBDTunableRowHandle MaximumDistanceBetweenNodes; // 0x00(0x28)
	struct FDBDTunableRowHandle MinimumDistanceBetweenVisualNodes; // 0x28(0x28)
	float CapsuleHalfHeight; // 0x50(0x04)
	float CapsuleRadius; // 0x54(0x04)
	enum class ECollisionChannel CollisionChannel; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct ATrailNode* _trailNodeClass; // 0x60(0x08)
};

