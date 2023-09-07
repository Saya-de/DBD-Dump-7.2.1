// ScriptStruct DynamicContent.BaseBannerData
// Size: 0x38 (Inherited: 0x00)
struct FBaseBannerData {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TitleId; // 0x10(0x18)
	struct FString BannerContentId; // 0x28(0x10)
};

// ScriptStruct DynamicContent.TaskContainer
// Size: 0x18 (Inherited: 0x00)
struct FTaskContainer {
	struct UDownloadMultiTextureTask* DownloadTask; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct DynamicContent.LoadingImages
// Size: 0x38 (Inherited: 0x00)
struct FLoadingImages {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FSlateBrush> Images; // 0x10(0x10)
	struct TArray<struct FLoadingImagesHintInfo> ImagesHintInfo; // 0x20(0x10)
	bool IsAvailableForSurvivor; // 0x30(0x01)
	bool IsAvailableForKiller; // 0x31(0x01)
	bool IsGenericImages; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// ScriptStruct DynamicContent.LoadingImagesHintInfo
// Size: 0xc8 (Inherited: 0x00)
struct FLoadingImagesHintInfo {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FSlateBrush Icon; // 0x30(0x90)
	bool IsAvailableForKiller; // 0xc0(0x01)
	bool IsAvailableForSurvivor; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
};

// ScriptStruct DynamicContent.LRUTextureCache
// Size: 0x68 (Inherited: 0x00)
struct FLRUTextureCache {
	char pad_0[0x10]; // 0x00(0x10)
	struct TMap<struct FName, struct UTexture2DDynamic*> _cachedTextures; // 0x10(0x50)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct DynamicContent.MarketingBannerData
// Size: 0x60 (Inherited: 0x38)
struct FMarketingBannerData : FBaseBannerData {
	struct FText SubTitleId; // 0x38(0x18)
	struct FString DeepLink; // 0x50(0x10)
};

