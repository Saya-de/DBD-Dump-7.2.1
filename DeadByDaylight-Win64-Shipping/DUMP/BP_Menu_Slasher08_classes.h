// BlueprintGeneratedClass BP_Menu_Slasher08.BP_Menu_Slasher08_C
// Size: 0x751 (Inherited: 0x728)
struct ABP_Menu_Slasher08_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_08_C* BP_Audio_KLR_08; // 0x730(0x08)
	struct USkeletalMeshComponent* ItemMesh_Axe; // 0x738(0x08)
	float Timeline_1_Dissolve_01C466A74EFEFADB8976FC84BC95D44F; // 0x740(0x04)
	enum class ETimelineDirection Timeline_1__Direction_01C466A74EFEFADB8976FC84BC95D44F; // 0x744(0x01)
	char pad_745[0x3]; // 0x745(0x03)
	struct UTimelineComponent* Timeline_2; // 0x748(0x08)
	bool IsHatchetVisible; // 0x750(0x01)

	void Timeline_1__FinishedFunc(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_1__UpdateFunc(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void FX_MakeHatchetAppear(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.FX_MakeHatchetAppear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_MakeHatchetDisappear(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.FX_MakeHatchetDisappear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCustomizationUpdated(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.OnCustomizationUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void K08_FX_MakeHatchetAppear(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.K08_FX_MakeHatchetAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K08_FX_MakeHatchetDisappear(); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.K08_FX_MakeHatchetDisappear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher08(int32_t EntryPoint); // Function BP_Menu_Slasher08.BP_Menu_Slasher08_C.ExecuteUbergraph_BP_Menu_Slasher08 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

