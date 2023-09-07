// BlueprintGeneratedClass BP_MenuFlags.BP_MenuFlags_C
// Size: 0x280 (Inherited: 0x230)
struct ABP_MenuFlags_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UMaterialHelper* MaterialHelper; // 0x238(0x08)
	struct UStaticMeshComponent* Flag03; // 0x240(0x08)
	struct UStaticMeshComponent* Flag02; // 0x248(0x08)
	struct UStaticMeshComponent* Flag01; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float TML_FlagDissolveController_DissolveSwitch_44E3C9B54D31D0CA3010458ADEAE888A; // 0x260(0x04)
	float TML_FlagDissolveController_BannerOpacity_44E3C9B54D31D0CA3010458ADEAE888A; // 0x264(0x04)
	float TML_FlagDissolveController_Banner_Dissolve_Progress_44E3C9B54D31D0CA3010458ADEAE888A; // 0x268(0x04)
	float TML_FlagDissolveController_Flag_Stand_Dissolve_Progress_44E3C9B54D31D0CA3010458ADEAE888A; // 0x26c(0x04)
	enum class ETimelineDirection TML_FlagDissolveController__Direction_44E3C9B54D31D0CA3010458ADEAE888A; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UTimelineComponent* TML_FlagDissolveController; // 0x278(0x08)

	void TML_FlagDissolveController__FinishedFunc(); // Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_FlagDissolveController__UpdateFunc(); // Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_FlagDissolveController__Disable Shadow__EventFunc(); // Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__Disable Shadow__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Event_DissolveFlag(); // Function BP_MenuFlags.BP_MenuFlags_C.Event_DissolveFlag // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Event_QuickDissolveFlag_In(); // Function BP_MenuFlags.BP_MenuFlags_C.Event_QuickDissolveFlag_In // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_MenuFlags.BP_MenuFlags_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_MenuFlags(int32_t EntryPoint); // Function BP_MenuFlags.BP_MenuFlags_C.ExecuteUbergraph_BP_MenuFlags // (Final|UbergraphFunction) // @ game+0x5e02c90
};

