// BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
// Size: 0x708 (Inherited: 0x660)
struct ABP_Menu_Base_Camper_C : ADBDMenuPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct ULobbyDialogueComponent_C* LobbyDialogueComponent; // 0x668(0x08)
	struct UBP_SurvivorRightFootGroundDetector_C* RightFootGroundDetector; // 0x670(0x08)
	struct UBP_SurvivorLeftFootGroundDetector_C* LeftFootGroundDetector; // 0x678(0x08)
	struct UCharmSpawnerComponent* CharmSpawner; // 0x680(0x08)
	struct UCustomizedAudioComponent* CustomizedAudio; // 0x688(0x08)
	struct UAkComponent* Ak_Audio_Menu_Base_Camper; // 0x690(0x08)
	float Timeline_0_Dissolve_C225B0A046EE8204E18233BA497D6AC1; // 0x698(0x04)
	float Timeline_0_Radius_C225B0A046EE8204E18233BA497D6AC1; // 0x69c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_C225B0A046EE8204E18233BA497D6AC1; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct UTimelineComponent* Timeline_1; // 0x6a8(0x08)
	float Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1; // 0x6b0(0x04)
	enum class ETimelineDirection Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	struct UTimelineComponent* Dissolve; // 0x6b8(0x08)
	bool Destroying; // 0x6c0(0x01)
	bool PlayLocalDialogueOnly; // 0x6c1(0x01)
	char pad_6C2[0x6]; // 0x6c2(0x06)
	struct UMaterialInstanceDynamic* Decal MI; // 0x6c8(0x08)
	struct UDecalComponent* Decal; // 0x6d0(0x08)
	float MinRandomTimerSeconds; // 0x6d8(0x04)
	float MaxRandomTimerSeconds; // 0x6dc(0x04)
	int32_t MaxIdleInterrupt; // 0x6e0(0x04)
	int32_t MenuIdleRandomInteruptInt; // 0x6e4(0x04)
	struct FMulticastInlineDelegate OnCamperMenuInterruptChange; // 0x6e8(0x10)
	struct FMulticastInlineDelegate OnCamperMenuAnimationStateChange; // 0x6f8(0x10)

	void Get_BP_MenuBaseCamper(struct ABP_Menu_Base_Camper_C*& BP_MenuBaseCamper); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Get_BP_MenuBaseCamper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void IsPlayingMenuInterrupt(bool IsPlayingAnimation); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.IsPlayingMenuInterrupt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GenerateRandomNumberForInterrupt(int32_t& InterruptNumber); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.GenerateRandomNumberForInterrupt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Set Height(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Set Height // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	struct UCharmSpawnerComponent* GetCharmSpawnerComponent(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.GetCharmSpawnerComponent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UserConstructionScript(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Dissolve__FinishedFunc(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Dissolve__UpdateFunc(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__FinishedFunc(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__UpdateFunc(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__Blood Effect__EventFunc(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Timeline_0__Blood Effect__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(struct FName& outfitAudioStateCollection); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BeginDestroySequence_Internal(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginDestroySequence_Internal // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BeginSmokeIn(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginSmokeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RestartInSequence_Internal(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.RestartInSequence_Internal // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(enum class EAudioCustomizationCategory category, struct FString switchState); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void OnLocalPlayerSpawned(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnLocalPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnGuestPlayerSpawned(struct ADBDMenuPlayer* Player); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnGuestPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnLocalPlayerReadyChanged(bool IsReady); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnLocalPlayerReadyChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnGuestPlayerReadyChanged(struct ADBDMenuPlayer* Player, bool IsReady); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnGuestPlayerReadyChanged // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnAllPlayersReadyInOnlineLobby(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnAllPlayersReadyInOnlineLobby // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnSkeletalMeshReady(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnSkeletalMeshReady // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnGuestPlayerDespawned(struct ADBDMenuPlayer* Player); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnGuestPlayerDespawned // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void PlayCharacterLevelUpVFX(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.PlayCharacterLevelUpVFX // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnDataDrivenCVarDelegate(struct FString CVarName); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnDataDrivenCVarDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetCamperMenuAnimationState(enum class Enum_CamperMenuAnimationState State); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.SetCamperMenuAnimationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnPlayerMaxPrestige(); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnPlayerMaxPrestige // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Base_Camper(int32_t EntryPoint); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ExecuteUbergraph_BP_Menu_Base_Camper // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
	void OnCamperMenuAnimationStateChange__DelegateSignature(enum class Enum_CamperMenuAnimationState State); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnCamperMenuAnimationStateChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCamperMenuInterruptChange__DelegateSignature(int32_t MenuInterrupt, bool DebugPassCurrentAnimation); // Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnCamperMenuInterruptChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

