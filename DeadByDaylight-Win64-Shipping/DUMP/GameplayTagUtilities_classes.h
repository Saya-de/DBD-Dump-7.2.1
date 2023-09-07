// Class GameplayTagUtilities.DBDGameplayTagUtilities
// Size: 0x30 (Inherited: 0x30)
struct UDBDGameplayTagUtilities : UBlueprintFunctionLibrary {

	struct FName GetScoreModifierName(struct FName scoreEventID); // Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x815adb0
	bool GameplayTagExists(struct FName TagName); // Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x815ad10
};

// Class GameplayTagUtilities.TagContainerQueryInstance
// Size: 0x98 (Inherited: 0x30)
struct UTagContainerQueryInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FGameplayTagQuery Query; // 0x38(0x48)
	char pad_80[0x18]; // 0x80(0x18)
};

// Class GameplayTagUtilities.GameplayTagContainerComponent
// Size: 0x1d0 (Inherited: 0xb8)
struct UGameplayTagContainerComponent : UActorComponent {
	char pad_B8[0x78]; // 0xb8(0x78)
	struct TMap<struct FGameplayTag, struct FQueryInstanceCollection> _tagToQueries; // 0x130(0x50)
	struct TMap<struct UObject*, struct FQueryInstanceCollection> _ownerToQueries; // 0x180(0x50)

	void Remove(struct FGameplayTag State); // Function GameplayTagUtilities.GameplayTagContainerComponent.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0x815bcd0
	struct FGameplayTagContainer GetTags(); // Function GameplayTagUtilities.GameplayTagContainerComponent.GetTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x815bc90
	void Add(struct FGameplayTag State); // Function GameplayTagUtilities.GameplayTagContainerComponent.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x815bbf0
};

// Class GameplayTagUtilities.ObjectStateProvider
// Size: 0x30 (Inherited: 0x30)
struct UObjectStateProvider : UInterface {
};

