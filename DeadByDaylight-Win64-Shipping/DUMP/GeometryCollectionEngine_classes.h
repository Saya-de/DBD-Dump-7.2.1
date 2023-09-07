// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x440 (Inherited: 0x220)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x218(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x218(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x218(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x21c(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x234(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x24c(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x268(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x2b8(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x308(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x318(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x328(0x10)
	char pad_338_3 : 5; // 0x338(0x01)
	char pad_339[0x107]; // 0x339(0x107)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80fc4b0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80fc3b0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80fc2b0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80fc210
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x80fc180
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80fc050
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x80fbfc0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80fbf20
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x80fbe90
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x80fbe00
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x54d7690
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80fbb10
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x80fb820
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x54d7690
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x240 (Inherited: 0x230)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x230(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x238(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x80fbc80
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x58 (Inherited: 0x30)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x960 (Inherited: 0x4d0)
struct UGeometryCollectionComponent : UMeshComponent {
	char pad_4D0[0x8]; // 0x4d0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x4d8(0x08)
	char pad_4E0[0xe0]; // 0x4e0(0xe0)
	struct UGeometryCollection* RestCollection; // 0x5c0(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x5c8(0x10)
	bool Simulating; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x5e0(0x01)
	bool EnableClustering; // 0x5e1(0x01)
	char pad_5E2[0x2]; // 0x5e2(0x02)
	int32_t ClusterGroupIndex; // 0x5e4(0x04)
	int32_t MaxClusterLevel; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct TArray<float> DamageThreshold; // 0x5f0(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	int32_t CollisionGroup; // 0x604(0x04)
	float CollisionSampleFraction; // 0x608(0x04)
	float LinearEtherDrag; // 0x60c(0x04)
	float AngularEtherDrag; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x618(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	struct FVector InitialLinearVelocity; // 0x624(0x0c)
	struct FVector InitialAngularVelocity; // 0x630(0x0c)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x640(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x648(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x698(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6a8(0x10)
	char pad_6B8[0x18]; // 0x6b8(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x6d0(0x10)
	float DesiredCacheTime; // 0x6e0(0x04)
	bool CachePlayback; // 0x6e4(0x01)
	char pad_6E5[0x3]; // 0x6e5(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x6e8(0x10)
	bool bNotifyBreaks; // 0x6f8(0x01)
	bool bNotifyCollisions; // 0x6f9(0x01)
	bool bEnableReplication; // 0x6fa(0x01)
	bool bEnableAbandonAfterLevel; // 0x6fb(0x01)
	int32_t ReplicationAbandonClusterLevel; // 0x6fc(0x04)
	struct FGeometryCollectionRepData RepData; // 0x700(0x18)
	char pad_718[0x220]; // 0x718(0x220)
	struct UBodySetup* DummyBodySetup; // 0x938(0x08)
	char pad_940[0x20]; // 0x940(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x80fc0f0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|Native|Protected|HasOutParms) // @ game+0x80fbbd0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x80fbb40
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x80fb990
	void ApplyKinematicField(float Radius, struct FVector position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80fb8b0
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x318 (Inherited: 0x230)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x238(0x18)
	bool bDebugDrawWholeCollection; // 0x250(0x01)
	bool bDebugDrawHierarchy; // 0x251(0x01)
	bool bDebugDrawClustering; // 0x252(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x253(0x01)
	bool bShowRigidBodyId; // 0x254(0x01)
	bool bShowRigidBodyCollision; // 0x255(0x01)
	bool bCollisionAtOrigin; // 0x256(0x01)
	bool bShowRigidBodyTransform; // 0x257(0x01)
	bool bShowRigidBodyInertia; // 0x258(0x01)
	bool bShowRigidBodyVelocity; // 0x259(0x01)
	bool bShowRigidBodyForce; // 0x25a(0x01)
	bool bShowRigidBodyInfos; // 0x25b(0x01)
	bool bShowTransformIndex; // 0x25c(0x01)
	bool bShowTransform; // 0x25d(0x01)
	bool bShowParent; // 0x25e(0x01)
	bool bShowLevel; // 0x25f(0x01)
	bool bShowConnectivityEdges; // 0x260(0x01)
	bool bShowGeometryIndex; // 0x261(0x01)
	bool bShowGeometryTransform; // 0x262(0x01)
	bool bShowBoundingBox; // 0x263(0x01)
	bool bShowFaces; // 0x264(0x01)
	bool bShowFaceIndices; // 0x265(0x01)
	bool bShowFaceNormals; // 0x266(0x01)
	bool bShowSingleFace; // 0x267(0x01)
	int32_t SingleFaceIndex; // 0x268(0x04)
	bool bShowVertices; // 0x26c(0x01)
	bool bShowVertexIndices; // 0x26d(0x01)
	bool bShowVertexNormals; // 0x26e(0x01)
	bool bUseActiveVisualization; // 0x26f(0x01)
	float PointThickness; // 0x270(0x04)
	float LineThickness; // 0x274(0x04)
	bool bTextShadow; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float TextScale; // 0x27c(0x04)
	float NormalScale; // 0x280(0x04)
	float AxisScale; // 0x284(0x04)
	float ArrowScale; // 0x288(0x04)
	struct FColor RigidBodyIdColor; // 0x28c(0x04)
	float RigidBodyTransformScale; // 0x290(0x04)
	struct FColor RigidBodyCollisionColor; // 0x294(0x04)
	struct FColor RigidBodyInertiaColor; // 0x298(0x04)
	struct FColor RigidBodyVelocityColor; // 0x29c(0x04)
	struct FColor RigidBodyForceColor; // 0x2a0(0x04)
	struct FColor RigidBodyInfoColor; // 0x2a4(0x04)
	struct FColor TransformIndexColor; // 0x2a8(0x04)
	float TransformScale; // 0x2ac(0x04)
	struct FColor LevelColor; // 0x2b0(0x04)
	struct FColor ParentColor; // 0x2b4(0x04)
	float ConnectivityEdgeThickness; // 0x2b8(0x04)
	struct FColor GeometryIndexColor; // 0x2bc(0x04)
	float GeometryTransformScale; // 0x2c0(0x04)
	struct FColor BoundingBoxColor; // 0x2c4(0x04)
	struct FColor FaceColor; // 0x2c8(0x04)
	struct FColor FaceIndexColor; // 0x2cc(0x04)
	struct FColor FaceNormalColor; // 0x2d0(0x04)
	struct FColor SingleFaceColor; // 0x2d4(0x04)
	struct FColor VertexColor; // 0x2d8(0x04)
	struct FColor VertexIndexColor; // 0x2dc(0x04)
	struct FColor VertexNormalColor; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x2e8(0x08)
	char pad_2F0[0x28]; // 0x2f0(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x110 (Inherited: 0x30)
struct UGeometryCollection : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	bool EnableClustering; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t ClusterGroupIndex; // 0x3c(0x04)
	int32_t MaxClusterLevel; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<float> DamageThreshold; // 0x48(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FGeometryCollectionSource> GeometrySource; // 0x60(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x80(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t MinLevelSetResolution; // 0x84(0x04)
	int32_t MaxLevelSetResolution; // 0x88(0x04)
	int32_t MinClusterLevelSetResolution; // 0x8c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x90(0x04)
	float CollisionObjectReductionPercentage; // 0x94(0x04)
	bool bMassAsDensity; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float Mass; // 0x9c(0x04)
	float MinimumMassClamp; // 0xa0(0x04)
	float CollisionParticlesFraction; // 0xa4(0x04)
	int32_t MaximumCollisionParticles; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0xb0(0x10)
	bool EnableRemovePiecesOnFracture; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0xc8(0x10)
	struct FGuid PersistentGuid; // 0xd8(0x10)
	struct FGuid StateGuid; // 0xe8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xf8(0x04)
	char pad_FC[0x14]; // 0xfc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2d0 (Inherited: 0x230)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x230(0x08)
	struct UMaterial* RayMarchMaterial; // 0x238(0x08)
	float SurfaceTolerance; // 0x240(0x04)
	float Isovalue; // 0x244(0x04)
	bool Enabled; // 0x248(0x01)
	bool RenderVolumeBoundingBox; // 0x249(0x01)
	char pad_24A[0x86]; // 0x24a(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x140 (Inherited: 0xb8)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xc0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xc8(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	bool bSimulating; // 0xd8(0x01)
	bool bNotifyCollisions; // 0xd9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	float Density; // 0xdc(0x04)
	float MinMass; // 0xe0(0x04)
	float MaxMass; // 0xe4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0xec(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0xf0(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0xf4(0x04)
	int32_t MinLevelSetResolution; // 0xf8(0x04)
	int32_t MaxLevelSetResolution; // 0xfc(0x04)
	int32_t CollisionGroup; // 0x100(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector InitialLinearVelocity; // 0x108(0x0c)
	struct FVector InitialAngularVelocity; // 0x114(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x140 (Inherited: 0xb8)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	bool Simulating; // 0xc0(0x01)
	bool bNotifyCollisions; // 0xc1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	float Mass; // 0xc4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xc8(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	int32_t MinLevelSetResolution; // 0xcc(0x04)
	int32_t MaxLevelSetResolution; // 0xd0(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FVector InitialLinearVelocity; // 0xd8(0x0c)
	struct FVector InitialAngularVelocity; // 0xe4(0x0c)
	float DamageThreshold; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x100(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x108(0x10)
	char pad_118[0x10]; // 0x118(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x80fbaf0
};

