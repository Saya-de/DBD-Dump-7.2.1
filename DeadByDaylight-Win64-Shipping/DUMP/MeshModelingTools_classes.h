// Class MeshModelingTools.AddPatchToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UAddPatchToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.AddPatchToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UAddPatchToolProperties : UInteractiveToolPropertySet {
	float Width; // 0x68(0x04)
	float Rotation; // 0x6c(0x04)
	int32_t Subdivisions; // 0x70(0x04)
	float Shift; // 0x74(0x04)
};

// Class MeshModelingTools.AddPatchTool
// Size: 0x108 (Inherited: 0x90)
struct UAddPatchTool : USingleClickTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UAddPatchToolProperties* ShapeSettings; // 0x98(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xa0(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa8(0x08)
	char pad_B0[0x58]; // 0xb0(0x58)
};

// Class MeshModelingTools.AddPrimitiveToolBuilder
// Size: 0x40 (Inherited: 0x30)
struct UAddPrimitiveToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class MeshModelingTools.ProceduralShapeToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UProceduralShapeToolProperties : UInteractiveToolPropertySet {
	bool bInstanceIfPossible; // 0x68(0x01)
	enum class EMakeMeshPolygroupMode PolygroupMode; // 0x69(0x01)
	enum class EMakeMeshPlacementType PlaceMode; // 0x6a(0x01)
	bool bSnapToGrid; // 0x6b(0x01)
	enum class EMakeMeshPivotLocation PivotLocation; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float Rotation; // 0x70(0x04)
	bool bAlignShapeToPlacementSurface; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.ProceduralRectangleToolProperties
// Size: 0x88 (Inherited: 0x78)
struct UProceduralRectangleToolProperties : UProceduralShapeToolProperties {
	float Width; // 0x78(0x04)
	float Depth; // 0x7c(0x04)
	int32_t WidthSubdivisions; // 0x80(0x04)
	int32_t DepthSubdivisions; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralBoxToolProperties
// Size: 0x90 (Inherited: 0x88)
struct UProceduralBoxToolProperties : UProceduralRectangleToolProperties {
	float Height; // 0x88(0x04)
	int32_t HeightSubdivisions; // 0x8c(0x04)
};

// Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
// Size: 0x90 (Inherited: 0x88)
struct UProceduralRoundedRectangleToolProperties : UProceduralRectangleToolProperties {
	float CornerRadius; // 0x88(0x04)
	int32_t CornerSlices; // 0x8c(0x04)
};

// Class MeshModelingTools.ProceduralDiscToolProperties
// Size: 0x88 (Inherited: 0x78)
struct UProceduralDiscToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x78(0x04)
	int32_t RadialSlices; // 0x7c(0x04)
	int32_t RadialSubdivisions; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
// Size: 0x90 (Inherited: 0x88)
struct UProceduralPuncturedDiscToolProperties : UProceduralDiscToolProperties {
	float HoleRadius; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class MeshModelingTools.ProceduralTorusToolProperties
// Size: 0x88 (Inherited: 0x78)
struct UProceduralTorusToolProperties : UProceduralShapeToolProperties {
	float MajorRadius; // 0x78(0x04)
	float MinorRadius; // 0x7c(0x04)
	int32_t TubeSlices; // 0x80(0x04)
	int32_t CrossSectionSlices; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralCylinderToolProperties
// Size: 0x88 (Inherited: 0x78)
struct UProceduralCylinderToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x78(0x04)
	float Height; // 0x7c(0x04)
	int32_t RadialSlices; // 0x80(0x04)
	int32_t HeightSubdivisions; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralConeToolProperties
// Size: 0x88 (Inherited: 0x78)
struct UProceduralConeToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x78(0x04)
	float Height; // 0x7c(0x04)
	int32_t RadialSlices; // 0x80(0x04)
	int32_t HeightSubdivisions; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralArrowToolProperties
// Size: 0x90 (Inherited: 0x78)
struct UProceduralArrowToolProperties : UProceduralShapeToolProperties {
	float ShaftRadius; // 0x78(0x04)
	float ShaftHeight; // 0x7c(0x04)
	float HeadRadius; // 0x80(0x04)
	float HeadHeight; // 0x84(0x04)
	int32_t RadialSlices; // 0x88(0x04)
	int32_t TotalSubdivisions; // 0x8c(0x04)
};

// Class MeshModelingTools.ProceduralSphereToolProperties
// Size: 0x88 (Inherited: 0x78)
struct UProceduralSphereToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x78(0x04)
	int32_t LatitudeSlices; // 0x7c(0x04)
	int32_t LongitudeSlices; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralSphericalBoxToolProperties
// Size: 0x80 (Inherited: 0x78)
struct UProceduralSphericalBoxToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x78(0x04)
	int32_t Subdivisions; // 0x7c(0x04)
};

// Class MeshModelingTools.LastActorInfo
// Size: 0x60 (Inherited: 0x30)
struct ULastActorInfo : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct AActor* Actor; // 0x40(0x08)
	struct UStaticMesh* StaticMesh; // 0x48(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x50(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x58(0x08)
};

// Class MeshModelingTools.AddPrimitiveTool
// Size: 0xf8 (Inherited: 0x90)
struct UAddPrimitiveTool : USingleClickTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x98(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xa0(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa8(0x08)
	struct ULastActorInfo* LastGenerated; // 0xb0(0x08)
	struct FString AssetName; // 0xb8(0x10)
	char pad_C8[0x30]; // 0xc8(0x30)
};

// Class MeshModelingTools.AddBoxPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddBoxPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddCylinderPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddCylinderPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddConePrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddConePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddRectanglePrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddRectanglePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddRoundedRectanglePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddDiscPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddDiscPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddPuncturedDiscPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddTorusPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddTorusPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddArrowPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddArrowPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddSpherePrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddSpherePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddSphericalBoxPrimitiveTool
// Size: 0xf8 (Inherited: 0xf8)
struct UAddSphericalBoxPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AlignObjectsToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UAlignObjectsToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.AlignObjectsToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UAlignObjectsToolProperties : UInteractiveToolPropertySet {
	enum class EAlignObjectsAlignTypes AlignType; // 0x68(0x04)
	enum class EAlignObjectsAlignToOptions AlignTo; // 0x6c(0x04)
	enum class EAlignObjectsBoxPoint BoxPosition; // 0x70(0x04)
	bool bAlignX; // 0x74(0x01)
	bool bAlignY; // 0x75(0x01)
	bool bAlignZ; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// Class MeshModelingTools.AlignObjectsTool
// Size: 0x148 (Inherited: 0x98)
struct UAlignObjectsTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UAlignObjectsToolProperties* AlignProps; // 0xa0(0x08)
	char pad_A8[0xa0]; // 0xa8(0xa0)
};

// Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UBakeMeshAttributeMapsToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
// Size: 0xa8 (Inherited: 0x68)
struct UBakeMeshAttributeMapsToolProperties : UInteractiveToolPropertySet {
	enum class EBakeMapType MapType; // 0x68(0x04)
	enum class EBakeTextureResolution Resolution; // 0x6c(0x04)
	bool bUseWorldSpace; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	struct FString UVLayer; // 0x78(0x10)
	struct TArray<struct FString> UVLayerNamesList; // 0x88(0x10)
	struct TArray<struct UTexture2D*> Result; // 0x98(0x10)

	struct TArray<struct FString> GetUVLayerNamesFunc(); // Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc // (Final|Native|Public) // @ game+0x41d6f90
};

// Class MeshModelingTools.BakedNormalMapToolProperties
// Size: 0x68 (Inherited: 0x68)
struct UBakedNormalMapToolProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.BakedOcclusionMapToolProperties
// Size: 0x90 (Inherited: 0x68)
struct UBakedOcclusionMapToolProperties : UInteractiveToolPropertySet {
	enum class EOcclusionMapPreview Preview; // 0x68(0x04)
	int32_t OcclusionRays; // 0x6c(0x04)
	float MaxDistance; // 0x70(0x04)
	float SpreadAngle; // 0x74(0x04)
	enum class EOcclusionMapDistribution Distribution; // 0x78(0x04)
	bool bGaussianBlur; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float BlurRadius; // 0x80(0x04)
	float BiasAngle; // 0x84(0x04)
	enum class ENormalMapSpace NormalSpace; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
// Size: 0x70 (Inherited: 0x68)
struct UBakedOcclusionMapVisualizationProperties : UInteractiveToolPropertySet {
	float BaseGrayLevel; // 0x68(0x04)
	float OcclusionMultiplier; // 0x6c(0x04)
};

// Class MeshModelingTools.BakedCurvatureMapToolProperties
// Size: 0x88 (Inherited: 0x68)
struct UBakedCurvatureMapToolProperties : UInteractiveToolPropertySet {
	enum class EBakedCurvatureTypeMode CurvatureType; // 0x68(0x04)
	enum class EBakedCurvatureColorMode ColorMode; // 0x6c(0x04)
	float RangeMultiplier; // 0x70(0x04)
	float MinRangeMultiplier; // 0x74(0x04)
	enum class EBakedCurvatureClampMode Clamping; // 0x78(0x04)
	bool bGaussianBlur; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float BlurRadius; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.BakedTexture2DImageProperties
// Size: 0x78 (Inherited: 0x68)
struct UBakedTexture2DImageProperties : UInteractiveToolPropertySet {
	struct UTexture2D* SourceTexture; // 0x68(0x08)
	int32_t UVLayer; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.BakeMeshAttributeMapsTool
// Size: 0x500 (Inherited: 0x98)
struct UBakeMeshAttributeMapsTool : UMultiSelectionTool {
	struct UBakeMeshAttributeMapsToolProperties* Settings; // 0x98(0x08)
	struct UBakedNormalMapToolProperties* NormalMapProps; // 0xa0(0x08)
	struct UBakedOcclusionMapToolProperties* OcclusionMapProps; // 0xa8(0x08)
	struct UBakedCurvatureMapToolProperties* CurvatureMapProps; // 0xb0(0x08)
	struct UBakedTexture2DImageProperties* Texture2DProps; // 0xb8(0x08)
	struct UBakedOcclusionMapVisualizationProperties* VisualizationProps; // 0xc0(0x08)
	char pad_C8[0x10]; // 0xc8(0x10)
	struct UMaterialInstanceDynamic* PreviewMaterial; // 0xd8(0x08)
	struct UMaterialInstanceDynamic* BentNormalPreviewMaterial; // 0xe0(0x08)
	char pad_E8[0x360]; // 0xe8(0x360)
	struct UTexture2D* CachedNormalMap; // 0x448(0x08)
	char pad_450[0x28]; // 0x450(0x28)
	struct UTexture2D* CachedOcclusionMap; // 0x478(0x08)
	struct UTexture2D* CachedBentNormalMap; // 0x480(0x08)
	char pad_488[0x28]; // 0x488(0x28)
	struct UTexture2D* CachedCurvatureMap; // 0x4b0(0x08)
	char pad_4B8[0x10]; // 0x4b8(0x10)
	struct UTexture2D* CachedMeshPropertyMap; // 0x4c8(0x08)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct UTexture2D* CachedTexture2DImageMap; // 0x4e0(0x08)
	struct UTexture2D* EmptyNormalMap; // 0x4e8(0x08)
	struct UTexture2D* EmptyColorMapBlack; // 0x4f0(0x08)
	struct UTexture2D* EmptyColorMapWhite; // 0x4f8(0x08)
};

// Class MeshModelingTools.BakeTransformToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UBakeTransformToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.BakeTransformToolProperties
// Size: 0x70 (Inherited: 0x68)
struct UBakeTransformToolProperties : UInteractiveToolPropertySet {
	bool bBakeRotation; // 0x68(0x01)
	enum class EBakeScaleMethod BakeScale; // 0x69(0x01)
	bool bRecenterPivot; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// Class MeshModelingTools.BakeTransformTool
// Size: 0xc0 (Inherited: 0x98)
struct UBakeTransformTool : UMultiSelectionTool {
	struct UBakeTransformToolProperties* BasicProperties; // 0x98(0x08)
	char pad_A0[0x20]; // 0xa0(0x20)
};

// Class MeshModelingTools.PhysicsObjectToolPropertySet
// Size: 0xc0 (Inherited: 0x68)
struct UPhysicsObjectToolPropertySet : UInteractiveToolPropertySet {
	struct FString ObjectName; // 0x68(0x10)
	enum class ECollisionGeometryMode CollisionType; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FPhysicsSphereData> Spheres; // 0x80(0x10)
	struct TArray<struct FPhysicsBoxData> Boxes; // 0x90(0x10)
	struct TArray<struct FPhysicsCapsuleData> Capsules; // 0xa0(0x10)
	struct TArray<struct FPhysicsConvexData> Convexes; // 0xb0(0x10)
};

// Class MeshModelingTools.CollisionGeometryVisualizationProperties
// Size: 0x78 (Inherited: 0x68)
struct UCollisionGeometryVisualizationProperties : UInteractiveToolPropertySet {
	float LineThickness; // 0x68(0x04)
	bool bShowHidden; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FColor Color; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.CombineMeshesToolBuilder
// Size: 0x40 (Inherited: 0x30)
struct UCombineMeshesToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class MeshModelingTools.CombineMeshesToolProperties
// Size: 0x90 (Inherited: 0x68)
struct UCombineMeshesToolProperties : UInteractiveToolPropertySet {
	bool bIsDuplicateMode; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class ECombineTargetType WriteOutputTo; // 0x6c(0x04)
	struct FString OutputName; // 0x70(0x10)
	struct FString OutputAsset; // 0x80(0x10)
};

// Class MeshModelingTools.CombineMeshesTool
// Size: 0xc0 (Inherited: 0x98)
struct UCombineMeshesTool : UMultiSelectionTool {
	struct UCombineMeshesToolProperties* BasicProperties; // 0x98(0x08)
	struct UOnAcceptHandleSourcesProperties* HandleSourceProperties; // 0xa0(0x08)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UConvertToPolygonsToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.ConvertToPolygonsToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UConvertToPolygonsToolProperties : UInteractiveToolPropertySet {
	enum class EConvertToPolygonsMode ConversionMode; // 0x68(0x04)
	float AngleTolerance; // 0x6c(0x04)
	bool bCalculateNormals; // 0x70(0x01)
	bool bShowGroupColors; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class MeshModelingTools.ConvertToPolygonsTool
// Size: 0x3e8 (Inherited: 0x90)
struct UConvertToPolygonsTool : USingleSelectionTool {
	struct UConvertToPolygonsToolProperties* Settings; // 0x90(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x98(0x08)
	char pad_A0[0x348]; // 0xa0(0x348)
};

// Class MeshModelingTools.CSGMeshesToolProperties
// Size: 0x70 (Inherited: 0x68)
struct UCSGMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ECSGOperation Operation; // 0x68(0x01)
	bool bShowNewBoundaryEdges; // 0x69(0x01)
	bool bAttemptFixHoles; // 0x6a(0x01)
	bool bOnlyUseFirstMeshMaterials; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.CSGMeshesTool
// Size: 0x128 (Inherited: 0xf8)
struct UCSGMeshesTool : UBaseCreateFromSelectedTool {
	struct UCSGMeshesToolProperties* CSGProperties; // 0xf8(0x08)
	char pad_100[0x10]; // 0x100(0x10)
	struct ULineSetComponent* DrawnLineSet; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
};

// Class MeshModelingTools.CSGMeshesToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UCSGMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UDeformMeshPolygonsToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// Size: 0x88 (Inherited: 0x68)
struct UDeformMeshPolygonsTransformProperties : UInteractiveToolPropertySet {
	enum class EGroupTopologyDeformationStrategy DeformationStrategy; // 0x68(0x01)
	enum class EQuickTransformerMode TransformMode; // 0x69(0x01)
	bool bSelectFaces; // 0x6a(0x01)
	bool bSelectEdges; // 0x6b(0x01)
	bool bSelectVertices; // 0x6c(0x01)
	bool bSnapToWorldGrid; // 0x6d(0x01)
	bool bShowWireframe; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	enum class EWeightScheme SelectedWeightScheme; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	double HandleWeight; // 0x78(0x08)
	bool bPostFixHandles; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class MeshModelingTools.DeformMeshPolygonsTool
// Size: 0x13d0 (Inherited: 0xc8)
struct UDeformMeshPolygonsTool : UMeshSurfacePointTool {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd0(0x08)
	struct UDeformMeshPolygonsTransformProperties* TransformProps; // 0xd8(0x08)
	char pad_E0[0x12f0]; // 0xe0(0x12f0)
};

// Class MeshModelingTools.DisplaceMeshCommonProperties
// Size: 0xa0 (Inherited: 0x68)
struct UDisplaceMeshCommonProperties : UInteractiveToolPropertySet {
	enum class EDisplaceMeshToolDisplaceType DisplacementType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float DisplaceIntensity; // 0x6c(0x04)
	int32_t RandomSeed; // 0x70(0x04)
	int32_t Subdivisions; // 0x74(0x04)
	struct FName WeightMap; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FString> WeightMapsList; // 0x88(0x10)
	bool bInvertWeightMap; // 0x98(0x01)
	bool bDisableSizeWarning; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc // (Final|Native|Public) // @ game+0x41d6f90
};

// Class MeshModelingTools.DisplaceMeshTextureMapProperties
// Size: 0x70 (Inherited: 0x68)
struct UDisplaceMeshTextureMapProperties : UInteractiveToolPropertySet {
	struct UTexture2D* DisplacementMap; // 0x68(0x08)
};

// Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
// Size: 0x80 (Inherited: 0x68)
struct UDisplaceMeshDirectionalFilterProperties : UInteractiveToolPropertySet {
	bool bEnableFilter; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector FilterDirection; // 0x6c(0x0c)
	float FilterWidth; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
// Size: 0x78 (Inherited: 0x68)
struct UDisplaceMeshPerlinNoiseProperties : UInteractiveToolPropertySet {
	struct TArray<struct FPerlinLayerProperties> PerlinLayerProperties; // 0x68(0x10)
};

// Class MeshModelingTools.DisplaceMeshSineWaveProperties
// Size: 0x80 (Inherited: 0x68)
struct UDisplaceMeshSineWaveProperties : UInteractiveToolPropertySet {
	float SineWaveFrequency; // 0x68(0x04)
	float SineWavePhaseShift; // 0x6c(0x04)
	struct FVector SineWaveDirection; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.DisplaceMeshToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UDisplaceMeshToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.DisplaceMeshTool
// Size: 0x3f8 (Inherited: 0x90)
struct UDisplaceMeshTool : USingleSelectionTool {
	struct UDisplaceMeshCommonProperties* CommonProperties; // 0x90(0x08)
	struct UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties; // 0x98(0x08)
	struct UDisplaceMeshTextureMapProperties* TextureMapProperties; // 0xa0(0x08)
	struct UDisplaceMeshPerlinNoiseProperties* NoiseProperties; // 0xa8(0x08)
	struct UDisplaceMeshSineWaveProperties* SineWaveProperties; // 0xb0(0x08)
	char pad_B8[0x340]; // 0xb8(0x340)
};

// Class MeshModelingTools.DrawAndRevolveToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UDrawAndRevolveToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.RevolveProperties
// Size: 0xb8 (Inherited: 0x68)
struct URevolveProperties : UInteractiveToolPropertySet {
	double RevolutionDegrees; // 0x68(0x08)
	double RevolutionDegreesOffset; // 0x70(0x08)
	int32_t Steps; // 0x78(0x04)
	bool bReverseRevolutionDirection; // 0x7c(0x01)
	bool bFlipMesh; // 0x7d(0x01)
	bool bProfileIsCrossSectionOfSide; // 0x7e(0x01)
	enum class ERevolvePropertiesPolygroupMode PolygroupMode; // 0x7f(0x01)
	enum class ERevolvePropertiesQuadSplit QuadSplitMode; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	double DiagonalProportionTolerance; // 0x88(0x08)
	enum class ERevolvePropertiesCapFillMode CapFillMode; // 0x90(0x01)
	bool bWeldFullRevolution; // 0x91(0x01)
	bool bWeldVertsOnAxis; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
	double AxisWeldTolerance; // 0x98(0x08)
	bool bSharpNormals; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	double SharpNormalAngleTolerance; // 0xa8(0x08)
	bool bFlipVs; // 0xb0(0x01)
	bool bUVsSkipFullyWeldedEdges; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// Class MeshModelingTools.RevolveToolProperties
// Size: 0xd8 (Inherited: 0xb8)
struct URevolveToolProperties : URevolveProperties {
	bool bConnectOpenProfileToAxis; // 0xb8(0x01)
	bool bSnapToWorldGrid; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	struct FVector DrawPlaneOrigin; // 0xbc(0x0c)
	struct FRotator DrawPlaneOrientation; // 0xc8(0x0c)
	bool bEnableSnapping; // 0xd4(0x01)
	bool bAllowedToEditDrawPlane; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
};

// Class MeshModelingTools.RevolveOperatorFactory
// Size: 0x40 (Inherited: 0x30)
struct URevolveOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UDrawAndRevolveTool* RevolveTool; // 0x38(0x08)
};

// Class MeshModelingTools.DrawAndRevolveTool
// Size: 0x130 (Inherited: 0x88)
struct UDrawAndRevolveTool : UInteractiveTool {
	char pad_88[0x80]; // 0x88(0x80)
	struct UCurveControlPointsMechanic* ControlPointsMechanic; // 0x108(0x08)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x110(0x08)
	struct URevolveToolProperties* Settings; // 0x118(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x120(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x128(0x08)
};

// Class MeshModelingTools.DrawPolygonToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UDrawPolygonToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// Size: 0x80 (Inherited: 0x68)
struct UDrawPolygonToolStandardProperties : UInteractiveToolPropertySet {
	enum class EDrawPolygonDrawMode PolygonType; // 0x68(0x01)
	enum class EDrawPolygonOutputMode OutputMode; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float FeatureSizeRatio; // 0x6c(0x04)
	float ExtrudeHeight; // 0x70(0x04)
	int32_t Steps; // 0x74(0x04)
	bool bAllowSelfIntersections; // 0x78(0x01)
	bool bShowGizmo; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// Size: 0x80 (Inherited: 0x68)
struct UDrawPolygonToolSnapProperties : UInteractiveToolPropertySet {
	bool bEnableSnapping; // 0x68(0x01)
	bool bSnapToWorldGrid; // 0x69(0x01)
	bool bSnapToVertices; // 0x6a(0x01)
	bool bSnapToEdges; // 0x6b(0x01)
	bool bSnapToAngles; // 0x6c(0x01)
	bool bSnapToLengths; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float SegmentLength; // 0x70(0x04)
	bool bHitSceneObjects; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float HitNormalOffset; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.DrawPolygonTool
// Size: 0x580 (Inherited: 0x88)
struct UDrawPolygonTool : UInteractiveTool {
	char pad_88[0x8]; // 0x88(0x08)
	struct UDrawPolygonToolStandardProperties* PolygonProperties; // 0x90(0x08)
	struct UDrawPolygonToolSnapProperties* SnapProperties; // 0x98(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xa0(0x08)
	char pad_A8[0xb8]; // 0xa8(0xb8)
	struct UPreviewMesh* PreviewMesh; // 0x160(0x08)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x168(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x170(0x08)
	char pad_178[0x3d8]; // 0x178(0x3d8)
	struct UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x550(0x08)
	char pad_558[0x28]; // 0x558(0x28)
};

// Class MeshModelingTools.DrawPolyPathToolBuilder
// Size: 0x40 (Inherited: 0x38)
struct UDrawPolyPathToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.DrawPolyPathProperties
// Size: 0x88 (Inherited: 0x68)
struct UDrawPolyPathProperties : UInteractiveToolPropertySet {
	enum class EDrawPolyPathOutputMode OutputType; // 0x68(0x04)
	enum class EDrawPolyPathWidthMode WidthMode; // 0x6c(0x04)
	float Width; // 0x70(0x04)
	enum class EDrawPolyPathHeightMode HeightMode; // 0x74(0x04)
	float Height; // 0x78(0x04)
	float RampStartRatio; // 0x7c(0x04)
	bool bSnapToWorldGrid; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// Size: 0x70 (Inherited: 0x68)
struct UDrawPolyPathExtrudeProperties : UInteractiveToolPropertySet {
	enum class EDrawPolyPathExtrudeDirection Direction; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.DrawPolyPathTool
// Size: 0x210 (Inherited: 0x88)
struct UDrawPolyPathTool : UInteractiveTool {
	char pad_88[0x20]; // 0x88(0x20)
	struct UDrawPolyPathProperties* TransformProps; // 0xa8(0x08)
	struct UDrawPolyPathExtrudeProperties* ExtrudeProperties; // 0xb0(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xb8(0x08)
	char pad_C0[0x80]; // 0xc0(0x80)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x140(0x08)
	char pad_148[0xa0]; // 0x148(0xa0)
	struct UPolyEditPreviewMesh* EditPreview; // 0x1e8(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x1f0(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x1f8(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x200(0x08)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class MeshModelingTools.DynamicMeshBrushTool
// Size: 0x210 (Inherited: 0x1d0)
struct UDynamicMeshBrushTool : UBaseBrushTool {
	struct UPreviewMesh* PreviewMesh; // 0x1d0(0x08)
	char pad_1D8[0x38]; // 0x1d8(0x38)
};

// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// Size: 0x40 (Inherited: 0x38)
struct UDynamicMeshSculptToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.BrushSculptProperties
// Size: 0x80 (Inherited: 0x68)
struct UBrushSculptProperties : UInteractiveToolPropertySet {
	bool bIsRemeshingEnabled; // 0x68(0x01)
	enum class EDynamicMeshSculptBrushType PrimaryBrushType; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float PrimaryBrushSpeed; // 0x6c(0x04)
	bool bPreserveUVFlow; // 0x70(0x01)
	bool bFreezeTarget; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float SmoothBrushSpeed; // 0x74(0x04)
	bool bDetailPreservingSmooth; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class MeshModelingTools.DynamicSculptToolActions
// Size: 0x70 (Inherited: 0x68)
struct UDynamicSculptToolActions : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)

	void DiscardAttributes(); // Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes // (Final|Native|Public) // @ game+0x41dbbe0
};

// Class MeshModelingTools.MeshConstraintProperties
// Size: 0x70 (Inherited: 0x68)
struct UMeshConstraintProperties : UInteractiveToolPropertySet {
	bool bPreserveSharpEdges; // 0x68(0x01)
	enum class EMeshBoundaryConstraint MeshBoundaryConstraint; // 0x69(0x01)
	enum class EGroupBoundaryConstraint GroupBoundaryConstraint; // 0x6a(0x01)
	enum class EMaterialBoundaryConstraint MaterialBoundaryConstraint; // 0x6b(0x01)
	bool bPreventNormalFlips; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.RemeshProperties
// Size: 0x78 (Inherited: 0x70)
struct URemeshProperties : UMeshConstraintProperties {
	float SmoothingStrength; // 0x70(0x04)
	bool bFlips; // 0x74(0x01)
	bool bSplits; // 0x75(0x01)
	bool bCollapses; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// Class MeshModelingTools.BrushRemeshProperties
// Size: 0x88 (Inherited: 0x78)
struct UBrushRemeshProperties : URemeshProperties {
	bool bEnableRemeshing; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t TriangleSize; // 0x7c(0x04)
	int32_t PreserveDetail; // 0x80(0x04)
	int32_t Iterations; // 0x84(0x04)
};

// Class MeshModelingTools.FixedPlaneBrushProperties
// Size: 0x90 (Inherited: 0x68)
struct UFixedPlaneBrushProperties : UInteractiveToolPropertySet {
	bool bPropertySetEnabled; // 0x68(0x01)
	bool bShowGizmo; // 0x69(0x01)
	bool bSnapToGrid; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	struct FVector position; // 0x6c(0x0c)
	char pad_78[0x8]; // 0x78(0x08)
	struct FQuat Rotation; // 0x80(0x10)
};

// Class MeshModelingTools.DynamicMeshSculptTool
// Size: 0xd20 (Inherited: 0xc8)
struct UDynamicMeshSculptTool : UMeshSurfacePointTool {
	struct USculptBrushProperties* BrushProperties; // 0xc8(0x08)
	struct UBrushSculptProperties* SculptProperties; // 0xd0(0x08)
	struct USculptMaxBrushProperties* SculptMaxBrushProperties; // 0xd8(0x08)
	struct UKelvinBrushProperties* KelvinBrushProperties; // 0xe0(0x08)
	struct UBrushRemeshProperties* RemeshProperties; // 0xe8(0x08)
	struct UFixedPlaneBrushProperties* GizmoProperties; // 0xf0(0x08)
	struct UMeshEditingViewProperties* ViewProperties; // 0xf8(0x08)
	struct UDynamicSculptToolActions* SculptToolActions; // 0x100(0x08)
	char pad_108[0x38]; // 0x108(0x38)
	struct UBrushStampIndicator* BrushIndicator; // 0x140(0x08)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x148(0x08)
	struct UPreviewMesh* BrushIndicatorMesh; // 0x150(0x08)
	struct UOctreeDynamicMeshComponent* DynamicMeshComponent; // 0x158(0x08)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x160(0x08)
	char pad_168[0xba0]; // 0x168(0xba0)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xd08(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xd10(0x08)
	char pad_D18[0x8]; // 0xd18(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UEdgeLoopInsertionToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionProperties
// Size: 0x98 (Inherited: 0x68)
struct UEdgeLoopInsertionProperties : UInteractiveToolPropertySet {
	enum class EEdgeLoopPositioningMode PositionMode; // 0x68(0x04)
	enum class EEdgeLoopInsertionMode InsertionMode; // 0x6c(0x04)
	int32_t NumLoops; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	double ProportionOffset; // 0x78(0x08)
	double DistanceOffset; // 0x80(0x08)
	bool bInteractive; // 0x88(0x01)
	bool bFlipOffsetDirection; // 0x89(0x01)
	bool bWireframe; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
	double VertexTolerance; // 0x90(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
// Size: 0x40 (Inherited: 0x30)
struct UEdgeLoopInsertionOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UEdgeLoopInsertionTool* Tool; // 0x38(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionTool
// Size: 0x500 (Inherited: 0x90)
struct UEdgeLoopInsertionTool : USingleSelectionTool {
	char pad_90[0x10]; // 0x90(0x10)
	struct UEdgeLoopInsertionProperties* Settings; // 0xa0(0x08)
	char pad_A8[0x258]; // 0xa8(0x258)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x300(0x08)
	char pad_308[0x1f8]; // 0x308(0x1f8)
};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// Size: 0x40 (Inherited: 0x38)
struct UEditMeshPolygonsToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.PolyEditCommonProperties
// Size: 0x78 (Inherited: 0x68)
struct UPolyEditCommonProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class ELocalFrameMode LocalFrameMode; // 0x6c(0x04)
	bool BlockRotation; // 0x70(0x01)
	bool bSnapToWorldGrid; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// Size: 0x70 (Inherited: 0x68)
struct UEditMeshPolygonsToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// Size: 0x70 (Inherited: 0x70)
struct UEditMeshPolygonsToolActions : UEditMeshPolygonsToolActionPropertySet {

	void Retriangulate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate // (Final|Native|Public) // @ game+0x41e0940
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals // (Final|Native|Public) // @ game+0x41e0920
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Outset // (Final|Native|Public) // @ game+0x41e08c0
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Offset // (Final|Native|Public) // @ game+0x41e08a0
	void Merge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Merge // (Final|Native|Public) // @ game+0x41e0880
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Inset // (Final|Native|Public) // @ game+0x41e0840
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Flip // (Final|Native|Public) // @ game+0x41e07e0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude // (Final|Native|Public) // @ game+0x41e07a0
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect // (Final|Native|Public) // @ game+0x41e0780
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Delete // (Final|Native|Public) // @ game+0x41e0760
	void Decompose(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose // (Final|Native|Public) // @ game+0x41e0740
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces // (Final|Native|Public) // @ game+0x41e0720
};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// Size: 0x70 (Inherited: 0x70)
struct UEditMeshPolygonsToolActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals // (Final|Native|Public) // @ game+0x41e0920
	void Poke(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke // (Final|Native|Public) // @ game+0x41e0900
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset // (Final|Native|Public) // @ game+0x41e08c0
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset // (Final|Native|Public) // @ game+0x41e08a0
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset // (Final|Native|Public) // @ game+0x41e0840
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip // (Final|Native|Public) // @ game+0x41e07e0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude // (Final|Native|Public) // @ game+0x41e07a0
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect // (Final|Native|Public) // @ game+0x41e0780
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete // (Final|Native|Public) // @ game+0x41e0760
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces // (Final|Native|Public) // @ game+0x41e0720
};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// Size: 0x70 (Inherited: 0x70)
struct UEditMeshPolygonsToolUVActions : UEditMeshPolygonsToolActionPropertySet {

	void PlanarProjection(); // Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection // (Final|Native|Public) // @ game+0x41e08e0
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// Size: 0x70 (Inherited: 0x70)
struct UEditMeshPolygonsToolEdgeActions : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld // (Final|Native|Public) // @ game+0x41e0a00
	void Straighten(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten // (Final|Native|Public) // @ game+0x41e09c0
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole // (Final|Native|Public) // @ game+0x41e07c0
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// Size: 0x70 (Inherited: 0x70)
struct UEditMeshPolygonsToolEdgeActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld // (Final|Native|Public) // @ game+0x41e0a00
	void Split(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split // (Final|Native|Public) // @ game+0x41e09a0
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip // (Final|Native|Public) // @ game+0x41e0800
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole // (Final|Native|Public) // @ game+0x41e07c0
	void Collapse(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse // (Final|Native|Public) // @ game+0x41e0700
};

// Class MeshModelingTools.PolyEditExtrudeProperties
// Size: 0x70 (Inherited: 0x68)
struct UPolyEditExtrudeProperties : UInteractiveToolPropertySet {
	enum class EPolyEditExtrudeDirection Direction; // 0x68(0x04)
	bool bShellsToSolids; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.PolyEditOffsetProperties
// Size: 0x70 (Inherited: 0x68)
struct UPolyEditOffsetProperties : UInteractiveToolPropertySet {
	bool bUseFaceNormals; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.PolyEditInsetProperties
// Size: 0x78 (Inherited: 0x68)
struct UPolyEditInsetProperties : UInteractiveToolPropertySet {
	bool bReproject; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Softness; // 0x6c(0x04)
	bool bBoundaryOnly; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float AreaScale; // 0x74(0x04)
};

// Class MeshModelingTools.PolyEditOutsetProperties
// Size: 0x78 (Inherited: 0x68)
struct UPolyEditOutsetProperties : UInteractiveToolPropertySet {
	float Softness; // 0x68(0x04)
	bool bBoundaryOnly; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float AreaScale; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.PolyEditCutProperties
// Size: 0x70 (Inherited: 0x68)
struct UPolyEditCutProperties : UInteractiveToolPropertySet {
	enum class EPolyEditCutPlaneOrientation Orientation; // 0x68(0x04)
	bool bSnapToVertices; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.PolyEditSetUVProperties
// Size: 0x70 (Inherited: 0x68)
struct UPolyEditSetUVProperties : UInteractiveToolPropertySet {
	bool bShowMaterial; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.EditMeshPolygonsTool
// Size: 0x7e0 (Inherited: 0xc8)
struct UEditMeshPolygonsTool : UMeshSurfacePointTool {
	char pad_C8[0x10]; // 0xc8(0x10)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd8(0x08)
	struct UPolyEditCommonProperties* CommonProps; // 0xe0(0x08)
	struct UEditMeshPolygonsToolActions* EditActions; // 0xe8(0x08)
	struct UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0xf0(0x08)
	struct UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0xf8(0x08)
	struct UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0x100(0x08)
	struct UEditMeshPolygonsToolUVActions* EditUVActions; // 0x108(0x08)
	struct UPolyEditExtrudeProperties* ExtrudeProperties; // 0x110(0x08)
	struct UPolyEditOffsetProperties* OffsetProperties; // 0x118(0x08)
	struct UPolyEditInsetProperties* InsetProperties; // 0x120(0x08)
	struct UPolyEditOutsetProperties* OutsetProperties; // 0x128(0x08)
	struct UPolyEditCutProperties* CutProperties; // 0x130(0x08)
	struct UPolyEditSetUVProperties* SetUVProperties; // 0x138(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)
	struct UMultiTransformer* MultiTransformer; // 0x150(0x08)
	char pad_158[0x358]; // 0x158(0x358)
	struct UPolyEditPreviewMesh* EditPreview; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x4c0(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x4c8(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x4d0(0x08)
	char pad_4D8[0x308]; // 0x4d8(0x308)
};

// Class MeshModelingTools.EditNormalsToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UEditNormalsToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.EditNormalsToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UEditNormalsToolProperties : UInteractiveToolPropertySet {
	bool bRecomputeNormals; // 0x68(0x01)
	enum class ENormalCalculationMethod NormalCalculationMethod; // 0x69(0x01)
	bool bFixInconsistentNormals; // 0x6a(0x01)
	bool bInvertNormals; // 0x6b(0x01)
	enum class ESplitNormalMethod SplitNormalMethod; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float SharpEdgeAngleThreshold; // 0x70(0x04)
	bool bAllowSharpVertices; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.EditNormalsAdvancedProperties
// Size: 0x68 (Inherited: 0x68)
struct UEditNormalsAdvancedProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.EditNormalsOperatorFactory
// Size: 0x48 (Inherited: 0x30)
struct UEditNormalsOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UEditNormalsTool* Tool; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class MeshModelingTools.EditNormalsTool
// Size: 0x110 (Inherited: 0x98)
struct UEditNormalsTool : UMultiSelectionTool {
	struct UEditNormalsToolProperties* BasicProperties; // 0x98(0x08)
	struct UEditNormalsAdvancedProperties* AdvancedProperties; // 0xa0(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8(0x10)
	char pad_B8[0x58]; // 0xb8(0x58)
};

// Class MeshModelingTools.EditPivotToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UEditPivotToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.EditPivotToolProperties
// Size: 0x70 (Inherited: 0x68)
struct UEditPivotToolProperties : UInteractiveToolPropertySet {
	bool bEnableSnapDragging; // 0x68(0x01)
	enum class EEditPivotSnapDragRotationMode RotationMode; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class MeshModelingTools.EditPivotToolActionPropertySet
// Size: 0x78 (Inherited: 0x68)
struct UEditPivotToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)
	bool bUseWorldBox; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	void Top(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Top // (Final|Native|Public) // @ game+0x41e09e0
	void Right(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Right // (Final|Native|Public) // @ game+0x41e0960
	void Left(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Left // (Final|Native|Public) // @ game+0x41e0860
	void Front(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Front // (Final|Native|Public) // @ game+0x41e0820
	void Center(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Center // (Final|Native|Public) // @ game+0x41e06c0
	void Bottom(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom // (Final|Native|Public) // @ game+0x41e06a0
	void Back(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Back // (Final|Native|Public) // @ game+0x41e0680
};

// Class MeshModelingTools.EditPivotTool
// Size: 0x210 (Inherited: 0x98)
struct UEditPivotTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UEditPivotToolProperties* TransformProps; // 0xa0(0x08)
	struct UEditPivotToolActionPropertySet* EditPivotActions; // 0xa8(0x08)
	char pad_B0[0xd0]; // 0xb0(0xd0)
	struct TArray<struct FEditPivotTarget> ActiveGizmos; // 0x180(0x10)
	char pad_190[0x80]; // 0x190(0x80)
};

// Class MeshModelingTools.EditUVIslandsToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UEditUVIslandsToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.EditUVIslandsTool
// Size: 0x390 (Inherited: 0xc8)
struct UEditUVIslandsTool : UMeshSurfacePointTool {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xd0(0x08)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xd8(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xe0(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UMultiTransformer* MultiTransformer; // 0xf8(0x08)
	char pad_100[0x290]; // 0x100(0x290)
};

// Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UExtractCollisionGeometryToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.ExtractCollisionGeometryTool
// Size: 0x338 (Inherited: 0x90)
struct UExtractCollisionGeometryTool : USingleSelectionTool {
	struct UCollisionGeometryVisualizationProperties* VizSettings; // 0x90(0x08)
	struct UPhysicsObjectToolPropertySet* ObjectProps; // 0x98(0x08)
	struct UPreviewGeometry* PreviewElements; // 0xa0(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa8(0x08)
	char pad_B0[0x288]; // 0xb0(0x288)
};

// Class MeshModelingTools.GroupEdgeInsertionToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UGroupEdgeInsertionToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.GroupEdgeInsertionProperties
// Size: 0x78 (Inherited: 0x68)
struct UGroupEdgeInsertionProperties : UInteractiveToolPropertySet {
	enum class EGroupEdgeInsertionMode InsertionMode; // 0x68(0x04)
	bool bWireframe; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	double VertexTolerance; // 0x70(0x08)
};

// Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
// Size: 0x40 (Inherited: 0x30)
struct UGroupEdgeInsertionOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UGroupEdgeInsertionTool* Tool; // 0x38(0x08)
};

// Class MeshModelingTools.GroupEdgeInsertionTool
// Size: 0x560 (Inherited: 0x90)
struct UGroupEdgeInsertionTool : USingleSelectionTool {
	char pad_90[0x10]; // 0x90(0x10)
	struct UGroupEdgeInsertionProperties* Settings; // 0xa0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8(0x08)
	char pad_B0[0x4b0]; // 0xb0(0x4b0)
};

// Class MeshModelingTools.HoleFillToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UHoleFillToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.SmoothHoleFillProperties
// Size: 0x90 (Inherited: 0x68)
struct USmoothHoleFillProperties : UInteractiveToolPropertySet {
	bool bConstrainToHoleInterior; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t RemeshingExteriorRegionWidth; // 0x6c(0x04)
	int32_t SmoothingExteriorRegionWidth; // 0x70(0x04)
	int32_t SmoothingInteriorRegionWidth; // 0x74(0x04)
	float InteriorSmoothness; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	double FillDensityScalar; // 0x80(0x08)
	bool bProjectDuringRemesh; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class MeshModelingTools.HoleFillToolProperties
// Size: 0x70 (Inherited: 0x68)
struct UHoleFillToolProperties : UInteractiveToolPropertySet {
	enum class EHoleFillOpFillType FillType; // 0x68(0x01)
	bool bRemoveIsolatedTriangles; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class MeshModelingTools.HoleFillToolActions
// Size: 0x70 (Inherited: 0x68)
struct UHoleFillToolActions : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)

	void SelectAll(); // Function MeshModelingTools.HoleFillToolActions.SelectAll // (Final|Native|Public) // @ game+0x41e0980
	void Clear(); // Function MeshModelingTools.HoleFillToolActions.Clear // (Final|Native|Public) // @ game+0x41e06e0
};

// Class MeshModelingTools.HoleFillStatisticsProperties
// Size: 0xb8 (Inherited: 0x68)
struct UHoleFillStatisticsProperties : UInteractiveToolPropertySet {
	struct FString InitialHoles; // 0x68(0x10)
	struct FString SelectedHoles; // 0x78(0x10)
	struct FString SuccessfulFills; // 0x88(0x10)
	struct FString FailedFills; // 0x98(0x10)
	struct FString RemainingHoles; // 0xa8(0x10)
};

// Class MeshModelingTools.HoleFillOperatorFactory
// Size: 0x40 (Inherited: 0x30)
struct UHoleFillOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UHoleFillTool* FillTool; // 0x38(0x08)
};

// Class MeshModelingTools.HoleFillTool
// Size: 0x1e8 (Inherited: 0x90)
struct UHoleFillTool : USingleSelectionTool {
	char pad_90[0x10]; // 0x90(0x10)
	struct USmoothHoleFillProperties* SmoothHoleFillProperties; // 0xa0(0x08)
	struct UHoleFillToolProperties* Properties; // 0xa8(0x08)
	struct UHoleFillToolActions* Actions; // 0xb0(0x08)
	struct UHoleFillStatisticsProperties* Statistics; // 0xb8(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xc0(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0xc8(0x08)
	char pad_D0[0x118]; // 0xd0(0x118)
};

// Class MeshModelingTools.MeshSculptBrushOpProps
// Size: 0x68 (Inherited: 0x68)
struct UMeshSculptBrushOpProps : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.BaseKelvinletBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UBaseKelvinletBrushOpProps : UMeshSculptBrushOpProps {
	float Stiffness; // 0x68(0x04)
	float Incompressiblity; // 0x6c(0x04)
	int32_t BrushSteps; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.ScaleKelvinletBrushOpProps
// Size: 0x80 (Inherited: 0x78)
struct UScaleKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Strength; // 0x78(0x04)
	float Falloff; // 0x7c(0x04)
};

// Class MeshModelingTools.PullKelvinletBrushOpProps
// Size: 0x80 (Inherited: 0x78)
struct UPullKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Falloff; // 0x78(0x04)
	float Depth; // 0x7c(0x04)
};

// Class MeshModelingTools.SharpPullKelvinletBrushOpProps
// Size: 0x80 (Inherited: 0x78)
struct USharpPullKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Falloff; // 0x78(0x04)
	float Depth; // 0x7c(0x04)
};

// Class MeshModelingTools.TwistKelvinletBrushOpProps
// Size: 0x80 (Inherited: 0x78)
struct UTwistKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Strength; // 0x78(0x04)
	float Falloff; // 0x7c(0x04)
};

// Class MeshModelingTools.MeshAnalysisProperties
// Size: 0x88 (Inherited: 0x68)
struct UMeshAnalysisProperties : UInteractiveToolPropertySet {
	struct FString SurfaceArea; // 0x68(0x10)
	struct FString Volume; // 0x78(0x10)
};

// Class MeshModelingTools.MeshAttributePaintToolBuilder
// Size: 0x80 (Inherited: 0x38)
struct UMeshAttributePaintToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_38[0x48]; // 0x38(0x48)
};

// Class MeshModelingTools.MeshAttributePaintToolProperties
// Size: 0x90 (Inherited: 0x68)
struct UMeshAttributePaintToolProperties : UInteractiveToolPropertySet {
	struct TArray<struct FName> Attributes; // 0x68(0x10)
	int32_t SelectedAttribute; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString AttributeName; // 0x80(0x10)
};

// Class MeshModelingTools.MeshAttributePaintEditActions
// Size: 0x70 (Inherited: 0x68)
struct UMeshAttributePaintEditActions : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class MeshModelingTools.MeshAttributePaintTool
// Size: 0x640 (Inherited: 0x210)
struct UMeshAttributePaintTool : UDynamicMeshBrushTool {
	struct UMeshAttributePaintToolProperties* AttribProps; // 0x210(0x08)
	char pad_218[0x428]; // 0x218(0x428)
};

// Class MeshModelingTools.MeshBoundaryToolBase
// Size: 0x158 (Inherited: 0x90)
struct UMeshBoundaryToolBase : USingleSelectionTool {
	char pad_90[0xb0]; // 0x90(0xb0)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x140(0x08)
	struct USingleClickInputBehavior* LoopSelectClickBehavior; // 0x148(0x08)
	char pad_150[0x8]; // 0x150(0x08)
};

// Class MeshModelingTools.InflateBrushOpProps
// Size: 0x70 (Inherited: 0x68)
struct UInflateBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
};

// Class MeshModelingTools.MeshInspectorToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UMeshInspectorToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.MeshInspectorProperties
// Size: 0x80 (Inherited: 0x68)
struct UMeshInspectorProperties : UInteractiveToolPropertySet {
	bool bWireframe; // 0x68(0x01)
	bool bBoundaryEdges; // 0x69(0x01)
	bool bBowtieVertices; // 0x6a(0x01)
	bool bPolygonBorders; // 0x6b(0x01)
	bool bUVSeams; // 0x6c(0x01)
	bool bUVBowties; // 0x6d(0x01)
	bool bNormalSeams; // 0x6e(0x01)
	bool bNormalVectors; // 0x6f(0x01)
	bool bTangentVectors; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float NormalLength; // 0x74(0x04)
	float TangentLength; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.MeshInspectorTool
// Size: 0x130 (Inherited: 0x90)
struct UMeshInspectorTool : USingleSelectionTool {
	struct UMeshInspectorProperties* Settings; // 0x90(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa8(0x08)
	struct ULineSetComponent* DrawnLineSet; // 0xb0(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0xb8(0x08)
	char pad_C0[0x70]; // 0xc0(0x70)
};

// Class MeshModelingTools.NewMeshMaterialProperties
// Size: 0x78 (Inherited: 0x68)
struct UNewMeshMaterialProperties : UInteractiveToolPropertySet {
	struct TWeakObjectPtr<struct UMaterialInterface> Material; // 0x68(0x08)
	float UVScale; // 0x70(0x04)
	bool bWorldSpaceUVScale; // 0x74(0x01)
	bool bWireframe; // 0x75(0x01)
	bool bShowExtendedOptions; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// Size: 0x80 (Inherited: 0x68)
struct UExistingMeshMaterialProperties : UInteractiveToolPropertySet {
	enum class ESetMeshMaterialMode MaterialMode; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float CheckerDensity; // 0x6c(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x70(0x08)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0x78(0x08)
};

// Class MeshModelingTools.MeshEditingViewProperties
// Size: 0x90 (Inherited: 0x68)
struct UMeshEditingViewProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EMeshEditingMaterialModes MaterialMode; // 0x6c(0x04)
	bool bFlatShading; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FLinearColor Color; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
	struct UTexture2D* Image; // 0x88(0x08)
};

// Class MeshModelingTools.MoveBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UMoveBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float Depth; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.PinchBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UPinchBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float Depth; // 0x70(0x04)
	bool bPerpDamping; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.BasePlaneBrushOpProps
// Size: 0x68 (Inherited: 0x68)
struct UBasePlaneBrushOpProps : UMeshSculptBrushOpProps {
};

// Class MeshModelingTools.PlaneBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UPlaneBrushOpProps : UBasePlaneBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float Depth; // 0x70(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UViewAlignedPlaneBrushOpProps : UBasePlaneBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float Depth; // 0x70(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.FixedPlaneBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UFixedPlaneBrushOpProps : UBasePlaneBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float Depth; // 0x70(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.StandardSculptBrushOpProps
// Size: 0x70 (Inherited: 0x68)
struct UStandardSculptBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
};

// Class MeshModelingTools.ViewAlignedSculptBrushOpProps
// Size: 0x70 (Inherited: 0x68)
struct UViewAlignedSculptBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
};

// Class MeshModelingTools.SculptMaxBrushOpProps
// Size: 0x80 (Inherited: 0x68)
struct USculptMaxBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float MaxHeight; // 0x70(0x04)
	bool bUseFixedHeight; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float FixedHeight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.SculptBrushProperties
// Size: 0x90 (Inherited: 0x80)
struct USculptBrushProperties : UBrushBaseProperties {
	float Depth; // 0x80(0x04)
	bool bHitBackFaces; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float Lazyness; // 0x88(0x04)
	bool bShowPerBrushProps; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class MeshModelingTools.KelvinBrushProperties
// Size: 0x78 (Inherited: 0x68)
struct UKelvinBrushProperties : UInteractiveToolPropertySet {
	float FalloffDistance; // 0x68(0x04)
	float Stiffness; // 0x6c(0x04)
	float Incompressiblity; // 0x70(0x04)
	int32_t BrushSteps; // 0x74(0x04)
};

// Class MeshModelingTools.WorkPlaneProperties
// Size: 0x90 (Inherited: 0x68)
struct UWorkPlaneProperties : UInteractiveToolPropertySet {
	bool bPropertySetEnabled; // 0x68(0x01)
	bool bShowGizmo; // 0x69(0x01)
	bool bSnapToGrid; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	struct FVector position; // 0x6c(0x0c)
	char pad_78[0x8]; // 0x78(0x08)
	struct FQuat Rotation; // 0x80(0x10)
};

// Class MeshModelingTools.SculptMaxBrushProperties
// Size: 0x70 (Inherited: 0x68)
struct USculptMaxBrushProperties : UInteractiveToolPropertySet {
	float MaxHeight; // 0x68(0x04)
	bool bFreezeCurrentHeight; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.MeshSculptToolBase
// Size: 0x9e0 (Inherited: 0xc8)
struct UMeshSculptToolBase : UMeshSurfacePointTool {
	struct USculptBrushProperties* BrushProperties; // 0xc8(0x08)
	struct UWorkPlaneProperties* GizmoProperties; // 0xd0(0x08)
	char pad_D8[0xd8]; // 0xd8(0xd8)
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> BrushOpPropSets; // 0x1b0(0x50)
	char pad_200[0x50]; // 0x200(0x50)
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets; // 0x250(0x50)
	char pad_2A0[0x5d0]; // 0x2a0(0x5d0)
	struct UMeshEditingViewProperties* ViewProperties; // 0x870(0x08)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x878(0x08)
	struct UBrushStampIndicator* BrushIndicator; // 0x880(0x08)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x888(0x08)
	struct UPreviewMesh* BrushIndicatorMesh; // 0x890(0x08)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x898(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x8a0(0x08)
	char pad_8A8[0x138]; // 0x8a8(0x138)
};

// Class MeshModelingTools.MeshSelectionToolBuilder
// Size: 0x40 (Inherited: 0x38)
struct UMeshSelectionToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// Size: 0x70 (Inherited: 0x68)
struct UMeshSelectionToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class MeshModelingTools.MeshSelectionEditActions
// Size: 0x70 (Inherited: 0x70)
struct UMeshSelectionEditActions : UMeshSelectionToolActionPropertySet {

	void Shrink(); // Function MeshModelingTools.MeshSelectionEditActions.Shrink // (Final|Native|Public) // @ game+0x41e5c90
	void SelectLargestComponentByTriCount(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount // (Final|Native|Public) // @ game+0x41e5c50
	void SelectLargestComponentByArea(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea // (Final|Native|Public) // @ game+0x41e5c30
	void SelectAll(); // Function MeshModelingTools.MeshSelectionEditActions.SelectAll // (Final|Native|Public) // @ game+0x41e5c10
	void OptimizeSelection(); // Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection // (Final|Native|Public) // @ game+0x41e5bf0
	void Invert(); // Function MeshModelingTools.MeshSelectionEditActions.Invert // (Final|Native|Public) // @ game+0x41e5bd0
	void Grow(); // Function MeshModelingTools.MeshSelectionEditActions.Grow // (Final|Native|Public) // @ game+0x41e5bb0
	void ExpandToConnected(); // Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected // (Final|Native|Public) // @ game+0x41e5b70
	void Clear(); // Function MeshModelingTools.MeshSelectionEditActions.Clear // (Final|Native|Public) // @ game+0x41e5af0
};

// Class MeshModelingTools.MeshSelectionMeshEditActions
// Size: 0x70 (Inherited: 0x70)
struct UMeshSelectionMeshEditActions : UMeshSelectionToolActionPropertySet {

	void SeparateTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles // (Final|Native|Public) // @ game+0x41e5c70
	void FlipNormals(); // Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals // (Final|Native|Public) // @ game+0x41e5b90
	void DisconnectTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles // (Final|Native|Public) // @ game+0x41e5b50
	void DeleteTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles // (Final|Native|Public) // @ game+0x41e5b30
	void CreatePolygroup(); // Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup // (Final|Native|Public) // @ game+0x41e5b10
};

// Class MeshModelingTools.MeshSelectionToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UMeshSelectionToolProperties : UInteractiveToolPropertySet {
	enum class EMeshSelectionToolPrimaryMode SelectionMode; // 0x68(0x04)
	float AngleTolerance; // 0x6c(0x04)
	bool bHitBackFaces; // 0x70(0x01)
	bool bShowWireframe; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	enum class EMeshFacesColorMode FaceColorMode; // 0x74(0x04)
};

// Class MeshModelingTools.MeshSelectionTool
// Size: 0x4b8 (Inherited: 0x210)
struct UMeshSelectionTool : UDynamicMeshBrushTool {
	struct UMeshSelectionToolProperties* SelectionProps; // 0x210(0x08)
	struct UMeshSelectionEditActions* SelectionActions; // 0x218(0x08)
	struct UMeshSelectionToolActionPropertySet* EditActions; // 0x220(0x08)
	struct UMeshSelectionSet* Selection; // 0x228(0x08)
	struct TArray<struct AActor*> SpawnedActors; // 0x230(0x10)
	char pad_240[0x278]; // 0x240(0x278)
};

// Class MeshModelingTools.BaseSmoothBrushOpProps
// Size: 0x68 (Inherited: 0x68)
struct UBaseSmoothBrushOpProps : UMeshSculptBrushOpProps {
};

// Class MeshModelingTools.SmoothBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct USmoothBrushOpProps : UBaseSmoothBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	bool bPreserveUVFlow; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.SecondarySmoothBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct USecondarySmoothBrushOpProps : UBaseSmoothBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	bool bPreserveUVFlow; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.SmoothFillBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct USmoothFillBrushOpProps : UBaseSmoothBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	bool bPreserveUVFlow; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.FlattenBrushOpProps
// Size: 0x78 (Inherited: 0x68)
struct UFlattenBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
	float Depth; // 0x70(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.EraseBrushOpProps
// Size: 0x70 (Inherited: 0x68)
struct UEraseBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x68(0x04)
	float Falloff; // 0x6c(0x04)
};

// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UMeshSpaceDeformerToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.SpaceDeformerOperatorFactory
// Size: 0x40 (Inherited: 0x30)
struct USpaceDeformerOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMeshSpaceDeformerTool* SpaceDeformerTool; // 0x38(0x08)
};

// Class MeshModelingTools.MeshSpaceDeformerTool
// Size: 0x1d0 (Inherited: 0xc8)
struct UMeshSpaceDeformerTool : UMeshSurfacePointTool {
	enum class ENonlinearOperationType SelectedOperationType; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float UpperBoundsInterval; // 0xcc(0x04)
	float LowerBoundsInterval; // 0xd0(0x04)
	float ModifierPercent; // 0xd4(0x04)
	bool bSnapToWorldGrid; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xf0(0x08)
	char pad_F8[0x20]; // 0xf8(0x20)
	struct FVector GizmoCenter; // 0x118(0x0c)
	char pad_124[0xc]; // 0x124(0x0c)
	struct FQuat GizmoOrientation; // 0x130(0x10)
	struct UIntervalGizmo* IntervalGizmo; // 0x140(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x148(0x08)
	struct UTransformProxy* TransformProxy; // 0x150(0x08)
	struct UGizmoLocalFloatParameterSource* UpIntervalSource; // 0x158(0x08)
	struct UGizmoLocalFloatParameterSource* DownIntervalSource; // 0x160(0x08)
	struct UGizmoLocalFloatParameterSource* ForwardIntervalSource; // 0x168(0x08)
	char pad_170[0x60]; // 0x170(0x60)
};

// Class MeshModelingTools.MeshStatisticsProperties
// Size: 0x98 (Inherited: 0x68)
struct UMeshStatisticsProperties : UInteractiveToolPropertySet {
	struct FString Mesh; // 0x68(0x10)
	struct FString UV; // 0x78(0x10)
	struct FString Attributes; // 0x88(0x10)
};

// Class MeshModelingTools.MeshVertexSculptToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UMeshVertexSculptToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.VertexBrushSculptProperties
// Size: 0x70 (Inherited: 0x68)
struct UVertexBrushSculptProperties : UInteractiveToolPropertySet {
	enum class EMeshVertexSculptBrushType PrimaryBrushType; // 0x68(0x01)
	enum class EMeshSculptFalloffType PrimaryFalloffType; // 0x69(0x01)
	bool bFreezeTarget; // 0x6a(0x01)
	bool bSmoothErases; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.MeshVertexSculptTool
// Size: 0x1230 (Inherited: 0x9e0)
struct UMeshVertexSculptTool : UMeshSculptToolBase {
	struct UVertexBrushSculptProperties* SculptProperties; // 0x9d8(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x9e0(0x08)
	char pad_9F0[0x840]; // 0x9f0(0x840)
};

// Class MeshModelingTools.MirrorToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UMirrorToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.MirrorToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UMirrorToolProperties : UInteractiveToolPropertySet {
	enum class EMirrorOperationMode OperationMode; // 0x68(0x01)
	bool bCropAlongMirrorPlaneFirst; // 0x69(0x01)
	bool bWeldVerticesOnMirrorPlane; // 0x6a(0x01)
	bool bAllowBowtieVertexCreation; // 0x6b(0x01)
	bool bSnapToWorldGrid; // 0x6c(0x01)
	enum class EMirrorCtrlClickBehavior CtrlClickBehavior; // 0x6d(0x01)
	bool bButtonsOnlyChangeOrientation; // 0x6e(0x01)
	bool bShowPreview; // 0x6f(0x01)
	enum class EMirrorSaveMode SaveMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.MirrorOperatorFactory
// Size: 0x48 (Inherited: 0x30)
struct UMirrorOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMirrorTool* MirrorTool; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class MeshModelingTools.MirrorToolActionPropertySet
// Size: 0x70 (Inherited: 0x68)
struct UMirrorToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)

	void Up(); // Function MeshModelingTools.MirrorToolActionPropertySet.Up // (Final|Native|Public) // @ game+0x41eaae0
	void ShiftToCenter(); // Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter // (Final|Native|Public) // @ game+0x41eaac0
	void Right(); // Function MeshModelingTools.MirrorToolActionPropertySet.Right // (Final|Native|Public) // @ game+0x41eaaa0
	void Left(); // Function MeshModelingTools.MirrorToolActionPropertySet.Left // (Final|Native|Public) // @ game+0x41eaa80
	void Forward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Forward // (Final|Native|Public) // @ game+0x41eaa60
	void Down(); // Function MeshModelingTools.MirrorToolActionPropertySet.Down // (Final|Native|Public) // @ game+0x41eaa40
	void Backward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Backward // (Final|Native|Public) // @ game+0x41eaa00
};

// Class MeshModelingTools.MirrorTool
// Size: 0x140 (Inherited: 0x98)
struct UMirrorTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UMirrorToolProperties* Settings; // 0xa0(0x08)
	struct UMirrorToolActionPropertySet* ToolActions; // 0xa8(0x08)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToMirror; // 0xb0(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xc0(0x10)
	char pad_D0[0x48]; // 0xd0(0x48)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x118(0x08)
	char pad_120[0x20]; // 0x120(0x20)
};

// Class MeshModelingTools.OffsetMeshToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UOffsetMeshToolProperties : UInteractiveToolPropertySet {
	enum class EOffsetMeshToolOffsetType OffsetType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float distance; // 0x6c(0x04)
	bool bCreateShell; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.OffsetWeightMapSetProperties
// Size: 0x98 (Inherited: 0x90)
struct UOffsetWeightMapSetProperties : UWeightMapSetProperties {
	float MinDistance; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MeshModelingTools.IterativeOffsetProperties
// Size: 0x78 (Inherited: 0x68)
struct UIterativeOffsetProperties : UInteractiveToolPropertySet {
	int32_t Steps; // 0x68(0x04)
	bool bOffsetBoundaries; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float SmoothingPerStep; // 0x70(0x04)
	bool bReprojectSmooth; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.ImplicitOffsetProperties
// Size: 0x70 (Inherited: 0x68)
struct UImplicitOffsetProperties : UInteractiveToolPropertySet {
	float Smoothness; // 0x68(0x04)
	bool bPreserveUVs; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.OffsetMeshTool
// Size: 0x420 (Inherited: 0x400)
struct UOffsetMeshTool : UBaseMeshProcessingTool {
	struct UOffsetMeshToolProperties* OffsetProperties; // 0x400(0x08)
	struct UIterativeOffsetProperties* IterativeProperties; // 0x408(0x08)
	struct UImplicitOffsetProperties* ImplicitProperties; // 0x410(0x08)
	struct UOffsetWeightMapSetProperties* WeightMapProperties; // 0x418(0x08)
};

// Class MeshModelingTools.OffsetMeshToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UOffsetMeshToolBuilder : UBaseMeshProcessingToolBuilder {
};

// Class MeshModelingTools.PhysicsInspectorToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UPhysicsInspectorToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.PhysicsInspectorTool
// Size: 0xe0 (Inherited: 0x98)
struct UPhysicsInspectorTool : UMultiSelectionTool {
	struct UCollisionGeometryVisualizationProperties* VizSettings; // 0x98(0x08)
	struct TArray<struct UPhysicsObjectToolPropertySet*> ObjectData; // 0xa0(0x10)
	struct UMaterialInterface* LineMaterial; // 0xb0(0x08)
	struct TArray<struct UPreviewGeometry*> PreviewElements; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
};

// Class MeshModelingTools.PlaneCutToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UPlaneCutToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.AcceptOutputProperties
// Size: 0x70 (Inherited: 0x68)
struct UAcceptOutputProperties : UInteractiveToolPropertySet {
	bool bExportSeparatedPiecesAsNewMeshAssets; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.PlaneCutToolProperties
// Size: 0x78 (Inherited: 0x68)
struct UPlaneCutToolProperties : UInteractiveToolPropertySet {
	bool bSnapToWorldGrid; // 0x68(0x01)
	bool bKeepBothHalves; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float SpacingBetweenHalves; // 0x6c(0x04)
	bool bFillCutHole; // 0x70(0x01)
	bool bShowPreview; // 0x71(0x01)
	bool bFillSpans; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class MeshModelingTools.PlaneCutOperatorFactory
// Size: 0x48 (Inherited: 0x30)
struct UPlaneCutOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UPlaneCutTool* CutTool; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class MeshModelingTools.PlaneCutTool
// Size: 0x160 (Inherited: 0x98)
struct UPlaneCutTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UPlaneCutToolProperties* BasicProperties; // 0xa0(0x08)
	struct UAcceptOutputProperties* AcceptProperties; // 0xa8(0x08)
	struct FVector CutPlaneOrigin; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FQuat CutPlaneOrientation; // 0xc0(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xd0(0x10)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToCut; // 0xe0(0x10)
	char pad_F0[0x58]; // 0xf0(0x58)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x148(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)

	void Cut(); // Function MeshModelingTools.PlaneCutTool.Cut // (Final|Native|Protected) // @ game+0x41eaa20
};

// Class MeshModelingTools.PositionPlaneGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
struct UPositionPlaneGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class MeshModelingTools.PositionPlaneGizmo
// Size: 0x520 (Inherited: 0x40)
struct UPositionPlaneGizmo : UInteractiveGizmo {
	char pad_40[0x48]; // 0x40(0x48)
	struct UPreviewMesh* CenterBallShape; // 0x88(0x08)
	struct UMaterialInstance* CenterBallMaterial; // 0x90(0x08)
	char pad_98[0x488]; // 0x98(0x488)
};

// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// Size: 0xb0 (Inherited: 0x80)
struct UPositionPlaneOnSceneInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x30]; // 0x80(0x30)
};

// Class MeshModelingTools.ProjectToTargetToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UProjectToTargetToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.RemeshMeshToolProperties
// Size: 0x98 (Inherited: 0x78)
struct URemeshMeshToolProperties : URemeshProperties {
	int32_t TargetTriangleCount; // 0x78(0x04)
	enum class ERemeshSmoothingType SmoothingType; // 0x7c(0x01)
	bool bDiscardAttributes; // 0x7d(0x01)
	bool bShowWireframe; // 0x7e(0x01)
	bool bShowGroupColors; // 0x7f(0x01)
	enum class ERemeshType RemeshType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t RemeshIterations; // 0x84(0x04)
	bool bUseTargetEdgeLength; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float TargetEdgeLength; // 0x8c(0x04)
	bool bReproject; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class MeshModelingTools.ProjectToTargetToolProperties
// Size: 0x98 (Inherited: 0x98)
struct UProjectToTargetToolProperties : URemeshMeshToolProperties {
};

// Class MeshModelingTools.RemeshMeshTool
// Size: 0xf0 (Inherited: 0x98)
struct URemeshMeshTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct URemeshMeshToolProperties* BasicProperties; // 0xa0(0x08)
	struct UMeshStatisticsProperties* MeshStatisticsProperties; // 0xa8(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb0(0x08)
	char pad_B8[0x38]; // 0xb8(0x38)
};

// Class MeshModelingTools.ProjectToTargetTool
// Size: 0x100 (Inherited: 0xf0)
struct UProjectToTargetTool : URemeshMeshTool {
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class MeshModelingTools.RemeshMeshToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct URemeshMeshToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct URemoveOccludedTrianglesToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// Size: 0x88 (Inherited: 0x68)
struct URemoveOccludedTrianglesToolProperties : UInteractiveToolPropertySet {
	enum class EOcclusionCalculationUIMode OcclusionTestMethod; // 0x68(0x01)
	enum class EOcclusionTriangleSamplingUIMode TriangleSampling; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	double WindingIsoValue; // 0x70(0x08)
	int32_t AddRandomRays; // 0x78(0x04)
	int32_t AddTriangleSamples; // 0x7c(0x04)
	bool bOnlySelfOcclude; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// Size: 0x70 (Inherited: 0x68)
struct URemoveOccludedTrianglesAdvancedProperties : UInteractiveToolPropertySet {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// Size: 0x48 (Inherited: 0x30)
struct URemoveOccludedTrianglesOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct URemoveOccludedTrianglesTool* Tool; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesTool
// Size: 0x160 (Inherited: 0x98)
struct URemoveOccludedTrianglesTool : UMultiSelectionTool {
	struct URemoveOccludedTrianglesToolProperties* BasicProperties; // 0x98(0x08)
	struct URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties; // 0xa0(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8(0x10)
	struct TArray<struct UPreviewMesh*> PreviewCopies; // 0xb8(0x10)
	char pad_C8[0x98]; // 0xc8(0x98)
};

// Class MeshModelingTools.RevolveBoundaryToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct URevolveBoundaryToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.RevolveBoundaryOperatorFactory
// Size: 0x40 (Inherited: 0x30)
struct URevolveBoundaryOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct URevolveBoundaryTool* RevolveBoundaryTool; // 0x38(0x08)
};

// Class MeshModelingTools.RevolveBoundaryToolProperties
// Size: 0xd8 (Inherited: 0xb8)
struct URevolveBoundaryToolProperties : URevolveProperties {
	bool bDisplayOriginalMesh; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FVector AxisOrigin; // 0xbc(0x0c)
	float AxisYaw; // 0xc8(0x04)
	float AxisPitch; // 0xcc(0x04)
	bool bSnapToWorldGrid; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class MeshModelingTools.RevolveBoundaryTool
// Size: 0x1b8 (Inherited: 0x158)
struct URevolveBoundaryTool : UMeshBoundaryToolBase {
	char pad_158[0x10]; // 0x158(0x10)
	struct URevolveBoundaryToolProperties* Settings; // 0x168(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x170(0x08)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x178(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x180(0x08)
	char pad_188[0x30]; // 0x188(0x30)
};

// Class MeshModelingTools.SeamSculptToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct USeamSculptToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.SeamSculptToolProperties
// Size: 0x70 (Inherited: 0x68)
struct USeamSculptToolProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x68(0x01)
	bool bHitBackFaces; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class MeshModelingTools.SeamSculptTool
// Size: 0x2f0 (Inherited: 0x210)
struct USeamSculptTool : UDynamicMeshBrushTool {
	struct USeamSculptToolProperties* Settings; // 0x210(0x08)
	struct UPreviewGeometry* PreviewGeom; // 0x218(0x08)
	char pad_220[0xd0]; // 0x220(0xd0)
};

// Class MeshModelingTools.SelfUnionMeshesToolProperties
// Size: 0x80 (Inherited: 0x68)
struct USelfUnionMeshesToolProperties : UInteractiveToolPropertySet {
	bool bAttemptFixHoles; // 0x68(0x01)
	bool bShowNewBoundaryEdges; // 0x69(0x01)
	bool bTrimFlaps; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	double WindingNumberThreshold; // 0x70(0x08)
	bool bOnlyUseFirstMeshMaterials; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class MeshModelingTools.SelfUnionMeshesTool
// Size: 0x128 (Inherited: 0xf8)
struct USelfUnionMeshesTool : UBaseCreateFromSelectedTool {
	struct USelfUnionMeshesToolProperties* Properties; // 0xf8(0x08)
	struct ULineSetComponent* DrawnLineSet; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)
};

// Class MeshModelingTools.SelfUnionMeshesToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct USelfUnionMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.SetCollisionGeometryToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USetCollisionGeometryToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.SetCollisionGeometryToolProperties
// Size: 0x98 (Inherited: 0x68)
struct USetCollisionGeometryToolProperties : UInteractiveToolPropertySet {
	enum class ECollisionGeometryType GeometryType; // 0x68(0x04)
	enum class ESetCollisionGeometryInputMode InputMode; // 0x6c(0x04)
	bool bUseWorldSpace; // 0x70(0x01)
	bool bRemoveContained; // 0x71(0x01)
	bool bEnableMaxCount; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	int32_t MaxCount; // 0x74(0x04)
	float MinThickness; // 0x78(0x04)
	bool bDetectBoxes; // 0x7c(0x01)
	bool bDetectSpheres; // 0x7d(0x01)
	bool bDetectCapsules; // 0x7e(0x01)
	bool bSimplifyHulls; // 0x7f(0x01)
	int32_t HullTargetFaceCount; // 0x80(0x04)
	bool bSimplifyPolygons; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float HullTolerance; // 0x88(0x04)
	enum class EProjectedHullAxis SweepAxis; // 0x8c(0x04)
	bool bAppendToExisting; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	enum class ECollisionGeometryMode SetCollisionType; // 0x94(0x04)
};

// Class MeshModelingTools.SetCollisionGeometryTool
// Size: 0x1d0 (Inherited: 0x98)
struct USetCollisionGeometryTool : UMultiSelectionTool {
	struct USetCollisionGeometryToolProperties* Settings; // 0x98(0x08)
	struct UCollisionGeometryVisualizationProperties* VizSettings; // 0xa0(0x08)
	struct UPhysicsObjectToolPropertySet* CollisionProps; // 0xa8(0x08)
	struct UMaterialInterface* LineMaterial; // 0xb0(0x08)
	struct UPreviewGeometry* PreviewGeom; // 0xb8(0x08)
	char pad_C0[0x110]; // 0xc0(0x110)
};

// Class MeshModelingTools.SmoothMeshToolProperties
// Size: 0x70 (Inherited: 0x68)
struct USmoothMeshToolProperties : UInteractiveToolPropertySet {
	enum class ESmoothMeshToolSmoothType SmoothingType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.IterativeSmoothProperties
// Size: 0x78 (Inherited: 0x68)
struct UIterativeSmoothProperties : UInteractiveToolPropertySet {
	float SmoothingPerStep; // 0x68(0x04)
	int32_t Steps; // 0x6c(0x04)
	bool bSmoothBoundary; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.DiffusionSmoothProperties
// Size: 0x78 (Inherited: 0x68)
struct UDiffusionSmoothProperties : UInteractiveToolPropertySet {
	float SmoothingPerStep; // 0x68(0x04)
	int32_t Steps; // 0x6c(0x04)
	bool bPreserveUVs; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.ImplicitSmoothProperties
// Size: 0x78 (Inherited: 0x68)
struct UImplicitSmoothProperties : UInteractiveToolPropertySet {
	float SmoothSpeed; // 0x68(0x04)
	float Smoothness; // 0x6c(0x04)
	bool bPreserveUVs; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float VolumeCorrection; // 0x74(0x04)
};

// Class MeshModelingTools.SmoothWeightMapSetProperties
// Size: 0x98 (Inherited: 0x90)
struct USmoothWeightMapSetProperties : UWeightMapSetProperties {
	float MinSmoothMultiplier; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MeshModelingTools.SmoothMeshTool
// Size: 0x430 (Inherited: 0x400)
struct USmoothMeshTool : UBaseMeshProcessingTool {
	struct USmoothMeshToolProperties* SmoothProperties; // 0x400(0x08)
	struct UIterativeSmoothProperties* IterativeProperties; // 0x408(0x08)
	struct UDiffusionSmoothProperties* DiffusionProperties; // 0x410(0x08)
	struct UImplicitSmoothProperties* ImplicitProperties; // 0x418(0x08)
	struct USmoothWeightMapSetProperties* WeightMapProperties; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class MeshModelingTools.SmoothMeshToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USmoothMeshToolBuilder : UBaseMeshProcessingToolBuilder {
};

// Class MeshModelingTools.TransformMeshesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UTransformMeshesToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.TransformMeshesToolProperties
// Size: 0x70 (Inherited: 0x68)
struct UTransformMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ETransformMeshesTransformMode TransformMode; // 0x68(0x01)
	bool bSetPivot; // 0x69(0x01)
	bool bEnableSnapDragging; // 0x6a(0x01)
	enum class ETransformMeshesSnapDragSource SnapDragSource; // 0x6b(0x01)
	enum class ETransformMeshesSnapDragRotationMode RotationMode; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.TransformMeshesTool
// Size: 0x150 (Inherited: 0x98)
struct UTransformMeshesTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UTransformMeshesToolProperties* TransformProps; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct TArray<struct FTransformMeshesTarget> ActiveGizmos; // 0xb8(0x10)
	char pad_C8[0x88]; // 0xc8(0x88)
};

// Class MeshModelingTools.UVProjectionToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UUVProjectionToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.UVProjectionToolProperties
// Size: 0x90 (Inherited: 0x68)
struct UUVProjectionToolProperties : UInteractiveToolPropertySet {
	enum class EUVProjectionMethod UVProjectionMethod; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector ProjectionPrimitiveScale; // 0x6c(0x0c)
	float CylinderProjectToTopOrBottomAngleThreshold; // 0x78(0x04)
	struct FVector2D UVScale; // 0x7c(0x08)
	struct FVector2D UVOffset; // 0x84(0x08)
	bool bWorldSpaceUVScale; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class MeshModelingTools.UVProjectionAdvancedProperties
// Size: 0x68 (Inherited: 0x68)
struct UUVProjectionAdvancedProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.UVProjectionOperatorFactory
// Size: 0x48 (Inherited: 0x30)
struct UUVProjectionOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UUVProjectionTool* Tool; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class MeshModelingTools.UVProjectionTool
// Size: 0x220 (Inherited: 0x98)
struct UUVProjectionTool : UMultiSelectionTool {
	struct UUVProjectionToolProperties* BasicProperties; // 0x98(0x08)
	struct UUVProjectionAdvancedProperties* AdvancedProperties; // 0xa0(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xa8(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xb0(0x10)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xc0(0x08)
	struct TArray<struct UTransformGizmo*> TransformGizmos; // 0xc8(0x10)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xd8(0x10)
	char pad_E8[0x138]; // 0xe8(0x138)
};

// Class MeshModelingTools.VoxelBlendMeshesToolProperties
// Size: 0x88 (Inherited: 0x68)
struct UVoxelBlendMeshesToolProperties : UInteractiveToolPropertySet {
	double BlendPower; // 0x68(0x08)
	double BlendFalloff; // 0x70(0x08)
	bool bSolidifyInput; // 0x78(0x01)
	bool bRemoveInternalsAfterSolidify; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	double OffsetSolidifySurface; // 0x80(0x08)
};

// Class MeshModelingTools.VoxelBlendMeshesTool
// Size: 0x118 (Inherited: 0x110)
struct UVoxelBlendMeshesTool : UBaseVoxelTool {
	struct UVoxelBlendMeshesToolProperties* BlendProperties; // 0x110(0x08)
};

// Class MeshModelingTools.VoxelBlendMeshesToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UVoxelBlendMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
// Size: 0x88 (Inherited: 0x68)
struct UVoxelMorphologyMeshesToolProperties : UInteractiveToolPropertySet {
	enum class EMorphologyOperation Operation; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	double distance; // 0x70(0x08)
	bool bSolidifyInput; // 0x78(0x01)
	bool bRemoveInternalsAfterSolidify; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	double OffsetSolidifySurface; // 0x80(0x08)
};

// Class MeshModelingTools.VoxelMorphologyMeshesTool
// Size: 0x118 (Inherited: 0x110)
struct UVoxelMorphologyMeshesTool : UBaseVoxelTool {
	struct UVoxelMorphologyMeshesToolProperties* MorphologyProperties; // 0x110(0x08)
};

// Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UVoxelMorphologyMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
// Size: 0x88 (Inherited: 0x68)
struct UVoxelSolidifyMeshesToolProperties : UInteractiveToolPropertySet {
	double WindingThreshold; // 0x68(0x08)
	double ExtendBounds; // 0x70(0x08)
	int32_t SurfaceSearchSteps; // 0x78(0x04)
	bool bSolidAtBoundaries; // 0x7c(0x01)
	bool bMakeOffsetSurfaces; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	double OffsetThickness; // 0x80(0x08)
};

// Class MeshModelingTools.VoxelSolidifyMeshesTool
// Size: 0x118 (Inherited: 0x110)
struct UVoxelSolidifyMeshesTool : UBaseVoxelTool {
	struct UVoxelSolidifyMeshesToolProperties* SolidifyProperties; // 0x110(0x08)
};

// Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UVoxelSolidifyMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UWeldMeshEdgesToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.WeldMeshEdgesTool
// Size: 0x308 (Inherited: 0x90)
struct UWeldMeshEdgesTool : USingleSelectionTool {
	float Tolerance; // 0x90(0x04)
	bool bOnlyUnique; // 0x94(0x01)
	char pad_95[0x273]; // 0x95(0x273)
};

