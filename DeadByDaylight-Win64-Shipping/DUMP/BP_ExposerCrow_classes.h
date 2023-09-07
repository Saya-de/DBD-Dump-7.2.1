// BlueprintGeneratedClass BP_ExposerCrow.BP_ExposerCrow_C
// Size: 0x2b1 (Inherited: 0x260)
struct ABP_ExposerCrow_C : ACamperExposerInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UStaticMeshComponent* SM_VAT_Crow_Iddle; // 0x268(0x08)
	struct USceneComponent* Crow Position; // 0x270(0x08)
	struct UMaterialHelper* MaterialHelper; // 0x278(0x08)
	struct UAkComponent* Ak_Audio_ExposerCrow; // 0x280(0x08)
	struct UExposerCirclingComponent* ExposerCircling; // 0x288(0x08)
	float Timeline_1_Fade_BB8CD443452045F03CD8739C3DA7A950; // 0x290(0x04)
	enum class ETimelineDirection Timeline_1__Direction_BB8CD443452045F03CD8739C3DA7A950; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_2; // 0x298(0x08)
	float Crow_Dissolve_Fade_48F0A1774BFA01C45285CAA28EE10ABC; // 0x2a0(0x04)
	enum class ETimelineDirection Crow_Dissolve__Direction_48F0A1774BFA01C45285CAA28EE10ABC; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Crow Dissolve; // 0x2a8(0x08)
	bool ShouldTakeoff; // 0x2b0(0x01)

	void SetTunableValues(); // Function BP_ExposerCrow.BP_ExposerCrow_C.SetTunableValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Crow Dissolve__FinishedFunc(); // Function BP_ExposerCrow.BP_ExposerCrow_C.Crow Dissolve__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Crow Dissolve__UpdateFunc(); // Function BP_ExposerCrow.BP_ExposerCrow_C.Crow Dissolve__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_1__FinishedFunc(); // Function BP_ExposerCrow.BP_ExposerCrow_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_1__UpdateFunc(); // Function BP_ExposerCrow.BP_ExposerCrow_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void StartExitSequence(bool withRandomDelay); // Function BP_ExposerCrow.BP_ExposerCrow_C.StartExitSequence // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_ExposerCrow.BP_ExposerCrow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void StartSpawnSequence(bool withRandomDelay); // Function BP_ExposerCrow.BP_ExposerCrow_C.StartSpawnSequence // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetIsInteriorBP(bool interior); // Function BP_ExposerCrow.BP_ExposerCrow_C.SetIsInteriorBP // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CustomEvent_2(enum class EAkResult Result); // Function BP_ExposerCrow.BP_ExposerCrow_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_ExposerCrow(int32_t EntryPoint); // Function BP_ExposerCrow.BP_ExposerCrow_C.ExecuteUbergraph_BP_ExposerCrow // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

