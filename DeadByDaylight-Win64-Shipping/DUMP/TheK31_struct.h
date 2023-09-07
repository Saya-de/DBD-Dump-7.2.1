// Enum TheK31.EK31DroneStateID
enum class EK31DroneStateID : uint8 {
	NONE = 0,
	IN_STASH = 1,
	BEING_DEPLOYED = 2,
	INITIALIZING = 3,
	SCOUTING = 4,
	ACTIVE = 5,
	BEING_HACKED = 6,
	DESTROYED = 7,
	RECALLING = 8,
	EK31DroneStateID_MAX = 9
};

// Enum TheK31.EK31DroneMovementMode
enum class EK31DroneMovementMode : uint8 {
	NORMAL = 0,
	DEPLOY = 1,
	SNAPPING = 2,
	EK31DroneMovementMode_MAX = 3
};

// Enum TheK31.EDroneFlyingHeight
enum class EDroneFlyingHeight : uint8 {
	Low = 0,
	High = 1,
	EDroneFlyingHeight_MAX = 2
};

// Enum TheK31.EK31DroneActionResponse
enum class EK31DroneActionResponse : uint8 {
	AUTHORIZED = 0,
	DENIED = 1,
	EK31DroneActionResponse_MAX = 2
};

// Enum TheK31.EK31PowerState
enum class EK31PowerState : uint8 {
	Deployment = 0,
	Inspection = 1,
	EK31PowerState_MAX = 2
};

// ScriptStruct TheK31.K31DroneTimestampedState
// Size: 0x18 (Inherited: 0x00)
struct FK31DroneTimestampedState {
	struct UK31DroneState* State; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TheK31.DroneDeployDatum
// Size: 0x30 (Inherited: 0x00)
struct FDroneDeployDatum {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	int32_t DeployCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct ACharacter* DeployingCharacter; // 0x20(0x08)
	bool HasReachedDeployLocation; // 0x28(0x01)
	bool IsDeployed; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TheK31.DroneRepMovement
// Size: 0x38 (Inherited: 0x00)
struct FDroneRepMovement {
	bool IsRotating; // 0x00(0x01)
	bool HasReachTarget; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	enum class EDroneFlyingHeight FlyingHeight; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct AActor* InteractingActor; // 0x20(0x08)
	struct FName InteractingActorAttachSocket; // 0x28(0x0c)
	float SnapTime; // 0x34(0x04)
};

// ScriptStruct TheK31.ActiveZoneOverlapTracker
// Size: 0x18 (Inherited: 0x00)
struct FActiveZoneOverlapTracker {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheK31.K31DroneActionResponse
// Size: 0x20 (Inherited: 0x00)
struct FK31DroneActionResponse {
	struct FK31DroneActionRequest Request; // 0x00(0x18)
	float Timestamp; // 0x18(0x04)
	enum class EK31DroneActionResponse Response; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TheK31.K31DroneActionRequest
// Size: 0x18 (Inherited: 0x00)
struct FK31DroneActionRequest {
	struct UK31DroneBaseAction* Action; // 0x00(0x08)
	struct AK31Drone* Drone; // 0x08(0x08)
	struct FActionPredictionKey PredictionKey; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TheK31.DroneMovementRotationActivationDatum
// Size: 0x10 (Inherited: 0x00)
struct FDroneMovementRotationActivationDatum {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TheK31.SurvivorDroneInterpState
// Size: 0x18 (Inherited: 0x00)
struct FSurvivorDroneInterpState {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheK31.SurvivorDroneFrameDatum
// Size: 0x14 (Inherited: 0x00)
struct FSurvivorDroneFrameDatum {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TheK31.K31SurvivorTraceInformationThisFrame
// Size: 0x0c (Inherited: 0x00)
struct FK31SurvivorTraceInformationThisFrame {
	int32_t TotalTraces; // 0x00(0x04)
	int32_t CompletedTraces; // 0x04(0x04)
	int32_t CompletedTracesWithLoS; // 0x08(0x04)
};

// ScriptStruct TheK31.K31DroneScoutDetectionSphereRaycastStruct
// Size: 0x08 (Inherited: 0x00)
struct FK31DroneScoutDetectionSphereRaycastStruct {
	float BottomToTopPercent; // 0x00(0x04)
	float CapsuleRadiusPercent; // 0x04(0x04)
};

// ScriptStruct TheK31.K31PlayerDroneZoneStruct
// Size: 0x18 (Inherited: 0x00)
struct FK31PlayerDroneZoneStruct {
	int32_t DistanceToDroneXY; // 0x00(0x04)
	int32_t DistanceToDroneZ; // 0x04(0x04)
	bool IsPlayerInZone; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UK31PlayerZoneStatus* PlayerZoneStatus; // 0x10(0x08)
};

// ScriptStruct TheK31.K31DroneZoneOverlapDatum
// Size: 0x18 (Inherited: 0x00)
struct FK31DroneZoneOverlapDatum {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheK31.ClawTrapUntrapDatum
// Size: 0x08 (Inherited: 0x00)
struct FClawTrapUntrapDatum {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TheK31.SurvivorWeakPointScoreDatum
// Size: 0x0c (Inherited: 0x00)
struct FSurvivorWeakPointScoreDatum {
	char pad_0[0xc]; // 0x00(0x0c)
};

