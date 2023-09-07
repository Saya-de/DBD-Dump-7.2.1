// Class TheOni.AbsorbBloodOrbsInteraction
// Size: 0x680 (Inherited: 0x630)
struct UAbsorbBloodOrbsInteraction : UInteractionDefinition {
	char pad_630[0x50]; // 0x630(0x50)

	void SetPlayerOwner(struct ADBDPlayer* Player); // Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x5a07550
};

// Class TheOni.AISkill_FindOrb
// Size: 0x188 (Inherited: 0x180)
struct UAISkill_FindOrb : UAISkill_Find {
	char pad_180[0x8]; // 0x180(0x08)
};

// Class TheOni.AISkill_Interaction_OrbAbsorb
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_OrbAbsorb : UAISkill_Interaction {
};

// Class TheOni.AISkill_InteractionTarget_DashOni
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_DashOni : UAISkill_InteractionTarget_Dash {
};

// Class TheOni.AISkill_InteractionTarget_DemonMode
// Size: 0x240 (Inherited: 0x240)
struct UAISkill_InteractionTarget_DemonMode : UAISkill_InteractionTarget {
};

// Class TheOni.BloodOrb
// Size: 0x290 (Inherited: 0x230)
struct ABloodOrb : AActor {
	struct FFloatInterval _randomMoveDelayInterval; // 0x230(0x08)
	struct USceneComponent* _absorbReference; // 0x238(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x240(0x08)
	float _despawnDelay; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TWeakObjectPtr<struct ADBDPlayer> _droppingPlayer; // 0x250(0x08)
	enum class EBloodOrbState _state; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UBloodOrbFadeComponent* _fadeComponent; // 0x260(0x08)
	char pad_268[0x28]; // 0x268(0x28)

	void UpdateAttracted_Cosmetic(struct FVector Destination, struct ADBDPlayer* absorber, float DeltaTime); // Function TheOni.BloodOrb.UpdateAttracted_Cosmetic // (BlueprintCosmetic|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void UpdateAbsorbed_Cosmetic(struct FVector Destination, struct ADBDPlayer* absorber, float DeltaTime); // Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic // (BlueprintCosmetic|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_State(enum class EBloodOrbState oldState); // Function TheOni.BloodOrb.OnRep_State // (Final|Native|Private) // @ game+0x5a07320
	void OnIsAttractedChangedCosmetic(bool isAttracted); // Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDestroyedCosmetic(); // Function TheOni.BloodOrb.OnDestroyedCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnAbsorbedCosmetic(); // Function TheOni.BloodOrb.OnAbsorbedCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	struct ADBDPlayer* GetDroppingPlayer(); // Function TheOni.BloodOrb.GetDroppingPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06d90
	void Authority_OnDropped(struct ADBDPlayer* droppedBy, float ImpulseFactor); // Function TheOni.BloodOrb.Authority_OnDropped // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnDropFinished(); // Function TheOni.BloodOrb.Authority_OnDropFinished // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5a06780
	void Authority_DestroyBloodOrb(); // Function TheOni.BloodOrb.Authority_DestroyBloodOrb // (Final|Native|Private) // @ game+0x5a05d00
	void Authority_Despawn(); // Function TheOni.BloodOrb.Authority_Despawn // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5a05ce0
};

// Class TheOni.BloodOrbAbsorberComponent
// Size: 0x110 (Inherited: 0xb8)
struct UBloodOrbAbsorberComponent : UActorComponent {
	struct FMulticastInlineDelegate Authority_OnBloodOrbAbsorbed; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnIsAbsorbingChanged; // 0xc8(0x10)
	struct FVector AbsorbLocationOffset; // 0xd8(0x0c)
	char pad_E4[0x1c]; // 0xe4(0x1c)
	struct TArray<struct UBloodOrbDropperComponent*> _camperBloodOrbDropperComponents; // 0x100(0x10)

	void SetInAbsorbMode(bool inAbsorptionMode); // Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5a073a0
	bool IsInAbsorbMode(); // Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06e00
};

// Class TheOni.BloodOrbCollection
// Size: 0x100 (Inherited: 0xb8)
struct UBloodOrbCollection : UActorComponent {
	struct TArray<struct ABloodOrb*> _bloodOrbs; // 0xb8(0x10)
	char pad_C8[0x38]; // 0xc8(0x38)
};

// Class TheOni.BloodOrbConfiguratorComponent
// Size: 0x128 (Inherited: 0xb8)
struct UBloodOrbConfiguratorComponent : UActorComponent {
	struct ABloodOrb* _bloodOrbClass; // 0xb8(0x08)
	struct TArray<struct FGameEventBloodOrbDropParams> _bloodOrbDropGameEvents; // 0xc0(0x10)
	float _fadeDuration; // 0xd0(0x04)
	float _initialFadeOutDelay; // 0xd4(0x04)
	struct FLinearColor _bloodOrbAuraColor; // 0xd8(0x10)
	struct FLinearColor _bloodOrbAttractedAuraColor; // 0xe8(0x10)
	float _bloodOrbVisibilityRangeInterpolationSpeed; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct AMobileBloodOrbRenderer* _mobileBloodOrbRendererClass; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)

	void UpdateSurvivorBloodOrbVisibilityRange(struct UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, struct ADBDPlayer* killer); // Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange // (Final|Native|Private|Const) // @ game+0x5a07b00
	void UpdateKillerBloodOrbVisiblityRanges(struct UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, struct ADBDPlayer* killer); // Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges // (Final|Native|Private|Const) // @ game+0x5a07a30
	void UpdateBloodOrbAttractSpeed(struct UBloodOrbAbsorberComponent* BloodOrbAbsorberComponent, struct ADBDPlayer* killer); // Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed // (Final|Native|Private|Const) // @ game+0x5a07960
	void OnLevelReadyToPlay(); // Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a071d0
	void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(struct ADBDPlayer* killer); // Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier // (Final|Native|Private|Const) // @ game+0x5a06b20
};

// Class TheOni.BloodOrbDropperComponent
// Size: 0x138 (Inherited: 0xb8)
struct UBloodOrbDropperComponent : UActorComponent {
	char pad_B8[0x80]; // 0xb8(0x80)

	void DBD_DropBloodOrbs(int32_t numOrbs); // Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs // (Final|Exec|Native|Private|Const) // @ game+0x46a25e0
	void Authority_SetPaused(bool paused); // Function TheOni.BloodOrbDropperComponent.Authority_SetPaused // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5a06a90
	void Authority_OnOwningCamperDamageStateChanged(enum class ECamperDamageState oldState, enum class ECamperDamageState NewState); // Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged // (Final|Native|Private) // @ game+0x5a06930
	void Authority_OnDropOrbsGameEvent(struct FGameplayTag GameEvent, struct FGameEventData& GameEventData, struct FBloodOrbDropParams dropParams); // Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent // (Final|Native|Private|HasOutParms|Const) // @ game+0x5a067a0
	void Authority_OnCamperUnhooked(struct FGameplayTag GameEvent, struct FGameEventData& GameEventData); // Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked // (Final|Native|Private|HasOutParms) // @ game+0x5a06560
	void Authority_OnCamperHooked(struct FGameplayTag GameEvent, struct FGameEventData& GameEventData); // Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked // (Final|Native|Private|HasOutParms|Const) // @ game+0x5a06450
	void Authority_OnCamperCrouched(struct FGameplayTag GameEvent, struct FGameEventData& GameEventData); // Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched // (Final|Native|Private|HasOutParms) // @ game+0x5a06340
};

// Class TheOni.BloodOrbFadeComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UBloodOrbFadeComponent : UFadeComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class TheOni.BloodOrbOverlapComponent
// Size: 0xf8 (Inherited: 0xb8)
struct UBloodOrbOverlapComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	int32_t _currentOverlappingOrbs; // 0xc0(0x04)
	char pad_C4[0x34]; // 0xc4(0x34)

	void OnRep_CurrentOverlappingOrbs(int32_t previousOverlappingOrbs); // Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs // (Final|Native|Private) // @ game+0x5a07290
	void Authority_OnDestroyedBloodOrb(struct AActor* DestroyedActor); // Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb // (Final|Native|Private) // @ game+0x5a066f0
	void Authority_OnBloodOrbVisibilityModeChanged(enum class EBloodOrbVisibilityMode visibilityMode); // Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged // (Final|Native|Private) // @ game+0x5a062c0
	void Authority_OnBloodOrbEndOverlap(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap // (Final|Native|Private) // @ game+0x5a06090
	void Authority_OnBloodOrbBeginOverlap(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x5a05e70
};

// Class TheOni.BloodOrbOverlapRevealToKiller
// Size: 0x378 (Inherited: 0x350)
struct UBloodOrbOverlapRevealToKiller : UStatusEffect {
	char pad_350[0x28]; // 0x350(0x28)
};

// Class TheOni.BloodOrbStateMonitorComponent
// Size: 0x128 (Inherited: 0xb8)
struct UBloodOrbStateMonitorComponent : UActorComponent {
	struct FMulticastInlineDelegate OnBloodOrbAbsorbedCosmetic; // 0xb8(0x10)
	char pad_C8[0x60]; // 0xc8(0x60)

	void OnBloodOrbStateChanged(enum class EBloodOrbState oldState, enum class EBloodOrbState NewState, struct ABloodOrb* BloodOrb); // Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged // (Final|Native|Private|Const) // @ game+0x5a07010
	void OnBloodOrbSpawned(struct ABloodOrb* BloodOrb); // Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned // (Final|Native|Private) // @ game+0x5a06ef0
	void OnBloodOrbDestroyed(struct ABloodOrb* BloodOrb); // Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed // (Final|Native|Private) // @ game+0x5a06e60
};

// Class TheOni.BloodOrbUtilities
// Size: 0x30 (Inherited: 0x30)
struct UBloodOrbUtilities : UBlueprintFunctionLibrary {

	struct TArray<struct ABloodOrb*> GetAllBloodOrbs(struct UObject* WorldContextObject); // Function TheOni.BloodOrbUtilities.GetAllBloodOrbs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5a06be0
};

// Class TheOni.BloodOrbVisibilityComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UBloodOrbVisibilityComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)

	void SetVisibilityRange(float visibilityRange); // Function TheOni.BloodOrbVisibilityComponent.SetVisibilityRange // (Final|Native|Public|BlueprintCallable) // @ game+0x4d52150
	void SetVisibilityMode(enum class EBloodOrbVisibilityMode visibilityMode); // Function TheOni.BloodOrbVisibilityComponent.SetVisibilityMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5a07820
	void SetShowAttractedBloodOrbsAuras(bool Show); // Function TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras // (Final|Native|Public|BlueprintCallable) // @ game+0x5a07790
	void SetAuraVisibilityRange(float auraVisibilityRange); // Function TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange // (Final|Native|Public|BlueprintCallable) // @ game+0x4d521d0
	void OnBloodOrbSpawned(struct ABloodOrb* BloodOrb); // Function TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned // (Final|Native|Private|Const) // @ game+0x5a06f80
};

// Class TheOni.DemonModeComponent
// Size: 0x208 (Inherited: 0xb8)
struct UDemonModeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnDemonModeReady; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnDemonModeStarted; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnDemonModeEnded; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnDemonModeInterruptedDuringStartup; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnDemonModeInterruptedDuringEnding; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnChargeGainedAfterAttackCosmetic; // 0x108(0x10)
	struct FMulticastInlineDelegate OnChargeGainedAfterLockerGrabCosmetic; // 0x118(0x10)
	struct UPowerChargeComponent* _powerChargeComponent; // 0x128(0x08)
	struct UPowerToggleComponent* _powerToggleComponent; // 0x130(0x08)
	struct UInteractionStarterComponent* _authority_demonModeCooldownStarterComponent; // 0x138(0x08)
	struct UInteractionDefinition* _demonModeCooldownInteraction; // 0x140(0x08)
	char pad_148[0x34]; // 0x148(0x34)
	enum class EDemonModeState _demonModeState; // 0x17c(0x01)
	char pad_17D[0x5b]; // 0x17d(0x5b)
	struct TArray<struct USkeletalMeshComponent*> _normalModeCustomization; // 0x1d8(0x10)
	struct TArray<struct USkeletalMeshComponent*> _demonModeCustomization; // 0x1e8(0x10)
	struct TArray<struct UParticleSystemComponent*> _demonModeVfx; // 0x1f8(0x10)

	void ShowDemonModeCustomization(bool showDemonMode); // Function TheOni.DemonModeComponent.ShowDemonModeCustomization // (Final|Native|Public|BlueprintCallable) // @ game+0x5a078d0
	bool ShouldLoseDemonModeOnStun(); // Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a078a0
	void OnPowerChargeFull(); // Function TheOni.DemonModeComponent.OnPowerChargeFull // (Final|Native|Private|Const) // @ game+0x5a07270
	void OnPowerChargeEmpty(); // Function TheOni.DemonModeComponent.OnPowerChargeEmpty // (Final|Native|Private|Const) // @ game+0x5a07250
	void OnIsPowerChanged(bool IsInPower); // Function TheOni.DemonModeComponent.OnIsPowerChanged // (Final|Native|Private|Const) // @ game+0x5a07140
	void OnCustomizationChanged(); // Function TheOni.DemonModeComponent.OnCustomizationChanged // (Final|Native|Private) // @ game+0x5a07120
	void Multicast_DemonModeInterruptedOnStartup(); // Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa7040
	void Multicast_DemonModeInterruptedOnEnding(); // Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	bool IsInDemonMode(); // Function TheOni.DemonModeComponent.IsInDemonMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06e30
	struct TArray<struct USkeletalMeshComponent*> GetNormalModeCustomization(); // Function TheOni.DemonModeComponent.GetNormalModeCustomization // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06dc0
	enum class EDemonModeState GetDemonModeState(); // Function TheOni.DemonModeComponent.GetDemonModeState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06d60
	struct TArray<struct USkeletalMeshComponent*> GetDemonModeCustomization(); // Function TheOni.DemonModeComponent.GetDemonModeCustomization // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06d20
	float GetCurrentCharge(); // Function TheOni.DemonModeComponent.GetCurrentCharge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06cf0
	float GetChargePercent(); // Function TheOni.DemonModeComponent.GetChargePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06cc0
	void DBD_DemonModeForever(bool forever); // Function TheOni.DemonModeComponent.DBD_DemonModeForever // (Final|Exec|Native|Public) // @ game+0x46a2400
	bool CanStartDemonMode(); // Function TheOni.DemonModeComponent.CanStartDemonMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06bb0
	void Authority_SetDemonModeCooldownInteraction(struct UInteractionDefinition* Interaction); // Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5a06a00
	void Authority_OnLevelReadyToPlay(); // Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a06910
	void Authority_OnChargeChanged(float currentChargePercent); // Function TheOni.DemonModeComponent.Authority_OnChargeChanged // (Final|Native|Private) // @ game+0x5a06670
	void Authority_InterruptedMontage(struct FAnimationMontageDescriptor Montage, bool interrupted); // Function TheOni.DemonModeComponent.Authority_InterruptedMontage // (Final|Native|Private) // @ game+0x5a05d20
	void Authority_AddCharge(float ChargeAmount); // Function TheOni.DemonModeComponent.Authority_AddCharge // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5a05c60
};

// Class TheOni.DemonModeCooldownInteraction
// Size: 0x660 (Inherited: 0x630)
struct UDemonModeCooldownInteraction : UInteractionDefinition {
	char pad_630[0x30]; // 0x630(0x30)

	void SetPlayerOwner(struct ADBDPlayer* Owner); // Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x5a075e0
	void OnLevelReadyToPlay(); // Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a071f0
};

// Class TheOni.DemonModeMenuComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UDemonModeMenuComponent : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)

	void SetInMenuDemonMode(bool inMenuDemonMode); // Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5a07430
};

// Class TheOni.IsPlayerAbsorbingBloodOrbsCondition
// Size: 0x128 (Inherited: 0x128)
struct UIsPlayerAbsorbingBloodOrbsCondition : UIsPlayerPerformingInteraction {
};

// Class TheOni.MobileBloodOrbRenderer
// Size: 0x2c0 (Inherited: 0x230)
struct AMobileBloodOrbRenderer : AActor {
	struct UMaterialInstance* OrbMaterialInstance; // 0x230(0x08)
	struct UMaterialInstance* OutlineMaterialInstance; // 0x238(0x08)
	float CullInterval; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UInstancedStaticMeshComponent* _ismComponent; // 0x248(0x08)
	struct UInstancedStaticMeshComponent* _outlineIsmComponent; // 0x250(0x08)
	struct TMap<struct ABloodOrb*, struct FBloodOrbInfo> _instanceMap; // 0x258(0x50)
	struct UMaterialInstanceDynamic* _outlineMaterialInstanceDynamic; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* _orbMaterialInstanceDynamic; // 0x2b0(0x08)
	struct UBloodOrbVisibilityComponent* _bloodOrbVisibilityComponent; // 0x2b8(0x08)
};

// Class TheOni.OniAttackPicker
// Size: 0xd0 (Inherited: 0xb8)
struct UOniAttackPicker : USlasherAttackPickerComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheOni.OniBasicAttack
// Size: 0x3a0 (Inherited: 0x390)
struct UOniBasicAttack : UPounceAttack {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class TheOni.OniBasicAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UOniBasicAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheOni.OniCustomizationItemAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UOniCustomizationItemAnimInstance : UAnimInstance {
	bool _isInDemonMode; // 0x2c0(0x01)
	char pad_2C1[0x1f]; // 0x2c1(0x1f)

	void SetIsInDemonMode(bool IsInDemonMode); // Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode // (Final|Native|Private) // @ game+0x5a074c0
};

// Class TheOni.OniDashInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct UOniDashInteraction : UChargeableInteractionDefinition {
	struct UCurveFloat* _chargingSpeedCurve; // 0x758(0x08)
	struct UCurveFloat* _dashingSpeedCurve; // 0x760(0x08)
	float _yawAdjustTime; // 0x768(0x04)
	struct UCurveFloat* _cooldownSpeedCurve; // 0x770(0x08)
	char pad_77C[0x34]; // 0x77c(0x34)

	void SetPlayerOwner(struct ADBDPlayer* Player); // Function TheOni.OniDashInteraction.SetPlayerOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x5a07670
	void OnLevelReadyToPlay(); // Function TheOni.OniDashInteraction.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a07210
	void OnDashEnd(struct ADBDPlayer* Player); // Function TheOni.OniDashInteraction.OnDashEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDashBegin(struct ADBDPlayer* Player); // Function TheOni.OniDashInteraction.OnDashBegin // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnChargeEnd(struct ADBDPlayer* Player, bool chargeCompleted); // Function TheOni.OniDashInteraction.OnChargeEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnChargeBegin(struct ADBDPlayer* Player); // Function TheOni.OniDashInteraction.OnChargeBegin // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOni.OniDemonBasicAttack
// Size: 0x390 (Inherited: 0x390)
struct UOniDemonBasicAttack : UPounceAttack {
};

// Class TheOni.OniDemonPowerAttack
// Size: 0x3c0 (Inherited: 0x390)
struct UOniDemonPowerAttack : UPounceAttack {
	char pad_390[0x30]; // 0x390(0x30)
};

// Class TheOni.OniDemonDashAttack
// Size: 0x3c0 (Inherited: 0x3c0)
struct UOniDemonDashAttack : UOniDemonPowerAttack {
};

// Class TheOni.OniDemonPowerAttackOpenSubstate
// Size: 0x148 (Inherited: 0x130)
struct UOniDemonPowerAttackOpenSubstate : UPounceAttackOpenSubstate {
	char pad_130[0x18]; // 0x130(0x18)
};

// Class TheOni.OniDemonDashAttackOpenSubstate
// Size: 0x148 (Inherited: 0x148)
struct UOniDemonDashAttackOpenSubstate : UOniDemonPowerAttackOpenSubstate {
};

// Class TheOni.OniDemonPowerAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UOniDemonPowerAttackHittingSubstate : UPounceAttackHittingSubstate {
};

// Class TheOni.OniDemonPowerAttackSuccessSubstate
// Size: 0x148 (Inherited: 0x118)
struct UOniDemonPowerAttackSuccessSubstate : UPounceAttackSuccessSubstate {
	char pad_118[0x30]; // 0x118(0x30)
};

// Class TheOni.OniDemonPowerAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UOniDemonPowerAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheOni.OniDemonPowerAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UOniDemonPowerAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheOni.OniPounceInteraction
// Size: 0x780 (Inherited: 0x760)
struct UOniPounceInteraction : UChargeableInteractionDefinition {
	char pad_760[0x8]; // 0x760(0x08)
	struct UOniDemonModeAttackStateComponent* _chargedAttackState; // 0x768(0x08)
	struct UDemonModeComponent* _demonModeComponent; // 0x770(0x08)
	struct ASlasherPlayer* _owningSlasher; // 0x778(0x08)
};

// Class TheOni.RenjirosBloodyGlove
// Size: 0x368 (Inherited: 0x2b8)
struct URenjirosBloodyGlove : UItemAddon {
	char pad_2B8[0x8]; // 0x2b8(0x08)
	float _revealTime; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TMap<struct ACamperPlayer*, struct UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper; // 0x2c8(0x50)
	char pad_318[0x50]; // 0x318(0x50)

	void Authority_OnBloodOrbOverlapBegin(struct AActor* overlappingActor, struct ABloodOrb* BloodOrb); // Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin // (Final|Native|Private) // @ game+0x5a061f0
};

// Class TheOni.StartDemonModeInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct UStartDemonModeInteraction : UChargeableInteractionDefinition {
	float YawAdjustTime; // 0x758(0x04)
	struct FAnimationMontageDescriptor DemonModeActivationMontage; // 0x760(0x20)
	char pad_784[0x2c]; // 0x784(0x2c)

	void SetPlayerOwner(struct ADBDPlayer* Owner); // Function TheOni.StartDemonModeInteraction.SetPlayerOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x5a07700
	void OnLevelReadyToPlay(); // Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a07230
};

