// BlueprintGeneratedClass BP_Menu_Slasher30.BP_Menu_Slasher30_C
// Size: 0x740 (Inherited: 0x728)
struct ABP_Menu_Slasher30_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_30_C* BP_Audio_KLR_31; // 0x730(0x08)
	struct ABP_MenuFlags_C* MenuFlags; // 0x738(0x08)

	void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(enum class EAudioCustomizationCategory category, struct FString switchState); // Function BP_Menu_Slasher30.BP_Menu_Slasher30_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher30.BP_Menu_Slasher30_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Menu_Slasher30.BP_Menu_Slasher30_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void RemoveAssetsBeforeDestroy(); // Function BP_Menu_Slasher30.BP_Menu_Slasher30_C.RemoveAssetsBeforeDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BeginSmokeIn(); // Function BP_Menu_Slasher30.BP_Menu_Slasher30_C.BeginSmokeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher30(int32_t EntryPoint); // Function BP_Menu_Slasher30.BP_Menu_Slasher30_C.ExecuteUbergraph_BP_Menu_Slasher30 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

