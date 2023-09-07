// Class Landscape.ControlPointMeshActor
// Size: 0x238 (Inherited: 0x230)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x230(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x550 (Inherited: 0x550)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x548(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x5b0 (Inherited: 0x230)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x230(0x08)
	struct FGuid LandscapeGuid; // 0x238(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x248(0x08)
	int32_t MaxLODLevel; // 0x250(0x04)
	float LODDistanceFactor; // 0x254(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x25c(0x04)
	float LOD0ScreenSize; // 0x260(0x04)
	float LOD0DistributionSetting; // 0x264(0x04)
	float LODDistributionSetting; // 0x268(0x04)
	float TessellationComponentScreenSize; // 0x26c(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x274(0x04)
	int32_t OccluderGeometryLOD; // 0x278(0x04)
	int32_t StaticLightingLOD; // 0x27c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x280(0x08)
	float StreamingDistanceMultiplier; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x290(0x08)
	char pad_298[0x20]; // 0x298(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2b8(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2c0(0x10)
	bool bMeshHoles; // 0x2d0(0x01)
	char MeshHolesMaxLod; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2d8(0x10)
	int32_t VirtualTextureNumLods; // 0x2e8(0x04)
	int32_t VirtualTextureLodBias; // 0x2ec(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float NegativeZBoundsExtension; // 0x2f4(0x04)
	float PositiveZBoundsExtension; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x300(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x310(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x320(0x10)
	char pad_330[0x64]; // 0x330(0x64)
	bool bHasLandscapeGrass; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	float StaticLightingResolution; // 0x398(0x04)
	char CastShadow : 1; // 0x39c(0x01)
	char bCastDynamicShadow : 1; // 0x39c(0x01)
	char bCastStaticShadow : 1; // 0x39c(0x01)
	char pad_39C_3 : 5; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	char bCastFarShadow : 1; // 0x3a0(0x01)
	char pad_3A0_1 : 7; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	char bCastHiddenShadow : 1; // 0x3a4(0x01)
	char pad_3A4_1 : 7; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	char bCastShadowAsTwoSided : 1; // 0x3a8(0x01)
	char pad_3A8_1 : 7; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x3ac(0x01)
	char pad_3AC_1 : 7; // 0x3ac(0x01)
	struct FLightingChannels LightingChannels; // 0x3ad(0x01)
	char pad_3AE[0x2]; // 0x3ae(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3b0(0x01)
	char bRenderCustomDepth : 1; // 0x3b0(0x01)
	char pad_3B0_2 : 6; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	int32_t CustomDepthStencilValue; // 0x3b8(0x04)
	float LDMaxDrawDistance; // 0x3bc(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3c0(0x18)
	int32_t CollisionMipLevel; // 0x3d8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3dc(0x04)
	float CollisionThickness; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct FBodyInstance BodyInstance; // 0x3e8(0x160)
	char bGenerateOverlapEvents : 1; // 0x548(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x548(0x01)
	char pad_548_2 : 6; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	int32_t ComponentSizeQuads; // 0x54c(0x04)
	int32_t SubsectionSizeQuads; // 0x550(0x04)
	int32_t NumSubsections; // 0x554(0x04)
	char bUsedForNavigation : 1; // 0x558(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x558(0x01)
	char pad_558_2 : 6; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	bool bUseDynamicMaterialInstance; // 0x55c(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x55d(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x55e(0x01)
	bool bHasLayersContent; // 0x55f(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x560(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e70c00
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x6e70b10
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x6e70a20
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x6e70900
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x54d7690
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x6e70560
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x6e704d0
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x6e70440
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x5819660
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x6e703b0
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x6e70320
};

// Class Landscape.Landscape
// Size: 0x5b0 (Inherited: 0x5b0)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x230 (Inherited: 0x230)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x4032ad0
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x6e6ec10
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x6e6ea90
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
};

// Class Landscape.LandscapeLODStreamingProxy
// Size: 0x70 (Inherited: 0x68)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Landscape.LandscapeComponent
// Size: 0x6a0 (Inherited: 0x480)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x480(0x04)
	int32_t SectionBaseY; // 0x484(0x04)
	int32_t ComponentSizeQuads; // 0x488(0x04)
	int32_t SubsectionSizeQuads; // 0x48c(0x04)
	int32_t NumSubsections; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x498(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x4a0(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4a8(0x10)
	struct TArray<struct UMaterialInstanceConstant*> materialInstances; // 0x4b8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x4c8(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x4d8(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4e8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x4f8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x500(0x10)
	float WeightmapSubsectionOffset; // 0x510(0x04)
	char pad_514[0xc]; // 0x514(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x520(0x10)
	struct FBox CachedLocalBox; // 0x530(0x1c)
	LazyObjectProperty CollisionComponent; // 0x54c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x568(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x570(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x580(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x590(0x08)
	struct FGuid MapBuildDataId; // 0x598(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x5a8(0x10)
	int32_t CollisionMipLevel; // 0x5b8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x5bc(0x04)
	float NegativeZBoundsExtension; // 0x5c0(0x04)
	float PositiveZBoundsExtension; // 0x5c4(0x04)
	float StaticLightingResolution; // 0x5c8(0x04)
	int32_t ForcedLOD; // 0x5cc(0x04)
	int32_t LODBias; // 0x5d0(0x04)
	struct FGuid StateId; // 0x5d4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x5e4(0x10)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x5f8(0x08)
	char MobileBlendableLayerMask; // 0x600(0x01)
	char pad_601[0x7]; // 0x601(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x608(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x610(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x620(0x10)
	char pad_630[0x70]; // 0x630(0x70)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6e6e9c0
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6e6e8b0
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6e6e7d0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x230 (Inherited: 0x230)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x280 (Inherited: 0x230)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_230[0x50]; // 0x230(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x480 (Inherited: 0x480)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x68 (Inherited: 0x30)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x30(0x10)
	char bEnableDensityScaling : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UStaticMesh* GrassMesh; // 0x48(0x08)
	float GrassDensity; // 0x50(0x04)
	float PlacementJitter; // 0x54(0x04)
	int32_t StartCullDistance; // 0x58(0x04)
	int32_t EndCullDistance; // 0x5c(0x04)
	bool RandomRotation; // 0x60(0x01)
	bool AlignToSurface; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x560 (Inherited: 0x480)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x480(0x10)
	int32_t SectionBaseX; // 0x490(0x04)
	int32_t SectionBaseY; // 0x494(0x04)
	int32_t CollisionSizeQuads; // 0x498(0x04)
	float CollisionScale; // 0x49c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x4a8(0x10)
	struct FGuid HeightfieldGuid; // 0x4b8(0x10)
	struct FBox CachedLocalBox; // 0x4c8(0x1c)
	LazyObjectProperty RenderComponent; // 0x4e4(0x1c)
	char pad_500[0x10]; // 0x500(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x510(0x10)
	char pad_520[0x40]; // 0x520(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6e6ea60
};

// Class Landscape.LandscapeInfo
// Size: 0x218 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x30(0x1c)
	struct FGuid LandscapeGuid; // 0x4c(0x10)
	int32_t ComponentSizeQuads; // 0x5c(0x04)
	int32_t SubsectionSizeQuads; // 0x60(0x04)
	int32_t ComponentNumSubsections; // 0x64(0x04)
	struct FVector DrawScale; // 0x68(0x0c)
	char pad_74[0xa4]; // 0x74(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_128[0xf0]; // 0x128(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x88 (Inherited: 0x30)
struct ULandscapeInfoMap : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x40(0x08)
	float Hardness; // 0x48(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x338 (Inherited: 0x320)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x320(0x10)
	char bIsLayerThumbnail : 1; // 0x330(0x01)
	char bDisableTessellation : 1; // 0x330(0x01)
	char bMobile : 1; // 0x330(0x01)
	char bEditorToolUsage : 1; // 0x330(0x01)
	char pad_330_4 : 4; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x580 (Inherited: 0x560)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x560(0x10)
	char pad_570[0x10]; // 0x570(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x238 (Inherited: 0x230)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x230(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x570 (Inherited: 0x550)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x548(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x558(0x10)
	int8_t ProxyLOD; // 0x568(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x50 (Inherited: 0x48)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x4b0 (Inherited: 0x480)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x480(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x490(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x4a0(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x6e72800
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xb0 (Inherited: 0x30)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float LayerWidthRatio; // 0x4c(0x04)
	float SideFalloff; // 0x50(0x04)
	float LeftSideFalloffFactor; // 0x54(0x04)
	float RightSideFalloffFactor; // 0x58(0x04)
	float LeftSideLayerFalloffFactor; // 0x5c(0x04)
	float RightSideLayerFalloffFactor; // 0x60(0x04)
	float EndFalloff; // 0x64(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x68(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa8(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30(0x30)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x5d0 (Inherited: 0x5b0)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x5b0(0x1c)
	char pad_5CC[0x4]; // 0x5cc(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x58 (Inherited: 0x48)
struct ULandscapeSubsystem : UTickableWorldSubsystem {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x30(0x20)
	struct FGuid LayerGuid; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x48(0x10)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x48(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float MappingScale; // 0x4c(0x04)
	float MappingRotation; // 0x50(0x04)
	float MappingPanU; // 0x54(0x04)
	float MappingPanV; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x48(0x0c)
	float PreviewWeight; // 0x54(0x04)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xa0 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x48(0x1c)
	struct FExpressionInput LayerNotUsed; // 0x64(0x1c)
	struct FName ParameterName; // 0x80(0x0c)
	char PreviewUsed : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FGuid ExpressionGUID; // 0x90(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0xb0 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x48(0x1c)
	struct FExpressionInput Layer; // 0x64(0x1c)
	struct FName ParameterName; // 0x80(0x0c)
	float PreviewWeight; // 0x8c(0x04)
	struct FVector ConstBase; // 0x90(0x0c)
	struct FGuid ExpressionGUID; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

