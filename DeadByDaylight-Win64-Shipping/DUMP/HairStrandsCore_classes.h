// Class HairStrandsCore.GroomActor
// Size: 0x238 (Inherited: 0x230)
struct AGroomActor : AActor {
	struct UGroomComponent* GroomComponent; // 0x230(0x08)
};

// Class HairStrandsCore.GroomAsset
// Size: 0x100 (Inherited: 0x30)
struct UGroomAsset : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo; // 0x38(0x10)
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering; // 0x48(0x10)
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics; // 0x58(0x10)
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation; // 0x68(0x10)
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD; // 0x78(0x10)
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards; // 0x88(0x10)
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes; // 0x98(0x10)
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)
	bool EnableGlobalInterpolation; // 0xc8(0x01)
	enum class EGroomInterpolationType HairInterpolationType; // 0xc9(0x01)
	enum class EHairLODSelectionType LODSelectionType; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	struct FPerPlatformInt MinLOD; // 0xcc(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<float> EffectiveLODBias; // 0xd8(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class HairStrandsCore.GroomAssetImportData
// Size: 0x38 (Inherited: 0x30)
struct UGroomAssetImportData : UAssetImportData {
	struct UGroomImportOptions* ImportOptions; // 0x30(0x08)
};

// Class HairStrandsCore.GroomBindingAsset
// Size: 0xc0 (Inherited: 0x30)
struct UGroomBindingAsset : UObject {
	enum class EGroomBindingMeshType GroomBindingType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UGroomAsset* Groom; // 0x38(0x08)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x40(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x48(0x08)
	struct UGeometryCache* SourceGeometryCache; // 0x50(0x08)
	struct UGeometryCache* TargetGeometryCache; // 0x58(0x08)
	int32_t NumInterpolationPoints; // 0x60(0x04)
	int32_t MatchingSection; // 0x64(0x04)
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
};

// Class HairStrandsCore.GroomBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGroomBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x43d5270
	struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x43d50e0
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(struct FString DesiredPackagePath, struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x43d5270
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x43d50e0
};

// Class HairStrandsCore.GroomCache
// Size: 0x70 (Inherited: 0x30)
struct UGroomCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FGroomCacheInfo GroomCacheInfo; // 0x38(0x28)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class HairStrandsCore.GroomCacheImportOptions
// Size: 0x58 (Inherited: 0x30)
struct UGroomCacheImportOptions : UObject {
	struct FGroomCacheImportSettings ImportSettings; // 0x30(0x28)
};

// Class HairStrandsCore.GroomCacheImportData
// Size: 0x58 (Inherited: 0x30)
struct UGroomCacheImportData : UAssetImportData {
	struct FGroomCacheImportSettings Settings; // 0x30(0x28)
};

// Class HairStrandsCore.GroomComponent
// Size: 0x600 (Inherited: 0x4d0)
struct UGroomComponent : UMeshComponent {
	char pad_4D0[0x8]; // 0x4d0(0x08)
	struct UGroomAsset* GroomAsset; // 0x4d8(0x08)
	struct UGroomCache* GroomCache; // 0x4e0(0x08)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x4e8(0x10)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x4f8(0x08)
	struct UGroomBindingAsset* BindingAsset; // 0x500(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x508(0x08)
	struct UMaterialInterface* Strands_DebugMaterial; // 0x510(0x08)
	struct UMaterialInterface* Strands_DefaultMaterial; // 0x518(0x08)
	struct UMaterialInterface* Cards_DefaultMaterial; // 0x520(0x08)
	struct UMaterialInterface* Meshes_DefaultMaterial; // 0x528(0x08)
	struct UNiagaraSystem* AngularSpringsSystem; // 0x530(0x08)
	struct UNiagaraSystem* CosseratRodsSystem; // 0x538(0x08)
	struct FString AttachmentName; // 0x540(0x10)
	char pad_550[0x50]; // 0x550(0x50)
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc; // 0x5a0(0x10)
	bool bRunning; // 0x5b0(0x01)
	bool bLooping; // 0x5b1(0x01)
	bool bManualTick; // 0x5b2(0x01)
	char pad_5B3[0x1]; // 0x5b3(0x01)
	float ElapsedTime; // 0x5b4(0x04)
	char pad_5B8[0x48]; // 0x5b8(0x48)

	void SetGroomAsset(struct UGroomAsset* Asset); // Function HairStrandsCore.GroomComponent.SetGroomAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x43d54e0
	void SetBindingAsset(struct UGroomBindingAsset* InBinding); // Function HairStrandsCore.GroomComponent.SetBindingAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x43d5450
};

// Class HairStrandsCore.GroomCreateBindingOptions
// Size: 0x60 (Inherited: 0x30)
struct UGroomCreateBindingOptions : UObject {
	enum class EGroomBindingMeshType GroomBindingType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x38(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x40(0x08)
	struct UGeometryCache* SourceGeometryCache; // 0x48(0x08)
	struct UGeometryCache* TargetGeometryCache; // 0x50(0x08)
	int32_t NumInterpolationPoints; // 0x58(0x04)
	int32_t MatchingSection; // 0x5c(0x04)
};

// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// Size: 0x48 (Inherited: 0x30)
struct UGroomCreateFollicleMaskOptions : UObject {
	int32_t Resolution; // 0x30(0x04)
	int32_t RootRadius; // 0x34(0x04)
	struct TArray<struct FFollicleMaskOptions> Grooms; // 0x38(0x10)
};

// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// Size: 0x70 (Inherited: 0x30)
struct UGroomCreateStrandsTexturesOptions : UObject {
	int32_t Resolution; // 0x30(0x04)
	enum class EStrandsTexturesTraceType TraceType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float TraceDistance; // 0x38(0x04)
	enum class EStrandsTexturesMeshType MeshType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UStaticMesh* StaticMesh; // 0x40(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x48(0x08)
	int32_t LODIndex; // 0x50(0x04)
	int32_t SectionIndex; // 0x54(0x04)
	int32_t UVChannelIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32_t> GroupIndex; // 0x60(0x10)
};

// Class HairStrandsCore.GroomImportOptions
// Size: 0x58 (Inherited: 0x30)
struct UGroomImportOptions : UObject {
	struct FGroomConversionSettings ConversionSettings; // 0x30(0x18)
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings; // 0x48(0x10)
};

// Class HairStrandsCore.GroomHairGroupsPreview
// Size: 0x40 (Inherited: 0x30)
struct UGroomHairGroupsPreview : UObject {
	struct TArray<struct FGroomHairGroupPreview> Groups; // 0x30(0x10)
};

// Class HairStrandsCore.GroomPluginSettings
// Size: 0x38 (Inherited: 0x30)
struct UGroomPluginSettings : UObject {
	float GroomCacheLookAheadBuffer; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class HairStrandsCore.MovieSceneGroomCacheSection
// Size: 0x110 (Inherited: 0xf0)
struct UMovieSceneGroomCacheSection : UMovieSceneSection {
	struct FMovieSceneGroomCacheParams Params; // 0xf0(0x20)
};

// Class HairStrandsCore.MovieSceneGroomCacheTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneGroomCacheTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa0(0x10)
};

// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraDataInterfaceHairStrands : UNiagaraDataInterface {
	struct UGroomAsset* DefaultSource; // 0x40(0x08)
	struct AActor* SourceActor; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// Size: 0x70 (Inherited: 0x40)
struct UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface {
	struct UPhysicsAsset* DefaultSource; // 0x40(0x08)
	struct AActor* SourceActor; // 0x48(0x08)
	char pad_50[0x20]; // 0x50(0x20)
};

// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Size: 0xf0 (Inherited: 0xe0)
struct UNiagaraDataInterfaceVelocityGrid : UNiagaraDataInterfaceRWBase {
	struct FIntVector GridSize; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// Size: 0xf0 (Inherited: 0xf0)
struct UNiagaraDataInterfacePressureGrid : UNiagaraDataInterfaceVelocityGrid {
};

