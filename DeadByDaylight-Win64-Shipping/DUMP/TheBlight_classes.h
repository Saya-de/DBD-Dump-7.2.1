// Class TheBlight.ActivateBlightPower
// Size: 0x760 (Inherited: 0x760)
struct UActivateBlightPower : UChargeableInteractionDefinition {
};

// Class TheBlight.Addon_TheBlight_14
// Size: 0x2c8 (Inherited: 0x2b8)
struct UAddon_TheBlight_14 : UItemAddon {
	float _speedIncreasePerDash; // 0x2b8(0x04)
	char pad_2BC[0xc]; // 0x2bc(0x0c)
};

// Class TheBlight.Addon_TheBlight_15
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_TheBlight_15 : UOnEventBaseAddon {
	float _palletPulldownBlockRange; // 0x2c8(0x04)
	float _palletPulldownBlockSeconds; // 0x2cc(0x04)
};

// Class TheBlight.Addon_TheBlight_18
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_TheBlight_18 : UOnEventBaseAddon {
	float _survivorInRangeDistance; // 0x2c8(0x04)
	float _hinderedSeconds; // 0x2cc(0x04)

	void SpawnParticleOnSurvivor(struct ACamperPlayer* CamperPlayer); // Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_SpawnParticleOnSurvivors(struct TArray<struct ACamperPlayer*> survivors); // Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x569c5a0
};

// Class TheBlight.Addon_TheBlight_19
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_TheBlight_19 : UItemAddon {
	struct UStatusEffect* _blightUndetectableEffect; // 0x2b8(0x08)
};

// Class TheBlight.Addon_TheBlight_20
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_TheBlight_20 : UItemAddon {
	float _survivorInRangeDistance; // 0x2b8(0x04)
	float _survivorRevealTime; // 0x2bc(0x04)
};

// Class TheBlight.Addon_TheBlight_21
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_TheBlight_21 : UItemAddon {
	struct UStatusEffect* _forceKoStatusEffect; // 0x2b8(0x08)
};

// Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus
// Size: 0x2c8 (Inherited: 0x2b8)
struct UAddon_TheBlight_ConsecutiveDashSpeedBonus : UItemAddon {
	float _speedIncreasePerDash; // 0x2b8(0x04)
	char pad_2BC[0xc]; // 0x2bc(0x0c)
};

// Class TheBlight.Addon_TheBlight_SoulChemical
// Size: 0x318 (Inherited: 0x2b8)
struct UAddon_TheBlight_SoulChemical : UItemAddon {
	float _triggerDistance; // 0x2b8(0x04)
	enum class ESkillCheckCustomType _skillCheckType; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct FGameplayTagContainer _interactionSemantics; // 0x2c0(0x20)
	struct FGameplayTagContainer _blightPowerStateTag; // 0x2e0(0x20)
	char pad_300[0x18]; // 0x300(0x18)
};

// Class TheBlight.BlightAnimInstance
// Size: 0x630 (Inherited: 0x610)
struct UBlightAnimInstance : UKillerAnimInstance {
	struct UBlightPowerStateComponent* _blightPowerStateComponent; // 0x610(0x08)
	enum class EWallGrabState _powerState; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float _stateTimeRemaining; // 0x61c(0x04)
	float _lookAngle; // 0x620(0x04)
	char pad_624[0xc]; // 0x624(0x0c)
};

// Class TheBlight.BlightAttackPicker
// Size: 0xb8 (Inherited: 0xb8)
struct UBlightAttackPicker : USlasherAttackPickerComponent {
};

// Class TheBlight.BlightDashAttack
// Size: 0x390 (Inherited: 0x390)
struct UBlightDashAttack : UPounceAttack {
};

// Class TheBlight.BlightDashAttackOpenSubstate
// Size: 0x130 (Inherited: 0x130)
struct UBlightDashAttackOpenSubstate : UPounceAttackOpenSubstate {
};

// Class TheBlight.BlightDashAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UBlightDashAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheBlight.BlightDashAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UBlightDashAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheBlight.BlightDashAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UBlightDashAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheBlight.BlightPower
// Size: 0x620 (Inherited: 0x4c8)
struct ABlightPower : ACollectable {
	struct UPowerChargeComponent* _blightPowerCharge; // 0x4c8(0x08)
	struct UPowerToggleComponent* _blightPowerToggle; // 0x4d0(0x08)
	struct UChargeableComponent* _blightPowerActivateChargeable; // 0x4d8(0x08)
	struct UBlightPowerStateComponent* _blightPowerStateComponent; // 0x4e0(0x08)
	struct FDBDTunableRowHandle _blightPowerActivateMaxCharge; // 0x4e8(0x28)
	struct FTunableStat _blightPowerMaxCharge; // 0x510(0x80)
	struct FDBDTunableRowHandle _blightPowerDechargeRate; // 0x590(0x28)
	struct FDBDTunableRowHandle _blightPowerRechargeRate; // 0x5b8(0x28)
	char pad_5E0[0x40]; // 0x5e0(0x40)

	void OnPowerStateChanged(enum class EWallGrabState previousState, enum class EWallGrabState NewState); // Function TheBlight.BlightPower.OnPowerStateChanged // (Final|Native|Private) // @ game+0x569c660
};

// Class TheBlight.BlightPowerEstimatedCollisionIndicator
// Size: 0x238 (Inherited: 0x230)
struct ABlightPowerEstimatedCollisionIndicator : AActor {
	char pad_230[0x8]; // 0x230(0x08)

	void OnShowIndicator_Cosmetic(); // Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnHideIndicator_Cosmetic(); // Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheBlight.BlightPowerState
// Size: 0x180 (Inherited: 0x30)
struct UBlightPowerState : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct UCurveFloat* _stateSpeedCurve; // 0x40(0x08)
	struct FTunableStat _stateDuration; // 0x48(0x80)
	struct FDBDTunableRowHandle _cameraPitchRecenterTime; // 0xc8(0x28)
	struct FDBDTunableRowHandle _wallDashCollisionRadius; // 0xf0(0x28)
	struct FDBDTunableRowHandle _wallDashCollisionHeight; // 0x118(0x28)
	struct FDBDTunableRowHandle _wallDashCollisionRange; // 0x140(0x28)
	bool _playerCanCancelEarly; // 0x168(0x01)
	char pad_169[0xf]; // 0x169(0x0f)
	bool _displayCollisionIndicator; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	float GetStateDuration(); // Function TheBlight.BlightPowerState.GetStateDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c430
};

// Class TheBlight.BlightPowerStateAdjusting
// Size: 0x1c0 (Inherited: 0x180)
struct UBlightPowerStateAdjusting : UBlightPowerState {
	bool _adjustRotationOnCollision; // 0x180(0x01)
	bool _bounceAwayFromCollision; // 0x181(0x01)
	bool _allowNavigation; // 0x182(0x01)
	bool _smashBreakables; // 0x183(0x01)
	char pad_184[0x4]; // 0x184(0x04)
	struct FDBDTunableRowHandle _maxDistanceForSurvivorFacing; // 0x188(0x28)
	char pad_1B0[0x10]; // 0x1b0(0x10)
};

// Class TheBlight.BlightPowerStateDash
// Size: 0x250 (Inherited: 0x180)
struct UBlightPowerStateDash : UBlightPowerState {
	char pad_180[0x8]; // 0x180(0x08)
	struct FTunableStat _vectorInterpToSpeed; // 0x188(0x80)
	struct UCurveFloat* _noDashTimeLimitSpeedCurve; // 0x208(0x08)
	struct UCurveFloat* _lookAngleToTurnRateCurveController; // 0x210(0x08)
	struct UCurveFloat* _lookAngleToTurnRateCurveMouse; // 0x218(0x08)
	struct UCurveFloat* _lookAngleToMaxTurnRateCurveMouse; // 0x220(0x08)
	char pad_228[0x28]; // 0x228(0x28)
};

// Class TheBlight.BlightPowerStateAttack
// Size: 0x278 (Inherited: 0x250)
struct UBlightPowerStateAttack : UBlightPowerStateDash {
	char pad_250[0x28]; // 0x250(0x28)
};

// Class TheBlight.BlightPowerStateComponent
// Size: 0x360 (Inherited: 0xb8)
struct UBlightPowerStateComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnPowerCollided; // 0xd0(0x10)
	struct TArray<struct UBlightPowerState*> _blightPowerStateClasses; // 0xe0(0x10)
	struct FDBDTunableRowHandle _canDashCheckCollisionRadius; // 0xf0(0x28)
	struct FDBDTunableRowHandle _canDashCheckCollisionHeight; // 0x118(0x28)
	struct FDBDTunableRowHandle _canDashCheckCollisionRange; // 0x140(0x28)
	struct FGameplayTagContainer _canWallGrabPlayerTags; // 0x168(0x20)
	struct FDBDTunableRowHandle _blightLethalDashDodgeRadius; // 0x188(0x28)
	struct UInteractionDefinition* _powerInteractionDefinition; // 0x1b0(0x08)
	char pad_1B8[0x18]; // 0x1b8(0x18)
	struct UTimerObject* _stateTimer; // 0x1d0(0x08)
	struct TArray<struct UBlightPowerState*> _blightPowerStates; // 0x1d8(0x10)
	struct UBlightPowerState* _currentBlightPowerState; // 0x1e8(0x08)
	char _dashTokens; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FTunableStat _maximumDashTokens; // 0x1f8(0x80)
	struct FTunableStat _tokenChargeRate; // 0x278(0x80)
	char pad_2F8[0x68]; // 0x2f8(0x68)

	void Server_SetWallGrabState(enum class EWallGrabState NewState); // Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x569c790
	void ResetDashTokens(); // Function TheBlight.BlightPowerStateComponent.ResetDashTokens // (Final|Native|Public|BlueprintCallable) // @ game+0x569c770
	void OnRep_StateTimer(); // Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer // (Final|Native|Private) // @ game+0x569c750
	void OnRep_DashTokens(); // Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens // (Final|Native|Private) // @ game+0x569c730
	void OnLevelReadyToPlay(); // Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x569c640
	void Multicast_SetWallGrabState(enum class EWallGrabState NewState); // Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0x569c4f0
	float GetStateTimeRemaining(); // Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c4a0
	struct UTimerObject* GetStateTimer(); // Function TheBlight.BlightPowerStateComponent.GetStateTimer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c4d0
	float GetStateTimeElapsed(); // Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c460
	struct UBlightPowerState* GetPowerStateByEnum(enum class EWallGrabState StateEnum); // Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c370
	enum class EWallGrabState GetPowerState(); // Function TheBlight.BlightPowerStateComponent.GetPowerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c340
	float GetLookAngleDegrees(); // Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c2e0
	char GetDashTokensRemaining(); // Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c2c0
	struct UBlightPowerState* GetCurrentPowerState(); // Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c290
	bool CanDash(); // Function TheBlight.BlightPowerStateComponent.CanDash // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c250
};

// Class TheBlight.BlightPowerStateCooldown
// Size: 0x180 (Inherited: 0x180)
struct UBlightPowerStateCooldown : UBlightPowerState {
};

// Class TheBlight.BlightPowerStateHolding
// Size: 0x1c0 (Inherited: 0x180)
struct UBlightPowerStateHolding : UBlightPowerState {
	struct FSecondaryInteractionProperties _secondaryInteractionProperties; // 0x180(0x38)
	bool _allowNavigation; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float _dashSpeedForProjection; // 0x1bc(0x04)
};

// Class TheBlight.BlightPowerStateInterface
// Size: 0x30 (Inherited: 0x30)
struct UBlightPowerStateInterface : UInterface {
};

// Class TheBlight.BlightPowerStateLethalDash
// Size: 0x290 (Inherited: 0x250)
struct UBlightPowerStateLethalDash : UBlightPowerStateDash {
	struct FSecondaryInteractionProperties _secondaryInteractionProperties; // 0x250(0x38)
	bool _smashBreakables; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
};

// Class TheBlight.BlightPowerStateNonLethalDash
// Size: 0x258 (Inherited: 0x250)
struct UBlightPowerStateNonLethalDash : UBlightPowerStateDash {
	bool _smashBreakables; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
};

// Class TheBlight.BlightPowerStateReady
// Size: 0x180 (Inherited: 0x180)
struct UBlightPowerStateReady : UBlightPowerState {
};

// Class TheBlight.BuiltToLast
// Size: 0x3f0 (Inherited: 0x3c8)
struct UBuiltToLast : UPerk {
	float _refillPercentage[0x3]; // 0x3c8(0x0c)
	float _hideDuration[0x3]; // 0x3d4(0x0c)
	char _numberOfTimesPerkTriggered; // 0x3e0(0x01)
	char pad_3E1[0xf]; // 0x3e1(0x0f)

	void OnBuiltToLastTrigger_Cosmetic(); // Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetRefillPercentageByLevel(); // Function TheBlight.BuiltToLast.GetRefillPercentageByLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetHideDurationByLevel(); // Function TheBlight.BuiltToLast.GetHideDurationByLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
};

// Class TheBlight.DesperateMeasures
// Size: 0x3d8 (Inherited: 0x3c8)
struct UDesperateMeasures : UPerk {
	float _healAndUnhookMultiplier[0x3]; // 0x3c8(0x0c)
	int32_t _nbInjuredHookedOrDyingSurvivors; // 0x3d4(0x04)
};

// Class TheBlight.DragonsGrip
// Size: 0x428 (Inherited: 0x3c8)
struct UDragonsGrip : UPerk {
	struct AGenerator* _kickedGenerator; // 0x3c8(0x08)
	float _activationDuration[0x3]; // 0x3d0(0x0c)
	float _cooldownDuration[0x3]; // 0x3dc(0x0c)
	float _exposedEffectDuration[0x3]; // 0x3e8(0x0c)
	bool _onlyExposeFirstSurvivor; // 0x3f4(0x01)
	char pad_3F5[0xb]; // 0x3f5(0x0b)
	struct FDBDTunableRowHandle _loudNoiseRange; // 0x400(0x28)

	void OnRevealSurvivor(struct ADBDPlayer* Instigator); // Function TheBlight.DragonsGrip.OnRevealSurvivor // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_OnRevealSurvivor(struct ADBDPlayer* Survivor); // Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceef10
	float GetExposedEffectDurationAtLevel(); // Function TheBlight.DragonsGrip.GetExposedEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd750
	float GetCooldownDurationAtLevel(); // Function TheBlight.DragonsGrip.GetCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf5600
	float GetActivationDurationAtLevel(); // Function TheBlight.DragonsGrip.GetActivationDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
};

// Class TheBlight.HexBloodFavor
// Size: 0x460 (Inherited: 0x448)
struct UHexBloodFavor : UHexPerk {
	float _palletInRange[0x3]; // 0x448(0x0c)
	float _palletPulldownBlockTime[0x3]; // 0x454(0x0c)

	float GetPalletPulldownBlockTimeAtLevel(); // Function TheBlight.HexBloodFavor.GetPalletPulldownBlockTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c310
	float GetPalletInRangeAtLevel(); // Function TheBlight.HexBloodFavor.GetPalletInRangeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce25c0
};

// Class TheBlight.HexUndying
// Size: 0x4b0 (Inherited: 0x448)
struct UHexUndying : UHexPerk {
	char pad_448[0x58]; // 0x448(0x58)
	float _revealAuraDistanceFromTotem[0x3]; // 0x4a0(0x0c)
	char pad_4AC[0x4]; // 0x4ac(0x04)

	float GetRevealAuraDistanceFromTotemAtLevel(); // Function TheBlight.HexUndying.GetRevealAuraDistanceFromTotemAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569c400
	void Authority_UpdateHexPerkStatusView(struct UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable); // Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView // (Final|Native|Private) // @ game+0x569c180
	void Authority_OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function TheBlight.HexUndying.Authority_OnSurvivorAdded // (Final|Native|Private) // @ game+0x569c0f0
	void Authority_OnCamperCleansedHexPerk(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk // (Final|Native|Private|HasOutParms) // @ game+0x569bfe0
};

// Class TheBlight.Visionary
// Size: 0x3e0 (Inherited: 0x3c8)
struct UVisionary : UPerk {
	float _auraVisibilityRange[0x3]; // 0x3c8(0x0c)
	float _cooldownDuration[0x3]; // 0x3d4(0x0c)

	float GetRangeAtLevel(); // Function TheBlight.Visionary.GetRangeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetCooldownAtLevel(); // Function TheBlight.Visionary.GetCooldownAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
};

// Class TheBlight.WallGrabInteractionDefinition
// Size: 0x670 (Inherited: 0x630)
struct UWallGrabInteractionDefinition : UInteractionDefinition {
	struct UBlightPowerStateComponent* _blightPowerStateComponent; // 0x630(0x08)
	struct FDBDTunableRowHandle _wallDashAccelerationMultiplier; // 0x638(0x28)
	struct ABlightPowerEstimatedCollisionIndicator* _blightPowerCollisionIndicator; // 0x660(0x08)
	struct ABlightPowerEstimatedCollisionIndicator* _collisionIndicatorActorClass; // 0x668(0x08)
};

