// BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C
// Size: 0x80d (Inherited: 0x728)
struct ABP_Menu_Slasher18_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_18_C* BP_Audio_KLR_19; // 0x730(0x08)
	struct USkeletalMeshComponent* rings; // 0x738(0x08)
	struct UDemonModeMenuComponent* DemonModeMenu; // 0x740(0x08)
	struct USkeletalMeshComponent* SKWS01_REF; // 0x748(0x08)
	struct FLinearColor TML_DemonModeCusto_Color_4A028AF64D8C75B37ACB968AFFF999A6; // 0x750(0x10)
	float TML_DemonModeCusto_Demon_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x760(0x04)
	float TML_DemonModeCusto_Normal_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x764(0x04)
	enum class ETimelineDirection TML_DemonModeCusto__Direction_4A028AF64D8C75B37ACB968AFFF999A6; // 0x768(0x01)
	char pad_769[0x7]; // 0x769(0x07)
	struct UTimelineComponent* TML_DemonModeCusto; // 0x770(0x08)
	float TML_KatanaDissolve_Dissolve_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x778(0x04)
	enum class ETimelineDirection TML_KatanaDissolve__Direction_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x77c(0x01)
	char pad_77D[0x3]; // 0x77d(0x03)
	struct UTimelineComponent* TML_KatanaDissolve; // 0x780(0x08)
	bool IsKatanaVisible; // 0x788(0x01)
	char pad_789[0x7]; // 0x789(0x07)
	struct TArray<struct USkeletalMeshComponent*> NormalModeCustoParts; // 0x790(0x10)
	struct TArray<struct UParticleSystemComponent*> DemonModeVFX; // 0x7a0(0x10)
	struct TArray<struct USkeletalMeshComponent*> DemonModeCustoParts; // 0x7b0(0x10)
	struct TArray<struct FLinearColor> SKOniEmissiveDefault; // 0x7c0(0x10)
	bool IsInDemonMode; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct TArray<struct FLinearColor> SM_OniEmissiveDefault; // 0x7d8(0x10)
	float MaxSwordDissolveValue; // 0x7e8(0x04)
	float MinDissolvevalue; // 0x7ec(0x04)
	struct TArray<struct UParticleSystemComponent*> NormalModeVFX; // 0x7f0(0x10)
	int32_t SK_OniEmissiveIndex; // 0x800(0x04)
	bool SK_IsOniEmissiveIndex0; // 0x804(0x01)
	char pad_805[0x3]; // 0x805(0x03)
	int32_t OniSMEmissiveIndex; // 0x808(0x04)
	bool IsOniSMEmissiveIndex0; // 0x80c(0x01)

	void ResetOniEmissiveParameterSM(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ResetOniEmissiveParameterSM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ResetOniEmissiveParameterSK(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ResetOniEmissiveParameterSK // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SM_SetOniEmissiveParameter(struct FLinearColor Emissive); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SM_SetOniEmissiveParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SK_SetOniEmissiveParameter(struct FLinearColor Emissive); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SK_SetOniEmissiveParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowDemonModeCusto(bool IsInDemonMode, bool IsInNormalMode); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonModeCusto // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SaveOniEmissiveParameter(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SaveOniEmissiveParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetDemonModeCusto(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.GetDemonModeCusto // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void TML_KatanaDissolve__FinishedFunc(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_KatanaDissolve__UpdateFunc(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_DemonModeCusto__FinishedFunc(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_DemonModeCusto__UpdateFunc(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_DemonModeCusto__Switch Normal__EventFunc(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Normal__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_DemonModeCusto__Switch Demon__EventFunc(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Demon__EventFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ActivateEndGameVignette(bool IsActive); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateEndGameVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePlayerExposedVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerExposedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateLocalPlayerExposedVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateLocalPlayerExposedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetPlayerExposedVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetPlayerExposedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetHighlightedVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetHighlightedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePlayerLightningVFX(struct UMaterialInstanceDynamic*& LightningFX, bool intense); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerLightningVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePlayerGlitchVFX(struct UMaterialInstanceDynamic*& GlitchFX, bool Face, bool Madness, bool killer); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerGlitchVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Travelling PP(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling PP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Travelling Dissolve(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling Dissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Travelling Dissolve(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling Dissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Pounce VFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Pounce VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Pounce VFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Pounce VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Saliva VFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Saliva VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Saliva VFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Saliva VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Travelling PP(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling PP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePounceStateVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePounceStateVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Destroy Blood Orb(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Destroy Blood Orb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Switch Oni Weapons To Normal(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Oni Weapons To Normal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DisableDemonMode(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DisableDemonMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReturnToDemonMode(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnToDemonMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Hide Oni Katana_TPV(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana_TPV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowGunBullet(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowGunBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideGunBullet(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideGunBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnFakeBullet(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFakeBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateSacrificeCamBlood(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateSacrificeCamBlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StartDeathBedDissolve(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DeactivateKnockoutVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DeactivateKnockoutVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateKnockoutVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateKnockoutVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnFullScreenBlood(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFullScreenBlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StartDeathBedRelocateVignette(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedRelocateVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateAttemptEscapeVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateAttemptEscapeVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowSyringe(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowSyringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideSyringe(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimateLiquidSyringe(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AnimateLiquidSyringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateVignetteOnWallCollision(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateVignetteOnWallCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideSyringeOnStun(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringeOnStun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_SpawnWipeVFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_SpawnWipeVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightDormantMain(bool IsDormantMain?); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormantMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightDormant(bool IsDormant?); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightMissJump(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_DormantAttachedSlasher(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DormantAttachedSlasher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_JumpTrail_Activate(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_JumpTrail_Deactivate(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_ReleaseBrother(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_ReleaseBrother // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_MembraneRecovery(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneRecovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_MembraneDelete(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneDelete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_BabyBloodDissolve(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyBloodDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_BabyRespawn(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_Jump_Active(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Active // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_Jump_Inactive(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Inactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void On Execution(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Execution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_SetTrap(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_SetTrap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_TrapImpact(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_TrapImpactOff(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpactOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_BloodDrops(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_BloodDrops // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_InvisibleOn(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_InvisibleOff(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_TelekinesisOn(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_TelekinesisOff(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_WrongLanding(bool Wrong Landing); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_AttachedToSurvivor_VFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_AttachedToSurvivor_VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_DetachedFromSurvivor_VFX(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DetachedFromSurvivor_VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_WrongLandingVignette(bool WrongLanding); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLandingVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_GetToxinVignette(enum class EBombType Bomb Type); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetToxinVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_GetAntidoteVignette(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetAntidoteVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_AntidoteEnd(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_AntidoteBegin(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteBegin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_BombSmokeColor(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_BombSmokeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_RemoveVignette(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_RemoveVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_PlaceVignette(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_PlaceVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_QuickDissolveBrother(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_QuickDissolveBrother // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Killer_LungeAttack_Start(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Killer_LungeAttack_End(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Camper_AntidoteBoostVignette_Start(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Camper_AntidoteBoostVignette_End(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_BrotherDissolveLocker(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BrotherDissolveLocker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightMissJump_Stop(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump_Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_CamperHitByKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_IsAttachedLocker(bool IsAttachedLocker); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_IsAttachedLocker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_ShowKnifeLT(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeLT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_ShowKnifeRT(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_ShowBat(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowBat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_HideBat(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideBat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_HideKnifeRT(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_HideKnifeLT(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeLT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AddBloodDrippingGKMoriMale(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AddBloodDrippingGKMoriMale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Survivor_BoonRadius_Enter(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Enter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Survivor_BoonRadius_Exit(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Boon_Unbound(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Boon_Unbound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Switch Kanobo To Demon Mode(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo To Demon Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Switch Kanobo to Normal Mode(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo to Normal Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Show Oni Katana(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Show Oni Katana // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Hide Oni Katana(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void On Customisation Updated(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Customisation Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowDemonCosmetic(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonCosmetic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideDemonCosmetic(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideDemonCosmetic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReturnOniToNormal(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnOniToNormal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StopTransformation(); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StopTransformation // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher18(int32_t EntryPoint); // Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ExecuteUbergraph_BP_Menu_Slasher18 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

