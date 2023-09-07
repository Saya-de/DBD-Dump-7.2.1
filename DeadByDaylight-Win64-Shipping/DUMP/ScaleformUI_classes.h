// Class ScaleformUI.GFxEngine
// Size: 0x48 (Inherited: 0x30)
struct UGFxEngine : UObject {
	struct TArray<struct FGCReference> GCReferences; // 0x30(0x10)
	int32_t RefCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class ScaleformUI.GFxMoviePlayer
// Size: 0x1e0 (Inherited: 0x30)
struct UGFxMoviePlayer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString SwfAssetName; // 0x38(0x10)
	struct UGFxObject* Root; // 0x48(0x08)
	char bDisplayWithHudOff : 1; // 0x50(0x01)
	char bEnableGammaCorrection : 1; // 0x50(0x01)
	char bAllowInput : 1; // 0x50(0x01)
	char bAllowFocus : 1; // 0x50(0x01)
	char bCloseOnLevelChange : 1; // 0x50(0x01)
	char bOnlyOwnerFocusable : 1; // 0x50(0x01)
	char bDiscardNonOwnerInput : 1; // 0x50(0x01)
	char bCaptureKeyboardInput : 1; // 0x50(0x01)
	char bCaptureMouseInput : 1; // 0x51(0x01)
	char bCaptureGamepadInput : 1; // 0x51(0x01)
	char bCaptureTouchInput : 1; // 0x51(0x01)
	char bIsSplitscreenLayoutModified : 1; // 0x51(0x01)
	char bShowDefaultMouseCursor : 1; // 0x51(0x01)
	char bBlurLesserMovies : 1; // 0x51(0x01)
	char bHideLesserMovies : 1; // 0x51(0x01)
	char bIsPriorityBlurred : 1; // 0x51(0x01)
	char bIsPriorityHidden : 1; // 0x52(0x01)
	char bIgnoreVisibilityEffect : 1; // 0x52(0x01)
	char bIgnoreBlurEffect : 1; // 0x52(0x01)
	char bRefreshed : 1; // 0x52(0x01)
	char bPerformHitTest : 1; // 0x52(0x01)
	char pad_52_5 : 3; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	enum class GFxHitTestType HitTestType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct UTextureRenderTarget2D* RenderTexture; // 0x58(0x08)
	struct UObject* ExternalInterface; // 0x60(0x08)
	struct TArray<struct FKey> CaptureKeys; // 0x68(0x10)
	struct TArray<struct FKey> FocusIgnoreKeys; // 0x78(0x10)
	struct TArray<struct FExternalTexture> ExternalTextures; // 0x88(0x10)
	enum class EGFxRenderTextureMode RenderTextureMode; // 0x98(0x01)
	char Priority; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct TArray<struct FGFxWidgetBinding> WidgetBindings; // 0xa0(0x10)
	int32_t SplitscreenLayoutYAdjust; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FMulticastInlineDelegate OnFsCommand; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnStartCommand; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnCloseCommand; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnTickCommand; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnFocusGainedCommand; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnFocusLostCommand; // 0x108(0x10)
	char pad_118[0xb8]; // 0x118(0xb8)
	struct TArray<struct UGFxObject*> CachedMovieClipsArray; // 0x1d0(0x10)

	bool Start(bool bRefresh); // Function ScaleformUI.GFxMoviePlayer.Start // (Native|Public) // @ game+0x73cbfd0
	void SetVisibility(struct FString MovieClipName, bool bVisible); // Function ScaleformUI.GFxMoviePlayer.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x73cbe50
	void SetViewScaleMode(enum class EGFxScaleMode ScaleMode); // Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode // (Native|Public|BlueprintCallable) // @ game+0x73cbc80
	void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height); // Function ScaleformUI.GFxMoviePlayer.SetViewport // (Native|Public|BlueprintCallable) // @ game+0x73cbd00
	void SetView3D(struct FTransform& ViewTransform); // Function ScaleformUI.GFxMoviePlayer.SetView3D // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73cbba0
	void SetVariableValueArray(struct FString MovieClipName, struct FString MemberName, struct TArray<struct FASValue>& value); // Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73cba00
	void SetVariableValue(struct FString MovieClipName, struct FString MemberName, struct FASValue& value); // Function ScaleformUI.GFxMoviePlayer.SetVariableValue // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73cb870
	void SetTimingMode(enum class EGFxTimingMode TimingMode); // Function ScaleformUI.GFxMoviePlayer.SetTimingMode // (Native|Public|BlueprintCallable) // @ game+0x73cb7f0
	void SetScale(struct FString MovieClipName, float XScale, float YScale); // Function ScaleformUI.GFxMoviePlayer.SetScale // (Native|Public|BlueprintCallable) // @ game+0x73cb5f0
	void SetPosition(struct FString MovieClipName, float X, float Y); // Function ScaleformUI.GFxMoviePlayer.SetPosition // (Native|Public|BlueprintCallable) // @ game+0x73cb3f0
	void SetPerspective3D(struct FASPerspectiveTransform& PerspectiveTransform); // Function ScaleformUI.GFxMoviePlayer.SetPerspective3D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73cb340
	void SetPause(bool bPausePlayback); // Function ScaleformUI.GFxMoviePlayer.SetPause // (Native|Public|BlueprintCallable) // @ game+0x73cb2b0
	void SetMovieCanReceiveInput(bool bCanReceiveInput); // Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput // (Native|Public|BlueprintCallable) // @ game+0x73cb220
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus); // Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus // (Native|Public|BlueprintCallable) // @ game+0x73cb190
	void SetFocusIgnoreKeys(struct TArray<struct FKey>& Keys); // Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73cade0
	bool SetExternalTexture(struct FString Resource, struct UTexture* Texture); // Function ScaleformUI.GFxMoviePlayer.SetExternalTexture // (Native|Public|BlueprintCallable) // @ game+0x73cace0
	void SetDisplayTransform(struct FString MovieClipName, struct FTransform& DisplayTransform); // Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73caac0
	void SetDisplayInfo(struct FString MovieClipName, struct FASDisplayInfo& Info); // Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73ca8e0
	void SetColorTransform(struct FString MovieClipName, struct FASColorTransform& UnrealColorTransform); // Function ScaleformUI.GFxMoviePlayer.SetColorTransform // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73ca740
	void SetCaptureKeys(struct TArray<struct FKey>& Keys); // Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73ca640
	void SetAlignment(enum class EGFxAlign Align); // Function ScaleformUI.GFxMoviePlayer.SetAlignment // (Native|Public|BlueprintCallable) // @ game+0x73ca5c0
	void ReceiveGFxCommand(struct FString Command, struct FString Arguments); // Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand // (Native|Public) // @ game+0x73ca4c0
	struct UGFxMoviePlayer* OpenMovie(struct USwfMovie* SwfMovie, struct UObject* ExternalScriptInterface, struct UTextureRenderTarget2D* RenderToTexture, struct UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused); // Function ScaleformUI.GFxMoviePlayer.OpenMovie // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ca120
	void OnTick(float DeltaTime); // Function ScaleformUI.GFxMoviePlayer.OnTick // (Native|Public) // @ game+0x73ca090
	void OnStart(); // Function ScaleformUI.GFxMoviePlayer.OnStart // (Native|Public) // @ game+0x73ca070
	void OnFocusLost(int32_t LocalPlayerIndex); // Function ScaleformUI.GFxMoviePlayer.OnFocusLost // (Native|Public) // @ game+0x73c9fe0
	void OnFocusGained(int32_t LocalPlayerIndex); // Function ScaleformUI.GFxMoviePlayer.OnFocusGained // (Native|Public) // @ game+0x73c9f50
	void OnClose(); // Function ScaleformUI.GFxMoviePlayer.OnClose // (Native|Public) // @ game+0x73c9f30
	bool LoadAndStart(struct FString InSwfAssetName, bool bRefresh); // Function ScaleformUI.GFxMoviePlayer.LoadAndStart // (Native|Public) // @ game+0x73c9de0
	struct FASValue Invoke(struct FString MovieClipName, struct FString FunctionName, struct TArray<struct FASValue>& Params); // Function ScaleformUI.GFxMoviePlayer.Invoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73c9730
	void GotoAndStopI(struct FString MovieClipName, int32_t Frame); // Function ScaleformUI.GFxMoviePlayer.GotoAndStopI // (Native|Public|BlueprintCallable) // @ game+0x73c95c0
	void GotoAndStop(struct FString MovieClipName, struct FString Frame); // Function ScaleformUI.GFxMoviePlayer.GotoAndStop // (Native|Public|BlueprintCallable) // @ game+0x73c9420
	void GotoAndPlayI(struct FString MovieClipName, int32_t Frame); // Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI // (Native|Public|BlueprintCallable) // @ game+0x73c92b0
	void GotoAndPlay(struct FString MovieClipName, struct FString Frame); // Function ScaleformUI.GFxMoviePlayer.GotoAndPlay // (Native|Public|BlueprintCallable) // @ game+0x73c9110
	bool GetVisibility(struct FString MovieClipName); // Function ScaleformUI.GFxMoviePlayer.GetVisibility // (Native|Public|BlueprintCallable) // @ game+0x73c9030
	struct FTransform GetView3D(); // Function ScaleformUI.GFxMoviePlayer.GetView3D // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73c8fc0
	struct TArray<struct FASValue> GetVariableValueArray(struct FString MovieClipName, struct FString MemberName); // Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray // (Native|Public|BlueprintCallable) // @ game+0x73c8e60
	struct FASValue GetVariableValue(struct FString MovieClipName, struct FString MemberName); // Function ScaleformUI.GFxMoviePlayer.GetVariableValue // (Native|Public|BlueprintCallable) // @ game+0x73c8d20
	bool GetScale(struct FString MovieClipName, float& XScale, float& YScale); // Function ScaleformUI.GFxMoviePlayer.GetScale // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73c8ae0
	bool GetPosition(struct FString MovieClipName, float& X, float& Y); // Function ScaleformUI.GFxMoviePlayer.GetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73c88a0
	struct FASPerspectiveTransform GetPerspective3D(); // Function ScaleformUI.GFxMoviePlayer.GetPerspective3D // (Native|Public|BlueprintCallable) // @ game+0x73c8850
	struct UGFxObject* GetMovieClip(struct FString MovieClipName); // Function ScaleformUI.GFxMoviePlayer.GetMovieClip // (Final|Native|Public|BlueprintCallable) // @ game+0x73c87a0
	struct FTransform GetDisplayTransform(struct FString MovieClipName); // Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73c83a0
	struct FASDisplayInfo GetDisplayInfo(struct FString MovieClipName); // Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo // (Native|Public|BlueprintCallable) // @ game+0x73c8270
	struct FASColorTransform GetColorTransform(struct FString MovieClipName); // Function ScaleformUI.GFxMoviePlayer.GetColorTransform // (Native|Public|BlueprintCallable) // @ game+0x73c8170
	void Close(bool Unload); // Function ScaleformUI.GFxMoviePlayer.Close // (Native|Public|BlueprintCallable) // @ game+0x48e0070
};

// Class ScaleformUI.GFxObject
// Size: 0x60 (Inherited: 0x30)
struct UGFxObject : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	void SetVisible(bool bVisible); // Function ScaleformUI.GFxObject.SetVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x73cbf40
	void SetScale(float XScale, float YScale); // Function ScaleformUI.GFxObject.SetScale // (Final|Native|Public|BlueprintCallable) // @ game+0x73cb720
	void SetPosition(float X, float Y); // Function ScaleformUI.GFxObject.SetPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x73cb520
	void SetMemberValueArray(struct UGFxMoviePlayer* MoviePlayer, struct FString MemberName, struct TArray<struct FASValue>& Input); // Function ScaleformUI.GFxObject.SetMemberValueArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73cb010
	void SetMemberValue(struct FString MemberName, struct FASValue& Input); // Function ScaleformUI.GFxObject.SetMemberValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73caee0
	void SetDisplayTransform(struct FTransform& DisplayTransform); // Function ScaleformUI.GFxObject.SetDisplayTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73cac00
	void SetDisplayInfo(struct FASDisplayInfo& UnrealDisplayInfo); // Function ScaleformUI.GFxObject.SetDisplayInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73caa00
	void SetColorTransform(struct FASColorTransform& UnrealColorTransform); // Function ScaleformUI.GFxObject.SetColorTransform // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73ca840
	struct FASValue Invoke(struct FString FunctionName, struct TArray<struct FASValue>& Params); // Function ScaleformUI.GFxObject.Invoke // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73c9900
	void GotoAndStopI(int32_t FrameNumber); // Function ScaleformUI.GFxObject.GotoAndStopI // (Final|Native|Public|BlueprintCallable) // @ game+0x73c96a0
	void GotoAndStop(struct FString FrameString); // Function ScaleformUI.GFxObject.GotoAndStop // (Final|Native|Public|BlueprintCallable) // @ game+0x73c9520
	void GotoAndPlayI(int32_t FrameNumber); // Function ScaleformUI.GFxObject.GotoAndPlayI // (Final|Native|Public|BlueprintCallable) // @ game+0x73c9390
	void GotoAndPlay(struct FString FrameString); // Function ScaleformUI.GFxObject.GotoAndPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x73c9210
	bool GetVisible(); // Function ScaleformUI.GFxObject.GetVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x73c90e0
	bool GetScale(float& XScale, float& YScale); // Function ScaleformUI.GFxObject.GetScale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73c8c30
	bool GetPosition(float& X, float& Y); // Function ScaleformUI.GFxObject.GetPosition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73c89f0
	struct TArray<struct FASValue> GetMemberValueArray(struct FString MemberName); // Function ScaleformUI.GFxObject.GetMemberValueArray // (Final|Native|Public|BlueprintCallable) // @ game+0x73c86a0
	struct FASValue GetMemberValue(struct FString MemberName); // Function ScaleformUI.GFxObject.GetMemberValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73c85c0
	struct FTransform GetDisplayTransform(); // Function ScaleformUI.GFxObject.GetDisplayTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73c8480
	struct FASDisplayInfo GetDisplayInfo(); // Function ScaleformUI.GFxObject.GetDisplayInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x73c8350
	struct FASColorTransform GetColorTransform(); // Function ScaleformUI.GFxObject.GetColorTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x73c8230
};

// Class ScaleformUI.ScaleformBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UScaleformBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UGFxMoviePlayer* OpenMovie(struct USwfMovie* Movie, struct UObject* ExternalInterface, struct UTextureRenderTarget2D* RenderTexture, struct UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused); // Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ca2f0
	struct FASValue InvokeNoParams(struct UGFxMoviePlayer* MoviePlayer, struct FString FunctionName); // Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73c9c70
	struct FASValue Invoke(struct UGFxMoviePlayer* MoviePlayer, struct FString FunctionName, struct TArray<struct FASValue>& Params); // Function ScaleformUI.ScaleformBlueprintLibrary.Invoke // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73c9a80
	struct UGFxObject* GetVariable(struct UGFxMoviePlayer* MoviePlayer, struct FString VariablePath); // Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73c84e0
	struct UGFxObject* GetMovieClip(struct UGFxMoviePlayer* MoviePlayer, struct FString MovieClipName); // Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73c84e0
	struct UGFxObject* GetMember(struct UGFxMoviePlayer* MoviePlayer, struct FString MemberName); // Function ScaleformUI.ScaleformBlueprintLibrary.GetMember // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73c84e0
	void CloseMovie(struct UGFxMoviePlayer* MoviePlayer); // Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73c80f0
};

// Class ScaleformUI.SwfMovie
// Size: 0x1b8 (Inherited: 0x30)
struct USwfMovie : UObject {
	char bUseGFxExport : 1; // 0x30(0x01)
	char bOptimizeForMobiles : 1; // 0x30(0x01)
	char bSetSRGBOnImportedTextures : 1; // 0x30(0x01)
	char bPackTextures : 1; // 0x30(0x01)
	char pad_30_4 : 4; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t PackTextureSize; // 0x34(0x04)
	char bForceSquarePacking : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class FlashTextureRescale TextureRescale; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString TextureFormat; // 0x40(0x10)
	char bReplaceImages : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString SourceFile; // 0x58(0x10)
	struct TArray<struct FString> FontMappings; // 0x68(0x10)
	struct FString SourceFileTimestamp; // 0x78(0x10)
	uint64_t ImportTimeStamp; // 0x88(0x08)
	struct TArray<char> RawData; // 0x90(0x10)
	struct TArray<struct FString> ReferencedAssetNames; // 0xa0(0x10)
	struct TArray<struct UObject*> References; // 0xb0(0x10)
	struct TArray<struct UObject*> UserReferences; // 0xc0(0x10)
	char pad_D0[0xe8]; // 0xd0(0xe8)
};

