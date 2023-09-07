// BlueprintGeneratedClass BP_Logo.BP_Logo_C
// Size: 0x280 (Inherited: 0x230)
struct ABP_Logo_C : ADBDLogo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UMaterialHelper* MaterialHelper; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float Timeline_0_Fade_E88DB81340E64A2D6C8133B1212395F5; // 0x250(0x04)
	float Timeline_0_Timing_E88DB81340E64A2D6C8133B1212395F5; // 0x254(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E88DB81340E64A2D6C8133B1212395F5; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UTimelineComponent* Timeline_1; // 0x260(0x08)
	float Anim_Fade_89F4B59C42CBB8068E84979C128BB364; // 0x268(0x04)
	float Anim_Timing_89F4B59C42CBB8068E84979C128BB364; // 0x26c(0x04)
	enum class ETimelineDirection Anim__Direction_89F4B59C42CBB8068E84979C128BB364; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UTimelineComponent* Anim; // 0x278(0x08)

	void Anim__FinishedFunc(); // Function BP_Logo.BP_Logo_C.Anim__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Anim__UpdateFunc(); // Function BP_Logo.BP_Logo_C.Anim__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__FinishedFunc(); // Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__UpdateFunc(); // Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Logo.BP_Logo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Logo(int32_t EntryPoint); // Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo // (Final|UbergraphFunction) // @ game+0x5e02c90
};

