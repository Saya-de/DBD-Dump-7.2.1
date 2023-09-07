// Enum TheK32.EK32ItemBoxState
enum class EK32ItemBoxState : uint8 {
	Available = 0,
	InProgress = 1,
	Inactive = 2,
	EK32ItemBoxState_MAX = 3
};

// Enum TheK32.EK32KillerPodSpawningResult
enum class EK32KillerPodSpawningResult : uint8 {
	NoResult = 0,
	NoSurface = 1,
	InvalidSurface = 2,
	SpawnKillerPod = 3,
	DestroyKillerPod = 4,
	TeleportToSurvivor = 5,
	EK32KillerPodSpawningResult_MAX = 6
};

// Enum TheK32.ELockOnState
enum class ELockOnState : uint8 {
	NoTarget = 0,
	TargetFound = 1,
	Lingering = 2,
	Cooldown = 3,
	LockedOut = 4,
	ELockOnState_MAX = 5
};

// Enum TheK32.EPodVisionTransferDestination
enum class EPodVisionTransferDestination : uint8 {
	Previous = 0,
	Target = 1,
	EPodVisionTransferDestination_MAX = 2
};

// ScriptStruct TheK32.K32BaseProjectilePayload
// Size: 0x80 (Inherited: 0x00)
struct FK32BaseProjectilePayload {
	struct FVector StartLocationWorldSpace; // 0x00(0x0c)
	bool IsMovingToActor; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector WorldPositionTarget; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* TargetActor; // 0x20(0x08)
	struct FName TargetSocket; // 0x28(0x0c)
	char pad_34[0x4c]; // 0x34(0x4c)
};

// ScriptStruct TheK32.K32KillerPodSpawnData
// Size: 0x54 (Inherited: 0x00)
struct FK32KillerPodSpawnData {
	struct FK32KillerPodSpawningInputData InputData; // 0x00(0x24)
	struct FVector CollisionPoint; // 0x24(0x0c)
	struct FVector SpawnLocation; // 0x30(0x0c)
	struct FRotator SpawnForwardRotation; // 0x3c(0x0c)
	struct FVector SurfaceNormal; // 0x48(0x0c)
};

// ScriptStruct TheK32.K32KillerPodSpawningInputData
// Size: 0x24 (Inherited: 0x00)
struct FK32KillerPodSpawningInputData {
	struct FVector KillerLocation; // 0x00(0x0c)
	struct FVector IndicatorLocation; // 0x0c(0x0c)
	struct FVector CameraDirection; // 0x18(0x0c)
};

// ScriptStruct TheK32.K32KillerPodSettings
// Size: 0x58 (Inherited: 0x00)
struct FK32KillerPodSettings {
	struct FVector CollisionPoint; // 0x00(0x0c)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnForwardRotation; // 0x18(0x0c)
	struct FRotator LastForwardRotation; // 0x24(0x0c)
	bool IsVisible; // 0x30(0x01)
	bool IsDisabled; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	bool IsControlledByKiller; // 0x38(0x01)
	bool IsLastControlledKillerPod; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector SurfaceNormal; // 0x3c(0x0c)
	struct TArray<struct FVector> AttachmentPoints; // 0x48(0x10)
};

// ScriptStruct TheK32.K32KillerPodSpawningData
// Size: 0x40 (Inherited: 0x00)
struct FK32KillerPodSpawningData {
	struct FVector CollisionPoint; // 0x00(0x0c)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnForwardRotation; // 0x18(0x0c)
	struct FVector SurfaceNormal; // 0x24(0x0c)
	struct AK32KillerPod* PodToDestroy; // 0x30(0x08)
	struct ACamperPlayer* TargetSurvivor; // 0x38(0x08)
};

// ScriptStruct TheK32.K32KillerPodSpawningIndicatorSettings
// Size: 0x1c (Inherited: 0x00)
struct FK32KillerPodSpawningIndicatorSettings {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator SpawnForwardRotation; // 0x0c(0x0c)
	bool IsVisible; // 0x18(0x01)
	bool IsInValidLocationForKillerPod; // 0x19(0x01)
	bool IsDestroyingPod; // 0x1a(0x01)
	bool IsTeleportingToSurvivor; // 0x1b(0x01)
};

// ScriptStruct TheK32.K32KillerPodTargetIndicatorSettings
// Size: 0x1c (Inherited: 0x00)
struct FK32KillerPodTargetIndicatorSettings {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator SpawnForwardRotation; // 0x0c(0x0c)
	bool IsVisible; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct TheK32.K32SurvivorStatus
// Size: 0x78 (Inherited: 0x00)
struct FK32SurvivorStatus {
	struct ACamperPlayer* OwningSurvivor; // 0x00(0x08)
	bool IsAssimilated; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FVector> RecentLocations; // 0x10(0x10)
	struct TMap<struct ACamperPlayer*, float> Authority_CrossAssimilationStartedTime; // 0x20(0x50)
	bool Authority_IsBeingCrossAssimilated; // 0x70(0x01)
	bool Authority_CanBeAffectedByPower; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float Authority_LastTimeCanBeAffectedByPowerEnabled; // 0x74(0x04)
};

