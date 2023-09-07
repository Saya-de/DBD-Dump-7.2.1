// Class DBDAnimation.DBDBaseAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UDBDBaseAnimInstance : UAnimInstance {
	struct UAnimEffectBlackBoard* _animEffectBlackBoard; // 0x2c0(0x08)
	struct UAnimEffectHandler* _animEffectHandlerForSFX; // 0x2c8(0x08)
	struct UAnimEffectHandler* _animEffectHandlerForVFX; // 0x2d0(0x08)
	struct UAnimEffectHandler* _animEffectHandlerClassForSFX; // 0x2d8(0x08)
	struct UAnimEffectHandler* _animEffectHandlerClassForVFX; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	bool HasBeenNotified(struct FName AnimNotify); // Function DBDAnimation.DBDBaseAnimInstance.HasBeenNotified // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9cd0
};

// Class DBDAnimation.PlayerAnimInstance
// Size: 0x540 (Inherited: 0x2f0)
struct UPlayerAnimInstance : UDBDBaseAnimInstance {
	char pad_2F0[0x20]; // 0x2f0(0x20)
	struct ADBDPlayer* _owningPlayer; // 0x310(0x08)
	struct TArray<struct FTaggedAnimCollection> _taggedAnimCollections; // 0x318(0x10)
	struct TMap<struct FGameplayTag, struct UAnimSequence*> _animations; // 0x328(0x50)
	struct TMap<struct FGameplayTag, struct UBlendSpace*> _blendspaces; // 0x378(0x50)
	struct TMap<struct FGameplayTag, struct UAimOffsetBlendSpace*> _aimoffsets; // 0x3c8(0x50)
	struct TMap<struct FGameplayTag, struct UBlendSpace1D*> _blendspaces1d; // 0x418(0x50)
	struct TMap<struct FGameplayTag, struct UAimOffsetBlendSpace1D*> _aimoffsets1d; // 0x468(0x50)
	struct TMap<struct FGameplayTag, struct FAnimSequenceSelector> _selectors; // 0x4b8(0x50)
	bool _isInParadise; // 0x508(0x01)
	bool _isIntroCompleted; // 0x509(0x01)
	bool _isLevelReadyToPlay; // 0x50a(0x01)
	char pad_50B[0x5]; // 0x50b(0x05)
	struct FActivationDefinition _activationDefinition; // 0x510(0x28)
	float _interactionDuration; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)

	void OnLevelReadyToPlay(); // Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay // (Final|Native|Protected) // @ game+0x4bac690
	void OnIntroCompleted(); // Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted // (Native|Protected) // @ game+0x4bac670
	struct ADBDPlayer* GetOwningPlayer(); // Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bac310
};

// Class DBDAnimation.BaseSurvivorAnimInstance
// Size: 0x550 (Inherited: 0x540)
struct UBaseSurvivorAnimInstance : UPlayerAnimInstance {
	struct ACamperPlayer* _owningSurvivor; // 0x540(0x08)
	char pad_548[0x8]; // 0x548(0x08)

	bool IsPlayingMontageByName(struct FName MontageID); // Function DBDAnimation.BaseSurvivorAnimInstance.IsPlayingMontageByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9d80
	struct ACamperPlayer* GetOwningSurvivor(); // Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9ca0
};

// Class DBDAnimation.AimOffsetSurvivorSubAnimInstance
// Size: 0x5a0 (Inherited: 0x550)
struct UAimOffsetSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	float _pitch; // 0x548(0x04)
	float _yaw; // 0x54c(0x04)
	float _yawInterpolated; // 0x550(0x04)
	bool _allowLookAt; // 0x554(0x01)
	bool _isUsingAimItem; // 0x555(0x01)
	bool _isInjured; // 0x556(0x01)
	bool _isCrawling; // 0x557(0x01)
	bool _isIdle; // 0x558(0x01)
	bool _isDrasticYawChangeDetected; // 0x559(0x01)
	float _yawInterpolationSpeed; // 0x55c(0x04)
	float _yawDeadzoneStart; // 0x560(0x04)
	float _yawClampValue; // 0x564(0x04)
	float _yawDrasticChangeUpperLimit; // 0x568(0x04)
	float _yawDrasticChangeLowerLimit; // 0x56c(0x04)
	float _yawDrasticChangeInterpolationSpeed; // 0x570(0x04)
	struct UCurveFloat* _yawInterpolateEaseIn; // 0x578(0x08)
	struct UCurveFloat* _yawInterpolateEaseOut; // 0x580(0x08)
	float _yawInterpolationEaseInLength; // 0x588(0x04)
	float _yawInterpolationEaseOutDistance; // 0x58c(0x04)
	bool _isYawInDeadZone; // 0x590(0x01)
	char pad_593[0x1]; // 0x593(0x01)
	float _currentTargetYaw; // 0x594(0x04)
	float _yawAcceleration; // 0x598(0x04)
	float _yawAccelerationTime; // 0x59c(0x04)
};

// Class DBDAnimation.AnyPlayerInRangeAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UAnyPlayerInRangeAnimInstance : UAnimInstance {
	bool _isAnyPlayerInNearbyRange; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float _nearbyRangeCm; // 0x2c4(0x04)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class DBDAnimation.ArmIKSurvivorSubAnimInstance
// Size: 0x5d0 (Inherited: 0x550)
struct UArmIKSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	struct FRotator _rightWristUpRotation; // 0x548(0x0c)
	struct FRotator _leftWristUpRotation; // 0x554(0x0c)
	struct FFloatRange _localWristYawRange; // 0x560(0x10)
	struct FFloatRange _localWristPitchRange; // 0x570(0x10)
	float _armInterpolationSpeed; // 0x580(0x04)
	float _handInterpolationSpeed; // 0x584(0x04)
	float _alphaLerpTime; // 0x588(0x04)
	float _reachPadding; // 0x58c(0x04)
	float _rightArmIKAlpha; // 0x590(0x04)
	float _leftArmIKAlpha; // 0x594(0x04)
	enum class EArmIkMode _armIkMode; // 0x598(0x01)
	struct UArmDetectionFanComponent* _rightDetectionFan; // 0x5a0(0x08)
	struct UArmDetectionFanComponent* _leftDetectionFan; // 0x5a8(0x08)
	struct USkeletalMeshComponent* _meshComponent; // 0x5b0(0x08)
	char pad_5B9[0x17]; // 0x5b9(0x17)

	void ChangeMode(enum class EArmIkMode newMode); // Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba9b90
};

// Class DBDAnimation.BaseKillerAnimInstance
// Size: 0x560 (Inherited: 0x540)
struct UBaseKillerAnimInstance : UPlayerAnimInstance {
	struct ASlasherPlayer* _owningKiller; // 0x540(0x08)
	bool _firstPersonView; // 0x548(0x01)
	char pad_549[0x17]; // 0x549(0x17)

	struct ASlasherPlayer* GetOwningKiller(); // Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9c40
	void DBD_ForceAnimPOV(int32_t animPOV); // Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV // (Final|Exec|Native|Private) // @ game+0x46a25e0
};

// Class DBDAnimation.BasePlayerAttackSubAnimInstance
// Size: 0x610 (Inherited: 0x540)
struct UBasePlayerAttackSubAnimInstance : UPlayerAnimInstance {
	enum class EAttackSubstate _attackState; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float _direction; // 0x544(0x04)
	float _strafeAngle; // 0x548(0x04)
	bool _isStrafe; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	float _attackInPlayRate; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct FAnimSequenceSelector _attackIn; // 0x558(0x18)
	float _attackSwingPlayRate; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct FAnimSequenceSelector _attackSwing; // 0x578(0x18)
	float _attackMissPlayRate; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct FAnimSequenceSelector _attackMiss; // 0x598(0x18)
	float _attackHitPlayRate; // 0x5b0(0x04)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct FAnimSequenceSelector _attackHit; // 0x5b8(0x18)
	float _attackBounceOfWallPlayRate; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct FAnimSequenceSelector _attackBounceOfWall; // 0x5d8(0x18)
	char pad_5F0[0x18]; // 0x5f0(0x18)
	bool _firstPersonView; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
};

// Class DBDAnimation.BaseKillerAttackSubAnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UBaseKillerAttackSubAnimInstance : UBasePlayerAttackSubAnimInstance {
	struct ASlasherPlayer* _owningKiller; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)

	struct ASlasherPlayer* GetOwningKiller(); // Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9c40
};

// Class DBDAnimation.BaseKillerWeaponAnimInstance
// Size: 0x380 (Inherited: 0x2c0)
struct UBaseKillerWeaponAnimInstance : UAnimInstance {
	enum class EAttackSubstate _attackState; // 0x2c0(0x01)
	bool _isCarrying; // 0x2c1(0x01)
	bool _isActive; // 0x2c2(0x01)
	char pad_2C3[0x1]; // 0x2c3(0x01)
	float _attackInPlayRate; // 0x2c4(0x04)
	struct FAnimSequenceSelector _attackIn; // 0x2c8(0x18)
	float _attackSwingPlayRate; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FAnimSequenceSelector _attackSwing; // 0x2e8(0x18)
	float _attackMissPlayRate; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct FAnimSequenceSelector _attackMiss; // 0x308(0x18)
	float _attackHitPlayRate; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FAnimSequenceSelector _attackHit; // 0x328(0x18)
	float _attackBounceOfWallPlayRate; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FAnimSequenceSelector _attackBounceOfWall; // 0x348(0x18)
	char pad_360[0x14]; // 0x360(0x14)
	bool _firstPersonView; // 0x374(0x01)
	char pad_375[0xb]; // 0x375(0x0b)
};

// Class DBDAnimation.BaseMenuAnimInstance
// Size: 0x300 (Inherited: 0x2f0)
struct UBaseMenuAnimInstance : UDBDBaseAnimInstance {
	char pad_2F0[0x10]; // 0x2f0(0x10)

	void OnCustomizationChanged(struct TArray<struct FName>& customizationArray); // Function DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	struct ADBDMenuPlayer* GetOwningMenuPlayer(); // Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9c70
	enum class EGameFlowStep GetCurrentMenu(); // Function DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba9c10
};

// Class DBDAnimation.BasePowerSubAnimInstance
// Size: 0x560 (Inherited: 0x560)
struct UBasePowerSubAnimInstance : UBaseKillerAnimInstance {
	bool _isUsingPower; // 0x558(0x01)
};

// Class DBDAnimation.BipedIKSubAnimInstance
// Size: 0x520 (Inherited: 0x2f0)
struct UBipedIKSubAnimInstance : UDBDBaseAnimInstance {
	bool _enableIK; // 0x2f0(0x01)
	enum class ETraceTypeQuery _traceTypeQuery; // 0x2f1(0x01)
	bool _traceComplex; // 0x2f2(0x01)
	bool _ignoreTouches; // 0x2f3(0x01)
	struct FName _noGroundTag; // 0x2f4(0x0c)
	float _footIkSpeed; // 0x300(0x04)
	float _pelvisIkSpeed; // 0x304(0x04)
	float _maxIKTargetDistance; // 0x308(0x04)
	float _pelvisPositionOffsetMin; // 0x30c(0x04)
	float _pelvisPositionOffsetMax; // 0x310(0x04)
	float _frontFeetLineTraceStartOffset; // 0x314(0x04)
	float _frontFeetLineTraceEndOffset; // 0x318(0x04)
	float _backFeetLineTraceStartOffset; // 0x31c(0x04)
	float _backFeetLineTraceEndOffset; // 0x320(0x04)
	float _isMovingTolerance; // 0x324(0x04)
	struct FName _pelvisSocketName; // 0x328(0x0c)
	struct FName _leftBackFootSocketName; // 0x334(0x0c)
	struct FName _rightBackFootSocketName; // 0x340(0x0c)
	struct FName _leftBackFootBoneName; // 0x34c(0x0c)
	struct FName _rightBackFootBoneName; // 0x358(0x0c)
	struct FVector _pelvisPositionOffset; // 0x364(0x0c)
	struct FVector _leftBackFootLocation; // 0x370(0x0c)
	struct FVector _rightBackFootLocation; // 0x37c(0x0c)
	char pad_388[0x8]; // 0x388(0x08)
	struct FTransform _leftBackFootTransform; // 0x390(0x30)
	struct FTransform _rightBackFootTransform; // 0x3c0(0x30)
	struct FRotator _leftBackFootRotation; // 0x3f0(0x0c)
	struct FRotator _rightBackFootRotation; // 0x3fc(0x0c)
	struct USkeletalMeshComponent* _skeletalMeshComponent; // 0x408(0x08)
	struct UWorld* _world; // 0x410(0x08)
	char pad_418[0x108]; // 0x418(0x108)
};

// Class DBDAnimation.BreathingSurvivorSubAnimInstance
// Size: 0x560 (Inherited: 0x550)
struct UBreathingSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isDead; // 0x548(0x01)
	struct UAnimSequence* _breathing; // 0x550(0x08)
	char pad_559[0x7]; // 0x559(0x07)
};

// Class DBDAnimation.ChestAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UChestAnimInstance : UAnimInstance {
	struct ASearchable* _owningChest; // 0x2c0(0x08)
	bool _isOpen; // 0x2c8(0x01)
	bool _isBeingPriedOpen; // 0x2c9(0x01)
	char pad_2CA[0xe]; // 0x2ca(0x0e)
	struct UInteractionDefinition* _openChestInteraction; // 0x2d8(0x08)

	void OnSearchedChanged(bool searched); // Function DBDAnimation.ChestAnimInstance.OnSearchedChanged // (Final|Native|Private) // @ game+0x4ba9fb0
	void OnBeingPriedOpenStopped(); // Function DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStopped // (Final|Native|Private) // @ game+0x4ba9ec0
	void OnBeingPriedOpenStarted(struct ADBDPlayer* Player); // Function DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStarted // (Final|Native|Private) // @ game+0x4ba9e30
};

// Class DBDAnimation.CrowAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UCrowAnimInstance : UAnimInstance {
	bool _shouldTakeOff; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UWorldRunawayMeshComponent* _crow; // 0x2c8(0x08)
};

// Class DBDAnimation.CustomizationAnimationSelector
// Size: 0x98 (Inherited: 0x30)
struct UCustomizationAnimationSelector : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct UDataTable* _customizationAnimationMappings; // 0x48(0x08)
	char pad_50[0x38]; // 0x50(0x38)
	struct UCustomizedSkeletalMesh* _customizedSkeletalMesh; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class DBDAnimation.DynamicAccessoryAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UDynamicAccessoryAnimInstance : UAnimInstance {
	bool _isInMenu; // 0x2c0(0x01)
	bool _isInGame; // 0x2c1(0x01)
	bool _isPoseableHusk; // 0x2c2(0x01)
	char pad_2C3[0x1]; // 0x2c3(0x01)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> _masterMesh; // 0x2c4(0x08)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class DBDAnimation.EntityAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UEntityAnimInstance : UAnimInstance {
	bool _isStruggling; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float _strugglePercent; // 0x2c4(0x04)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class DBDAnimation.FaceCorrectionSurvivorSubAnimInstance
// Size: 0x550 (Inherited: 0x550)
struct UFaceCorrectionSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isIdle; // 0x548(0x01)
	bool _isFreddyMori; // 0x549(0x01)
	bool _isInCloset; // 0x54a(0x01)
	bool _isEdgeCase; // 0x54b(0x01)
	bool _isInjured; // 0x54c(0x01)
	bool _isHealingOthers; // 0x54d(0x01)
	bool _isCrouched; // 0x54e(0x01)
};

// Class DBDAnimation.GeneratorAnimInstance
// Size: 0x2e0 (Inherited: 0x2d0)
struct UGeneratorAnimInstance : USleepingAnimInstance {
	struct AGenerator* _owningGenerator; // 0x2d0(0x08)
	bool _rushFailed; // 0x2d8(0x01)
	bool _isActivated; // 0x2d9(0x01)
	char pad_2DA[0x2]; // 0x2da(0x02)
	float _percentComplete; // 0x2dc(0x04)

	void SetSkillCheckSuccess(bool success); // Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess // (Final|Native|Public|BlueprintCallable) // @ game+0x4baa060
};

// Class DBDAnimation.HatchAnimInstance
// Size: 0x2e0 (Inherited: 0x2d0)
struct UHatchAnimInstance : USleepingAnimInstance {
	bool _isOpen; // 0x2d0(0x01)
	char pad_2D1[0xf]; // 0x2d1(0x0f)
};

// Class DBDAnimation.HealSurvivorSubAnimInstance
// Size: 0x5a0 (Inherited: 0x550)
struct UHealSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	char pad_550[0x38]; // 0x550(0x38)
	bool _isHealingACrawlingTarget; // 0x588(0x01)
	bool _isHealingOtherNoMedkit; // 0x589(0x01)
	bool _isHealingOtherMedkit; // 0x58a(0x01)
	bool _isHealingSelfNoMedkit; // 0x58b(0x01)
	bool _isHealingSelfMedkit; // 0x58c(0x01)
	bool _isWakingUpOther; // 0x58d(0x01)
	bool _isBeingHealed; // 0x58e(0x01)
	bool _isBeingMended; // 0x58f(0x01)
	bool _isMendingOther; // 0x590(0x01)
	bool _hasSkillCheckFailed; // 0x591(0x01)
	bool _isCrawling; // 0x592(0x01)
	bool _hasHealerSkillCheckFailed; // 0x593(0x01)
	char pad_594[0xc]; // 0x594(0x0c)

	void ResetHealerSkillCheckFailed(); // Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed // (Final|Native|Protected|BlueprintCallable) // @ game+0x4baa040
	void OnHealerSkillCheckResponseAesthetic(bool success, struct ADBDPlayer* healer); // Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic // (Final|Native|Protected) // @ game+0x4ba9ee0
};

// Class DBDAnimation.InteractionSurvivorSubAnimInstance
// Size: 0x590 (Inherited: 0x550)
struct UInteractionSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isAgainstSmallKiller; // 0x548(0x01)
	bool _isInsideCloset; // 0x549(0x01)
	bool _isBeingCarried; // 0x54a(0x01)
	bool _isHooked; // 0x54b(0x01)
	bool _isSacrificeStruggling; // 0x54c(0x01)
	float _sacrificeStrugglePercent; // 0x550(0x04)
	bool _selfUnhookFailed; // 0x554(0x01)
	enum class EInteractionAnimation _interactionAnimation; // 0x555(0x01)
	struct FVector _snapPosition; // 0x558(0x0c)
	bool _isInteractingWithSwitch; // 0x564(0x01)
	char pad_568[0x28]; // 0x568(0x28)
};

// Class DBDAnimation.KillerAnimInstance
// Size: 0x610 (Inherited: 0x560)
struct UKillerAnimInstance : UBaseKillerAnimInstance {
	struct FVector _leftHandIKLocationFPV; // 0x558(0x0c)
	struct FVector _rightHandIKLocationFPV; // 0x564(0x0c)
	bool _isAnyMontagePlaying; // 0x570(0x01)
	bool _isCarrying; // 0x571(0x01)
	struct FVector _firstPersonCarryOffset; // 0x574(0x0c)
	struct FVector _firstPersonCarryOffsetLookingDown; // 0x580(0x0c)
	bool _isInAir; // 0x58c(0x01)
	bool _isSpectator; // 0x58d(0x01)
	bool _isIdle; // 0x58e(0x01)
	float _animDirection; // 0x590(0x04)
	float _animSpeed; // 0x594(0x04)
	float _animPitch; // 0x598(0x04)
	float _animYaw; // 0x59c(0x04)
	float _pelvisHeight; // 0x5a0(0x04)
	float _idleTime; // 0x5a4(0x04)
	int32_t _directionSwitch; // 0x5a8(0x04)
	bool _isAttacking; // 0x5ac(0x01)
	bool _isPlayingAnyMontage; // 0x5ad(0x01)
	bool _isKilling; // 0x5ae(0x01)
	float _minAnimPitchAngle; // 0x5b0(0x04)
	float _maxAnimPitchAngle; // 0x5b4(0x04)
	struct FVector _leftClearFrontSpaceVector; // 0x5b8(0x0c)
	struct FVector _rightClearFrontSpaceVector; // 0x5c4(0x0c)
	struct FVector _velocity; // 0x5d0(0x0c)
	struct FVector _rightFootEffectorLocation; // 0x5dc(0x0c)
	struct FVector _leftFootEffectorLocation; // 0x5e8(0x0c)
	enum class EInteractionAnimation _interactionType; // 0x5f4(0x01)
	struct UArmIKSensorComponent* _armIKSensorComponent; // 0x5f8(0x08)
	enum class EAttackSubstate _attackState; // 0x600(0x01)
	char pad_602[0x2]; // 0x602(0x02)
	float _forwardVelocity; // 0x604(0x04)
	float _lateralVelocity; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)

	struct FName GetWeaponCustomizationId(); // Function DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bac340
};

// Class DBDAnimation.KillerAttackSubAnimInstance
// Size: 0x620 (Inherited: 0x620)
struct UKillerAttackSubAnimInstance : UBaseKillerAttackSubAnimInstance {
	bool _isCarrying; // 0x618(0x01)
	bool _isActive; // 0x619(0x01)
};

// Class DBDAnimation.KillerLocomotionSubAnimInstance
// Size: 0x610 (Inherited: 0x560)
struct UKillerLocomotionSubAnimInstance : UBaseKillerAnimInstance {
	struct UAnimSequence* _landLightTPV; // 0x558(0x08)
	struct UAnimSequence* _landLightFPV; // 0x560(0x08)
	struct UBlendSpace1D* _BSLandTPV; // 0x568(0x08)
	struct UBlendSpace1D* _BSLandFPV; // 0x570(0x08)
	struct UAnimSequence* _walkToFallTPV; // 0x578(0x08)
	struct UAnimSequence* _walkToFallFPV; // 0x580(0x08)
	struct UAnimSequence* _carryIdleTPV; // 0x588(0x08)
	struct UAnimSequence* _carryIdleFPV; // 0x590(0x08)
	struct UAnimSequence* _fallingTPV; // 0x598(0x08)
	struct UAnimSequence* _fallingFPV; // 0x5a0(0x08)
	struct UAnimSequence* _landLight; // 0x5a8(0x08)
	struct UBlendSpace1D* _BSLand; // 0x5b0(0x08)
	struct UAnimSequence* _walkToFall; // 0x5b8(0x08)
	struct UAnimSequence* _carryIdle; // 0x5c0(0x08)
	struct UAnimSequence* _falling; // 0x5c8(0x08)
	bool _isVaultingToFall; // 0x5d0(0x01)
	enum class EIntroState _introState; // 0x5d1(0x01)
	struct FTagStateBool _isVaultingToFallState; // 0x5d8(0x30)
	char pad_60A[0x6]; // 0x60a(0x06)
};

// Class DBDAnimation.KillerSpecificSurvivorAnimationPicker
// Size: 0xd0 (Inherited: 0xb8)
struct UKillerSpecificSurvivorAnimationPicker : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UAnimInstance* _killerSpecificAnimInstanceClass; // 0xc0(0x08)
	struct UDataTable* _killerSpecificSurvivorAnimationDB; // 0xc8(0x08)
};

// Class DBDAnimation.LegIKSurvivorSubAnimInstance
// Size: 0x650 (Inherited: 0x550)
struct ULegIKSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	struct FVector _leftFootOffset; // 0x548(0x0c)
	struct FVector _rightFootOffset; // 0x554(0x0c)
	struct FVector _pelvisOffset; // 0x560(0x0c)
	bool _isIdle; // 0x56c(0x01)
	bool _isCrouched; // 0x56d(0x01)
	struct FRotator _rightFootDeltaRotator; // 0x570(0x0c)
	struct FRotator _leftFootDeltaRotator; // 0x57c(0x0c)
	struct UAnimCollection* AnimCollection; // 0x588(0x08)
	struct FName _floorJoint; // 0x590(0x0c)
	float _pelvisOffsetTreshold; // 0x59c(0x04)
	struct FFloatRange _pelvisOffsetRange; // 0x5a0(0x10)
	struct FFloatRange _pelvisOffsetRangeCrouched; // 0x5b0(0x10)
	float _pelvisOffsetInterpolationSpeed; // 0x5c0(0x04)
	struct FFloatRange _footOffsetRange; // 0x5c4(0x10)
	struct FFloatRange _footOffsetRangeCrouched; // 0x5d4(0x10)
	float _footOffsetInterpolationSpeed; // 0x5e4(0x04)
	struct FFloatRange _footPitchDeltaRange; // 0x5e8(0x10)
	struct UBaseGroundDetectorComponent* _leftFootGroundDetector; // 0x5f8(0x08)
	struct UBaseGroundDetectorComponent* _rightFootGroundDetector; // 0x600(0x08)
	float maxLocalHeightForPlanting; // 0x608(0x04)
	char pad_612[0x36]; // 0x612(0x36)
	struct ULocomotionPredictor* _locomotionPredictor; // 0x648(0x08)
};

// Class DBDAnimation.LocomotionLookAtSurvivorSubAnimInstance
// Size: 0x5e0 (Inherited: 0x550)
struct ULocomotionLookAtSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isHealthy; // 0x548(0x01)
	bool _isUsingAimItem; // 0x549(0x01)
	float _aimOffsetPitch; // 0x54c(0x04)
	float _aimOffsetYaw; // 0x550(0x04)
	float _aimOffsetYawInterpolated; // 0x554(0x04)
	bool _allowLookAt; // 0x558(0x01)
	bool _isDrasticAimOffsetYawChangeDetected; // 0x559(0x01)
	float _aimOffsetYawInterpolationSpeed; // 0x55c(0x04)
	float _aimOffsetYawDeadzoneStart; // 0x560(0x04)
	float _aimOffsetYawClampValue; // 0x564(0x04)
	float _aimOffsetYawDrasticChangeUpperLimit; // 0x568(0x04)
	float _aimOffsetYawDrasticChangeLowerLimit; // 0x56c(0x04)
	float _aimOffsetYawDrasticChangeInterpolationSpeed; // 0x570(0x04)
	struct UCurveFloat* _aimOffsetYawInterpolateEaseIn; // 0x578(0x08)
	struct UCurveFloat* _aimOffsetYawInterpolateEaseOut; // 0x580(0x08)
	float _aimOffsetYawInterpolationEaseInLength; // 0x588(0x04)
	float _aimOffsetYawInterpolationEaseOutDistance; // 0x58c(0x04)
	bool _isAimOffsetYawInDeadZone; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	float _alphaAimOffsetPitchDown; // 0x594(0x04)
	float _alphaAimOffsetPitchCenter; // 0x598(0x04)
	float _alphaAimOffsetPitchUp; // 0x59c(0x04)
	struct TArray<struct FGameplayTag> _heavyCarryPresenceTags; // 0x5a0(0x10)
	struct TArray<struct FGameplayTag> _lightCarryPresenceTags; // 0x5b0(0x10)
	bool _isUsingHeavyCarry; // 0x5c0(0x01)
	bool _isUsingLightCarry; // 0x5c1(0x01)
	char pad_5C2[0x1e]; // 0x5c2(0x1e)
};

// Class DBDAnimation.LocomotionPredictor
// Size: 0x80 (Inherited: 0x30)
struct ULocomotionPredictor : UObject {
	struct TMap<struct UAnimSequence*, struct FFootBoneData> _animFootData; // 0x30(0x50)
};

// Class DBDAnimation.LocomotionSurvivorSubAnimInstance
// Size: 0x610 (Inherited: 0x550)
struct ULocomotionSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isPlayerInPerkInteraction; // 0x548(0x01)
	bool _isRecoveringWhileCrawling; // 0x549(0x01)
	bool _isTenacityPerkActive; // 0x54a(0x01)
	float _wasMovingResetTime; // 0x54c(0x04)
	bool _isIdle; // 0x550(0x01)
	bool _shouldPlayLowerCarryAnimation; // 0x551(0x01)
	bool _isRunning; // 0x552(0x01)
	bool _isCrouching; // 0x553(0x01)
	bool _isCrawling; // 0x554(0x01)
	bool _isDead; // 0x555(0x01)
	float _walkAnimSpeed; // 0x558(0x04)
	float _walkAnimStartOffset; // 0x55c(0x04)
	float _walkAnimPlayRateMultiplier; // 0x560(0x04)
	bool _wasLastDamageSourceDeepWounds; // 0x564(0x01)
	bool _isStrafing; // 0x566(0x01)
	bool _isUsingDeadHard; // 0x567(0x01)
	float _direction; // 0x568(0x04)
	bool _isUsingAimItem; // 0x56c(0x01)
	bool _isBeingCarried; // 0x56d(0x01)
	float _crawlingDirectionWhileMoving; // 0x570(0x04)
	bool _crawlMovingJustStopped; // 0x574(0x01)
	bool _isImmobilized; // 0x575(0x01)
	float _aimOffsetYawInterpolated; // 0x578(0x04)
	bool _allowLookAt; // 0x57c(0x01)
	bool _isDrasticAimOffsetYawChangeDetected; // 0x57d(0x01)
	char pad_57E[0x2]; // 0x57e(0x02)
	float _lookAtAlphaBlendMultiDown; // 0x580(0x04)
	float _lookAtAlphaBlendMultiCenter; // 0x584(0x04)
	float _lookAtAlphaBlendMultiUp; // 0x588(0x04)
	float _lookAtStandIdleAnimationLength; // 0x58c(0x04)
	float _aimOffsetYawClampValue; // 0x590(0x04)
	float _maxParadiseWalkCycleOffSet; // 0x594(0x04)
	char pad_598[0x4]; // 0x598(0x04)
	float _minParadiseWalkPlayRateMultiplier; // 0x59c(0x04)
	char pad_5A0[0x8]; // 0x5a0(0x08)
	struct TArray<struct FGameplayTag> _lowerCarryAnimationPresenceTags; // 0x5a8(0x10)
	char pad_5B8[0x58]; // 0x5b8(0x58)
};

// Class DBDAnimation.LookAtKillerSubAnimInstance
// Size: 0x320 (Inherited: 0x2c0)
struct ULookAtKillerSubAnimInstance : UAnimInstance {
	struct ADBDPlayer* _owningPawn; // 0x2c0(0x08)
	struct ASlasherPlayer* _owningKiller; // 0x2c8(0x08)
	bool _enableDynamics; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float _dynamicsAlpha; // 0x2d4(0x04)
	bool _shouldApplyDynamics; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float _blendTime; // 0x2dc(0x04)
	float _animYaw; // 0x2e0(0x04)
	bool _enableTurnInPlace; // 0x2e4(0x01)
	bool _shouldTurnLeft; // 0x2e5(0x01)
	bool _shouldTurnRight; // 0x2e6(0x01)
	char pad_2E7[0x1]; // 0x2e7(0x01)
	float _turnInPlaceThresholdAngle; // 0x2e8(0x04)
	float _idleNeutralRotationYaw; // 0x2ec(0x04)
	bool _isIdle; // 0x2f0(0x01)
	char pad_2F1[0x17]; // 0x2f1(0x17)
	struct USkeletalMeshComponent* _skeletalMeshComponent; // 0x308(0x08)
	char pad_310[0x10]; // 0x310(0x10)

	bool IsLookAtAllowed(); // Function DBDAnimation.LookAtKillerSubAnimInstance.IsLookAtAllowed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x4bac380
	float GetBlendDuration(); // Function DBDAnimation.LookAtKillerSubAnimInstance.GetBlendDuration // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x4bac2d0
};

// Class DBDAnimation.LookAtTargetKillerSubAnimInstance
// Size: 0x710 (Inherited: 0x560)
struct ULookAtTargetKillerSubAnimInstance : UBaseKillerAnimInstance {
	float _maxDistanceForTargetDetection; // 0x558(0x04)
	struct FName _headSocket; // 0x55c(0x0c)
	struct FName _rootSocket; // 0x568(0x0c)
	float _preferredMinLookAtTime; // 0x574(0x04)
	float _distanceScoreFactor; // 0x578(0x04)
	float _angleScoreFactor; // 0x57c(0x04)
	float _sameTargetScoreFactor; // 0x580(0x04)
	float _yawToTarget; // 0x584(0x04)
	float _pitchToTarget; // 0x588(0x04)
	bool _hasVisibleTarget; // 0x58c(0x01)
	char pad_595[0x17b]; // 0x595(0x17b)

	void OnChaseStarted(struct ADBDPlayer* Target); // Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted // (Final|Native|Private) // @ game+0x4bac5e0
	void OnChaseEnded(struct ADBDPlayer* Target, float chaseTime); // Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded // (Final|Native|Private) // @ game+0x4bac510
};

// Class DBDAnimation.LookAtThreatSurvivorSubAnimInstance
// Size: 0x6b0 (Inherited: 0x550)
struct ULookAtThreatSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	float _maxDistanceForThreatDetection; // 0x548(0x04)
	struct FName _headSocket; // 0x54c(0x0c)
	struct FName _rootSocket; // 0x558(0x0c)
	float _yawToThreat; // 0x564(0x04)
	float _pitchToThreat; // 0x568(0x04)
	bool _isVisibleThreat; // 0x56c(0x01)
	char pad_575[0x13b]; // 0x575(0x13b)
};

// Class DBDAnimation.MeshRotationCorrectionSubAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct UMeshRotationCorrectionSubAnimInstance : UBaseSurvivorAnimInstance {
	float _rotationInterpSpeed; // 0x548(0x04)
	bool _isCrawling; // 0x54c(0x01)
	struct FRotator _toSlopeRotation; // 0x550(0x0c)
	struct UCharacterMovementComponent* _movementComponent; // 0x560(0x08)
	char pad_569[0x7]; // 0x569(0x07)
};

// Class DBDAnimation.OpenChestSurvivorSubAnimInstance
// Size: 0x570 (Inherited: 0x550)
struct UOpenChestSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isInteractingWithChest; // 0x548(0x01)
	struct FGameplayTag _interactionPhase; // 0x54c(0x0c)
	bool _isInteractingWithOpenChest; // 0x558(0x01)
	struct FVector _snapPosition; // 0x55c(0x0c)
	bool _isVomiting; // 0x568(0x01)
	char pad_56B[0x5]; // 0x56b(0x05)
};

// Class DBDAnimation.PalletAnimInstance
// Size: 0x2f0 (Inherited: 0x2d0)
struct UPalletAnimInstance : USleepingAnimInstance {
	bool _isPulledDown; // 0x2d0(0x01)
	bool _isBeingPulledUp; // 0x2d1(0x01)
	bool _isBeingDestroyed; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	float _isBeingDestroyedPlayRate; // 0x2d4(0x04)
	struct FAnimSequenceSelector _destroyPalletAnim; // 0x2d8(0x18)

	void OnBeingPulledUpStopped(); // Function DBDAnimation.PalletAnimInstance.OnBeingPulledUpStopped // (Final|Native|Private) // @ game+0x4bac4f0
	void OnBeingPulledUpStarted(struct ADBDPlayer* Player); // Function DBDAnimation.PalletAnimInstance.OnBeingPulledUpStarted // (Final|Native|Private) // @ game+0x4bac460
	void OnBeingDestroyedStopped(); // Function DBDAnimation.PalletAnimInstance.OnBeingDestroyedStopped // (Final|Native|Private) // @ game+0x4bac440
	void OnBeingDestroyedStarted(struct ADBDPlayer* Player); // Function DBDAnimation.PalletAnimInstance.OnBeingDestroyedStarted // (Final|Native|Private) // @ game+0x4bac3b0
};

// Class DBDAnimation.QuadrupedIKSubAnimInstance
// Size: 0x6b0 (Inherited: 0x2f0)
struct UQuadrupedIKSubAnimInstance : UDBDBaseAnimInstance {
	bool _enableIK; // 0x2f0(0x01)
	enum class ETraceTypeQuery _traceTypeQuery; // 0x2f1(0x01)
	bool _traceComplex; // 0x2f2(0x01)
	bool _ignoreTouches; // 0x2f3(0x01)
	struct FName _noGroundTag; // 0x2f4(0x0c)
	bool _adjustCamera; // 0x300(0x01)
	bool _adjustTail; // 0x301(0x01)
	bool _firstPersonView; // 0x302(0x01)
	char pad_303[0x1]; // 0x303(0x01)
	float _footIkSpeed; // 0x304(0x04)
	float _pelvisIkSpeed; // 0x308(0x04)
	float _pelvisIkSpeedFPV; // 0x30c(0x04)
	float _maxIKTargetDistance; // 0x310(0x04)
	float _pelvisRotationMinOffset; // 0x314(0x04)
	float _pelvisRotationMaxOffset; // 0x318(0x04)
	float _pelvisPositionOffsetMin; // 0x31c(0x04)
	float _pelvisPositionOffsetMax; // 0x320(0x04)
	float _pelvisPositionOffsetMinFPV; // 0x324(0x04)
	float _pelvisPositionOffsetMaxFPV; // 0x328(0x04)
	float _frontFeetLineTraceStartOffset; // 0x32c(0x04)
	float _frontFeetLineTraceEndOffset; // 0x330(0x04)
	float _backFeetLineTraceStartOffset; // 0x334(0x04)
	float _backFeetLineTraceEndOffset; // 0x338(0x04)
	float _frontFeetUpDisplacement; // 0x33c(0x04)
	float _frontFeetDownDisplacement; // 0x340(0x04)
	float _backFeetUpDisplacement; // 0x344(0x04)
	float _backFeetDownDisplacement; // 0x348(0x04)
	float _footDistance; // 0x34c(0x04)
	float _isMovingTolerance; // 0x350(0x04)
	float _ungroundedFeetDistance; // 0x354(0x04)
	struct FName _pelvisSocketName; // 0x358(0x0c)
	struct FName _cameraSocketName; // 0x364(0x0c)
	struct FName _tailSocketName; // 0x370(0x0c)
	struct FName _leftFrontFootSocketName; // 0x37c(0x0c)
	struct FName _leftFrontFootPoleSocketName; // 0x388(0x0c)
	struct FName _rightFrontFootSocketName; // 0x394(0x0c)
	struct FName _rightFrontFootPoleSocketName; // 0x3a0(0x0c)
	struct FName _leftBackFootSocketName; // 0x3ac(0x0c)
	struct FName _rightBackFootSocketName; // 0x3b8(0x0c)
	struct FName _leftFrontFootBoneName; // 0x3c4(0x0c)
	struct FName _rightFrontFootBoneName; // 0x3d0(0x0c)
	struct FName _leftBackFootBoneName; // 0x3dc(0x0c)
	struct FName _rightBackFootBoneName; // 0x3e8(0x0c)
	struct FVector _pelvisPositionOffset; // 0x3f4(0x0c)
	struct FRotator _worldPitch; // 0x400(0x0c)
	struct FRotator _cameraRotationOffset; // 0x40c(0x0c)
	struct FVector _cameraPositionOffset; // 0x418(0x0c)
	struct FRotator _tailRotationOffset; // 0x424(0x0c)
	struct FVector _tailPositionOffset; // 0x430(0x0c)
	struct FVector _leftFrontFootLocation; // 0x43c(0x0c)
	struct FVector _leftFrontFootPoleLocation; // 0x448(0x0c)
	struct FVector _leftFrontFootPoleCurrentLocation; // 0x454(0x0c)
	struct FVector _rightFrontFootPoleCurrentLocation; // 0x460(0x0c)
	struct FVector _rightFrontFootLocation; // 0x46c(0x0c)
	struct FVector _rightFrontFootPoleLocation; // 0x478(0x0c)
	struct FVector _leftBackFootLocation; // 0x484(0x0c)
	struct FVector _rightBackFootLocation; // 0x490(0x0c)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FTransform _leftBackFootTransform; // 0x4a0(0x30)
	struct FTransform _rightBackFootTransform; // 0x4d0(0x30)
	struct FRotator _leftFrontFootRotation; // 0x500(0x0c)
	struct FRotator _rightFrontFootRotation; // 0x50c(0x0c)
	struct FRotator _leftBackFootRotation; // 0x518(0x0c)
	struct FRotator _rightBackFootRotation; // 0x524(0x0c)
	struct USkeletalMeshComponent* _skeletalMeshComponent; // 0x530(0x08)
	struct UWorld* _world; // 0x538(0x08)
	char pad_540[0x170]; // 0x540(0x170)
};

// Class DBDAnimation.RepairGeneratorSubAnimInstance
// Size: 0x350 (Inherited: 0x2c0)
struct URepairGeneratorSubAnimInstance : UAnimInstance {
	struct AGenerator* _owningGenerator; // 0x2c0(0x08)
	bool _isBeingRepaired; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct ACamperPlayer* _repairingSurvivor; // 0x2d0(0x08)
	struct UAnimSequence* _animSequence; // 0x2d8(0x08)
	struct FGameplayTag _interactionTag; // 0x2e0(0x0c)
	struct FGameplayTag _currentAnimId; // 0x2ec(0x0c)
	struct TMap<struct FGameplayTag, struct UAnimSequence*> _taggedAnimSequences; // 0x2f8(0x50)
	char pad_348[0x8]; // 0x348(0x08)
};

// Class DBDAnimation.RepairGeneratorSurvivorSubAnimInstance
// Size: 0x5c0 (Inherited: 0x550)
struct URepairGeneratorSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	char pad_550[0x40]; // 0x550(0x40)
	struct FVector _snapPosition; // 0x590(0x0c)
	int32_t _side; // 0x59c(0x04)
	int32_t _repairAnimIndex; // 0x5a0(0x04)
	char pad_5A4[0xc]; // 0x5a4(0x0c)
	bool _isRepairingGenerator; // 0x5b0(0x01)
	bool _rightFootDown; // 0x5b1(0x01)
	char pad_5B2[0x2]; // 0x5b2(0x02)
	int32_t _animSequenceVariationCount; // 0x5b4(0x04)
	bool _isVomiting; // 0x5b8(0x01)
	bool _hasSkillCheckFailed; // 0x5b9(0x01)
	bool _isS34P01Accumulating; // 0x5ba(0x01)
	char pad_5BB[0x5]; // 0x5bb(0x05)
};

// Class DBDAnimation.SabotageSurvivorSubAnimInstance
// Size: 0x590 (Inherited: 0x550)
struct USabotageSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	char pad_550[0x38]; // 0x550(0x38)
	bool _isSabotaging; // 0x588(0x01)
	bool _hasSkillCheckFailed; // 0x589(0x01)
	char pad_58A[0x6]; // 0x58a(0x06)
};

// Class DBDAnimation.ScreamSurvivorSubAnimInstance
// Size: 0x550 (Inherited: 0x550)
struct UScreamSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _screamTrigger; // 0x548(0x01)

	void ResetScreamTrigger(); // Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger // (Final|Native|Protected|BlueprintCallable) // @ game+0x4bae990
};

// Class DBDAnimation.SkillCheckFailureTracker
// Size: 0x30 (Inherited: 0x30)
struct USkillCheckFailureTracker : UInterface {

	void ResetSkillCheckFailed(); // Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed // (Native|Public|BlueprintCallable) // @ game+0x46ce170
	void OnSkillCheckFailed(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed // (Native|Protected|HasOutParms) // @ game+0x4bae860
};

// Class DBDAnimation.SteamPipeResetSwitchAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct USteamPipeResetSwitchAnimInstance : UAnimInstance {
	bool _handleIsDown; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct ASteamPipeResetSwitch* _resetSwitch; // 0x2c8(0x08)
};

// Class DBDAnimation.SurvivorAimableArmSensor
// Size: 0x178 (Inherited: 0x138)
struct USurvivorAimableArmSensor : UArmIKSensorComponent {
	char pad_138[0x18]; // 0x138(0x18)
	struct ACollectable* _aimableCollectable; // 0x150(0x08)
	struct UAimableComponent* _aimable; // 0x158(0x08)
	char pad_160[0x18]; // 0x160(0x18)
};

// Class DBDAnimation.SurvivorAimableSubAnimInstance
// Size: 0x580 (Inherited: 0x550)
struct USurvivorAimableSubAnimInstance : UBaseSurvivorAnimInstance {
	float _pitch; // 0x548(0x04)
	bool _isHoldingAimItem; // 0x54c(0x01)
	bool _isAiming; // 0x54d(0x01)
	float _isAimingAlpha; // 0x550(0x04)
	struct FVector _aimPoint; // 0x554(0x0c)
	float _shoulderToCollisionDistance; // 0x560(0x04)
	char pad_56A[0x16]; // 0x56a(0x16)
};

// Class DBDAnimation.SurvivorAnimInstance
// Size: 0x670 (Inherited: 0x550)
struct USurvivorAnimInstance : UBaseSurvivorAnimInstance {
	struct ACamperPlayer* CamperPlayer; // 0x548(0x08)
	bool IsHooked; // 0x550(0x01)
	bool IsSacrificeStruggling; // 0x551(0x01)
	struct UAnimMontage* MontageMadnessTierUp; // 0x558(0x08)
	struct TArray<struct UAnimCompositeBase*> ArrayCarryAttackMontage; // 0x560(0x10)
	enum class EIntroState _introState; // 0x570(0x01)
	bool _isFrightScreaming; // 0x571(0x01)
	bool IsBeingCarried; // 0x572(0x01)
	bool IsBeingPutOnHook; // 0x573(0x01)
	bool isCrouched; // 0x574(0x01)
	enum class EGuidedState GuidedAction; // 0x575(0x01)
	bool IsCrawling; // 0x576(0x01)
	bool IsDead; // 0x577(0x01)
	float MaxSpeed; // 0x578(0x04)
	bool IsInsideCloset; // 0x57c(0x01)
	char pad_57F[0x1]; // 0x57f(0x01)
	float IsPlayingMadnessTierUpWeight; // 0x580(0x04)
	bool IsBeingKilled; // 0x584(0x01)
	bool IsBeingHealed; // 0x585(0x01)
	bool IsCarryAttackSucess; // 0x586(0x01)
	bool IsUsingAimItem; // 0x587(0x01)
	bool IsHoldingAimItem; // 0x588(0x01)
	bool AllowLookAt; // 0x589(0x01)
	char pad_58A[0x2]; // 0x58a(0x02)
	float DropStaggerTimeLeft; // 0x58c(0x04)
	float RightArmIKAlpha; // 0x590(0x04)
	char pad_594[0xc]; // 0x594(0x0c)
	struct FTransform RightHandIKTransform; // 0x5a0(0x30)
	bool Strafe; // 0x5d0(0x01)
	bool IsInteracting; // 0x5d1(0x01)
	bool Injured; // 0x5d2(0x01)
	enum class EInteractionAnimation interactionType; // 0x5d3(0x01)
	enum class EInteractionAnimation PreviousInteractionType; // 0x5d4(0x01)
	bool IsSlasherInFPV; // 0x5d5(0x01)
	char pad_5D6[0x2]; // 0x5d6(0x02)
	float CarriedAlpha; // 0x5d8(0x04)
	bool IsHoldingHandleItem; // 0x5dc(0x01)
	bool IsHoldingSmallItem; // 0x5dd(0x01)
	bool IsHoldingFirecracker; // 0x5de(0x01)
	bool IsHoldingFlashbang; // 0x5df(0x01)
	bool IsHoldingVaccine; // 0x5e0(0x01)
	bool IsHoldingAnyItem; // 0x5e1(0x01)
	bool IsHoldingLamentConfiguration; // 0x5e2(0x01)
	bool IsHoldingFragileObject; // 0x5e3(0x01)
	bool IsHoldingSprayObject; // 0x5e4(0x01)
	bool IsHoldingVHS; // 0x5e5(0x01)
	bool IsHoldingWormholeFatherKeyCard; // 0x5e6(0x01)
	bool IsArmOverrideDisabled; // 0x5e7(0x01)
	bool InAir; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	float _walkAnimSpeed; // 0x5ec(0x04)
	float Direction; // 0x5f0(0x04)
	float Pitch; // 0x5f4(0x04)
	float Yaw; // 0x5f8(0x04)
	struct FVector RightFootEffectorLocation; // 0x5fc(0x0c)
	struct FVector LeftFootEffectorLocation; // 0x608(0x0c)
	bool Idle; // 0x614(0x01)
	bool HasAnyMontagePlaying; // 0x615(0x01)
	char pad_616[0x2]; // 0x616(0x02)
	struct FName CurrentlyPlayerMontageId; // 0x618(0x0c)
	bool IsBeingCarriedByTheSpirit; // 0x624(0x01)
	bool IsBeingCarriedByTheNightmare; // 0x625(0x01)
	bool IsBeingCarriedByThePig; // 0x626(0x01)
	bool IsBeingCarriedByTheHag; // 0x627(0x01)
	bool IsBeingCarriedByTheLegion; // 0x628(0x01)
	bool IsBeingCarriedByTheGhostFace; // 0x629(0x01)
	bool IsPlayingWakeUpOther; // 0x62a(0x01)
	bool IsPlayingFreddyMori; // 0x62b(0x01)
	bool HasLinkInput; // 0x62c(0x01)
	bool _isMale; // 0x62d(0x01)
	char pad_62E[0x2]; // 0x62e(0x02)
	float _animMontageLeaderForwardVelocity; // 0x630(0x04)
	float _animMontageLeaderLateralVelocity; // 0x634(0x04)
	char pad_638[0x38]; // 0x638(0x38)

	void SetAudioRummageAkEvent(struct FName distance); // Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInfectiousFrightScream(); // Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AddAudioRepairRateRadius(int32_t distance); // Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDAnimation.WakerObjectAnimInstance
// Size: 0x300 (Inherited: 0x2c0)
struct UWakerObjectAnimInstance : UAnimInstance {
	float _reappearTimerCooldown; // 0x2c0(0x04)
	float _wakeUpCharge; // 0x2c4(0x04)
	bool _chargeStarted; // 0x2c8(0x01)
	bool _interactionComplete; // 0x2c9(0x01)
	bool _outEnd; // 0x2ca(0x01)
	bool _reset; // 0x2cb(0x01)
	bool _inEnd; // 0x2cc(0x01)
	bool _wakerObjectStarted; // 0x2cd(0x01)
	bool _respawnEnd; // 0x2ce(0x01)
	bool _cancelEnd; // 0x2cf(0x01)
	char pad_2D0[0x30]; // 0x2d0(0x30)

	void ResetReappearTimer(); // Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer // (Final|Native|Private|BlueprintCallable) // @ game+0x4bae970
	void OnReappear(); // Function DBDAnimation.WakerObjectAnimInstance.OnReappear // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool GetWakerObjectStarted(); // Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bae830
	bool GetWakerObjectChargeComplete(); // Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bae800
	float GetWakerObjectCharge(); // Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bae7d0
	struct AWakerObject* GetWakerObject(); // Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bae7a0
};

