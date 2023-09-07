// Class GraphicsExtensions.GMAdaptiveShadowMapAtlas
// Size: 0xe8 (Inherited: 0x30)
struct UGMAdaptiveShadowMapAtlas : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)
};

// Class GraphicsExtensions.GMAdaptiveShadowMapController
// Size: 0xc8 (Inherited: 0x30)
struct UGMAdaptiveShadowMapController : UObject {
	struct UGMAdaptiveShadowMapAtlas* _atlas; // 0x30(0x08)
	struct UMaterialInterface* _lightFunctionMaterial; // 0x38(0x08)
	struct TArray<struct UGMAdaptiveShadowMapSource*> _shadowMapSourceList; // 0x40(0x10)
	struct TArray<struct UGMAdaptiveShadowMapSource*> _shadowMapSourceActivatedList; // 0x50(0x10)
	char pad_60[0x68]; // 0x60(0x68)
};

// Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent
// Size: 0x400 (Inherited: 0x220)
struct UGMAdaptiveShadowMapControllerComponent : USceneComponent {
	struct FBHVRPerDetailModeInt TileSize; // 0x218(0xa0)
	int32_t TileCountX; // 0x2b8(0x04)
	int32_t TileCountY; // 0x2bc(0x04)
	struct FIntPoint GridSize; // 0x2c0(0x08)
	int32_t GeneratedTilesPerFrame; // 0x2c8(0x04)
	struct FBHVRPerDetailModeInt MaxPreallocatedTilesPerFrame; // 0x2d0(0xa0)
	bool bSupportsDirectionalLights; // 0x370(0x01)
	bool bSupportsSpotLights; // 0x371(0x01)
	char pad_376[0x2]; // 0x376(0x02)
	struct UMaterialInterface* LightFunctionMaterial; // 0x378(0x08)
	float CullShadowIfPixelSizeLessThan; // 0x380(0x04)
	bool bPreviewOnly; // 0x384(0x01)
	char pad_385[0x13]; // 0x385(0x13)
	struct UGMAdaptiveShadowMapAtlas* _atlas; // 0x398(0x08)
	struct UGMAdaptiveShadowMapController* _controller; // 0x3a0(0x08)
	struct TMap<struct UGMAdaptiveShadowMapSourceComponent*, struct UGMAdaptiveShadowMapSource*> _shadowMapSources; // 0x3a8(0x50)
	struct UMaterialInstanceDynamic* _lightFunctionMaterialInstance; // 0x3f8(0x08)

	void RebuildAtlas(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5635150
	void RebuildAllAtlases(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAllAtlases // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5635130
	bool IsControllerDonePreallocatingTiles(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5635100
	int32_t GetTileSize(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x56350d0
	int32_t GetTileCountY(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x56350a0
	int32_t GetTileCountX(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5635070
	void DumpDebugInfo(); // Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5635050
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSource
// Size: 0x300 (Inherited: 0x30)
struct UGMAdaptiveShadowMapSource : UObject {
	struct UGMAdaptiveShadowMapAtlas* _atlas; // 0x30(0x08)
	struct ULightComponent* _lightComponent; // 0x38(0x08)
	char pad_40[0x2c0]; // 0x40(0x2c0)
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent
// Size: 0x240 (Inherited: 0x220)
struct UGMAdaptiveShadowMapSourceComponent : USceneComponent {
	bool bUseAutoRadius; // 0x218(0x01)
	float Radius; // 0x21c(0x04)
	float DepthMin; // 0x220(0x04)
	float DepthMax; // 0x224(0x04)
	int32_t Levels; // 0x228(0x04)
	int32_t PreGeneratedLevels; // 0x22c(0x04)
	char pad_235[0xb]; // 0x235(0x0b)

	void SetLightRadiusWithBounds(struct FVector BoundingSphereCenter, float BoundingSphereRadius); // Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5635570
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner
// Size: 0x240 (Inherited: 0x230)
struct AGMAdaptiveShadowMapSourceComponentSpawner : AActor {
	bool bCreateASMSourceComponentOnBeginPlay; // 0x230(0x01)
	bool bRemoveCastForCinematicOnlyFlagOnLights; // 0x231(0x01)
	bool bRemoveLightFunctionMaterialOnLights; // 0x232(0x01)
	char pad_233[0x1]; // 0x233(0x01)
	int32_t NumLevelPerSource; // 0x234(0x04)
	int32_t NumPreGeneratedLevelPerSource; // 0x238(0x04)
	bool bPreviewOnly; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional
// Size: 0x350 (Inherited: 0x300)
struct UGMAdaptiveShadowMapSourceDirectional : UGMAdaptiveShadowMapSource {
	struct UDirectionalLightComponent* _directionalLightComponent; // 0x2f8(0x08)
	char pad_308[0x48]; // 0x308(0x48)
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot
// Size: 0x360 (Inherited: 0x300)
struct UGMAdaptiveShadowMapSourceSpot : UGMAdaptiveShadowMapSource {
	struct USpotLightComponent* _spotLightComponent; // 0x2f8(0x08)
	char pad_308[0x58]; // 0x308(0x58)
};

// Class GraphicsExtensions.GMShadowDepthCapture
// Size: 0x190 (Inherited: 0x30)
struct UGMShadowDepthCapture : UObject {
	struct ULightComponent* _lightComponent; // 0x30(0x08)
	struct UTextureRenderTarget2D* _depthTarget; // 0x38(0x08)
	char pad_40[0x150]; // 0x40(0x150)
};

// Class GraphicsExtensions.GMShadowDepthCaptureComponent
// Size: 0x280 (Inherited: 0x220)
struct UGMShadowDepthCaptureComponent : USceneComponent {
	int32_t DepthTargetWidth; // 0x218(0x04)
	int32_t DepthTargetHeight; // 0x21c(0x04)
	struct UTextureRenderTarget2D* DepthTarget; // 0x220(0x08)
	bool bCaptureDynamicPrimitives; // 0x228(0x01)
	bool bCaptureStaticPrimitives; // 0x229(0x01)
	bool bCaptureEveryFrame; // 0x22a(0x01)
	bool bCaptureOnlyIfVisibleFromCamera; // 0x22b(0x01)
	bool bCaptureObjectsWithBlockingCollisionVisibility; // 0x22c(0x01)
	enum class EShadowDepthLODSelection LODSelection; // 0x22d(0x01)
	float MinPrimitivePixelDiameterBeforeCulling; // 0x230(0x04)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct FVector4 ShadowClipRegion; // 0x240(0x10)
	float OuterConeAngle; // 0x250(0x04)
	float ShadowNearPlaneOffset; // 0x254(0x04)
	float AttenuationRadius; // 0x258(0x04)
	bool bCastTranslucentShadowsAsOpaque; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	float MaxDrawDistance; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UGMShadowDepthCapture* _shadowDepthCapture; // 0x268(0x08)
	struct USpotLightComponent* _spotLightComponent; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)

	void RequestCaptureUpdate(); // Function GraphicsExtensions.GMShadowDepthCaptureComponent.RequestCaptureUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x5636120
};

