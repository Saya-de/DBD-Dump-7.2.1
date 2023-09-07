// Class Customization.Accessory
// Size: 0x1030 (Inherited: 0x1030)
struct UAccessory : UDBDSkeletalMeshComponentBudgeted {
	bool _shouldLoadOnServer; // 0x1028(0x01)

	void BP_DestroyComponent(struct UActorComponent* componentToDestroy); // Function Customization.Accessory.BP_DestroyComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x4b102d0
};

// Class Customization.AccessoryUtilities
// Size: 0x30 (Inherited: 0x30)
struct UAccessoryUtilities : UBlueprintFunctionLibrary {

	struct UBoneSocketLocalVelocityEvaluator* AddBoneSocketLocalVelocityEvaluatorToAccessory(struct UAccessory* Accessory, struct TArray<struct FName>& trackedBoneSocketNames); // Function Customization.AccessoryUtilities.AddBoneSocketLocalVelocityEvaluatorToAccessory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4b104c0
};

