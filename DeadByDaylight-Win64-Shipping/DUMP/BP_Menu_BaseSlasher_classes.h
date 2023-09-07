// BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C
// Size: 0x728 (Inherited: 0x660)
struct ABP_Menu_BaseSlasher_C : ADBDMenuPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct UBP_KillerRightFootGroundDetector_C* RightFootGroundDetector; // 0x668(0x08)
	struct UBP_KillerLeftFootGroundDetector_C* LeftFootGroundDetector; // 0x670(0x08)
	struct UCustomizedAudioComponent* CustomizedAudio; // 0x678(0x08)
	struct UAkComponent* Ak_Audio_Menu_Base_Slasher; // 0x680(0x08)
	float Timeline_0_Dissolve_8C0E9079408DDB2CEF13CDAD072137A5; // 0x688(0x04)
	float Timeline_0_Radius_8C0E9079408DDB2CEF13CDAD072137A5; // 0x68c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_8C0E9079408DDB2CEF13CDAD072137A5; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct UTimelineComponent* Timeline_1; // 0x698(0x08)
	float TML_DissolveSlasher_Dissolve_6A8353EF46DC9749463CE0935534B1A4; // 0x6a0(0x04)
	enum class ETimelineDirection TML_DissolveSlasher__Direction_6A8353EF46DC9749463CE0935534B1A4; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct UTimelineComponent* TML_DissolveSlasher; // 0x6a8(0x08)
	bool IsInMenu; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct TArray<struct TSoftObjectPtr<UAkAudioBank>> RequiredSoundBanks; // 0x6b8(0x10)
	struct TArray<struct UObject*> AssignedSoundBanks; // 0x6c8(0x10)
	float SlasherHeight; // 0x6d8(0x04)
	float SlasherHeightBase; // 0x6dc(0x04)
	int32_t MenuIdleRandomInteruptInt; // 0x6e0(0x04)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct FMulticastInlineDelegate OnMenuAnimationStateChange; // 0x6e8(0x10)
	struct FMulticastInlineDelegate OnMenuInterruptChange; // 0x6f8(0x10)
	float MinRandomTimerSeconds; // 0x708(0x04)
	float MaxRandomTimerSeconds; // 0x70c(0x04)
	int32_t MaxIdleInterrupt; // 0x710(0x04)
	char pad_714[0x4]; // 0x714(0x04)
	struct UDecalComponent* Decal; // 0x718(0x08)
	struct UMaterialInstanceDynamic* Decal MI; // 0x720(0x08)

	void GetMenuBaseSlasher(struct ABP_Menu_BaseSlasher_C*& Bp_MenuBaseSlasher); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.GetMenuBaseSlasher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool IsInMenuPlayer(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.IsInMenuPlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void UpdateHeight(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.UpdateHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void TML_DissolveSlasher__FinishedFunc(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_DissolveSlasher__UpdateFunc(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__FinishedFunc(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__UpdateFunc(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__Blood Effect__EventFunc(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.Timeline_0__Blood Effect__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(struct FName& outfitAudioStateCollection); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BeginDestroySequence_Internal(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginDestroySequence_Internal // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BeginSmokeIn(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginSmokeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RestartInSequence_Internal(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RestartInSequence_Internal // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(enum class EAudioCustomizationCategory category, struct FString switchState); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void RemoveAssetsBeforeDestroy(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RemoveAssetsBeforeDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SkeletalMeshReady(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.SkeletalMeshReady // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnDataDrivenCVarDelegate_Event(struct FString CVarName); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnDataDrivenCVarDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetMenuAnimationState(enum class Enum_MenuAnimationState State); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.SetMenuAnimationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayCharacterLevelUpVFX(); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.PlayCharacterLevelUpVFX // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_BaseSlasher(int32_t EntryPoint); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ExecuteUbergraph_BP_Menu_BaseSlasher // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
	void OnMenuInterruptChange__DelegateSignature(int32_t MenuInterrupt, bool DebugPassCurrentAnimation); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnMenuInterruptChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnMenuAnimationStateChange__DelegateSignature(enum class Enum_MenuAnimationState State); // Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnMenuAnimationStateChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

