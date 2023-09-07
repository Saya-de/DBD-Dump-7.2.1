// BlueprintGeneratedClass BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C
// Size: 0x260 (Inherited: 0x230)
struct ABP_k27_MenuIdleInterrupt_02_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UPostProcessComponent* Actor_PostProcess_K27_Interrupt_02; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float TML_PP_IdleInterrupt_02_Int_Vignette_A015685E4996C78ADD577788FC36D84F; // 0x248(0x04)
	enum class ETimelineDirection TML_PP_IdleInterrupt_02__Direction_A015685E4996C78ADD577788FC36D84F; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* TML_PP_IdleInterrupt_02; // 0x250(0x08)
	struct UMaterialInstanceDynamic* PP_InterruptIdle_02; // 0x258(0x08)

	void TML_PP_IdleInterrupt_02__FinishedFunc(); // Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_PP_IdleInterrupt_02__UpdateFunc(); // Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Destroy_PP_IdleInterrupt_02(); // Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.Destroy_PP_IdleInterrupt_02 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02(int32_t EntryPoint); // Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

