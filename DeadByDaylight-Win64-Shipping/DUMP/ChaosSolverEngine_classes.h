// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x278 (Inherited: 0xc0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_C0[0x110]; // 0xc0(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1d0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x220(0x50)
	char pad_270[0x8]; // 0x270(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x30 (Inherited: 0x30)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x80d4d00
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x328 (Inherited: 0x230)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x230(0x68)
	float TimeStepMultiplier; // 0x298(0x04)
	int32_t CollisionIterations; // 0x29c(0x04)
	int32_t PushOutIterations; // 0x2a0(0x04)
	int32_t PushOutPairIterations; // 0x2a4(0x04)
	float ClusterConnectionFactor; // 0x2a8(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2ac(0x01)
	bool DoGenerateCollisionData; // 0x2ad(0x01)
	char pad_2AE[0x2]; // 0x2ae(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2b0(0x10)
	bool DoGenerateBreakingData; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2c4(0x10)
	bool DoGenerateTrailingData; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2d8(0x10)
	float MassScale; // 0x2e8(0x04)
	bool bGenerateContactGraph; // 0x2ec(0x01)
	bool bHasFloor; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
	float FloorHeight; // 0x2f0(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2f4(0x03)
	char pad_2F7[0x1]; // 0x2f7(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x2f8(0x08)
	char pad_300[0x18]; // 0x300(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x54919f0
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x80d4df0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x70 (Inherited: 0x48)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_48[0x8]; // 0x48(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x50(0x20)
};

