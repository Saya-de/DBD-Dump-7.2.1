// BlueprintGeneratedClass BP_Menu_Slasher24.BP_Menu_Slasher24_C
// Size: 0x748 (Inherited: 0x728)
struct ABP_Menu_Slasher24_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UK24_KillerAudioMenuReaction_C* K24_KillerAudioMenuReaction; // 0x730(0x08)
	struct USkeletalMeshComponent* _tentacle; // 0x738(0x08)
	struct UBP_Audio_KLR_24_C* BP_Audio_KLR_25; // 0x740(0x08)

	void OnNotifyEnd_699133144A8A4CBB65233EA538E5F3E6(struct FName NotifyName); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnNotifyEnd_699133144A8A4CBB65233EA538E5F3E6 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_699133144A8A4CBB65233EA538E5F3E6(struct FName NotifyName); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnNotifyBegin_699133144A8A4CBB65233EA538E5F3E6 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_699133144A8A4CBB65233EA538E5F3E6(struct FName NotifyName); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnInterrupted_699133144A8A4CBB65233EA538E5F3E6 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_699133144A8A4CBB65233EA538E5F3E6(struct FName NotifyName); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnBlendOut_699133144A8A4CBB65233EA538E5F3E6 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_699133144A8A4CBB65233EA538E5F3E6(struct FName NotifyName); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnCompleted_699133144A8A4CBB65233EA538E5F3E6 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void K24_FX_HideTentacle(); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.K24_FX_HideTentacle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K24_FX_ShowTentacle(); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.K24_FX_ShowTentacle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher24(int32_t EntryPoint); // Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ExecuteUbergraph_BP_Menu_Slasher24 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

