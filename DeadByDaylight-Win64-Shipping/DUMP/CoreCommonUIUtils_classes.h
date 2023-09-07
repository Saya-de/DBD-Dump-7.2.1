// Class CoreCommonUIUtils.CoreCommonUIUtils
// Size: 0x30 (Inherited: 0x30)
struct UCoreCommonUIUtils : UBlueprintFunctionLibrary {

	struct FText WrapTextWithStyleTag(struct FText& Text, struct FText& Style); // Function CoreCommonUIUtils.CoreCommonUIUtils.WrapTextWithStyleTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8254ba0
	bool HasOuter(struct UObject* Object, struct UObject* Root); // Function CoreCommonUIUtils.CoreCommonUIUtils.HasOuter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8254ad0
	struct FText GetTextBasedOnRarity(enum class EItemRarity Rarity); // Function CoreCommonUIUtils.CoreCommonUIUtils.GetTextBasedOnRarity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x82549f0
	float GetDPIScale(); // Function CoreCommonUIUtils.CoreCommonUIUtils.GetDPIScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x82549c0
	struct FText GetBeautifiedNumericText(int32_t value); // Function CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x82548e0
	struct FString GetBeautifiedNumericString(int32_t value); // Function CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8254810
	struct FString BeautifyNarrativeText(struct FString str, int32_t charLimit); // Function CoreCommonUIUtils.CoreCommonUIUtils.BeautifyNarrativeText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x82546f0
	struct FString BeautifyName(struct FString Name, int32_t maxCharacters); // Function CoreCommonUIUtils.CoreCommonUIUtils.BeautifyName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x82545d0
};

