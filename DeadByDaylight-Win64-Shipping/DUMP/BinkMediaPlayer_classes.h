// Class BinkMediaPlayer.BinkFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBinkFunctionLibrary : UBlueprintFunctionLibrary {

	struct FTimespan BinkLoadingMovie_GetTime(); // Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4940e60
	struct FTimespan BinkLoadingMovie_GetDuration(); // Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4940e20
	void Bink_DrawOverlays(); // Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4940ea0
};

// Class BinkMediaPlayer.BinkMediaPlayer
// Size: 0x128 (Inherited: 0x30)
struct UBinkMediaPlayer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaReachedEnd; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x68(0x10)
	struct FMulticastInlineDelegate OnSubtitleChangeEvent; // 0x78(0x10)
	char Looping : 1; // 0x88(0x01)
	char StartImmediately : 1; // 0x88(0x01)
	char DelayedOpen : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector2D BinkDestinationUpperLeft; // 0x8c(0x08)
	struct FVector2D BinkDestinationLowerRight; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString URL; // 0xa0(0x10)
	enum class EBinkMediaPlayerBinkBufferModes BinkBufferMode; // 0xb0(0x01)
	enum class EBinkMediaPlayerBinkSoundTrack BinkSoundTrack; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	int32_t BinkSoundTrackStart; // 0xb4(0x04)
	enum class EBinkMediaPlayerBinkDrawStyle BinkDrawStyle; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t BinkLayerDepth; // 0xbc(0x04)
	char pad_C0[0x68]; // 0xc0(0x68)

	bool SupportsSeeking(); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46a2670
	bool SupportsScrubbing(); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46a2670
	bool SupportsRate(float Rate, bool Unthinned); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x49417a0
	void Stop(); // Function BinkMediaPlayer.BinkMediaPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x4941780
	void SetVolume(float Rate); // Function BinkMediaPlayer.BinkMediaPlayer.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x4941700
	bool SetRate(float Rate); // Function BinkMediaPlayer.BinkMediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // @ game+0x4941670
	bool SetLooping(bool InLooping); // Function BinkMediaPlayer.BinkMediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x4941540
	bool Seek(struct FTimespan& InTime); // Function BinkMediaPlayer.BinkMediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x49414a0
	bool Rewind(); // Function BinkMediaPlayer.BinkMediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x4941470
	bool Play(); // Function BinkMediaPlayer.BinkMediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x4941440
	bool Pause(); // Function BinkMediaPlayer.BinkMediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x4941410
	bool OpenUrl(struct FString NewUrl); // Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x4941360
	bool IsStopped(); // Function BinkMediaPlayer.BinkMediaPlayer.IsStopped // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941330
	bool IsSeeking(); // Function BinkMediaPlayer.BinkMediaPlayer.IsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941300
	bool IsPlaying(); // Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x49412d0
	bool IsPaused(); // Function BinkMediaPlayer.BinkMediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x49412a0
	bool IsLooping(); // Function BinkMediaPlayer.BinkMediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941270
	bool IsInitialized(); // Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941240
	struct FString GetUrl(); // Function BinkMediaPlayer.BinkMediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941200
	struct FTimespan GetTime(); // Function BinkMediaPlayer.BinkMediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x49411c0
	float GetRate(); // Function BinkMediaPlayer.BinkMediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941190
	struct FTimespan GetDuration(); // Function BinkMediaPlayer.BinkMediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4941150
	void Draw(struct UTexture* Texture, bool tonemap, int32_t out_nits, float alpha, bool srgb_decode, bool hdr); // Function BinkMediaPlayer.BinkMediaPlayer.Draw // (Final|Native|Public|BlueprintCallable) // @ game+0x4940f60
	void CloseUrl(); // Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x4940f40
	bool CanPlay(); // Function BinkMediaPlayer.BinkMediaPlayer.CanPlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4940ef0
	bool CanPause(); // Function BinkMediaPlayer.BinkMediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4940ec0
};

// Class BinkMediaPlayer.BinkMediaTexture
// Size: 0x1b0 (Inherited: 0x180)
struct UBinkMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0x178(0x01)
	enum class TextureAddress AddressY; // 0x179(0x01)
	struct UBinkMediaPlayer* MediaPlayer; // 0x180(0x08)
	enum class EPixelFormat PixelFormat; // 0x188(0x01)
	bool tonemap; // 0x189(0x01)
	float OutputNits; // 0x18c(0x04)
	float alpha; // 0x190(0x04)
	bool DecodeSRGB; // 0x194(0x01)
	char pad_195[0x1b]; // 0x195(0x1b)

	void SetMediaPlayer(struct UBinkMediaPlayer* InMediaPlayer); // Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x49415e0
	void Clear(); // Function BinkMediaPlayer.BinkMediaTexture.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x4940f20
};

// Class BinkMediaPlayer.BinkMoviePlayerSettings
// Size: 0x50 (Inherited: 0x30)
struct UBinkMoviePlayerSettings : UObject {
	enum class EBinkMoviePlayerBinkBufferModes BinkBufferMode; // 0x30(0x01)
	enum class EBinkMoviePlayerBinkSoundTrack BinkSoundTrack; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t BinkSoundTrackStart; // 0x34(0x04)
	struct FVector2D BinkDestinationUpperLeft; // 0x38(0x08)
	struct FVector2D BinkDestinationLowerRight; // 0x40(0x08)
	enum class EPixelFormat BinkPixelFormat; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

