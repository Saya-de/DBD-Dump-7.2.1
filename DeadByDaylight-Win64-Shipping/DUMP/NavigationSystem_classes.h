// Class NavigationSystem.NavRelevantComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UNavRelevantComponent : UActorComponent {
	char pad_B8[0x24]; // 0xb8(0x24)
	char bAttachToOwnersRoot : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UObject* CachedNavParent; // 0xe0(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x80d0fc0
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x198 (Inherited: 0xe8)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	uint32_t NavLinkUserId; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UNavArea* EnabledAreaClass; // 0xf8(0x08)
	struct UNavArea* DisabledAreaClass; // 0x100(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x108(0x04)
	struct FVector LinkRelativeStart; // 0x10c(0x0c)
	struct FVector LinkRelativeEnd; // 0x118(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	char bLinkEnabled : 1; // 0x128(0x01)
	char bNotifyWhenEnabled : 1; // 0x128(0x01)
	char bNotifyWhenDisabled : 1; // 0x128(0x01)
	char bCreateBoxObstacle : 1; // 0x128(0x01)
	char pad_128_4 : 4; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector ObstacleOffset; // 0x12c(0x0c)
	struct FVector ObstacleExtent; // 0x138(0x0c)
	char pad_144[0x4]; // 0x144(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x148(0x08)
	float BroadcastRadius; // 0x150(0x04)
	float BroadcastInterval; // 0x154(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x158(0x01)
	char pad_159[0x3f]; // 0x159(0x3f)
};

// Class NavigationSystem.NavArea
// Size: 0x50 (Inherited: 0x38)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x38(0x04)
	float FixedAreaEnteringCost; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x44(0x04)
	char bSupportsAgent0 : 1; // 0x48(0x01)
	char bSupportsAgent1 : 1; // 0x48(0x01)
	char bSupportsAgent2 : 1; // 0x48(0x01)
	char bSupportsAgent3 : 1; // 0x48(0x01)
	char bSupportsAgent4 : 1; // 0x48(0x01)
	char bSupportsAgent5 : 1; // 0x48(0x01)
	char bSupportsAgent6 : 1; // 0x48(0x01)
	char bSupportsAgent7 : 1; // 0x48(0x01)
	char bSupportsAgent8 : 1; // 0x49(0x01)
	char bSupportsAgent9 : 1; // 0x49(0x01)
	char bSupportsAgent10 : 1; // 0x49(0x01)
	char bSupportsAgent11 : 1; // 0x49(0x01)
	char bSupportsAgent12 : 1; // 0x49(0x01)
	char bSupportsAgent13 : 1; // 0x49(0x01)
	char bSupportsAgent14 : 1; // 0x49(0x01)
	char bSupportsAgent15 : 1; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x50 (Inherited: 0x30)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x30(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x40(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x150 (Inherited: 0xe8)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0xe8(0x08)
	struct FVector FailsafeExtent; // 0xf0(0x0c)
	char bIncludeAgentHeight : 1; // 0xfc(0x01)
	char pad_FC_1 : 7; // 0xfc(0x01)
	char pad_FD[0x53]; // 0xfd(0x53)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x80d0f30
};

// Class NavigationSystem.NavigationData
// Size: 0x450 (Inherited: 0x230)
struct ANavigationData : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x238(0x08)
	struct FNavDataConfig NavDataConfig; // 0x240(0x90)
	char bEnableDrawing : 1; // 0x2d0(0x01)
	char bForceRebuildOnLoad : 1; // 0x2d0(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x2d0(0x01)
	char bCanBeMainNavData : 1; // 0x2d0(0x01)
	char bCanSpawnOnRebuild : 1; // 0x2d0(0x01)
	char bRebuildAtRuntime : 1; // 0x2d0(0x01)
	char pad_2D0_6 : 2; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	float ObservedPathsTickInterval; // 0x2d8(0x04)
	uint32_t DataVersion; // 0x2dc(0x04)
	char pad_2E0[0x108]; // 0x2e0(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x3e8(0x10)
	char pad_3F8[0x58]; // 0x3f8(0x58)
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x500 (Inherited: 0x450)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x450(0x01)
	char bDrawPolyEdges : 1; // 0x450(0x01)
	char bDrawFilledPolys : 1; // 0x450(0x01)
	char bDrawNavMeshEdges : 1; // 0x450(0x01)
	char bDrawTileBounds : 1; // 0x450(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x450(0x01)
	char bDrawTileLabels : 1; // 0x450(0x01)
	char bDrawPolygonLabels : 1; // 0x450(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x451(0x01)
	char bDrawPolygonFlags : 1; // 0x451(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x451(0x01)
	char bDrawNavLinks : 1; // 0x451(0x01)
	char bDrawFailedNavLinks : 1; // 0x451(0x01)
	char bDrawClusters : 1; // 0x451(0x01)
	char bDrawOctree : 1; // 0x451(0x01)
	char bDrawOctreeDetails : 1; // 0x451(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x452(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x452(0x01)
	char pad_452_2 : 6; // 0x452(0x01)
	char pad_453[0x1]; // 0x453(0x01)
	float DrawOffset; // 0x454(0x04)
	char bFixedTilePoolSize : 1; // 0x458(0x01)
	char pad_458_1 : 7; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	int32_t TilePoolSize; // 0x45c(0x04)
	float TileSizeUU; // 0x460(0x04)
	float CellSize; // 0x464(0x04)
	float CellHeight; // 0x468(0x04)
	float AgentRadius; // 0x46c(0x04)
	float AgentHeight; // 0x470(0x04)
	float AgentMaxSlope; // 0x474(0x04)
	float AgentMaxStepHeight; // 0x478(0x04)
	float MinRegionArea; // 0x47c(0x04)
	float MergeRegionSize; // 0x480(0x04)
	float MaxSimplificationError; // 0x484(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x488(0x04)
	int32_t TileNumberHardLimit; // 0x48c(0x04)
	int32_t PolyRefTileBits; // 0x490(0x04)
	int32_t PolyRefNavPolyBits; // 0x494(0x04)
	int32_t PolyRefSaltBits; // 0x498(0x04)
	struct FVector NavMeshOriginOffset; // 0x49c(0x0c)
	float DefaultDrawDistance; // 0x4a8(0x04)
	float DefaultMaxSearchNodes; // 0x4ac(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x4b0(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x4b4(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x4b5(0x01)
	char pad_4B6[0x2]; // 0x4b6(0x02)
	int32_t RegionChunkSplits; // 0x4b8(0x04)
	int32_t LayerChunkSplits; // 0x4bc(0x04)
	char bSortNavigationAreasByCost : 1; // 0x4c0(0x01)
	char bPerformVoxelFiltering : 1; // 0x4c0(0x01)
	char bMarkLowHeightAreas : 1; // 0x4c0(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x4c0(0x01)
	char bFilterLowSpanSequences : 1; // 0x4c0(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x4c0(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x4c0(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x4c0(0x01)
	char bStoreEmptyTileLayers : 1; // 0x4c1(0x01)
	char bUseVirtualFilters : 1; // 0x4c1(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x4c1(0x01)
	char bUseVoxelCache : 1; // 0x4c1(0x01)
	char pad_4C1_4 : 4; // 0x4c1(0x01)
	char pad_4C2[0x2]; // 0x4c2(0x02)
	float TileSetUpdateInterval; // 0x4c4(0x04)
	float HeuristicScale; // 0x4c8(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x4cc(0x04)
	char pad_4D0[0x30]; // 0x4d0(0x30)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80d0d00
};

// Class NavigationSystem.AbstractNavData
// Size: 0x450 (Inherited: 0x450)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x30 (Inherited: 0x30)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea_Default
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x50 (Inherited: 0x50)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xd0 (Inherited: 0x50)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x50(0x08)
	struct UNavArea* Agent1Area; // 0x58(0x08)
	struct UNavArea* Agent2Area; // 0x60(0x08)
	struct UNavArea* Agent3Area; // 0x68(0x08)
	struct UNavArea* Agent4Area; // 0x70(0x08)
	struct UNavArea* Agent5Area; // 0x78(0x08)
	struct UNavArea* Agent6Area; // 0x80(0x08)
	struct UNavArea* Agent7Area; // 0x88(0x08)
	struct UNavArea* Agent8Area; // 0x90(0x08)
	struct UNavArea* Agent9Area; // 0x98(0x08)
	struct UNavArea* Agent10Area; // 0xa0(0x08)
	struct UNavArea* Agent11Area; // 0xa8(0x08)
	struct UNavArea* Agent12Area; // 0xb0(0x08)
	struct UNavArea* Agent13Area; // 0xb8(0x08)
	struct UNavArea* Agent14Area; // 0xc0(0x08)
	struct UNavArea* Agent15Area; // 0xc8(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xe0 (Inherited: 0x78)
struct UNavCollision : UNavCollisionBase {
	char pad_78[0x10]; // 0x78(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x88(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x98(0x10)
	struct UNavArea* AreaClass; // 0xa8(0x08)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char bCreateOnClient : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x2f]; // 0xb1(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x450 (Inherited: 0x450)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x230 (Inherited: 0x230)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x240 (Inherited: 0x220)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x218(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x230(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x238(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb8(0x04)
	float TileRemovalRadius; // 0xbc(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x90 (Inherited: 0x30)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x3f]; // 0x51(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80cdf90
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3eb2f20
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80cdf60
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80cd820
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80cd5c0
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80cd4b0
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x80cd050
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80ccf70
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x30 (Inherited: 0x30)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x1608 (Inherited: 0x30)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x30(0x08)
	struct ANavigationData* AbstractNavData; // 0x38(0x08)
	struct FName DefaultAgentName; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x50(0x30)
	char bAutoCreateNavigationData : 1; // 0x80(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x80(0x01)
	char bAllowClientSideNavigation : 1; // 0x80(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x80(0x01)
	char bTickWhilePaused : 1; // 0x80(0x01)
	char bSupportRebuilding : 1; // 0x80(0x01)
	char bInitialBuildingLocked : 1; // 0x80(0x01)
	char pad_80_7 : 1; // 0x80(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x81(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x81(0x01)
	char pad_81_2 : 6; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float ActiveTilesUpdateInterval; // 0x84(0x04)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float DirtyAreaWarningSizeThreshold; // 0x8c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x90(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0xa8(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xe8(0x10)
	char pad_F8[0xe8]; // 0xf8(0xe8)
	enum class FNavigationSystemRunMode OperationMode; // 0x1e0(0x01)
	char pad_1E1[0x1403]; // 0x1e1(0x1403)
	float DirtyAreasUpdateFreq; // 0x15e4(0x04)
	char pad_15E8[0x20]; // 0x15e8(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x80cef80
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x80ceec0
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x80cee00
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x80ced70
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig newMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x80cecf0
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x80cecd0
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x80cebc0
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80ce9d0
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x80ce940
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x80ce710
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x80ce600
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80ce400
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80ce1e0
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80cdfc0
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x80cdfc0
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x80cded0
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x80cde40
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80cdc60
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80cda80
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& pathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80cd850
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& pathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80cd5f0
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x80cd530
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& pathStart, struct FVector& PathEnd, struct AActor* pathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x80cd2e0
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& pathStart, struct AActor* GoalActor, float tetherDistance, struct AActor* pathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x80cd0d0
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x70 (Inherited: 0x68)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x68(0x01)
	char bCreateOnClient : 1; // 0x68(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char pad_68_4 : 4; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x328 (Inherited: 0x230)
struct ANavigationTestingActor : AActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x240(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x248(0x08)
	char bActAsNavigationInvoker : 1; // 0x250(0x01)
	char pad_250_1 : 7; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x258(0x38)
	struct FVector QueryingExtent; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct ANavigationData* MyNavData; // 0x2a0(0x08)
	struct FVector ProjectedLocation; // 0x2a8(0x0c)
	char bProjectedLocationValid : 1; // 0x2b4(0x01)
	char bSearchStart : 1; // 0x2b4(0x01)
	char pad_2B4_2 : 6; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float CostLimitFactor; // 0x2b8(0x04)
	float MinimumCostLimit; // 0x2bc(0x04)
	char bBacktracking : 1; // 0x2c0(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x2c0(0x01)
	char bGatherDetailedInfo : 1; // 0x2c0(0x01)
	char bDrawDistanceToWall : 1; // 0x2c0(0x01)
	char bShowNodePool : 1; // 0x2c0(0x01)
	char bShowBestPath : 1; // 0x2c0(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x2c0(0x01)
	char bShouldBeVisibleInGame : 1; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct FVector2D TextCanvasOffset; // 0x2c8(0x08)
	char bPathExist : 1; // 0x2d0(0x01)
	char bPathIsPartial : 1; // 0x2d0(0x01)
	char bPathSearchOutOfNodes : 1; // 0x2d0(0x01)
	char pad_2D0_3 : 5; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float PathfindingTime; // 0x2d4(0x04)
	float PathCost; // 0x2d8(0x04)
	int32_t PathfindingSteps; // 0x2dc(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x2e0(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x2e8(0x08)
	int32_t ShowStepIndex; // 0x2f0(0x04)
	float OffsetFromCornersDistance; // 0x2f4(0x04)
	char pad_2F8[0x30]; // 0x2f8(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x4a0 (Inherited: 0x480)
struct UNavLinkComponent : UPrimitiveComponent {
	char pad_480[0x8]; // 0x480(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x480 (Inherited: 0x480)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x58 (Inherited: 0x58)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x270 (Inherited: 0x268)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x490 (Inherited: 0x480)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_480[0x10]; // 0x480(0x10)
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x280 (Inherited: 0x268)
struct ANavModifierVolume : AVolume {
	char pad_268[0x8]; // 0x268(0x08)
	struct UNavArea* AreaClass; // 0x270(0x08)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x80d0ea0
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x240 (Inherited: 0x230)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x230(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x238(0x01)
	char bLoadOnClient : 1; // 0x239(0x01)
	char pad_239_1 : 7; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x480 (Inherited: 0x480)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x50 (Inherited: 0x50)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x50 (Inherited: 0x40)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_40[0x10]; // 0x40(0x10)
};

