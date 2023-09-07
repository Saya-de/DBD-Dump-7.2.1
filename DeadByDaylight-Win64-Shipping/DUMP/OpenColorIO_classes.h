// Class OpenColorIO.OpenColorIOBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UOpenColorIOBlueprintLibrary : UBlueprintFunctionLibrary {

	bool ApplyColorSpaceTransform(struct UObject* WorldContextObject, struct FOpenColorIOColorConversionSettings& ConversionSettings, struct UTexture* InputTexture, struct UTextureRenderTarget2D* OutputRenderTarget); // Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4906000
};

// Class OpenColorIO.OpenColorIOColorTransform
// Size: 0xa0 (Inherited: 0x30)
struct UOpenColorIOColorTransform : UObject {
	struct UOpenColorIOConfiguration* ConfigurationOwner; // 0x30(0x08)
	struct FString SourceColorSpace; // 0x38(0x10)
	struct FString DestinationColorSpace; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)
};

// Class OpenColorIO.OpenColorIOConfiguration
// Size: 0x88 (Inherited: 0x30)
struct UOpenColorIOConfiguration : UObject {
	struct FFilePath ConfigurationFile; // 0x30(0x10)
	struct TArray<struct FOpenColorIOColorSpace> DesiredColorSpaces; // 0x40(0x10)
	struct TArray<struct UOpenColorIOColorTransform*> ColorTransforms; // 0x50(0x10)
	char pad_60[0x28]; // 0x60(0x28)
};

// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
// Size: 0x40 (Inherited: 0x30)
struct UOpenColorIODisplayExtensionWrapper : UObject {
	char pad_30[0x10]; // 0x30(0x10)

	void SetSceneExtensionIsActiveFunctions(struct TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49065d0
	void SetSceneExtensionIsActiveFunction(struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49064e0
	void SetOpenColorIOConfiguration(struct FOpenColorIODisplayConfiguration InDisplayConfiguration); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration // (Final|Native|Public|BlueprintCallable) // @ game+0x49063c0
	void RemoveSceneExtension(); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension // (Final|Native|Public|BlueprintCallable) // @ game+0x49063a0
	struct UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration InDisplayConfiguration, struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x49061d0
};

