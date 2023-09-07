// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8 {
	Coords = 0,
	TexCoords = 1,
	Normals = 2,
	Tangents = 3,
	Bitangents = 4,
	Colors = 5,
	TriangleIds = 6,
	MaterialIds = 7,
	EGeometryDataFieldType_MAX = 8
};

// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8 {
	R8G8B8A8 = 0,
	R8G8B8 = 1,
	R8 = 2,
	R16G16B16A16 = 3,
	R16G16B16 = 4,
	R16 = 5,
	R32G32B32A32F = 6,
	EOutputPixelFormat_MAX = 7
};

// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8 {
	Opacity = 0,
	Transparency = 1,
	EOutputOpacityType_MAX = 2
};

// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : uint8 {
	NoCompression = 255,
	BC1 = 0,
	BC2 = 1,
	BC3 = 2,
	BC4 = 3,
	BC5 = 4,
	EOutputDDSCompressionType_MAX = 256
};

// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8 {
	BMP = 0,
	DDS = 1,
	JPEG = 2,
	PNG = 3,
	TGA = 4,
	TIFF = 5,
	EXR = 8,
	EOutputImageFileFormat_MAX = 9
};

// Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8 {
	Interpolate = 0,
	NearestNeighbor = 1,
	NoFill = 2,
	EFillMode_MAX = 3
};

// Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8 {
	NoDither = 0,
	FloydSteinberg = 1,
	JarvisJudiceNinke = 2,
	Sierra = 3,
	EDitherType_MAX = 4
};

// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EOpacityChannelComponent_MAX = 4
};

// Enum SimplygonUObjects.EBillboardMode
enum class EBillboardMode : uint8 {
	OuterShell = 0,
	Foliage = 1,
	EBillboardMode_MAX = 2
};

// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8 {
	Fast = 0,
	Accurate = 1,
	ESurfaceTransferMode_MAX = 2
};

// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8 {
	Outside = 0,
	Inside = 1,
	Manual = 2,
	ERemeshingMode_MAX = 3
};

// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8 {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EHoleFilling_MAX = 4
};

// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8 {
	LargestInstance = 0,
	SmallestInstance = 1,
	Average = 2,
	ESurfaceAreaScale_MAX = 3
};

// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8 {
	TextureSizeProportions = 0,
	SurfaceArea = 1,
	OriginalPixelDensity = 2,
	UVSizeProportions = 3,
	EChartAggregatorMode_MAX = 4
};

// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8 {
	Parameterizer = 0,
	ChartAggregator = 1,
	ETexCoordGeneratorType_MAX = 2
};

// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8 {
	Standard = 0,
	High = 1,
	Low = 2,
	EWeightsFromColorMode_MAX = 3
};

// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EWeightsFromColorComponent_MAX = 4
};

// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8 {
	Any = 0,
	All = 1,
	EBoneReductionTargetStopCondition_MAX = 2
};

// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8 {
	DirectX = 0,
	Software = 1,
	EComputeVisibilityMode_MAX = 2
};

// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8 {
	OnlyUseOriginalData = 0,
	PreferOriginalData = 1,
	PreferOptimizedResult = 2,
	EDataCreationPreferences_MAX = 3
};

// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESymmetryAxis_MAX = 3
};

// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8 {
	Fast = 0,
	Consistent = 1,
	EReductionHeuristics_MAX = 2
};

// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8 {
	Any = 0,
	All = 1,
	EReductionTargetStopCondition_MAX = 2
};

// ScriptStruct SimplygonUObjects.SimplygonPipelineSettings
// Size: 0x08 (Inherited: 0x00)
struct FSimplygonPipelineSettings {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SimplygonUObjects.ImpostorFromSingleViewPipelineSettings
// Size: 0xd8 (Inherited: 0x08)
struct FImpostorFromSingleViewPipelineSettings : FSimplygonPipelineSettings {
	struct FImpostorFromSingleViewSettings ImpostorFromSingleViewSettings; // 0x08(0x1c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FMappingImageSettings MappingImageSettings; // 0x28(0xa0)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xc8(0x10)
};

// ScriptStruct SimplygonUObjects.MappingImageSettings
// Size: 0xa0 (Inherited: 0x00)
struct FMappingImageSettings {
	char GenerateMappingImage : 1; // 0x00(0x01)
	char GenerateTexCoords : 1; // 0x00(0x01)
	char GenerateTangents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t InputMaterialCount; // 0x04(0x04)
	char UseFullRetexturing : 1; // 0x08(0x01)
	char ApplyNewMaterialIds : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t OutputMaterialCount; // 0x0c(0x04)
	char ReplaceMappingImages : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MaximumLayers; // 0x14(0x04)
	char AllowTransparencyMapping : 1; // 0x18(0x01)
	char UseAutomaticTextureSize : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float AutomaticTextureSizeMultiplier; // 0x1c(0x04)
	char ForcePower2Texture : 1; // 0x20(0x01)
	char OnlyParameterizeInvalidUVs : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t TexCoordLevel; // 0x24(0x04)
	struct FString TexCoordName; // 0x28(0x10)
	enum class ETexCoordGeneratorType TexCoordGeneratorType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x40(0x10)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x50(0x10)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x60(0x38)
	struct FParameterizerSettings ParameterizerSettings; // 0x98(0x08)
};

// ScriptStruct SimplygonUObjects.ParameterizerSettings
// Size: 0x08 (Inherited: 0x00)
struct FParameterizerSettings {
	float MaxStretch; // 0x00(0x04)
	float LargeChartsImportance; // 0x04(0x04)
};

// ScriptStruct SimplygonUObjects.ChartAggregatorSettings
// Size: 0x38 (Inherited: 0x00)
struct FChartAggregatorSettings {
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x00(0x01)
	enum class ESurfaceAreaScale SurfaceAreaScale; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t OriginalTexCoordLevel; // 0x04(0x04)
	struct FString OriginalTexCoordName; // 0x08(0x10)
	char SeparateOverlappingCharts : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString OriginalChartProportionsChannel; // 0x20(0x10)
	char LockUVRotation : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SimplygonUObjects.OutputMaterialSettings
// Size: 0x10 (Inherited: 0x00)
struct FOutputMaterialSettings {
	int32_t TextureWidth; // 0x00(0x04)
	int32_t TextureHeight; // 0x04(0x04)
	int32_t MultisamplingLevel; // 0x08(0x04)
	int32_t GutterSpace; // 0x0c(0x04)
};

// ScriptStruct SimplygonUObjects.InputMaterialSettings
// Size: 0x04 (Inherited: 0x00)
struct FInputMaterialSettings {
	int32_t MaterialMapping; // 0x00(0x04)
};

// ScriptStruct SimplygonUObjects.ImpostorFromSingleViewSettings
// Size: 0x1c (Inherited: 0x00)
struct FImpostorFromSingleViewSettings {
	char UseTightFitting : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TightFittingDepthOffset; // 0x04(0x04)
	char TwoSided : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector ViewDirection; // 0x0c(0x0c)
	float TexCoordPadding; // 0x18(0x04)
};

// ScriptStruct SimplygonUObjects.FlipbookPipelineSettings
// Size: 0xd8 (Inherited: 0x08)
struct FFlipbookPipelineSettings : FSimplygonPipelineSettings {
	struct FFlipbookSettings FlipbookSettings; // 0x08(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x28(0xa0)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xc8(0x10)
};

// ScriptStruct SimplygonUObjects.FlipbookSettings
// Size: 0x20 (Inherited: 0x00)
struct FFlipbookSettings {
	int32_t NumberOfViews; // 0x00(0x04)
	struct FVector ViewDirection; // 0x04(0x0c)
	struct FVector UpVector; // 0x10(0x0c)
	float VerticalAngle; // 0x1c(0x04)
};

// ScriptStruct SimplygonUObjects.BillboardCloudVegetationPipelineSettings
// Size: 0xf0 (Inherited: 0x08)
struct FBillboardCloudVegetationPipelineSettings : FSimplygonPipelineSettings {
	struct FBillboardCloudSettings BillboardCloudSettings; // 0x08(0x34)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FMappingImageSettings MappingImageSettings; // 0x40(0xa0)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xe0(0x10)
};

// ScriptStruct SimplygonUObjects.BillboardCloudSettings
// Size: 0x34 (Inherited: 0x00)
struct FBillboardCloudSettings {
	enum class EBillboardMode BillboardMode; // 0x00(0x01)
	char FavorVerticalPlanes : 1; // 0x01(0x01)
	char TwoSided : 1; // 0x01(0x01)
	char UseVisibilityWeights : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float BillboardDensity; // 0x04(0x04)
	int32_t MaxPlaneCount; // 0x08(0x04)
	float GeometricComplexity; // 0x0c(0x04)
	struct FVector UpVector; // 0x10(0x0c)
	struct FFoliageSettings FoliageSettings; // 0x1c(0x18)
};

// ScriptStruct SimplygonUObjects.FoliageSettings
// Size: 0x18 (Inherited: 0x00)
struct FFoliageSettings {
	char SeparateTrunkAndFoliage : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SeparateFoliageTriangleRatio; // 0x04(0x04)
	int32_t SeparateFoliageTriangleThreshold; // 0x08(0x04)
	float SeparateFoliageAreaThreshold; // 0x0c(0x04)
	float SeparateFoliageSizeThreshold; // 0x10(0x04)
	float TrunkReductionRatio; // 0x14(0x04)
};

// ScriptStruct SimplygonUObjects.BillboardCloudPipelineSettings
// Size: 0xf0 (Inherited: 0x08)
struct FBillboardCloudPipelineSettings : FSimplygonPipelineSettings {
	struct FBillboardCloudSettings BillboardCloudSettings; // 0x08(0x34)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FMappingImageSettings MappingImageSettings; // 0x40(0xa0)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xe0(0x10)
};

// ScriptStruct SimplygonUObjects.AggregationPipelineSettings
// Size: 0x1a0 (Inherited: 0x08)
struct FAggregationPipelineSettings : FSimplygonPipelineSettings {
	struct FAggregationSettings AggregationSettings; // 0x08(0x28)
	struct FVisibilitySettings VisibilitySettings; // 0x30(0x40)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x70(0x30)
	struct FVertexWeightSettings VertexWeightSettings; // 0xa0(0x28)
	struct FMappingImageSettings MappingImageSettings; // 0xc8(0xa0)
	struct FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings; // 0x168(0x28)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x190(0x10)
};

// ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
// Size: 0x28 (Inherited: 0x00)
struct FGenerateLightmapTexCoordSettings {
	char GenerateLightmapTexCoord : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LightmapTexCoordLevel; // 0x04(0x04)
	struct FString LightmapTexCoordName; // 0x08(0x10)
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t TextureWidth; // 0x1c(0x04)
	int32_t TextureHeight; // 0x20(0x04)
	int32_t GutterSpace; // 0x24(0x04)
};

// ScriptStruct SimplygonUObjects.VertexWeightSettings
// Size: 0x28 (Inherited: 0x00)
struct FVertexWeightSettings {
	char UseVertexWeightsInReducer : 1; // 0x00(0x01)
	char UseVertexWeightsInTexcoordGenerator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString WeightsFromColorName; // 0x08(0x10)
	int32_t WeightsFromColorLevel; // 0x18(0x04)
	enum class EWeightsFromColorComponent WeightsFromColorComponent; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float WeightsFromColorMultiplier; // 0x20(0x04)
	enum class EWeightsFromColorMode WeightsFromColorMode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct SimplygonUObjects.GeometryCullingSettings
// Size: 0x30 (Inherited: 0x00)
struct FGeometryCullingSettings {
	char UseClippingPlanes : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ClippingPlaneSelectionSetID; // 0x04(0x04)
	struct FString ClippingPlaneSelectionSetName; // 0x08(0x10)
	char UseClippingGeometry : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ClippingGeometrySelectionSetID; // 0x1c(0x04)
	struct FString ClippingGeometrySelectionSetName; // 0x20(0x10)
};

// ScriptStruct SimplygonUObjects.VisibilitySettings
// Size: 0x40 (Inherited: 0x00)
struct FVisibilitySettings {
	char UseVisibilityWeightsInReducer : 1; // 0x00(0x01)
	char UseVisibilityWeightsInTexcoordGenerator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VisibilityWeightsPower; // 0x04(0x04)
	char CullOccludedGeometry : 1; // 0x08(0x01)
	char ForceVisibilityCalculation : 1; // 0x08(0x01)
	char UseBackfaceCulling : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CameraSelectionSetID; // 0x0c(0x04)
	struct FString CameraSelectionSetName; // 0x10(0x10)
	int32_t OccluderSelectionSetID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString OccluderSelectionSetName; // 0x28(0x10)
	float FillNonVisibleAreaThreshold; // 0x38(0x04)
	char RemoveTrianglesNotOccludingOtherTriangles : 1; // 0x3c(0x01)
	char ConservativeMode : 1; // 0x3c(0x01)
	char pad_3C_2 : 6; // 0x3c(0x01)
	enum class EComputeVisibilityMode ComputeVisibilityMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct SimplygonUObjects.AggregationSettings
// Size: 0x28 (Inherited: 0x00)
struct FAggregationSettings {
	char MergeGeometries : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ProcessSelectionSetID; // 0x04(0x04)
	struct FString ProcessSelectionSetName; // 0x08(0x10)
	char KeepUnprocessedSceneMeshes : 1; // 0x18(0x01)
	char EnableGeometryCulling : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float GeometryCullingPrecision; // 0x1c(0x04)
	char SubdivideGeometryBasedOnUVTiles : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t SubdivisionTileSize; // 0x24(0x04)
};

// ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
// Size: 0x1a8 (Inherited: 0x08)
struct FRemeshingPipelineSettings : FSimplygonPipelineSettings {
	struct FRemeshingSettings RemeshingSettings; // 0x08(0x38)
	struct FBoneSettings BoneSettings; // 0x40(0x48)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x88(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0xb8(0x40)
	struct FMappingImageSettings MappingImageSettings; // 0xf8(0xa0)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x198(0x10)
};

// ScriptStruct SimplygonUObjects.BoneSettings
// Size: 0x48 (Inherited: 0x00)
struct FBoneSettings {
	char UseBoneReducer : 1; // 0x00(0x01)
	char BoneReductionTargetBoneRatioEnabled : 1; // 0x00(0x01)
	char RemoveUnusedBones : 1; // 0x00(0x01)
	char LimitBonesPerVertex : 1; // 0x00(0x01)
	char BoneReductionTargetBoneCountEnabled : 1; // 0x00(0x01)
	char BoneReductionTargetMaxDeviationEnabled : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxBonePerVertex; // 0x04(0x04)
	char BoneReductionTargetOnScreenSizeEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	enum class EBoneReductionTargetStopCondition BoneReductionTargetStopCondition; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float BoneReductionTargetBoneRatio; // 0x0c(0x04)
	int32_t BoneReductionTargetBoneCount; // 0x10(0x04)
	float BoneReductionTargetMaxDeviation; // 0x14(0x04)
	int32_t BoneReductionTargetOnScreenSize; // 0x18(0x04)
	int32_t LockBoneSelectionSetID; // 0x1c(0x04)
	struct FString LockBoneSelectionSetName; // 0x20(0x10)
	int32_t RemoveBoneSelectionSetID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString RemoveBoneSelectionSetName; // 0x38(0x10)
};

// ScriptStruct SimplygonUObjects.RemeshingSettings
// Size: 0x38 (Inherited: 0x00)
struct FRemeshingSettings {
	float RemeshingModeManualPositionZ; // 0x00(0x04)
	float RemeshingModeManualPositionY; // 0x04(0x04)
	float RemeshingModeManualPositionX; // 0x08(0x04)
	int32_t OnScreenSize; // 0x0c(0x04)
	enum class EHoleFilling HoleFilling; // 0x10(0x01)
	enum class ERemeshingMode RemeshingMode; // 0x11(0x01)
	enum class ESurfaceTransferMode SurfaceTransferMode; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float HardEdgeAngle; // 0x14(0x04)
	char ForceSoftEdgesWithinTextureCharts : 1; // 0x18(0x01)
	char TransferNormals : 1; // 0x18(0x01)
	char TransferColors : 1; // 0x18(0x01)
	char pad_18_3 : 5; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ProcessSelectionSetID; // 0x1c(0x04)
	struct FString ProcessSelectionSetName; // 0x20(0x10)
	char KeepUnprocessedSceneMeshes : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SimplygonUObjects.ReductionPipelineSettings
// Size: 0x210 (Inherited: 0x08)
struct FReductionPipelineSettings : FSimplygonPipelineSettings {
	struct FReductionSettings ReductionSettings; // 0x08(0x88)
	struct FRepairSettings RepairSettings; // 0x90(0x14)
	struct FNormalCalculationSettings NormalCalculationSettings; // 0xa4(0x0c)
	struct FVisibilitySettings VisibilitySettings; // 0xb0(0x40)
	struct FBoneSettings BoneSettings; // 0xf0(0x48)
	struct FVertexWeightSettings VertexWeightSettings; // 0x138(0x28)
	struct FMappingImageSettings MappingImageSettings; // 0x160(0xa0)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x200(0x10)
};

// ScriptStruct SimplygonUObjects.NormalCalculationSettings
// Size: 0x0c (Inherited: 0x00)
struct FNormalCalculationSettings {
	char ReplaceNormals : 1; // 0x00(0x01)
	char ReplaceTangents : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HardEdgeAngle; // 0x04(0x04)
	char RepairInvalidNormals : 1; // 0x08(0x01)
	char ReorthogonalizeTangentSpace : 1; // 0x08(0x01)
	char ScaleByArea : 1; // 0x08(0x01)
	char ScaleByAngle : 1; // 0x08(0x01)
	char SnapNormalsToFlatSurfaces : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct SimplygonUObjects.RepairSettings
// Size: 0x14 (Inherited: 0x00)
struct FRepairSettings {
	char UseTJunctionRemover : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TJuncDist; // 0x04(0x04)
	float WeldDist; // 0x08(0x04)
	char WeldOnlyBorderVertices : 1; // 0x0c(0x01)
	char WeldOnlyWithinMaterial : 1; // 0x0c(0x01)
	char WeldOnlyWithinSceneNode : 1; // 0x0c(0x01)
	char WeldOnlyBetweenSceneNodes : 1; // 0x0c(0x01)
	char UseWelding : 1; // 0x0c(0x01)
	char pad_C_5 : 3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ProgressivePasses; // 0x10(0x04)
};

// ScriptStruct SimplygonUObjects.ReductionSettings
// Size: 0x88 (Inherited: 0x00)
struct FReductionSettings {
	char ReductionTargetTriangleRatioEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReductionTargetTriangleRatio; // 0x04(0x04)
	char ReductionTargetTriangleCountEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ReductionTargetTriangleCount; // 0x0c(0x04)
	char ReductionTargetMaxDeviationEnabled : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ReductionTargetMaxDeviation; // 0x14(0x04)
	char ReductionTargetOnScreenSizeEnabled : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ReductionTargetOnScreenSize; // 0x1c(0x04)
	enum class EReductionTargetStopCondition ReductionTargetStopCondition; // 0x20(0x01)
	enum class EReductionHeuristics ReductionHeuristics; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float GeometryImportance; // 0x24(0x04)
	float MaterialImportance; // 0x28(0x04)
	float TextureImportance; // 0x2c(0x04)
	float ShadingImportance; // 0x30(0x04)
	float GroupImportance; // 0x34(0x04)
	float VertexColorImportance; // 0x38(0x04)
	float EdgeSetImportance; // 0x3c(0x04)
	float SkinningImportance; // 0x40(0x04)
	float CurvatureImportance; // 0x44(0x04)
	char CreateGeomorphGeometry : 1; // 0x48(0x01)
	char AllowDegenerateTexCoords : 1; // 0x48(0x01)
	char KeepSymmetry : 1; // 0x48(0x01)
	char UseAutomaticSymmetryDetection : 1; // 0x48(0x01)
	char UseSymmetryQuadRetriangulator : 1; // 0x48(0x01)
	char pad_48_5 : 3; // 0x48(0x01)
	enum class ESymmetryAxis SymmetryAxis; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float SymmetryOffset; // 0x4c(0x04)
	float SymmetryDetectionTolerance; // 0x50(0x04)
	enum class EDataCreationPreferences DataCreationPreferences; // 0x54(0x01)
	char GenerateGeomorphData : 1; // 0x55(0x01)
	char pad_55_1 : 7; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float OutwardMoveMultiplier; // 0x58(0x04)
	float InwardMoveMultiplier; // 0x5c(0x04)
	float MaxEdgeLength; // 0x60(0x04)
	char UseHighQualityNormalCalculation : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t ProcessSelectionSetID; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString ProcessSelectionSetName; // 0x70(0x10)
	char MergeGeometries : 1; // 0x80(0x01)
	char KeepUnprocessedSceneMeshes : 1; // 0x80(0x01)
	char LockGeometricBorder : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct SimplygonUObjects.VertexColorCasterSettings
// Size: 0x50 (Inherited: 0x00)
struct FVertexColorCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t OutputColorLevel; // 0x2c(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x30(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t Dilation; // 0x34(0x04)
	struct FString OutputColorName; // 0x38(0x10)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float ColorSpaceEdgeThreshold; // 0x4c(0x04)
};

// ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
// Size: 0x60 (Inherited: 0x00)
struct FGeometryDataCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EGeometryDataFieldType GeometryDataFieldType; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	int32_t Dilation; // 0x2c(0x04)
	int32_t GeometryDataFieldIndex; // 0x30(0x04)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t MappingLayerIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector4 MappingInf; // 0x40(0x10)
	struct FVector4 MappingSup; // 0x50(0x10)
};

// ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
// Size: 0x48 (Inherited: 0x00)
struct FAmbientOcclusionCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t RaysPerPixel; // 0x2c(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x30(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t Dilation; // 0x34(0x04)
	float OcclusionFalloff; // 0x38(0x04)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float OcclusionMultiplier; // 0x40(0x04)
	char UseSimpleOcclusionMode : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct SimplygonUObjects.DisplacementCasterSettings
// Size: 0x40 (Inherited: 0x00)
struct FDisplacementCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DistanceScaling; // 0x2c(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x30(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t Dilation; // 0x34(0x04)
	char GenerateScalarDisplacement : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x39(0x01)
	char GenerateTangentSpaceDisplacement : 1; // 0x3a(0x01)
	char pad_3A_1 : 7; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	int32_t NormalMapTexCoordLevel; // 0x3c(0x04)
};

// ScriptStruct SimplygonUObjects.NormalCasterSettings
// Size: 0x38 (Inherited: 0x00)
struct FNormalCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char FlipBackfacingNormals : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x29(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	int32_t Dilation; // 0x2c(0x04)
	char GenerateTangentSpaceNormals : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x31(0x01)
	char FlipGreen : 1; // 0x32(0x01)
	char CalculateBitangentPerFragment : 1; // 0x32(0x01)
	char NormalizeInterpolatedTangentSpace : 1; // 0x32(0x01)
	char pad_32_3 : 5; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// ScriptStruct SimplygonUObjects.OpacityCasterSettings
// Size: 0x38 (Inherited: 0x00)
struct FOpacityCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char OutputSRGB : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x29(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	int32_t Dilation; // 0x2c(0x04)
	enum class EOutputOpacityType OutputOpacityType; // 0x30(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct SimplygonUObjects.ColorCasterSettings
// Size: 0x38 (Inherited: 0x00)
struct FColorCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x01)
	enum class EDitherType DitherType; // 0x11(0x01)
	enum class EFillMode FillMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString OpacityChannel; // 0x18(0x10)
	char UseMultisampling : 1; // 0x28(0x01)
	char BakeOpacityInAlpha : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x29(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	int32_t Dilation; // 0x2c(0x04)
	enum class EOutputOpacityType OutputOpacityType; // 0x30(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x31(0x01)
	char SkipCastingIfNoInputChannel : 1; // 0x32(0x01)
	char OutputSRGB : 1; // 0x32(0x01)
	char pad_32_2 : 6; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

