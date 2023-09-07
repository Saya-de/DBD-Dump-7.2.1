// Class Archives.ActorPathFollowingComponent
// Size: 0x258 (Inherited: 0x258)
struct UActorPathFollowingComponent : UPathFollowingComponent {
};

// Class Archives.AfterExitOpenQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UAfterExitOpenQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnExitGateOpened(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened // (Final|Native|Public|HasOutParms) // @ game+0x4ae6380
};

// Class Archives.AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy
// Size: 0xe0 (Inherited: 0xc0)
struct UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _outlineColor; // 0xc0(0x10)
	struct FName _glyphQuestId; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Archives.BaseRecentEventEvaluatorCondition
// Size: 0xc0 (Inherited: 0x48)
struct UBaseRecentEventEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x1c]; // 0x48(0x1c)
	struct FGameplayTag _firstGameEvent; // 0x64(0x0c)
	char pad_70[0x50]; // 0x70(0x50)
};

// Class Archives.BloodPointsQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UBloodPointsQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnFinishedPlaying(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying // (Final|Native|Public|HasOutParms) // @ game+0x4ae66b0
};

// Class Archives.CarryDistanceQEEvaluator
// Size: 0x128 (Inherited: 0xb8)
struct UCarryDistanceQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x70]; // 0xb8(0x70)
};

// Class Archives.ChaseInBasementQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UChaseInBasementQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnEscapeChase(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.ChaseInBasementQEEvaluator.OnEscapeChase // (Final|Native|Public|HasOutParms) // @ game+0x4ae6490
	void OnChaseStart(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.ChaseInBasementQEEvaluator.OnChaseStart // (Final|Native|Public|HasOutParms) // @ game+0x4ae6270
	void OnChaseEnd(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.ChaseInBasementQEEvaluator.OnChaseEnd // (Final|Native|Public|HasOutParms) // @ game+0x4ae6160
};

// Class Archives.ContextualQuestUtilities
// Size: 0x30 (Inherited: 0x30)
struct UContextualQuestUtilities : UBlueprintFunctionLibrary {

	bool PlayerHasToCompleteAssociatedQuest(struct ADBDPlayer* Player, struct FName SpecialBehaviourId); // Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4ae6e30
	bool PlayerHasAssociatedQuest(struct ADBDPlayer* Player, struct FName SpecialBehaviourId); // Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4ae6d50
};

// Class Archives.CustomValueEvaluatorCondition
// Size: 0x60 (Inherited: 0x48)
struct UCustomValueEvaluatorCondition : UEvaluatorCondition {
	struct FString _paramConditionKey; // 0x48(0x10)
	enum class ECustomValueComparator _comparator; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Archives.CustomValueLessThanAmountQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UCustomValueLessThanAmountQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.CustomValueMoreThanAmountQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UCustomValueMoreThanAmountQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.CustomValuePercentQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UCustomValuePercentQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.CustomValueQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UCustomValueQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.DifferentSurvivorsNearMeQEEvaluator
// Size: 0x110 (Inherited: 0xb8)
struct UDifferentSurvivorsNearMeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TSet<struct ADBDPlayer*> _foundSurvivors; // 0xc0(0x50)
};

// Class Archives.DoBeforeEscapeQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UDoBeforeEscapeQEEvaluator : UQuestEventEvaluatorBase {

	void OnEscaped(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped // (Final|Native|Public|HasOutParms) // @ game+0x4ae65a0
};

// Class Archives.DoBeforeHookQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UDoBeforeHookQEEvaluator : UQuestEventEvaluatorBase {

	void OnHooked(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.DoBeforeHookQEEvaluator.OnHooked // (Final|Native|Public|HasOutParms) // @ game+0x4ae69e0
};

// Class Archives.DuringEndGameCollapseQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UDuringEndGameCollapseQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnEndGameCollapseStart(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart // (Final|Native|Private|HasOutParms) // @ game+0x4ae6380
};

// Class Archives.EarnEmblemQualityQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UEarnEmblemQualityQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x18]; // 0xb8(0x18)

	void OnFinishedPlaying(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying // (Final|Native|Public|HasOutParms) // @ game+0x4ae67c0
};

// Class Archives.EndOfGameQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UEndOfGameQEEvaluator : UQuestEventEvaluatorBase {

	void OnFinishedPlaying(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying // (Final|Native|Public|HasOutParms) // @ game+0x4ae68d0
};

// Class Archives.EscapeBasementItemQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UEscapeBasementItemQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnTargetEscapeFromTrial(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.EscapeBasementItemQEEvaluator.OnTargetEscapeFromTrial // (Final|Native|Public|HasOutParms) // @ game+0x4ae6c40
	void OnItemCollectedFromChest(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.EscapeBasementItemQEEvaluator.OnItemCollectedFromChest // (Final|Native|Public|HasOutParms) // @ game+0x4ae6af0
};

// Class Archives.EscapeOtherInTrialQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UEscapeOtherInTrialQEEvaluator : UDoBeforeEscapeQEEvaluator {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.EventAfterOtherWithMinimumCustomValueQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UEventAfterOtherWithMinimumCustomValueQEEvaluator : UQuestEventEvaluatorBase {
	struct FGameplayTag _startEvent; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)
};

// Class Archives.EventCountComparisonQEEvaluator
// Size: 0xf0 (Inherited: 0xb8)
struct UEventCountComparisonQEEvaluator : UQuestEventEvaluatorBase {
	struct TArray<struct FGameplayTag> _incrementCountEvents; // 0xb8(0x10)
	enum class EEventSubject _incrementIfIAm; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FGameplayTag> _resetCountEvents; // 0xd0(0x10)
	enum class EEventSubject _resetIfIAm; // 0xe0(0x01)
	enum class EEventCountComparisonOperator _comparisonOperator; // 0xe1(0x01)
	char pad_E2[0xe]; // 0xe2(0x0e)
};

// Class Archives.EventInTimeQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UEventInTimeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.EventOccuredAndStayNearQuestEvaluator
// Size: 0x140 (Inherited: 0xb8)
struct UEventOccuredAndStayNearQuestEvaluator : UQuestEventEvaluatorBase {
	struct FGameplayTag _triggerEvent; // 0xb8(0x0c)
	enum class ESubjectPerspective _instigatorPerspective; // 0xc4(0x01)
	enum class ESubjectPerspective _targetPerspective; // 0xc5(0x01)
	char pad_C6[0x7a]; // 0xc6(0x7a)
};

// Class Archives.EventOccurredBetweenQEEvaluator
// Size: 0xd8 (Inherited: 0xb8)
struct UEventOccurredBetweenQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FGameplayTag _middleEvent; // 0xc8(0x0c)
	bool outerEventsDifferentTargets; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
};

// Class Archives.FinishPreventGateEscapeQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UFinishPreventGateEscapeQEEvaluator : UEndOfGameQEEvaluator {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.FragileObjectComponent
// Size: 0x140 (Inherited: 0xb8)
struct UFragileObjectComponent : UActorComponent {
	struct FMulticastInlineDelegate OnObjectBroken; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnObjectRepaired; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool _repaired; // 0xf0(0x01)
	char pad_F1[0x2f]; // 0xf1(0x2f)
	float _minFallingHeight; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FGameplayTag> _generalObjectBreakingEvents; // 0x128(0x10)
	struct ADBDPlayer* _previousCollector; // 0x138(0x08)

	void OnRep_Repaired(); // Function Archives.FragileObjectComponent.OnRep_Repaired // (Final|Native|Private|Const) // @ game+0x4ae6c20
	void OnFragileObjectStateChanged__DelegateSignature(); // DelegateFunction Archives.FragileObjectComponent.OnFragileObjectStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsRepaired(); // Function Archives.FragileObjectComponent.IsRepaired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ae6130
	struct ADBDPlayer* GetPreviousCollector(); // Function Archives.FragileObjectComponent.GetPreviousCollector // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ae6060
	void DBD_RepairFragileObject(); // Function Archives.FragileObjectComponent.DBD_RepairFragileObject // (Final|Exec|Native|Private) // @ game+0x4032ad0
	void Authority_OnCamperRemoved(struct ACamperPlayer* removedPlayer); // Function Archives.FragileObjectComponent.Authority_OnCamperRemoved // (Final|Native|Private) // @ game+0x4ae5d90
};

// Class Archives.GeneratorCoOpEvaluatorCondition
// Size: 0x48 (Inherited: 0x48)
struct UGeneratorCoOpEvaluatorCondition : UEvaluatorCondition {
};

// Class Archives.GeneratorsNeededCountQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UGeneratorsNeededCountQEEvaluator : UEndOfGameQEEvaluator {
};

// Class Archives.Glyph
// Size: 0x4d0 (Inherited: 0x378)
struct AGlyph : ASpecialBehaviourInteractable {
	char pad_378[0x8]; // 0x378(0x08)
	struct TArray<struct ADBDPlayer*> _playersWithVisibility; // 0x380(0x10)
	struct TArray<struct ADBDPlayer*> _oldPlayersWithVisibility; // 0x390(0x10)
	struct FName _specialBehaviourId; // 0x3a0(0x0c)
	enum class EAllowedPlayerType _allowedPlayerType; // 0x3ac(0x01)
	bool _canOnlyBeInteractedOnByOnePlayer; // 0x3ad(0x01)
	bool _canBeInteractedAfterQuestCompleted; // 0x3ae(0x01)
	char pad_3AF[0x1]; // 0x3af(0x01)
	struct TWeakObjectPtr<struct ADBDPlayer> lastPlayerToStartInteraction; // 0x3b0(0x08)
	struct TArray<struct TWeakObjectPtr<struct ADBDPlayerState>> _isGlyphActivatedForPlayer; // 0x3b8(0x10)
	bool _grantChallengeProgress; // 0x3c8(0x01)
	bool _grantQuestEventProgressOnInteraction; // 0x3c9(0x01)
	bool _isActive; // 0x3ca(0x01)
	char pad_3CB[0x5]; // 0x3cb(0x05)
	struct UGlyphInteraction* _glyphInteraction; // 0x3d0(0x08)
	struct UGlyphInteraction* _glyphInteractionKiller; // 0x3d8(0x08)
	struct UChargeableComponent* _glyphInteractionChargeable; // 0x3e0(0x08)
	struct UChargeableComponent* _glyphInteractionChargeableKiller; // 0x3e8(0x08)
	struct UInteractor* _glyphInteractor; // 0x3f0(0x08)
	struct UNearTrackedActorComponent* _nearTrackedActorComponent; // 0x3f8(0x08)
	struct UPrimitiveComponent* _glyphInteractionZone; // 0x400(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x408(0x08)
	struct UStaticMeshComponent* _glyphMesh; // 0x410(0x08)
	struct FGameplayTag _associatedSurvivorScoreEvent; // 0x418(0x0c)
	struct FGameplayTag _associatedKillerScoreEvent; // 0x424(0x0c)
	bool _isScoreRewardExponentialForMultipleGlyphs; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FDBDTunableRowHandle _glyphInteractionSecondsToCharge; // 0x438(0x28)
	struct FDBDTunableRowHandle _glyphInteractionSecondsToChargeKiller; // 0x460(0x28)
	struct FDBDTunableRowHandle _glyphDetectionRange; // 0x488(0x28)
	struct FLinearColor _auraColorWhileInteracting; // 0x4b0(0x10)
	struct TArray<struct ADBDPlayer*> _playersThatInteractedWithGlyph; // 0x4c0(0x10)

	void OnRep_PlayersWithVisibility(); // Function Archives.Glyph.OnRep_PlayersWithVisibility // (Final|Native|Protected) // @ game+0x4ae6c00
	bool IsPlayerOwner(struct ADBDPlayer* Player); // Function Archives.Glyph.IsPlayerOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ae6090
	bool DoesLocalPlayerHaveVisibility(); // Function Archives.Glyph.DoesLocalPlayerHaveVisibility // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x4ae6030
	void Cosmetic_OnStoppedInteracting(); // Function Archives.Glyph.Cosmetic_OnStoppedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Archives.Glyph.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Archives.Glyph.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnGlyphVisibilityChanged(struct ADBDPlayer* interactingPlayer, bool IsVisible); // Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_TrackPlayerWithBehaviourID(struct ADBDPlayer* DBDPlayer); // Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID // (Final|Native|Private) // @ game+0x4ae5f10
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, struct AActor* trackedActor); // Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold // (Final|Native|Private) // @ game+0x4ae5e40
	void Authority_OnIntroCompleted(); // Function Archives.Glyph.Authority_OnIntroCompleted // (Final|Native|Private) // @ game+0x4ae5e20
	void Authority_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Archives.Glyph.Authority_OnInteractionCompleted // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Archives.GlyphDebugComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UGlyphDebugComponent : UActorComponent {
	bool _assignOwnerOnBeginPlay; // 0xb8(0x01)
	enum class EPawnType _ownerPawnType; // 0xb9(0x01)
	char pad_BA[0x1e]; // 0xba(0x1e)
};

// Class Archives.GlyphEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UGlyphEvaluatorCondition : UEvaluatorCondition {
	struct AGlyph* _glyphClass; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Archives.GlyphInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct UGlyphInteraction : UChargeableInteractionDefinition {
	char pad_760[0x50]; // 0x760(0x50)
};

// Class Archives.GlyphOutlineUpdateStrategy
// Size: 0x138 (Inherited: 0x138)
struct UGlyphOutlineUpdateStrategy : USourceBasedOutlineUpdateStrategy {
};

// Class Archives.GreenGlyphActivatorComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UGreenGlyphActivatorComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct TWeakObjectPtr<struct UGreenGlyphComponent>> _greenGlyphComponents; // 0xd0(0x10)
	struct TArray<struct AGenerator*> _completedGenerators; // 0xe0(0x10)

	void DBD_ShowAuraGreenGlyphsActive(bool Enabled); // Function Archives.GreenGlyphActivatorComponent.DBD_ShowAuraGreenGlyphsActive // (Final|Exec|Native|Private) // @ game+0x4ae5fa0
	void Authority_OnActivateGlyphEvents(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function Archives.GreenGlyphActivatorComponent.Authority_OnActivateGlyphEvents // (Final|Native|Private|HasOutParms) // @ game+0x4ae5c80
	void Authority_EndGameScenarioBegins(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function Archives.GreenGlyphActivatorComponent.Authority_EndGameScenarioBegins // (Final|Native|Private|HasOutParms) // @ game+0x4ae5b70
};

// Class Archives.GreenGlyphComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UGreenGlyphComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	float _revealAuraGlyphDuration; // 0xc8(0x04)
	bool _shouldOutlineBeActive; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)

	void OnRep_SetShouldOutlineBeActive(); // Function Archives.GreenGlyphComponent.OnRep_SetShouldOutlineBeActive // (Final|Native|Private) // @ game+0x4aed3f0
	void Multicast_Cheat_ShowAuraGreenGlyphActive(bool Enabled, bool bForceShowAura); // Function Archives.GreenGlyphComponent.Multicast_Cheat_ShowAuraGreenGlyphActive // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x4aec730
};

// Class Archives.HasAMostProgressedGeneratorCondition
// Size: 0x48 (Inherited: 0x48)
struct UHasAMostProgressedGeneratorCondition : UEvaluatorCondition {
};

// Class Archives.HasAnyVisibleStatusEffectOfType
// Size: 0x50 (Inherited: 0x48)
struct UHasAnyVisibleStatusEffectOfType : UEvaluatorCondition {
	enum class EMatchingStatusEffectType _statusEffectOfType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Archives.HasBeenDownedFromInjuredCrowHitQEEvaluator
// Size: 0x108 (Inherited: 0xb8)
struct UHasBeenDownedFromInjuredCrowHitQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x50]; // 0xb8(0x50)
};

// Class Archives.HasDepletedSameItemTwoTimesQEEvaluator
// Size: 0x110 (Inherited: 0xb8)
struct UHasDepletedSameItemTwoTimesQEEvaluator : UQuestEventEvaluatorBase {
	enum class ELoadoutItemType _itemType; // 0xb8(0x01)
	char pad_B9[0x57]; // 0xb9(0x57)
};

// Class Archives.HasDownedTargetAnyDebuffEffectEvaluator
// Size: 0xe0 (Inherited: 0xb8)
struct UHasDownedTargetAnyDebuffEffectEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FGameplayTagContainer _targetPreventingTags; // 0xc0(0x20)
};

// Class Archives.HasEventHappenedEnoughTimesEvaluatorCondition
// Size: 0xd0 (Inherited: 0x48)
struct UHasEventHappenedEnoughTimesEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x18]; // 0x48(0x18)
	struct FEventOccurrenceConditionData _conditionEventsData; // 0x60(0x60)
	float _numOccurrences; // 0xc0(0x04)
	float _prerequisiteTimeLimit; // 0xc4(0x04)
	float _triggerTimeLimit; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Archives.HasEventHappenedEnoughTimesResettableEvaluatorCondition
// Size: 0xf0 (Inherited: 0xd0)
struct UHasEventHappenedEnoughTimesResettableEvaluatorCondition : UHasEventHappenedEnoughTimesEvaluatorCondition {
	struct FGameplayTagContainer _resetProgressGameEvents; // 0xd0(0x20)
};

// Class Archives.HasEventHappenedEvaluatorCondition
// Size: 0xc0 (Inherited: 0xc0)
struct UHasEventHappenedEvaluatorCondition : UBaseRecentEventEvaluatorCondition {
};

// Class Archives.HasEventNotHappenedEvaluatorCondition
// Size: 0xc8 (Inherited: 0xc0)
struct UHasEventNotHappenedEvaluatorCondition : UBaseRecentEventEvaluatorCondition {
	float timeLimitOverride; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Archives.HasGameplayTagEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UHasGameplayTagEvaluatorCondition : UEvaluatorCondition {
	struct TArray<struct FGameplayTag> _gameplayTagList; // 0x48(0x10)
};

// Class Archives.HasInteractedMapTrackedInteractorQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UHasInteractedMapTrackedInteractorQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x18]; // 0xb8(0x18)

	void OnLevelReadyToPlay(); // Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4aed3d0
	void OnActorTrackedByMap(struct UActorKnowledgeCollection* knowledgeCollection, struct AActor* newActor); // Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnActorTrackedByMap // (Final|Native|Private) // @ game+0x4aec810
};

// Class Archives.HasItemNoChargesQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UHasItemNoChargesQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.HasItemRarityEvaluatorCondition
// Size: 0x50 (Inherited: 0x48)
struct UHasItemRarityEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Archives.ItemRarityQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UItemRarityQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.HasItemRarityQEEvaluator
// Size: 0xc0 (Inherited: 0xc0)
struct UHasItemRarityQEEvaluator : UItemRarityQEEvaluator {
};

// Class Archives.HasItemTypeEvaluatorCondition
// Size: 0x50 (Inherited: 0x48)
struct UHasItemTypeEvaluatorCondition : UEvaluatorCondition {
	enum class ELoadoutItemType _itemType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Archives.HasItemTypeQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UHasItemTypeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.HasModifierOfTypeEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UHasModifierOfTypeEvaluatorCondition : UEvaluatorCondition {
	struct TArray<struct FGameplayTag> _gameplayModifierList; // 0x48(0x10)
};

// Class Archives.HasOneOfEventsHappenedEvaluatorCondition
// Size: 0x78 (Inherited: 0x48)
struct UHasOneOfEventsHappenedEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x18]; // 0x48(0x18)
	struct TArray<struct FAnyEventConditionData> _conditionEventsData; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class Archives.HasRecentEventHappenedWhileInStateTagCondition
// Size: 0xa8 (Inherited: 0x48)
struct UHasRecentEventHappenedWhileInStateTagCondition : UEvaluatorCondition {
	struct FGameplayTag _gameEvent; // 0x48(0x0c)
	struct FGameplayTag _stateTag; // 0x54(0x0c)
	char pad_60[0x48]; // 0x60(0x48)
};

// Class Archives.HasRecentlyActiveModifierFlagCondition
// Size: 0xb8 (Inherited: 0x48)
struct UHasRecentlyActiveModifierFlagCondition : UEvaluatorCondition {
	enum class ERecentlyActiveModifierType _type; // 0x48(0x01)
	enum class ERecentlyActiveModifierTimerStartType _timerStartType; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FGameplayTag> _modifierTags; // 0x50(0x10)
	char pad_60[0x58]; // 0x60(0x58)
};

// Class Archives.HasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod
// Size: 0xb8 (Inherited: 0xa8)
struct UHasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod : UHasRecentEventHappenedWhileInStateTagCondition {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class Archives.HasStatusEffectEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UHasStatusEffectEvaluatorCondition : UEvaluatorCondition {
	struct TArray<struct UStatusEffect*> _statusEffectList; // 0x48(0x10)
};

// Class Archives.HasTeleportedOrAssimilatedFromK32PodQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UHasTeleportedOrAssimilatedFromK32PodQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.HexTotemsAtEndTrialCountQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UHexTotemsAtEndTrialCountQEEvaluator : UEndOfGameQEEvaluator {
};

// Class Archives.NearKillerQEEvaluator
// Size: 0xe8 (Inherited: 0xb8)
struct UNearKillerQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x30]; // 0xb8(0x30)

	void OnRangeChanged(bool inRange); // Function Archives.NearKillerQEEvaluator.OnRangeChanged // (Final|Native|Protected) // @ game+0x4af1f10
};

// Class Archives.HideNearKillerQEEvaluator
// Size: 0x110 (Inherited: 0xe8)
struct UHideNearKillerQEEvaluator : UNearKillerQEEvaluator {
	char pad_E8[0x28]; // 0xe8(0x28)

	void OnSlashHarpoonedCamper(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper // (Final|Native|Private|HasOutParms) // @ game+0x4aed410
	void OnHarpoonHit(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit // (Final|Native|Private|HasOutParms) // @ game+0x4aecf90
	void OnFinishedPlaying(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying // (Final|Native|Public|HasOutParms) // @ game+0x4aece80
	void OnChaseStart(struct ADBDPlayer* chasedSurvivor); // Function Archives.HideNearKillerQEEvaluator.OnChaseStart // (Final|Native|Private) // @ game+0x4aecac0
	void OnChaseEnd(struct ADBDPlayer* chasedSurvivor, float chaseTime); // Function Archives.HideNearKillerQEEvaluator.OnChaseEnd // (Final|Native|Private) // @ game+0x4aec9f0
	void OnCamperBreakFreeFromHarpoon(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon // (Final|Native|Private|HasOutParms) // @ game+0x4aec8e0
};

// Class Archives.HideInTerrorRadiusQEEvaluator
// Size: 0x138 (Inherited: 0x110)
struct UHideInTerrorRadiusQEEvaluator : UHideNearKillerQEEvaluator {
	char pad_110[0x28]; // 0x110(0x28)
};

// Class Archives.HideNearKillerWhileInjuredQEEvaluator
// Size: 0x110 (Inherited: 0x110)
struct UHideNearKillerWhileInjuredQEEvaluator : UHideNearKillerQEEvaluator {
};

// Class Archives.MaxEventCountQEEvaluator
// Size: 0xf0 (Inherited: 0xb8)
struct UMaxEventCountQEEvaluator : UQuestEventEvaluatorBase {
	struct TArray<struct FGameplayTag> _incrementEventCount; // 0xb8(0x10)
	struct TArray<struct FGameplayTag> _decrementEventCount; // 0xc8(0x10)
	struct TArray<struct FGameplayTag> _stopEventCount; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)

	void OnStopEventCount(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.MaxEventCountQEEvaluator.OnStopEventCount // (Final|Native|Private|HasOutParms) // @ game+0x4aed520
	void OnIncrementEventCount(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount // (Final|Native|Private|HasOutParms) // @ game+0x4aed0a0
	void OnDecrementEventCount(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount // (Final|Native|Private|HasOutParms) // @ game+0x4aecd70
};

// Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator
// Size: 0x140 (Inherited: 0xf0)
struct UHitDifferentInFrenzyMaxCountQEEvaluator : UMaxEventCountQEEvaluator {
	struct TSet<struct TWeakObjectPtr<struct AActor>> _targetList; // 0xf0(0x50)
};

// Class Archives.SurvivorHookSameTimeQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct USurvivorHookSameTimeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnSurvivorUnhooked(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked // (Native|Protected|HasOutParms) // @ game+0x4af51c0
	void OnSurvivorHooked(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked // (Native|Protected|HasOutParms) // @ game+0x4af50b0
};

// Class Archives.HookSameTimeBasementQEEvaluator
// Size: 0xc0 (Inherited: 0xc0)
struct UHookSameTimeBasementQEEvaluator : USurvivorHookSameTimeQEEvaluator {
};

// Class Archives.InChaseTargetStateTagEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UInChaseTargetStateTagEvaluatorCondition : UEvaluatorCondition {
	struct FGameplayTag _gameplayTag; // 0x48(0x0c)
	enum class EInChaseTargetLogic _logic; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Archives.InDirectionOfKillerQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UInDirectionOfKillerQEEvaluator : UQuestEventEvaluatorBase {
	struct ADBDPlayer* _killer; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class Archives.InflictMadnessBaseQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UInflictMadnessBaseQEEvaluator : UQuestEventEvaluatorBase {
	int32_t _requiredTier; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Archives.InjuredDyingHookManyQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UInjuredDyingHookManyQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.InjuredDyingMultipleQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UInjuredDyingMultipleQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.InLockerNearKillerQEEvaluator
// Size: 0xf0 (Inherited: 0xe8)
struct UInLockerNearKillerQEEvaluator : UNearKillerQEEvaluator {
	char pad_E8[0x8]; // 0xe8(0x08)

	void OnClosetHideExit(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit // (Final|Native|Private|HasOutParms) // @ game+0x4aecc60
	void OnClosetHideEnter(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter // (Final|Native|Private|HasOutParms) // @ game+0x4aecb50
};

// Class Archives.InstigatorHookCountQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UInstigatorHookCountQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.InstigatorInBasementQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UInstigatorInBasementQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.InstigatorInBasementPercentQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UInstigatorInBasementPercentQEEvaluator : UInstigatorInBasementQEEvaluator {
};

// Class Archives.InstigatorTargetDistanceEvaluatorCondition
// Size: 0x50 (Inherited: 0x48)
struct UInstigatorTargetDistanceEvaluatorCondition : UEvaluatorCondition {
	enum class EInstigatorTargetDistanceComparator _comparator; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Archives.IsEventAttackOfTypeQEEvaluator
// Size: 0xe0 (Inherited: 0xb8)
struct UIsEventAttackOfTypeQEEvaluator : UQuestEventEvaluatorBase {
	struct TArray<struct FGameplayTag> _attackEvent; // 0xb8(0x10)
	enum class EAttackerSubject _attackerSubject; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<enum class EAttackType> _attackOfType; // 0xd0(0x10)
};

// Class Archives.IsInteractingEvaluatorCondition
// Size: 0x48 (Inherited: 0x48)
struct UIsInteractingEvaluatorCondition : UEvaluatorCondition {
};

// Class Archives.IsPerformingInteractionEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UIsPerformingInteractionEvaluatorCondition : UEvaluatorCondition {
	struct TArray<struct FGameplayTag> _semanticTags; // 0x48(0x10)
};

// Class Archives.ItemConsumedQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UItemConsumedQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnItemConsumed(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.ItemConsumedQEEvaluator.OnItemConsumed // (Final|Native|Private|HasOutParms) // @ game+0x4aed1b0
};

// Class Archives.ItemPerformedQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UItemPerformedQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.ItemPerformedPercentQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UItemPerformedPercentQEEvaluator : UItemPerformedQEEvaluator {
};

// Class Archives.ItemUsedQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UItemUsedQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnItemUsed(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.ItemUsedQEEvaluator.OnItemUsed // (Final|Native|Private|HasOutParms) // @ game+0x4aed2c0
};

// Class Archives.KillerNearRedHerringGeneratorQEEvaluator
// Size: 0x118 (Inherited: 0xb8)
struct UKillerNearRedHerringGeneratorQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x60]; // 0xb8(0x60)
};

// Class Archives.LivingSurvivorsCountQEEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct ULivingSurvivorsCountQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x10]; // 0xb8(0x10)

	void OnSurvivorRemoved(struct ACamperPlayer* survivorRemoved); // Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved // (Final|Native|Private) // @ game+0x4aed6c0
	void OnSurvivorAdded(struct ACamperPlayer* survivorAdded); // Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded // (Final|Native|Private) // @ game+0x4aed630
};

// Class Archives.MaxSameTargetQEEvaluator
// Size: 0x108 (Inherited: 0xb8)
struct UMaxSameTargetQEEvaluator : UQuestEventEvaluatorBase {
	struct TMap<struct TWeakObjectPtr<struct AActor>, int32_t> _targetList; // 0xb8(0x50)
};

// Class Archives.MultipleEventsBeforeResetEventQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UMultipleEventsBeforeResetEventQEEvaluator : UQuestEventEvaluatorBase {
	struct TArray<struct FGameplayTag> _gameEventsResettingProgress; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Archives.MultipleEventsInSameFrameQuestEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct UMultipleEventsInSameFrameQuestEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class Archives.MultipleEventsInTimeFrameQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UMultipleEventsInTimeFrameQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class Archives.MultipleMadSurvivorsQEEvaluator
// Size: 0x110 (Inherited: 0xb8)
struct UMultipleMadSurvivorsQEEvaluator : UQuestEventEvaluatorBase {
	int32_t _requiredTier; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TSet<struct TWeakObjectPtr<struct AActor>> _madSurvivors; // 0xc0(0x50)
};

// Class Archives.NearGameObjectEvaluatorCondition
// Size: 0x60 (Inherited: 0x48)
struct UNearGameObjectEvaluatorCondition : UEvaluatorCondition {
	enum class EQueryConditionType _conditionType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FGameObjectQuery> _gameObjectsQueries; // 0x50(0x10)
};

// Class Archives.NearMeEvaluatorCondition
// Size: 0x50 (Inherited: 0x48)
struct UNearMeEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x4]; // 0x48(0x04)
	bool _questOwnerCanBeSubjectOfEvent; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Archives.NearTrackedActorComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UNearTrackedActorComponent : UActorComponent {
	struct FMulticastInlineDelegate IsWithinRangeDelegate; // 0xb8(0x10)
	float _distanceThreshold; // 0xc8(0x04)
	char pad_CC[0x14]; // 0xcc(0x14)

	void StopTrackingActor(struct AActor* Actor); // Function Archives.NearTrackedActorComponent.StopTrackingActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4af2350
	void StartTrackingActor(struct AActor* Actor); // Function Archives.NearTrackedActorComponent.StartTrackingActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4af22c0
	void SetDistanceThreshold(float value); // Function Archives.NearTrackedActorComponent.SetDistanceThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x4af2240
	void OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, struct AActor* trackedActor); // DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsActorWithinRange(struct AActor* Actor); // Function Archives.NearTrackedActorComponent.IsActorWithinRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af19d0
};

// Class Archives.NotEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UNotEvaluatorCondition : UEvaluatorCondition {
	struct UEvaluatorCondition* _conditionToNegateClass; // 0x48(0x08)
	struct UEvaluatorCondition* _conditionPrivate; // 0x50(0x08)
};

// Class Archives.NurseChainBlinkNumberQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UNurseChainBlinkNumberQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.OniDashHitDiffInTimeQEEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct UOniDashHitDiffInTimeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct AActor* _previousTarget; // 0xc0(0x08)
};

// Class Archives.OrangeGlyphAdjustmentStrategy
// Size: 0x30 (Inherited: 0x30)
struct UOrangeGlyphAdjustmentStrategy : USpecialBehaviourIterativeWeightAdjustmentStrategy {
};

// Class Archives.OrangeGlyphComponent
// Size: 0x158 (Inherited: 0xb8)
struct UOrangeGlyphComponent : UActorComponent {
	struct FMulticastInlineDelegate ChallengeCompletedDelegate; // 0xb8(0x10)
	struct FMulticastInlineDelegate AffectedActionTakenDelegate; // 0xc8(0x10)
	int32_t _numHookedSurvivorsRequired; // 0xd8(0x04)
	int32_t _numInactiveHookStatesToDespawn; // 0xdc(0x04)
	int32_t _numHookActionsWhileActive; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FGameplayTag> _hookEvents; // 0xe8(0x10)
	struct TArray<struct FGameplayTag> _hookStateEvents; // 0xf8(0x10)
	struct TArray<struct UStatusEffect*> _statusEffectClasses; // 0x108(0x10)
	struct TArray<struct FGameplayTag> _eventsThatCauseEffects; // 0x118(0x10)
	char pad_128[0x30]; // 0x128(0x30)

	void Cosmetic_ApplyNegativeEffects(struct ADBDPlayer* affectedPlayer); // Function Archives.OrangeGlyphComponent.Cosmetic_ApplyNegativeEffects // (Final|BlueprintCosmetic|Native|Private) // @ game+0x4af1840
};

// Class Archives.PinkGlyphComponent
// Size: 0x4b8 (Inherited: 0xb8)
struct UPinkGlyphComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMarkProgressChanged_Cosmetic; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnStartMarking_Cosmetic; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnStopMarking_Cosmetic; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnFullyMarked_Cosmetic; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnStartTeleport_Cosmetic; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnPostTeleport_Cosmetic; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSurvivorEnteredRange_Cosmetic; // 0x118(0x10)
	struct FMulticastInlineDelegate OnHasLineOfSight_Cosmetic; // 0x128(0x10)
	struct FDBDTunableRowHandle _gracePeriodDuration; // 0x138(0x28)
	struct FDBDTunableRowHandle _removeMarkedProgressDuration; // 0x160(0x28)
	struct FDBDTunableRowHandle _exposedStatusEffectDuration; // 0x188(0x28)
	struct FDBDTunableRowHandle _markTimeNeeded; // 0x1b0(0x28)
	struct UStatusEffect* _exposedStatusEffect; // 0x1d8(0x08)
	struct FDBDTunableRowHandle _minimumTeleportationDistance; // 0x1e0(0x28)
	char pad_208[0x4]; // 0x208(0x04)
	float _checkLineOfSightDelay; // 0x20c(0x04)
	struct FDBDTunableRowHandle _movementRange; // 0x210(0x28)
	struct FDBDTunableRowHandle _teleportDelay; // 0x238(0x28)
	char pad_260[0x8]; // 0x260(0x08)
	struct FSpeedBasedNetSyncedValue _markedProgress; // 0x268(0x38)
	bool _isPinkGlyphActive; // 0x2a0(0x01)
	bool _isMarking; // 0x2a1(0x01)
	bool _hasLineOfSightToSurvivor; // 0x2a2(0x01)
	char pad_2A3[0x6d]; // 0x2a3(0x6d)
	struct TArray<struct UTileSpawnPoint*> _teleportPoints; // 0x310(0x10)
	char pad_320[0x198]; // 0x320(0x198)

	void OnRep_MarkedProgress(); // Function Archives.PinkGlyphComponent.OnRep_MarkedProgress // (Final|Native|Private) // @ game+0x4af2000
	void OnRep_IsPinkGlyphActive(); // Function Archives.PinkGlyphComponent.OnRep_IsPinkGlyphActive // (Final|Native|Private|Const) // @ game+0x4af1fe0
	void OnRep_IsMarking(); // Function Archives.PinkGlyphComponent.OnRep_IsMarking // (Final|Native|Private|Const) // @ game+0x4af1fc0
	void OnRep_HasLineOfSightToSurvivor(); // Function Archives.PinkGlyphComponent.OnRep_HasLineOfSightToSurvivor // (Final|Native|Private|Const) // @ game+0x4af1fa0
	void OnMarkProgressChanged__DelegateSignature(float Progress); // DelegateFunction Archives.PinkGlyphComponent.OnMarkProgressChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnGlyphEvent__DelegateSignature(); // DelegateFunction Archives.PinkGlyphComponent.OnGlyphEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void Multicast_TeleportGlyph(struct FVector Location); // Function Archives.PinkGlyphComponent.Multicast_TeleportGlyph // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x4af1b00
	void Multicast_StartGlyphPreTeleport(); // Function Archives.PinkGlyphComponent.Multicast_StartGlyphPreTeleport // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4af1ae0
	void Multicast_IsFullyMarkedSurvivor(); // Function Archives.PinkGlyphComponent.Multicast_IsFullyMarkedSurvivor // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4af1ac0
	void Multicast_EnterGlyphRange(); // Function Archives.PinkGlyphComponent.Multicast_EnterGlyphRange // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4af1aa0
	bool IsMarking(); // Function Archives.PinkGlyphComponent.IsMarking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af1a70
	void Authority_TeleportGlyph(); // Function Archives.PinkGlyphComponent.Authority_TeleportGlyph // (Final|Native|Private) // @ game+0x4af1820
	void Authority_OnSurvivorInMovementRangeChanged(bool inRange); // Function Archives.PinkGlyphComponent.Authority_OnSurvivorInMovementRangeChanged // (Final|Native|Private) // @ game+0x4af1700
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, struct AActor* trackedActor); // Function Archives.PinkGlyphComponent.Authority_OnPlayerBreachedRangeThreshold // (Final|Native|Private) // @ game+0x4af1630
	void Authority_OnLevelReadyToPlay(); // Function Archives.PinkGlyphComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4af1610
	void Authority_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function Archives.PinkGlyphComponent.Authority_OnDamageStateChanged // (Final|Native|Private) // @ game+0x4af1540
};

// Class Archives.PlagueCorruptUniqueTargetsQEEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct UPlagueCorruptUniqueTargetsQEEvaluator : UQuestEventEvaluatorBase {
	struct AActor* _previousTarget; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Archives.PreventExitGateOpenQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct UPreventExitGateOpenQEEvaluator : UEndOfGameQEEvaluator {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnExitGateOpened(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.PreventExitGateOpenQEEvaluator.OnExitGateOpened // (Final|Native|Public|HasOutParms) // @ game+0x4ae6380
};

// Class Archives.PurpleGlyphComponent
// Size: 0x250 (Inherited: 0xb8)
struct UPurpleGlyphComponent : UActorComponent {
	struct TArray<struct UTileSpawnPoint*> _survivorSpawns; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FAIMoveRequest MoveRequest; // 0xe0(0x40)
	struct UNavigationQueryFilter* _navFilter; // 0x120(0x08)
	struct FDBDTunableRowHandle _auraRevealDuration; // 0x128(0x28)
	struct FDBDTunableRowHandle _nextLocationDistanceMinimum; // 0x150(0x28)
	struct FDBDTunableRowHandle _nextLocationDistanceMaximum; // 0x178(0x28)
	struct FDBDTunableRowHandle _movementAcceptanceRadius; // 0x1a0(0x28)
	struct FDBDTunableRowHandle _distanceToAccelerate; // 0x1c8(0x28)
	struct FDBDTunableRowHandle _distanceToDecelerate; // 0x1f0(0x28)
	struct FLinearColor OutlineColor; // 0x218(0x10)
	struct UBloodTrailSettings* _bloodTrailSettings; // 0x228(0x08)
	char pad_230[0x20]; // 0x230(0x20)

	void StopGlyphMovement(bool useDeceleration); // Function Archives.PurpleGlyphComponent.StopGlyphMovement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StartGlyphMovement(); // Function Archives.PurpleGlyphComponent.StartGlyphMovement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ResumeGlyphMovement(bool useAcceleration); // Function Archives.PurpleGlyphComponent.ResumeGlyphMovement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4af1e20
	struct ADBDPlayer* GetTrackedPlayer(); // Function Archives.PurpleGlyphComponent.GetTrackedPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x4af1920
	struct AGlyph* GetOwningGlyph(); // Function Archives.PurpleGlyphComponent.GetOwningGlyph // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af18f0
	void Authority_StartMoveWithAcceleration(struct FVector& goalLocation); // Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4af1790
	void Authority_MoveTo(struct FVector Location); // Function Archives.PurpleGlyphComponent.Authority_MoveTo // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4af14b0
	struct FVector Authority_GetNextLocation(); // Function Archives.PurpleGlyphComponent.Authority_GetNextLocation // (Final|Native|Private|HasDefaults|BlueprintCallable) // @ game+0x4af1470
	void Authority_AbortMoveWithDeceleration(); // Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration // (Final|Native|Public|BlueprintCallable) // @ game+0x4af1450
	void Authority_AbortMove(); // Function Archives.PurpleGlyphComponent.Authority_AbortMove // (Final|Native|Public|BlueprintCallable) // @ game+0x4af1430
};

// Class Archives.QuestEventsHandler
// Size: 0x118 (Inherited: 0xb8)
struct UQuestEventsHandler : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct TArray<struct UQuestEventEvaluatorBase*> _evaluatorList; // 0xd8(0x10)
	char pad_E8[0x20]; // 0xe8(0x20)
	struct UArchiveStoriesContainer* _archiveStoriesContainer; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void OnPlayerGameStateChanged(struct ADBDPlayerState* PlayerState, enum class EGameState GameState); // Function Archives.QuestEventsHandler.OnPlayerGameStateChanged // (Final|Native|Private) // @ game+0x4af1e40
	void OnGameEnded(enum class EEndGameReason Reason); // Function Archives.QuestEventsHandler.OnGameEnded // (Final|Native|Private) // @ game+0x4af1c90
	void OnFinishedPlaying(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.QuestEventsHandler.OnFinishedPlaying // (Final|Native|Private|HasOutParms) // @ game+0x4af1b80
	void DBD_ShowInGameCurrentQuestInfos(); // Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos // (Final|Exec|Native|Public) // @ game+0x4af18d0
	void DBD_InGameAddProgressionToCurrentQuest(int32_t Amount); // Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest // (Final|Exec|Native|Public) // @ game+0x46a25e0
};

// Class Archives.QuestEventsHandlerTest
// Size: 0x120 (Inherited: 0x118)
struct UQuestEventsHandlerTest : UQuestEventsHandler {
	struct ADBDPlayer* _dbdPlayer; // 0x118(0x08)
};

// Class Archives.QuestEventsHandlerUtilities
// Size: 0x30 (Inherited: 0x30)
struct UQuestEventsHandlerUtilities : UBlueprintFunctionLibrary {

	void InitializeQuestEventHandler(struct UQuestEventsHandler* QuestEventsHandler); // Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4af1950
};

// Class Archives.RecentlyActiveStateTagEvaluatorCondition
// Size: 0xe0 (Inherited: 0x48)
struct URecentlyActiveStateTagEvaluatorCondition : UEvaluatorCondition {
	enum class ERecentlyActiveStateTagType _type; // 0x48(0x01)
	enum class ERecentlyActiveStateTagTimerStartType _timerStartType; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FGameplayTag> _stateTags; // 0x50(0x10)
	char pad_60[0x80]; // 0x60(0x80)
};

// Class Archives.RepairCoopQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct URepairCoopQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class Archives.ReturnTheFavorQEEvaluator
// Size: 0x158 (Inherited: 0xb8)
struct UReturnTheFavorQEEvaluator : UQuestEventEvaluatorBase {
	struct TSet<struct FGameplayTag> _favorToReturnEvents; // 0xb8(0x50)
	struct TSet<struct TWeakObjectPtr<struct ADBDPlayer>> _instigatorList; // 0x108(0x50)
};

// Class Archives.ScreamSpecialCaseQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UScreamSpecialCaseQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.SearchItemRarityQEEvaluator
// Size: 0xc0 (Inherited: 0xc0)
struct USearchItemRarityQEEvaluator : UItemRarityQEEvaluator {

	void OnItemSpawnedFromChest(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest // (Final|Native|Public|HasOutParms) // @ game+0x4af1d10
};

// Class Archives.SecondHookStageReachedQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct USecondHookStageReachedQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.SkillCheckConsecutiveQEEvaluator
// Size: 0xc0 (Inherited: 0xb8)
struct USkillCheckConsecutiveQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)

	void OnSkillCheckSuccess(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess // (Final|Native|Private|HasOutParms) // @ game+0x4af2130
	void OnSkillCheckFail(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail // (Final|Native|Private|HasOutParms) // @ game+0x4af2020
};

// Class Archives.SlasherIsCarryingQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct USlasherIsCarryingQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.SpendTimeWithStateTagQEEvaluator
// Size: 0x108 (Inherited: 0xb8)
struct USpendTimeWithStateTagQEEvaluator : UQuestEventEvaluatorBase {
	struct TArray<struct FGameplayTag> _stateTags; // 0xb8(0x10)
	char pad_C8[0x40]; // 0xc8(0x40)
};

// Class Archives.StateTagEvaluatorCondition
// Size: 0x58 (Inherited: 0x48)
struct UStateTagEvaluatorCondition : UEvaluatorCondition {
	struct FGameplayTag _gameplayTag; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Archives.SurvivorNearMeEvaluatorCondition
// Size: 0x50 (Inherited: 0x48)
struct USurvivorNearMeEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Archives.TargetHasEndedChaseWithoutHitEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UTargetHasEndedChaseWithoutHitEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.TargetInBasementQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UTargetInBasementQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.TargetIsObsessionQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UTargetIsObsessionQEEvaluator : UQuestEventEvaluatorBase {
};

// Class Archives.TargetOfEventRecentlyQEEvaluator
// Size: 0xd0 (Inherited: 0xb8)
struct UTargetOfEventRecentlyQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FGameplayTag _firstGameEvent; // 0xc0(0x0c)
	bool _secondEventOnSelf; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Archives.TargetTriggeredEventRecentlyQEEvaluator
// Size: 0x118 (Inherited: 0xb8)
struct UTargetTriggeredEventRecentlyQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x54]; // 0xb8(0x54)
	struct FGameplayTag _gameEvent; // 0x10c(0x0c)
};

// Class Archives.TargetWasDamagedBySpecialAttackRecentlyEvaluator
// Size: 0x170 (Inherited: 0xb8)
struct UTargetWasDamagedBySpecialAttackRecentlyEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0xa0]; // 0xb8(0xa0)
	float _timeLimit; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct FGameplayTag> _specialCaseGameEvents; // 0x160(0x10)
};

// Class Archives.TargetWasTargetedByEventRecentlyEvaluator
// Size: 0x120 (Inherited: 0xb8)
struct UTargetWasTargetedByEventRecentlyEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x58]; // 0xb8(0x58)
	struct TArray<struct FGameplayTag> _gameEventsToTriggerFirst; // 0x110(0x10)
};

// Class Archives.TotalDistanceEvaluatorCondition
// Size: 0xa8 (Inherited: 0x48)
struct UTotalDistanceEvaluatorCondition : UEvaluatorCondition {
	char pad_48[0x40]; // 0x48(0x40)
	struct TArray<struct FGameplayTag> _startTimerEvents; // 0x88(0x10)
	struct TArray<struct FGameplayTag> _endTimerEvents; // 0x98(0x10)
};

// Class Archives.TotemsAtEndTrialCountQEEvaluator
// Size: 0xb8 (Inherited: 0xb8)
struct UTotemsAtEndTrialCountQEEvaluator : UEndOfGameQEEvaluator {
};

// Class Archives.TriggerWithSameTargetWithinTimeQEEvaluator
// Size: 0x110 (Inherited: 0xb8)
struct UTriggerWithSameTargetWithinTimeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x58]; // 0xb8(0x58)
};

// Class Archives.UniqueTargetIncrementQEEvaluator
// Size: 0x108 (Inherited: 0xb8)
struct UUniqueTargetIncrementQEEvaluator : UQuestEventEvaluatorBase {
	struct TSet<struct TWeakObjectPtr<struct AActor>> _targetList; // 0xb8(0x50)
};

// Class Archives.UniqueTargetsInTimeQEEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct UUniqueTargetsInTimeQEEvaluator : UQuestEventEvaluatorBase {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class Archives.WhiteGlyphBasementComponent
// Size: 0x168 (Inherited: 0xb8)
struct UWhiteGlyphBasementComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnReadyForInteraction; // 0xd0(0x10)
	float _basementGlyphInteractionCoolDownTime; // 0xe0(0x04)
	char pad_E4[0x84]; // 0xe4(0x84)

	void OnReadyForInteractionDelegate__DelegateSignature(); // DelegateFunction Archives.WhiteGlyphBasementComponent.OnReadyForInteractionDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	struct AGlyph* GetOwningGlyph(); // Function Archives.WhiteGlyphBasementComponent.GetOwningGlyph // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af18f0
};

// Class Archives.WhiteGlyphSpawnerComponent
// Size: 0x2c0 (Inherited: 0xb8)
struct UWhiteGlyphSpawnerComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct AGlyph* _surfaceGlyphClass; // 0xd0(0x08)
	struct FDBDTunableRowHandle _minDistanceFromBasement; // 0xd8(0x28)
	struct FDBDTunableRowHandle _maxDistanceFromBasement; // 0x100(0x28)
	float _spawnDistanceDebug; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FDBDTunableRowHandle _surfaceGlyphCoolDownTime; // 0x130(0x28)
	struct UWhiteGlyphSurfaceComponent* _lastSurfaceGlyphComponentDebug; // 0x158(0x08)
	struct TArray<struct UTileSpawnPoint*> _spawnPointsCollection; // 0x160(0x10)
	char pad_170[0x150]; // 0x170(0x150)

	struct AGlyph* GetOwningGlyph(); // Function Archives.WhiteGlyphSpawnerComponent.GetOwningGlyph // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af18f0
	void Authority_OnLevelReadyToPlay(); // Function Archives.WhiteGlyphSpawnerComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4af4f40
};

// Class Archives.WhiteGlyphSurfaceComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UWhiteGlyphSurfaceComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)

	void Multicast_TeleportGlyph(struct FVector Location); // Function Archives.WhiteGlyphSurfaceComponent.Multicast_TeleportGlyph // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x4af5000
	struct AGlyph* GetOwningGlyph(); // Function Archives.WhiteGlyphSurfaceComponent.GetOwningGlyph // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af18f0
};

// Class Archives.WithPulledUpPalletQEEvaluator
// Size: 0xc8 (Inherited: 0xb8)
struct UWithPulledUpPalletQEEvaluator : UQuestEventEvaluatorBase {
	struct TArray<struct APallet*> _resetPallets; // 0xb8(0x10)
};

// Class Archives.YellowGlyphComponent
// Size: 0x130 (Inherited: 0xb8)
struct UYellowGlyphComponent : UActorComponent {
	struct ADBDPlayer* _currentlyInteractingPlayer; // 0xb8(0x08)
	char pad_C0[0x4]; // 0xc0(0x04)
	float _skillCheckDuration; // 0xc4(0x04)
	float _skillCheckZoneLength; // 0xc8(0x04)
	float _skillCheckDelay; // 0xcc(0x04)
	float _skillCheckAverageDistance; // 0xd0(0x04)
	float _skillCheckDistanceVariance; // 0xd4(0x04)
	float _teleportDelay; // 0xd8(0x04)
	char pad_DC[0x34]; // 0xdc(0x34)
	struct TArray<struct UTileSpawnPoint*> _survivorSpawns; // 0x110(0x10)
	struct TArray<struct AGlyph*> _allGlyphs; // 0x120(0x10)

	void StartGlyphPreTeleportVFX(); // Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void StartGlyphPostTeleportVFX(); // Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function Archives.YellowGlyphComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4af5090
	void Multicast_TeleportGlyph(struct FVector Location); // Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x4af5000
	struct AGlyph* GetOwningGlyph(); // Function Archives.YellowGlyphComponent.GetOwningGlyph // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4af18f0
	bool Authority_TeleportGlyph(int32_t maxNumberOfTries); // Function Archives.YellowGlyphComponent.Authority_TeleportGlyph // (Final|Native|Protected|BlueprintCallable) // @ game+0x4af4f60
};

