// Class TheNurse.ActivateByBlinkAttackTimedEffect
// Size: 0x358 (Inherited: 0x350)
struct UActivateByBlinkAttackTimedEffect : UStatusEffect {
	float _activationDuration; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
};

// Class TheNurse.AnxiousGaspAddon
// Size: 0x348 (Inherited: 0x2b8)
struct UAnxiousGaspAddon : UItemAddon {
	struct UAkAudioEvent* _screamSoundEvent; // 0x2b8(0x08)
	struct FGameplayTag _scoreEventTag; // 0x2c0(0x0c)
	float _detectionCapsuleHalfHeight; // 0x2cc(0x04)
	float _detectionCapsuleRadius; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UCapsuleComponent* _survivorDetector; // 0x2d8(0x08)
	struct TSet<struct AActor*> _alreadyDetectedPlayers; // 0x2e0(0x50)
	char pad_330[0x18]; // 0x330(0x18)

	void PlayScream(struct ACamperPlayer* Survivor); // Function TheNurse.AnxiousGaspAddon.PlayScream // (BlueprintCosmetic|Event|Protected|BlueprintEvent|Const) // @ game+0x5e02c90
	void OnDetectorOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x59e6190
};

// Class TheNurse.BaseInstantBlinkInteraction
// Size: 0x660 (Inherited: 0x630)
struct UBaseInstantBlinkInteraction : UInteractionDefinition {
	float _blinkTimePercentage; // 0x630(0x04)
	char pad_634[0x2c]; // 0x634(0x2c)
};

// Class TheNurse.AutomaticBlinkInteraction
// Size: 0x6a0 (Inherited: 0x660)
struct UAutomaticBlinkInteraction : UBaseInstantBlinkInteraction {
	float _blinkDistancePercent; // 0x660(0x04)
	char pad_664[0x3c]; // 0x664(0x3c)
};

// Class TheNurse.BadMansLastBreathAddon
// Size: 0x2e0 (Inherited: 0x2b8)
struct UBadMansLastBreathAddon : UItemAddon {
	float _activationDuration; // 0x2b8(0x04)
	float _cooldownDuration; // 0x2bc(0x04)
	struct UStatusEffect* _badMansLastBreathCooldownIndicatorStatusEffect; // 0x2c0(0x08)
	struct UStatusEffect* _badMansLastBreathUndetectableStatusEffect; // 0x2c8(0x08)
	struct UStatusEffect* _cooldownIndicator; // 0x2d0(0x08)
	struct UStatusEffect* _undetectableEffect; // 0x2d8(0x08)
};

// Class TheNurse.BalancedLanding
// Size: 0x448 (Inherited: 0x3c8)
struct UBalancedLanding : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct UStatusEffect* _staggerReductionEffect; // 0x3d0(0x08)
	struct UStatusEffect* _activableExhaustedEffect; // 0x3d8(0x08)
	float _sprintDuration; // 0x3e0(0x04)
	float _exhaustionDurationPerLevel[0x3]; // 0x3e4(0x0c)
	struct UActivatableExhaustedEffect* _exhaustedEffect; // 0x3f0(0x08)
	char pad_3F8[0x50]; // 0x3f8(0x50)

	void Server_WarnBalancedLandingPredicted(); // Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted // (Final|Net|NetReliableNative|Event|Private|NetServer|BlueprintCallable) // @ game+0x55b2e70
	float GetSprintDuration(); // Function TheNurse.BalancedLanding.GetSprintDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf41d0
	float GetExhaustionDurationAtLevel(); // Function TheNurse.BalancedLanding.GetExhaustionDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd660
	void Client_UnvalidateBalanceLanding(); // Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x4ceeef0
};

// Class TheNurse.BaseNursePerk
// Size: 0x480 (Inherited: 0x480)
struct UBaseNursePerk : USpawningEffectPerk {
};

// Class TheNurse.BlinkAttack
// Size: 0x390 (Inherited: 0x390)
struct UBlinkAttack : UPounceAttack {
};

// Class TheNurse.BlinkAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UBlinkAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class TheNurse.BlinkBackInteraction
// Size: 0x660 (Inherited: 0x660)
struct UBlinkBackInteraction : UBaseInstantBlinkInteraction {
};

// Class TheNurse.BlinkIndicatorController
// Size: 0x140 (Inherited: 0xb8)
struct UBlinkIndicatorController : UActorComponent {
	struct AActor* _indicatorClass; // 0xb8(0x08)
	struct FGameplayTag _activationFlag; // 0xc0(0x0c)
	float _indicatorMinimumVelocity; // 0xcc(0x04)
	float _indicatorVelocityEasingFactor; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct AActor* _indicator; // 0xd8(0x08)
	char pad_E0[0x60]; // 0xe0(0x60)
};

// Class TheNurse.BlinkInteraction
// Size: 0x880 (Inherited: 0x760)
struct UBlinkInteraction : UChargeableInteractionDefinition {
	char pad_760[0x58]; // 0x760(0x58)
	struct FStatProperty _chargeTime; // 0x7b8(0x88)
	char pad_840[0x40]; // 0x840(0x40)
};

// Class TheNurse.BlinkPlayerComponent
// Size: 0x1f0 (Inherited: 0xb8)
struct UBlinkPlayerComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FTunableStat _maxBlinkDuration; // 0xd0(0x80)
	struct FDBDTunableRowHandle _minBlinkDuration; // 0x150(0x28)
	struct UCurveFloat* _blinkFOVCurve; // 0x178(0x08)
	char pad_180[0x70]; // 0x180(0x70)

	void Server_StartBlink(struct FBlinkParams Params); // Function TheNurse.BlinkPlayerComponent.Server_StartBlink // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x59e7900
	void Server_EndBlink(); // Function TheNurse.BlinkPlayerComponent.Server_EndBlink // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4aa7040
	void Multicast_StartBlink(struct FBlinkParams Params); // Function TheNurse.BlinkPlayerComponent.Multicast_StartBlink // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x59e7860
	void Multicast_EndBlink(); // Function TheNurse.BlinkPlayerComponent.Multicast_EndBlink // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	void Local_OnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged // (Final|Native|Private) // @ game+0x59e7750
};

// Class TheNurse.BlinkPowerDebugComponent
// Size: 0x128 (Inherited: 0xb8)
struct UBlinkPowerDebugComponent : UActorComponent {
	char pad_B8[0x70]; // 0xb8(0x70)
};

// Class TheNurse.BlinkPowerEventDispatcher
// Size: 0x2a0 (Inherited: 0xb8)
struct UBlinkPowerEventDispatcher : UActorComponent {
	struct FMulticastInlineDelegate OnFinishPlaying; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnStartBlinkChargeEvent; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnUpdateBlinkChargeEvent; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnStopBlinkChargeEvent; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnEnterBlinkEvent; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnUpdateBlinkEvent; // 0x108(0x10)
	struct FMulticastInlineDelegate OnExitBlinkEvent; // 0x118(0x10)
	struct FMulticastInlineDelegate OnEnterChainBlinkEvent; // 0x128(0x10)
	struct FMulticastInlineDelegate OnUpdateChainBlinkEvent; // 0x138(0x10)
	struct FMulticastInlineDelegate OnExitChainBlinkEvent; // 0x148(0x10)
	struct FMulticastInlineDelegate OnEnterCooldownEvent; // 0x158(0x10)
	struct FMulticastInlineDelegate OnUpdateCooldownEvent; // 0x168(0x10)
	struct FMulticastInlineDelegate OnExitCooldownEvent; // 0x178(0x10)
	struct FMulticastInlineDelegate OnIsBlinkingChangedEvent; // 0x188(0x10)
	struct FMulticastInlineDelegate OnIsChargingBlinkChangedEvent; // 0x198(0x10)
	struct FMulticastInlineDelegate OnBlinkChargeFullEvent; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnBlinkPowerStateChangedEvent; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnBlinkChargesChangedEvent; // 0x1c8(0x10)
	char pad_1D8[0xc8]; // 0x1d8(0xc8)
};

// Class TheNurse.BlinkPowerItem
// Size: 0x4f0 (Inherited: 0x4c8)
struct ABlinkPowerItem : ACollectable {
	struct UInteractor* _powerInteractor; // 0x4c8(0x08)
	struct UChargeableComponent* _blinkChargeable; // 0x4d0(0x08)
	char pad_4D8[0x18]; // 0x4d8(0x18)
};

// Class TheNurse.BlinkPowerPlayerComponent
// Size: 0x5d0 (Inherited: 0xb8)
struct UBlinkPowerPlayerComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct FTunableStat _maxBlinkCharges; // 0xe8(0x80)
	struct FTunableStat _rechargeDuration; // 0x168(0x80)
	struct FTunableStat _chainBlinkDuration; // 0x1e8(0x80)
	struct FGameplayTagContainer _allowedInteractionSemancticsDuringChainBlink; // 0x268(0x20)
	struct FTunableStat _fatigueDuration; // 0x288(0x80)
	struct FTunableStat _fatigueChainBlinkPenalty; // 0x308(0x80)
	struct FTunableStat _fatigueAttackPenalty; // 0x388(0x80)
	struct FGameplayTag _fatigueAttackMissPenaltyModifier; // 0x408(0x0c)
	char pad_414[0x4]; // 0x414(0x04)
	struct UCurveFloat* _fatigueSpeedCurve; // 0x418(0x08)
	char pad_420[0xac]; // 0x420(0xac)
	enum class EBlinkPowerState _powerState; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	int32_t _blinkCharges; // 0x4d0(0x04)
	bool _wasCurrentChargeSetByRecharge; // 0x4d4(0x01)
	char pad_4D5[0xdb]; // 0x4d5(0xdb)
	struct UTimerObject* _chainBlinkTimer; // 0x5b0(0x08)
	struct UTimerObject* _cooldownTimer; // 0x5b8(0x08)
	struct UTimerObject* _rechargeTimer; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void Setup(struct FBlinkPowerSetupParams& Params); // Function TheNurse.BlinkPowerPlayerComponent.Setup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x59e8b90
	void Server_TriggerCooldown(float Duration); // Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x553b7f0
	void Server_TriggerChainBlink(int32_t remainingBlinkCharges, float blinkTimeStamp); // Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x59e8ac0
	void Server_SetState(enum class EBlinkPowerState State); // Function TheNurse.BlinkPowerPlayerComponent.Server_SetState // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x54c82d0
	void Server_InterruptDuringChainBlink(struct AActor* interruptedPlayer); // Function TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x55700e0
	void OnRep_BlinkState(enum class EBlinkPowerState oldState); // Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState // (Final|Native|Private) // @ game+0x59e8a40
	void OnRep_BlinkCharges(); // Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges // (Final|Native|Private) // @ game+0x59e8a20
	void OnLevelReadyToPlay(); // Function TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x59e8a00
	void OnAttackStarted(enum class EAttackType attackType); // Function TheNurse.BlinkPowerPlayerComponent.OnAttackStarted // (Final|Native|Private) // @ game+0x59e8980
	void OnAttackFinished(enum class EAttackType attackType); // Function TheNurse.BlinkPowerPlayerComponent.OnAttackFinished // (Final|Native|Private) // @ game+0x59e8900
	bool IsChargingBlink(); // Function TheNurse.BlinkPowerPlayerComponent.IsChargingBlink // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e88d0
	bool IsChargeFull(); // Function TheNurse.BlinkPowerPlayerComponent.IsChargeFull // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e88a0
	bool IsBlinking(); // Function TheNurse.BlinkPowerPlayerComponent.IsBlinking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e8870
	float GetRechargeProgressPercent(); // Function TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e8840
	enum class EBlinkPowerState GetPowerState(); // Function TheNurse.BlinkPowerPlayerComponent.GetPowerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e8810
	float GetCooldownTimerDuration(); // Function TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e87e0
	float GetCooldownRemainingTime(); // Function TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e87b0
	float GetCooldownProgressPercent(); // Function TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e8780
	float GetChainBlinkTimerDuration(); // Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e8750
	float GetChainBlinkRemainingTime(); // Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e8720
	float GetChainBlinkProgressPercent(); // Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e86f0
	int32_t GetBlinkCharges(); // Function TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59e86c0
};

// Class TheNurse.BlinkTargetFinder
// Size: 0x1e8 (Inherited: 0xb8)
struct UBlinkTargetFinder : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _minDistance; // 0xd0(0x28)
	struct FTunableStat _maxDistance; // 0xf8(0x80)
	float _floorRaycastStartZOffset; // 0x178(0x04)
	float _floorRaycastLength; // 0x17c(0x04)
	float _locationClearStepHeight; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<float> _horizontalSamplePercentages; // 0x188(0x10)
	float _blinkBlockerSphereCastRadius; // 0x198(0x04)
	char pad_19C[0x4c]; // 0x19c(0x4c)
};

// Class TheNurse.DarkCinctureAddon
// Size: 0x2d0 (Inherited: 0x2b8)
struct UDarkCinctureAddon : UItemAddon {
	struct UStatusEffect* _speedEffect; // 0x2b8(0x08)
	struct UStatusEffect* _speedEffectClass; // 0x2c0(0x08)
	float _movementSpeedMultiplier; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheNurse.FragileWheezeAddon
// Size: 0x2c0 (Inherited: 0x2b8)
struct UFragileWheezeAddon : UItemAddon {
	struct UStatusEffect* _mangledEffectClass; // 0x2b8(0x08)
};

// Class TheNurse.IsChainBlinkingCondition
// Size: 0xf8 (Inherited: 0xe8)
struct UIsChainBlinkingCondition : UEventDrivenModifierCondition {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class TheNurse.IsInChainBlinkWindowCondition
// Size: 0x110 (Inherited: 0xe8)
struct UIsInChainBlinkWindowCondition : UEventDrivenModifierCondition {
	char pad_E8[0x28]; // 0xe8(0x28)
};

// Class TheNurse.KavanaghsLastBreathAddon
// Size: 0x2d8 (Inherited: 0x2b8)
struct UKavanaghsLastBreathAddon : UItemAddon {
	char pad_2B8[0x10]; // 0x2b8(0x10)
	struct UStatusEffect* _blindnessEffectClass; // 0x2c8(0x08)
	float _maxBlindnessRange; // 0x2d0(0x04)
	float _blindedEffectDuration; // 0x2d4(0x04)
};

// Class TheNurse.MatchboxAddon
// Size: 0x2c0 (Inherited: 0x2b8)
struct UMatchboxAddon : UItemAddon {
	float _speedModifier; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class TheNurse.NurseAnimInstance
// Size: 0x340 (Inherited: 0x2c0)
struct UNurseAnimInstance : UAnimInstance {
	bool _isBlinkReady; // 0x2c0(0x01)
	bool _isChargingBlink; // 0x2c1(0x01)
	bool _isFullyCharged; // 0x2c2(0x01)
	char pad_2C3[0x5]; // 0x2c3(0x05)
	struct UAnimSequence* _blinkSequence; // 0x2c8(0x08)
	bool _isChainBlinking; // 0x2d0(0x01)
	bool _isBlinking; // 0x2d1(0x01)
	char pad_2D2[0x2]; // 0x2d2(0x02)
	float _blinkPlayRate; // 0x2d4(0x04)
	struct UAnimSequence* _cooldownSequence; // 0x2d8(0x08)
	bool _isInCooldown; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float _cooldownPlayRate; // 0x2e4(0x04)
	bool _isChainBlinkAttacking; // 0x2e8(0x01)
	bool _isNurse; // 0x2e9(0x01)
	char pad_2EA[0x2e]; // 0x2ea(0x2e)
	struct UAnimEffectHandler* _animEffectHandlerForSFX; // 0x318(0x08)
	struct UAnimEffectHandler* _animEffectHandlerForVFX; // 0x320(0x08)
	struct UAnimEffectHandler* _animEffectHandlerClassForSFX; // 0x328(0x08)
	struct UAnimEffectHandler* _animEffectHandlerClassForVFX; // 0x330(0x08)
	struct ASlasherPlayer* _mySlasher; // 0x338(0x08)

	void OnBlinkTriggered(); // Function TheNurse.NurseAnimInstance.OnBlinkTriggered // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheNurse.NurseAttackPicker
// Size: 0xd0 (Inherited: 0xb8)
struct UNurseAttackPicker : USlasherAttackPickerComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheNurse.NurseFXInterface
// Size: 0x30 (Inherited: 0x30)
struct UNurseFXInterface : UInterface {

	void Cosmetic_SpawnSpasmodicBreathVignette(); // Function TheNurse.NurseFXInterface.Cosmetic_SpawnSpasmodicBreathVignette // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSpasmodicBreathAddonEffectActive(bool activeValue); // Function TheNurse.NurseFXInterface.Cosmetic_OnSpasmodicBreathAddonEffectActive // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheNurse.NurseHelper
// Size: 0x30 (Inherited: 0x30)
struct UNurseHelper : UBlueprintFunctionLibrary {

	struct ABlinkPowerItem* GetBlinkPowerItem(struct ADBDPlayer* Player); // Function TheNurse.NurseHelper.GetBlinkPowerItem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x59e9c20
};

// Class TheNurse.SpasmodicBreathAddon
// Size: 0x2f0 (Inherited: 0x2b8)
struct USpasmodicBreathAddon : UItemAddon {
	char pad_2B8[0x10]; // 0x2b8(0x10)
	struct UStatusEffect* _spasmodicBreathIndicatorStatusEffect; // 0x2c8(0x08)
	struct UStatusEffect* _speedEffect; // 0x2d0(0x08)
	struct UStatusEffect* _indicatorEffect; // 0x2d8(0x08)
	char pad_2E0[0x4]; // 0x2e0(0x04)
	float _speedModifier; // 0x2e4(0x04)
	float _activationDuration; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
};

// Class TheNurse.SpeedOverrideEffect
// Size: 0x350 (Inherited: 0x350)
struct USpeedOverrideEffect : UStatusEffect {
};

// Class TheNurse.StreetwiseEffect
// Size: 0x3e8 (Inherited: 0x3b8)
struct UStreetwiseEffect : UBaseLingeringStatusEffect {
	float _range; // 0x3b8(0x04)
	char pad_3BC[0x2c]; // 0x3bc(0x2c)

	void Authority_OnInRangeChanged(bool inRange); // Function TheNurse.StreetwiseEffect.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x59ea2c0
};

// Class TheNurse.ThanatophobiaEffect
// Size: 0x358 (Inherited: 0x350)
struct UThanatophobiaEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
};

// Class TheNurse.ThanatophobiaPerk
// Size: 0x500 (Inherited: 0x480)
struct UThanatophobiaPerk : UBaseNursePerk {
	char pad_480[0x18]; // 0x480(0x18)
	float _actionSpeedModifier[0x3]; // 0x498(0x0c)
	float _additionalActionSpeedModifier[0x3]; // 0x4a4(0x0c)
	int32_t _numSurvivorsForAdditionalSpeedModifier; // 0x4b0(0x04)
	char pad_4B4[0x4c]; // 0x4b4(0x4c)

	int32_t GetNumSurvivorsForAdditionalSpeedModifier(); // Function TheNurse.ThanatophobiaPerk.GetNumSurvivorsForAdditionalSpeedModifier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59ea690
	float GetAdditionalActionSpeedModifierAtLevel(); // Function TheNurse.ThanatophobiaPerk.GetAdditionalActionSpeedModifierAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59ea660
	float GetActionSpeedModifierAtLevel(); // Function TheNurse.ThanatophobiaPerk.GetActionSpeedModifierAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59ea630
};

