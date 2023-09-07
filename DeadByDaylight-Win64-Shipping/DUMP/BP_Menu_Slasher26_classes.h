// BlueprintGeneratedClass BP_Menu_Slasher26.BP_Menu_Slasher26_C
// Size: 0x744 (Inherited: 0x728)
struct ABP_Menu_Slasher26_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_26_C* BP_Audio_KLR_27; // 0x730(0x08)
	struct USkeletalMeshComponent* CrowHead_Mesh; // 0x738(0x08)
	int32_t RandomInterupt_1; // 0x740(0x04)

	void GetIn(); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.GetIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_64980147466C70D6568DB5B98DD4A55E(struct FName NotifyName); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnNotifyEnd_64980147466C70D6568DB5B98DD4A55E // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_64980147466C70D6568DB5B98DD4A55E(struct FName NotifyName); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnNotifyBegin_64980147466C70D6568DB5B98DD4A55E // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_64980147466C70D6568DB5B98DD4A55E(struct FName NotifyName); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnInterrupted_64980147466C70D6568DB5B98DD4A55E // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_64980147466C70D6568DB5B98DD4A55E(struct FName NotifyName); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnBlendOut_64980147466C70D6568DB5B98DD4A55E // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_64980147466C70D6568DB5B98DD4A55E(struct FName NotifyName); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnCompleted_64980147466C70D6568DB5B98DD4A55E // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(enum class EAudioCustomizationCategory category, struct FString switchState); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnMenuAnimationStateChange_Event(enum class Enum_MenuAnimationState State); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnMenuAnimationStateChange_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher26(int32_t EntryPoint); // Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.ExecuteUbergraph_BP_Menu_Slasher26 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

