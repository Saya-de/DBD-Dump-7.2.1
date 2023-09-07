// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// Size: 0x70 (Inherited: 0x40)
struct UAnimNotify_AkEvent_C : UAnimNotify {
	struct FString Attach Name; // 0x40(0x10)
	struct UAkAudioEvent* Event; // 0x50(0x08)
	bool Follow; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString EventName; // 0x60(0x10)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
};

