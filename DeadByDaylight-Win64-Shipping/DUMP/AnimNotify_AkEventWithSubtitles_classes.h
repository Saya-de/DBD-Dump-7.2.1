// BlueprintGeneratedClass AnimNotify_AkEventWithSubtitles.AnimNotify_AkEventWithSubtitles_C
// Size: 0x88 (Inherited: 0x40)
struct UAnimNotify_AkEventWithSubtitles_C : UAnimNotify {
	struct FString Attach Name; // 0x40(0x10)
	struct TArray<struct FAkEventWithSubtitle> EventRandomizer; // 0x50(0x10)
	float maxSubtitleDistance; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FCustomSoundFXData> RequiredAudioSwitch; // 0x68(0x10)
	struct TArray<struct FCustomSoundFXData> ForbiddenAudioSwitch; // 0x78(0x10)

	void Should Execute Notify(struct ADBDBasePlayer*& OwningPlayer, bool& ShouldExecute); // Function AnimNotify_AkEventWithSubtitles.AnimNotify_AkEventWithSubtitles_C.Should Execute Notify // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_AkEventWithSubtitles.AnimNotify_AkEventWithSubtitles_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
};

