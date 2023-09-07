// BlueprintGeneratedClass BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C
// Size: 0x7c8 (Inherited: 0x230)
struct ABP_k27_IdleInterrupt_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UPostProcessComponent* Actor_PostProcess_K27_Interrupt_01; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
	struct FPostProcessSettings NewVar_1; // 0x250(0x560)
	struct UMaterialInstanceDynamic* PP_InterruptIdle_01; // 0x7b0(0x08)
	struct TArray<float> RandomArray; // 0x7b8(0x10)

	void UserConstructionScript(); // Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_k27_IdleInterrupt_01(int32_t EntryPoint); // Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ExecuteUbergraph_BP_k27_IdleInterrupt_01 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

