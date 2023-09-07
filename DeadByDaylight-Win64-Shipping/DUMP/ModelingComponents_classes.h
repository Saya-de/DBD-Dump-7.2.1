// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UBaseCreateFromSelectedToolBuilder : UInteractiveToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ModelingComponents.OnAcceptHandleSourcesProperties
// Size: 0x70 (Inherited: 0x68)
struct UOnAcceptHandleSourcesProperties : UInteractiveToolPropertySet {
	enum class EHandleSourcesMethod OnToolAccept; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// Size: 0x98 (Inherited: 0x70)
struct UBaseCreateFromSelectedHandleSourceProperties : UOnAcceptHandleSourcesProperties {
	enum class EBaseCreateFromSelectedTargetType WriteOutputTo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString OutputName; // 0x78(0x10)
	struct FString OutputAsset; // 0x88(0x10)
};

// Class ModelingComponents.TransformInputsToolProperties
// Size: 0x70 (Inherited: 0x68)
struct UTransformInputsToolProperties : UInteractiveToolPropertySet {
	bool bShowTransformUI; // 0x68(0x01)
	bool bSnapToWorldGrid; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class ModelingComponents.BaseCreateFromSelectedTool
// Size: 0xf8 (Inherited: 0x98)
struct UBaseCreateFromSelectedTool : UMultiSelectionTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UTransformInputsToolProperties* TransformProperties; // 0xa0(0x08)
	struct UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties; // 0xa8(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb0(0x08)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xb8(0x10)
	struct TArray<struct UTransformGizmo*> TransformGizmos; // 0xc8(0x10)
	struct TArray<struct FVector> TransformInitialScales; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class ModelingComponents.BaseDynamicMeshComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UBaseDynamicMeshComponent : UMeshComponent {
	char pad_4D0[0x50]; // 0x4d0(0x50)
};

// Class ModelingComponents.BaseMeshProcessingToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UBaseMeshProcessingToolBuilder : UInteractiveToolBuilder {
};

// Class ModelingComponents.BaseMeshProcessingTool
// Size: 0x400 (Inherited: 0x90)
struct UBaseMeshProcessingTool : USingleSelectionTool {
	char pad_90[0x28]; // 0x90(0x28)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb8(0x08)
	char pad_C0[0x340]; // 0xc0(0x340)
};

// Class ModelingComponents.BaseVoxelTool
// Size: 0x110 (Inherited: 0xf8)
struct UBaseVoxelTool : UBaseCreateFromSelectedTool {
	struct UVoxelProperties* VoxProperties; // 0xf8(0x08)
	char pad_100[0x10]; // 0x100(0x10)
};

// Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x560 (Inherited: 0x38)
struct UCollectSurfacePathMechanic : UInteractionMechanic {
	char pad_38[0x528]; // 0x38(0x528)
};

// Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0x100 (Inherited: 0x38)
struct UConstructionPlaneMechanic : UInteractionMechanic {
	char pad_38[0xa0]; // 0x38(0xa0)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xd8(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xe0(0x08)
	char pad_E8[0x10]; // 0xe8(0x10)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xf8(0x08)
};

// Class ModelingComponents.CurveControlPointsMechanic
// Size: 0x650 (Inherited: 0x38)
struct UCurveControlPointsMechanic : UInteractionMechanic {
	char pad_38[0x10]; // 0x38(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x48(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x50(0x08)
	char pad_58[0x490]; // 0x58(0x490)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x4e8(0x08)
	struct UPointSetComponent* DrawnControlPoints; // 0x4f0(0x08)
	struct ULineSetComponent* DrawnControlSegments; // 0x4f8(0x08)
	struct UPointSetComponent* PreviewPoint; // 0x500(0x08)
	struct ULineSetComponent* PreviewSegment; // 0x508(0x08)
	char pad_510[0x78]; // 0x510(0x78)
	struct UTransformProxy* PointTransformProxy; // 0x588(0x08)
	struct UTransformGizmo* PointTransformGizmo; // 0x590(0x08)
	char pad_598[0xb8]; // 0x598(0xb8)
};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x60 (Inherited: 0x30)
struct UDynamicMeshReplacementChangeTarget : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class ModelingComponents.LineSetComponent
// Size: 0x530 (Inherited: 0x4d0)
struct ULineSetComponent : UMeshComponent {
	struct UMaterialInterface* LineMaterial; // 0x4d0(0x08)
	struct FBoxSphereBounds Bounds; // 0x4d8(0x1c)
	bool bBoundsDirty; // 0x4f4(0x01)
	char pad_4F5[0x3b]; // 0x4f5(0x3b)
};

// Class ModelingComponents.MeshCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0x98 (Inherited: 0x30)
struct UMeshOpPreviewWithBackgroundCompute : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UPreviewMesh* PreviewMesh; // 0x60(0x08)
	struct TArray<struct UMaterialInterface*> StandardMaterials; // 0x68(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x78(0x08)
	struct UMaterialInterface* WorkingMaterial; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)
};

// Class ModelingComponents.MeshReplacementCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshReplacementCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MeshVertexCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshVertexCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MultiTransformer
// Size: 0x150 (Inherited: 0x30)
struct UMultiTransformer : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct UInteractiveGizmoManager* GizmoManager; // 0x78(0x08)
	char pad_80[0x68]; // 0x80(0x68)
	struct UTransformGizmo* TransformGizmo; // 0xe8(0x08)
	struct UTransformProxy* TransformProxy; // 0xf0(0x08)
	char pad_F8[0x58]; // 0xf8(0x58)
};

// Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x630 (Inherited: 0x520)
struct UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent {
	char pad_520[0x10]; // 0x520(0x10)
	bool bExplicitShowWireframe; // 0x530(0x01)
	char pad_531[0xff]; // 0x531(0xff)
};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x4c0 (Inherited: 0x38)
struct UPlaneDistanceFromHitMechanic : UInteractionMechanic {
	char pad_38[0x488]; // 0x38(0x488)
};

// Class ModelingComponents.PointSetComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UPointSetComponent : UMeshComponent {
	struct UMaterialInterface* PointMaterial; // 0x4d0(0x08)
	struct FBoxSphereBounds Bounds; // 0x4d8(0x1c)
	bool bBoundsDirty; // 0x4f4(0x01)
	char pad_4F5[0x3b]; // 0x4f5(0x3b)
};

// Class ModelingComponents.PreviewMesh
// Size: 0xe8 (Inherited: 0x30)
struct UPreviewMesh : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	bool bBuildSpatialDataStructure; // 0x48(0x01)
	bool bDrawOnTop; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x58(0x08)
	char pad_60[0x88]; // 0x60(0x88)
};

// Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x4d8 (Inherited: 0xe8)
struct UPolyEditPreviewMesh : UPreviewMesh {
	char pad_E8[0x3f0]; // 0xe8(0x3f0)
};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0x70 (Inherited: 0x68)
struct UPolygonSelectionMechanicProperties : UInteractiveToolPropertySet {
	bool bSelectFaces; // 0x68(0x01)
	bool bSelectEdges; // 0x69(0x01)
	bool bSelectVertices; // 0x6a(0x01)
	bool bSelectEdgeLoops; // 0x6b(0x01)
	bool bSelectEdgeRings; // 0x6c(0x01)
	bool bPreferProjectedElement; // 0x6d(0x01)
	bool bSelectDownRay; // 0x6e(0x01)
	bool bIgnoreOcclusion; // 0x6f(0x01)
};

// Class ModelingComponents.PolygonSelectionMechanic
// Size: 0x830 (Inherited: 0x38)
struct UPolygonSelectionMechanic : UInteractionMechanic {
	char pad_38[0x20]; // 0x38(0x20)
	struct UPolygonSelectionMechanicProperties* Properties; // 0x58(0x08)
	char pad_60[0x4c0]; // 0x60(0x4c0)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x520(0x08)
	struct UTriangleSetComponent* DrawnTriangleSetComponent; // 0x528(0x08)
	char pad_530[0x50]; // 0x530(0x50)
	struct UMaterialInterface* HighlightedFaceMaterial; // 0x580(0x08)
	char pad_588[0x2a8]; // 0x588(0x2a8)
};

// Class ModelingComponents.PreviewGeometryActor
// Size: 0x230 (Inherited: 0x230)
struct APreviewGeometryActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.PreviewGeometry
// Size: 0x88 (Inherited: 0x30)
struct UPreviewGeometry : UObject {
	struct APreviewGeometryActor* ParentActor; // 0x30(0x08)
	struct TMap<struct FString, struct ULineSetComponent*> LineSets; // 0x38(0x50)

	bool SetLineSetVisibility(struct FString LineSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetLineSetVisibility // (Final|Native|Public) // @ game+0x40cd2e0
	bool SetLineSetMaterial(struct FString LineSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetLineSetMaterial // (Final|Native|Public) // @ game+0x40cd1f0
	void SetAllLineSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial // (Final|Native|Public) // @ game+0x40cd160
	bool RemoveLineSet(struct FString LineSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveLineSet // (Final|Native|Public) // @ game+0x40cd070
	void RemoveAllLineSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllLineSets // (Final|Native|Public) // @ game+0x40ccfe0
	struct APreviewGeometryActor* GetActor(); // Function ModelingComponents.PreviewGeometry.GetActor // (Final|Native|Public|Const) // @ game+0x40ccee0
	struct ULineSetComponent* FindLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindLineSet // (Final|Native|Public) // @ game+0x40cce30
	void Disconnect(); // Function ModelingComponents.PreviewGeometry.Disconnect // (Final|Native|Public) // @ game+0x40cce10
	void CreateInWorld(struct UWorld* World, struct FTransform& WithTransform); // Function ModelingComponents.PreviewGeometry.CreateInWorld // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x40cccf0
	struct ULineSetComponent* AddLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddLineSet // (Final|Native|Public) // @ game+0x40ccc40
};

// Class ModelingComponents.PreviewMeshActor
// Size: 0x230 (Inherited: 0x230)
struct APreviewMeshActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.SimpleDynamicMeshComponent
// Size: 0x670 (Inherited: 0x520)
struct USimpleDynamicMeshComponent : UBaseDynamicMeshComponent {
	enum class EDynamicMeshTangentCalcType TangentsType; // 0x518(0x01)
	bool bInvalidateProxyOnChange; // 0x519(0x01)
	char pad_522[0x2e]; // 0x522(0x2e)
	bool bExplicitShowWireframe; // 0x550(0x01)
	char pad_551[0x4f]; // 0x551(0x4f)
	bool bDrawOnTop; // 0x5a0(0x01)
	char pad_5A1[0xcf]; // 0x5a1(0xcf)
};

// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// Size: 0x78 (Inherited: 0x68)
struct USpaceCurveDeformationMechanicPropertySet : UInteractiveToolPropertySet {
	enum class ESpaceCurveControlPointTransformMode TransformMode; // 0x68(0x04)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin; // 0x6c(0x04)
	float Softness; // 0x70(0x04)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff; // 0x74(0x04)
};

// Class ModelingComponents.SpaceCurveDeformationMechanic
// Size: 0x2c0 (Inherited: 0x38)
struct USpaceCurveDeformationMechanic : UInteractionMechanic {
	char pad_38[0x10]; // 0x38(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x48(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
	struct USpaceCurveDeformationMechanicPropertySet* TransformProperties; // 0x70(0x08)
	char pad_78[0xf8]; // 0x78(0xf8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x170(0x08)
	struct UPointSetComponent* RenderPoints; // 0x178(0x08)
	struct ULineSetComponent* RenderSegments; // 0x180(0x08)
	char pad_188[0x38]; // 0x188(0x38)
	struct UTransformProxy* PointTransformProxy; // 0x1c0(0x08)
	struct UTransformGizmo* PointTransformGizmo; // 0x1c8(0x08)
	char pad_1D0[0xf0]; // 0x1d0(0xf0)
};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x400 (Inherited: 0x38)
struct USpatialCurveDistanceMechanic : UInteractionMechanic {
	char pad_38[0x3c8]; // 0x38(0x3c8)
};

// Class ModelingComponents.TriangleSetComponent
// Size: 0x5b0 (Inherited: 0x4d0)
struct UTriangleSetComponent : UMeshComponent {
	struct FBoxSphereBounds Bounds; // 0x4d0(0x1c)
	bool bBoundsDirty; // 0x4ec(0x01)
	char pad_4ED[0xc3]; // 0x4ed(0xc3)
};

// Class ModelingComponents.UVLayoutPreviewProperties
// Size: 0x80 (Inherited: 0x68)
struct UUVLayoutPreviewProperties : UInteractiveToolPropertySet {
	bool bVisible; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float ScaleFactor; // 0x6c(0x04)
	enum class EUVLayoutPreviewSide WhichSide; // 0x70(0x04)
	bool bShowWireframe; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D Shift; // 0x78(0x08)
};

// Class ModelingComponents.UVLayoutPreview
// Size: 0x150 (Inherited: 0x30)
struct UUVLayoutPreview : UObject {
	struct UUVLayoutPreviewProperties* Settings; // 0x30(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x38(0x08)
	struct UTriangleSetComponent* TriangleComponent; // 0x40(0x08)
	bool bShowBackingRectangle; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UMaterialInterface* BackingRectangleMaterial; // 0x50(0x08)
	char pad_58[0xf8]; // 0x58(0xf8)
};

// Class ModelingComponents.VoxelProperties
// Size: 0x80 (Inherited: 0x68)
struct UVoxelProperties : UInteractiveToolPropertySet {
	int32_t VoxelCount; // 0x68(0x04)
	bool bAutoSimplify; // 0x6c(0x01)
	bool bRemoveInternalSurfaces; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	double SimplifyMaxErrorFactor; // 0x70(0x08)
	double CubeRootMinComponentVolume; // 0x78(0x08)
};

// Class ModelingComponents.WeightMapSetProperties
// Size: 0x90 (Inherited: 0x68)
struct UWeightMapSetProperties : UInteractiveToolPropertySet {
	struct FName WeightMap; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FString> WeightMapsList; // 0x78(0x10)
	bool bInvertWeightMap; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc // (Final|Native|Public) // @ game+0x40ccf00
};

