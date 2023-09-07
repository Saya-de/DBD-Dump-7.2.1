// Class DBDVideoPlayer.VideoBinkPlayer
// Size: 0x2b0 (Inherited: 0x230)
struct AVideoBinkPlayer : AActor {
	char pad_230[0x60]; // 0x230(0x60)
	struct UBinkMediaPlayer* _binkMediaPlayer; // 0x290(0x08)
	struct UUserWidget* _videoPlayerWidget; // 0x298(0x08)
	struct UWidget* _imageWidget; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	void OnSubtitlesChanged(struct TArray<struct FString>& SubtitlesText); // Function DBDVideoPlayer.VideoBinkPlayer.OnSubtitlesChanged // (Final|Native|Private|HasOutParms) // @ game+0x8277c00
	void OnMediaOpened(struct FString OpenedUrl); // Function DBDVideoPlayer.VideoBinkPlayer.OnMediaOpened // (Final|Native|Protected) // @ game+0x8277b10
	void OnMediaClosed(); // Function DBDVideoPlayer.VideoBinkPlayer.OnMediaClosed // (Final|Native|Protected) // @ game+0x8277af0
	void OnEndReached(); // Function DBDVideoPlayer.VideoBinkPlayer.OnEndReached // (Final|Native|Protected) // @ game+0x8277ad0
};

// Class DBDVideoPlayer.VideoNativePlayer
// Size: 0x290 (Inherited: 0x230)
struct AVideoNativePlayer : AActor {
	char pad_230[0x60]; // 0x230(0x60)
};

// Class DBDVideoPlayer.VideoPlayer
// Size: 0x30 (Inherited: 0x30)
struct UVideoPlayer : UInterface {
};

// Class DBDVideoPlayer.VideoThumbnailPlayer
// Size: 0x2f8 (Inherited: 0x230)
struct AVideoThumbnailPlayer : AActor {
	char pad_230[0x50]; // 0x230(0x50)
	struct UMediaPlayer* MediaPlayer; // 0x280(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x288(0x08)
	struct UUserWidget* VideoPlayerWidget; // 0x290(0x08)
	struct UAudioComponent* _audioComponent; // 0x298(0x08)
	char pad_2A0[0x18]; // 0x2a0(0x18)
	struct TSoftObjectPtr<UMediaSource> _source; // 0x2b8(0x30)
	char pad_2E8[0x10]; // 0x2e8(0x10)

	void OnVideoAssetLoaded(); // Function DBDVideoPlayer.VideoThumbnailPlayer.OnVideoAssetLoaded // (Final|Native|Private) // @ game+0x8278470
	void OnMediaOpened(struct FString OpenedUrl); // Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaOpened // (Final|Native|Private) // @ game+0x8278380
	void OnMediaClosed(); // Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaClosed // (Final|Native|Private) // @ game+0x8278360
	void OnEndReached(); // Function DBDVideoPlayer.VideoThumbnailPlayer.OnEndReached // (Final|Native|Private) // @ game+0x8278340
};

