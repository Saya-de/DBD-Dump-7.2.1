// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
// Size: 0xb0 (Inherited: 0x50)
struct UMoviePipelineBurnInSetting : UMoviePipelineRenderPass {
	struct FSoftClassPath BurnInClass; // 0x50(0x20)
	bool bCompositeOntoFinalImage; // 0x70(0x01)
	char pad_71[0x2f]; // 0x71(0x2f)
	struct UTextureRenderTarget2D* RenderTarget; // 0xa0(0x08)
	struct UMoviePipelineBurnInWidget* BurnInWidgetInstance; // 0xa8(0x08)
};

// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
// Size: 0x298 (Inherited: 0x298)
struct UMoviePipelineBurnInWidget : UUserWidget {

	void OnOutputFrameStarted(struct UMoviePipeline* ForPipeline); // Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
// Size: 0xd0 (Inherited: 0x50)
struct UMoviePipelineConsoleVariableSetting : UMoviePipelineSetting {
	struct TMap<struct FString, float> ConsoleVariables; // 0x50(0x50)
	struct TArray<struct FString> StartConsoleCommands; // 0xa0(0x10)
	struct TArray<struct FString> EndConsoleCommands; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
// Size: 0x70 (Inherited: 0x50)
struct UMoviePipelineWidgetRenderer : UMoviePipelineRenderPass {
	bool bCompositeOntoFinalImage; // 0x50(0x01)
	char pad_51[0x17]; // 0x51(0x17)
	struct UTextureRenderTarget2D* RenderTarget; // 0x68(0x08)
};

