// Class GFXUtilities.BatchMeshCommands
// Size: 0x2b0 (Inherited: 0x220)
struct UBatchMeshCommands : USceneComponent {
	char pad_220[0x58]; // 0x220(0x58)
	struct TArray<struct FMaterialNamedGroup> Groups; // 0x278(0x10)
	struct TArray<struct FMaterialHelperOriginalMeshState> TargetMeshes; // 0x288(0x10)
	struct FString _materialGroupName; // 0x298(0x10)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	void UpdateMaterials(); // Function GFXUtilities.BatchMeshCommands.UpdateMaterials // (Final|Native|Public|BlueprintCallable) // @ game+0x828a3a0
	void SetVectorParameter(struct FName ParameterName, struct FVector& NewValue); // Function GFXUtilities.BatchMeshCommands.SetVectorParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x828a2b0
	void SetTextureParameter(struct FName ParameterName, struct UTexture* newTexture); // Function GFXUtilities.BatchMeshCommands.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x828a1c0
	void SetStencilIntegerScalarParameter(struct FName ParameterName, int32_t& NewValue); // Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x828a0d0
	void SetScalarParameter(struct FName ParameterName, float NewValue); // Function GFXUtilities.BatchMeshCommands.SetScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x8289fe0
	void SetRenderInMainPass(bool inRenderInMainPass); // Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass // (Native|Public|BlueprintCallable) // @ game+0x8289f50
	void SetRenderInCustomDepth(bool renderInCustomDepth); // Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x8289ec0
	void SetRenderInCustomColourNoDepth(bool renderInCustomColour); // Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x8289e30
	void SetReceivesDecals(bool receivesDecals); // Function GFXUtilities.BatchMeshCommands.SetReceivesDecals // (Final|Native|Public|BlueprintCallable) // @ game+0x8289da0
	void SetMaterial(struct FString GroupName); // Function GFXUtilities.BatchMeshCommands.SetMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x8289d00
	void SetLightingChannelForAllMeshes(struct FLightingChannels LightingChannels); // Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x8289c80
	void SetCustomDepthStencilValue(int32_t stencilValue); // Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue // (Final|Native|Public|BlueprintCallable) // @ game+0x8289bf0
	void SetColourParameter(struct FName ParameterName, struct FLinearColor NewValue); // Function GFXUtilities.BatchMeshCommands.SetColourParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8289b00
	void SetCastCinematicShadows(bool castCinematicShadows); // Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows // (Final|Native|Public|BlueprintCallable) // @ game+0x8289a70
	void SetAllToSameMaterial(struct UMaterialInterface* MaterialInterface); // Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x82899e0
	void ResetMaterials(); // Function GFXUtilities.BatchMeshCommands.ResetMaterials // (Final|Native|Public|BlueprintCallable) // @ game+0x82899c0
	bool CopyFirstScalarParameter(struct FName ParameterName, float& OutValue); // Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x82898c0
	void BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren); // Function GFXUtilities.BatchMeshCommands.BatchSetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x82897f0
	void BatchSetSkipComponentAndChildrenTransformUpdate(bool Skip); // Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x8289760
	void BatchSetComponentTickEnabled(bool Enabled); // Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x82896d0
	void AddGroup(struct FMaterialNamedGroup Group); // Function GFXUtilities.BatchMeshCommands.AddGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x8289590
};

// Class GFXUtilities.AlternatingColor
// Size: 0x78 (Inherited: 0x30)
struct UAlternatingColor : UObject {
	struct FLinearColor FirstColor; // 0x30(0x10)
	struct FLinearColor SecondColor; // 0x40(0x10)
	float ColorChangePeriod; // 0x50(0x04)
	char pad_54[0x24]; // 0x54(0x24)
};

// Class GFXUtilities.BaseOutlineRenderStrategy
// Size: 0x78 (Inherited: 0x30)
struct UBaseOutlineRenderStrategy : UObject {
	struct TArray<struct UBatchMeshCommands*> _batchCommands; // 0x30(0x10)
	char pad_40[0x38]; // 0x40(0x38)
};

// Class GFXUtilities.ClippableProviderComponent
// Size: 0x120 (Inherited: 0xb8)
struct UClippableProviderComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TSet<struct UPrimitiveComponent*> _ignoredPrimitives; // 0xd0(0x50)

	void SetIgnoredPrimitives(struct TArray<struct UPrimitiveComponent*> ignoredPrimitives); // Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives // (Final|Native|Public|BlueprintCallable) // @ game+0x828a610
	void AddIgnoredPrimitives(struct TArray<struct UPrimitiveComponent*>& ignoredPrimitives); // Function GFXUtilities.ClippableProviderComponent.AddIgnoredPrimitives // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x828a560
};

// Class GFXUtilities.ClonedMeshComponent
// Size: 0x350 (Inherited: 0x2b0)
struct UClonedMeshComponent : UBatchMeshCommands {
	struct TMap<struct USceneComponent*, struct UMeshComponent*> _originalToClone; // 0x2a8(0x50)
	struct TMap<struct UMeshComponent*, struct USceneComponent*> _cloneToOriginal; // 0x2f8(0x50)
};

// Class GFXUtilities.ClonedMeshComponentTranslucentOutline
// Size: 0x350 (Inherited: 0x350)
struct UClonedMeshComponentTranslucentOutline : UClonedMeshComponent {
};

// Class GFXUtilities.ClonedStaticMeshComponent
// Size: 0x550 (Inherited: 0x550)
struct UClonedStaticMeshComponent : UStaticMeshComponent {
};

// Class GFXUtilities.ClonedSplineMeshComponent
// Size: 0x5e0 (Inherited: 0x5e0)
struct UClonedSplineMeshComponent : USplineMeshComponent {
};

// Class GFXUtilities.ClonedSkeletalMeshComponent
// Size: 0xfa0 (Inherited: 0xfa0)
struct UClonedSkeletalMeshComponent : USkeletalMeshComponent {
};

// Class GFXUtilities.CustomDepthOutlineRenderStrategy
// Size: 0x90 (Inherited: 0x78)
struct UCustomDepthOutlineRenderStrategy : UBaseOutlineRenderStrategy {
	struct UMaterialInterface* _replacementMaterial; // 0x78(0x08)
	struct TArray<struct UBatchMeshCommands*> _translucentCopies; // 0x80(0x10)
};

// Class GFXUtilities.DBDReflectionCaptureSpawnerComponent
// Size: 0x280 (Inherited: 0x220)
struct UDBDReflectionCaptureSpawnerComponent : USceneComponent {
	enum class EReflectionSourceType ReflectionSourceType; // 0x218(0x01)
	struct UTextureCube* Cubemap; // 0x220(0x08)
	float SourceCubemapAngle; // 0x228(0x04)
	float Brightness; // 0x22c(0x04)
	float ContributionFactor; // 0x230(0x04)
	float IBLMultiplicator; // 0x234(0x04)
	bool bCanBeTinted; // 0x238(0x01)
	char pad_23A[0x2]; // 0x23a(0x02)
	struct FVector CaptureOffset; // 0x23c(0x0c)
	char pad_248[0x8]; // 0x248(0x08)
	struct TArray<struct AReflectionCapture*> SpawnedReflectionCaptures; // 0x250(0x10)
	struct TArray<struct UReflectionCaptureComponent*> SpawnedReflectionCaptureComponents; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)

	void SetIBLMultiplicator(float IBLMultiplicator); // Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator // (Final|Native|Public|BlueprintCallable) // @ game+0x828b5e0
	void SetContributionFactor(float ContributionFactor); // Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor // (Final|Native|Public|BlueprintCallable) // @ game+0x828b560
	void SetBrightness(float Brightness); // Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness // (Final|Native|Public|BlueprintCallable) // @ game+0x828b4e0
};

// Class GFXUtilities.DBDBoxReflectionCaptureSpawnerComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UDBDBoxReflectionCaptureSpawnerComponent : UDBDReflectionCaptureSpawnerComponent {
	struct FVector InfluenceBox; // 0x278(0x0c)
	float BoxTransitionDistance; // 0x284(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x288(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x290(0x08)
};

// Class GFXUtilities.DBDCullDistanceVolumeComponent
// Size: 0x250 (Inherited: 0x220)
struct UDBDCullDistanceVolumeComponent : USceneComponent {
	struct TArray<struct FDBDCullDistanceSizePair> CullDistances; // 0x218(0x10)
	struct FVector InfluenceBox; // 0x228(0x0c)
	bool Enabled; // 0x234(0x01)
	bool Unbound; // 0x235(0x01)
	struct UBoxComponent* _previewInfluenceBox; // 0x238(0x08)
	char pad_246[0xa]; // 0x246(0x0a)
};

// Class GFXUtilities.DBDSphereReflectionCaptureSpawnerComponent
// Size: 0x290 (Inherited: 0x280)
struct UDBDSphereReflectionCaptureSpawnerComponent : UDBDReflectionCaptureSpawnerComponent {
	float InfluenceRadius; // 0x278(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x280(0x08)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// Class GFXUtilities.GFXUtilities
// Size: 0x30 (Inherited: 0x30)
struct UGFXUtilities : UBlueprintFunctionLibrary {

	void ActivateVFX(struct USkeletalMeshComponent* SkeletalMeshComponent, bool Active); // Function GFXUtilities.GFXUtilities.ActivateVFX // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x828b8e0
};

// Class GFXUtilities.InFrustumComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UInFrustumComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class GFXUtilities.LightIntensityTimelineComponent
// Size: 0x110 (Inherited: 0xb8)
struct ULightIntensityTimelineComponent : UActorComponent {
	struct TArray<struct FLightUpdate> lights; // 0xb8(0x10)
	struct TArray<struct FLightMaterialUpdate> materialHelpers; // 0xc8(0x10)
	struct UCurveFloat* intensityCurve; // 0xd8(0x08)
	bool randomizeStart; // 0xe0(0x01)
	bool randomizeLength; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	float minLength; // 0xe4(0x04)
	float maxLength; // 0xe8(0x04)
	bool normalizeCurve; // 0xec(0x01)
	bool startTicking; // 0xed(0x01)
	enum class ELightUnits inputLightUnit; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	struct FMulticastInlineDelegate OnTimelineFinished; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)

	void SetRandomizeLength(bool isRandom); // Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength // (Final|Native|Public|BlueprintCallable) // @ game+0x828c580
	void SetMinLength(float newMinValue); // Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength // (Final|Native|Public|BlueprintCallable) // @ game+0x828c500
	void SetMaxLength(float newMaxValue); // Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength // (Final|Native|Public|BlueprintCallable) // @ game+0x828c480
	void SetLightToMaxValue(); // Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x828c460
	void SetLightCurve(struct UCurveFloat* lightcurve); // Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x828c3d0
	void Reset(); // Function GFXUtilities.LightIntensityTimelineComponent.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x828c3b0
	void RegisterForTick(); // Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick // (Final|Native|Public|BlueprintCallable) // @ game+0x828c390
	void DeactivateTick(); // Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick // (Final|Native|Public|BlueprintCallable) // @ game+0x828c370
	void AddMaterialHelper(struct UMaterialHelper* matHelper, struct FName propName, float Multiplier); // Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper // (Final|Native|Public|BlueprintCallable) // @ game+0x828c240
	void AddLight(struct ULightComponent* Light, float Multiplier); // Function GFXUtilities.LightIntensityTimelineComponent.AddLight // (Final|Native|Public|BlueprintCallable) // @ game+0x828c170
};

// Class GFXUtilities.MaterialExpressionBHVRCustomColorOutput
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionBHVRCustomColorOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x48(0x1c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class GFXUtilities.MaterialExpressionBHVRCustomColorSampler
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionBHVRCustomColorSampler : UMaterialExpressionCustomOutput {
};

// Class GFXUtilities.MaterialHelper
// Size: 0x2b0 (Inherited: 0x2b0)
struct UMaterialHelper : UBatchMeshCommands {

	void RefreshMeshes(); // Function GFXUtilities.MaterialHelper.RefreshMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x828ca90
	void RefreshMesh(struct UMeshComponent* mc); // Function GFXUtilities.MaterialHelper.RefreshMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x828ca00
};

// Class GFXUtilities.MaterialHelperUnaffectedComponentInterface
// Size: 0x30 (Inherited: 0x30)
struct UMaterialHelperUnaffectedComponentInterface : UInterface {
};

// Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComponent
// Size: 0x550 (Inherited: 0x550)
struct UMaterialHelperUnaffectedStaticMeshComponent : UStaticMeshComponent {
};

// Class GFXUtilities.MaterialHelperUnaffectedNiagaraComponent
// Size: 0x630 (Inherited: 0x630)
struct UMaterialHelperUnaffectedNiagaraComponent : UNiagaraComponent {
};

// Class GFXUtilities.MeshCloningFactory
// Size: 0x2b0 (Inherited: 0x2b0)
struct UMeshCloningFactory : UBatchMeshCommands {
};

// Class GFXUtilities.OuterlineComponent
// Size: 0x250 (Inherited: 0x220)
struct UOuterlineComponent : USceneComponent {
	struct UMaterialInterface* CloneCustomDepthMaterial; // 0x218(0x08)
	struct UMaterialInterface* CloneTranslucentMaterial; // 0x220(0x08)
	struct UMaterialInstanceDynamic* _cloneCustomDepthMaterialDynamic; // 0x228(0x08)
	struct UMaterialInstanceDynamic* _cloneTranslucentMaterialDynamic; // 0x230(0x08)
	struct USkeletalMeshComponent* _customDepthSkeletalMesh; // 0x238(0x08)
	struct USkeletalMeshComponent* _overlaySkeletalMesh; // 0x240(0x08)

	void SetIntensity(float Intensity); // Function GFXUtilities.OuterlineComponent.SetIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x828d3e0
};

// Class GFXUtilities.StencilOutlineRenderStrategy
// Size: 0xa0 (Inherited: 0x78)
struct UStencilOutlineRenderStrategy : UBaseOutlineRenderStrategy {
	struct TArray<struct UMaterialInterface*> _replacementMaterials; // 0x78(0x10)
	struct TArray<struct UBatchMeshCommands*> _translucentCopies; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void EnableCopyStencilToCustomStencil(bool Enabled); // Function GFXUtilities.StencilOutlineRenderStrategy.EnableCopyStencilToCustomStencil // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x828d6e0
};

// Class GFXUtilities.TranslucentOutlineRenderStrategy
// Size: 0x88 (Inherited: 0x78)
struct UTranslucentOutlineRenderStrategy : UBaseOutlineRenderStrategy {
	struct TArray<struct UMaterialInterface*> _replacementMaterials; // 0x78(0x10)
};

