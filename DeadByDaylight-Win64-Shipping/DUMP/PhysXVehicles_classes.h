// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2a0 (Inherited: 0x148)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_148[0x8]; // 0x148(0x08)
	char bDeprecatedSpringOffsetMode : 1; // 0x150(0x01)
	char bReverseAsBrake : 1; // 0x150(0x01)
	char bUseRVOAvoidance : 1; // 0x150(0x01)
	char bRawHandbrakeInput : 1; // 0x150(0x01)
	char bRawGearUpInput : 1; // 0x150(0x01)
	char bRawGearDownInput : 1; // 0x150(0x01)
	char pad_150_6 : 2; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	char bWasAvoidanceUpdated : 1; // 0x154(0x01)
	char pad_154_1 : 7; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float Mass; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x160(0x10)
	float DragCoefficient; // 0x170(0x04)
	float ChassisWidth; // 0x174(0x04)
	float ChassisHeight; // 0x178(0x04)
	float DragArea; // 0x17c(0x04)
	float EstimatedMaxEngineSpeed; // 0x180(0x04)
	float MaxEngineRPM; // 0x184(0x04)
	float DebugDragMagnitude; // 0x188(0x04)
	struct FVector InertiaTensorScale; // 0x18c(0x0c)
	float MinNormalizedTireLoad; // 0x198(0x04)
	float MinNormalizedTireLoadFiltered; // 0x19c(0x04)
	float MaxNormalizedTireLoad; // 0x1a0(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x1a4(0x04)
	float ThresholdLongitudinalSpeed; // 0x1a8(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x1ac(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1b8(0x10)
	char pad_1C8[0x18]; // 0x1c8(0x18)
	float RVOAvoidanceRadius; // 0x1e0(0x04)
	float RVOAvoidanceHeight; // 0x1e4(0x04)
	float AvoidanceConsiderationRadius; // 0x1e8(0x04)
	float RVOSteeringStep; // 0x1ec(0x04)
	float RVOThrottleStep; // 0x1f0(0x04)
	int32_t AvoidanceUID; // 0x1f4(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x1f8(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x1fc(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x200(0x04)
	float AvoidanceWeight; // 0x204(0x04)
	struct FVector PendingLaunchVelocity; // 0x208(0x0c)
	struct FReplicatedVehicleState ReplicatedState; // 0x214(0x14)
	char pad_228[0x4]; // 0x228(0x04)
	float RawSteeringInput; // 0x22c(0x04)
	float RawThrottleInput; // 0x230(0x04)
	float RawBrakeInput; // 0x234(0x04)
	float SteeringInput; // 0x238(0x04)
	float ThrottleInput; // 0x23c(0x04)
	float BrakeInput; // 0x240(0x04)
	float HandbrakeInput; // 0x244(0x04)
	float IdleBrakeInput; // 0x248(0x04)
	float StopThreshold; // 0x24c(0x04)
	float WrongDirectionThreshold; // 0x250(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x254(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x25c(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x264(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x26c(0x08)
	char pad_274[0x24]; // 0x274(0x24)
	struct AController* OverrideController; // 0x298(0x08)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31dd0
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31d50
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31c80
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31c00
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31aa0
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4a31a10
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31980
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4a318f0
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31860
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp // (Final|Native|Public|BlueprintCallable) // @ game+0x4a317d0
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31740
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31520
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4a31490
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31400
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31370
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4a31180
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a310f0
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a310c0
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a31000
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a30fd0
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a30fa0
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a30f70
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2a0 (Inherited: 0x2a0)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31b30
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31670
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x4a315a0
};

// Class PhysXVehicles.TireConfig
// Size: 0x58 (Inherited: 0x38)
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0xa60 (Inherited: 0x2c0)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_2C0[0x790]; // 0x2c0(0x790)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa50(0x08)
	char pad_A58[0x8]; // 0xa58(0x08)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x4a31120
};

// Class PhysXVehicles.VehicleWheel
// Size: 0xf8 (Inherited: 0x30)
struct UVehicleWheel : UObject {
	struct UStaticMesh* CollisionMesh; // 0x30(0x08)
	bool bDontCreateShape; // 0x38(0x01)
	bool bAutoAdjustCollisionSize; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector Offset; // 0x3c(0x0c)
	float ShapeRadius; // 0x48(0x04)
	float ShapeWidth; // 0x4c(0x04)
	float Mass; // 0x50(0x04)
	float DampingRate; // 0x54(0x04)
	float SteerAngle; // 0x58(0x04)
	bool bAffectedByHandbrake; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct UTireType* TireType; // 0x60(0x08)
	struct UTireConfig* TireConfig; // 0x68(0x08)
	float LatStiffMaxLoad; // 0x70(0x04)
	float LatStiffValue; // 0x74(0x04)
	float LongStiffValue; // 0x78(0x04)
	float SuspensionForceOffset; // 0x7c(0x04)
	float SuspensionMaxRaise; // 0x80(0x04)
	float SuspensionMaxDrop; // 0x84(0x04)
	float SuspensionNaturalFrequency; // 0x88(0x04)
	float SuspensionDampingRatio; // 0x8c(0x04)
	enum class EWheelSweepType SweepType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float MaxBrakeTorque; // 0x94(0x04)
	float MaxHandBrakeTorque; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xa0(0x08)
	int32_t WheelIndex; // 0xa8(0x04)
	float DebugLongSlip; // 0xac(0x04)
	float DebugLatSlip; // 0xb0(0x04)
	float DebugNormalizedTireLoad; // 0xb4(0x04)
	char pad_B8[0x4]; // 0xb8(0x04)
	float DebugWheelTorque; // 0xbc(0x04)
	float DebugLongForce; // 0xc0(0x04)
	float DebugLatForce; // 0xc4(0x04)
	struct FVector Location; // 0xc8(0x0c)
	struct FVector OldLocation; // 0xd4(0x0c)
	struct FVector Velocity; // 0xe0(0x0c)
	char pad_EC[0xc]; // 0xec(0x0c)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a31150
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a31090
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a31060
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a31030
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x2a8 (Inherited: 0x298)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x298(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x2a0(0x08)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x418 (Inherited: 0x2a0)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x2a0(0xa0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x340(0x1c)
	float AckermannAccuracy; // 0x35c(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x360(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x390(0x88)
};

