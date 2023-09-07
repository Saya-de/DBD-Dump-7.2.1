// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x4893f00
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x4893e40
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xfc0 (Inherited: 0xfa0)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_FA0[0x18]; // 0xfa0(0x18)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xfb8(0x01)
	char bAutoCalculateSignificance : 1; // 0xfb8(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xfb8(0x01)
	char pad_FB8_3 : 5; // 0xfb8(0x01)
	char pad_FB9[0x7]; // 0xfb9(0x07)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x48940c0
};

