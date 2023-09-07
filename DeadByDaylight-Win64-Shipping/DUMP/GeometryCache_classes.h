// Class GeometryCache.GeometryCache
// Size: 0x78 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	int32_t StartFrame; // 0x68(0x04)
	int32_t EndFrame; // 0x6c(0x04)
	uint64_t Hash; // 0x70(0x08)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x238 (Inherited: 0x230)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x230(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ac10
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x40 (Inherited: 0x30)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x30(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x48 (Inherited: 0x40)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x48 (Inherited: 0x40)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x4d0(0x08)
	bool bRunning; // 0x4d8(0x01)
	bool bLooping; // 0x4d9(0x01)
	bool bExtrapolateFrames; // 0x4da(0x01)
	char pad_4DB[0x1]; // 0x4db(0x01)
	float StartTimeOffset; // 0x4dc(0x04)
	float PlaybackSpeed; // 0x4e0(0x04)
	float MotionVectorScale; // 0x4e4(0x04)
	int32_t NumTracks; // 0x4e8(0x04)
	float ElapsedTime; // 0x4ec(0x04)
	char pad_4F0[0x34]; // 0x4f0(0x34)
	float Duration; // 0x524(0x04)
	bool bManualTick; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0x462b3f0
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x462b3d0
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x462b350
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x462b2d0
	void SetMotionVectorScale(float NewMotionVectorScale); // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale // (Final|Native|Public|BlueprintCallable) // @ game+0x462b250
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x462afc0
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // @ game+0x462af20
	void SetExtrapolateFrames(bool bNewExtrapolating); // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x462ae90
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x462ae70
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // @ game+0x462ae50
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x462ae30
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x462ae10
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x462adf0
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462adc0
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ad90
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ad60
	bool IsExtrapolatingFrames(); // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ad30
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ad00
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462acd0
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462aca0
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ac70
	float GetMotionVectorScale(); // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462ac40
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462abe0
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462abb0
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x60 (Inherited: 0x30)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x30(0x04)
	char pad_34[0x2c]; // 0x34(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x88 (Inherited: 0x60)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x60(0x04)
	char pad_64[0x24]; // 0x64(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0x462a950
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xe0 (Inherited: 0x60)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x60(0x08)
	char pad_68[0x68]; // 0x68(0x68)
	float StartSampleTime; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x110 (Inherited: 0x60)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_60[0xb0]; // 0x60(0xb0)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x462b050
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x110 (Inherited: 0x60)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_60[0xb0]; // 0x60(0xb0)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x462b050
};

