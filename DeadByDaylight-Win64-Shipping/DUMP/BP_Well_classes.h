// BlueprintGeneratedClass BP_Well.BP_Well_C
// Size: 0x260 (Inherited: 0x230)
struct ABP_Well_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UMaterialHelper* MaterialHelper; // 0x238(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float TML_WellDissolveController_Dissolve_67D9A2534602A3F9B1003CA8800C736F; // 0x250(0x04)
	enum class ETimelineDirection TML_WellDissolveController__Direction_67D9A2534602A3F9B1003CA8800C736F; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* TML_WellDissolveController; // 0x258(0x08)

	void TML_WellDissolveController__FinishedFunc(); // Function BP_Well.BP_Well_C.TML_WellDissolveController__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_WellDissolveController__UpdateFunc(); // Function BP_Well.BP_Well_C.TML_WellDissolveController__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_WellDissolveController__Disable Shadow__EventFunc(); // Function BP_Well.BP_Well_C.TML_WellDissolveController__Disable Shadow__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Well.BP_Well_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Event_DissolveWell(); // Function BP_Well.BP_Well_C.Event_DissolveWell // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Event_QuickDissolveWell_In(); // Function BP_Well.BP_Well_C.Event_QuickDissolveWell_In // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Well(int32_t EntryPoint); // Function BP_Well.BP_Well_C.ExecuteUbergraph_BP_Well // (Final|UbergraphFunction) // @ game+0x5e02c90
};

