// BlueprintGeneratedClass BP_Menu_Slasher25.BP_Menu_Slasher25_C
// Size: 0x758 (Inherited: 0x728)
struct ABP_Menu_Slasher25_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct USkeletalMeshComponent* LamentConfMesh; // 0x730(0x08)
	struct USkeletalMeshComponent* ChainsMesh; // 0x738(0x08)
	struct UBP_Audio_KLR_25_C* BP_Audio_KLR_26; // 0x740(0x08)
	float TM_LamentBoxVisibility_Dissolve_A56755B4431C0BE684B0688D2A09C847; // 0x748(0x04)
	enum class ETimelineDirection TM_LamentBoxVisibility__Direction_A56755B4431C0BE684B0688D2A09C847; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
	struct UTimelineComponent* TM_LamentBoxVisibility; // 0x750(0x08)

	void TM_LamentBoxVisibility__FinishedFunc(); // Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TM_LamentBoxVisibility__UpdateFunc(); // Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void MakeLamentBoxDisappear(); // Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxDisappear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void MakeLamentBoxAppear(); // Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxAppear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher25(int32_t EntryPoint); // Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.ExecuteUbergraph_BP_Menu_Slasher25 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

