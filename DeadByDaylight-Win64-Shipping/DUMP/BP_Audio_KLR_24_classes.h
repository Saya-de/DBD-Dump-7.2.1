// BlueprintGeneratedClass BP_Audio_KLR_24.BP_Audio_KLR_23_C
// Size: 0x218 (Inherited: 0x208)
struct UBP_Audio_KLR_23_C : UBP_Audio_KLR_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)
	struct UAkAudioEvent* AudioStatusStartMenuEvent; // 0x210(0x08)

	void SelectAudioStatusStartEvent(bool IsInMenu, struct UAkAudioEvent*& AudioEvent); // Function BP_Audio_KLR_24.BP_Audio_KLR_23_C.SelectAudioStatusStartEvent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Audio_KLR_24.BP_Audio_KLR_23_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Audio_KLR_24.BP_Audio_KLR_23_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Audio_KLR_24(int32_t EntryPoint); // Function BP_Audio_KLR_24.BP_Audio_KLR_23_C.ExecuteUbergraph_BP_Audio_KLR_24 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

