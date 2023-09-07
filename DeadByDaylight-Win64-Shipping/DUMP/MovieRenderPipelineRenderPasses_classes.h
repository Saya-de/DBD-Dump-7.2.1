// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
// Size: 0xd0 (Inherited: 0x50)
struct UMoviePipelineImagePassBase : UMoviePipelineRenderPass {
	char pad_50[0x80]; // 0x50(0x80)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
// Size: 0x178 (Inherited: 0xd0)
struct UMoviePipelineDeferredPassBase : UMoviePipelineImagePassBase {
	bool bAccumulatorIncludesAlpha; // 0xd0(0x01)
	bool bDisableMultisampleEffects; // 0xd1(0x01)
	bool bUse32BitPostProcessMaterials; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
	struct TArray<struct FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials; // 0xd8(0x10)
	bool bAddDefaultLayer; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FActorLayer> StencilLayers; // 0xf0(0x10)
	struct TArray<struct UMaterialInterface*> ActivePostProcessMaterials; // 0x100(0x10)
	struct UMaterialInterface* StencilLayerMaterial; // 0x110(0x08)
	struct TArray<struct UTextureRenderTarget2D*> TileRenderTargets; // 0x118(0x10)
	char pad_128[0x50]; // 0x128(0x50)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
// Size: 0x178 (Inherited: 0x178)
struct UMoviePipelineDeferredPass_Unlit : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
// Size: 0x178 (Inherited: 0x178)
struct UMoviePipelineDeferredPass_DetailLighting : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
// Size: 0x178 (Inherited: 0x178)
struct UMoviePipelineDeferredPass_LightingOnly : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
// Size: 0x178 (Inherited: 0x178)
struct UMoviePipelineDeferredPass_ReflectionsOnly : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
// Size: 0x178 (Inherited: 0x178)
struct UMoviePipelineDeferredPass_PathTracer : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
// Size: 0x70 (Inherited: 0x50)
struct UMoviePipelineImageSequenceOutputBase : UMoviePipelineOutputBase {
	char pad_50[0x20]; // 0x50(0x20)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
// Size: 0x78 (Inherited: 0x70)
struct UMoviePipelineImageSequenceOutput_EXR : UMoviePipelineImageSequenceOutputBase {
	enum class EEXRCompressionFormat Compression; // 0x70(0x01)
	bool bMultilayer; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
// Size: 0x70 (Inherited: 0x70)
struct UMoviePipelineImageSequenceOutput_BMP : UMoviePipelineImageSequenceOutputBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
// Size: 0x70 (Inherited: 0x70)
struct UMoviePipelineImageSequenceOutput_PNG : UMoviePipelineImageSequenceOutputBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
// Size: 0x70 (Inherited: 0x70)
struct UMoviePipelineImageSequenceOutput_JPG : UMoviePipelineImageSequenceOutputBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
// Size: 0xc0 (Inherited: 0x50)
struct UMoviePipelineWaveOutput : UMoviePipelineOutputBase {
	struct FString FileNameFormatOverride; // 0x50(0x10)
	char pad_60[0x60]; // 0x60(0x60)
};

