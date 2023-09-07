// BlueprintGeneratedClass BP_AfterImageComponent.BP_AfterImageComponent_C
// Size: 0x1a8 (Inherited: 0x188)
struct UBP_AfterImageComponent_C : UOnryoAfterImageComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x188(0x08)
	struct TArray<struct ABP_Effect_K27_AfterImage_01_C*> AfterImages; // 0x190(0x10)
	int32_t PassivePhaseWalkHuskCurrentIndex; // 0x1a0(0x04)
	int32_t AmountOfHusksToSpawn; // 0x1a4(0x04)

	void InOtherWorld(bool& InPhysicalWorld); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.InOtherWorld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void GetRandomLocationNearKillerMesh(struct FTransform& Transform); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.GetRandomLocationNearKillerMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void SpawnAfterImage(struct FTransform& huskTransform, float opacityValue, float speedValue); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.SpawnAfterImage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AfterImagesSpawningLoop(); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.AfterImagesSpawningLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.OnLevelReadyToPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShouldShowAfterImageChanged(bool shouldBeVisible); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.ShouldShowAfterImageChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void UpdateCustomization(); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.UpdateCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_AfterImageComponent(int32_t EntryPoint); // Function BP_AfterImageComponent.BP_AfterImageComponent_C.ExecuteUbergraph_BP_AfterImageComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

