// Class SimplygonUObjects.SimplygonStandinPipeline
// Size: 0x68 (Inherited: 0x30)
struct USimplygonStandinPipeline : UObject {
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x30(0x38)
};

// Class SimplygonUObjects.StandinNearPipeline
// Size: 0x208 (Inherited: 0x68)
struct UStandinNearPipeline : USimplygonStandinPipeline {
	struct FAggregationPipelineSettings Settings; // 0x68(0x1a0)
};

// Class SimplygonUObjects.StandinFarPipeline
// Size: 0x210 (Inherited: 0x68)
struct UStandinFarPipeline : USimplygonStandinPipeline {
	struct FRemeshingPipelineSettings Settings; // 0x68(0x1a8)
};

// Class SimplygonUObjects.BillboardCloudPipeline
// Size: 0x158 (Inherited: 0x68)
struct UBillboardCloudPipeline : USimplygonStandinPipeline {
	struct FBillboardCloudPipelineSettings Settings; // 0x68(0xf0)
};

// Class SimplygonUObjects.SimplygonPipeline
// Size: 0x30 (Inherited: 0x30)
struct USimplygonPipeline : UObject {
};

// Class SimplygonUObjects.FlipbookPipeline
// Size: 0x108 (Inherited: 0x30)
struct UFlipbookPipeline : USimplygonPipeline {
	struct FFlipbookPipelineSettings Settings; // 0x30(0xd8)
};

// Class SimplygonUObjects.BillboardCloudVegetationPipeline
// Size: 0x120 (Inherited: 0x30)
struct UBillboardCloudVegetationPipeline : USimplygonPipeline {
	struct FBillboardCloudVegetationPipelineSettings Settings; // 0x30(0xf0)
};

// Class SimplygonUObjects.SimplygonMaterialCaster
// Size: 0x30 (Inherited: 0x30)
struct USimplygonMaterialCaster : UObject {
};

// Class SimplygonUObjects.SimplygonColorCaster
// Size: 0x68 (Inherited: 0x30)
struct USimplygonColorCaster : USimplygonMaterialCaster {
	struct FColorCasterSettings ColorCasterSettings; // 0x30(0x38)
};

// Class SimplygonUObjects.BaseColorCaster
// Size: 0x68 (Inherited: 0x68)
struct UBaseColorCaster : USimplygonColorCaster {
};

// Class SimplygonUObjects.MetallicCaster
// Size: 0x68 (Inherited: 0x68)
struct UMetallicCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.SpecualarCaster
// Size: 0x68 (Inherited: 0x68)
struct USpecualarCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.RoughnessCaster
// Size: 0x68 (Inherited: 0x68)
struct URoughnessCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.SimplygonNormalCaster
// Size: 0x68 (Inherited: 0x30)
struct USimplygonNormalCaster : USimplygonMaterialCaster {
	struct FNormalCasterSettings NormalCasterSettings; // 0x30(0x38)
};

// Class SimplygonUObjects.NormalCaster
// Size: 0x68 (Inherited: 0x68)
struct UNormalCaster : USimplygonNormalCaster {
};

// Class SimplygonUObjects.SimplygonOpacityCaster
// Size: 0x68 (Inherited: 0x30)
struct USimplygonOpacityCaster : USimplygonMaterialCaster {
	struct FOpacityCasterSettings OpacityCasterSettings; // 0x30(0x38)
};

// Class SimplygonUObjects.OpacityCaster
// Size: 0x68 (Inherited: 0x68)
struct UOpacityCaster : USimplygonOpacityCaster {
};

// Class SimplygonUObjects.EmissiveCaster
// Size: 0x68 (Inherited: 0x68)
struct UEmissiveCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.OpacityMaskCaster
// Size: 0x68 (Inherited: 0x68)
struct UOpacityMaskCaster : USimplygonOpacityCaster {
};

// Class SimplygonUObjects.AmbientOcclusionMaskCaster
// Size: 0x68 (Inherited: 0x68)
struct UAmbientOcclusionMaskCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.ReductionPipeline
// Size: 0x240 (Inherited: 0x30)
struct UReductionPipeline : USimplygonPipeline {
	struct FReductionPipelineSettings Settings; // 0x30(0x210)
};

// Class SimplygonUObjects.RemeshingPipeline
// Size: 0x1d8 (Inherited: 0x30)
struct URemeshingPipeline : USimplygonPipeline {
	struct FRemeshingPipelineSettings Settings; // 0x30(0x1a8)
};

// Class SimplygonUObjects.AggregationPipeline
// Size: 0x1d0 (Inherited: 0x30)
struct UAggregationPipeline : USimplygonPipeline {
	struct FAggregationPipelineSettings Settings; // 0x30(0x1a0)
};

// Class SimplygonUObjects.SimplygonDisplacementCaster
// Size: 0x70 (Inherited: 0x30)
struct USimplygonDisplacementCaster : USimplygonMaterialCaster {
	struct FDisplacementCasterSettings DisplacementCasterSettings; // 0x30(0x40)
};

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
// Size: 0x78 (Inherited: 0x30)
struct USimplygonAmbientOcclusionCaster : USimplygonMaterialCaster {
	struct FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings; // 0x30(0x48)
};

// Class SimplygonUObjects.SimplygonGeometryDataCaster
// Size: 0x90 (Inherited: 0x30)
struct USimplygonGeometryDataCaster : USimplygonMaterialCaster {
	struct FGeometryDataCasterSettings GeometryDataCasterSettings; // 0x30(0x60)
};

// Class SimplygonUObjects.SimplygonVertexColorCaster
// Size: 0x80 (Inherited: 0x30)
struct USimplygonVertexColorCaster : USimplygonMaterialCaster {
	struct FVertexColorCasterSettings VertexColorCasterSettings; // 0x30(0x50)
};

