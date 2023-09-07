// Class TheGunslinger.ChainPlayerMovementStatusEffect
// Size: 0x3a8 (Inherited: 0x350)
struct UChainPlayerMovementStatusEffect : UStatusEffect {
	struct FDBDTunableRowHandle _baseMovementSpeedMultiplier; // 0x350(0x28)
	struct FDBDTunableRowHandle _collisionMovementSpeedMultiplier; // 0x378(0x28)
	struct ARifleChain* _chain; // 0x3a0(0x08)

	void OnIsChainCollidingChanged(bool IsColliding); // Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged // (Final|Native|Private) // @ game+0x57332b0
};

// Class TheGunslinger.ChainKillerMovementStatusEffect
// Size: 0x418 (Inherited: 0x3a8)
struct UChainKillerMovementStatusEffect : UChainPlayerMovementStatusEffect {
	struct FDBDTunableRowHandle _backwardMovementSpeedMultiplier; // 0x3a8(0x28)
	struct FDBDTunableRowHandle _backwardMovementAngle; // 0x3d0(0x28)
	char pad_3F8[0x20]; // 0x3f8(0x20)
};

// Class TheGunslinger.ChainLinkableComponent
// Size: 0x198 (Inherited: 0xb8)
struct UChainLinkableComponent : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct UBaseCameraTargetingStrategy* _cameraTargetingStrategyClass; // 0xd8(0x08)
	struct FName _movementStatusEffectName; // 0xe0(0x0c)
	struct FName _linkedStatusEffectName; // 0xec(0x0c)
	struct UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy; // 0xf8(0x08)
	struct URiflePlayerLinker* _chainLink; // 0x100(0x08)
	char pad_108[0x30]; // 0x108(0x30)
	struct FTagStateBool _isLinkedLingering; // 0x138(0x30)
	struct UChainPlayerMovementStatusEffect* _movementStatusEffect; // 0x168(0x08)
	char pad_170[0x8]; // 0x170(0x08)
	struct UBaseCameraTargetingStrategy* _cameraStrategy; // 0x178(0x08)
	char pad_180[0x18]; // 0x180(0x18)
};

// Class TheGunslinger.DeadMansSwitch
// Size: 0x400 (Inherited: 0x3c8)
struct UDeadMansSwitch : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	float _activationDurationByLevels[0x3]; // 0x3d0(0x0c)
	bool _anySurvivorLetGo; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct TArray<struct AGenerator*> _blockedGenerators; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void OnRep_BlockedGenerators(); // Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators // (Final|Native|Private) // @ game+0x57334f0
	float GetActivationDurationAtLevel(); // Function TheGunslinger.DeadMansSwitch.GetActivationDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
};

// Class TheGunslinger.FireHarpoonRifleInteraction
// Size: 0xb30 (Inherited: 0x630)
struct UFireHarpoonRifleInteraction : UInteractionDefinition {
	struct FMulticastInlineDelegate OnFireHarpoon; // 0x630(0x10)
	struct FMulticastInlineDelegate OnHitPlayer; // 0x640(0x10)
	char pad_650[0x1]; // 0x650(0x01)
	enum class EFireHarpoonRifleAimingInteractionSubState _aimingSubState; // 0x651(0x01)
	char pad_652[0x6]; // 0x652(0x06)
	struct AHarpoonProjectile* _harpoon; // 0x658(0x08)
	struct ADBDPlayer* _collector; // 0x660(0x08)
	struct FDBDTunableRowHandle _aimDownSightDuration; // 0x668(0x28)
	struct FDBDTunableRowHandle _aimDownSightZoom; // 0x690(0x28)
	struct FDBDTunableRowHandle _aimDownSightMousePitchScaleMultiplier; // 0x6b8(0x28)
	struct FDBDTunableRowHandle _aimDownSightMouseYawScaleMultiplier; // 0x6e0(0x28)
	struct FDBDTunableRowHandle _aimDownSightGamepadPitchScaleMultiplier; // 0x708(0x28)
	struct FDBDTunableRowHandle _aimDownSightGamepadYawScaleMultiplier; // 0x730(0x28)
	struct UCurveFloat* _aimDownSightGamepadPitchCurve; // 0x758(0x08)
	struct UCurveFloat* _aimDownSightGamepadYawCurve; // 0x760(0x08)
	struct FDBDTunableRowHandle _aimDownSightRotationScaleAdjustmentTime; // 0x768(0x28)
	struct FTunableStat _aimDownSightMovementSpeedMultiplier; // 0x790(0x80)
	struct FDBDTunableRowHandle _fireDuration; // 0x810(0x28)
	struct FDBDTunableRowHandle _fireRotationScaleMultiplier; // 0x838(0x28)
	struct FDBDTunableRowHandle _fireRotationScaleAdjustmentTime; // 0x860(0x28)
	struct FDBDTunableRowHandle _fireMovementSpeedMultiplier; // 0x888(0x28)
	struct FDBDTunableRowHandle _longRangeShotMinDistance; // 0x8b0(0x28)
	char pad_8D8[0x8]; // 0x8d8(0x08)
	struct FDBDTunableRowHandle _successMovementSpeedMultiplier; // 0x8e0(0x28)
	struct FDBDTunableRowHandle _missMovementSpeedMultiplier; // 0x908(0x28)
	struct FTunableStat _missShotCooldownDuration; // 0x930(0x80)
	struct FDBDTunableRowHandle _nearMissShotMaxDistance; // 0x9b0(0x28)
	struct FDBDTunableRowHandle _successShotDuration; // 0x9d8(0x28)
	char pad_A00[0x130]; // 0xa00(0x130)

	void Server_SetAimingSubstate(enum class EFireHarpoonRifleAimingInteractionSubState NewState); // Function TheGunslinger.FireHarpoonRifleInteraction.Server_SetAimingSubstate // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x57338a0
	void Server_HandleMissShotScores(struct TArray<struct ADBDPlayer*> nearMissedPlayers); // Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x5733700
	void OnHitPlayer__DelegateSignature(); // DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnFireHarpoon__DelegateSignature(); // DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
};

// Class TheGunslinger.ForThePeople
// Size: 0x490 (Inherited: 0x3c8)
struct UForThePeople : UPerk {
	char pad_3C8[0x19]; // 0x3c8(0x19)
	bool _isHealStartedOnServer; // 0x3e1(0x01)
	char pad_3E2[0x2]; // 0x3e2(0x02)
	float _brokenEffectDurations[0x3]; // 0x3e4(0x0c)
	struct UStatusEffect* _forThePeopleBrokenEffect; // 0x3f0(0x08)
	struct UStatusEffect* _forThePeopleObsessionEffect; // 0x3f8(0x08)
	struct FSecondaryInteractionProperties _secondaryActionProperties; // 0x400(0x38)
	char pad_438[0x58]; // 0x438(0x58)

	void Server_OnActionInputPressed(); // Function TheGunslinger.ForThePeople.Server_OnActionInputPressed // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x57337c0
	void OnRep_SetIsHealStartedOnServer(); // Function TheGunslinger.ForThePeople.OnRep_SetIsHealStartedOnServer // (Final|Native|Private|Const) // @ game+0x57335c0
	void OnHealingAbilityUsed(struct ACamperPlayer* healingSurvivor, struct ACamperPlayer* healedSurvivor); // Function TheGunslinger.ForThePeople.OnHealingAbilityUsed // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_OnHealAbilityUsed(struct ACamperPlayer* healer, struct ACamperPlayer* healTarget, float amountHealed); // Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x57330d0
	float GetBrokenEffectDurationAtLevel(); // Function TheGunslinger.ForThePeople.GetBrokenEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd660
	void Client_OnActionInputPressedEnded(); // Function TheGunslinger.ForThePeople.Client_OnActionInputPressedEnded // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x55b2e70
};

// Class TheGunslinger.Gearhead
// Size: 0x3e8 (Inherited: 0x3c8)
struct UGearhead : UPerk {
	struct UStatusEffect* _timedRevealToKillerEffect; // 0x3c8(0x08)
	float _surviorAuraDurations[0x3]; // 0x3d0(0x0c)
	float _perkDuration; // 0x3dc(0x04)
	enum class ESkillCheckType _skillCheckType; // 0x3e0(0x01)
	bool _basicAttack; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)

	void Authority_OnCamperRemoved(struct ACamperPlayer* removedPlayer); // Function TheGunslinger.Gearhead.Authority_OnCamperRemoved // (Final|Native|Private) // @ game+0x5732ca0
	void Authority_OnCamperHealthStateChange(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function TheGunslinger.Gearhead.Authority_OnCamperHealthStateChange // (Final|Native|Private) // @ game+0x5732bd0
};

// Class TheGunslinger.GunslingerAnimInstance
// Size: 0x7f0 (Inherited: 0x610)
struct UGunslingerAnimInstance : UKillerAnimInstance {
	bool _isAiming; // 0x610(0x01)
	bool _isAimingWarmup; // 0x611(0x01)
	bool _isAimingCooldown; // 0x612(0x01)
	bool _isAimingReadyToShoot; // 0x613(0x01)
	bool _isFiring; // 0x614(0x01)
	bool _isInMissShotCooldown; // 0x615(0x01)
	bool _isInSuccessShot; // 0x616(0x01)
	bool _isLinked; // 0x617(0x01)
	bool _isReeling; // 0x618(0x01)
	bool _isInGunState; // 0x619(0x01)
	char pad_61A[0x2]; // 0x61a(0x02)
	float _idleToAimAnimPlayrate; // 0x61c(0x04)
	float _aimToIdleAnimPlayrate; // 0x620(0x04)
	float _fireAnimPlayRate; // 0x624(0x04)
	float _missShotCooldownAnimPlayRate; // 0x628(0x04)
	float _successShotAnimPlayRate; // 0x62c(0x04)
	struct UAnimSequence* _idleToAimAnim; // 0x630(0x08)
	struct UAnimSequence* _aimToIdleAnim; // 0x638(0x08)
	struct UAnimSequence* _fireAnim; // 0x640(0x08)
	struct UAnimSequence* _missShotCooldownAnim; // 0x648(0x08)
	struct UAnimSequence* _successShotAnim; // 0x650(0x08)
	struct FDBDTunableRowHandle _idleToAimAnimDuration; // 0x658(0x28)
	struct FDBDTunableRowHandle _aimToIdleAnimDuration; // 0x680(0x28)
	struct FDBDTunableRowHandle _fireAnimDuration; // 0x6a8(0x28)
	struct FTunableStat _missShotCooldownAnimDuration; // 0x6d0(0x80)
	struct FDBDTunableRowHandle _successShotAnimDuration; // 0x750(0x28)
	char pad_778[0x78]; // 0x778(0x78)
};

// Class TheGunslinger.GunslingerCameraTargetingStrategy
// Size: 0x68 (Inherited: 0x50)
struct UGunslingerCameraTargetingStrategy : UBaseCameraTargetingStrategy {
	struct FName _cameraSocketName; // 0x50(0x0c)
	struct FName _survivorHarpoonSocketName; // 0x5c(0x0c)
};

// Class TheGunslinger.GunslingerEffectsComponent
// Size: 0x158 (Inherited: 0xb8)
struct UGunslingerEffectsComponent : UActorComponent {
	struct FMulticastInlineDelegate OnIsAimingChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate PlayOutOfAmmoSound; // 0xc8(0x10)
	float _minimumTimeBetweenBroadcast; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AHarpoonRifle* _rifle; // 0xe0(0x08)
	char pad_E8[0x70]; // 0xe8(0x70)

	void PlayOutOfAmmoSound__DelegateSignature(); // DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnItemUsedStateChanged(bool IsPressed); // Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged // (Final|Native|Private) // @ game+0x5733340
	void OnIsAimingChanged__DelegateSignature(bool isAiming); // DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void Multicast_PlayOutOfAmmoSound(); // Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x4af1ac0
};

// Class TheGunslinger.GunslingerUtilities
// Size: 0x30 (Inherited: 0x30)
struct UGunslingerUtilities : UBlueprintFunctionLibrary {

	struct AHarpoonRifle* GetHarpoonRifle(struct ADBDPlayer* Player); // Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5732f10
};

// Class TheGunslinger.HarpoonChainPositioner
// Size: 0x140 (Inherited: 0xb8)
struct UHarpoonChainPositioner : UActorComponent {
	struct AHarpoonProp* _harpoonPropClass; // 0xb8(0x08)
	struct FName _survivorAttachSocket; // 0xc0(0x0c)
	struct FName _animationSocket; // 0xcc(0x0c)
	struct FDBDTunableRowHandle _reelBackToRifleSpeed; // 0xd8(0x28)
	float _harpoonMinimumSnapBackDistance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct AHarpoonProp* _harpoonProp; // 0x108(0x08)
	struct AHarpoonProjectile* _harpoonProjectile; // 0x110(0x08)
	struct ADBDPlayer* _collector; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)
	struct ARifleChain* _chain; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void OnOwnerCollected(struct ADBDPlayer* collector); // Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected // (Final|Native|Private) // @ game+0x5733460
	void OnHarpoonTravelingChanged(bool isTravelling); // Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnHarpoonLoadedOnRifle(); // Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnCurrentHarpoonChanged(struct AActor* currentHarpoon); // Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	struct AHarpoonProp* GetHarpoonProp(); // Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732ee0
	struct AActor* GetCurrentHarpoon(); // Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732e30
	void AttachToRifle(); // Function TheGunslinger.HarpoonChainPositioner.AttachToRifle // (Final|Native|Public|BlueprintCallable) // @ game+0x5732bb0
	void AttachToAnimSocket(); // Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket // (Final|Native|Public|BlueprintCallable) // @ game+0x5732b90
};

// Class TheGunslinger.HarpoonedSurvivorSubAnimInstance
// Size: 0x600 (Inherited: 0x550)
struct UHarpoonedSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	float _linkedMaxSpeed; // 0x550(0x04)
	float _timeBeforeHarpoonHitReset; // 0x554(0x04)
	struct FName _hitHarpoonedEnterEvent; // 0x558(0x0c)
	struct FName _chainBreakEnterEvent; // 0x564(0x0c)
	bool _isChainLinked; // 0x570(0x01)
	bool _isBeingReeled; // 0x571(0x01)
	bool _hasLinkInput; // 0x572(0x01)
	char pad_573[0x1]; // 0x573(0x01)
	float _linkInputX; // 0x574(0x04)
	float _linkInputY; // 0x578(0x04)
	bool _chainBreakTrigger; // 0x57c(0x01)
	bool _triggerHarpoonHit; // 0x57d(0x01)
	char pad_57E[0x2]; // 0x57e(0x02)
	float _harpoonHitTurnAnimNormalizedStartTime; // 0x580(0x04)
	bool _harpoonHitAnimTurnRight; // 0x584(0x01)
	bool _isCrawling; // 0x585(0x01)
	bool _isIdle; // 0x586(0x01)
	char pad_587[0x1]; // 0x587(0x01)
	float _walkAnimSpeed; // 0x588(0x04)
	float _yaw; // 0x58c(0x04)
	float _pitch; // 0x590(0x04)
	char pad_594[0x6c]; // 0x594(0x6c)
};

// Class TheGunslinger.HarpoonLauncher
// Size: 0x1d8 (Inherited: 0x180)
struct UHarpoonLauncher : UKillerProjectileLauncher {
	struct FDBDTunableRowHandle _launchSpeed; // 0x180(0x28)
	struct FDBDTunableRowHandle _launchDistanceFromCamera; // 0x1a8(0x28)
	float _launchZOffset; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// Class TheGunslinger.HarpoonProjectile
// Size: 0x408 (Inherited: 0x338)
struct AHarpoonProjectile : AKillerProjectile {
	char pad_338[0x78]; // 0x338(0x78)
	struct FDBDTunableRowHandle _launchDistanceFromCamera; // 0x3b0(0x28)
	struct UHarpoonProjectileMovementComponent* _movement; // 0x3d8(0x08)
	struct UPrimitiveComponent* _environmentCollider; // 0x3e0(0x08)
	struct UPrimitiveComponent* _targetCollider; // 0x3e8(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent; // 0x3f0(0x08)
	struct UPoolableActorComponent* _poolableActorComponent; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)

	void OnHarpoonStop(struct FHitResult& Result); // Function TheGunslinger.HarpoonProjectile.OnHarpoonStop // (Final|Native|Private|HasOutParms) // @ game+0x57331e0
};

// Class TheGunslinger.HarpoonProjectileMovementComponent
// Size: 0x290 (Inherited: 0x260)
struct UHarpoonProjectileMovementComponent : UPhysicsBasedProjectileMovementComponent {
	struct FDBDTunableRowHandle _maxTravelDistance; // 0x260(0x28)
	char pad_288[0x8]; // 0x288(0x08)
};

// Class TheGunslinger.HarpoonProp
// Size: 0x240 (Inherited: 0x230)
struct AHarpoonProp : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent; // 0x238(0x08)
};

// Class TheGunslinger.HarpoonProviderComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UHarpoonProviderComponent : USingleProjectileProviderComponent {
};

// Class TheGunslinger.HarpoonRifle
// Size: 0x588 (Inherited: 0x4c8)
struct AHarpoonRifle : ACollectable {
	char pad_4C8[0x18]; // 0x4c8(0x18)
	struct UChainLinkableComponent* _survivorLinkableClass; // 0x4e0(0x08)
	struct UChainLinkableComponent* _killerLinkableClass; // 0x4e8(0x08)
	struct ARifleChain* _chainClass; // 0x4f0(0x08)
	struct FName _rifleMuzzleSocket; // 0x4f8(0x0c)
	struct FName _rifleHarpoonLoadingSocket; // 0x504(0x0c)
	struct FDBDTunableRowHandle _crowActiveRange; // 0x510(0x28)
	struct UHarpoonLauncher* _launcher; // 0x538(0x08)
	struct UHarpoonProviderComponent* _harpoonProvider; // 0x540(0x08)
	struct ARifleChain* _chain; // 0x548(0x08)
	struct URifleChainTensionComponent* _chainTensionComponent; // 0x550(0x08)
	struct UChargeableComponent* _chainTensionChargeable; // 0x558(0x08)
	struct URiflePlayerLinker* _playerLinker; // 0x560(0x08)
	struct UHarpoonChainPositioner* _harpoonChainPositioner; // 0x568(0x08)
	struct UFireHarpoonRifleInteraction* _fireInteraction; // 0x570(0x08)
	struct UTriggerableActivatorComponent* _crowsActivatorComponent; // 0x578(0x08)
	char pad_580[0x8]; // 0x580(0x08)

	struct ARifleChain* GetChain(); // Function TheGunslinger.HarpoonRifle.GetChain // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732d50
	void Authority_OnFireHarpoon(); // Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon // (Final|Native|Private) // @ game+0x5732d30
};

// Class TheGunslinger.HarpoonRifleAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UHarpoonRifleAnimInstance : UAnimInstance {
	struct ARifleChain* _chain; // 0x2c0(0x08)
	float _chainUnwindingSpeed; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheGunslinger.HellshireIronAddon
// Size: 0x2d0 (Inherited: 0x2b8)
struct UHellshireIronAddon : UItemAddon {
	float _undetectableDurationPostHarpoon; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UStatusEffect* _undetectableTimedEffectClass; // 0x2c0(0x08)
	struct UStatusEffect* _statusEffect; // 0x2c8(0x08)
};

// Class TheGunslinger.HexRetribution
// Size: 0x460 (Inherited: 0x448)
struct UHexRetribution : UHexPerk {
	float _obliviousDurationByLevels[0x3]; // 0x448(0x0c)
	float _auraRevealDuration; // 0x454(0x04)
	struct UStatusEffect* _revealEffectClass; // 0x458(0x08)
};

// Class TheGunslinger.HoneyLocustThornsAddon
// Size: 0x2b8 (Inherited: 0x2b8)
struct UHoneyLocustThornsAddon : UItemAddon {
};

// Class TheGunslinger.GunslingerHarpoon
// Size: 0x30 (Inherited: 0x30)
struct UGunslingerHarpoon : UInterface {
};

// Class TheGunslinger.IridescentCoinAddon
// Size: 0x2e8 (Inherited: 0x2b8)
struct UIridescentCoinAddon : UItemAddon {
	struct UStatusEffect* _exposedStatusEffect; // 0x2b8(0x08)
	char pad_2C0[0x28]; // 0x2c0(0x28)
};

// Class TheGunslinger.KillerChainLinkableComponent
// Size: 0x1b0 (Inherited: 0x198)
struct UKillerChainLinkableComponent : UChainLinkableComponent {
	char pad_198[0x18]; // 0x198(0x18)
};

// Class TheGunslinger.OffTheRecord
// Size: 0x3e8 (Inherited: 0x3c8)
struct UOffTheRecord : UPerk {
	float _activationDurationLevels[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _activatableEnduranceEffectClass; // 0x3d8(0x08)
	struct UActivatableEnduranceEffect* _activatableEnduranceEffect; // 0x3e0(0x08)

	float GetActivationDurationAtLevel(); // Function TheGunslinger.OffTheRecord.GetActivationDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy
// Size: 0xf0 (Inherited: 0xb8)
struct UPlayerReelInputAccelerationConstraintStrategy : UBaseInputAccelerationConstraintStrategy {
	char pad_B8[0x38]; // 0xb8(0x38)
};

// Class TheGunslinger.PrisonChainAddon
// Size: 0x2e8 (Inherited: 0x2b8)
struct UPrisonChainAddon : UItemAddon {
	struct FDBDTunableRowHandle _maxTensionCharge; // 0x2b8(0x28)
	float _tensionChargeModifier; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
};

// Class TheGunslinger.RedHerring
// Size: 0x478 (Inherited: 0x3c8)
struct URedHerring : UPerk {
	char pad_3C8[0x68]; // 0x3c8(0x68)
	struct AGenerator* _generatorBeingRepaired; // 0x430(0x08)
	struct AGenerator* _markedGenerator; // 0x438(0x08)
	float _secondsToActivatePerk; // 0x440(0x04)
	float _loudNoiseTriggeredNotifyTime; // 0x444(0x04)
	float _cooldownLevels[0x3]; // 0x448(0x0c)
	char pad_454[0x24]; // 0x454(0x24)

	void OnRep_MarkedGenerator(struct AGenerator* oldMarkedGenerator); // Function TheGunslinger.RedHerring.OnRep_MarkedGenerator // (Final|Native|Private) // @ game+0x5733530
	void OnLoudNoiseTriggered(); // Function TheGunslinger.RedHerring.OnLoudNoiseTriggered // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheGunslinger.ReelChainInteraction
// Size: 0x670 (Inherited: 0x630)
struct UReelChainInteraction : UInteractionDefinition {
	float _frontMovementAngle; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	float _minimumFrontVelocity; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct ADBDPlayer* _linkedPlayer; // 0x640(0x08)
	char pad_648[0x28]; // 0x648(0x28)
};

// Class TheGunslinger.ReloadHarpoonRifleInteraction
// Size: 0x810 (Inherited: 0x760)
struct UReloadHarpoonRifleInteraction : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _reloadTime; // 0x758(0x28)
	struct FDBDTunableRowHandle _movementSpeedMultiplier; // 0x780(0x28)
	struct FDBDTunableRowHandle _rotationScaleMultiplier; // 0x7a8(0x28)
	struct FDBDTunableRowHandle _rotationScaleAdjustmentTime; // 0x7d0(0x28)
	char pad_800[0x10]; // 0x800(0x10)
};

// Class TheGunslinger.RifleChain
// Size: 0x420 (Inherited: 0x230)
struct ARifleChain : AActor {
	struct FMulticastInlineDelegate OnProjectileSet; // 0x230(0x10)
	struct FMulticastInlineDelegate OnIsCollidingChanged; // 0x240(0x10)
	struct UAkComponent* _chainCenterAkComponent; // 0x250(0x08)
	struct UAkAudioEvent* _collisionLoopStartEvent; // 0x258(0x08)
	struct UAkAudioEvent* _collisionLoopEndEvent; // 0x260(0x08)
	struct TArray<struct FAkSoundLoop> _collisionSoundLoops; // 0x268(0x10)
	float _sphereTraceRadius; // 0x278(0x04)
	float _timeBetweenTrace; // 0x27c(0x04)
	struct TScriptInterface<IGunslingerHarpoon> _harpoon; // 0x280(0x10)
	char pad_290[0x190]; // 0x290(0x190)

	void UpdateChainMesh(struct UInstancedStaticMeshComponent* Mesh, struct USplineComponent* spline, float alpha); // Function TheGunslinger.RifleChain.UpdateChainMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x5733b70
	int32_t SpawnChainPoints(struct FVector Start, struct FVector Stop, struct UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, struct USplineComponent* spline); // Function TheGunslinger.RifleChain.SpawnChainPoints // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5733920
	void OnUnattachFromPlayer(struct ADBDPlayer* Player); // Function TheGunslinger.RifleChain.OnUnattachFromPlayer // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnReelBackToRifle(); // Function TheGunslinger.RifleChain.OnReelBackToRifle // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnProjectileSet__DelegateSignature(struct AActor* Projectile); // DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnLaunch(); // Function TheGunslinger.RifleChain.OnLaunch // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnIsCollidingChanged__DelegateSignature(bool IsColliding); // DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnAttachToPlayer(struct ADBDPlayer* Player); // Function TheGunslinger.RifleChain.OnAttachToPlayer // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	bool IsColliding(); // Function TheGunslinger.RifleChain.IsColliding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57330a0
	float GetUnwindingSpeed(); // Function TheGunslinger.RifleChain.GetUnwindingSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5733070
	struct URiflePlayerLinker* GetRiflePlayerLinker(); // Function TheGunslinger.RifleChain.GetRiflePlayerLinker // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5733040
	struct TArray<struct FHitResult> GetFirstAndLastCollisionHits(); // Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732e60
	struct URifleChainTensionComponent* GetChainTensionComponent(); // Function TheGunslinger.RifleChain.GetChainTensionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732e00
	struct FVector GetChainStart(); // Function TheGunslinger.RifleChain.GetChainStart // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732dc0
	struct FVector GetChainEnd(); // Function TheGunslinger.RifleChain.GetChainEnd // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732d80
};

// Class TheGunslinger.RifleChainTensionComponent
// Size: 0x2a8 (Inherited: 0xb8)
struct URifleChainTensionComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnIsBuildingTensionChanged; // 0xc0(0x10)
	char pad_D0[0x18]; // 0xd0(0x18)
	bool _isBuildingTension; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct USurvivorChainLinkableComponent* _targetlinkable; // 0xf0(0x08)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct FDBDTunableRowHandle _maxTensionCharge; // 0x108(0x28)
	struct FDBDTunableRowHandle _baseTensionRate; // 0x130(0x28)
	struct FDBDTunableRowHandle _collisionTensionRate; // 0x158(0x28)
	struct FTunableStat _survivorPullingTensionRate; // 0x180(0x80)
	struct FNonTunableStat _currentTensionRate; // 0x200(0x60)
	enum class EProgressModifier _progressModifierForSurvivors; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct FText _chargeProgressDescriptionText; // 0x268(0x18)
	char pad_280[0x18]; // 0x280(0x18)
	struct ARifleChain* _chain; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)

	void OnTensionChargeableCompletionChanged(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged // (Final|Native|Private|HasOutParms) // @ game+0x5733600
	void OnRep_IsBuildingTension(); // Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension // (Final|Native|Private) // @ game+0x5733510
	void OnIsBuildingTensionChanged__DelegateSignature(bool IsBuildingTension); // DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsBuildingTension(); // Function TheGunslinger.RifleChainTensionComponent.IsBuildingTension // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x54904d0
	float GetProgress(); // Function TheGunslinger.RifleChainTensionComponent.GetProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5733000
};

// Class TheGunslinger.RiflePlayerLinker
// Size: 0x220 (Inherited: 0xb8)
struct URiflePlayerLinker : UActorComponent {
	struct FMulticastInlineDelegate OnLinkedPlayerSet; // 0xb8(0x10)
	struct ADBDPlayer* _linkedPlayer; // 0xc8(0x08)
	struct ADBDPlayer* _linkedPlayerDuringAttack; // 0xd0(0x08)
	struct ADBDPlayer* _linkOwner; // 0xd8(0x08)
	float _desiredLinkLength; // 0xe0(0x04)
	char pad_E4[0x3c]; // 0xe4(0x3c)
	struct FDBDTunableRowHandle _elasticLength; // 0x120(0x28)
	struct FDBDTunableRowHandle _minimumLinkLength; // 0x148(0x28)
	struct FDBDTunableRowHandle _breakFreeCloseRangeMaxDistance; // 0x170(0x28)
	char pad_198[0x4]; // 0x198(0x04)
	float _movementLinkReductionThreshold; // 0x19c(0x04)
	float _movementAccelerationTreshold; // 0x1a0(0x04)
	char pad_1A4[0x7c]; // 0x1a4(0x7c)

	void Server_OnClientConfirmTensionBreakChain(struct ADBDPlayer* Player); // Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x57337e0
	void OnLinkedPlayerSet__DelegateSignature(struct ADBDPlayer* linkedPlayer); // DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void Multicast_Unlink(); // Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x4af1aa0
	void Multicast_Link(struct ADBDPlayer* linkedPlayer); // Function TheGunslinger.RiflePlayerLinker.Multicast_Link // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x54ad7f0
	struct ADBDPlayer* GetLinkOwner(); // Function TheGunslinger.RiflePlayerLinker.GetLinkOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732fa0
	struct ADBDPlayer* GetLinkedPlayer(); // Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5732fd0
	void Client_OnAuthorityTensionBreakChain(struct ADBDPlayer* Player); // Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x5490b20
};

// Class TheGunslinger.RustedSpikeAddon
// Size: 0x2b8 (Inherited: 0x2b8)
struct URustedSpikeAddon : UItemAddon {
};

// Class TheGunslinger.SurvivorChainLinkableComponent
// Size: 0x280 (Inherited: 0x198)
struct USurvivorChainLinkableComponent : UChainLinkableComponent {
	struct FDBDTunableRowHandle _pullbackAngle; // 0x198(0x28)
	char pad_1C0[0x8]; // 0x1c0(0x08)
	struct FDBDTunableRowHandle _immobilizationDuration; // 0x1c8(0x28)
	struct FGameplayTagContainer _linkableInteractionTags; // 0x1f0(0x20)
	struct FGameplayTagContainer _cancelableInteractionTags; // 0x210(0x20)
	struct USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategyClass; // 0x230(0x08)
	struct FName _immobilizationEffectName; // 0x238(0x0c)
	char pad_244[0x4]; // 0x244(0x04)
	struct FVector_NetQuantize10 _linkedMoveInput; // 0x248(0x0c)
	char pad_254[0x4]; // 0x254(0x04)
	struct UStatusEffect* _immobilizationEffect; // 0x258(0x08)
	struct USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategy; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)

	void OnRep_VelocityAdditiveStrategy(); // Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy // (Final|Native|Private) // @ game+0x57335e0
};

// Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy
// Size: 0x1e0 (Inherited: 0xb8)
struct USurvivorReelVelocityAdditiveStrategy : UBaseCharacterVelocityAdditiveStrategy {
	struct FTunableStat _reelSpeed; // 0xb8(0x80)
	float _minimumLinkLengthDelta; // 0x138(0x04)
	float _maximumVelocityAdditive; // 0x13c(0x04)
	struct FTagStateBool _isBeingReeled; // 0x140(0x30)
	struct FTagStateBool _isBeingPulled; // 0x170(0x30)
	char pad_1A0[0x40]; // 0x1a0(0x40)

	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet // (Final|Native|Private) // @ game+0x57333d0
};

// Class TheGunslinger.TestOffTheRecord
// Size: 0x3e8 (Inherited: 0x3e8)
struct UTestOffTheRecord : UOffTheRecord {
};

