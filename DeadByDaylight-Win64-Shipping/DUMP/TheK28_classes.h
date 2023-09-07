// Class TheK28.Addon_K28Power_04
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAddon_K28Power_04 : UItemAddon {
};

// Class TheK28.Addon_K28Power_16
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAddon_K28Power_16 : UOnEventBaseAddon {
	struct TArray<struct UStatusEffect*> _survivorImposedEffectClasses; // 0x2c8(0x10)
	float _statusEffectTime; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class TheK28.Addon_K28Power_17
// Size: 0x2c8 (Inherited: 0x2c8)
struct UAddon_K28Power_17 : UOnEventBaseAddon {
};

// Class TheK28.Addon_K28Power_18
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K28Power_18 : UOnEventBaseAddon {
	struct UStatusEffect* _survivorImposedEffectClass; // 0x2c8(0x08)
	float _statusEffectDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)

	void Authority_OnIntroComplete(); // Function TheK28.Addon_K28Power_18.Authority_OnIntroComplete // (Final|Native|Private) // @ game+0x5857060
};

// Class TheK28.Addon_K28Power_19
// Size: 0x300 (Inherited: 0x2c8)
struct UAddon_K28Power_19 : UOnEventBaseAddon {
	struct UStatusEffect* _survivorImposedEffectClass; // 0x2c8(0x08)
	float _survivorStatusEffectTime; // 0x2d0(0x04)
	float _lockersToSlamRange; // 0x2d4(0x04)
	struct FAnimationMontageDescriptor _montage; // 0x2d8(0x20)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	void Multicast_TriggerLockerAnimationOnAllLockers(struct TArray<struct ALocker*> lockers); // Function TheK28.Addon_K28Power_19.Multicast_TriggerLockerAnimationOnAllLockers // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x569c5a0
};

// Class TheK28.Addon_K28Power_20
// Size: 0x2e8 (Inherited: 0x2c8)
struct UAddon_K28Power_20 : UOnEventBaseAddon {
	char pad_2C8[0x10]; // 0x2c8(0x10)
	float _blockingRadius; // 0x2d8(0x04)
	float _blockDuration; // 0x2dc(0x04)
	char pad_2E0[0x8]; // 0x2e0(0x08)
};

// Class TheK28.Addon_K28Power_21
// Size: 0x348 (Inherited: 0x2b8)
struct UAddon_K28Power_21 : UItemAddon {
	struct UStatusEffect* _survivorImposedEffectClass; // 0x2b8(0x08)
	float _effectDuration; // 0x2c0(0x04)
	char pad_2C4[0x84]; // 0x2c4(0x84)

	void Authority_OnLevelReadyToPlay(); // Function TheK28.Addon_K28Power_21.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5857130
};

// Class TheK28.AISkill_FindInteractable_Lockbar
// Size: 0x2d0 (Inherited: 0x198)
struct UAISkill_FindInteractable_Lockbar : UAISkill_FindInteractable {
	float LockerTopHeightDiffFromActorLocation; // 0x198(0x04)
	struct FAITunableParameter LockbarMaxDistanceFromCamper; // 0x19c(0x10)
	struct FAITunableParameter LockbarMaxDistanceFromCamperTolerance; // 0x1ac(0x10)
	struct FAITunableParameter MinLockbarWeight; // 0x1bc(0x10)
	struct FAITunableParameter MaxLockbarWeight; // 0x1cc(0x10)
	struct FAITunableParameter HighLockbarWeightLastSeconds; // 0x1dc(0x10)
	struct FAITunableParameter MinDistanceToReachMaxLockbarWeight; // 0x1ec(0x10)
	struct FAITunableParameter MaxDistanceToReachMinLockbarWeight; // 0x1fc(0x10)
	struct FAITunableParameter MaxDistanceToReachMinLockbarWeightIfNearGenerator; // 0x20c(0x10)
	struct FAITunableParameter MaxHeightDifferenceFromGenerator; // 0x21c(0x10)
	char pad_22C[0xa4]; // 0x22c(0xa4)
};

// Class TheK28.BTService_FindObject_K28Remnant
// Size: 0x210 (Inherited: 0x208)
struct UBTService_FindObject_K28Remnant : UBTService_FindObject {
	char pad_208[0x8]; // 0x208(0x08)
};

// Class TheK28.K28TeleportTarget
// Size: 0x30 (Inherited: 0x30)
struct UK28TeleportTarget : UInterface {
};

// Class TheK28.IsInRangeOfK28UsedLocker
// Size: 0x128 (Inherited: 0xf0)
struct UIsInRangeOfK28UsedLocker : URangeBasedCondition {
	char pad_F0[0x38]; // 0xf0(0x38)
};

// Class TheK28.K28AnimInstance
// Size: 0x650 (Inherited: 0x610)
struct UK28AnimInstance : UKillerAnimInstance {
	bool _isInLocker; // 0x610(0x01)
	bool _isInChase; // 0x611(0x01)
	bool _isChargingTeleportation; // 0x612(0x01)
	bool _hasTeleportationPowerCharged; // 0x613(0x01)
	bool _hasTeleportationBeenCancelled; // 0x614(0x01)
	bool _hideHandsInFPV; // 0x615(0x01)
	char pad_616[0x2]; // 0x616(0x02)
	struct UCustomizationAnimationSelector* _customizationAnimationSelectorClass; // 0x618(0x08)
	struct UCustomizationAnimationSelector* _customizationAnimationSelector; // 0x620(0x08)
	char pad_628[0x28]; // 0x628(0x28)

	struct TArray<struct FName> GetCustomAnimationTags(); // Function TheK28.K28AnimInstance.GetCustomAnimationTags // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58572d0
	int32_t GetAnimationMappingIndex(); // Function TheK28.K28AnimInstance.GetAnimationMappingIndex // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x58572a0
	void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex); // Function TheK28.K28AnimInstance.BP_OnCustomizationAnimationMappingIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28CheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK28CheatComponent : UActorComponent {

	void DBD_K28UnlockAllLockbars(); // Function TheK28.K28CheatComponent.DBD_K28UnlockAllLockbars // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_K28TriggerNextNightCycle(); // Function TheK28.K28CheatComponent.DBD_K28TriggerNextNightCycle // (Final|Exec|Native|Public) // @ game+0x5857280
	void DBD_K28SetPowerNoCooldown(bool noCooldown); // Function TheK28.K28CheatComponent.DBD_K28SetPowerNoCooldown // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_K28LockAllLockbars(); // Function TheK28.K28CheatComponent.DBD_K28LockAllLockbars // (Final|Exec|Native|Public) // @ game+0x5857260
	void DBD_K28DisplayLockerClusters(float secondsToDisplayDebugElements); // Function TheK28.K28CheatComponent.DBD_K28DisplayLockerClusters // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_K28DebugCosmetics(bool noCooldown); // Function TheK28.K28CheatComponent.DBD_K28DebugCosmetics // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_K28BreakAllLocks(); // Function TheK28.K28CheatComponent.DBD_K28BreakAllLocks // (Final|Exec|Native|Public) // @ game+0x5857240
};

// Class TheK28.K28DayNightComponent
// Size: 0x5e8 (Inherited: 0xb8)
struct UK28DayNightComponent : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct UK28KillerComponent* _killerK28ComponentClass; // 0x100(0x08)
	struct UK28SurvivorComponent* _survivorK28ComponentClass; // 0x108(0x08)
	struct FDBDTunableRowHandle _chargesRequiredForNightCharge; // 0x110(0x28)
	struct FDBDTunableRowHandle _transitionToNightDuration; // 0x138(0x28)
	struct FDBDTunableRowHandle _transitiionToDayDuration; // 0x160(0x28)
	struct FTunableStat _chargesRequiredForNightDischarge; // 0x188(0x80)
	struct FTunableStat _killerInjuresSurvivorChargeAmount; // 0x208(0x80)
	struct FTunableStat _killerHookSurvivorChargeAmount; // 0x288(0x80)
	struct FDBDTunableRowHandle _killerTeleportsToRemnantChargeAmount; // 0x308(0x28)
	struct FTunableStat _defaultNightChargeTime; // 0x330(0x80)
	struct FTunableStat _injuredSurvivorsChargeTime; // 0x3b0(0x80)
	struct FTunableStat _killerHidingInLockerChargeTime; // 0x430(0x80)
	struct FDBDTunableRowHandle _defaultNightTimeDischargeRate; // 0x4b0(0x28)
	struct FDBDTunableRowHandle _survivorInLockerDischargeRate; // 0x4d8(0x28)
	struct FDBDTunableRowHandle _nighttimeNearingActivationThresholdPercent; // 0x500(0x28)
	struct FDBDTunableRowHandle _nightCycleNearingEndThresholdPercent; // 0x528(0x28)
	enum class EK28NightCycleState _currentNightCycleState; // 0x550(0x01)
	char pad_551[0x1f]; // 0x551(0x1f)
	int32_t _authority_numberInjuredSurvivors; // 0x570(0x04)
	float _maxChargeAmount; // 0x574(0x04)
	float _currentChargeAmount; // 0x578(0x04)
	char pad_57C[0x35]; // 0x57c(0x35)
	bool _nighttimeNearingActivationThresholdReached; // 0x5b1(0x01)
	bool _hasReachedNightCycleNearEndThreshold; // 0x5b2(0x01)
	char pad_5B3[0x35]; // 0x5b3(0x35)

	void OnRep_NighttimeNearingActivation(); // Function TheK28.K28DayNightComponent.OnRep_NighttimeNearingActivation // (Final|Native|Private) // @ game+0x5857b30
	void OnRep_HasReachedNightCycleNearEndThreshold(); // Function TheK28.K28DayNightComponent.OnRep_HasReachedNightCycleNearEndThreshold // (Final|Native|Private) // @ game+0x5857af0
	void OnRep_CurrentDayNightCycle(); // Function TheK28.K28DayNightComponent.OnRep_CurrentDayNightCycle // (Final|Native|Private) // @ game+0x5857ad0
	void Cosmetic_OnNightCycleChanged(struct UAkComponent* AkComponent, enum class EK28NightCycleState newNightCycleState); // Function TheK28.K28DayNightComponent.Cosmetic_OnNightCycleChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsInLastTwentySecondsOfNightCycle(struct UAkComponent* AkComponent); // Function TheK28.K28DayNightComponent.Cosmetic_OnIsInLastTwentySecondsOfNightCycle // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSurvivorDamageStateChanged(enum class ECamperDamageState PreviousDamageState, enum class ECamperDamageState newDamageState); // Function TheK28.K28DayNightComponent.Authority_OnSurvivorDamageStateChanged // (Final|Native|Private) // @ game+0x5857170
	void Authority_OnIntroCompleted(); // Function TheK28.K28DayNightComponent.Authority_OnIntroCompleted // (Final|Native|Private) // @ game+0x5857080
};

// Class TheK28.K28FXInterface
// Size: 0x30 (Inherited: 0x30)
struct UK28FXInterface : UInterface {

	void Cosmetic_TriggerFadeOut(); // Function TheK28.K28FXInterface.Cosmetic_TriggerFadeOut // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerFadeIn(); // Function TheK28.K28FXInterface.Cosmetic_TriggerFadeIn // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetDebugCosmetics(bool isDebugCosmeticsActive); // Function TheK28.K28FXInterface.Cosmetic_SetDebugCosmetics // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetBlackMaterialOnKiller(bool blackMaterialApplied); // Function TheK28.K28FXInterface.Cosmetic_SetBlackMaterialOnKiller // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportCooldownEnded(); // Function TheK28.K28FXInterface.Cosmetic_OnTeleportCooldownEnded // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportationToLockerStart(float teleportationDuration, bool isKillerAlreadyHidingInLocker); // Function TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportationToLockerEnd(); // Function TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnShowKiller(bool isInstantShow); // Function TheK28.K28FXInterface.Cosmetic_OnShowKiller // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLockerTeleportTargetHighlighted(); // Function TheK28.K28FXInterface.Cosmetic_OnLockerTeleportTargetHighlighted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLocallyObservedChanged(); // Function TheK28.K28FXInterface.Cosmetic_OnLocallyObservedChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerEnterLocker(); // Function TheK28.K28FXInterface.Cosmetic_OnKillerEnterLocker // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsKillingSurvivorWithMoriStateChanged(bool isKillingSurvivorWithMori); // Function TheK28.K28FXInterface.Cosmetic_OnIsKillingSurvivorWithMoriStateChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHideKiller(); // Function TheK28.K28FXInterface.Cosmetic_OnHideKiller // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeTeleportStart(); // Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeTeleportComplete(); // Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportComplete // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeTeleportCancelled(); // Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportCancelled // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28IsNightCycleState
// Size: 0xf8 (Inherited: 0xe8)
struct UK28IsNightCycleState : UEventDrivenModifierCondition {
	enum class EK28NightCycleState _nightCycleState; // 0xe8(0x01)
	char pad_E9[0xf]; // 0xe9(0x0f)

	void OnLevelReadyToPlay(); // Function TheK28.K28IsNightCycleState.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x58578f0
};

// Class TheK28.K28PlayerComponent
// Size: 0x170 (Inherited: 0xb8)
struct UK28PlayerComponent : UActorComponent {
	struct TWeakObjectPtr<struct UK28DayNightComponent> _dayNightComponent; // 0xb8(0x08)
	struct FDBDTunableRowHandle _nightEffectMinimumDistance; // 0xc0(0x28)
	struct FDBDTunableRowHandle _nightEffectMaximumDistance; // 0xe8(0x28)
	char pad_110[0x60]; // 0x110(0x60)

	void OnSurvivorInRangeChanged(bool inRange, struct ACamperPlayer* Player); // Function TheK28.K28PlayerComponent.OnSurvivorInRangeChanged // (Final|Native|Private) // @ game+0x585c340
	void OnRep_DayNightComponent(); // Function TheK28.K28PlayerComponent.OnRep_DayNightComponent // (Native|Protected) // @ game+0x4af1ae0
};

// Class TheK28.K28KillerComponent
// Size: 0x178 (Inherited: 0x170)
struct UK28KillerComponent : UK28PlayerComponent {
	char pad_170[0x8]; // 0x170(0x08)

	void Cosmetic_OnNighttimeNearingActivation(struct ASlasherPlayer* killer); // Function TheK28.K28KillerComponent.Cosmetic_OnNighttimeNearingActivation // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnNightCycleStateChanged(struct ASlasherPlayer* killer, enum class EK28NightCycleState dayNightCycleState); // Function TheK28.K28KillerComponent.Cosmetic_OnNightCycleStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28KillerEnterLockerInteraction
// Size: 0x6a0 (Inherited: 0x660)
struct UK28KillerEnterLockerInteraction : UBaseLockerInteraction {
	float _hideKillerTimePercentage; // 0x660(0x04)
	char pad_664[0x3c]; // 0x664(0x3c)

	bool IsKillerAllowedToEnterLocker(struct ADBDPlayer* Player); // Function TheK28.K28KillerEnterLockerInteraction.IsKillerAllowedToEnterLocker // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5857350
};

// Class TheK28.K28KillerExitLockerInteraction
// Size: 0x720 (Inherited: 0x660)
struct UK28KillerExitLockerInteraction : UBaseLockerInteraction {
	enum class EK28ExitLockerCameraBehaviour _cameraBehaviour; // 0x660(0x01)
	char pad_661[0x7]; // 0x661(0x07)
	struct FDBDTunableRowHandle _timeSearchLockerInteractionBlocked; // 0x668(0x28)
	float _minDotProductFadeOutThreshold; // 0x690(0x04)
	float _rotationMaxTime; // 0x694(0x04)
	float _fadeOutTime; // 0x698(0x04)
	float _fovChangeTime; // 0x69c(0x04)
	struct UCurveFloat* _fovChangeTeleportationCurve; // 0x6a0(0x08)
	char pad_6A8[0x78]; // 0x6a8(0x78)
};

// Class TheK28.K28KillerExitLockedLockerInteraction
// Size: 0x760 (Inherited: 0x720)
struct UK28KillerExitLockedLockerInteraction : UK28KillerExitLockerInteraction {
	float _lockbarBreakTimePercentage; // 0x718(0x04)
	float _minInteractionTime; // 0x71c(0x04)
	char pad_728[0x38]; // 0x728(0x38)
};

// Class TheK28.K28KillerExitLockerWithSurvivorInteraction
// Size: 0x7c0 (Inherited: 0x720)
struct UK28KillerExitLockerWithSurvivorInteraction : UK28KillerExitLockerInteraction {
	float _waitTimeBeforeSettingIntoCarryState; // 0x718(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct FAnimationMontageDescriptor _montageFromTeleportation; // 0x728(0x20)
	struct FAnimationMontageDescriptor _montageFromAbduction; // 0x748(0x20)
	char pad_768[0x58]; // 0x768(0x58)
};

// Class TheK28.K28KillerInstinctEffect
// Size: 0x428 (Inherited: 0x350)
struct UK28KillerInstinctEffect : UStatusEffect {
	struct FTunableStat _secondsToLinger; // 0x350(0x80)
	struct FDBDTunableRowHandle _maxDistanceToApplyRemnantTeleportKillerInstinct; // 0x3d0(0x28)
	struct UStatusEffect* _lingeringEffectClass; // 0x3f8(0x08)
	struct UStatusEffect* _lingeringEffect; // 0x400(0x08)
	char pad_408[0x20]; // 0x408(0x20)

	void Authority_OnLevelReadyToPlay(); // Function TheK28.K28KillerInstinctEffect.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5857150
	void Authority_OnKillerInstinctApplicableChanged(bool Active); // Function TheK28.K28KillerInstinctEffect.Authority_OnKillerInstinctApplicableChanged // (Final|Native|Private) // @ game+0x58570a0
};

// Class TheK28.K28KillerLockerComponent
// Size: 0x208 (Inherited: 0xb8)
struct UK28KillerLockerComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _targetLockerFOV; // 0xd0(0x28)
	struct UCurveFloat* _fovChangeTeleportationCurve; // 0xf8(0x08)
	float _fovChangeTime; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FK28KillerLockerState _lockerState_replicated; // 0x108(0x10)
	char pad_118[0xa0]; // 0x118(0xa0)
	struct AAnimationFollowerActor* _extraArmsAnimationFollowerActorClass; // 0x1b8(0x08)
	struct AAnimationFollowerActor* _extraArmsAnimationFollowerActor; // 0x1c0(0x08)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	float _timeBetweenAttemptTrigger; // 0x1d0(0x04)
	char pad_1D4[0x34]; // 0x1d4(0x34)

	void OnRep_LockerState_Replicated(); // Function TheK28.K28KillerLockerComponent.OnRep_LockerState_Replicated // (Final|Native|Private) // @ game+0x5857b10
	void OnPlayerInLockerChanged(struct ADBDPlayer* previousPlayerInLocker, struct ADBDPlayer* newPlayerInLocker); // Function TheK28.K28KillerLockerComponent.OnPlayerInLockerChanged // (Final|Native|Private) // @ game+0x5857a00
};

// Class TheK28.K28KillerPlayerViewComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UK28KillerPlayerViewComponent : UActorComponent {
	char pad_B8[0x28]; // 0xb8(0x28)
};

// Class TheK28.K28KillerTeleportationComponent
// Size: 0x2f8 (Inherited: 0xb8)
struct UK28KillerTeleportationComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FTunableStat _teleportationSpeed_DayCycle; // 0xc8(0x80)
	struct FDBDTunableRowHandle _teleportationSpeed_NightCycle; // 0x148(0x28)
	struct FDBDTunableRowHandle _teleportationTimeForSurvivorGrab; // 0x170(0x28)
	struct FAnimationMontageDescriptor _survivorPanicInLockerAnimationMontageDescriptor; // 0x198(0x20)
	char pad_1B8[0x10]; // 0x1b8(0x10)
	struct FTagStateBool _isTeleporting; // 0x1c8(0x30)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct UCurveFloat* _defaultTeleportationCurve; // 0x200(0x08)
	struct UCurveFloat* _grabTeleportationCurve; // 0x208(0x08)
	char pad_210[0xd8]; // 0x210(0xd8)
	struct TArray<struct AActor*> _actorsHiddenDuringTeleport; // 0x2e8(0x10)

	void OnPlayerFinishedEnteringLocker(struct ADBDPlayer* playerThatWasInLocker, struct ADBDPlayer* playerNowInLocker); // Function TheK28.K28KillerTeleportationComponent.OnPlayerFinishedEnteringLocker // (Final|Native|Private) // @ game+0x5857930
	void OnLevelReadyToPlay(); // Function TheK28.K28KillerTeleportationComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5857910
	void Multicast_TeleportToLockerStart(struct FK28SecondaryCameraMovementData cameraMovementData, struct UK28LockerComponent* lockerBeingTeleportedTo, struct ACamperPlayer* survivorToGrab); // Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerStart // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5857770
	void Multicast_TeleportToLockerEnd(struct UK28LockerComponent* lockerTeleportedTo, struct ACamperPlayer* survivorInLocker); // Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerEnd // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa6f70
	void Local_OnTeleportCollisionOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK28.K28KillerTeleportationComponent.Local_OnTeleportCollisionOverlapEnd // (Final|Native|Private) // @ game+0x5857610
	void Local_OnTeleportCollisionOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheK28.K28KillerTeleportationComponent.Local_OnTeleportCollisionOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x58573f0
};

// Class TheK28.K28LockAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UK28LockAnimInstance : UAnimInstance {
	enum class EK28LockbarState _lockbarState; // 0x2c0(0x01)
	char pad_2C1[0xf]; // 0x2c1(0x0f)
};

// Class TheK28.K28Lockbar
// Size: 0x2c0 (Inherited: 0x248)
struct AK28Lockbar : ABaseLockerItem {
	enum class EK28LockbarState _state; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UStaticMesh* _lockbarStaticMesh; // 0x250(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent; // 0x258(0x08)
	struct UStaticMeshComponent* _staticLockMesh; // 0x260(0x08)
	struct UBoxComponent* _boxComponent; // 0x268(0x08)
	struct UBaseActorAttackableComponent* _lockAttackableComponent; // 0x270(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x278(0x08)
	struct UAnimationMontageSlave* _animationMontageSlave; // 0x280(0x08)
	struct FTagStateBool _isLocked; // 0x288(0x30)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnRep_State(); // Function TheK28.K28Lockbar.OnRep_State // (Final|Native|Private) // @ game+0x585c300
	void OnPlayerInLockerChanged(struct ADBDPlayer* previousPlayerInLocker, struct ADBDPlayer* newPlayerInLocker); // Function TheK28.K28Lockbar.OnPlayerInLockerChanged // (Final|Native|Private) // @ game+0x585c1f0
	void OnLocallyObservedChanged(); // Function TheK28.K28Lockbar.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x585c1d0
	struct UMontagePlayer* GetMontagePlayer(); // Function TheK28.K28Lockbar.GetMontagePlayer // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x585bc90
	void Cosmetic_TriggerLockbarBreak(); // Function TheK28.K28Lockbar.Cosmetic_TriggerLockbarBreak // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetLockbarHighlightActivationState(bool isHightlightActive); // Function TheK28.K28Lockbar.Cosmetic_SetLockbarHighlightActivationState // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStateChanged(enum class EK28LockbarState NewState); // Function TheK28.K28Lockbar.Cosmetic_OnStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28LockerComponent
// Size: 0x308 (Inherited: 0xb8)
struct UK28LockerComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct AK28LockerCosmeticHelperActor* _lockerCosmeticHelper; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	float _aiWarningSoundTimeInterval; // 0xe0(0x04)
	float _aiWarningSoundRange; // 0xe4(0x04)
	struct FDBDTunableRowHandle _timeToTriggerWarningReveal; // 0xe8(0x28)
	struct FDBDTunableRowHandle _minDistanceFromHookedSurvivor; // 0x110(0x28)
	struct FDBDTunableRowHandle _minDistanceFromKillerForTeleportationEligibility; // 0x138(0x28)
	struct FAnimationMontageDescriptor _lockerShakeTeleportAnimation; // 0x160(0x20)
	struct FAnimationMontageDescriptor _lockerTeleportCompletedAnimation; // 0x180(0x20)
	struct FAnimationMontageDescriptor _lockerTeleportationAbductionAnimation; // 0x1a0(0x20)
	struct TArray<struct UBaseLockerInteraction*> _lockerInteractionClasses; // 0x1c0(0x10)
	struct AK28LockerCosmeticHelperActor* _lockerCosmeticHelperClass; // 0x1d0(0x08)
	struct UK28SurvivorLockerAbductionInteraction* _lockerGrabOverridingClass; // 0x1d8(0x08)
	struct TArray<struct UBaseLockerInteraction*> _lockerInteractionClassesToOverride; // 0x1e0(0x10)
	struct TArray<struct FCustomLockerOutlineOverride> _lockedOutlineOverrides; // 0x1f0(0x10)
	float _maxSqrtDistanceForCluster; // 0x200(0x04)
	float _minDotProductForCluster; // 0x204(0x04)
	struct FVector _lockerLineTraceOffset; // 0x208(0x0c)
	char pad_214[0xd0]; // 0x214(0xd0)
	float _abductionCameraOffset; // 0x2e4(0x04)
	char pad_2E8[0x18]; // 0x2e8(0x18)
	struct ASlasherPlayer* _killer; // 0x300(0x08)
};

// Class TheK28.K28LockerCosmeticHelperActor
// Size: 0x250 (Inherited: 0x230)
struct AK28LockerCosmeticHelperActor : AActor {
	char pad_230[0x20]; // 0x230(0x20)

	void OnAssociatedLockerActorSet(); // Function TheK28.K28LockerCosmeticHelperActor.OnAssociatedLockerActorSet // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	struct USkeletalMeshComponent* GetSkeletalMesh(); // Function TheK28.K28LockerCosmeticHelperActor.GetSkeletalMesh // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x585bcc0
	struct UMaterialHelper* GetMaterialHelper(); // Function TheK28.K28LockerCosmeticHelperActor.GetMaterialHelper // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x585bc60
	struct ALocker* GetLocker(); // Function TheK28.K28LockerCosmeticHelperActor.GetLocker // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf7910
	void Cosmetic_OnLockerGrabStateChanged(bool isLockerGrabOngoing); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockerGrabStateChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLockedStateChanged(bool isLockerLocked); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockedStateChanged // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerTeleportationToLockerStart(); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerTeleportationToLockerEnd(); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerInsideLockerRevealed(); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerInsideLockerRevealed // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerExitLocker(); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerExitLocker // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerEnteredLocker(); // Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerEnteredLocker // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28LockerEntitySpikesUpdateStrategy
// Size: 0xd8 (Inherited: 0xc0)
struct UK28LockerEntitySpikesUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _outlineColor; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class TheK28.K28LockerTeleportSwapInteraction
// Size: 0x650 (Inherited: 0x630)
struct UK28LockerTeleportSwapInteraction : UInteractionDefinition {
	char pad_630[0x20]; // 0x630(0x20)

	void Server_RequestTeleportToTarget(struct ASlasherPlayer* killer, struct UActorComponent* teleportTarget); // Function TheK28.K28LockerTeleportSwapInteraction.Server_RequestTeleportToTarget // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x585c410
	void Multicast_RefuseTeleportationRequest(); // Function TheK28.K28LockerTeleportSwapInteraction.Multicast_RefuseTeleportationRequest // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5500620
	void Multicast_ConfirmTeleportationRequest(struct ASlasherPlayer* killer, struct UActorComponent* teleportTarget); // Function TheK28.K28LockerTeleportSwapInteraction.Multicast_ConfirmTeleportationRequest // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x585bdb0
	void Multicast_CompleteTeleportation(); // Function TheK28.K28LockerTeleportSwapInteraction.Multicast_CompleteTeleportation // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5500600
};

// Class TheK28.K28LockLockbarInteraction
// Size: 0x670 (Inherited: 0x660)
struct UK28LockLockbarInteraction : UBaseLockerInteraction {
	float _survivorAlignementTolerance; // 0x660(0x04)
	char pad_664[0xc]; // 0x664(0x0c)
};

// Class TheK28.K28MenuAnimInstance
// Size: 0x310 (Inherited: 0x300)
struct UK28MenuAnimInstance : UBaseMenuAnimInstance {
	struct UCustomizationAnimationSelector* _customizationAnimationSelectorClass; // 0x2f8(0x08)
	struct UCustomizationAnimationSelector* _customizationAnimationSelector; // 0x300(0x08)

	int32_t GetAnimationMappingIndex(); // Function TheK28.K28MenuAnimInstance.GetAnimationMappingIndex // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x585bbf0
	void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex); // Function TheK28.K28MenuAnimInstance.BP_OnCustomizationAnimationMappingIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28P01
// Size: 0x3f8 (Inherited: 0x3c8)
struct UK28P01 : UPerk {
	float _perkActivationDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _effectClass; // 0x3d8(0x08)
	float _injuryTimerDuration; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UTimerObject* _injuryTimer; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	float GetPerkActivationDurationAtLevel(); // Function TheK28.K28P01.GetPerkActivationDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetInjuryTimerDuration(); // Function TheK28.K28P01.GetInjuryTimerDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf41d0
};

// Class TheK28.K28P01Effect
// Size: 0x358 (Inherited: 0x350)
struct UK28P01Effect : UStatusEffect {
	struct ADBDPlayer* _playerOwner; // 0x350(0x08)
};

// Class TheK28.K28P02
// Size: 0x3d8 (Inherited: 0x3c8)
struct UK28P02 : UPerk {
	float PerkActivationTime; // 0x3c8(0x04)
	float LockerDetectionRadius; // 0x3cc(0x04)
	char pad_3D0[0x8]; // 0x3d0(0x08)

	float GetPerkActivationTime(); // Function TheK28.K28P02.GetPerkActivationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
	float GetLockerDetectionRadius(); // Function TheK28.K28P02.GetLockerDetectionRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd7b0
};

// Class TheK28.K28Power
// Size: 0x840 (Inherited: 0x4c8)
struct AK28Power : ACollectable {
	char pad_4C8[0x10]; // 0x4c8(0x10)
	struct UInteractor* _interactor; // 0x4d8(0x08)
	struct UPowerChargeComponent* _powerChargeComponent; // 0x4e0(0x08)
	struct UK28PowerChargePresentationPowerFadeComponent* _k28PowerChargePresentationPowerFadeComponent; // 0x4e8(0x08)
	struct UK28PowerPresentationItemProgressComponent* _k28PowerPresentationItemProgressComponent; // 0x4f0(0x08)
	struct UK28DayNightComponent* _dayNightComponentClass; // 0x4f8(0x08)
	struct UK28TeleportationStrategyComponent* _teleportationStrategyComponentClass; // 0x500(0x08)
	struct UK28KillerTeleportationComponent* _killerTeleportationComponentClass; // 0x508(0x08)
	struct UK28KillerPlayerViewComponent* _killerPlayerViewComponentClass; // 0x510(0x08)
	struct UK28KillerLockerComponent* _killerLockerComponentClass; // 0x518(0x08)
	struct AK28SecondaryCamera* _secondaryCameraClass; // 0x520(0x08)
	struct AK28Remnant* _k28RemnantClass; // 0x528(0x08)
	struct AAnimationFollowerActor* _moriArmsAnimationFollowerActorClass; // 0x530(0x08)
	struct AK28SecondaryCamera* _secondaryCamera; // 0x538(0x08)
	struct UK28KillerLockerComponent* _killerLockerComponent; // 0x540(0x08)
	struct AK28Remnant* _k28Remnant; // 0x548(0x08)
	struct TArray<struct UStatusEffect*> _killerStatusEffects; // 0x550(0x10)
	struct TArray<struct UStatusEffect*> _survivorStatusEffects; // 0x560(0x10)
	struct UK28SurvivorAbductionCameraBehaviourComponent* _survivorAbductionCameraBehaviourClass; // 0x570(0x08)
	struct UK28DayNightComponent* _dayNightComponent; // 0x578(0x08)
	struct UK28TeleportationStrategyComponent* _teleportationStrategyComponent; // 0x580(0x08)
	struct FTunableStat _tokensWhenPowerIsFullyCharged; // 0x588(0x80)
	struct FTunableStat _secondsRequiredToChargePowerStartOfMatch; // 0x608(0x80)
	struct FTunableStat _secondsRequiredToChargePowerDayTime; // 0x688(0x80)
	struct FTunableStat _secondsRequiredToChargePowerNightTime; // 0x708(0x80)
	struct FDBDTunableRowHandle _maxTrackedTimeSinceLockerOrRemnantExit; // 0x788(0x28)
	int32_t _teleportTokens; // 0x7b0(0x04)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct TArray<struct FK28InteractionPreventingTagsModification> _survivorInteractionsPreventingTagModifications; // 0x7b8(0x10)
	char pad_7C8[0x70]; // 0x7c8(0x70)
	bool _isTunableInit; // 0x838(0x01)
	char pad_839[0x7]; // 0x839(0x07)

	void OnRep_TeleportTokens(); // Function TheK28.K28Power.OnRep_TeleportTokens // (Final|Native|Private) // @ game+0x585c320
	void OnIntroCompleted(); // Function TheK28.K28Power.OnIntroCompleted // (Final|Native|Private) // @ game+0x585c190
};

// Class TheK28.K28PowerChargePresentationPowerFadeComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK28PowerChargePresentationPowerFadeComponent : UPresentationPowerFadeComponent {
};

// Class TheK28.K28PowerPresentationItemProgressComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UK28PowerPresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct TWeakObjectPtr<struct AK28Power> _k28Power; // 0xc0(0x08)
};

// Class TheK28.K28Remnant
// Size: 0x410 (Inherited: 0x230)
struct AK28Remnant : AActor {
	char pad_230[0x60]; // 0x230(0x60)
	struct UCurveFloat* _teleportToRemnantSpeedCurve_Normal; // 0x290(0x08)
	struct UCurveFloat* _teleportToRemnantSpeedCurve_Penalty; // 0x298(0x08)
	struct UDBDSkeletalMeshComponentBudgeted* _skeletalMesh; // 0x2a0(0x08)
	struct UCapsuleComponent* _capsuleComponent; // 0x2a8(0x08)
	struct UAnimationMontageSlave* _montageFollower; // 0x2b0(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x2b8(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x2c0(0x08)
	struct UK28RemnantOutlineUpdateStrategy* _remnantOutlineStrategy; // 0x2c8(0x08)
	struct FDBDTunableRowHandle _teleportationFadeInTime; // 0x2d0(0x28)
	struct FDBDTunableRowHandle _teleportationFadeOutTime; // 0x2f8(0x28)
	struct FDBDTunableRowHandle _minDistanceFromHookedSurvivor; // 0x320(0x28)
	float _renmantDeactivationTime; // 0x348(0x04)
	float _remnantDestructionTime; // 0x34c(0x04)
	struct FAnimationMontageDescriptor _slowTeleportToRenmantAnimationMontage; // 0x350(0x20)
	struct FAnimationMontageDescriptor _fastTeleportToRenmantAnimationMontage; // 0x370(0x20)
	enum class EK28RemnantState _remnantState; // 0x390(0x01)
	char pad_391[0x77]; // 0x391(0x77)
	struct UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x408(0x08)

	void OnRep_RemnantState(); // Function TheK28.K28Remnant.OnRep_RemnantState // (Final|Native|Private) // @ game+0x585c2e0
	void Multicast_TriggerTeleportStart(struct ASlasherPlayer* killer); // Function TheK28.K28Remnant.Multicast_TriggerTeleportStart // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x585c100
	void Multicast_TeleportToRemnant(struct ASlasherPlayer* killer, struct FRotator teleportRotation, bool isAnimationSlowed); // Function TheK28.K28Remnant.Multicast_TeleportToRemnant // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x585bff0
	void Multicast_SurvivorDestroyedRemnant(struct ACamperPlayer* Survivor); // Function TheK28.K28Remnant.Multicast_SurvivorDestroyedRemnant // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x585bf60
	void Multicast_DeactivateRemnant(); // Function TheK28.K28Remnant.Multicast_DeactivateRemnant // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x54ac490
	void Multicast_ActivateRemnant(struct FVector Location, struct FRotator Rotation); // Function TheK28.K28Remnant.Multicast_ActivateRemnant // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x585bcf0
	void Cosmetic_SurvivorDestroyedRemnant(struct ACamperPlayer* Survivor); // Function TheK28.K28Remnant.Cosmetic_SurvivorDestroyedRemnant // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportationStartVFX(struct ASlasherPlayer* killer); // Function TheK28.K28Remnant.Cosmetic_OnTeleportationStartVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportationPerformedVFX(struct ASlasherPlayer* killer, bool isSlowTeleportation); // Function TheK28.K28Remnant.Cosmetic_OnTeleportationPerformedVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnRemnantStateChanged(enum class EK28RemnantState remnantState); // Function TheK28.K28Remnant.Cosmetic_OnRemnantStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnRemnantDeactivated(); // Function TheK28.K28Remnant.Cosmetic_OnRemnantDeactivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnRemnantActivated(); // Function TheK28.K28Remnant.Cosmetic_OnRemnantActivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnCollisionDetected(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheK28.K28Remnant.Authority_OnCollisionDetected // (Final|Native|Private|HasOutParms) // @ game+0x585b9a0
};

// Class TheK28.K28RemnantAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UK28RemnantAnimInstance : UAnimInstance {
	enum class EK28RemnantState _currentRemnantState; // 0x2c0(0x01)
	bool _isTeleportingToRemnant; // 0x2c1(0x01)
	char pad_2C2[0x1e]; // 0x2c2(0x1e)

	struct ACamperPlayer* ConsumeSurvivorWhoDestroyedRemnant(); // Function TheK28.K28RemnantAnimInstance.ConsumeSurvivorWhoDestroyedRemnant // (Final|Native|Protected|BlueprintCallable) // @ game+0x585bbc0
};

// Class TheK28.K28RemnantOutlineUpdateStrategy
// Size: 0xd8 (Inherited: 0xc0)
struct UK28RemnantOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _availableForTeleportSelectionColor; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class TheK28.K28SecondaryCamera
// Size: 0x390 (Inherited: 0x230)
struct AK28SecondaryCamera : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct UBoxComponent* _teleportCollision; // 0x238(0x08)
	char pad_240[0x4]; // 0x240(0x04)
	float _minimumCameraPitchOrientationAngle; // 0x244(0x04)
	float _maximumCameraPitchOrientationAngle; // 0x248(0x04)
	float _observerRotationSpeed; // 0x24c(0x04)
	float _minTimeBetweenCameraRotationUpdateRPC; // 0x250(0x04)
	float _survivorGrabTransition_CameraRotationEndPercentage; // 0x254(0x04)
	float _survivorGrabTransition_DistanceFromLocker; // 0x258(0x04)
	char pad_25C[0x12c]; // 0x25c(0x12c)
	bool _isKillerPlayerViewTarget; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)

	void Server_SetIsKillerPlayerViewTarget(bool isKillerPlayerViewTarget); // Function TheK28.K28SecondaryCamera.Server_SetIsKillerPlayerViewTarget // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x5491a80
	void Server_SetCameraOrientation(struct FRotator NewOrientation); // Function TheK28.K28SecondaryCamera.Server_SetCameraOrientation // (Final|Net|Native|Event|Private|NetServer|HasDefaults) // @ game+0x57ec3b0
	void OnRep_IsKillerPlayerViewTarget(); // Function TheK28.K28SecondaryCamera.OnRep_IsKillerPlayerViewTarget // (Final|Native|Private) // @ game+0x585c2c0
	void OnLevelReadyToPlay(); // Function TheK28.K28SecondaryCamera.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x585c1b0
	void Multicast_SetCameraOrientation(struct FRotator NewOrientation, bool isRelativeRotation); // Function TheK28.K28SecondaryCamera.Multicast_SetCameraOrientation // (Net|Native|Event|NetMulticast|Public|HasDefaults) // @ game+0x585be80
	bool GetIsKillerPlayerViewTarget(); // Function TheK28.K28SecondaryCamera.GetIsKillerPlayerViewTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x551e150
	struct FRotator GetCameraWorldRotation(); // Function TheK28.K28SecondaryCamera.GetCameraWorldRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x585bc20
	void Cosmetic_UpdateDarknessPlaneVisibility(bool IsVisible); // Function TheK28.K28SecondaryCamera.Cosmetic_UpdateDarknessPlaneVisibility // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerTeleportStartVisuals(); // Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportStartVisuals // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerTeleportEndVisuals(); // Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportEndVisuals // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerFadeOut(); // Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeOut // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerFadeIn(); // Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeIn // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnNightCycleChanged(enum class EK28NightCycleState newNightCycleState); // Function TheK28.K28SecondaryCamera.Cosmetic_OnNightCycleChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerExitLocker(); // Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerExitLocker // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerEnterLocker(); // Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerEnterLocker // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsLocallyObservingKillerChanged(bool isLocallyObservingKiller); // Function TheK28.K28SecondaryCamera.Cosmetic_OnIsLocallyObservingKillerChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DisableAllEffects(); // Function TheK28.K28SecondaryCamera.Cosmetic_DisableAllEffects // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28SurvivorAbductionCameraBehaviourComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UK28SurvivorAbductionCameraBehaviourComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	float _targetSpringArmLength; // 0xc0(0x04)
	float _targetLockerOffsetForCameraView; // 0xc4(0x04)
	struct FVector2D _cameraLocationOffset; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class TheK28.K28SurvivorComponent
// Size: 0x1d0 (Inherited: 0x170)
struct UK28SurvivorComponent : UK28PlayerComponent {
	char pad_170[0x8]; // 0x170(0x08)
	struct FDBDTunableRowHandle _killerBlackMaterialDarknessEffect; // 0x178(0x28)
	char pad_1A0[0x30]; // 0x1a0(0x30)

	void OnKillerInRangeChanged(bool inRange); // Function TheK28.K28SurvivorComponent.OnKillerInRangeChanged // (Final|Native|Private) // @ game+0x585e490
};

// Class TheK28.K28SurvivorCosmeticHelperActor
// Size: 0x298 (Inherited: 0x270)
struct AK28SurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	char pad_270[0x28]; // 0x270(0x28)

	void OnLevelReadyToPlay(); // Function TheK28.K28SurvivorCosmeticHelperActor.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x585e520
	struct UStaticMeshComponent* GetDarknessPlaneMesh(); // Function TheK28.K28SurvivorCosmeticHelperActor.GetDarknessPlaneMesh // (Event|Protected|BlueprintEvent|Const) // @ game+0x5e02c90
	void Cosmetic_OnNighttimeNearingActivation(); // Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNighttimeNearingActivation // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnNightCycleChanged(enum class EK28NightCycleState nightCycleState); // Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNightCycleChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLocallyObservedChanged(); // Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DeactivateNightGlowVFX(); // Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_DeactivateNightGlowVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivateNightGlowVFX(); // Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_ActivateNightGlowVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK28.K28SurvivorLockerAbductionInteraction
// Size: 0x6e0 (Inherited: 0x660)
struct UK28SurvivorLockerAbductionInteraction : UBaseLockerInteraction {
	struct FAnimationMontageDescriptor _survivorPanicInLockerAnimationMontageDescriptor; // 0x660(0x20)
	struct TWeakObjectPtr<struct UBaseLockerInteraction> _overriddenInteractionInstance; // 0x680(0x08)
	struct TArray<struct FGameplayTag> _overridingTags; // 0x688(0x10)
	float _fadeOutTime; // 0x698(0x04)
	float _minDotProductFadeOutThreshold; // 0x69c(0x04)
	float _rotationMaxTime; // 0x6a0(0x04)
	char pad_6A4[0x3c]; // 0x6a4(0x3c)

	void OnRep_OverriddenInteractionInstance(); // Function TheK28.K28SurvivorLockerAbductionInteraction.OnRep_OverriddenInteractionInstance // (Final|Native|Private) // @ game+0x585e540
};

// Class TheK28.K28TeleportationStrategyComponent
// Size: 0x160 (Inherited: 0xb8)
struct UK28TeleportationStrategyComponent : UActorComponent {
	struct TArray<struct FK28LockerCluster> _lockerClusters; // 0xb8(0x10)
	float _minMovementSquaredDistanceForBestClusterRecalculation; // 0xc8(0x04)
	float _minDeltaSquaredDistanceForBestTargetRecalculation; // 0xcc(0x04)
	float _minDeltaDotProductForBestTargetRecalculation; // 0xd0(0x04)
	float _minDotProductToBeEligibleForBestCluster; // 0xd4(0x04)
	struct UK28LockerComponent* _lockerComponentClass; // 0xd8(0x08)
	struct ADBDActorIndicator* _teleportIndicatorClass; // 0xe0(0x08)
	struct ADBDActorIndicator* _teleportIndicator; // 0xe8(0x08)
	char pad_F0[0x70]; // 0xf0(0x70)

	void Server_UpdateBestTeleportTarget(int32_t bestTeleportTargetID); // Function TheK28.K28TeleportationStrategyComponent.Server_UpdateBestTeleportTarget // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x585e630
	void Multicast_UpdateBestTeleportTarget(int32_t bestTeleportTargetID); // Function TheK28.K28TeleportationStrategyComponent.Multicast_UpdateBestTeleportTarget // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x553b520
	void Authority_OnLevelReadyToPlay(); // Function TheK28.K28TeleportationStrategyComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x585e020
};

// Class TheK28.K28TeleportInteraction
// Size: 0x840 (Inherited: 0x760)
struct UK28TeleportInteraction : UChargeableInteractionDefinition {
	struct FSecondaryInteractionProperties _confirmTeleportationProperties; // 0x758(0x38)
	struct FSecondaryInteractionProperties _returnToRemnantProperties; // 0x790(0x38)
	enum class EInputInteractionType _triggerTeleportInputType; // 0x7c8(0x01)
	struct UCurveFloat* _chargingSpeedCurve; // 0x7d0(0x08)
	struct UCurveFloat* _chargedSpeedCurve; // 0x7d8(0x08)
	struct UCurveFloat* _cancelledSpeedCurve; // 0x7e0(0x08)
	float _releaseInputMaxTime; // 0x7e8(0x04)
	float _minimumChargePercentageToConsiderTeleportButtonPress; // 0x7ec(0x04)
	char pad_7F1[0x4f]; // 0x7f1(0x4f)

	void Server_RequestTeleportToTarget(struct ASlasherPlayer* killer, struct UObject* teleportTarget); // Function TheK28.K28TeleportInteraction.Server_RequestTeleportToTarget // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x585e560
	void Multicast_RefuseTeleportationRequest(); // Function TheK28.K28TeleportInteraction.Multicast_RefuseTeleportationRequest // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56c4ec0
	void Multicast_ConfirmTeleportationRequest(struct ASlasherPlayer* killer, struct UObject* teleportTarget); // Function TheK28.K28TeleportInteraction.Multicast_ConfirmTeleportationRequest // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x585e3c0
	void Multicast_CompleteTeleportation(); // Function TheK28.K28TeleportInteraction.Multicast_CompleteTeleportation // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x585e3a0
};

// Class TheK28.K28Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK28Utilities : UBlueprintFunctionLibrary {

	bool IsLockerUsedByKillerLocked(struct UObject* WorldContextObject); // Function TheK28.K28Utilities.IsLockerUsedByKillerLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x585e310
	struct UK28TeleportationStrategyComponent* GetTeleportationStrategyComponent(struct UObject* WorldContextObject); // Function TheK28.K28Utilities.GetTeleportationStrategyComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x585e280
	struct AK28SecondaryCamera* GetSecondaryCamera(struct UObject* WorldContextObject); // Function TheK28.K28Utilities.GetSecondaryCamera // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x585e1f0
	struct AK28Remnant* GetRemnant(struct UObject* WorldContextObject); // Function TheK28.K28Utilities.GetRemnant // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x585e160
	struct AK28Power* GetK28Power(struct UObject* WorldContextObject); // Function TheK28.K28Utilities.GetK28Power // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x585e0d0
	struct UK28DayNightComponent* GetDayNightComponent(struct UObject* WorldContextObject); // Function TheK28.K28Utilities.GetDayNightComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x585e040
};

// Class TheK28.S31P01
// Size: 0x3e8 (Inherited: 0x3c8)
struct US31P01 : UPerk {
	float _loseHealthStateDetectionRadius; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	float _killerAuraRevealDuration[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UStatusEffect* _timedAuraReveal; // 0x3e0(0x08)

	float GetKillerAuraRevealDuration(); // Function TheK28.S31P01.GetKillerAuraRevealDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
};

// Class TheK28.S31P02
// Size: 0x3f0 (Inherited: 0x3c8)
struct US31P02 : UPerk {
	float _blindnessDurationPerLevel[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _blindnessEffect; // 0x3d8(0x08)
	struct FGameplayTag _itemFlag; // 0x3e0(0x0c)
	char pad_3EC[0x4]; // 0x3ec(0x04)
};

// Class TheK28.S31P03
// Size: 0x3f8 (Inherited: 0x3c8)
struct US31P03 : UPerk {
	float _genRepairSpeedBoostForDullTotem[0x3]; // 0x3c8(0x0c)
	float _genRepairSpeedBoostForHexTotem[0x3]; // 0x3d4(0x0c)
	struct UStatusEffect* _effectClass; // 0x3e0(0x08)
	char pad_3E8[0x10]; // 0x3e8(0x10)
};

