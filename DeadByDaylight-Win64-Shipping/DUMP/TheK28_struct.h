// Enum TheK28.EK28NightCycleState
enum class EK28NightCycleState : uint8 {
	Charging = 0,
	TransitioningToDischarging = 1,
	Discharging = 2,
	TransitioningToCharging = 3,
	EK28NightCycleState_MAX = 4
};

// Enum TheK28.EK28ExitLockerCameraBehaviour
enum class EK28ExitLockerCameraBehaviour : uint8 {
	None = 0,
	AttachCameraOnKillerEyesJoint = 1,
	SetKillerAsPlayerViewTarget = 2,
	EK28ExitLockerCameraBehaviour_MAX = 3
};

// Enum TheK28.EK28LockbarState
enum class EK28LockbarState : uint8 {
	Unlocked = 0,
	Locked = 1,
	Broken = 2,
	EK28LockbarState_MAX = 3
};

// Enum TheK28.EK28RemnantState
enum class EK28RemnantState : uint8 {
	Inactive = 0,
	Active = 1,
	Deactivating = 2,
	IsKillerTarget = 3,
	EK28RemnantState_MAX = 4
};

// Enum TheK28.EK28TeleportInteractionState
enum class EK28TeleportInteractionState : uint8 {
	Idle = 0,
	ChargingTeleportation = 1,
	ReadyToTeleport = 2,
	Teleporting = 3,
	TeleportationCompleted = 4,
	TeleportationAborted = 5,
	EK28TeleportInteractionState_MAX = 6
};

// ScriptStruct TheK28.PreviousLockerWeightData
// Size: 0x08 (Inherited: 0x00)
struct FPreviousLockerWeightData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TheK28.K28KillerLockerState
// Size: 0x10 (Inherited: 0x00)
struct FK28KillerLockerState {
	struct UK28LockerComponent* _lockerUsedByKiller; // 0x00(0x08)
	bool _isTeleportingToLocker; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TheK28.SurvivorQueryPair
// Size: 0x40 (Inherited: 0x00)
struct FSurvivorQueryPair {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TheK28.K28InteractionPreventingTagsModification
// Size: 0x28 (Inherited: 0x00)
struct FK28InteractionPreventingTagsModification {
	struct UInteractionDefinition* InteractionToAddPreventingTagTo; // 0x00(0x08)
	struct FGameplayTagContainer PreventingTags; // 0x08(0x20)
};

// ScriptStruct TheK28.K28SecondaryCameraMovementData
// Size: 0x50 (Inherited: 0x00)
struct FK28SecondaryCameraMovementData {
	struct FVector InitialActorLocation; // 0x00(0x0c)
	struct FVector TargetActorLocation; // 0x0c(0x0c)
	bool IsPerformingGrabRotation; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRotator InitialCameraRotation; // 0x1c(0x0c)
	struct FRotator TargetCameraRotation; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveFloat* TransitionCurve; // 0x38(0x08)
	float CameraMovementDuration; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TheK28.K28SecondaryCameraFOVData
// Size: 0x20 (Inherited: 0x00)
struct FK28SecondaryCameraFOVData {
	char pad_0[0x8]; // 0x00(0x08)
	float _fovChangeDuration; // 0x08(0x04)
	float _initialFovValue; // 0x0c(0x04)
	float _targetFovValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* _fovCurve; // 0x18(0x08)
};

// ScriptStruct TheK28.K28LockerCluster
// Size: 0x30 (Inherited: 0x00)
struct FK28LockerCluster {
	struct TArray<struct UK28LockerComponent*> _lockersInCluster; // 0x00(0x10)
	struct FVector _centerLocation; // 0x10(0x0c)
	struct FVector _teleportIndicatorLocation; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
};

