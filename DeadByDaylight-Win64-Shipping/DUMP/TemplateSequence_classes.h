// Class TemplateSequence.TemplateSequence
// Size: 0x120 (Inherited: 0x68)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x70(0x30)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0xa0(0x30)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xd0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x120 (Inherited: 0x120)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// Size: 0x690 (Inherited: 0x30)
struct USequenceCameraShakeCameraStandIn : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float FieldOfView; // 0x38(0x04)
	char bConstrainAspectRatio : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float AspectRatio; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FPostProcessSettings PostProcessSettings; // 0x50(0x560)
	float PostProcessBlendWeight; // 0x5b0(0x04)
	struct FCameraFilmbackSettings Filmback; // 0x5b4(0x0c)
	struct FCameraLensSettings LensSettings; // 0x5c0(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x5d8(0x60)
	float CurrentFocalLength; // 0x638(0x04)
	float CurrentAperture; // 0x63c(0x04)
	float CurrentFocusDistance; // 0x640(0x04)
	char pad_644[0x4c]; // 0x644(0x4c)
};

// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x60 (Inherited: 0x30)
struct USequenceCameraShakePattern : UCameraShakePattern {
	struct UCameraAnimationSequence* Sequence; // 0x30(0x08)
	float PlayRate; // 0x38(0x04)
	float Scale; // 0x3c(0x04)
	float BlendInTime; // 0x40(0x04)
	float BlendOutTime; // 0x44(0x04)
	float RandomSegmentDuration; // 0x48(0x04)
	bool bRandomSegment; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct USequenceCameraShakeSequencePlayer* Player; // 0x50(0x08)
	struct USequenceCameraShakeCameraStandIn* CameraStandIn; // 0x58(0x08)
};

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// Size: 0x430 (Inherited: 0x30)
struct USequenceCameraShakeSequencePlayer : UObject {
	char pad_30[0x2a8]; // 0x30(0x2a8)
	struct UObject* BoundObjectOverride; // 0x2d8(0x08)
	struct UMovieSceneSequence* Sequence; // 0x2e0(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e8(0xe8)
	char pad_3D0[0x60]; // 0x3d0(0x60)
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x290 (Inherited: 0x230)
struct ATemplateSequenceActor : AActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x240(0x14)
	char pad_254[0x4]; // 0x254(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x258(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x260(0x20)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x280(0x0c)
	char pad_28C[0x4]; // 0x28c(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x4931c90
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x4931bc0
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4931b90
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4931b60
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4931b30
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4f8 (Inherited: 0x4f0)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_4F0[0x8]; // 0x4f0(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x49319b0
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x188 (Inherited: 0x170)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	char pad_170[0x8]; // 0x170(0x08)
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales; // 0x178(0x10)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb8 (Inherited: 0x48)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_48[0x70]; // 0x48(0x70)
};

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0xa0 (Inherited: 0x48)
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem {
	char pad_48[0x58]; // 0x48(0x58)
};

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x98 (Inherited: 0x48)
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_48[0x50]; // 0x48(0x50)
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

