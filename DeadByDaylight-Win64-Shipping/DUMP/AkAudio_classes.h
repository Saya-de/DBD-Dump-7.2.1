// Class AkAudio.AkPortalComponent
// Size: 0x2e0 (Inherited: 0x220)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x218(0x01)
	enum class AkAcousticPortalState InitialState; // 0x219(0x01)
	float ObstructionRefreshInterval; // 0x21c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x220(0x01)
	char pad_227[0xb9]; // 0x227(0xb9)

	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b5c0
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x479b5a0
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b460
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b370
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x479b230
};

// Class AkAudio.AkAcousticPortal
// Size: 0x278 (Inherited: 0x268)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x268(0x08)
	enum class AkAcousticPortalState InitialState; // 0x270(0x01)
	bool bRequiresStateMigration; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x479b580
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b340
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x479b210
};

// Class AkAudio.AkAudioType
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x48 (Inherited: 0x48)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x230 (Inherited: 0x220)
struct UAkAcousticTextureSetComponent : USceneComponent {
	char pad_220[0x10]; // 0x220(0x10)
};

// Class AkAudio.AkAmbientSound
// Size: 0x270 (Inherited: 0x230)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x230(0x08)
	struct UAkComponent* AkComponent; // 0x238(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x240(0x01)
	bool AutoPost; // 0x241(0x01)
	char pad_242[0x2e]; // 0x242(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c690
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c670
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkAndroidInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkPlatformInfo
// Size: 0x78 (Inherited: 0x30)
struct UAkPlatformInfo : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetBase
// Size: 0x58 (Inherited: 0x48)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class AkAudio.AkAssetData
// Size: 0x80 (Inherited: 0x30)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString BankLanguage; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x90 (Inherited: 0x80)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x80(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x38 (Inherited: 0x30)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x30(0x08)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x88 (Inherited: 0x30)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x30(0x30)
	struct UAkGroupValue* DefaultGroupValue; // 0x60(0x08)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x68(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x78(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xf8 (Inherited: 0x90)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x90(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0xa0(0x08)
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class AkAudio.AkAudioEventData
// Size: 0x298 (Inherited: 0xf8)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0xf8(0x04)
	bool IsInfinite; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float MinimumDuration; // 0x100(0x04)
	float MaximumDuration; // 0x104(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x108(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x158(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x1a8(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x1f8(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x248(0x50)
};

// Class AkAudio.AkAudioBank
// Size: 0x120 (Inherited: 0x58)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xb0(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x100(0x08)
	char pad_108[0x18]; // 0x108(0x18)
};

// Class AkAudio.AkAudioEvent
// Size: 0xd8 (Inherited: 0x58)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8(0x08)
	float MaxAttenuationRadius; // 0xc0(0x04)
	bool IsInfinite; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float MinimumDuration; // 0xc8(0x04)
	float MaximumDuration; // 0xcc(0x04)
	char pad_D0[0x8]; // 0xd0(0x08)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b430
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b400
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b3d0
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b3a0
};

// Class AkAudio.AkGameObject
// Size: 0x240 (Inherited: 0x220)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x218(0x08)
	struct FString EventName; // 0x220(0x10)
	char pad_238[0x8]; // 0x238(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x47a2590
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x47a19b0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479fcf0
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479fb40
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479f370
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479f130
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x479e660
};

// Class AkAudio.AkComponent
// Size: 0x480 (Inherited: 0x240)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x238(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x240(0x01)
	bool EnableSpotReflectors; // 0x241(0x01)
	char pad_243[0x1]; // 0x243(0x01)
	float OuterRadius; // 0x244(0x04)
	float InnerRadius; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x250(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x258(0x10)
	int32_t EarlyReflectionOrder; // 0x268(0x04)
	float EarlyReflectionBusSendGain; // 0x26c(0x04)
	float EarlyReflectionMaxPathLength; // 0x270(0x04)
	float roomReverbAuxBusGain; // 0x274(0x04)
	int32_t diffractionMaxEdges; // 0x278(0x04)
	int32_t diffractionMaxPaths; // 0x27c(0x04)
	float diffractionMaxPathLength; // 0x280(0x04)
	bool DrawFirstOrderReflections; // 0x284(0x01)
	bool DrawSecondOrderReflections; // 0x285(0x01)
	bool DrawHigherOrderReflections; // 0x286(0x01)
	bool DrawDiffraction; // 0x287(0x01)
	bool StopWhenOwnerDestroyed; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float AttenuationScalingFactor; // 0x28c(0x04)
	float OcclusionRefreshInterval; // 0x290(0x04)
	bool bUseReverbVolumes; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float OcclusionAffect; // 0x298(0x04)
	float MaxDistance; // 0x29c(0x04)
	bool AutoPostOnBeginPlay; // 0x2a0(0x01)
	char pad_2A1[0x16f]; // 0x2a1(0x16f)
	bool StaticAmbientEmitter; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float StaticAmbientEmitterFadeDuration; // 0x414(0x04)
	enum class EAkCurveInterpolation StaticAmbientEmitterInterpolationCurve; // 0x418(0x01)
	char pad_419[0xf]; // 0x419(0x0f)
	struct TSet<struct UAkComponent*> ListenersInRange; // 0x428(0x50)
	char pad_478[0x8]; // 0x478(0x08)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c8a0
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x479c6b0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString switchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c530
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c4a0
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c420
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479c370
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x479c210
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c190
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479c0f0
	void SetAttenuationScalingFactor(float value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479bff0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479bdd0
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479bc00
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479ba90
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479b9e0
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479b810
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x479b620
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b2e0
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x4b0 (Inherited: 0x480)
struct UAkAudioInputComponent : UAkComponent {
	char pad_480[0x30]; // 0x480(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x479bda0
};

// Class AkAudio.AkAuxBus
// Size: 0x60 (Inherited: 0x58)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x58(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xb60 (Inherited: 0x148)
struct UAkCheckBox : UContentWidget {
	char pad_148[0x348]; // 0x148(0x348)
	enum class ECheckBoxState CheckedState; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	struct FDelegate CheckedStateDelegate; // 0x494(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x4a8(0x5e0)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xa88(0x01)
	bool IsFocusable; // 0xa89(0x01)
	char pad_A8A[0x6]; // 0xa8a(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xa90(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xaa0(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xae0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xaf0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xb00(0x10)
	char pad_B10[0x50]; // 0xb10(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x479c2e0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x479c070
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x479bf50
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x479beb0
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b4c0
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b490
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b310
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b290
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x479b250
};

// Class AkAudio.DrawPortalComponent
// Size: 0x480 (Inherited: 0x480)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size: 0x480 (Inherited: 0x480)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkFolder
// Size: 0xc0 (Inherited: 0x48)
struct UAkFolder : UAkAudioType {
	struct FString UnrealFolderPath; // 0x48(0x10)
	struct FString WwiseFolderPath; // 0x58(0x10)
	char pad_68[0x58]; // 0x68(0x58)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2c30
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a2a10
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2980
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47a2890
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a2710
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a26f0
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a26d0
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2650
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2630
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a25b0
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2500
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2470
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a23f0
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x47a21b0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName switchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a2040
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a1f10
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47a1dc0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a1b60
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a1d00
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a18a0
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a17a0
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a1730
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a1670
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a15f0
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a1530
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a13d0
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a11f0
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a1010
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a0f00
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& COMPLETED); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47a0e00
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a0cc0
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47a0bf0
	void ResetRTPCValue(struct UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.ResetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a0a90
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47a09f0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a08d0
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a07b0
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName attachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x47a05b0
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x47a0440
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x47a0280
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479ff80
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479f8e0
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479f640
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x479f110
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479f020
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x479ef90
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479eea0
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479ed20
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479ec90
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479ec60
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479eb00
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479e8b0
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479e630
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479e5b0
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479e4d0
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479e400
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName attachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x479e250
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x479e180
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x479e040
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x479de70
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x479de50
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x479dda0
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x479dd10
};

// Class AkAudio.AkCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x30(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	int32_t EventId; // 0x3c(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x50 (Inherited: 0x40)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_40[0x10]; // 0x40(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x47a74b0
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a7400
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a7350
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a72a0
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a71f0
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a7140
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a7090
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a6fe0
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x47a6fb0
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47a6f00
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x40(0x04)
	int32_t position; // 0x44(0x04)
	struct FString label; // 0x48(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x40(0x04)
	float EstimatedDuration; // 0x44(0x04)
	int32_t AudioNodeID; // 0x48(0x04)
	int32_t MediaID; // 0x4c(0x04)
	bool bStreaming; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x78 (Inherited: 0x38)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x3c(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString UserCueName; // 0x68(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x3c0 (Inherited: 0x230)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	int32_t LOD; // 0x234(0x04)
	float WeldingThreshold; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x240(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x290(0x18)
	bool bEnableDiffraction; // 0x2a8(0x01)
	bool bEnableDiffractionOnBoundaryEdges; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct AActor* AssociatedRoom; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)
	struct FAkGeometryData GeometryData; // 0x2c8(0x50)
	struct TMap<int32_t, double> SurfaceAreas; // 0x318(0x50)
	char pad_368[0x58]; // 0x368(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x47a7520
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x47a7500
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x47a74e0
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x47a6ee0
};

// Class AkAudio.AkGroupValue
// Size: 0x70 (Inherited: 0x48)
struct UAkGroupValue : UAkAudioType {
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x48(0x10)
	uint32_t GroupShortID; // 0x58(0x04)
	char pad_5C[0x14]; // 0x5c(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkHololensInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0xa0 (Inherited: 0x90)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x90(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x78 (Inherited: 0x58)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x58(0x10)
	struct FString DefaultLanguage; // 0x68(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkIOSInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkAudioSession AudioSession; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd8(0x2c)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab7d0
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab6e0
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x170 (Inherited: 0x130)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x47abec0
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47aba10
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ab990
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab7d0
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab6e0
};

// Class AkAudio.AkItemProperties
// Size: 0x170 (Inherited: 0x130)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x47abec0
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47aba90
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ab990
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x2a0 (Inherited: 0x220)
struct UAkLateReverbComponent : USceneComponent {
	bool bEnable; // 0x218(0x01)
	float SendLevel; // 0x21c(0x04)
	float FadeRate; // 0x220(0x04)
	float Priority; // 0x224(0x04)
	bool AutoAssignAuxBus; // 0x228(0x01)
	char pad_22E[0x2]; // 0x22e(0x02)
	struct UAkAuxBus* AuxBus; // 0x230(0x08)
	struct FString AuxBusName; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct UAkAuxBus* AuxBusManual; // 0x250(0x08)
	char pad_258[0x48]; // 0x258(0x48)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x47ab650
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkLinuxInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkMacInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x80 (Inherited: 0x30)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x30(0x01)
	bool UseDeviceMemory; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Language; // 0x38(0x10)
	struct FString AssetPlatform; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class AkAudio.AkMediaAsset
// Size: 0x80 (Inherited: 0x30)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString MediaName; // 0x38(0x10)
	bool AutoLoad; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UObject*> UserData; // 0x50(0x10)
	struct FString Language; // 0x60(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x80 (Inherited: 0x80)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xe0 (Inherited: 0x80)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_80[0x60]; // 0x80(0x60)
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct UAkPlatformInitialisationSettingsBase : UInterface {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkPS4InitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x47abb40
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkPS5InitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class AkAudio.AkDPXInitializationSettings
// Size: 0xf8 (Inherited: 0xf8)
struct UAkDPXInitializationSettings : UAkPS5InitializationSettings {
};

// Class AkAudio.AkPS5PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkPS5PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x2a0 (Inherited: 0x268)
struct AAkReverbVolume : AVolume {
	bool bEnabled; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UAkAuxBus* AuxBus; // 0x270(0x08)
	struct FString AuxBusName; // 0x278(0x10)
	float SendLevel; // 0x288(0x04)
	float FadeRate; // 0x28c(0x04)
	float Priority; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x298(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x270 (Inherited: 0x240)
struct UAkRoomComponent : UAkGameObject {
	bool bEnable; // 0x238(0x01)
	bool bDynamic; // 0x239(0x01)
	float Priority; // 0x23c(0x04)
	float WallOcclusion; // 0x240(0x04)
	float AuxSendLevel; // 0x244(0x04)
	bool AutoPost; // 0x248(0x01)
	char pad_24F[0x9]; // 0x24f(0x09)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x258(0x08)
	char pad_260[0x10]; // 0x260(0x10)

	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkRoomComponent.SetGeometryComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x47abd10
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ab960
};

// Class AkAudio.AkRtpc
// Size: 0x48 (Inherited: 0x48)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x310 (Inherited: 0x30)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x48(0x10)
	bool bAutoConnectToWAAPI; // 0x58(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x59(0x01)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x60(0x50)
	float GlobalDecayAbsorption; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xb8(0x30)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xe8(0x50)
	struct FString HFDampingName; // 0x138(0x10)
	struct FString DecayEstimateName; // 0x148(0x10)
	struct FString TimeToFirstReflectionName; // 0x158(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x168(0x30)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x198(0x30)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1c8(0x30)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent; // 0x1f8(0x30)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x228(0x50)
	bool SplitSwitchContainerMedia; // 0x278(0x01)
	bool SplitMediaPerFolder; // 0x279(0x01)
	bool UseEventBasedPackaging; // 0x27a(0x01)
	bool EnableAutomaticAssetSynchronization; // 0x27b(0x01)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FString CommandletCommitMessage; // 0x280(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x290(0x50)
	bool AskedToUseNewAssetManagement; // 0x2e0(0x01)
	bool bEnableMultiCoreRendering; // 0x2e1(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x2e2(0x01)
	bool FixupRedirectorsDuringMigration; // 0x2e3(0x01)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x2e8(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x2f8(0x10)
	char pad_308[0x8]; // 0x308(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x88 (Inherited: 0x30)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x30(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x40(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString WaapiIPAddress; // 0x58(0x10)
	uint32_t WaapiPort; // 0x68(0x04)
	bool bAutoConnectToWAAPI; // 0x6c(0x01)
	bool AutoSyncSelection; // 0x6d(0x01)
	char pad_6E[0x1]; // 0x6e(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x6f(0x01)
	char pad_70[0x18]; // 0x70(0x18)
};

// Class AkAudio.AkSlider
// Size: 0x588 (Inherited: 0x130)
struct UAkSlider : UWidget {
	float value; // 0x130(0x04)
	struct FDelegate ValueDelegate; // 0x134(0x14)
	struct FSliderStyle WidgetStyle; // 0x148(0x370)
	enum class EOrientation Orientation; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	struct FLinearColor SliderBarColor; // 0x4bc(0x10)
	struct FLinearColor SliderHandleColor; // 0x4cc(0x10)
	bool IndentHandle; // 0x4dc(0x01)
	bool locked; // 0x4dd(0x01)
	char pad_4DE[0x2]; // 0x4de(0x02)
	float StepSize; // 0x4e0(0x04)
	bool IsFocusable; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x4e8(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4f8(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x538(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x548(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x558(0x10)
	char pad_568[0x20]; // 0x568(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x47ac100
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x47ac080
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x47abff0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x47abf60
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x47abe30
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x47abda0
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x47abc70
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47abbd0
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47abb10
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ab910
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ab8d0
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x280 (Inherited: 0x268)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x268(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x270(0x08)
	struct UAkRoomComponent* Room; // 0x278(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x258 (Inherited: 0x230)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x230(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x238(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x248(0x08)
	float DistanceScalingFactor; // 0x250(0x04)
	float Level; // 0x254(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x70 (Inherited: 0x70)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSubmixInputComponent
// Size: 0x500 (Inherited: 0x4b0)
struct UAkSubmixInputComponent : UAkAudioInputComponent {
	struct USoundSubmix* SubmixToRecord; // 0x4b0(0x08)
	char pad_4B8[0x48]; // 0x4b8(0x48)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x260 (Inherited: 0x230)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	bool bEnableSurfaceReflectors; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct TArray<struct FAkSurfacePoly> AcousticPolys; // 0x238(0x10)
	bool bEnableDiffraction; // 0x248(0x01)
	bool bEnableDiffractionOnBoundaryEdges; // 0x249(0x01)
	char pad_24A[0x6]; // 0x24a(0x06)
	struct AActor* AssociatedRoom; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x47b1de0
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x47b0d90
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x47a74e0
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkSwitchInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x48 (Inherited: 0x48)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkTVOSInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkAudioSession AudioSession; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd8(0x2c)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b1cc0
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b1a40
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b1970
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0cd0
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0c10
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0b80
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47b0020
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47aff50
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47afb10
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x30 (Inherited: 0x30)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab7d0
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab6e0
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b1790
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b1570
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b13a0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b11d0
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0fd0
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0db0
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b09f0
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0750
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0600
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b04b0
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0360
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b0110
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x47afe20
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x47afd10
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab7d0
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x47ab6e0
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkWindowsInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWinGDKInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkWinGDKInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkWinAnvilInitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkWinAnvilInitializationSettings : UAkWinGDKInitializationSettings {
};

// Class AkAudio.AkWinGDKPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWinGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWinAnvilPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWinAnvilPlatformInfo : UAkWinGDKPlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x170 (Inherited: 0x130)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x47abec0
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47b08d0
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ab990
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x190 (Inherited: 0x130)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x140(0x10)
	char pad_150[0x40]; // 0x150(0x40)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkXboxOneGDKInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkXboxOneAnvilInitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXB1InitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkXB1InitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXboxOneGDKPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOneGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXboxOneAnvilPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOneAnvilPlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXB1PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXB1PlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkXboxOneInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXSXInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkXSXInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x3c)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x479b4f0
};

// Class AkAudio.AkMPXInitializationSettings
// Size: 0x108 (Inherited: 0x108)
struct UAkMPXInitializationSettings : UAkXSXInitializationSettings {
};

// Class AkAudio.AkXSXPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXSXPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1d8 (Inherited: 0xf0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_F0[0x40]; // 0xf0(0x40)
	struct UAkAudioEvent* Event; // 0x130(0x08)
	bool RetriggerEvent; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32_t ScrubTailLengthMs; // 0x13c(0x04)
	bool StopAtSectionEnd; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FString EventName; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)
	float MaxSourceDuration; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString MaxDurationSourceID; // 0x180(0x10)
	char pad_190[0x48]; // 0x190(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
	bool bIsAMasterTrack; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x258 (Inherited: 0xf0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xf0(0x08)
	struct FString Name; // 0xf8(0x10)
	struct FRichCurve FloatCurve; // 0x108(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x188(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1b8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class AkAudio.PostEventAsync
// Size: 0xa8 (Inherited: 0x38)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate COMPLETED; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47b52e0
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x47b52a0
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x88 (Inherited: 0x38)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate COMPLETED; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x47b5580
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x47b52c0
};

