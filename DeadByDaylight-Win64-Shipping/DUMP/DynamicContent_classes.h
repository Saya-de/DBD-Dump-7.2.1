// Class DynamicContent.AsyncTaskDownloadCacheImage
// Size: 0x68 (Inherited: 0x38)
struct UAsyncTaskDownloadCacheImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x48(0x10)
	struct FString _url; // 0x58(0x10)
};

// Class DynamicContent.DownloadingTextureTask
// Size: 0x68 (Inherited: 0x30)
struct UDownloadingTextureTask : UObject {
	struct UAsyncTaskDownloadCacheImage* _downloadingTask; // 0x30(0x08)
	struct FString _url; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
	struct UTexture2DDynamic* _downloadedTexture; // 0x60(0x08)

	void OnDownloadSucceeded(struct UTexture2DDynamic* textureDownloaded); // Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded // (Final|Native|Private) // @ game+0x82e1b50
	void OnDownloadFailed(struct UTexture2DDynamic* textureDownloaded); // Function DynamicContent.DownloadingTextureTask.OnDownloadFailed // (Final|Native|Private) // @ game+0x82e1ac0
};

// Class DynamicContent.DownloadMultiTextureTask
// Size: 0xb0 (Inherited: 0x30)
struct UDownloadMultiTextureTask : UObject {
	struct TArray<struct UDownloadingTextureTask*> _downloadingTasks; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct TMap<struct FName, struct UTexture2DDynamic*> _downloadedTextures; // 0x58(0x50)
	int32_t _remainingTasks; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	void OnTextureDownloadComplete(struct UDownloadingTextureTask* taskCompleted); // Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete // (Final|Native|Private) // @ game+0x82e1d40
};

// Class DynamicContent.DynamicContentHolder
// Size: 0x200 (Inherited: 0x38)
struct UDynamicContentHolder : UGameInstanceSubsystem {
	char pad_38[0x138]; // 0x38(0x138)
	struct FLRUTextureCache _loadedTextures; // 0x170(0x68)
	struct TArray<struct FTaskContainer> _currentTasks; // 0x1d8(0x10)
	struct ULoopBannerProvider* _marketingBannerProvider; // 0x1e8(0x08)
	struct ULoopBannerProvider* _eventsBannerProvider; // 0x1f0(0x08)
	struct ULoadingImagesDataProvider* _loadingImagesDataProvider; // 0x1f8(0x08)

	void OnDownloadingTaskComplete(struct UDownloadMultiTextureTask* completeTask); // Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete // (Final|Native|Private) // @ game+0x82e20b0
};

// Class DynamicContent.LoadingImagesDataProvider
// Size: 0x88 (Inherited: 0x30)
struct ULoadingImagesDataProvider : UObject {
	struct TMap<struct FName, struct FLoadingImages> _cachedLoadingImages; // 0x30(0x50)
	struct UDynamicContentHolder* _owningDynamicContentHolder; // 0x80(0x08)
};

// Class DynamicContent.LoopBannerProvider
// Size: 0x48 (Inherited: 0x30)
struct ULoopBannerProvider : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	int32_t _currentLoopIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

