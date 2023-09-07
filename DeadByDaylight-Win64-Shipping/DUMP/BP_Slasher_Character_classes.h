// BlueprintGeneratedClass BP_Slasher_Character.BP_Slasher_Character_C
// Size: 0x19fd (Inherited: 0x1670)
struct ABP_Slasher_Character_C : ASlasherPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1670(0x08)
	struct USlasherFootstepPerceptionComponent_C* SlasherFootstepPerceptionComponent; // 0x1678(0x08)
	struct USignificanceManagerComponent* SignificanceManager; // 0x1680(0x08)
	struct USlasherTerrorRadiusEmitterComponent* SlasherTerrorRadiusEmitter; // 0x1688(0x08)
	struct UBPNearestOutsideMapBoundsLocator_C* BPNearestOutsideMapBoundsLocator; // 0x1690(0x08)
	struct UPositionLagCompensationComponent* PositionLagCompensation; // 0x1698(0x08)
	struct UCharacterOptimizer* CharacterOptimizer; // 0x16a0(0x08)
	struct UWiggleMotionComponent* WiggleMotion; // 0x16a8(0x08)
	struct UEtherealComponent* Ethereal; // 0x16b0(0x08)
	struct UKillerFlashlightSFXComponent* KillerFlashlightSFX; // 0x16b8(0x08)
	struct UInteractionAnalyticsComponent* InteractionAnalytics; // 0x16c0(0x08)
	struct UBlindFlashlightTargetFXComponent* BlindFlashlightTargetFX; // 0x16c8(0x08)
	struct UFlashlightableComponent* BodyFlashlightable; // 0x16d0(0x08)
	struct UFlashlightableComponent* EyesFlashlightable; // 0x16d8(0x08)
	struct UBP_KillerLeftFootGroundDetector_C* LeftFootGroundDetector; // 0x16e0(0x08)
	struct UBP_KillerRightFootGroundDetector_C* RightFootGroundDetector; // 0x16e8(0x08)
	struct UQuestEventsHandler* QuestEventsHandler; // 0x16f0(0x08)
	struct UBP_RedStainComponent_C* RedStainComponent; // 0x16f8(0x08)
	struct UGameEventListenerCollectionComponent* GameEventListenerCollection; // 0x1700(0x08)
	struct UCapsulePlayerOverlapComponent* pawnDetector; // 0x1708(0x08)
	struct UScreenSpaceLocationComponent* ScreenSpaceLocation_MiddleT; // 0x1710(0x08)
	struct UParticleSystemComponent* P_Vignette_EndGame_Top; // 0x1718(0x08)
	struct UEndGameEffectsComponent_C* EndGameEffectsComponent; // 0x1720(0x08)
	struct UCameraComponent* Camera1; // 0x1728(0x08)
	struct USlasherOutlineUpdateStrategy* SlasherOutlineUpdateStrategy; // 0x1730(0x08)
	struct UCustomizedAudioComponent* CustomizedAudio; // 0x1738(0x08)
	struct UPostProcessComponent* BlindedPostProcess_new; // 0x1740(0x08)
	struct UStaticMeshComponent* AttackZone_004; // 0x1748(0x08)
	struct USphereComponent* audioAmbientDetector; // 0x1750(0x08)
	struct UStaticMeshComponent* AttackZone_Wedge_Large; // 0x1758(0x08)
	struct UStaticMeshComponent* AttackZone_Wedge_Standard; // 0x1760(0x08)
	struct UPostProcessComponent* VignetteBloodlust; // 0x1768(0x08)
	struct UFirecrackerEffectHandlerComponent* FirecrackerEffectHandler; // 0x1770(0x08)
	struct UStaticMeshComponent* AttackZoneHigh_003; // 0x1778(0x08)
	struct UStaticMeshComponent* AttackZoneHigh_002; // 0x1780(0x08)
	struct UStaticMeshComponent* AttackZoneHigh_001; // 0x1788(0x08)
	struct UBoxComponent* ObstructionShape; // 0x1790(0x08)
	struct UStaticMeshComponent* AttackZone_003; // 0x1798(0x08)
	struct UStaticMeshComponent* AttackZone_002; // 0x17a0(0x08)
	struct UStaticMeshComponent* AttackZone_001; // 0x17a8(0x08)
	struct USceneComponent* attackZonePivot; // 0x17b0(0x08)
	struct UAkComponent* Ak_Audio_Killer; // 0x17b8(0x08)
	struct UBoxComponent* ChainsawObstruction; // 0x17c0(0x08)
	struct UCapsuleComponent* InteractionDetector; // 0x17c8(0x08)
	struct USceneComponent* CamperDropOffPoint; // 0x17d0(0x08)
	struct UDBDOutlineComponent* DBDOutline; // 0x17d8(0x08)
	struct UCustomizedSkeletalMesh* CustomizedSkeletalMesh; // 0x17e0(0x08)
	struct UBP_Mesh2SoundPlayer_C* BP_Mesh2SoundPlayer; // 0x17e8(0x08)
	struct UBoxComponent* BlinkAttackLockZone; // 0x17f0(0x08)
	struct UScreenSpaceLocationComponent* ScreenSpaceLocation_LeftT; // 0x17f8(0x08)
	struct UScreenSpaceLocationComponent* ScreenSpaceLocation_RightT; // 0x1800(0x08)
	struct UParticleSystemComponent* P_Vignette_LeftB; // 0x1808(0x08)
	struct UScreenSpaceLocationComponent* ScreenSpaceLocation_LeftB; // 0x1810(0x08)
	struct UParticleSystemComponent* P_Vignette_RightB; // 0x1818(0x08)
	struct UScreenSpaceLocationComponent* ScreenSpaceLocation_RightB; // 0x1820(0x08)
	struct ULoudNoiseHUDIndicator* LoudNoiseHUDIndicator; // 0x1828(0x08)
	struct UParticleSystemComponent* Fx_FSbloodfx; // 0x1830(0x08)
	float Timeline_0_Distortion_55E19FBE44A263E2F58D6CBD8B8F6FF5; // 0x1838(0x04)
	float Timeline_0_Fade_55E19FBE44A263E2F58D6CBD8B8F6FF5; // 0x183c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_55E19FBE44A263E2F58D6CBD8B8F6FF5; // 0x1840(0x01)
	char pad_1841[0x7]; // 0x1841(0x07)
	struct UTimelineComponent* Timeline_1; // 0x1848(0x08)
	float TML_LungeAttack_Vignette_C6A1D26A45B8D21BE38076A15A900F67; // 0x1850(0x04)
	enum class ETimelineDirection TML_LungeAttack__Direction_C6A1D26A45B8D21BE38076A15A900F67; // 0x1854(0x01)
	char pad_1855[0x3]; // 0x1855(0x03)
	struct UTimelineComponent* TML_LungeAttack; // 0x1858(0x08)
	float BloodSplatterOpacityAnim_NewTrack_0_C8565C8848DC851A61C85CA0D1C69D9F; // 0x1860(0x04)
	enum class ETimelineDirection BloodSplatterOpacityAnim__Direction_C8565C8848DC851A61C85CA0D1C69D9F; // 0x1864(0x01)
	char pad_1865[0x3]; // 0x1865(0x03)
	struct UTimelineComponent* BloodSplatterOpacityAnim; // 0x1868(0x08)
	float BloodSplatterFrameAnim_NewTrack_0_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x1870(0x04)
	enum class ETimelineDirection BloodSplatterFrameAnim__Direction_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x1874(0x01)
	char pad_1875[0x3]; // 0x1875(0x03)
	struct UTimelineComponent* BloodSplatterFrameAnim; // 0x1878(0x08)
	float Bloodlust_Timeline_Blend_7510578B48E7070D9984B9923F94253F; // 0x1880(0x04)
	enum class ETimelineDirection Bloodlust_Timeline__Direction_7510578B48E7070D9984B9923F94253F; // 0x1884(0x01)
	char pad_1885[0x3]; // 0x1885(0x03)
	struct UTimelineComponent* Bloodlust Timeline; // 0x1888(0x08)
	float Timeline_1_Dissolve_99584B454ECDABDE86BE6E8CD0241B00; // 0x1890(0x04)
	enum class ETimelineDirection Timeline_1__Direction_99584B454ECDABDE86BE6E8CD0241B00; // 0x1894(0x01)
	char pad_1895[0x3]; // 0x1895(0x03)
	struct UTimelineComponent* Timeline_2; // 0x1898(0x08)
	float BaseTurnRate; // 0x18a0(0x04)
	float BaseLookUpRate; // 0x18a4(0x04)
	char pad_18A8[0x8]; // 0x18a8(0x08)
	struct FTransform CenterOfWorld; // 0x18b0(0x30)
	bool Attack; // 0x18e0(0x01)
	char pad_18E1[0x3]; // 0x18e1(0x03)
	float IsTurning; // 0x18e4(0x04)
	struct UMaterialInstanceDynamic* CharacterHeadMesh; // 0x18e8(0x08)
	struct USkinnedMeshComponent* MeshMachette; // 0x18f0(0x08)
	struct UMaterialInstanceDynamic* Trap Material; // 0x18f8(0x08)
	bool TrapPlacementValid; // 0x1900(0x01)
	char pad_1901[0x3]; // 0x1901(0x03)
	float Trap Indicator Offset; // 0x1904(0x04)
	float BaseMaxWalkSpeed; // 0x1908(0x04)
	float baseTerrorRadius; // 0x190c(0x04)
	struct ACamperPlayer* SurvivorBeingKilled; // 0x1910(0x08)
	struct FString DissolveMaterialGroupName; // 0x1918(0x10)
	struct FString FirstPersonMaterialGroupName; // 0x1928(0x10)
	struct FString DissolveGroupName; // 0x1938(0x10)
	struct FString FirstPersonDissolve; // 0x1948(0x10)
	struct FString FirstPersonGroupName; // 0x1958(0x10)
	bool IsDissolving; // 0x1968(0x01)
	char pad_1969[0x3]; // 0x1969(0x03)
	struct FName Weapon; // 0x196c(0x0c)
	bool RootMeshIsHeadOnly; // 0x1978(0x01)
	char pad_1979[0x3]; // 0x1979(0x03)
	struct FVector TrapPlacementRaycastStart; // 0x197c(0x0c)
	struct FVector TrapPlacementRaycastEnd; // 0x1988(0x0c)
	char pad_1994[0x4]; // 0x1994(0x04)
	struct UMaterialInstanceDynamic* MID_Damage; // 0x1998(0x08)
	struct UMaterialInstanceDynamic* MID_LockOn; // 0x19a0(0x08)
	struct UCurveFloat* BlindnessCurve; // 0x19a8(0x08)
	struct UCurveFloat* BlindnessMaterialCurve; // 0x19b0(0x08)
	struct UMaterialInstanceDynamic* PP_Stun; // 0x19b8(0x08)
	struct UMaterialInstanceDynamic* PP_Smoke; // 0x19c0(0x08)
	struct UMaterialInstanceDynamic* PP_Chase; // 0x19c8(0x08)
	struct UMaterialInstanceDynamic* PP Flashlight; // 0x19d0(0x08)
	struct UMaterialInstanceDynamic* PP_SlasherBlood; // 0x19d8(0x08)
	float DOF Focus Point; // 0x19e0(0x04)
	char pad_19E4[0x4]; // 0x19e4(0x04)
	struct UMaterialInstanceDynamic* PP_LungeAttack; // 0x19e8(0x08)
	struct FName CameraSocketName; // 0x19f0(0x0c)
	bool IsSnowmanActive?; // 0x19fc(0x01)

	void GetTrapPlacementLocation_World(struct FVector& World Location); // Function BP_Slasher_Character.BP_Slasher_Character_C.GetTrapPlacementLocation_World // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	void GetSlasherAudioComponent(struct UAkComponent*& Audio Component); // Function BP_Slasher_Character.BP_Slasher_Character_C.GetSlasherAudioComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void IsTrapPlacementValid(bool& Result); // Function BP_Slasher_Character.BP_Slasher_Character_C.IsTrapPlacementValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetAudioSwitchSubKillerState(struct FString switchState); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetAudioSwitchSubKillerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Initialize Blinding FX Component(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Initialize Blinding FX Component // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayAudioKillerGameStart(); // Function BP_Slasher_Character.BP_Slasher_Character_C.PlayAudioKillerGameStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CreateSlasherBloodPP(); // Function BP_Slasher_Character.BP_Slasher_Character_C.CreateSlasherBloodPP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void IsActivePhaseWalking(bool& Result); // Function BP_Slasher_Character.BP_Slasher_Character_C.IsActivePhaseWalking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldShowBlackVignette(bool& Show); // Function BP_Slasher_Character.BP_Slasher_Character_C.ShouldShowBlackVignette // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void IsPassivePhaseWalking(bool& Result); // Function BP_Slasher_Character.BP_Slasher_Character_C.IsPassivePhaseWalking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	bool LocallyObservedCharacterIsShowingFakeKillerStain(); // Function BP_Slasher_Character.BP_Slasher_Character_C.LocallyObservedCharacterIsShowingFakeKillerStain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	struct UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh(); // Function BP_Slasher_Character.BP_Slasher_Character_C.GetCustomizedSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	struct FVector GetPlayerDropOffPoint(); // Function BP_Slasher_Character.BP_Slasher_Character_C.GetPlayerDropOffPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	bool IsCloaking(); // Function BP_Slasher_Character.BP_Slasher_Character_C.IsCloaking // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void GetCurrentStalkTier(float& currentTier); // Function BP_Slasher_Character.BP_Slasher_Character_C.GetCurrentStalkTier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void UpdateStalkModeEffect(float StalkModePercent); // Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateStalkModeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetDetectionZones(enum class EAttackZoneSet Attack Zones); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetDetectionZones // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void isFirstPerson(bool& First Person); // Function BP_Slasher_Character.BP_Slasher_Character_C.isFirstPerson // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	bool IsUncloaking(); // Function BP_Slasher_Character.BP_Slasher_Character_C.IsUncloaking // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void SetMacheteCustomDepth(); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetMacheteCustomDepth // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ResetMaterials(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ResetMaterials // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ApplyFirstPersonShaders(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ApplyFirstPersonShaders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UserConstructionScript(); // Function BP_Slasher_Character.BP_Slasher_Character_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Timeline_1__FinishedFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_1__UpdateFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Bloodlust Timeline__FinishedFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Bloodlust Timeline__UpdateFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_LungeAttack__FinishedFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_LungeAttack__UpdateFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__FinishedFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_0__UpdateFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void BloodSplatterOpacityAnim__FinishedFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void BloodSplatterOpacityAnim__UpdateFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void BloodSplatterFrameAnim__FinishedFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void BloodSplatterFrameAnim__UpdateFunc(); // Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Start Travelling PP(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling PP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Travelling Dissolve(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling Dissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Travelling Dissolve(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling Dissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Pounce VFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Start Pounce VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Pounce VFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Pounce VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Start Saliva VFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Start Saliva VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Saliva VFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Saliva VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Stop Travelling PP(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling PP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePounceStateVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePounceStateVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Switch Kanobo To Demon Mode(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo To Demon Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Switch Kanobo to Normal Mode(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo to Normal Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Hide Oni Katana(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Show Oni Katana(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Show Oni Katana // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Destroy Blood Orb(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Destroy Blood Orb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Switch Oni Weapons To Normal(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Oni Weapons To Normal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowDemonCosmetic(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ShowDemonCosmetic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideDemonCosmetic(); // Function BP_Slasher_Character.BP_Slasher_Character_C.HideDemonCosmetic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DisableDemonMode(); // Function BP_Slasher_Character.BP_Slasher_Character_C.DisableDemonMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Hide Oni Katana_TPV(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana_TPV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowGunBullet(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ShowGunBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideGunBullet(); // Function BP_Slasher_Character.BP_Slasher_Character_C.HideGunBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnFakeBullet(); // Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFakeBullet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateSacrificeCamBlood(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateSacrificeCamBlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StartDeathBedDissolve(); // Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DeactivateKnockoutVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.DeactivateKnockoutVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateKnockoutVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateKnockoutVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnFullScreenBlood(); // Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFullScreenBlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StartDeathBedRelocateVignette(); // Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedRelocateVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateAttemptEscapeVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateAttemptEscapeVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ShowSyringe(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ShowSyringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideSyringe(); // Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimateLiquidSyringe(); // Function BP_Slasher_Character.BP_Slasher_Character_C.AnimateLiquidSyringe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateVignetteOnWallCollision(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateVignetteOnWallCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideSyringeOnStun(); // Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringeOnStun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_SpawnWipeVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_SpawnWipeVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightDormantMain(bool IsDormantMain?); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormantMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightDormant(bool IsDormant?); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightMissJump(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_DormantAttachedSlasher(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DormantAttachedSlasher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_JumpTrail_Activate(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_JumpTrail_Deactivate(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_ReleaseBrother(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_ReleaseBrother // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_MembraneRecovery(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneRecovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_MembraneDelete(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneDelete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_BabyBloodDissolve(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyBloodDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_BabyRespawn(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_Jump_Active(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Active // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_Jump_Inactive(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Inactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void On Execution(); // Function BP_Slasher_Character.BP_Slasher_Character_C.On Execution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_WrongLanding(bool Wrong Landing); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_AttachedToSurvivor_VFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_AttachedToSurvivor_VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_DetachedFromSurvivor_VFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DetachedFromSurvivor_VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_WrongLandingVignette(bool WrongLanding); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLandingVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_GetToxinVignette(enum class EBombType Bomb Type); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetToxinVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_GetAntidoteVignette(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetAntidoteVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_AntidoteEnd(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_AntidoteBegin(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteBegin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_BombSmokeColor(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_BombSmokeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_RemoveVignette(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_RemoveVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K12_Killer_PlaceVignette(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_PlaceVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_QuickDissolveBrother(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_QuickDissolveBrother // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Camper_AntidoteBoostVignette_Start(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Camper_AntidoteBoostVignette_End(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_BrotherDissolveLocker(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BrotherDissolveLocker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_HighlightMissJump_Stop(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump_Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_CamperHitByKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K22_IsAttachedLocker(bool IsAttachedLocker); // Function BP_Slasher_Character.BP_Slasher_Character_C.K22_IsAttachedLocker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_ShowKnifeLT(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeLT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_ShowKnifeRT(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_ShowBat(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowBat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_HideBat(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideBat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_HideKnifeRT(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_HideKnifeLT(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeLT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AddBloodDrippingGKMoriMale(); // Function BP_Slasher_Character.BP_Slasher_Character_C.AddBloodDrippingGKMoriMale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReturnOniToNormal(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnOniToNormal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Survivor_BoonRadius_Enter(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Enter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Survivor_BoonRadius_Exit(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Boon_Unbound(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Boon_Unbound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature(struct UFlashlightComponent* Flashlight); // Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature(struct UFlashlightComponent* Flashlight); // Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void ActivatePlayerGlitchVFX(struct UMaterialInstanceDynamic*& GlitchFX, bool Face, bool Madness, bool killer); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerGlitchVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePlayerLightningVFX(struct UMaterialInstanceDynamic*& LightningFX, bool intense); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerLightningVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit); // Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(enum class EAudioCustomizationCategory category, struct FString switchState); // Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void SetHighlightedVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetHighlightedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetPlayerExposedVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetPlayerExposedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateLocalPlayerExposedVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateLocalPlayerExposedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Dissolve(bool Dissolve); // Function BP_Slasher_Character.BP_Slasher_Character_C.Dissolve // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivatePlayerExposedVFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerExposedVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Telekinesis On(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis On // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Telekinesis Off(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis Off // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_StunnedByPallet(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_StunnedByPallet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void NurseInvisible On(); // Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible On // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void NurseInvisible Off(); // Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible Off // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_SetTrap(); // Function BP_Slasher_Character.BP_Slasher_Character_C.FX_SetTrap // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_TrapImpact(); // Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_TrapImpact Off(); // Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact Off // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_BloodDrops(); // Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_Hide_LTKnife(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_LTKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UpdateRageTierEffect(int32_t previousTier, int32_t currentTier); // Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateRageTierEffect // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void FX_BloodDropWipe(); // Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDropWipe // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_WI_BloodDrops(); // Function BP_Slasher_Character.BP_Slasher_Character_C.FX_WI_BloodDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateEndGameVignette(bool IsActive); // Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateEndGameVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_Hide_RTKnife(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_RTKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateBlackVignetteVisibility(); // Function BP_Slasher_Character.BP_Slasher_Character_C.EvaluateBlackVignetteVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnStealthChanged(bool stealth); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnStealthChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void K23_Show_LTKnife(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_LTKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReturnToDemonMode(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnToDemonMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayBloodHitsEffects(); // Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodHitsEffects // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PostProcessBloodFX(); // Function BP_Slasher_Character.BP_Slasher_Character_C.PostProcessBloodFX // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_Show_RTKnife(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_RTKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_Exit_SuperMode(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Exit_SuperMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_BloodDrops(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K05_BloodDrops // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_TrapImpactOff(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpactOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_TrapImpact(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K05_SetTrap(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K05_SetTrap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_InvisibleOff(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_InvisibleOn(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_TelekinesisOff(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K04_TelekinesisOn(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K23_Enter_SuperMode(); // Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Enter_SuperMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Killer_LungeAttack_Start(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Killer_LungeAttack_End(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EventK23Camper(); // Function BP_Slasher_Character.BP_Slasher_Character_C.EventK23Camper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StopBloodSplatter(); // Function BP_Slasher_Character.BP_Slasher_Character_C.StopBloodSplatter // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void PlayBloodSplatter(); // Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodSplatter // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Slasher_Character.BP_Slasher_Character_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDestroyed_Event_Machete_Copy(struct AActor* DestroyedActor); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnDestroyed_Event_Machete_Copy // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnClientRestart(); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnClientRestart // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnEscapeDoorActivated(); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnEscapeDoorActivated // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnFirecrackerInRangeBegin(struct FFirecrackerEffectData& effectData); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnFirecrackerInRangeBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLocallyObservedChanged(); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnLocallyObservedChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetAttackDetectionZoneSet(enum class EAttackZoneSet attackZoneSet); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetAttackDetectionZoneSet // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetAnimationCrouchState(bool crouched); // Function BP_Slasher_Character.BP_Slasher_Character_C.SetAnimationCrouchState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DisplayAttackZones(bool Display); // Function BP_Slasher_Character.BP_Slasher_Character_C.DisplayAttackZones // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void MergeLockOnDamageZones(bool enable); // Function BP_Slasher_Character.BP_Slasher_Character_C.MergeLockOnDamageZones // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnLevelReadyToPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPickUpEnd(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnPickUpEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDropCamperEnd(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnDropCamperEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature(); // Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature(); // Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature // (BlueprintEvent) // @ game+0x5e02c90
	void OnIntroCompleted(); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompleted // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void UpdateDOF(); // Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateDOF // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCancelCarry(); // Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnCancelCarry // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnIsKillingSurvivorWithMoriUpdated(bool isKillingSurvivorWithMori); // Function BP_Slasher_Character.BP_Slasher_Character_C.OnIsKillingSurvivorWithMoriUpdated // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Slasher_Character(int32_t EntryPoint); // Function BP_Slasher_Character.BP_Slasher_Character_C.ExecuteUbergraph_BP_Slasher_Character // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

