// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// Size: 0x48 (Inherited: 0x00)
struct FMovieSceneGeometryCacheParams {
	struct UGeometryCache* GeometryCacheAsset; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float startOffset; // 0x1c(0x04)
	float EndOffset; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FSoftObjectPath GeometryCache; // 0x28(0x20)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Size: 0x70 (Inherited: 0x20)
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20(0x50)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Size: 0x50 (Inherited: 0x48)
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	struct FFrameNumber SectionStartTime; // 0x48(0x04)
	struct FFrameNumber SectionEndTime; // 0x4c(0x04)
};

