// Enum TheK29.EK29SurvivorInteractionBlockReason
enum class EK29SurvivorInteractionBlockReason : uint8 {
	BeingRushed = 0,
	BeingThrown = 1,
	BeingSmashed = 2,
	EK29SurvivorInteractionBlockReason_MAX = 3
};

// Enum TheK29.EK29RushPhase
enum class EK29RushPhase : uint8 {
	EndingInteraction = 0,
	Charging = 1,
	Rushing = 2,
	Bouncing = 3,
	BetweenRushes = 4,
	IntoGrabbingSurvivor = 5,
	GrabbingSurvivor = 6,
	SmashSurvivor = 7,
	EK29RushPhase_MAX = 8
};

// ScriptStruct TheK29.K29FloorDetectionResult
// Size: 0x02 (Inherited: 0x00)
struct FK29FloorDetectionResult {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct TheK29.K29GuidedMovementInstance
// Size: 0x50 (Inherited: 0x00)
struct FK29GuidedMovementInstance {
	float MovementDuration; // 0x00(0x04)
	struct FVector StartingPosition; // 0x04(0x0c)
	struct FVector EndingPosition; // 0x10(0x0c)
	struct FVector ForwardDirection; // 0x1c(0x0c)
	struct FVector XYForwardDirection; // 0x28(0x0c)
	bool EndInImpact; // 0x34(0x01)
	bool EndAtLedge; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float StartingTime; // 0x38(0x04)
	float EndingTime; // 0x3c(0x04)
	struct TArray<struct FVector> MovementCurve; // 0x40(0x10)
};

// ScriptStruct TheK29.K29GuidedMovementSettings
// Size: 0x50 (Inherited: 0x00)
struct FK29GuidedMovementSettings {
	struct ADBDPlayer* MovingActor; // 0x00(0x08)
	struct FVector StartPosition; // 0x08(0x0c)
	struct FVector ForwardDirection; // 0x14(0x0c)
	float CapsuleHeight; // 0x20(0x04)
	float CapsuleCenterHeightOffset; // 0x24(0x04)
	float CapsuleRadius; // 0x28(0x04)
	float MinimumRequiredDistance; // 0x2c(0x04)
	float MaximumDuration; // 0x30(0x04)
	float MovementSpeedInCmPerSecond; // 0x34(0x04)
	bool IsCarryingSurvivor; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct AActor*> IgnoredActors; // 0x40(0x10)
};

// ScriptStruct TheK29.K29SurvivorStatus
// Size: 0x60 (Inherited: 0x00)
struct FK29SurvivorStatus {
	bool IsGrabbedByPower; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastTimeGrabbedByPower; // 0x04(0x04)
	struct ACamperPlayer* OwningSurvivor; // 0x08(0x08)
	int32_t InfectionLevel; // 0x10(0x04)
	int32_t TimesCuredByHeal; // 0x14(0x04)
	bool IsInfected; // 0x18(0x01)
	bool IsInfectionActive; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct UChargeableInteractionDefinition* UseInfectionRemoverInteractionSelf; // 0x20(0x08)
	struct UChargeableInteractionDefinition* UseInfectionRemoverInteractionOther; // 0x28(0x08)
	struct UChargeableComponent* UseInfectionRemoverChargeable; // 0x30(0x08)
	bool AreInfectionRemoverInteractionsInitialized; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UK29SurvivorCarriableComponent* CarriableComponent; // 0x40(0x08)
	struct UK29SurvivorThrowableComponent* ThrowableComponent; // 0x48(0x08)
	struct TArray<enum class EK29SurvivorInteractionBlockReason> InteractionBlockReasons; // 0x50(0x10)
};

// ScriptStruct TheK29.K29RushMovementSpeedSetting
// Size: 0x110 (Inherited: 0x00)
struct FK29RushMovementSpeedSetting {
	bool InUse; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* SpeedCurve; // 0x08(0x08)
	struct FDBDTunableRowHandle PitchTurnRateMultiplier; // 0x10(0x28)
	struct FDBDTunableRowHandle YawTurnRateLimit; // 0x38(0x28)
	struct FDBDTunableRowHandle YawTurnRateMultiplier; // 0x60(0x28)
	struct FTunableStat Duration; // 0x88(0x80)
	bool IsMovementAllowed; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

