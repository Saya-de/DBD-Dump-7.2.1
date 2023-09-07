// Class TheOnryo.Addon_K27Power_01
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAddon_K27Power_01 : UItemAddon {
};

// Class TheOnryo.Addon_K27Power_09
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_K27Power_09 : UItemAddon {
	struct UStatusEffect* _addonStatusEffect; // 0x2b8(0x08)
};

// Class TheOnryo.Addon_K27Power_09StatusEffect
// Size: 0x368 (Inherited: 0x350)
struct UAddon_K27Power_09StatusEffect : UStatusEffect {
	float _condemnNeededForBlind; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UStatusEffect* _blindnessEffect; // 0x358(0x08)
	struct UStatusEffect* _blindnessStatusEffectClass; // 0x360(0x08)

	void Authority_OnSurviorCondemnChange(struct ACamperPlayer* Player, float condemnLevel); // Function TheOnryo.Addon_K27Power_09StatusEffect.Authority_OnSurviorCondemnChange // (Final|Native|Private) // @ game+0x5a2bd60
};

// Class TheOnryo.Addon_K27Power_13
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_K27Power_13 : UItemAddon {
	float _condemnStackNumber; // 0x2b8(0x04)
	bool _onlyGiveStackForHealingFromInjuredToHealthy; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
};

// Class TheOnryo.Addon_K27Power_17
// Size: 0x2f8 (Inherited: 0x2c8)
struct UAddon_K27Power_17 : UOnEventBaseAddon {
	float _distanceOfSightFromSurvivorToKiller; // 0x2c8(0x04)
	float _survivorScreamRevealDuration; // 0x2cc(0x04)
	struct UK27Addon_16_ScreamRevealComponent* _screamRevealComponentClass; // 0x2d0(0x08)
	struct TArray<struct TWeakObjectPtr<struct UK27Addon_16_ScreamRevealComponent>> _cachedScreamRevealComponents; // 0x2d8(0x10)
	char pad_2E8[0x10]; // 0x2e8(0x10)
};

// Class TheOnryo.Addon_K27Power_18
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K27Power_18 : UOnEventBaseAddon {
	struct UStatusEffect* _survivorImposedEffectClass; // 0x2c8(0x08)
	float _survivorInRangeDistance; // 0x2d0(0x04)
	float _hinderedSeconds; // 0x2d4(0x04)
};

// Class TheOnryo.Addon_K27Power_19
// Size: 0x2c0 (Inherited: 0x2b8)
struct UAddon_K27Power_19 : UItemAddon {
	struct ACollectable* _vhsCollectableBP; // 0x2b8(0x08)

	void Authority_SpawnInVHSTape(); // Function TheOnryo.Addon_K27Power_19.Authority_SpawnInVHSTape // (Final|Native|Private) // @ game+0x5a2bee0
	void Authority_OnIntroCompleted(); // Function TheOnryo.Addon_K27Power_19.Authority_OnIntroCompleted // (Final|Native|Private) // @ game+0x5a2bd00
};

// Class TheOnryo.Addon_K27Power_20
// Size: 0x2e8 (Inherited: 0x2c8)
struct UAddon_K27Power_20 : UOnEventBaseAddon {
	float _distanceFromSurvivorToTVToRevealAura; // 0x2c8(0x04)
	float _heightOffsetLowerBoundToRevealAura; // 0x2cc(0x04)
	float _heightOffsetUpperBoundToRevealAura; // 0x2d0(0x04)
	float _survivorAuraRevealDuration; // 0x2d4(0x04)
	bool _revealSurvivorsAroundPoweredTVs; // 0x2d8(0x01)
	bool _revealSurvivorsAroundTurnedOffTVs; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct UStatusEffect* _timedRevealToKillerEffect; // 0x2e0(0x08)
};

// Class TheOnryo.Addon_K27Power_21
// Size: 0x2b8 (Inherited: 0x2b8)
struct UAddon_K27Power_21 : UItemAddon {
};

// Class TheOnryo.BaseManifestInteraction
// Size: 0x7a0 (Inherited: 0x790)
struct UBaseManifestInteraction : UBasicChargeableInteraction {
	struct UManifestationComponent* _manifestationComponent; // 0x790(0x08)
	char pad_798[0x8]; // 0x798(0x08)

	void Cosmetic_OnInteractionSucceeded(struct ADBDPlayer* onryo); // Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionSucceeded // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionStarted(struct ADBDPlayer* onryo); // Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCancelled(struct ADBDPlayer* onryo); // Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOnryo.CondemnedComponent
// Size: 0x438 (Inherited: 0xb8)
struct UCondemnedComponent : UActorComponent {
	char pad_B8[0x68]; // 0xb8(0x68)
	struct FDBDTunableRowHandle _maxCondemnedLevel; // 0x120(0x28)
	struct FDBDTunableRowHandle _killerInstinctRevealDurationOnFullyCondemned; // 0x148(0x28)
	struct FDBDTunableRowHandle _stacksOnTurnOffTV; // 0x170(0x28)
	struct FDBDTunableRowHandle _stacksOnRetrieveVHS; // 0x198(0x28)
	struct FDBDTunableRowHandle _stacksRemovedOnInsert; // 0x1c0(0x28)
	struct FDBDTunableRowHandle _stacksOnOnryoTeleport; // 0x1e8(0x28)
	struct FDBDTunableRowHandle _reducedAddonStacksOnOnryoTeleport; // 0x210(0x28)
	struct FDBDTunableRowHandle _stacksOnPlayerHooked; // 0x238(0x28)
	struct FDBDTunableRowHandle _condemnedStacksToAddOnBasicAttack; // 0x260(0x28)
	struct FTunableStat _timePerCondemnStack; // 0x288(0x80)
	struct TArray<struct FGameplayTag> _analyticScoreTag; // 0x308(0x10)
	float _condemnedLevel; // 0x318(0x04)
	enum class ECondemnOrigin _previousReasonForCondemn; // 0x31c(0x01)
	bool _isHoldingVHS; // 0x31d(0x01)
	bool _vhsOnlyAppliesToSingleTV; // 0x31e(0x01)
	char pad_31F[0x39]; // 0x31f(0x39)
	struct UStatusEffect* _condemnKillerInstinctEffectClass; // 0x358(0x08)
	struct UStatusEffect* _condemnKillerInstinctEffect; // 0x360(0x08)
	char pad_368[0x18]; // 0x368(0x18)
	struct TArray<struct FGameplayTag> _reactivateCondemnProgressEvents; // 0x380(0x10)
	char pad_390[0x38]; // 0x390(0x38)
	struct FDBDTunableRowHandle _rangeToStopCondemnProgressAfterChase; // 0x3c8(0x28)
	struct FDBDTunableRowHandle _timeAwayFromKillerToResumeCondemn; // 0x3f0(0x28)
	char pad_418[0x20]; // 0x418(0x20)

	void OnRep_HoldingVHS(); // Function TheOnryo.CondemnedComponent.OnRep_HoldingVHS // (Final|Native|Private) // @ game+0x5a2c670
	void OnRep_CondemnedLevel(float previousValue); // Function TheOnryo.CondemnedComponent.OnRep_CondemnedLevel // (Final|Native|Private) // @ game+0x5a2c5f0
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheOnryo.CondemnedComponent.OnKillerSet // (Final|Native|Private) // @ game+0x5a2c4c0
	bool IsHoldingVHS(); // Function TheOnryo.CondemnedComponent.IsHoldingVHS // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c100
	bool IsFullyCondemned(); // Function TheOnryo.CondemnedComponent.IsFullyCondemned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c0d0
	bool IsCondemned(); // Function TheOnryo.CondemnedComponent.IsCondemned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c0a0
	float GetCondemnedPercent(); // Function TheOnryo.CondemnedComponent.GetCondemnedPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2bf50
	float GetCondemnedLevel(); // Function TheOnryo.CondemnedComponent.GetCondemnedLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2bf20
	void DBD_SetCondemnMoriableAndDownAllSurvivors(); // Function TheOnryo.CondemnedComponent.DBD_SetCondemnMoriableAndDownAllSurvivors // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_SetCondemnedLevel(float Level); // Function TheOnryo.CondemnedComponent.DBD_SetCondemnedLevel // (Final|Exec|Native|Public) // @ game+0x46a2490
};

// Class TheOnryo.CondemnMoriInteraction
// Size: 0x7f0 (Inherited: 0x7f0)
struct UCondemnMoriInteraction : UKillInteractionDefinition {
};

// Class TheOnryo.SurvivorTelevisionInteraction
// Size: 0x790 (Inherited: 0x790)
struct USurvivorTelevisionInteraction : UBasicChargeableInteraction {
};

// Class TheOnryo.InsertVHS
// Size: 0x790 (Inherited: 0x790)
struct UInsertVHS : USurvivorTelevisionInteraction {
};

// Class TheOnryo.K27Addon_16_ScreamRevealComponent
// Size: 0x118 (Inherited: 0xb8)
struct UK27Addon_16_ScreamRevealComponent : UActorComponent {
	bool _authorityHasRequestedSurvivorScreamConfirmation; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float _screamDuration; // 0xbc(0x04)
	struct UActivatableStatusEffect* _revealAuraToKillerEffectClass; // 0xc0(0x08)
	struct TMap<struct TWeakObjectPtr<struct ACamperPlayer>, struct UActivatableStatusEffect*> _revealAuraToKillerPerSurvivor; // 0xc8(0x50)

	void Server_ConfirmKillerIsInViewValidation(bool isKillerInView); // Function TheOnryo.K27Addon_16_ScreamRevealComponent.Server_ConfirmKillerIsInViewValidation // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x58c23b0
	void Multicast_RevealAndMakeSurvivorScream(float screamRevealDuration); // Function TheOnryo.K27Addon_16_ScreamRevealComponent.Multicast_RevealAndMakeSurvivorScream // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5481e10
	void Client_QueryIsKillerInSurvivorView(); // Function TheOnryo.K27Addon_16_ScreamRevealComponent.Client_QueryIsKillerInSurvivorView // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x4af1ae0
	void BP_RevealAndMakeSurvivorScream(struct ADBDPlayer* survivorPlayer, float screamRevealDuration); // Function TheOnryo.K27Addon_16_ScreamRevealComponent.BP_RevealAndMakeSurvivorScream // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOnryo.K27P01
// Size: 0x3e0 (Inherited: 0x3c8)
struct UK27P01 : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	float _survivorAuraRevealDuration[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)

	float GetAuraRevealDuration(); // Function TheOnryo.K27P01.GetAuraRevealDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
	void Authority_OnSurvivorUnhookedOffScourgeHook(struct FGameEventData& GameEventData); // Function TheOnryo.K27P01.Authority_OnSurvivorUnhookedOffScourgeHook // (Final|Native|Private|HasOutParms) // @ game+0x5a2be30
};

// Class TheOnryo.K27P02
// Size: 0x480 (Inherited: 0x3c8)
struct UK27P02 : UPerk {
	float _activePerkDuration[0x3]; // 0x3c8(0x0c)
	float _regressionModifier[0x3]; // 0x3d4(0x0c)
	struct TMap<struct AGenerator*, struct FFastTimer> _authority_affectedGeneratorsAndActiveTimers; // 0x3e0(0x50)
	struct TMap<struct AGenerator*, uint64_t> _gameplayModifierHandles; // 0x430(0x50)

	void Multicast_ShowBubbleNotification(struct AGenerator* triggeringGenerator); // Function TheOnryo.K27P02.Multicast_ShowBubbleNotification // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceef10
	void Multicast_AddGeneratorAura(struct AGenerator* Generator); // Function TheOnryo.K27P02.Multicast_AddGeneratorAura // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55198a0
	float GetRegressionModifierAtLevel(); // Function TheOnryo.K27P02.GetRegressionModifierAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetActivationTimeAtLevel(); // Function TheOnryo.K27P02.GetActivationTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	void Cosmetic_ShowBubbleNotification(struct AGenerator* triggeringGenerator); // Function TheOnryo.K27P02.Cosmetic_ShowBubbleNotification // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOnryo.K27P03
// Size: 0x490 (Inherited: 0x3c8)
struct UK27P03 : UPerk {
	struct FLinearColor _generatorBlockedAuraColorForKiller; // 0x3c8(0x10)
	float _generatorProgressionActivation[0x3]; // 0x3d8(0x0c)
	float _generatorBlockedDuration[0x3]; // 0x3e4(0x0c)
	struct TMap<struct TWeakObjectPtr<struct AGenerator>, struct FFastTimer> _authority_blockedGeneratorsAndTimeToUnblock; // 0x3f0(0x50)
	struct TMap<struct TWeakObjectPtr<struct ACamperPlayer>, struct TWeakObjectPtr<struct AGenerator>> _authority_affectedRepairersAndTheirGenerators; // 0x440(0x50)

	void Multicast_HighlightBlockedGeneratorForKiller(struct AGenerator* Generator); // Function TheOnryo.K27P03.Multicast_HighlightBlockedGeneratorForKiller // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceef10
	void Multicast_ActivateSkillCheck(struct ACamperPlayer* Survivor); // Function TheOnryo.K27P03.Multicast_ActivateSkillCheck // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55198a0
	float GetGeneratorProgressionActivationAtLevel(); // Function TheOnryo.K27P03.GetGeneratorProgressionActivationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf40e0
	float GetGeneratorBlockedDurationAtLevel(); // Function TheOnryo.K27P03.GetGeneratorBlockedDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd660
};

// Class TheOnryo.ManifestationComponent
// Size: 0x4b0 (Inherited: 0xb8)
struct UManifestationComponent : UActorComponent {
	struct UStatusEffect* _unmanifestedUndetectableStatusEffectClass; // 0xb8(0x08)
	struct FTunableStat _lingeringFlickerDuration; // 0xc0(0x80)
	struct FDBDTunableRowHandle _maxTrackedTimeSinceManifest; // 0x140(0x28)
	struct FTunableStat _manifestInteractionUndetectableLingerTime; // 0x168(0x80)
	struct FTunableStat _teleportManifestUndetectableLingeringDuration; // 0x1e8(0x80)
	struct FTunableStat _lingeringUndetectableDurationFromOtherSources; // 0x268(0x80)
	struct FStatProperty _scorePercent; // 0x2e8(0x88)
	char pad_370[0x28]; // 0x370(0x28)
	struct UOnryoVisibilityComponent* _onryoVisibilityComponent; // 0x398(0x08)
	struct UOnryoVisibilityComponent* _onryoVisibilityComponentClass; // 0x3a0(0x08)
	bool _isManifested; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	float _lingeringUndetectableEndTimeStamp; // 0x3ac(0x04)
	char pad_3B0[0xc8]; // 0x3b0(0xc8)
	struct UStatusEffect* _unmanifestStatusEffect; // 0x478(0x08)
	char pad_480[0x30]; // 0x480(0x30)

	void OnRep_LingeringUndetectableEndTimeStamp(); // Function TheOnryo.ManifestationComponent.OnRep_LingeringUndetectableEndTimeStamp // (Final|Native|Private) // @ game+0x5a2c760
	void OnRep_IsManifested(); // Function TheOnryo.ManifestationComponent.OnRep_IsManifested // (Final|Native|Private) // @ game+0x5a2c6b0
	void OnLingeringUndetectableTimerCompleted(); // Function TheOnryo.ManifestationComponent.OnLingeringUndetectableTimerCompleted // (Final|Native|Private) // @ game+0x5a2c590
	void OnLevelReadyToPlay(); // Function TheOnryo.ManifestationComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a2c550
	void Multicast_OnManifestationTransitionComplete(); // Function TheOnryo.ManifestationComponent.Multicast_OnManifestationTransitionComplete // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4aa7040
	void Multicast_OnManifestationChanged(bool isManifested, bool isImmediateManifest); // Function TheOnryo.ManifestationComponent.Multicast_OnManifestationChanged // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5a2c160
	void Multicast_AttemptToPalletStunDemanifestedKiller(); // Function TheOnryo.ManifestationComponent.Multicast_AttemptToPalletStunDemanifestedKiller // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	void Authority_OnMoriStarted(); // Function TheOnryo.ManifestationComponent.Authority_OnMoriStarted // (Final|Native|Private) // @ game+0x5a2bd20
	void Authority_AttemptToPalletStunDemanifestedKiller(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheOnryo.ManifestationComponent.Authority_AttemptToPalletStunDemanifestedKiller // (Final|Native|Private|HasOutParms) // @ game+0x5a2bbf0
};

// Class TheOnryo.ManifestInteraction
// Size: 0x7b0 (Inherited: 0x7a0)
struct UManifestInteraction : UBaseManifestInteraction {
	struct UCurveFloat* _postManifestSpeedCurve; // 0x798(0x08)
	float _postManifestSpeedCurveDuration; // 0x7a0(0x04)
	char pad_7AC[0x4]; // 0x7ac(0x04)
};

// Class TheOnryo.NearPoweredTelevisionWithLingerTime
// Size: 0x180 (Inherited: 0xe8)
struct UNearPoweredTelevisionWithLingerTime : UEventDrivenModifierCondition {
	float _distanceFromTelevision; // 0xe8(0x04)
	float _lingerDuration; // 0xec(0x04)
	struct FActorPairQueryHeightRange _heightRange; // 0xf0(0x08)
	char pad_F8[0x88]; // 0xf8(0x88)

	void OnLevelReadyToPlay(); // Function TheOnryo.NearPoweredTelevisionWithLingerTime.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a2c570
	float GetPercentRemainingDuration(); // Function TheOnryo.NearPoweredTelevisionWithLingerTime.GetPercentRemainingDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2bfe0
};

// Class TheOnryo.OnryoAfterImageComponent
// Size: 0x188 (Inherited: 0xb8)
struct UOnryoAfterImageComponent : UActorComponent {
	bool _isAllowedToSpawnImages; // 0xb8(0x01)
	char pad_B9[0xc8]; // 0xb9(0xc8)
	bool _hideAfterImageDuringInteractions; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)

	void ShouldShowAfterImageChanged(bool shouldBeVisible); // Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImageChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool ShouldShowAfterImage(); // Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImage // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c950
	void SetAllowedToSpawnImages(bool canSpawnImages); // Function TheOnryo.OnryoAfterImageComponent.SetAllowedToSpawnImages // (Final|Native|Public|BlueprintCallable) // @ game+0x5a2c7a0
	bool IsOnryoInvisible(); // Function TheOnryo.OnryoAfterImageComponent.IsOnryoInvisible // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x573e310
	bool IsInteracting(); // Function TheOnryo.OnryoAfterImageComponent.IsInteracting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c130
	bool IsAttacking(); // Function TheOnryo.OnryoAfterImageComponent.IsAttacking // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c070
	struct ASlasherPlayer* GetKiller(); // Function TheOnryo.OnryoAfterImageComponent.GetKiller // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2bf80
};

// Class TheOnryo.OnryoAnimInstance
// Size: 0x640 (Inherited: 0x610)
struct UOnryoAnimInstance : UKillerAnimInstance {
	bool _isTeleporting; // 0x610(0x01)
	bool _isStartingUpTeleport; // 0x611(0x01)
	char pad_612[0x2]; // 0x612(0x02)
	float _teleportStartUpDuration; // 0x614(0x04)
	bool _isCrawlingOutOfTV; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float _crawlingOutDuration; // 0x61c(0x04)
	bool _isTeleportCancelled; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	float _teleportCancelledDuration; // 0x624(0x04)
	bool _isEnteringManifest; // 0x628(0x01)
	bool _isExitingManifest; // 0x629(0x01)
	bool _isInOtherWorld; // 0x62a(0x01)
	char pad_62B[0x15]; // 0x62b(0x15)
};

// Class TheOnryo.OnryoFXInterface
// Size: 0x30 (Inherited: 0x30)
struct UOnryoFXInterface : UInterface {

	void Cosmetic_OnTeleportSuccess(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportSuccess // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportStart(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportStart // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportFinished(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportFinished // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportCancelled(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportCancelled // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnManifestStateChanged // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnKillerVisibilityChanged // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnFailedAttemptPalletStun(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnFailedAttemptPalletStun // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeUnmanifestSuccess(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestSuccess // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeUnmanifestStart(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestStart // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeUnmanifestCancelled(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestCancelled // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeManifestSuccess(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestSuccess // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeManifestStart(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestStart // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChargeManifestCancelled(); // Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestCancelled // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOnryo.OnryoPower
// Size: 0x610 (Inherited: 0x4c8)
struct AOnryoPower : ACollectable {
	char pad_4C8[0x10]; // 0x4c8(0x10)
	struct UCondemnedComponent* _condemnedComponentClass; // 0x4d8(0x08)
	struct UManifestationComponent* _manifestationComponentClass; // 0x4e0(0x08)
	struct TArray<struct FStatusEffectSpawnData> _effects; // 0x4e8(0x10)
	struct FDBDTunableRowHandle _teleportCooldownTime; // 0x4f8(0x28)
	struct FPlayerStatusEffectSpawnerHelper _effectSpawner; // 0x520(0x88)
	char pad_5A8[0x38]; // 0x5a8(0x38)
	struct UOnryoTeleportTargeterComponent* _televisionTargeter; // 0x5e0(0x08)
	struct UManifestationComponent* _manifestationComponent; // 0x5e8(0x08)
	struct TArray<struct AOnryoTelevision*> _televisions; // 0x5f0(0x10)
	struct AOnryoTelevision* _televisionClass; // 0x600(0x08)
	struct UInteractionDefinition* _onryoPowerCooldownInteraction; // 0x608(0x08)

	void PowerCooldownEnd_Cosmetic(); // Function TheOnryo.OnryoPower.PowerCooldownEnd_Cosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOnryo.OnryoPowerPresentationComponent
// Size: 0xe0 (Inherited: 0xc0)
struct UOnryoPowerPresentationComponent : UPresentationItemProgressComponent {
	struct UOnryoTVInitialCooldownStateComponent* _cooldownState; // 0xc0(0x08)
	char pad_C8[0x18]; // 0xc8(0x18)
};

// Class TheOnryo.OnryoSurvivorCosmeticHelperActor
// Size: 0x2e8 (Inherited: 0x270)
struct AOnryoSurvivorCosmeticHelperActor : ASurvivorCosmeticHelperActor {
	struct UCondemnedComponent* _condemnedComponent; // 0x270(0x08)
	char pad_278[0x70]; // 0x278(0x70)

	struct UGameplayTagContainerComponent* GetObjectState(); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.GetObjectState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2bfb0
	struct UCondemnedComponent* GetCondemnedComponent(); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.GetCondemnedComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5544f40
	void Cosmetic_OnReceiveTape(struct ACamperPlayer* camper); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnReceiveTape // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLoseTape(struct ACamperPlayer* camper); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseTape // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLoseCondemnStack(struct ACamperPlayer* camper, float currentStacks); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseCondemnStack // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnLightingSet(struct ABaseSky* lighting); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLightingSet // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHookedChanged(); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnHookedChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnGainCondemnStack(struct ACamperPlayer* camper, float currentStacks); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnGainCondemnStack // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnDamageStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCarryStart(struct ACamperPlayer* camper); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCarryEnd(struct ACamperPlayer* camper); // Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheOnryo.OnryoTeleportInteraction
// Size: 0x8f0 (Inherited: 0x790)
struct UOnryoTeleportInteraction : UBasicChargeableInteraction {
	struct ASlasherPlayer* _cachedOwningKiller; // 0x790(0x08)
	struct AOnryoTelevision* _currentTargetTelevision; // 0x798(0x08)
	struct AOnryoTelevision* _televisionTeleportingTo; // 0x7a0(0x08)
	char pad_7A8[0x8]; // 0x7a8(0x08)
	struct FDBDTunableRowHandle _teleportExitAnimDuration; // 0x7b0(0x28)
	struct FDBDTunableRowHandle _teleportCancelledAnimDuration; // 0x7d8(0x28)
	struct FDBDTunableRowHandle _postTeleportSpeedDuration; // 0x800(0x28)
	struct UCurveFloat* _postTeleportSpeedCurve; // 0x828(0x08)
	struct FStatProperty _scorePercent; // 0x830(0x88)
	struct UCurveFloat* _postTeleportAlternateSpeedCurve; // 0x8b8(0x08)
	float _offsetHeight; // 0x8c0(0x04)
	float _rayCastLength; // 0x8c4(0x04)
	struct UConeAroundDirectionCameraStrategy* _cameraStrategyClass; // 0x8c8(0x08)
	struct UCurveFloat* _cameraMaximumAngleFactorCurve; // 0x8d0(0x08)
	char pad_8D8[0x10]; // 0x8d8(0x10)
	struct UConeAroundDirectionCameraStrategy* _cameraStrategy; // 0x8e8(0x08)
};

// Class TheOnryo.OnryoTelevision
// Size: 0x650 (Inherited: 0x338)
struct AOnryoTelevision : AInteractable {
	char pad_338[0x18]; // 0x338(0x18)
	struct USceneComponent* _teleportPosition; // 0x350(0x08)
	bool _isKillerInOtherWorld; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UTelevisionOutlineUpdateStrategy* _televisionOutlineUpdateStrategy; // 0x360(0x08)
	struct ULocalPlayerTrackerComponent* _localPlayerTracker; // 0x368(0x08)
	struct UMapActorComponent* _mapActorComponent; // 0x370(0x08)
	struct UOnryoTVAutoPowerComponent* _autoPowerComponent; // 0x378(0x08)
	char pad_380[0x48]; // 0x380(0x48)
	bool _isPowered; // 0x3c8(0x01)
	char pad_3C9[0x17]; // 0x3c9(0x17)
	struct TSet<struct ADBDPlayer*> _nearbySurvivorsWithoutTape; // 0x3e0(0x50)
	char pad_430[0x50]; // 0x430(0x50)
	struct FDBDTunableRowHandle _distanceNearTVWithoutTape; // 0x480(0x28)
	struct FTunableStat _survivorTurnOffTVDuration; // 0x4a8(0x80)
	struct FTunableStat _teleportTurnOffDuration; // 0x528(0x80)
	struct FTunableStat _survivorInsertTapeTurnOffDuration; // 0x5a8(0x80)
	struct FDBDTunableRowHandle _shouldRepowerOtherTelevisionsWhenAllTurnedOff; // 0x628(0x28)

	void OnRep_IsPowered(bool previousIsPowered); // Function TheOnryo.OnryoTelevision.OnRep_IsPowered // (Final|Native|Private) // @ game+0x5a2c6d0
	void OnLocallyObservedChanged(); // Function TheOnryo.OnryoTelevision.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x5a2c5b0
	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheOnryo.OnryoTelevision.OnKillerSet // (Final|Native|Private) // @ game+0x5a2c430
	void OnCosmeticTransitionStateFinished(); // Function TheOnryo.OnryoTelevision.OnCosmeticTransitionStateFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x5a2c360
	void Multicast_SetSurvivorCanInsertTape(struct ADBDPlayer* Survivor, bool canInsert, bool showBubbleIndicator); // Function TheOnryo.OnryoTelevision.Multicast_SetSurvivorCanInsertTape // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5a2c240
	void Multicast_FireLoudNoiseNotification(); // Function TheOnryo.OnryoTelevision.Multicast_FireLoudNoiseNotification // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x3daf120
	bool IsAnySurvivorWithoutTapeNearby(); // Function TheOnryo.OnryoTelevision.IsAnySurvivorWithoutTapeNearby // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c040
	enum class ETelevisionCosmeticState GetTelevisionCosmeticState(); // Function TheOnryo.OnryoTelevision.GetTelevisionCosmeticState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a2c010
	void Cosmetic_SetIsTeleportTarget(bool Target); // Function TheOnryo.OnryoTelevision.Cosmetic_SetIsTeleportTarget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTVSelectedByLocalSurvivor(struct ADBDPlayer* Survivor); // Function TheOnryo.OnryoTelevision.Cosmetic_OnTVSelectedByLocalSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTelevisionCosmeticStateChanged(enum class ETelevisionCosmeticState NextState, enum class ETelevisionCosmeticState previousState); // Function TheOnryo.OnryoTelevision.Cosmetic_OnTelevisionCosmeticStateChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportStarted(); // Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportCompleted(); // Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTeleportCancelled(); // Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStatusEffectZoneVFXActiveChanged(bool Active); // Function TheOnryo.OnryoTelevision.Cosmetic_OnStatusEffectZoneVFXActiveChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnCamperCanInsertTapeChanged(bool canInsertTape); // Function TheOnryo.OnryoTelevision.Cosmetic_OnCamperCanInsertTapeChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnRepowerTimerDone(); // Function TheOnryo.OnryoTelevision.Authority_OnRepowerTimerDone // (Final|Native|Private) // @ game+0x5a2bd40
};

// Class TheOnryo.OnryoTVAutoPowerComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UOnryoTVAutoPowerComponent : UActorComponent {
	struct UOnryoTVInitialCooldownStateComponent* _cooldownStateClass; // 0xb8(0x08)
	bool _powerTVOnBeginPlay; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// Class TheOnryo.OnryoTVInitialCooldownStateComponent
// Size: 0x108 (Inherited: 0xb8)
struct UOnryoTVInitialCooldownStateComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FDBDTunableRowHandle _initialTVCooldown; // 0xd0(0x28)
	struct UTimerObject* _cooldownTimer; // 0xf8(0x08)
	bool _isDone; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	void OnRep_IsDone(); // Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnRep_IsDone // (Final|Native|Private) // @ game+0x5a2c690
	void OnCooldownDone(); // Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnCooldownDone // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_TryStartCooldown(); // Function TheOnryo.OnryoTVInitialCooldownStateComponent.Authority_TryStartCooldown // (Final|Native|Private) // @ game+0x5a2bf00
};

// Class TheOnryo.OnryoUnmanifestCooldownInteraction
// Size: 0x670 (Inherited: 0x630)
struct UOnryoUnmanifestCooldownInteraction : UInteractionDefinition {
	struct FDBDTunableRowHandle _onryoPowerCooldownTime; // 0x630(0x28)
	struct UCurveFloat* _playedCooldownSpeedCurve; // 0x658(0x08)
	char pad_660[0x10]; // 0x660(0x10)

	void SetOnryoPower(struct AOnryoPower* OnryoPower); // Function TheOnryo.OnryoUnmanifestCooldownInteraction.SetOnryoPower // (Final|Native|Public|BlueprintCallable) // @ game+0x5a2c830
};

// Class TheOnryo.OnryoVisibilityComponent
// Size: 0x210 (Inherited: 0xb8)
struct UOnryoVisibilityComponent : UActorComponent {
	bool _isKillerVisible; // 0xb8(0x01)
	bool _isInKillerSightRange; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct TArray<struct FGameplayTag> _killerRevealingStateTags; // 0xc0(0x10)
	struct FDBDTunableRowHandle _killerVisibleMaxDistance; // 0xd0(0x28)
	struct TMap<enum class EFlickerType, struct FFlickerSettings> _flickerSettings; // 0xf8(0x50)
	char pad_148[0x1]; // 0x148(0x01)
	bool _isInIntroPhase; // 0x149(0x01)
	bool _isManifested; // 0x14a(0x01)
	bool _isInManifestingTransition; // 0x14b(0x01)
	char pad_14C[0xc4]; // 0x14c(0xc4)

	void OnLocallyObservedChanged(); // Function TheOnryo.OnryoVisibilityComponent.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x5a2c5d0
	void OnKillerInSurvivorSightRangeChanged(bool inRange); // Function TheOnryo.OnryoVisibilityComponent.OnKillerInSurvivorSightRangeChanged // (Final|Native|Private) // @ game+0x5a2c3a0
	void OnIntroCompleted(); // Function TheOnryo.OnryoVisibilityComponent.OnIntroCompleted // (Final|Native|Public) // @ game+0x5a2c380
	void Multicast_OnManifestationStateChanged(bool isManifested, bool isImmediateManifest); // Function TheOnryo.OnryoVisibilityComponent.Multicast_OnManifestationStateChanged // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x4aec730
};

// Class TheOnryo.RetrieveVHS
// Size: 0x7a0 (Inherited: 0x790)
struct URetrieveVHS : USurvivorTelevisionInteraction {
	struct ACollectable* _vhsCollectableBP; // 0x790(0x08)
	char pad_798[0x8]; // 0x798(0x08)
};

// Class TheOnryo.S30P01
// Size: 0x3d8 (Inherited: 0x3c8)
struct US30P01 : UPerk {
	float _perkEffectActiveDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

// Class TheOnryo.S30P02
// Size: 0x410 (Inherited: 0x3c8)
struct US30P02 : UPerk {
	float _auraReadingDistance[0x3]; // 0x3c8(0x0c)
	float _healingOthersBonus[0x3]; // 0x3d4(0x0c)
	char pad_3E0[0x10]; // 0x3e0(0x10)
	struct UStatusEffect* _revealAuraStatusEffectToImpose; // 0x3f0(0x08)
	struct UStatusEffect* _showHUDIconStatusEffectToImpose; // 0x3f8(0x08)
	struct TArray<struct UStatusEffect*> _imposedShowHUDIconStatusEffects; // 0x400(0x10)

	float GetHealingOthersBonus(); // Function TheOnryo.S30P02.GetHealingOthersBonus // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
};

// Class TheOnryo.S30P03
// Size: 0x490 (Inherited: 0x480)
struct US30P03 : UBoonPerk {
	float _hasteLingerDuration[0x3]; // 0x480(0x0c)
	char pad_48C[0x4]; // 0x48c(0x04)
};

// Class TheOnryo.TelevisionOutlineUpdateStrategy
// Size: 0x160 (Inherited: 0xc0)
struct UTelevisionOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FDBDTunableRowHandle _distanceToRevealAura; // 0xc0(0x28)
	char pad_E8[0x4]; // 0xe8(0x04)
	struct FLinearColor _survivorAuraColor; // 0xec(0x10)
	struct FLinearColor _slasherPoweredColor; // 0xfc(0x10)
	struct FLinearColor _revealedByMapColor; // 0x10c(0x10)
	struct FLinearColor _slasherUnpoweredDefaultColor; // 0x11c(0x10)
	struct FLinearColor _slasherUnpoweredVisibleColor; // 0x12c(0x10)
	struct FLinearColor _slasherTeleportTargetColor; // 0x13c(0x10)
	char pad_14C[0x14]; // 0x14c(0x14)
};

// Class TheOnryo.OnryoTeleportTargeterComponent
// Size: 0x130 (Inherited: 0xb8)
struct UOnryoTeleportTargeterComponent : UActorComponent {
	struct FDBDTunableRowHandle _maximumTeleportAngle; // 0xb8(0x28)
	struct AOnryoTelevision* _replicatedTargetTelevision; // 0xe0(0x08)
	struct AOnryoTelevision* _localTargetTelevision; // 0xe8(0x08)
	struct AOnryoTelevision* _previousTarget; // 0xf0(0x08)
	float _targetUpdateInterval; // 0xf8(0x04)
	char pad_FC[0x34]; // 0xfc(0x34)

	void Server_SetTeleportTarget(struct AOnryoTelevision* TV); // Function TheOnryo.OnryoTeleportTargeterComponent.Server_SetTeleportTarget // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x55700e0
	void OnRep_TargetTelevision(); // Function TheOnryo.OnryoTeleportTargeterComponent.OnRep_TargetTelevision // (Final|Native|Private) // @ game+0x5a2c780
};

// Class TheOnryo.UnmanifestInteraction
// Size: 0x7a0 (Inherited: 0x7a0)
struct UUnmanifestInteraction : UBaseManifestInteraction {

	void SetOnryoPower(struct AOnryoPower* OnryoPower); // Function TheOnryo.UnmanifestInteraction.SetOnryoPower // (Final|Native|Public|BlueprintCallable) // @ game+0x5a2c8c0
};

