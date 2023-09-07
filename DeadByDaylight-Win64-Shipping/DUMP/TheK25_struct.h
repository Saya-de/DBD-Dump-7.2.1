// Enum TheK25.EK25ChainCreationStrategy
enum class EK25ChainCreationStrategy : uint8 {
	Spline = 0,
	PassedPoints = 1,
	EK25ChainCreationStrategy_MAX = 2
};

// Enum TheK25.EK25ChainState
enum class EK25ChainState : uint8 {
	InPool = 0,
	AttachedToProjectile = 1,
	AttachedToSurvivorAnchorPoint = 2,
	ReelingBack = 3,
	ReachingSurvivorAnchorPoint = 4,
	EK25ChainState_MAX = 5
};

// Enum TheK25.EChainStrikeEndReason
enum class EChainStrikeEndReason : uint8 {
	None = 0,
	AbortedGatewayPlacementState = 1,
	AbortedGatewayPlacementBecauseOfInvalidPlacementState = 2,
	AbortedGatewayPossession = 3,
	ControlledProjectileStopped = 4,
	EChainStrikeEndReason_MAX = 5
};

// Enum TheK25.EChainStrikeCameraViewTarget
enum class EChainStrikeCameraViewTarget : uint8 {
	Killer = 0,
	Gateway = 1,
	ControlledProjectile = 2,
	EChainStrikeCameraViewTarget_MAX = 3
};

// Enum TheK25.EK25TeleportLocationStatus
enum class EK25TeleportLocationStatus : uint8 {
	Invalid = 0,
	PassableLocation = 1,
	PerfectLocation = 2,
	EK25TeleportLocationStatus_MAX = 3
};

// Enum TheK25.EK25ProjectileDeactivateReason
enum class EK25ProjectileDeactivateReason : uint8 {
	None = 0,
	WorldCollisionHit = 1,
	CharacterHit = 2,
	OutOfBounds = 3,
	MaximumRangeReached = 4,
	ChainStrikeInteractionEnded = 5,
	EK25ProjectileDeactivateReason_MAX = 6
};

// Enum TheK25.EK25ChainDetachmentReason
enum class EK25ChainDetachmentReason : uint8 {
	CollisionOrMaxLengthReached = 0,
	KillerAttack = 1,
	RemovedByInteraction = 2,
	MaxNumberChainsReached = 3,
	ForcedRemoved = 4,
	SurvivorKO = 5,
	EndGameCollapseOver = 6,
	SurvivorLeftTheMatch = 7,
	EK25ChainDetachmentReason_MAX = 8
};

// Enum TheK25.EK25ChainAttachmentLimbType
enum class EK25ChainAttachmentLimbType : uint8 {
	Hand = 0,
	Shoulder = 1,
	Stomach = 2,
	Back = 3,
	EK25ChainAttachmentLimbType_MAX = 4
};

// Enum TheK25.EK25ChainAnchorPointDirection
enum class EK25ChainAnchorPointDirection : uint8 {
	Front = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	EK25ChainAnchorPointDirection_MAX = 4
};

// Enum TheK25.ELamentConfigurationDropReason
enum class ELamentConfigurationDropReason : uint8 {
	SurvivorSolved = 0,
	SurvivorIsNoLongerHostage = 1,
	SurvivorDowned = 2,
	KillerCollect = 3,
	Other = 4,
	ELamentConfigurationDropReason_MAX = 5
};

// Enum TheK25.ELamentConfigurationState
enum class ELamentConfigurationState : uint8 {
	SurvivorEscapedWithLamentConfiguration = 0,
	WaitingToSpawn = 1,
	Spawned = 2,
	IsBeingPickedUp = 3,
	CarriedBySurvivor = 4,
	HoldingSurvivorHostage = 5,
	ELamentConfigurationState_MAX = 6
};

// Enum TheK25.EChainHuntState
enum class EChainHuntState : uint8 {
	Inactive = 0,
	Charging = 1,
	Active = 2,
	EChainHuntState_MAX = 3
};

// ScriptStruct TheK25.K25ChainAnchorAnimationData
// Size: 0x18 (Inherited: 0x00)
struct FK25ChainAnchorAnimationData {
	float ChainPullAngle; // 0x00(0x04)
	float ChainWeight; // 0x04(0x04)
	float ChainHeight; // 0x08(0x04)
	bool HasChainAttached; // 0x0c(0x01)
	bool IsChainBeingRemoved; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TWeakObjectPtr<struct AK25Chain> AttachedChain; // 0x10(0x08)
};

// ScriptStruct TheK25.K25SurvivorTeleportationData
// Size: 0x18 (Inherited: 0x00)
struct FK25SurvivorTeleportationData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheK25.DBDPlayerTotemPair
// Size: 0x10 (Inherited: 0x00)
struct FDBDPlayerTotemPair {
	struct ADBDPlayer* Player; // 0x00(0x08)
	struct ATotem* Totem; // 0x08(0x08)
};

// ScriptStruct TheK25.K25ProjectileDeactivationData
// Size: 0x20 (Inherited: 0x00)
struct FK25ProjectileDeactivationData {
	enum class EK25ProjectileDeactivateReason DeactivationReason; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName PhysicalSurfaceName; // 0x04(0x0c)
	bool ShouldReelBackProjectile; // 0x10(0x01)
	bool HasAppliedDamage; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct ACamperPlayer* _survivorHit; // 0x18(0x08)
};

// ScriptStruct TheK25.K25ChainTraceData
// Size: 0x18 (Inherited: 0x00)
struct FK25ChainTraceData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheK25.K25SurvivorChainAttachmentData
// Size: 0x28 (Inherited: 0x00)
struct FK25SurvivorChainAttachmentData {
	struct FName AnchorName; // 0x00(0x0c)
	enum class EK25ChainAnchorPointDirection Direction; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector RelativeLocation; // 0x10(0x0c)
	bool IsFlexibleLimb; // 0x1c(0x01)
	enum class EK25ChainAttachmentLimbType LimbType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct ACamperPlayer* _attachedSurvivor; // 0x20(0x08)
};

// ScriptStruct TheK25.LamentConfigurationPlayerPossessionData
// Size: 0x18 (Inherited: 0x00)
struct FLamentConfigurationPlayerPossessionData {
	float PickUpElapsedMatchTime; // 0x00(0x04)
	float DropElapsedMatchTime; // 0x04(0x04)
	struct FString Outcome; // 0x08(0x10)
};

// ScriptStruct TheK25.LamentConfigurationPlayerPossessionAnalytics
// Size: 0xd0 (Inherited: 0xa8)
struct FLamentConfigurationPlayerPossessionAnalytics : FUniquelyIdentifiedAnalytic {
	struct FString MatchID; // 0xa8(0x10)
	float PickUpElapsedMatchTime; // 0xb8(0x04)
	float DropElapsedMatchTime; // 0xbc(0x04)
	struct FString Outcome; // 0xc0(0x10)
};

// ScriptStruct TheK25.ChainHuntStateData
// Size: 0x10 (Inherited: 0x00)
struct FChainHuntStateData {
	float CompletionPercentage; // 0x00(0x04)
	enum class EChainHuntState ChainHuntState; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
};

// ScriptStruct TheK25.LamentConfigurationSpawnInfo
// Size: 0x10 (Inherited: 0x00)
struct FLamentConfigurationSpawnInfo {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector _worldLocation; // 0x04(0x0c)
};

