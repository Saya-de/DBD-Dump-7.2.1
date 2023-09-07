// Class CoreUtilities.CoreUtilities
// Size: 0x30 (Inherited: 0x30)
struct UCoreUtilities : UBlueprintFunctionLibrary {

	struct UWorld* GetWorldFromContext(struct UObject* WorldContextObject); // Function CoreUtilities.CoreUtilities.GetWorldFromContext // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7feef90
	struct TArray<int32_t> GetRandomValuesFromArray(struct TArray<int32_t>& Values, int32_t numberOfDesiredValues); // Function CoreUtilities.CoreUtilities.GetRandomValuesFromArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7feee50
	struct UWorld* GetGlobalWorld(); // Function CoreUtilities.CoreUtilities.GetGlobalWorld // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7feee20
	struct UGameInstance* GetGameInstance(struct UObject* WorldContextObject); // Function CoreUtilities.CoreUtilities.GetGameInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7feed90
};

// Class CoreUtilities.PropertyParser
// Size: 0x30 (Inherited: 0x30)
struct UPropertyParser : UObject {

	void CopyProperties(struct UActorComponent* Dest, struct UActorComponent* Origin, bool copyTransform, struct TArray<struct FName> propertiesToExclude); // Function CoreUtilities.PropertyParser.CopyProperties // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7fef480
};

