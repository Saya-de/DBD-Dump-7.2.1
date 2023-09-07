// Class MovieRenderPipelineCore.MoviePipeline
// Size: 0x2e8 (Inherited: 0x30)
struct UMoviePipeline : UObject {
	struct FMulticastInlineDelegate OnMoviePipelineFinishedDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMoviePipelineWorkFinishedDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMoviePipelineShotWorkFinishedDelegate; // 0x50(0x10)
	struct UMoviePipelineCustomTimeStep* CustomTimeStep; // 0x60(0x08)
	char pad_68[0x10]; // 0x68(0x10)
	struct UEngineCustomTimeStep* CachedPrevCustomTimeStep; // 0x78(0x08)
	struct ULevelSequence* TargetSequence; // 0x80(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x88(0x08)
	struct UMovieRenderDebugWidget* DebugWidget; // 0x90(0x08)
	struct UTexture* PreviewTexture; // 0x98(0x08)
	char pad_A0[0x208]; // 0xa0(0x208)
	struct UMovieRenderDebugWidget* DebugWidgetClass; // 0x2a8(0x08)
	struct UMoviePipelineExecutorJob* CurrentJob; // 0x2b0(0x08)
	char pad_2B8[0x30]; // 0x2b8(0x30)

	void Shutdown(bool bError); // Function MovieRenderPipelineCore.MoviePipeline.Shutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x48d9d90
	void RequestShutdown(bool bIsError); // Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x48d9180
	void OnMoviePipelineFinishedImpl(); // Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl // (Native|Protected|BlueprintCallable) // @ game+0x48d90d0
	bool IsShutdownRequested(); // Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d8ef0
	void Initialize(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipeline.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x48d8e30
	struct UTexture* GetPreviewTexture(); // Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d8cd0
	struct UMoviePipelineMasterConfig* GetPipelineMasterConfig(); // Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d8c10
};

// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
// Size: 0x38 (Inherited: 0x30)
struct UMoviePipelineCustomTimeStep : UEngineCustomTimeStep {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MovieRenderPipelineCore.MoviePipelineSetting
// Size: 0x50 (Inherited: 0x30)
struct UMoviePipelineSetting : UObject {
	struct TWeakObjectPtr<struct UMoviePipeline> CachedPipeline; // 0x30(0x08)
	bool bEnabled; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)

	void BuildNewProcessCommandLine(struct FString& InOutUnrealURLParams, struct FString& InOutCommandLineArgs); // Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df340
};

// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
// Size: 0x70 (Inherited: 0x50)
struct UMoviePipelineAntiAliasingSetting : UMoviePipelineSetting {
	int32_t SpatialSampleCount; // 0x50(0x04)
	int32_t TemporalSampleCount; // 0x54(0x04)
	bool bOverrideAntiAliasing; // 0x58(0x01)
	enum class EAntiAliasingMethod AntiAliasingMethod; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32_t RenderWarmUpCount; // 0x5c(0x04)
	bool bUseCameraCutForWarmUp; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t EngineWarmUpCount; // 0x64(0x04)
	bool bRenderWarmUpFrames; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMoviePipelineBlueprintLibrary : UBlueprintFunctionLibrary {

	void UpdateJobShotListFromSequence(struct ULevelSequence* InSequence, struct UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x48d9e20
	int32_t ResolveVersionNumber(struct FMoviePipelineFilenameResolveParams InParams); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48d95e0
	void ResolveFilenameFormatArguments(struct FString InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, struct FString& OutFinalPath, struct FMoviePipelineFormatArgs& OutMergedFormatArgs); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x48d9210
	enum class EMovieRenderPipelineState GetPipelineState(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d8c40
	void GetOverallSegmentCounts(struct UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x48d8af0
	void GetOverallOutputFrames(struct UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x48d89d0
	struct FTimecode GetMasterTimecode(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d8930
	struct FFrameNumber GetMasterFrameNumber(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48d88a0
	struct FString GetMapPackageName(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d87d0
	struct FText GetJobName(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d86e0
	struct FDateTime GetJobInitializationTime(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48d8650
	struct FText GetJobAuthor(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d8560
	bool GetEstimatedTimeRemaining(struct UMoviePipeline* InPipeline, struct FTimespan& OutEstimate); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48d8480
	struct FIntPoint GetEffectiveOutputResolution(struct UMoviePipelineMasterConfig* InMasterConfig, struct UMoviePipelineExecutorShot* InPipelineExecutorShot); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x48d83b0
	struct FTimecode GetCurrentShotTimecode(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d8310
	struct FFrameNumber GetCurrentShotFrameNumber(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48d8280
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d8190
	enum class EMovieRenderShotState GetCurrentSegmentState(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d8100
	void GetCurrentSegmentName(struct UMoviePipeline* InMoviePipeline, struct FText& OutOuterName, struct FText& OutInnerName); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x48d7f60
	float GetCurrentFocusDistance(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d7ed0
	float GetCurrentFocalLength(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d7e40
	float GetCurrentAperture(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d7db0
	float GetCompletionPercentage(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x48d7d20
	struct UMoviePipelineSetting* FindOrGetDefaultSettingForShot(struct UMoviePipelineSetting* InSettingType, struct UMoviePipelineMasterConfig* InMasterConfig, struct UMoviePipelineExecutorShot* InShot); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48d77b0
	struct UMovieSceneSequence* DuplicateSequence(struct UObject* Outer, struct UMovieSceneSequence* InSequence); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48d7580
};

// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
// Size: 0x58 (Inherited: 0x50)
struct UMoviePipelineCameraSetting : UMoviePipelineSetting {
	enum class EMoviePipelineShutterTiming ShutterTiming; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float OverscanPercentage; // 0x54(0x04)
};

// Class MovieRenderPipelineCore.MoviePipelineColorSetting
// Size: 0xb8 (Inherited: 0x50)
struct UMoviePipelineColorSetting : UMoviePipelineSetting {
	struct FOpenColorIODisplayConfiguration OCIOConfiguration; // 0x50(0x60)
	bool bDisableToneCurve; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
// Size: 0x90 (Inherited: 0x50)
struct UMoviePipelineCommandLineEncoder : UMoviePipelineSetting {
	struct FString FileNameFormatOverride; // 0x50(0x10)
	enum class EMoviePipelineEncodeQuality Quality; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString AdditionalCommandLineArgs; // 0x68(0x10)
	bool bDeleteSourceFiles; // 0x78(0x01)
	bool bSkipEncodeOnRenderCanceled; // 0x79(0x01)
	char pad_7A[0x16]; // 0x7a(0x16)
};

// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
// Size: 0x110 (Inherited: 0x48)
struct UMoviePipelineCommandLineEncoderSettings : UDeveloperSettings {
	struct FString ExecutablePath; // 0x48(0x10)
	struct FText CodecHelpText; // 0x58(0x18)
	struct FString VideoCodec; // 0x70(0x10)
	struct FString AudioCodec; // 0x80(0x10)
	struct FString OutputFileExtension; // 0x90(0x10)
	struct FString CommandLineFormat; // 0xa0(0x10)
	struct FString VideoInputStringFormat; // 0xb0(0x10)
	struct FString AudioInputStringFormat; // 0xc0(0x10)
	struct FString EncodeSettings_Low; // 0xd0(0x10)
	struct FString EncodeSettings_Med; // 0xe0(0x10)
	struct FString EncodeSettings_High; // 0xf0(0x10)
	struct FString EncodeSettings_Epic; // 0x100(0x10)
};

// Class MovieRenderPipelineCore.MoviePipelineConfigBase
// Size: 0x58 (Inherited: 0x30)
struct UMoviePipelineConfigBase : UObject {
	struct FString DisplayName; // 0x30(0x10)
	struct TArray<struct UMoviePipelineSetting*> Settings; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	void RemoveSetting(struct UMoviePipelineSetting* InSetting); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting // (Native|Public|BlueprintCallable) // @ game+0x48d90f0
	struct TArray<struct UMoviePipelineSetting*> GetUserSettings(); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d8db0
	struct TArray<struct UMoviePipelineSetting*> FindSettingsByClass(struct UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d7ae0
	struct UMoviePipelineSetting* FindSettingByClass(struct UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d78b0
	struct UMoviePipelineSetting* FindOrAddSettingByClass(struct UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x48d76e0
	void CopyFrom(struct UMoviePipelineConfigBase* InConfig); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom // (Native|Public|BlueprintCallable) // @ game+0x48d74d0
};

// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
// Size: 0x60 (Inherited: 0x50)
struct UMoviePipelineDebugSettings : UMoviePipelineSetting {
	bool bWriteAllSamples; // 0x50(0x01)
	bool bCaptureFramesWithRenderDoc; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t CaptureFrame; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
// Size: 0x110 (Inherited: 0x30)
struct UMoviePipelineExecutorBase : UObject {
	struct FMulticastInlineDelegate OnExecutorFinishedDelegate; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct FMulticastInlineDelegate OnExecutorErroredDelegate; // 0x58(0x10)
	char pad_68[0x20]; // 0x68(0x20)
	struct FMulticastInlineDelegate SocketMessageRecievedDelegate; // 0x88(0x10)
	struct FMulticastInlineDelegate HTTPResponseRecievedDelegate; // 0x98(0x10)
	struct UMovieRenderDebugWidget* DebugWidgetClass; // 0xa8(0x08)
	struct FString UserData; // 0xb0(0x10)
	struct UMoviePipeline* TargetPipelineClass; // 0xc0(0x08)
	char pad_C8[0x48]; // 0xc8(0x48)

	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48d9d00
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48d9c60
	void SetMoviePipelineClass(struct UObject* InPipelineClass); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass // (Final|Native|Public|BlueprintCallable) // @ game+0x48d9bd0
	bool SendSocketMessage(struct FString InMessage); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage // (Final|Native|Protected|BlueprintCallable) // @ game+0x48d9b20
	int32_t SendHTTPRequest(struct FString InURL, struct FString InVerb, struct FString InMessage, struct TMap<struct FString, struct FString>& InHeaders); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x48d9910
	void OnExecutorFinishedImpl(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl // (Native|Protected|BlueprintCallable) // @ game+0x48d90d0
	void OnExecutorErroredImpl(struct UMoviePipeline* ErroredPipeline, bool bFatal, struct FText ErrorReason); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl // (Native|Protected|BlueprintCallable) // @ game+0x48d8f50
	void OnBeginFrame(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame // (Native|Event|Public|BlueprintEvent) // @ game+0x46a27a0
	bool IsSocketConnected(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x48d8f20
	bool IsRendering(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48d8ec0
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48d8d70
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48d8cf0
	void Execute(struct UMoviePipelineQueue* InPipelineQueue); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48d7650
	void DisconnectSocket(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket // (Final|Native|Protected|BlueprintCallable) // @ game+0x48d7560
	bool ConnectSocket(struct FString InHostName, int32_t InPort); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket // (Final|Native|Protected|BlueprintCallable) // @ game+0x48d73e0
	void CancelCurrentJob(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48d73c0
	void CancelAllJobs(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48d73a0
};

// Class MovieRenderPipelineCore.MoviePipelineOutputBase
// Size: 0x50 (Inherited: 0x50)
struct UMoviePipelineOutputBase : UMoviePipelineSetting {
};

// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
// Size: 0x88 (Inherited: 0x50)
struct UMoviePipelineFCPXMLExporter : UMoviePipelineOutputBase {
	char pad_50[0x8]; // 0x50(0x08)
	struct FString FileNameFormatOverride; // 0x58(0x10)
	enum class FCPXMLExportDataSource DataSource; // 0x68(0x01)
	char pad_69[0x1f]; // 0x69(0x1f)
};

// Class MovieRenderPipelineCore.MoviePipelineGameMode
// Size: 0x2d8 (Inherited: 0x2d8)
struct AMoviePipelineGameMode : AGameModeBase {
};

// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
// Size: 0x110 (Inherited: 0x50)
struct UMoviePipelineGameOverrideSetting : UMoviePipelineSetting {
	struct AGameModeBase* GameModeOverride; // 0x50(0x08)
	bool bCinematicQualitySettings; // 0x58(0x01)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming; // 0x59(0x01)
	bool bUseLODZero; // 0x5a(0x01)
	bool bDisableHLODs; // 0x5b(0x01)
	bool bUseHighQualityShadows; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t ShadowDistanceScale; // 0x60(0x04)
	float ShadowRadiusThreshold; // 0x64(0x04)
	bool bOverrideViewDistanceScale; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t ViewDistanceScale; // 0x6c(0x04)
	bool bFlushGrassStreaming; // 0x70(0x01)
	char pad_71[0x9f]; // 0x71(0x9f)
};

// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
// Size: 0x68 (Inherited: 0x50)
struct UMoviePipelineHighResSetting : UMoviePipelineSetting {
	int32_t TileCount; // 0x50(0x04)
	float TextureSharpnessBias; // 0x54(0x04)
	float OverlapRatio; // 0x58(0x04)
	bool bOverrideSubSurfaceScattering; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t BurleySampleCount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
// Size: 0x138 (Inherited: 0x110)
struct UMoviePipelineLinearExecutorBase : UMoviePipelineExecutorBase {
	struct UMoviePipelineQueue* Queue; // 0x110(0x08)
	struct UMoviePipeline* ActiveMoviePipeline; // 0x118(0x08)
	char pad_120[0x18]; // 0x120(0x18)
};

// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
// Size: 0x170 (Inherited: 0x138)
struct UMoviePipelineInProcessExecutor : UMoviePipelineLinearExecutorBase {
	bool bUseCurrentLevel; // 0x138(0x01)
	char pad_139[0x37]; // 0x139(0x37)
};

// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
// Size: 0x78 (Inherited: 0x48)
struct UMoviePipelineInProcessExecutorSettings : UDeveloperSettings {
	bool bCloseEditor; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString AdditionalCommandLineArguments; // 0x50(0x10)
	struct FString InheritedCommandLineArguments; // 0x60(0x10)
	int32_t InitialDelayFrameCount; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MovieRenderPipelineCore.MoviePipelineMasterConfig
// Size: 0xc0 (Inherited: 0x58)
struct UMoviePipelineMasterConfig : UMoviePipelineConfigBase {
	struct TMap<struct FString, struct UMoviePipelineShotConfig*> PerShotConfigMapping; // 0x58(0x50)
	struct UMoviePipelineOutputSetting* OutputSetting; // 0xa8(0x08)
	struct TArray<struct UMoviePipelineSetting*> TransientSettings; // 0xb0(0x10)

	void InitializeTransientSettings(); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x48dfd70
	struct TArray<struct UMoviePipelineSetting*> GetTransientSettings(); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48dfcb0
	struct FFrameRate GetEffectiveFrameRate(struct ULevelSequence* InSequence); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df820
	struct TArray<struct UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df6d0
};

// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
// Size: 0xb8 (Inherited: 0x50)
struct UMoviePipelineOutputSetting : UMoviePipelineSetting {
	struct FDirectoryPath OutputDirectory; // 0x50(0x10)
	struct FString FileNameFormat; // 0x60(0x10)
	struct FIntPoint OutputResolution; // 0x70(0x08)
	bool bUseCustomFrameRate; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FFrameRate OutputFrameRate; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	bool bOverrideExistingOutput; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t HandleFrameCount; // 0x8c(0x04)
	int32_t OutputFrameStep; // 0x90(0x04)
	bool bUseCustomPlaybackRange; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	int32_t CustomStartFrame; // 0x98(0x04)
	int32_t CustomEndFrame; // 0x9c(0x04)
	int32_t VersionNumber; // 0xa0(0x04)
	bool bAutoVersion; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	int32_t ZeroPadFrameNumbers; // 0xa8(0x04)
	int32_t FrameNumberOffset; // 0xac(0x04)
	bool bFlushDiskWritesPerShot; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
// Size: 0x128 (Inherited: 0x110)
struct UMoviePipelinePythonHostExecutor : UMoviePipelineExecutorBase {
	struct UMoviePipelinePythonHostExecutor* ExecutorClass; // 0x110(0x08)
	struct UMoviePipelineQueue* PipelineQueue; // 0x118(0x08)
	struct UWorld* LastLoadedWorld; // 0x120(0x08)

	void OnMapLoad(struct UWorld* InWorld); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad // (Native|Event|Public|BlueprintEvent) // @ game+0x48dfe20
	struct UWorld* GetLastLoadedWorld(); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df970
	void ExecuteDelayed(struct UMoviePipelineQueue* InPipelineQueue); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed // (Native|Event|Public|BlueprintEvent) // @ game+0x48df620
};

// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
// Size: 0x140 (Inherited: 0x30)
struct UMoviePipelineExecutorShot : UObject {
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString OuterName; // 0x38(0x10)
	struct FString InnerName; // 0x48(0x10)
	char pad_58[0x98]; // 0x58(0x98)
	float Progress; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString StatusMessage; // 0xf8(0x10)
	struct UMoviePipelineShotConfig* ShotOverrideConfig; // 0x108(0x08)
	struct TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin; // 0x110(0x30)

	bool ShouldRender(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fce1b0
	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48e0450
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48e03b0
	void SetShotOverridePresetOrigin(struct UMoviePipelineShotConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0x48e0320
	void SetShotOverrideConfiguration(struct UMoviePipelineShotConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration // (Final|Native|Public|BlueprintCallable) // @ game+0x48e0290
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48dfc70
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48d8db0
	struct UMoviePipelineShotConfig* GetShotOverridePresetOrigin(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48dfac0
	struct UMoviePipelineShotConfig* GetShotOverrideConfiguration(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48dfaa0
	struct UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(struct UMoviePipelineShotConfig* InConfigType); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x48df2a0
};

// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
// Size: 0x100 (Inherited: 0x30)
struct UMoviePipelineExecutorJob : UObject {
	struct FString JobName; // 0x30(0x10)
	struct FSoftObjectPath Sequence; // 0x40(0x20)
	struct FSoftObjectPath Map; // 0x60(0x20)
	struct FString Author; // 0x80(0x10)
	struct TArray<struct UMoviePipelineExecutorShot*> ShotInfo; // 0x90(0x10)
	struct FString UserData; // 0xa0(0x10)
	struct FString StatusMessage; // 0xb0(0x10)
	float StatusProgress; // 0xc0(0x04)
	bool bIsConsumed; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UMoviePipelineMasterConfig* Configuration; // 0xc8(0x08)
	struct TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin; // 0xd0(0x30)

	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48e0450
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48e03b0
	void SetSequence(struct FSoftObjectPath InSequence); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48e0190
	void SetPresetOrigin(struct UMoviePipelineMasterConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0x48e0100
	void SetConsumed(bool bInConsumed); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48e0070
	void SetConfiguration(struct UMoviePipelineMasterConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration // (Final|Native|Public|BlueprintCallable) // @ game+0x48dffe0
	void OnDuplicated(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48dfe00
	bool IsConsumed(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48dfd90
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48dfc30
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x48dfbb0
	struct UMoviePipelineMasterConfig* GetPresetOrigin(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df990
	struct UMoviePipelineMasterConfig* GetConfiguration(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df800
};

// Class MovieRenderPipelineCore.MoviePipelineQueue
// Size: 0x48 (Inherited: 0x30)
struct UMoviePipelineQueue : UObject {
	struct TArray<struct UMoviePipelineExecutorJob*> Jobs; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct TArray<struct UMoviePipelineExecutorJob*> GetJobs(); // Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df8b0
	struct UMoviePipelineExecutorJob* DuplicateJob(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob // (Final|Native|Public|BlueprintCallable) // @ game+0x48df580
	void DeleteJob(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob // (Final|Native|Public|BlueprintCallable) // @ game+0x48df4f0
	void CopyFrom(struct UMoviePipelineQueue* InQueue); // Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom // (Final|Native|Public|BlueprintCallable) // @ game+0x48df460
	struct UMoviePipelineExecutorJob* AllocateNewJob(struct UMoviePipelineExecutorJob* InJobType); // Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob // (Final|Native|Public|BlueprintCallable) // @ game+0x48df200
};

// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
// Size: 0x48 (Inherited: 0x38)
struct UMoviePipelineQueueEngineSubsystem : UEngineSubsystem {
	struct UMoviePipelineExecutorBase* ActiveExecutor; // 0x38(0x08)
	struct UMoviePipelineQueue* CurrentQueue; // 0x40(0x08)

	void RenderQueueWithExecutorInstance(struct UMoviePipelineExecutorBase* InExecutor); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x48dff50
	struct UMoviePipelineExecutorBase* RenderQueueWithExecutor(struct UMoviePipelineExecutorBase* InExecutorType); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor // (Final|Native|Public|BlueprintCallable) // @ game+0x48dfeb0
	bool IsRendering(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48dfdc0
	struct UMoviePipelineQueue* GetQueue(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48dfa80
	struct UMoviePipelineExecutorBase* GetActiveExecutor(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48df6b0
};

// Class MovieRenderPipelineCore.MoviePipelineRenderPass
// Size: 0x50 (Inherited: 0x50)
struct UMoviePipelineRenderPass : UMoviePipelineSetting {
};

// Class MovieRenderPipelineCore.MoviePipelineShotConfig
// Size: 0x58 (Inherited: 0x58)
struct UMoviePipelineShotConfig : UMoviePipelineConfigBase {
};

// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
// Size: 0x90 (Inherited: 0x50)
struct UMoviePipelineVideoOutputBase : UMoviePipelineOutputBase {
	char pad_50[0x40]; // 0x50(0x40)
};

// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
// Size: 0x50 (Inherited: 0x50)
struct UMoviePipelineViewFamilySetting : UMoviePipelineSetting {
};

// Class MovieRenderPipelineCore.MovieRenderDebugWidget
// Size: 0x298 (Inherited: 0x298)
struct UMovieRenderDebugWidget : UUserWidget {

	void OnInitializedForPipeline(struct UMoviePipeline* ForPipeline); // Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

