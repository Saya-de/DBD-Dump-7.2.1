// WidgetBlueprintGeneratedClass WBP_CoreSubtitles.WBP_CoreSubtitles_C
// Size: 0x340 (Inherited: 0x320)
struct UWBP_CoreSubtitles_C : UCoreSubtitlesWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UAspectRatioBox* AspectRatio; // 0x328(0x08)
	struct UDBDImage* SubtitlesBG; // 0x330(0x08)
	struct UOverlay* SubtitlesContainer; // 0x338(0x08)

	void SetFontSize(int32_t Size); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetBackgroundOpacity(enum class ESubtitlesBackgroundOpacity backgroundOpacity); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetBackgroundOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetPositionByAnchor(struct FVector2D position); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetPositionByAnchor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetSubtitlesPosition(enum class ESubtitlesPosition position); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetConstrainAspectRatioChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetSubtitlesSize(enum class ESubtitlesSize Size); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesSize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetSubtitlesBackgroundOpacity(enum class ESubtitlesBackgroundOpacity Opacity); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesBackgroundOpacity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_CoreSubtitles(int32_t EntryPoint); // Function WBP_CoreSubtitles.WBP_CoreSubtitles_C.ExecuteUbergraph_WBP_CoreSubtitles // (Final|UbergraphFunction) // @ game+0x5e02c90
};

