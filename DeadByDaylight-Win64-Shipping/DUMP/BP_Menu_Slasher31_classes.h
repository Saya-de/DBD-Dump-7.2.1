// BlueprintGeneratedClass BP_Menu_Slasher31.BP_Menu_Slasher31_C
// Size: 0x748 (Inherited: 0x728)
struct ABP_Menu_Slasher31_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_31_C* BP_Audio_KLR_32; // 0x730(0x08)
	struct USkeletalMeshComponent* Drone; // 0x738(0x08)
	struct USkeletalMeshComponent* Scanner; // 0x740(0x08)

	void ReceiveBeginPlay(); // Function BP_Menu_Slasher31.BP_Menu_Slasher31_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BP_Slasher_Character_31_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(enum class EAudioCustomizationCategory category, struct FString switchState); // Function BP_Menu_Slasher31.BP_Menu_Slasher31_C.BndEvt__BP_Slasher_Character_31_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher31(int32_t EntryPoint); // Function BP_Menu_Slasher31.BP_Menu_Slasher31_C.ExecuteUbergraph_BP_Menu_Slasher31 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

