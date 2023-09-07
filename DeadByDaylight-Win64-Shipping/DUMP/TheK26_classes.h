// Class TheK26.AISkill_Interaction_DismissCrow
// Size: 0x190 (Inherited: 0x190)
struct UAISkill_Interaction_DismissCrow : UAISkill_Interaction {
};

// Class TheK26.CorrectiveAction
// Size: 0x420 (Inherited: 0x3c8)
struct UCorrectiveAction : UPerk {
	float _startingTokens[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _correctiveActionStatusEffectClass; // 0x3d8(0x08)
	struct FGameplayTagContainer _allowedInteractionSemanticsForToken; // 0x3e0(0x20)
	char pad_400[0x20]; // 0x400(0x20)
};

// Class TheK26.HexPentimento
// Size: 0x4b8 (Inherited: 0x448)
struct UHexPentimento : UHexPerk {
	struct TSet<struct FName> _statusEffectNames; // 0x448(0x50)
	struct URekindleTotemInteraction* _rekindleInteractionClass; // 0x498(0x08)
	struct TArray<struct ATotem*> _blockedTotems; // 0x4a0(0x10)
	char pad_4B0[0x8]; // 0x4b0(0x08)
};

// Class TheK26.HinderOnCrowAttachStatusEffect
// Size: 0x470 (Inherited: 0x3b8)
struct UHinderOnCrowAttachStatusEffect : UBaseLingeringStatusEffect {
	struct FGameplayTag _onCrowAttachStateTag; // 0x3b8(0x0c)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FTunableStat _hinderOnIdleLingerTime; // 0x3c8(0x80)
	char pad_448[0x28]; // 0x448(0x28)

	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK26.HinderOnCrowAttachStatusEffect.OnKillerSet // (Final|Native|Public) // @ game+0x5819f40
};

// Class TheK26.HinderOnIdleAndAttachStatusEffect
// Size: 0x428 (Inherited: 0x3f0)
struct UHinderOnIdleAndAttachStatusEffect : ULingeringStateTagStatusEffect {
	struct FGameplayTag _onCrowAttachStateTag; // 0x3f0(0x0c)
	char pad_3FC[0x2c]; // 0x3fc(0x2c)
};

// Class TheK26.K26AbilitySubAnimInstance
// Size: 0x5f0 (Inherited: 0x560)
struct UK26AbilitySubAnimInstance : UBaseKillerAnimInstance {
	float _fireInteractionCooldownTime; // 0x558(0x04)
	struct FTunableStat _fireInteractionCooldownTimeTunable; // 0x560(0x80)
	bool _hasChargingStarted; // 0x5e0(0x01)
	bool _hasProjectileBeenSummoned; // 0x5e1(0x01)
	bool _hasChargingEnded; // 0x5e2(0x01)
	bool _hasProjectileFired; // 0x5e3(0x01)
	char pad_5E8[0x8]; // 0x5e8(0x08)

	void OnHasProjectileFired(); // Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileFired // (Final|Native|Public) // @ game+0x5819e30
	void OnHasProjectileBeenSummoned(int32_t remainingAmmo, int32_t maxAmmo); // Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileBeenSummoned // (Final|Native|Public) // @ game+0x5819d60
	void ConsumeHasProjectileFired(); // Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileFired // (Final|Native|Public|BlueprintCallable) // @ game+0x5819710
	void ConsumeHasProjectileBeenSummoned(); // Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileBeenSummoned // (Final|Native|Public|BlueprintCallable) // @ game+0x58196f0
};

// Class TheK26.K26AimingGuide
// Size: 0x230 (Inherited: 0x230)
struct AK26AimingGuide : AActor {
};

// Class TheK26.K26AmmoHandlerComponent
// Size: 0x450 (Inherited: 0xb8)
struct UK26AmmoHandlerComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnCurrentAmmoStateChanged; // 0xc8(0x10)
	struct FTagStateBool _isAmmoOnCooldown; // 0xd8(0x30)
	struct FMulticastInlineDelegate _onMaxAmmoSet; // 0x108(0x10)
	float _rechargeEndTime; // 0x118(0x04)
	bool _isTunableInit; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct AActor* _projectileClass; // 0x120(0x08)
	struct FTunableStat _expirationCooldownTime; // 0x128(0x80)
	struct TArray<struct FDBDTunableRowHandle> _firedCooldownTimesPerCrow; // 0x1a8(0x10)
	struct FTunableStat _cooldownReductionPerCrowFired; // 0x1b8(0x80)
	struct FTunableStat _expirationTime; // 0x238(0x80)
	struct FDBDTunableRowHandle _expirationWarningBufferTime; // 0x2b8(0x28)
	struct FTunableStat _maxAmmo; // 0x2e0(0x80)
	int32_t _currentAmmo; // 0x360(0x04)
	enum class EK26AmmoCooldownReason _lastCooldownReason; // 0x364(0x01)
	enum class EK26AmmoState _currentAmmoState; // 0x365(0x01)
	char pad_366[0x2]; // 0x366(0x02)
	struct UK26PathHandlerComponent* _pathHandler; // 0x368(0x08)
	struct UK26PowerStatusHandlerComponent* _statusHandler; // 0x370(0x08)
	struct UAuthoritativeActorPoolComponent* _authoritativeActorPoolComponent; // 0x378(0x08)
	struct FTagStateBool _isOutOfAmmo; // 0x380(0x30)
	float _fallbackFireCooldown; // 0x3b0(0x04)
	char pad_3B4[0x9c]; // 0x3b4(0x9c)

	void SetDependencies(struct UK26PathHandlerComponent* pathHandler, struct UK26PowerStatusHandlerComponent* statusHandler, struct UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent); // Function TheK26.K26AmmoHandlerComponent.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x581a310
	void SendHasExpiredDelegate(); // Function TheK26.K26AmmoHandlerComponent.SendHasExpiredDelegate // (Final|Native|Private) // @ game+0x581a220
	void OnMaxAmmoSetDelegate__DelegateSignature(int32_t maxAmmo); // DelegateFunction TheK26.K26AmmoHandlerComponent.OnMaxAmmoSetDelegate__DelegateSignature // (Public|Delegate) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function TheK26.K26AmmoHandlerComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x581a110
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK26.K26AmmoHandlerComponent.OnKillerSet // (Final|Native|Private) // @ game+0x5819fd0
	void Multicast_StartRecharging(enum class EK26AmmoCooldownReason lastCooldownReason); // Function TheK26.K26AmmoHandlerComponent.Multicast_StartRecharging // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54c82d0
	void Multicast_StartExpiring(); // Function TheK26.K26AmmoHandlerComponent.Multicast_StartExpiring // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ae0
	void Multicast_OnCurrentAmmoStateChanged(enum class EK26AmmoState NewState, int32_t currentAmmo, int32_t maxAmmo); // Function TheK26.K26AmmoHandlerComponent.Multicast_OnCurrentAmmoStateChanged // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5819aa0
	void Multicast_OnAmmoHasBeenFired(); // Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoHasBeenFired // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa7040
	void Multicast_OnAmmoExpired(); // Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoExpired // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	int32_t GetMaxAmmo(); // Function TheK26.K26AmmoHandlerComponent.GetMaxAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58197f0
	enum class EK26AmmoCooldownReason GetCurrentCooldownReason(); // Function TheK26.K26AmmoHandlerComponent.GetCurrentCooldownReason // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5819790
	enum class EK26AmmoState GetCurrentAmmoState(); // Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmoState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5819760
	int32_t GetCurrentAmmo(); // Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5819730
	void Cosmetic_OnExpiringWarning(); // Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnExpiringWarning // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAmmoHasBeenFired(); // Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoHasBeenFired // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAmmoExpired(); // Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoExpired // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void CallOnMaxAmmoSet(struct FDelegate Callback); // Function TheK26.K26AmmoHandlerComponent.CallOnMaxAmmoSet // (Final|Native|Public|BlueprintCallable) // @ game+0x58195b0
	void Authority_OnAmmoInit(struct AActor* initAmmo); // Function TheK26.K26AmmoHandlerComponent.Authority_OnAmmoInit // (Final|Native|Private) // @ game+0x5818650
	void Authority_InitializePoolComponent(int32_t maxAmmo); // Function TheK26.K26AmmoHandlerComponent.Authority_InitializePoolComponent // (Final|Native|Private) // @ game+0x58185c0
};

// Class TheK26.K26AnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UK26AnimInstance : UKillerAnimInstance {
	bool _isUsingPower; // 0x610(0x01)
	char pad_611[0xf]; // 0x611(0x0f)
};

// Class TheK26.K26AttachedCrow
// Size: 0x3f0 (Inherited: 0x230)
struct AK26AttachedCrow : AActor {
	char pad_230[0x40]; // 0x230(0x40)
	struct FTunableStat _lingerTime; // 0x270(0x80)
	struct FDBDTunableRowHandle _infectionDelay; // 0x2f0(0x28)
	struct FDBDTunableRowHandle _infectRadius; // 0x318(0x28)
	struct UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x340(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x348(0x08)
	struct UStaticMeshComponent* _visualStaticMeshComponent; // 0x350(0x08)
	struct USceneComponent* _rootComponent; // 0x358(0x08)
	struct UK26PowerStatusHandlerComponent* _statusHandler; // 0x360(0x08)
	bool _authority_isInfecting; // 0x368(0x01)
	struct FK26AttachmentStatus _attachmentStatus; // 0x369(0x02)
	char pad_36B[0x85]; // 0x36b(0x85)

	void OnRep_AttachmentStatus(); // Function TheK26.K26AttachedCrow.OnRep_AttachmentStatus // (Final|Native|Private) // @ game+0x581a130
	void Multicast_OnStopDetaching(); // Function TheK26.K26AttachedCrow.Multicast_OnStopDetaching // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54ac490
	void Multicast_OnStartDetaching(); // Function TheK26.K26AttachedCrow.Multicast_OnStartDetaching // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5819bb0
	void HideOutline(); // Function TheK26.K26AttachedCrow.HideOutline // (Final|Native|Private) // @ game+0x5819820
	void Cosmetic_OnStopDetaching(); // Function TheK26.K26AttachedCrow.Cosmetic_OnStopDetaching // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartDetaching(); // Function TheK26.K26AttachedCrow.Cosmetic_OnStartDetaching // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCrowAttached(); // Function TheK26.K26AttachedCrow.Cosmetic_OnCrowAttached // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAuraShown(); // Function TheK26.K26AttachedCrow.Cosmetic_OnAuraShown // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAuraHidden(); // Function TheK26.K26AttachedCrow.Cosmetic_OnAuraHidden // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnAttachedCrowRemoved(enum class FK26AttachedCrowRemovalReason removalReason); // Function TheK26.K26AttachedCrow.Cosmetic_OnAttachedCrowRemoved // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSurvivorWasUnhooked(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK26.K26AttachedCrow.Authority_OnSurvivorWasUnhooked // (Final|Native|Private|HasOutParms) // @ game+0x58193d0
	void Authority_OnSurvivorStatusIndicatorSet(struct ACamperPlayer* Survivor, struct AK26AttachedCrow* attachedCrow); // Function TheK26.K26AttachedCrow.Authority_OnSurvivorStatusIndicatorSet // (Final|Native|Private) // @ game+0x58194e0
	void Authority_OnSurvivorExitLocker(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK26.K26AttachedCrow.Authority_OnSurvivorExitLocker // (Final|Native|Private|HasOutParms) // @ game+0x58193d0
	void Authority_OnSurvivorDroppedEnd(); // Function TheK26.K26AttachedCrow.Authority_OnSurvivorDroppedEnd // (Final|Native|Private) // @ game+0x5818d80
	void Authority_OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function TheK26.K26AttachedCrow.Authority_OnSurvivorAdded // (Final|Native|Private) // @ game+0x5819340
	void Authority_OnPlayerLeftGame(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK26.K26AttachedCrow.Authority_OnPlayerLeftGame // (Final|Native|Private|HasOutParms) // @ game+0x5818e90
	void Authority_OnOtherSurvivorPerkFlagsChanged(struct FGameplayTag GameplayTag, bool isAdded); // Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorPerkFlagsChanged // (Final|Native|Private) // @ game+0x5818da0
	void Authority_OnOtherSurvivorGuidedActionChanged(); // Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorGuidedActionChanged // (Final|Native|Private) // @ game+0x5818d80
	void Authority_OnOtherSurvivorDamageStateChanged(enum class ECamperDamageState before, enum class ECamperDamageState after); // Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorDamageStateChanged // (Final|Native|Private) // @ game+0x5818cb0
	void Authority_OnOtherAttachedCrowRemoved(); // Function TheK26.K26AttachedCrow.Authority_OnOtherAttachedCrowRemoved // (Final|Native|Private) // @ game+0x5818c90
	void Authority_OnKillerSet(struct ASlasherPlayer* killer); // Function TheK26.K26AttachedCrow.Authority_OnKillerSet // (Final|Native|Private) // @ game+0x5818c00
	void Authority_OnIsWithinOtherSurvivorRangeChanged(struct AActor* survivorActor, bool IsInRange); // Function TheK26.K26AttachedCrow.Authority_OnIsWithinOtherSurvivorRangeChanged // (Final|Native|Private) // @ game+0x5818b30
	void Authority_DeactivateInfection(); // Function TheK26.K26AttachedCrow.Authority_DeactivateInfection // (Final|Native|Private) // @ game+0x58185a0
	void Authority_ActivateInfection(); // Function TheK26.K26AttachedCrow.Authority_ActivateInfection // (Final|Native|Private) // @ game+0x5818580
};

// Class TheK26.K26CooldownInteractionDefinition
// Size: 0x6b0 (Inherited: 0x630)
struct UK26CooldownInteractionDefinition : UInteractionDefinition {
	struct FTunableStat _cooldownTime; // 0x630(0x80)

	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheK26.K26CooldownInteractionDefinition.OnKillerSet // (Final|Native|Protected) // @ game+0x581a060
};

// Class TheK26.K26CrowAttachmentSubAnimInstance
// Size: 0x560 (Inherited: 0x550)
struct UK26CrowAttachmentSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _hasCrowAttached; // 0x550(0x01)
	bool _isRemovingCrow; // 0x551(0x01)
	bool _isIdle; // 0x552(0x01)
	bool _isCrawling; // 0x553(0x01)
	bool _isDead; // 0x554(0x01)
	bool _isHooked; // 0x555(0x01)
	bool _isInsideCloset; // 0x556(0x01)
	bool _isInteracting; // 0x557(0x01)
	bool _isHoldingSmallItem; // 0x558(0x01)
	bool _isUsingAimItem; // 0x559(0x01)
	bool _isCrouched; // 0x55a(0x01)
	char pad_55B[0x5]; // 0x55b(0x05)
};

// Class TheK26.K26CrowPlacementValidatorComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UK26CrowPlacementValidatorComponent : UActorComponent {
	struct UObjectPlacementValidationWithRestrictionStrategy* _objectPlacementValidationStrategyWithRestrictions; // 0xb8(0x08)
};

// Class TheK26.K26CrowProjectile
// Size: 0x708 (Inherited: 0x230)
struct AK26CrowProjectile : AActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct FMulticastInlineDelegate OnCrowProjectileStateChanged; // 0x240(0x10)
	struct FVector _originalFireLocation; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TMap<enum class EK26ProjectileState, struct FK26ProjectileStateDetails> _projectileStateDetails; // 0x260(0x50)
	struct FDBDTunableRowHandle _summonTime; // 0x2b0(0x28)
	struct FTunableStat _detectionRadiusScaleX; // 0x2d8(0x80)
	struct FTunableStat _detectionRadiusScaleY; // 0x358(0x80)
	struct FTunableStat _detectionRadiusScaleZ; // 0x3d8(0x80)
	struct FDBDTunableRowHandle _crowFireAuraVisibilityForSurvivorsTime; // 0x458(0x28)
	struct FDBDTunableRowHandle _crowSummonAuraVisibilityForSurvivorsTime; // 0x480(0x28)
	struct FDBDTunableRowHandle _detectionRadiusFromAbove; // 0x4a8(0x28)
	struct FDBDTunableRowHandle _baseSpeed; // 0x4d0(0x28)
	struct FDBDTunableRowHandle _selfDestructTimeOnDestroyed; // 0x4f8(0x28)
	struct FDBDTunableRowHandle _rangeToTriggerNearSurvivorSFX; // 0x520(0x28)
	struct UCurveFloat* _onPathMovementSpeedModifierCurve; // 0x548(0x08)
	struct UCurveFloat* _offPathMovementSpeedModifierCurve; // 0x550(0x08)
	float _projectileOffPathCurveDuration; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct TArray<struct FVector> _path; // 0x560(0x10)
	int32_t _pooledPathIndex; // 0x570(0x04)
	enum class EK26ProjectileState _currentProjectileState; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	struct UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x578(0x08)
	struct UK26PowerOutlineUpdateStrategy* _crowFlockOutlineUpdateStrategy; // 0x580(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x588(0x08)
	struct USplineComponent* _pathSplineComponent; // 0x590(0x08)
	struct UStaticMeshComponent* _collisionStaticMeshComponent; // 0x598(0x08)
	struct UStaticMeshComponent* _killerInstinctStaticMeshComponent; // 0x5a0(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _visualSkeletalMeshComponent; // 0x5a8(0x08)
	struct USceneComponent* _rootComponent; // 0x5b0(0x08)
	struct UDBDNavModifierComponent* _dangerNavModifierComponent; // 0x5b8(0x08)
	struct FMulticastInlineDelegate _k26ProjectileStateChangeDelegate; // 0x5c0(0x10)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x5d0(0x10)
	char pad_5E0[0x10]; // 0x5e0(0x10)
	struct TArray<struct ALocker*> _lockersWithSurvivorsInitiallyOnKillerInstinctRadius; // 0x5f0(0x10)
	struct FVector _forwardDirection; // 0x600(0x0c)
	float _fireTime; // 0x60c(0x04)
	float _currentDistanceAlongSpline; // 0x610(0x04)
	float _offPathTime; // 0x614(0x04)
	struct UK26PowerStatusHandlerComponent* _statusHandlerComponent; // 0x618(0x08)
	struct UK26AmmoHandlerComponent* _ammoHandlerComponent; // 0x620(0x08)
	struct UK26PathHandlerComponent* _pathHandlerComponent; // 0x628(0x08)
	char pad_630[0xd8]; // 0x630(0xd8)

	void Server_OnSurvivorHit(enum class EK26ProjectileState stateOnHit, struct ACamperPlayer* hitSurvivor); // Function TheK26.K26CrowProjectile.Server_OnSurvivorHit // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x581a240
	void ProjectileWentOutOfBoundsEvent(); // Function TheK26.K26CrowProjectile.ProjectileWentOutOfBoundsEvent // (Native|Event|Protected|BlueprintEvent) // @ game+0x581a200
	void OnSurvivorAdded(struct ACamperPlayer* survivorAdded); // Function TheK26.K26CrowProjectile.OnSurvivorAdded // (Final|Native|Protected) // @ game+0x581a170
	void OnRep_Path(); // Function TheK26.K26CrowProjectile.OnRep_Path // (Final|Native|Private) // @ game+0x581a150
	void OnLevelReadyToPlay(); // Function TheK26.K26CrowProjectile.OnLevelReadyToPlay // (Final|Native|Protected) // @ game+0x581a0f0
	void OnIsWithinSurvivorRangeChanged(struct AActor* survivorActor, bool IsInRange); // Function TheK26.K26CrowProjectile.OnIsWithinSurvivorRangeChanged // (Final|Native|Protected) // @ game+0x5819e70
	void OnIntroCompleted(); // Function TheK26.K26CrowProjectile.OnIntroCompleted // (Final|Native|Protected) // @ game+0x5819e50
	void Multicast_SetState(enum class EK26ProjectileState NewState, int32_t pooledPathIndex); // Function TheK26.K26CrowProjectile.Multicast_SetState // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5819c90
	void Multicast_SetStartingPosition(struct FVector position, struct FRotator Angle); // Function TheK26.K26CrowProjectile.Multicast_SetStartingPosition // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x5819bd0
	void Multicast_OnExpiration(); // Function TheK26.K26CrowProjectile.Multicast_OnExpiration // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55cddb0
	void Local_OnSummonComplete(); // Function TheK26.K26CrowProjectile.Local_OnSummonComplete // (Final|Native|Private) // @ game+0x5819a80
	void Local_OnCollisionOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, struct FHitResult& SweepResult); // Function TheK26.K26CrowProjectile.Local_OnCollisionOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x5819860
	bool IsHitboxBeingShown(); // Function TheK26.K26CrowProjectile.IsHitboxBeingShown // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3eb2f20
	void HideOutlineFromSurvivor(); // Function TheK26.K26CrowProjectile.HideOutlineFromSurvivor // (Final|Native|Private) // @ game+0x5819840
	float GetDistanceFromFirePosition(); // Function TheK26.K26CrowProjectile.GetDistanceFromFirePosition // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58197c0
	void Cosmetic_OnExpiration(); // Function TheK26.K26CrowProjectile.Cosmetic_OnExpiration // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(struct ACamperPlayer* Survivor); // Function TheK26.K26CrowProjectile.Cosmetic_OnEnteredNearAudioRangeOfSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Client_LocalKillerStartSummonTimer(float killerLocalSummonTime); // Function TheK26.K26CrowProjectile.Client_LocalKillerStartSummonTimer // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x5819660
	void Authority_OnSummonComplete(); // Function TheK26.K26CrowProjectile.Authority_OnSummonComplete // (Final|Native|Private) // @ game+0x5819320
	void Authority_OnScoutingOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK26.K26CrowProjectile.Authority_OnScoutingOverlapEnd // (Final|Native|Private) // @ game+0x58191c0
	void Authority_OnScoutingOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, struct FHitResult& SweepResult); // Function TheK26.K26CrowProjectile.Authority_OnScoutingOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x5818fa0
	void Authority_OnDestroyTimerExpired(); // Function TheK26.K26CrowProjectile.Authority_OnDestroyTimerExpired // (Final|Native|Private) // @ game+0x5818b10
	void Authority_OnDestroyAttempt(struct TArray<struct AActor*>& instigatorsForCompletion); // Function TheK26.K26CrowProjectile.Authority_OnDestroyAttempt // (Final|Native|Private|HasOutParms) // @ game+0x5818a60
	void Authority_OnCollisionOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapEnd // (Final|Native|Private) // @ game+0x5818900
	void Authority_OnCollisionOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, struct FHitResult& SweepResult); // Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x58186e0
};

// Class TheK26.K26CrowProjectileAnimInstance
// Size: 0x300 (Inherited: 0x2c0)
struct UK26CrowProjectileAnimInstance : UAnimInstance {
	bool _isInInvalidState; // 0x2c0(0x01)
	bool _isInSummonState; // 0x2c1(0x01)
	bool _isInIdleState; // 0x2c2(0x01)
	bool _isInFollowPathState; // 0x2c3(0x01)
	bool _isInOffPathState; // 0x2c4(0x01)
	bool _isInDestroyedState; // 0x2c5(0x01)
	bool _isBeingFlashlighted; // 0x2c6(0x01)
	char pad_2C7[0x1]; // 0x2c7(0x01)
	float _flashlightProgress; // 0x2c8(0x04)
	char pad_2CC[0x24]; // 0x2cc(0x24)
	struct AK26CrowProjectile* _owningCrowProjectile; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)
};

// Class TheK26.K26CrowProjectilePlacementValidationStrategy
// Size: 0xc0 (Inherited: 0xa0)
struct UK26CrowProjectilePlacementValidationStrategy : URestrictedPlacementAreaStrategy {
	char pad_A0[0x18]; // 0xa0(0x18)
	struct UK26AmmoHandlerComponent* _ammoHandler; // 0xb8(0x08)
};

// Class TheK26.K26DismissCrowChargeableInteractionDefinition
// Size: 0x7f0 (Inherited: 0x760)
struct UK26DismissCrowChargeableInteractionDefinition : UChargeableInteractionDefinition {
	struct FTunableStat _chargeTime; // 0x758(0x80)
	struct UK26PowerStatusHandlerComponent* _k26PowerStatusHandlerComponent; // 0x7d8(0x08)
	bool _isLevelReadyToPlay; // 0x7e0(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)

	void OnLevelReadyToPlay(); // Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnLevelReadyToPlay // (Final|Native|Protected) // @ game+0x581e050
	void OnKillerSet(struct ASlasherPlayer* killer, struct UChargeableComponent* ChargeableComponent); // Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnKillerSet // (Final|Native|Private) // @ game+0x581df00
	void OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnDamageStateChanged // (Final|Native|Protected) // @ game+0x581de10
};

// Class TheK26.K26FireCrowProjectileInteractionDefinition
// Size: 0x660 (Inherited: 0x630)
struct UK26FireCrowProjectileInteractionDefinition : UInteractionDefinition {
	struct FMulticastInlineDelegate OnProjectileFired; // 0x630(0x10)
	struct UK26CooldownInteractionDefinition* _cooldownInteraction; // 0x640(0x08)
	struct UK26AmmoHandlerComponent* _ammoHandler; // 0x648(0x08)
	struct UK26PathHandlerComponent* _pathHandler; // 0x650(0x08)
	char pad_658[0x8]; // 0x658(0x08)

	void SetDependencies(struct UK26AmmoHandlerComponent* ammoHandler, struct UK26PathHandlerComponent* pathHandler, struct UK26CooldownInteractionDefinition* cooldownInteraction); // Function TheK26.K26FireCrowProjectileInteractionDefinition.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x581e160
	void Server_RequestFireOnAmmo(struct ASlasherPlayer* killer); // Function TheK26.K26FireCrowProjectileInteractionDefinition.Server_RequestFireOnAmmo // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4d5aa80
	void Multicast_OnProjectileFired(struct ASlasherPlayer* killer); // Function TheK26.K26FireCrowProjectileInteractionDefinition.Multicast_OnProjectileFired // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56660b0
};

// Class TheK26.K26IsLastCrowRemovalReasonDueToInteraction
// Size: 0x100 (Inherited: 0xe8)
struct UK26IsLastCrowRemovalReasonDueToInteraction : UEventDrivenModifierCondition {
	struct AK26AttachedCrow* _owningAttachedCrow; // 0xe8(0x08)
	struct UK26PowerStatusHandlerComponent* _statusHandlerComponent; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)

	void OnSurvivorStatusIndicatorSet(struct AK26AttachedCrow* attachedCrow); // Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnSurvivorStatusIndicatorSet // (Final|Native|Private) // @ game+0x581e0d0
	void OnRep_OwningAttachedCrow(); // Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnRep_OwningAttachedCrow // (Final|Native|Private) // @ game+0x581e0b0
	void OnLastRemovalReasonSet(enum class FK26AttachedCrowRemovalReason lastCrowRemovalReason); // Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnLastRemovalReasonSet // (Final|Native|Private) // @ game+0x581dfd0
	void Authority_OnSurvivorStatusIndicatorSet(struct ACamperPlayer* Survivor, struct AK26AttachedCrow* attachedCrow); // Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnSurvivorStatusIndicatorSet // (Final|Native|Private) // @ game+0x581d9d0
	void Authority_OnKillerSet(struct ASlasherPlayer* killer); // Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnKillerSet // (Final|Native|Private) // @ game+0x581d770
};

// Class TheK26.K26IsSurvivorInRangeOfAnyIdleCrow
// Size: 0x118 (Inherited: 0xe8)
struct UK26IsSurvivorInRangeOfAnyIdleCrow : UEventDrivenModifierCondition {
	struct FMulticastInlineDelegate OnIsTrueChanged; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct ACamperPlayer* _trackedSurvivor; // 0x100(0x08)
	char pad_108[0x10]; // 0x108(0x10)

	void Multicast_SetIsTrue(bool IsTrue); // Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Multicast_SetIsTrue // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x581dd80
	void Authority_SetVariables(struct ACamperPlayer* trackedSurvivor, struct UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent, float Range); // Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_SetVariables // (Final|Native|Public|BlueprintCallable) // @ game+0x581daa0
	void Authority_OnInRangeChanged(bool inRange); // Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x581d630
	void Authority_OnCrowProjectileStateChanged(struct AK26CrowProjectile* crowProjectile); // Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowProjectileStateChanged // (Final|Native|Private) // @ game+0x581d5a0
	void Authority_OnCrowAddedToPool(struct AActor* crowProjectileActor); // Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowAddedToPool // (Final|Native|Private) // @ game+0x581d510
};

// Class TheK26.K26KillerInstinctStatusEffect
// Size: 0x3e0 (Inherited: 0x350)
struct UK26KillerInstinctStatusEffect : UStatusEffect {
	struct FTunableStat _lingerDuration; // 0x350(0x80)
	struct UInteractionDefinition* _openExitGateInteractionClass; // 0x3d0(0x08)
	bool _hasInitializedLingerDuration; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
};

// Class TheK26.K26OnCrowAttachLingeringStatusEffectBase
// Size: 0x3b0 (Inherited: 0x350)
struct UK26OnCrowAttachLingeringStatusEffectBase : UStatusEffect {
	struct FGameplayTag _onCrowAttachStateTag; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FDBDTunableRowHandle _lingerTime; // 0x360(0x28)
	char pad_388[0x28]; // 0x388(0x28)

	float GetLingerTime(); // Function TheK26.K26OnCrowAttachLingeringStatusEffectBase.GetLingerTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x581dbc0
};

// Class TheK26.K26P01
// Size: 0x440 (Inherited: 0x3c8)
struct UK26P01 : UPerk {
	float _generatorBlockDuration[0x3]; // 0x3c8(0x0c)
	float _auraRevealDuration; // 0x3d4(0x04)
	struct FLinearColor _generatorAuraColorForKiller; // 0x3d8(0x10)
	int32_t _survivorsToBeHooked; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UStatusEffect* _timedRevealToKillerClass; // 0x3f0(0x08)
	struct TArray<struct AGenerator*> _blockedGenerators; // 0x3f8(0x10)
	struct TArray<struct AActor*> _hookedSurvivors; // 0x408(0x10)
	struct TArray<struct FFastTimer> _generatorBlockingTimers; // 0x418(0x10)
	struct UStatusEffect* _timedRevealToKillerEffect; // 0x428(0x08)
	char pad_430[0x10]; // 0x430(0x10)

	void OnRep_BlockedGenerators(); // Function TheK26.K26P01.OnRep_BlockedGenerators // (Final|Native|Private) // @ game+0x581e090
	void Authority_OnBlockTimerDone(struct AGenerator* Generator); // Function TheK26.K26P01.Authority_OnBlockTimerDone // (Final|Native|Private) // @ game+0x581d480
};

// Class TheK26.K26P02
// Size: 0x438 (Inherited: 0x3c8)
struct UK26P02 : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	float _generatorRegressPercentage[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct TSet<struct ACamperPlayer*> _hookedPlayers; // 0x3e0(0x50)
	char pad_430[0x8]; // 0x430(0x08)

	float GetGeneratorRegressPercentageAtLevel(); // Function TheK26.K26P02.GetGeneratorRegressPercentageAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
	void Authority_OnSurvivorHookedOnScourgeHook(struct FGameEventData& GameEventData); // Function TheK26.K26P02.Authority_OnSurvivorHookedOnScourgeHook // (Final|Native|Private|HasOutParms) // @ game+0x581d920
};

// Class TheK26.K26PathHandlerComponent
// Size: 0x230 (Inherited: 0xb8)
struct UK26PathHandlerComponent : UActorComponent {
	struct FDBDTunableRowHandle _maxPathDistance; // 0xb8(0x28)
	struct FDBDTunableRowHandle _survivorPathVisibilityTimeOnFire; // 0xe0(0x28)
	struct FDBDTunableRowHandle _defaultProjectileDistanceFromFloor; // 0x108(0x28)
	struct FDBDTunableRowHandle _maxPathIterations; // 0x130(0x28)
	struct FDBDTunableRowHandle _maxGroundSearchingDistance; // 0x158(0x28)
	struct AActor* _visualPathPart; // 0x180(0x08)
	struct AActor* _visualPathEndArrow; // 0x188(0x08)
	struct FDBDTunableRowHandle _projectileSummonDistance; // 0x190(0x28)
	struct UK26AmmoHandlerComponent* _ammoHandler; // 0x1b8(0x08)
	struct UK26CrowPlacementValidatorComponent* _placementValidator; // 0x1c0(0x08)
	struct TArray<struct FK26PathData> _availablePathData; // 0x1c8(0x10)
	struct TArray<struct FK26Path> _availablePaths; // 0x1d8(0x10)
	char pad_1E8[0x48]; // 0x1e8(0x48)

	void SetDependencies(struct UK26AmmoHandlerComponent* ammoHandler, struct UK26CrowPlacementValidatorComponent* placementValidator); // Function TheK26.K26PathHandlerComponent.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x581e270
	void OnRep_AvailablePathData(); // Function TheK26.K26PathHandlerComponent.OnRep_AvailablePathData // (Final|Native|Private) // @ game+0x581e070
	void OnIterativeAvailablePathUpdate(); // Function TheK26.K26PathHandlerComponent.OnIterativeAvailablePathUpdate // (Final|Native|Private) // @ game+0x581dee0
	void Multicast_FillAvailablePathArray(int32_t maxAmmo); // Function TheK26.K26PathHandlerComponent.Multicast_FillAvailablePathArray // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x553b520
	void Authority_OnMaxAmmoSet(int32_t maxAmmo); // Function TheK26.K26PathHandlerComponent.Authority_OnMaxAmmoSet // (Final|Native|Private) // @ game+0x581d800
};

// Class TheK26.K26PathPart
// Size: 0x268 (Inherited: 0x230)
struct AK26PathPart : AActor {
	struct UStaticMeshComponent* _mesh; // 0x230(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x238(0x08)
	struct UNiagaraComponent* _visualEffectKiller; // 0x240(0x08)
	struct UNiagaraComponent* _visualEffectSurvivor; // 0x248(0x08)
	struct UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x250(0x08)
	struct USceneComponent* _rootComponent; // 0x258(0x08)
	bool _isVisibleForSurvivor; // 0x260(0x01)
	bool _isVisibleForKiller; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)
};

// Class TheK26.K26PowerChargePresentationItemProgressComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UK26PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UK26AmmoHandlerComponent* _ammoHandler; // 0xc0(0x08)

	void SetDependencies(struct UK26AmmoHandlerComponent* ammoHandler); // Function TheK26.K26PowerChargePresentationItemProgressComponent.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x549c400
};

// Class TheK26.K26PowerChargePresentationPowerFadeComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UK26PowerChargePresentationPowerFadeComponent : UPresentationPowerFadeComponent {
	struct UK26AmmoHandlerComponent* _ammoHandler; // 0xb8(0x08)

	void SetDependencies(struct UK26AmmoHandlerComponent* ammoHandler); // Function TheK26.K26PowerChargePresentationPowerFadeComponent.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x5482800
};

// Class TheK26.K26PowerOutlineUpdateStrategy
// Size: 0xd8 (Inherited: 0xc0)
struct UK26PowerOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _k26ProjectileOutlineColour; // 0xc0(0x10)
	bool _isOutlineEnabled; // 0xd0(0x01)
	bool _isOnlyVisibleForKiller; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)

	void SetOutlineVisibility(bool IsActive); // Function TheK26.K26PowerOutlineUpdateStrategy.SetOutlineVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x555c790
	bool IsOutlineVisible(); // Function TheK26.K26PowerOutlineUpdateStrategy.IsOutlineVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x581dbf0
};

// Class TheK26.K26PowerStatusHandlerComponent
// Size: 0x190 (Inherited: 0xb8)
struct UK26PowerStatusHandlerComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct TArray<struct UInteractionDefinition*> _interactionsDuringWhichTheCrowIsIgnored; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FDBDTunableRowHandle _invincibilityTime; // 0xf0(0x28)
	struct FDBDTunableRowHandle _killerInstinctDelay; // 0x118(0x28)
	struct FDBDTunableRowHandle _killerInstinctGracePeriod; // 0x140(0x28)
	struct AActor* _statusIndicatorClass; // 0x168(0x08)
	struct FName _k26KillerInstinctStatusEffectName; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FK26SurvivorStatus> _survivorStatusList; // 0x180(0x10)

	void Multicast_OnStopRemovingCrow(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStopRemovingCrow // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5490b20
	void Multicast_OnStartRemovingCrow(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStartRemovingCrow // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x566baf0
	void Multicast_OnIdleCrowInterrupt(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnIdleCrowInterrupt // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55700e0
	void Multicast_OnCrowDetached(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDetached // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54ad7f0
	void Multicast_OnCrowDamagedSurvivor(struct ASlasherPlayer* killer, struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDamagedSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x581dcb0
	void Multicast_OnCrowAttached(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowAttached // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x581dc20
	void Cosmetic_OnCrowIdleInterrupt(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowIdleInterrupt // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCrowDamagedSurvivor(struct ASlasherPlayer* killer, struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowDamagedSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Authority_OnSurvivorAdded // (Final|Native|Private) // @ game+0x581d890
	void Authority_OnKillerInstinctTimePassed(struct ACamperPlayer* Survivor); // Function TheK26.K26PowerStatusHandlerComponent.Authority_OnKillerInstinctTimePassed // (Final|Native|Private) // @ game+0x581d6e0
	void Authority_OnIntroCompleted(); // Function TheK26.K26PowerStatusHandlerComponent.Authority_OnIntroCompleted // (Final|Native|Private) // @ game+0x581d6c0
};

// Class TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition
// Size: 0x970 (Inherited: 0x760)
struct UK26SpawnCrowProjectileChargeableInteractionDefinition : UChargeableInteractionDefinition {
	struct FMulticastInlineDelegate OnChargingStarted; // 0x758(0x10)
	struct FMulticastInlineDelegate OnChargingStopped; // 0x768(0x10)
	struct FMulticastInlineDelegate OnProjectileSummoned; // 0x778(0x10)
	struct FDBDTunableRowHandle _chargeCooldownTime; // 0x788(0x28)
	struct FDBDTunableRowHandle _summonCooldownTime; // 0x7b0(0x28)
	struct FDBDTunableRowHandle _pathLength; // 0x7d8(0x28)
	struct FDBDTunableRowHandle _projectileHeight; // 0x800(0x28)
	struct FDBDTunableRowHandle _projectileSummonDistance; // 0x828(0x28)
	struct FDBDTunableRowHandle _cooldownGracePeriodPercentage; // 0x850(0x28)
	struct FDBDTunableRowHandle _globalSpawnCooldownTime; // 0x878(0x28)
	struct FDBDTunableRowHandle _pathDistanceCheckAttempts; // 0x8a0(0x28)
	struct AK26AimingGuide* _aimingGuideClass; // 0x8c8(0x08)
	struct AK26AimingGuide* _local_aimingGuide; // 0x8d0(0x08)
	bool _isConfirmButtonPressed; // 0x8d8(0x01)
	struct UK26AmmoHandlerComponent* _ammoHandler; // 0x8e0(0x08)
	struct UK26PathHandlerComponent* _pathHandler; // 0x8e8(0x08)
	struct UK26PowerStatusHandlerComponent* _statusHandler; // 0x8f0(0x08)
	bool _firedFullyChargedEvent; // 0x8f8(0x01)
	bool _isWaitingForSummonAcknowledgement; // 0x8f9(0x01)
	char pad_8FB[0x5]; // 0x8fb(0x05)
	struct UCurveFloat* _globalCooldownMovementSpeedCurve; // 0x900(0x08)
	char pad_908[0x68]; // 0x908(0x68)

	void SetSummonCooldown(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetSummonCooldown // (Final|Native|Protected|BlueprintCallable) // @ game+0x581f7d0
	void SetDependencies(struct UK26AmmoHandlerComponent* ammoHandler, struct UK26PathHandlerComponent* pathHandler, struct UK26PowerStatusHandlerComponent* statusHandler); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetDependencies // (Final|Native|Public|BlueprintCallable) // @ game+0x581f6c0
	void Server_PlaceProjectileWithPath(struct ASlasherPlayer* killer, struct FVector projectileSpawnPoint, float killerLocalTime); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Server_PlaceProjectileWithPath // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults) // @ game+0x581f5a0
	void OnSummonCooldownComplete(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnSummonCooldownComplete // (Final|Native|Private) // @ game+0x581f580
	void OnConfirmButtonPressed(struct ASlasherPlayer* killer); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnConfirmButtonPressed // (Final|Native|Private) // @ game+0x581f420
	void Multicast_OnK26CrowSummoned(struct ASlasherPlayer* killer, int32_t remainingAmmo, int32_t maxAmmo); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummoned // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x581f320
	void Multicast_OnK26CrowSummonAttemptAcknowledged(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummonAttemptAcknowledged // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x581f300
	void Local_OnGlobalCooldownDone(struct ADBDPlayer* Player); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Local_OnGlobalCooldownDone // (Final|Native|Private) // @ game+0x581f270
	bool IsSummonOnCooldown(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.IsSummonOnCooldown // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x581f240
	void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFullyCharged(struct ADBDPlayer* Player); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnFullyCharged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_LocalOnSummonCooldownComplete(int32_t amountOfAmmoLeft, bool isInteractionActive); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_LocalOnSummonCooldownComplete // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool CanSummonCrowOnceFullyCharged(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrowOnceFullyCharged // (Final|Native|Protected|BlueprintCallable) // @ game+0x581f210
	bool CanSummonCrow(); // Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrow // (Final|Native|Protected|BlueprintCallable) // @ game+0x581f1e0
};

// Class TheK26.Overcome
// Size: 0x3f8 (Inherited: 0x3c8)
struct UOvercome : UPerk {
	float _exhaustionDuration[0x3]; // 0x3c8(0x0c)
	float _injuredModifiedMovementSpeedBurstDurationWindow; // 0x3d4(0x04)
	struct UActivatableExhaustedEffect* _exhaustedEffectToImpose; // 0x3d8(0x08)
	struct UStatusEffect* _injuredModifiedMovementSpeedBurstStatusEffectToImpose; // 0x3e0(0x08)
	struct UActivatableExhaustedEffect* _exhaustedEffect; // 0x3e8(0x08)
	struct UStatusEffect* _injuredModifiedMovementSpeedBurstStatusEffect; // 0x3f0(0x08)

	float GetExhaustionDurationAtLevel(); // Function TheK26.Overcome.GetExhaustionDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK26.RekindledTotem
// Size: 0x278 (Inherited: 0x240)
struct ARekindledTotem : AStaticMeshActor {
	struct FLinearColor _auraColor; // 0x240(0x10)
	struct USourceBasedOutlineUpdateStrategy* _outlineStrategy; // 0x250(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x258(0x08)
	char pad_260[0x18]; // 0x260(0x18)

	void RebuildTotem(struct ATotem* Totem); // Function TheK26.RekindledTotem.RebuildTotem // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnParentTotemEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function TheK26.RekindledTotem.OnParentTotemEndPlay // (Final|Native|Private) // @ game+0x581f4b0
	void Cosmetic_ShowShadowTotem(bool instant); // Function TheK26.RekindledTotem.Cosmetic_ShowShadowTotem // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_HideShadowTotem(bool instant); // Function TheK26.RekindledTotem.Cosmetic_HideShadowTotem // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void CleanseTotem(struct ATotem* Totem, enum class ETotemState oldTotemState); // Function TheK26.RekindledTotem.CleanseTotem // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK26.RekindleTotemInteraction
// Size: 0x650 (Inherited: 0x630)
struct URekindleTotemInteraction : UInteractionDefinition {
	float _slasherFacingTolerance; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct ARekindledTotem* _rekindledTotemClass; // 0x638(0x08)
	struct ARekindledTotem* _rekindledTotem; // 0x640(0x08)
	char pad_648[0x8]; // 0x648(0x08)
};

// Class TheK26.S29P03
// Size: 0x490 (Inherited: 0x480)
struct US29P03 : UBoonPerk {
	float _recoverSpeedPercentage[0x3]; // 0x480(0x0c)
	char pad_48C[0x4]; // 0x48c(0x04)
};

