// BlueprintGeneratedClass BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C
// Size: 0x288 (Inherited: 0x268)
struct ABP_Effect_K27_AfterImage_01_C : APoseableHusk {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	float Fade_Fade_5487A9754B5AE15B4E9D0F8644A2CE40; // 0x270(0x04)
	enum class ETimelineDirection Fade__Direction_5487A9754B5AE15B4E9D0F8644A2CE40; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* fade; // 0x278(0x08)
	float opacityValue; // 0x280(0x04)
	float Speed; // 0x284(0x04)

	void Fade__FinishedFunc(); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Fade__UpdateFunc(); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Fade__RemoveVFX__EventFunc(); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__RemoveVFX__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAnimationPoseCaptured(); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_OnAnimationPoseCaptured // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void HideHusk(); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.HideHusk // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_InitializeSkeletalMesh(struct USkeletalMeshComponent* Mesh); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_InitializeSkeletalMesh // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Effect_K27_AfterImage_01(int32_t EntryPoint); // Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.ExecuteUbergraph_BP_Effect_K27_AfterImage_01 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

