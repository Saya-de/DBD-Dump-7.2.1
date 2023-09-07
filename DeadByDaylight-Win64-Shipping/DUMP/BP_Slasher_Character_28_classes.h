// BlueprintGeneratedClass BP_Slasher_Character_28.BP_Slasher_Character_27_C
// Size: 0x1b81 (Inherited: 0x19fd)
struct ABP_Slasher_Character_27_C : ABP_Slasher_Character_C {
	char pad_19FD[0x3]; // 0x19fd(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a00(0x08)
	struct UIgnorePlayersCollisionsComponent* IgnorePlayersCollisions; // 0x1a08(0x08)
	struct UAkComponent* Ak_Audio_Killer_NoOcclusion; // 0x1a10(0x08)
	struct UBP_AfterImageComponent_C* BP_AfterImageComponent; // 0x1a18(0x08)
	struct UBP_Audio_KLR_27_C* BP_Audio_KLR_28; // 0x1a20(0x08)
	struct USlashAttack_BP_C* SlashAttack_BP_C; // 0x1a28(0x08)
	struct UPounceAttack_BP_C* PounceAttack_BP_C; // 0x1a30(0x08)
	float PhaseDissolve_Dissolve_0C698AE64B1D03C9A4A45EA7E2986931; // 0x1a38(0x04)
	enum class ETimelineDirection PhaseDissolve__Direction_0C698AE64B1D03C9A4A45EA7E2986931; // 0x1a3c(0x01)
	char pad_1A3D[0x3]; // 0x1a3d(0x03)
	struct UTimelineComponent* PhaseDissolve; // 0x1a40(0x08)
	float TML_VignetteIntensityOnInteraction_InteractionVignetteVanish_19417BB8491889DE9FDC42BE330FFFDD; // 0x1a48(0x04)
	enum class ETimelineDirection TML_VignetteIntensityOnInteraction__Direction_19417BB8491889DE9FDC42BE330FFFDD; // 0x1a4c(0x01)
	char pad_1A4D[0x3]; // 0x1a4d(0x03)
	struct UTimelineComponent* TML_VignetteIntensityOnInteraction; // 0x1a50(0x08)
	float TML_TeleportHideMesh_NewTrack_0_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x1a58(0x04)
	enum class ETimelineDirection TML_TeleportHideMesh__Direction_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x1a5c(0x01)
	char pad_1A5D[0x3]; // 0x1a5d(0x03)
	struct UTimelineComponent* TML_TeleportHideMesh; // 0x1a60(0x08)
	float TML_TeleportFeet_VaultOpacityDissolveLvl_2155BA49426F5ED7364FE88DDA5883B4; // 0x1a68(0x04)
	enum class ETimelineDirection TML_TeleportFeet__Direction_2155BA49426F5ED7364FE88DDA5883B4; // 0x1a6c(0x01)
	char pad_1A6D[0x3]; // 0x1a6d(0x03)
	struct UTimelineComponent* TML_TeleportFeet; // 0x1a70(0x08)
	float TML_Unmanifest_PowerScaling_5390BF654162A90BA43CDCB423451EBF; // 0x1a78(0x04)
	float TML_Unmanifest_Vignette_Intensity_5390BF654162A90BA43CDCB423451EBF; // 0x1a7c(0x04)
	enum class ETimelineDirection TML_Unmanifest__Direction_5390BF654162A90BA43CDCB423451EBF; // 0x1a80(0x01)
	char pad_1A81[0x7]; // 0x1a81(0x07)
	struct UTimelineComponent* TML_Unmanifest; // 0x1a88(0x08)
	float TML_Manifest_PowerScaling_C8B2EF204D929F27887891B9BEA446ED; // 0x1a90(0x04)
	float TML_Manifest_Vignette_Intensity_C8B2EF204D929F27887891B9BEA446ED; // 0x1a94(0x04)
	enum class ETimelineDirection TML_Manifest__Direction_C8B2EF204D929F27887891B9BEA446ED; // 0x1a98(0x01)
	char pad_1A99[0x7]; // 0x1a99(0x07)
	struct UTimelineComponent* TML_Manifest; // 0x1aa0(0x08)
	float TML_Opacity_Opacity_Hair_98033A1B44F8FE679812E7804399EB22; // 0x1aa8(0x04)
	float TML_Opacity_Opacity_Body_98033A1B44F8FE679812E7804399EB22; // 0x1aac(0x04)
	enum class ETimelineDirection TML_Opacity__Direction_98033A1B44F8FE679812E7804399EB22; // 0x1ab0(0x01)
	char pad_1AB1[0x7]; // 0x1ab1(0x07)
	struct UTimelineComponent* TML_Opacity; // 0x1ab8(0x08)
	float FadeToBlackTimeline_FadeToBlack_Use_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1ac0(0x04)
	float FadeToBlackTimeline_Vignette_Intensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1ac4(0x04)
	float FadeToBlackTimeline_Outline_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1ac8(0x04)
	float FadeToBlackTimeline_FadeIntensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1acc(0x04)
	enum class ETimelineDirection FadeToBlackTimeline__Direction_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1ad0(0x01)
	char pad_1AD1[0x7]; // 0x1ad1(0x07)
	struct UTimelineComponent* FadeToBlackTimeline; // 0x1ad8(0x08)
	struct UMaterialInstanceDynamic* PP Vignette Basic - FadeToBlack; // 0x1ae0(0x08)
	float prevFadeToBlackBasicSize; // 0x1ae8(0x04)
	bool IsForwardFade; // 0x1aec(0x01)
	char pad_1AED[0x3]; // 0x1aed(0x03)
	struct UMaterialInstanceDynamic* PP_Vignette_K27_Manifest; // 0x1af0(0x08)
	struct FWeightedBlendable Manifest_WeightedBlendable; // 0x1af8(0x10)
	struct TArray<struct FWeightedBlendable> Manifest_WeightedBlendables; // 0x1b08(0x10)
	struct TArray<struct UNiagaraComponent*> NS_FX_Manifest_Charge; // 0x1b18(0x10)
	bool IsTeleporting?; // 0x1b28(0x01)
	char pad_1B29[0x7]; // 0x1b29(0x07)
	struct UNiagaraComponent* NS_FX_Manifest_Charge_02; // 0x1b30(0x08)
	struct FWeightedBlendable FadeToBlack_WeightedBlendable; // 0x1b38(0x10)
	struct TArray<struct FWeightedBlendable> FadeToBlack_WeightedBlendables; // 0x1b48(0x10)
	struct UAB_Slasher_27_C* AB_Slasher_28; // 0x1b58(0x08)
	struct FVector Teleport_VeinsColor; // 0x1b60(0x0c)
	bool IsManifested?; // 0x1b6c(0x01)
	bool WantsVisible; // 0x1b6d(0x01)
	bool IsInTeleportInteraction; // 0x1b6e(0x01)
	bool IsVisible; // 0x1b6f(0x01)
	bool IsFlickeringStopped; // 0x1b70(0x01)
	char pad_1B71[0x7]; // 0x1b71(0x07)
	struct UNiagaraComponent* NS_PhaseStatic; // 0x1b78(0x08)
	bool IsPhasingThroughObject; // 0x1b80(0x01)

	void OtherWorldVignetteIntensity(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.OtherWorldVignetteIntensity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void TryRestartFlickerAfterTeleportation(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TryRestartFlickerAfterTeleportation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetCastShadow(bool NewCastShadow); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.SetCastShadow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool CanUpdateFlicker(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CanUpdateFlicker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void FinishHideMesh(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FinishHideMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StopFlicker(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.StopFlicker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RandomLocationAfterImage(struct FTransform& NewParam); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.RandomLocationAfterImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void UserConstructionScript(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FadeToBlackTimeline__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FadeToBlackTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void FadeToBlackTimeline__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FadeToBlackTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Opacity__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Opacity__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Opacity__Event Hide VFX__EventFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__Event Hide VFX__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Opacity__Event Shadow__EventFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__Event Shadow__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Manifest__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Manifest__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Manifest__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Manifest__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Unmanifest__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Unmanifest__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_Unmanifest__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Unmanifest__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_TeleportHideMesh__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportHideMesh__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_TeleportHideMesh__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportHideMesh__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_TeleportFeet__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportFeet__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_TeleportFeet__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportFeet__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_VignetteIntensityOnInteraction__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_VignetteIntensityOnInteraction__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void PhaseDissolve__FinishedFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.PhaseDissolve__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void PhaseDissolve__UpdateFunc(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.PhaseDissolve__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void FX_K27_SpawnMiniMoriVignette(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_SpawnMiniMoriVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_FadeCondemnedStatus(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_FadeCondemnedStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_K27_ShowTape(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_ShowTape // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_K27_HideTape(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_HideTape // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportSuccess(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportSuccess // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportStart(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportStart // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportFinished(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportFinished // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportCancelled(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportCancelled // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnAfterImage(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.SpawnAfterImage // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeManifestSuccess(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestSuccess // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeManifestStart(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestStart // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnManifestStateChanged // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnKillerVisibilityChanged // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeManifestCancelled(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestCancelled // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeUnmanifestStart(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestStart // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeUnmanifestSuccess(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestSuccess // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeUnmanifestCancelled(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestCancelled // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CosmeticOnUnmanifestChargeChanged(float Charge Percent); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CosmeticOnUnmanifestChargeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CosmeticOnManifestChargeChanged(float Charge Percent); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CosmeticOnManifestChargeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ManifestCancelCharge(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ManifestCancelCharge // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UnmanifestCancelCharge(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.UnmanifestCancelCharge // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_K27_InteractionStart_Vignette(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_InteractionStart_Vignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Hide Mesh(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Hide Mesh // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Update Visibility On Teleport success(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Update Visibility On Teleport success // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Event On Manifested Through Interaction(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Event On Manifested Through Interaction // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Unhide Mesh(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Unhide Mesh // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.OnLevelReadyToPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void CE_OnSoundbankLoaded(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CE_OnSoundbankLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerStartPhasingThroughObject(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnKillerStartPhasingThroughObject // (BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerStopPhasingThroughObject(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnKillerStopPhasingThroughObject // (BlueprintEvent) // @ game+0x5e02c90
	void Reverse PhaseDissolve(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Reverse PhaseDissolve // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFailedAttemptPalletStun(); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnFailedAttemptPalletStun // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Slasher_Character_28(int32_t EntryPoint); // Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ExecuteUbergraph_BP_Slasher_Character_28 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

