// Class BeUtil.BeMaterialEditorHelper
// Size: 0x30 (Inherited: 0x30)
struct UBeMaterialEditorHelper : UBlueprintFunctionLibrary {

	struct UTexture* ReloadTexture(struct UTexture* InTexture, struct FString InSourceName); // Function BeUtil.BeMaterialEditorHelper.ReloadTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3f482a0
	void EditMaterialConstant(struct UMaterialInstanceConstant* InMaterialInstance, struct TArray<struct FBeMaterialScalar> InScalars, struct TArray<struct FBeMaterialVector> InVectors, struct TArray<struct FBeMaterialTexture> InTextures); // Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3f48070
};

