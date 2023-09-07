// Class DBDCompetence.EnduranceEffect
// Size: 0x360 (Inherited: 0x350)
struct UEnduranceEffect : UStatusEffect {
	struct UStatusEffect* _enduranceHighlightEffectClass; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class DBDCompetence.ActivatableEnduranceEffect
// Size: 0x360 (Inherited: 0x360)
struct UActivatableEnduranceEffect : UEnduranceEffect {

	void Authority_Start(float Duration); // Function DBDCompetence.ActivatableEnduranceEffect.Authority_Start // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd3c0
};

// Class DBDCompetence.AdjustableCooldownStatusEffect
// Size: 0x360 (Inherited: 0x350)
struct UAdjustableCooldownStatusEffect : UStatusEffect {
	struct FGameplayTag CooldownModifierType; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)
};

// Class DBDCompetence.ExhaustedEffect
// Size: 0x368 (Inherited: 0x360)
struct UExhaustedEffect : UAdjustableCooldownStatusEffect {
	float CooldownModifier; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
};

// Class DBDCompetence.ActivatableExhaustedEffect
// Size: 0x368 (Inherited: 0x368)
struct UActivatableExhaustedEffect : UExhaustedEffect {

	void Authority_Start(float Duration); // Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd3c0
	void Authority_OnHookCamper(struct FGameplayTag GameEvent, struct FGameEventData& GameEventData); // Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper // (Final|Native|Private|HasOutParms) // @ game+0x4cdcf40
};

// Class DBDCompetence.ExposedEffect
// Size: 0x360 (Inherited: 0x360)
struct UExposedEffect : UAdjustableCooldownStatusEffect {
};

// Class DBDCompetence.ActivatableExposedEffect
// Size: 0x360 (Inherited: 0x360)
struct UActivatableExposedEffect : UExposedEffect {

	void Authority_Start(float Duration); // Function DBDCompetence.ActivatableExposedEffect.Authority_Start // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd3c0
};

// Class DBDCompetence.ActivatableStatusEffect
// Size: 0x350 (Inherited: 0x350)
struct UActivatableStatusEffect : UStatusEffect {

	void Authority_Start(float Duration); // Function DBDCompetence.ActivatableStatusEffect.Authority_Start // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd440
};

// Class DBDCompetence.ActivateOnEventTimedStatusEffect
// Size: 0x380 (Inherited: 0x350)
struct UActivateOnEventTimedStatusEffect : UStatusEffect {
	struct UActivateOnEventBaseActivationStrategy* _activationStrategyClass; // 0x350(0x08)
	struct FGameplayTagContainer _eventsToActivateOn; // 0x358(0x20)
	struct UActivateOnEventBaseActivationStrategy* _activationStrategy; // 0x378(0x08)
};

// Class DBDCompetence.ActivateOnEventBaseActivationStrategy
// Size: 0x30 (Inherited: 0x30)
struct UActivateOnEventBaseActivationStrategy : UObject {
};

// Class DBDCompetence.ActivateOnEventAlwaysActivationStrategy
// Size: 0x30 (Inherited: 0x30)
struct UActivateOnEventAlwaysActivationStrategy : UActivateOnEventBaseActivationStrategy {
};

// Class DBDCompetence.ActivateOnEventTargetActivationStrategy
// Size: 0x30 (Inherited: 0x30)
struct UActivateOnEventTargetActivationStrategy : UActivateOnEventBaseActivationStrategy {
};

// Class DBDCompetence.ActivateOnEventInstigatorActivationStrategy
// Size: 0x30 (Inherited: 0x30)
struct UActivateOnEventInstigatorActivationStrategy : UActivateOnEventBaseActivationStrategy {
};

// Class DBDCompetence.Adrenaline
// Size: 0x3f8 (Inherited: 0x3c8)
struct UAdrenaline : UPerk {
	struct UStatusEffect* _speedEffect; // 0x3c8(0x08)
	struct UStatusEffect* _exhaustionEffect; // 0x3d0(0x08)
	float _movementSpeedDuration; // 0x3d8(0x04)
	float _movementSpeedPercentage; // 0x3dc(0x04)
	char pad_3E0[0x18]; // 0x3e0(0x18)

	void Multicast_DispatchAdrenalineEvents(bool IsHealthy, float HealAmount); // Function DBDCompetence.Adrenaline.Multicast_DispatchAdrenalineEvents // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4cdda80
};

// Class DBDCompetence.AlertKillerRevealEffect
// Size: 0x350 (Inherited: 0x350)
struct UAlertKillerRevealEffect : UStatusEffect {
};

// Class DBDCompetence.AllHexTotemsAreActive
// Size: 0x100 (Inherited: 0xe8)
struct UAllHexTotemsAreActive : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.AnyActorPairQueryRangeIsTrue
// Size: 0x100 (Inherited: 0xf0)
struct UAnyActorPairQueryRangeIsTrue : URangeBasedCondition {
	char pad_F0[0x10]; // 0xf0(0x10)

	void OnInRangeChanged(bool inRange); // Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged // (Final|Native|Private) // @ game+0x4cddb60
};

// Class DBDCompetence.AnyMeansNecessary
// Size: 0x3e0 (Inherited: 0x3c8)
struct UAnyMeansNecessary : UPerk {
	float _actionSpeedBonus[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _anyMeansNecessaryActionSpeedEffect; // 0x3d8(0x08)

	void Authority_OnPalletPulledUp(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp // (Final|Native|Private|HasOutParms|Const) // @ game+0x4cdd100
};

// Class DBDCompetence.AnySurvivorHasObjectState
// Size: 0x158 (Inherited: 0xe8)
struct UAnySurvivorHasObjectState : UEventDrivenModifierCondition {
	char pad_E8[0x50]; // 0xe8(0x50)
	struct FGameplayTag _stateTag; // 0x138(0x0c)
	char pad_144[0x14]; // 0x144(0x14)

	void OnSurvivorRemoved(struct ACamperPlayer* Survivor); // Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved // (Final|Native|Protected) // @ game+0x4cdde60
	void OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded // (Final|Native|Protected) // @ game+0x4cdddd0
};

// Class DBDCompetence.Babysitter
// Size: 0x400 (Inherited: 0x3c8)
struct UBabysitter : UPerk {
	float _scratchMarkHidingTime[0x3]; // 0x3c8(0x0c)
	float _hasteEffect[0x3]; // 0x3d4(0x0c)
	float _showAuraTime[0x3]; // 0x3e0(0x0c)
	float _cooldownTime[0x3]; // 0x3ec(0x0c)
	struct UStatusEffect* _perkEffect; // 0x3f8(0x08)

	float GetShowAuraTimeAtLevel(); // Function DBDCompetence.Babysitter.GetShowAuraTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd7e0
	float GetScratchMarkHidingTimeAtLevel(); // Function DBDCompetence.Babysitter.GetScratchMarkHidingTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetHasteEffectAtLevel(); // Function DBDCompetence.Babysitter.GetHasteEffectAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetCooldownTimeAtLevel(); // Function DBDCompetence.Babysitter.GetCooldownTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd690
};

// Class DBDCompetence.BabysitterEffect
// Size: 0x350 (Inherited: 0x350)
struct UBabysitterEffect : UStatusEffect {
};

// Class DBDCompetence.BaseIsPerkUsableCondition
// Size: 0xf0 (Inherited: 0xe8)
struct UBaseIsPerkUsableCondition : UEventDrivenModifierCondition {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class DBDCompetence.BaseIsPlayerPerformingInteraction
// Size: 0x118 (Inherited: 0xe8)
struct UBaseIsPlayerPerformingInteraction : UEventDrivenModifierCondition {
	struct FGameplayTagContainer _interactionSemantics; // 0xe8(0x20)
	char pad_108[0x10]; // 0x108(0x10)

	void UpdateIsTrue(struct UInteractionDefinition* InteractionDefinition); // Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue // (Final|Native|Protected) // @ game+0x4cde030
	void SetInteractionSemantics(struct FGameplayTagContainer& interactionSemantics); // Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4cddef0
};

// Class DBDCompetence.BaseLingeringStatusEffect
// Size: 0x3b8 (Inherited: 0x350)
struct UBaseLingeringStatusEffect : UStatusEffect {
	float _lingerDuration; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct FNonTunableStat _lingerDurationModifier; // 0x358(0x60)

	void SetLingerDuration(float lingerDuration); // Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration // (Final|Native|Protected|BlueprintCallable) // @ game+0x4cddfb0
	void Authority_DeactivateEffect(); // Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect // (Final|Native|Protected|BlueprintCallable) // @ game+0x4cdce90
	void Authority_ActivateEffect(); // Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect // (Final|Native|Protected|BlueprintCallable) // @ game+0x4cdce70
};

// Class DBDCompetence.BetterTogether
// Size: 0x430 (Inherited: 0x3c8)
struct UBetterTogether : UPerk {
	bool ShouldRevealKiller; // 0x3c8(0x01)
	bool ShouldRevealSurvivors; // 0x3c9(0x01)
	char pad_3CA[0x2]; // 0x3ca(0x02)
	float RevealDistance; // 0x3cc(0x04)
	struct TArray<struct ADBDPlayer*> _affectedCampers; // 0x3d0(0x10)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct AActor* _genToReveal; // 0x3e8(0x08)
	float _durationByLevel[0x3]; // 0x3f0(0x0c)
	char pad_3FC[0x24]; // 0x3fc(0x24)
	struct UStatusEffect* _timedSurvivorRevealEffect; // 0x420(0x08)
	struct UStatusEffect* _timedKillerRevealEffect; // 0x428(0x08)

	void OnStartedGeneratorRepair(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair // (Final|Native|Private|HasOutParms) // @ game+0x4cddcc0
	float GetRevealDistance(); // Function DBDCompetence.BetterTogether.GetRevealDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd7b0
};

// Class DBDCompetence.BlessedStatusEffect
// Size: 0x360 (Inherited: 0x350)
struct UBlessedStatusEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
	struct UBlessedVignetteController* _vignetteControllerBlueprint; // 0x358(0x08)

	void OnExitBoonRange(); // Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnEnterBoonRange(); // Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	struct ATotem* GetBoundTotem(); // Function DBDCompetence.BlessedStatusEffect.GetBoundTotem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd630
	float GetBoonTotemBlessingRange(); // Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd600
	void Authority_OnSurvivorRemovedFromGame(struct ACamperPlayer* Survivor); // Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame // (Final|Native|Private) // @ game+0x4cdd330
};

// Class DBDCompetence.BloodEcho
// Size: 0x3f0 (Inherited: 0x3c8)
struct UBloodEcho : UPerk {
	struct UStatusEffect* _hemorrhageStatusEffectClass; // 0x3c8(0x08)
	struct UStatusEffect* _exhaustedStatusEffectClass; // 0x3d0(0x08)
	struct FGameplayTag _statusEffectDurationTag; // 0x3d8(0x0c)
	float _cooldownDuration[0x3]; // 0x3e4(0x0c)

	float GetCooldownDurationAtLevel(); // Function DBDCompetence.BloodEcho.GetCooldownDurationAtLevel // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd660
};

// Class DBDCompetence.BoonDestroyer
// Size: 0x3e0 (Inherited: 0x3c8)
struct UBoonDestroyer : UPerk {
	float _survivorAuraRevealDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _survivorRevealEffect; // 0x3d8(0x08)
};

// Class DBDCompetence.BoonPerk
// Size: 0x480 (Inherited: 0x420)
struct UBoonPerk : UTotemBoundPerk {
	struct UBlessedStatusEffect* _blessedStatusEffectClass; // 0x420(0x08)
	struct UBlessedStatusEffect* _blessedStatusEffect; // 0x428(0x08)
	char pad_430[0x50]; // 0x430(0x50)

	void Authority_OnSurvivorRemoved(struct ACamperPlayer* Survivor); // Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved // (Final|Native|Private) // @ game+0x4cdd2a0
};

// Class DBDCompetence.BoonTotemIsActive
// Size: 0x100 (Inherited: 0xe8)
struct UBoonTotemIsActive : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.Breakout
// Size: 0x450 (Inherited: 0x3c8)
struct UBreakout : UPerk {
	struct ASlasherPlayer* _slasher; // 0x3c8(0x08)
	struct ADBDPlayer* _playerOwner; // 0x3d0(0x08)
	struct UStatusEffect* _hasteStatusEffect; // 0x3d8(0x08)
	struct UStatusEffect* _wiggleStatusEffect; // 0x3e0(0x08)
	float _hasteEffect[0x3]; // 0x3e8(0x0c)
	float _wiggleEffect; // 0x3f4(0x04)
	float _survivorDistanceMax; // 0x3f8(0x04)
	bool _isPerkActive; // 0x3fc(0x01)
	char pad_3FD[0x53]; // 0x3fd(0x53)

	void OnSlasherSet(struct ASlasherPlayer* Slasher); // Function DBDCompetence.Breakout.OnSlasherSet // (Final|Native|Private) // @ game+0x4cddc30
	void OnRep_IsPerkActive(); // Function DBDCompetence.Breakout.OnRep_IsPerkActive // (Final|Native|Private) // @ game+0x4cddc10
	float GetWiggleEffect(); // Function DBDCompetence.Breakout.GetWiggleEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd830
	float GetSurvivorDistanceMax(); // Function DBDCompetence.Breakout.GetSurvivorDistanceMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd810
	float GetHasteEffectAtLevel(); // Function DBDCompetence.Breakout.GetHasteEffectAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd750
	void Authority_OnRangeChanged(bool inRange); // Function DBDCompetence.Breakout.Authority_OnRangeChanged // (Final|Native|Private) // @ game+0x4cdd210
	void Authority_ImposeWiggleStatusEffect(struct ACamperPlayer* Survivor); // Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect // (Final|Native|Private) // @ game+0x4cdceb0
};

// Class DBDCompetence.BuckleUp
// Size: 0x3f8 (Inherited: 0x3c8)
struct UBuckleUp : UPerk {
	float _perkDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _revealKillerStatusEffect; // 0x3d8(0x08)
	struct UStatusEffect* _enduranceStatusEffect; // 0x3e0(0x08)
	char pad_3E8[0x10]; // 0x3e8(0x10)

	float GetPerkDurationAtLevel(); // Function DBDCompetence.BuckleUp.GetPerkDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class DBDCompetence.CalmSpirit
// Size: 0x3e0 (Inherited: 0x3c8)
struct UCalmSpirit : UPerk {
	struct UStatusEffect* _calmSpiritEffectClass; // 0x3c8(0x08)
	float _actionSpeed[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
};

// Class DBDCompetence.Camaraderie
// Size: 0x420 (Inherited: 0x3c8)
struct UCamaraderie : UPerk {
	float _percentUseItem[0x3]; // 0x3c8(0x0c)
	float _pauseTimer[0x3]; // 0x3d4(0x0c)
	struct UStatusEffect* _camaraderieNotificationEffectClass; // 0x3e0(0x08)
	char pad_3E8[0x38]; // 0x3e8(0x38)
};

// Class DBDCompetence.CollectableOwnerSubjectProvider
// Size: 0x60 (Inherited: 0x48)
struct UCollectableOwnerSubjectProvider : UModifierSubjectProvider {
	char pad_48[0x18]; // 0x48(0x18)
};

// Class DBDCompetence.CorruptIntervention
// Size: 0x438 (Inherited: 0x3c8)
struct UCorruptIntervention : UPerk {
	char _blockedGeneratorCount[0x3]; // 0x3c8(0x03)
	char pad_3CB[0x1]; // 0x3cb(0x01)
	float _generatorBlockDuration[0x3]; // 0x3cc(0x0c)
	struct FLinearColor _generatorAuraColorForKiller; // 0x3d8(0x10)
	struct TArray<struct AGenerator*> _blockedGenerators; // 0x3e8(0x10)
	char pad_3F8[0x40]; // 0x3f8(0x40)

	void OnRep_BlockedGenerators(); // Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators // (Final|Native|Private) // @ game+0x4cddbf0
	void LevelReadyToBlockedGenerators(); // Function DBDCompetence.CorruptIntervention.LevelReadyToBlockedGenerators // (Final|Native|Private) // @ game+0x4cdda60
	float GetGeneratorBlockDuration(); // Function DBDCompetence.CorruptIntervention.GetGeneratorBlockDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
	void Authority_TryActivatePerk(); // Function DBDCompetence.CorruptIntervention.Authority_TryActivatePerk // (Final|Native|Private) // @ game+0x4cdd4c0
	void Authority_OnLevelReadyToPlay(); // Function DBDCompetence.CorruptIntervention.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4cdd0e0
};

// Class DBDCompetence.Coulrophobia
// Size: 0x3e0 (Inherited: 0x3c8)
struct UCoulrophobia : UPerk {
	struct UStatusEffect* _coulrophobiaEffect; // 0x3c8(0x08)
	float _healPenalty[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)

	float GetHealPenaltyAtLevel(); // Function DBDCompetence.Coulrophobia.GetHealPenaltyAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
};

// Class DBDCompetence.CruelConfinement
// Size: 0x410 (Inherited: 0x3c8)
struct UCruelConfinement : UPerk {
	float _blockDuration[0x3]; // 0x3c8(0x0c)
	struct FLinearColor _windowAuraColor; // 0x3d4(0x10)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct TWeakObjectPtr<struct UBlockableComponent>> _blockables; // 0x3e8(0x10)
	char pad_3F8[0x18]; // 0x3f8(0x18)

	float GetBlockDurationAtLevel(); // Function DBDCompetence.CruelConfinement.GetBlockDurationAtLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd5d0
};

// Class DBDCompetence.DarkDevotion
// Size: 0x3e0 (Inherited: 0x3c8)
struct UDarkDevotion : UPerk {
	struct UTerrorRadiusEmitterComponent* _obsessionTerrorRadiusEmitter; // 0x3c8(0x08)
	float _obsessionTerrorRadius; // 0x3d0(0x04)
	float _simulatedFixedDistance; // 0x3d4(0x04)
	char pad_3D8[0x8]; // 0x3d8(0x08)
};

// Class DBDCompetence.DarkSense
// Size: 0x410 (Inherited: 0x3c8)
struct UDarkSense : UPerk {
	float _killerRevealDuration[0x3]; // 0x3c8(0x0c)
	float _darkSenseRevealRange; // 0x3d4(0x04)
	struct UStatusEffect* _timedRevealEffect; // 0x3d8(0x08)
	char pad_3E0[0x30]; // 0x3e0(0x30)

	float GetKillerRevealDurationAtLevel(); // Function DBDCompetence.DarkSense.GetKillerRevealDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetDarkSenseRevealRange(); // Function DBDCompetence.DarkSense.GetDarkSenseRevealRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6c0
	void Authority_OnInRangeChanged(bool inRange); // Function DBDCompetence.DarkSense.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x4cdd050
};

// Class DBDCompetence.DBDConditionFactory
// Size: 0x30 (Inherited: 0x30)
struct UDBDConditionFactory : UBlueprintFunctionLibrary {

	struct UIsPlayerPerformingInteraction* IsPlayerPerformingInteraction(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct FGameplayTagContainer& interactionSemantics); // Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4cdd940
	struct UTimerElapsedCondition* HasTimerElapsedWhileConditionWasTrue(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct UTimerObject* Timer); // Function DBDCompetence.DBDConditionFactory.HasTimerElapsedWhileConditionWasTrue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4cdd850
	struct UDoesPerkHaveToken* DoesPerkHaveToken(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct UPerk* Perk); // Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4cdd4e0
};

// Class DBDCompetence.DeadMansSwitchEffect
// Size: 0x350 (Inherited: 0x350)
struct UDeadMansSwitchEffect : UStatusEffect {
};

// Class DBDCompetence.DeceptionEffect
// Size: 0x358 (Inherited: 0x350)
struct UDeceptionEffect : UStatusEffect {
	bool _hideBloodTrailsWhenCamperFakeEnterLocker; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
};

// Class DBDCompetence.DecisiveStrike
// Size: 0x468 (Inherited: 0x3c8)
struct UDecisiveStrike : UPerk {
	float _timeAfterUnhook[0x3]; // 0x3c8(0x0c)
	float _skillCheckDelay; // 0x3d4(0x04)
	float _skillCheckBuffer; // 0x3d8(0x04)
	char pad_3DC[0x7c]; // 0x3dc(0x7c)
	struct UStatusEffect* _increaseObsessionChanceEffect; // 0x458(0x08)
	bool _hasBeenAttempted; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)

	void OnUnhookedTimerEnded(); // Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded // (Final|Native|Private) // @ game+0x4ce32e0
	void OnSkillCheck(bool hadInput, bool success, bool Bonus, enum class ESkillCheckCustomType Type, struct ADBDPlayer* Player); // Function DBDCompetence.DecisiveStrike.OnSkillCheck // (Final|Native|Private) // @ game+0x4ce3050
	void OnRep_HasBeenAttempted(); // Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted // (Final|Native|Private) // @ game+0x4ce2f70
	void OnPickUpEnded(struct ADBDPlayer* picker); // Function DBDCompetence.DecisiveStrike.OnPickUpEnded // (Final|Native|Private) // @ game+0x4ce2ec0
	void OnOwnerPickedUp(struct ADBDPlayer* picker); // Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp // (Final|Native|Private) // @ game+0x4ce2ab0
	float GetDurationAfterUnhook(); // Function DBDCompetence.DecisiveStrike.GetDurationAfterUnhook // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class DBDCompetence.DejaVu
// Size: 0x408 (Inherited: 0x3c8)
struct UDejaVu : UPerk {
	int32_t _numGeneratorsToReveal; // 0x3c8(0x04)
	float _actionSpeeds[0x3]; // 0x3cc(0x0c)
	struct FLinearColor _generatorAuraColor; // 0x3d8(0x10)
	struct TArray<struct AGenerator*> _revealedGenerators; // 0x3e8(0x10)
	char pad_3F8[0x10]; // 0x3f8(0x10)

	void OnRep_RevealedGenerators(); // Function DBDCompetence.DejaVu.OnRep_RevealedGenerators // (Final|Native|Private) // @ game+0x4ce3010
	void LevelReadyToRevealOutlineGenerators(); // Function DBDCompetence.DejaVu.LevelReadyToRevealOutlineGenerators // (Final|Native|Private) // @ game+0x4ce2840
	float GetActionSpeedsAtLevel(); // Function DBDCompetence.DejaVu.GetActionSpeedsAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
	void Authority_SetNewGeneratorsToReveal(); // Function DBDCompetence.DejaVu.Authority_SetNewGeneratorsToReveal // (Final|Native|Private) // @ game+0x4ce2540
	void Authority_OnGeneratorRepaired(int32_t activatedGeneratorCount); // Function DBDCompetence.DejaVu.Authority_OnGeneratorRepaired // (Final|Native|Private) // @ game+0x4ce1fa0
};

// Class DBDCompetence.DelayedHealEffect
// Size: 0x358 (Inherited: 0x350)
struct UDelayedHealEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)

	void Authority_OnOwningCamperPickedUp(struct ADBDPlayer* picker); // Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp // (Final|Native|Private) // @ game+0x4ce2210
	void Authority_OnOwningCamperHealthChanged(enum class ECamperDamageState before, enum class ECamperDamageState after); // Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged // (Final|Native|Private) // @ game+0x4ce2140
	void Authority_OnActivationTimerComplete(); // Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete // (Final|Native|Private) // @ game+0x4ce1f80
};

// Class DBDCompetence.DidGameEventOccurred
// Size: 0x120 (Inherited: 0xe8)
struct UDidGameEventOccurred : UEventDrivenModifierCondition {
	struct FGameplayTag EventTag; // 0xe8(0x0c)
	char pad_F4[0x2c]; // 0xf4(0x2c)
};

// Class DBDCompetence.Distortion
// Size: 0x3f8 (Inherited: 0x3c8)
struct UDistortion : UPerk {
	float _activationDurations[0x3]; // 0x3c8(0x0c)
	bool _auraBlockIsActive; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	float _regainTokenDurationTimer; // 0x3d8(0x04)
	char pad_3DC[0x1c]; // 0x3dc(0x1c)

	void OnRep_AuraBlockIsActive(); // Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive // (Final|Native|Private) // @ game+0x4ce2f50
	void OnAuraBlockedCosmetic(); // Function DBDCompetence.Distortion.OnAuraBlockedCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetRegainTokenDurationTimer(); // Function DBDCompetence.Distortion.GetRegainTokenDurationTimer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2770
	float GetActivationDurationAtLevel(); // Function DBDCompetence.Distortion.GetActivationDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	bool AuraBlockCanBeActive(); // Function DBDCompetence.Distortion.AuraBlockCanBeActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce1f30
};

// Class DBDCompetence.DoesPerkHaveToken
// Size: 0xf8 (Inherited: 0xe8)
struct UDoesPerkHaveToken : UEventDrivenModifierCondition {
	struct TWeakObjectPtr<struct UPerk> _perk; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)

	void SetPerk(struct UPerk* Perk); // Function DBDCompetence.DoesPerkHaveToken.SetPerk // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce3320
	void OnRep_Perk(); // Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk // (Final|Native|Private) // @ game+0x4ce2fb0
};

// Class DBDCompetence.DownedByBasicAttack
// Size: 0x140 (Inherited: 0xe8)
struct UDownedByBasicAttack : UEventDrivenModifierCondition {
	bool _replicatedIsTrue; // 0xe8(0x01)
	char pad_E9[0x57]; // 0xe9(0x57)

	void OnRep_ReplicatedIsTrue(); // Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue // (Final|Native|Private) // @ game+0x4ce2ff0
};

// Class DBDCompetence.DyingLight
// Size: 0x400 (Inherited: 0x3c8)
struct UDyingLight : UPerk {
	struct TArray<float> _actionSpeedPenaltyPerToken; // 0x3c8(0x10)
	float _obsessionActionSpeedBonus; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UStatusEffect* _obsessionStatusEffect; // 0x3e0(0x08)
	struct UStatusEffect* _nonObsessionStatusEffect; // 0x3e8(0x08)
	struct TArray<struct UStatusEffect*> _survivorDebuffs; // 0x3f0(0x10)

	void OnObsessionChanged(struct ACamperPlayer* newObsession, struct ACamperPlayer* previousObsession); // Function DBDCompetence.DyingLight.OnObsessionChanged // (Final|Native|Private) // @ game+0x4ce29e0
	float GetObsessionActionSpeedBonus(); // Function DBDCompetence.DyingLight.GetObsessionActionSpeedBonus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce26c0
	float GetActionSpeedPenaltyPerTokenAtLevel(); // Function DBDCompetence.DyingLight.GetActionSpeedPenaltyPerTokenAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2590
};

// Class DBDCompetence.EnduranceHighlightEffect
// Size: 0x358 (Inherited: 0x350)
struct UEnduranceHighlightEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
};

// Class DBDCompetence.Fixated
// Size: 0x3d0 (Inherited: 0x3c8)
struct UFixated : UPerk {
	struct UStatusEffect* _fixatedStatusEffect; // 0x3c8(0x08)
};

// Class DBDCompetence.FlipFlop
// Size: 0x3e0 (Inherited: 0x3c8)
struct UFlipFlop : UPerk {
	float _recoveryProgressionConversionRatio[0x3]; // 0x3c8(0x0c)
	float _maxWiggleProgression[0x3]; // 0x3d4(0x0c)

	float GetRecoveryProgressionAtLevel(); // Function DBDCompetence.FlipFlop.GetRecoveryProgressionAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetMaxWiggleProgressionAtLevel(); // Function DBDCompetence.FlipFlop.GetMaxWiggleProgressionAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	void Authority_OnPickedUp(struct ADBDPlayer* picker); // Function DBDCompetence.FlipFlop.Authority_OnPickedUp // (Final|Native|Private) // @ game+0x4ce22a0
};

// Class DBDCompetence.FurtiveChase
// Size: 0x3d8 (Inherited: 0x3c8)
struct UFurtiveChase : UPerk {
	int32_t _maxTokensByLevel[0x3]; // 0x3c8(0x0c)
	int32_t _terrorRadiusSuppressionPerToken; // 0x3d4(0x04)
};

// Class DBDCompetence.GateBlockerEffect
// Size: 0x388 (Inherited: 0x350)
struct UGateBlockerEffect : UStatusEffect {
	float _blockGateLingeringTime; // 0x350(0x04)
	char pad_354[0x34]; // 0x354(0x34)

	void RemoveCantEscapeFlag(); // Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag // (Final|Native|Protected) // @ game+0x4ce3300
};

// Class DBDCompetence.SpawningEffectPerk
// Size: 0x480 (Inherited: 0x3c8)
struct USpawningEffectPerk : UPerk {
	struct FPerkLevelEffectArray _perkLevelEffects[0x3]; // 0x3c8(0x30)
	struct FPlayerStatusEffectSpawnerHelper _effectSpawnerHelper; // 0x3f8(0x88)
};

// Class DBDCompetence.HangmansTrick
// Size: 0x480 (Inherited: 0x480)
struct UHangmansTrick : USpawningEffectPerk {
};

// Class DBDCompetence.HasCleansedTotemInnerStrength
// Size: 0x100 (Inherited: 0xe8)
struct UHasCleansedTotemInnerStrength : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.HasFlag
// Size: 0x130 (Inherited: 0xe8)
struct UHasFlag : UEventDrivenModifierCondition {
	struct FGameplayTag _flag; // 0xe8(0x0c)
	char pad_F4[0x3c]; // 0xf4(0x3c)
};

// Class DBDCompetence.HasItemOfTypeEquipped
// Size: 0x100 (Inherited: 0xe8)
struct UHasItemOfTypeEquipped : UEventDrivenModifierCondition {
	char pad_E8[0x10]; // 0xe8(0x10)
	enum class ELoadoutItemType _itemType; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class DBDCompetence.HasItemOfTypeEquippedNoCharge
// Size: 0x118 (Inherited: 0x100)
struct UHasItemOfTypeEquippedNoCharge : UHasItemOfTypeEquipped {
	char pad_100[0x18]; // 0x100(0x18)

	void OnItemChargeStateChanged(bool IsEmpty); // Function DBDCompetence.HasItemOfTypeEquippedNoCharge.OnItemChargeStateChanged // (Final|Native|Protected) // @ game+0x4ce2950
};

// Class DBDCompetence.HasItemOfTypeInInventory
// Size: 0x100 (Inherited: 0x100)
struct UHasItemOfTypeInInventory : UHasItemOfTypeEquipped {
};

// Class DBDCompetence.HasItemOfTypeInInventoryNoCharge
// Size: 0x118 (Inherited: 0x100)
struct UHasItemOfTypeInInventoryNoCharge : UHasItemOfTypeInInventory {
	char pad_100[0x18]; // 0x100(0x18)

	void OnItemChargeStateChanged(bool IsEmpty); // Function DBDCompetence.HasItemOfTypeInInventoryNoCharge.OnItemChargeStateChanged // (Final|Native|Protected) // @ game+0x4ce2950
};

// Class DBDCompetence.HasLineOfSightQueryComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UHasLineOfSightQueryComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
// Size: 0xf0 (Inherited: 0xe8)
struct UHasPlayerReachedWiggleFillPercentCondition : UEventDrivenModifierCondition {
	char pad_E8[0x4]; // 0xe8(0x04)
	bool _isWigglePercentReached; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)

	void OnRep_IsWigglePercentReached(); // Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached // (Final|Native|Private) // @ game+0x4ce2f90
	void Authority_OnOwnerWiggleChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged // (Final|Native|Private) // @ game+0x4ce2030
};

// Class DBDCompetence.HasRemainingGenerators
// Size: 0x120 (Inherited: 0xe8)
struct UHasRemainingGenerators : UEventDrivenModifierCondition {
	char pad_E8[0x38]; // 0xe8(0x38)
};

// Class DBDCompetence.HeadOn
// Size: 0x448 (Inherited: 0x3c8)
struct UHeadOn : UPerk {
	bool IsPerformingHeadOn; // 0x3c8(0x01)
	bool ExhaustOnlyOnSuccessfulStun; // 0x3c9(0x01)
	bool StunKillersEnteringStunZone; // 0x3ca(0x01)
	char pad_3CB[0x1]; // 0x3cb(0x01)
	float _hideDuration[0x3]; // 0x3cc(0x0c)
	struct UStatusEffect* _exhaustedStatusEffect; // 0x3d8(0x08)
	struct ALocker* _locker; // 0x3e0(0x08)
	char pad_3E8[0x30]; // 0x3e8(0x30)
	struct TArray<struct AActor*> _stunnableActorsInZone; // 0x418(0x10)
	char pad_428[0x20]; // 0x428(0x20)

	void OnPawnOverlapExit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DBDCompetence.HeadOn.OnPawnOverlapExit // (Final|Native|Private) // @ game+0x4ce2d60
	void OnPawnOverlapEnter(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DBDCompetence.HeadOn.OnPawnOverlapEnter // (Final|Native|Private|HasOutParms) // @ game+0x4ce2b40
	void OnHeadOnAnimationComplete(); // Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce2930
	void Multicast_TriggerStunOnActor(struct UObject* stunnableInterfaceUObject, struct ADBDPlayer* stunner); // Function DBDCompetence.HeadOn.Multicast_TriggerStunOnActor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ce2860
	float GetHideDuration(); // Function DBDCompetence.HeadOn.GetHideDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
	bool CanApplyHeadOnInteraction(); // Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2560
	void Authority_ActivatePerk(); // Function DBDCompetence.HeadOn.Authority_ActivatePerk // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4ce1f60
};

// Class DBDCompetence.HemorrhageStatusEffect
// Size: 0x3d0 (Inherited: 0x360)
struct UHemorrhageStatusEffect : UAdjustableCooldownStatusEffect {
	float _cooldownFXTime; // 0x360(0x04)
	bool _removeEffectWhenFullyHealed; // 0x364(0x01)
	char pad_365[0x6b]; // 0x365(0x6b)

	void OnStoppedHealing(struct ADBDPlayer* Instigator, struct ADBDPlayer* Target); // Function DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing // (Native|Event|Protected|BlueprintEvent) // @ game+0x4ce3210
	void Authority_OnSurvivorHealed(struct FCamperHealResult& healResult); // Function DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed // (Final|Native|Private|HasOutParms) // @ game+0x4ce2330
};

// Class DBDCompetence.HexPerk
// Size: 0x448 (Inherited: 0x420)
struct UHexPerk : UTotemBoundPerk {
	struct TArray<struct ADBDPlayer*> _playersWhoKnowCurse; // 0x420(0x10)
	struct TArray<struct ADBDPlayer*> _oldPlayersWhoKnowCurse; // 0x430(0x10)
	char pad_440[0x8]; // 0x440(0x08)

	void UpdateCursedStatusViewOnLocalPlayer(); // Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x4ce33b0
	void OnRep_PlayersWhoKnowCurse(); // Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse // (Final|Native|Private) // @ game+0x4ce2fd0
	bool IsCurseRevealedToPlayer(struct ADBDPlayer* Player); // Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce27a0
	void Authority_SetCurseRevealedToPlayer(struct ADBDPlayer* Player, bool revealed); // Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x4ce2470
	void Authority_RevealCurseToAllSurvivors(bool revealed); // Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x4ce23e0
};

// Class DBDCompetence.HexDevourHope
// Size: 0x4c8 (Inherited: 0x448)
struct UHexDevourHope : UHexPerk {
	struct UStatusEffect* _devourHopeSpeedStatusEffect; // 0x448(0x08)
	struct UStatusEffect* _exposedStatusEffect; // 0x450(0x08)
	float _rangeFromUnhookedSurvivorNeeded; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	int32_t _tokenThresholdToImposeSpeedBoost; // 0x460(0x04)
	int32_t _tokenThresholdToImposeExposeEffect; // 0x464(0x04)
	int32_t _tokenThresholdToImposeAbilityToKill; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FGameplayTagContainer _attackGameEvents; // 0x470(0x20)
	float _moveSpeedIncrement[0x3]; // 0x490(0x0c)
	char pad_49C[0x14]; // 0x49c(0x14)
	struct FName _vulnerabilityStatusViewID; // 0x4b0(0x0c)
	char pad_4BC[0xc]; // 0x4bc(0x0c)

	float GetRangeFromUnhookedSurvivorNeeded(int32_t PerkLevel); // Function DBDCompetence.HexDevourHope.GetRangeFromUnhookedSurvivorNeeded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce26e0
	float GetMoveSpeedIncrement(int32_t PerkLevel); // Function DBDCompetence.HexDevourHope.GetMoveSpeedIncrement // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2620
};

// Class DBDCompetence.HexHauntedGround
// Size: 0x470 (Inherited: 0x448)
struct UHexHauntedGround : UHexPerk {
	float _exposedStatusEffectDuration[0x3]; // 0x448(0x0c)
	char pad_454[0x4]; // 0x454(0x04)
	struct UStatusEffect* _exposedStatusEffectClass; // 0x458(0x08)
	char pad_460[0x10]; // 0x460(0x10)

	float GetExposedDurationAtLevel(); // Function DBDCompetence.HexHauntedGround.GetExposedDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce25c0
};

// Class DBDCompetence.HexNoOneEscapesDeath
// Size: 0x4b8 (Inherited: 0x448)
struct UHexNoOneEscapesDeath : UHexPerk {
	struct UStatusEffect* _hasteImposedEffectClass; // 0x448(0x08)
	struct UStatusEffect* _exposedEffectClass; // 0x450(0x08)
	bool _revealCurseWhenTotemShownToSurvivor; // 0x458(0x01)
	bool _revealCurseWhenSurvivorGetHits; // 0x459(0x01)
	char pad_45A[0x2]; // 0x45a(0x02)
	float _auraRevealStartDistance; // 0x45c(0x04)
	float _auraRevealEndDistance; // 0x460(0x04)
	float _auraRevealDuration; // 0x464(0x04)
	float _hastePerLevel[0x3]; // 0x468(0x0c)
	bool _shouldActivateTotemOutline; // 0x474(0x01)
	char pad_475[0x43]; // 0x475(0x43)

	void OnRep_SetShouldActivateTotemOutline(); // Function DBDCompetence.HexNoOneEscapesDeath.OnRep_SetShouldActivateTotemOutline // (Final|Native|Private) // @ game+0x4ce3030
	float GetHasteAtLevel(); // Function DBDCompetence.HexNoOneEscapesDeath.GetHasteAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4ce25f0
};

// Class DBDCompetence.HexRuin
// Size: 0x520 (Inherited: 0x448)
struct UHexRuin : UHexPerk {
	char pad_448[0x18]; // 0x448(0x18)
	struct TMap<struct AGenerator*, struct FFastTimer> _curseActivationTimers; // 0x460(0x50)
	float _regressionModifier[0x3]; // 0x4b0(0x0c)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UStatusEffect* _ruinStatusEffectClass; // 0x4c0(0x08)
	struct TMap<struct AGenerator*, uint64_t> _gameplayModifierHandles; // 0x4c8(0x50)
	struct UStatusEffect* _ruinStatusEffect; // 0x518(0x08)

	float GetRegressionModifierByLevel(int32_t PerkLevel); // Function DBDCompetence.HexRuin.GetRegressionModifierByLevel // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce8c40
	void Authority_SetupCurseOnAllGenerators(); // Function DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators // (Final|Native|Private) // @ game+0x4ce8bf0
};

// Class DBDCompetence.HexThirdSeal
// Size: 0x478 (Inherited: 0x448)
struct UHexThirdSeal : UHexPerk {
	char pad_448[0x18]; // 0x448(0x18)
	struct UStatusEffect* _thirdSealBlindnessEffect; // 0x460(0x08)
	int32_t _maximumBlindableSurvivors[0x3]; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
};

// Class DBDCompetence.HexThrillOfTheHunt
// Size: 0x468 (Inherited: 0x448)
struct UHexThrillOfTheHunt : UHexPerk {
	struct UStatusEffect* _thrillOfTheHuntStatusEffect; // 0x448(0x08)
	float _hunterPointsBonusPercent; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct UStatusEffect*> _survivorThrillOfTheHuntEffects; // 0x458(0x10)
};

// Class DBDCompetence.HexThrillOfTheHuntStatusEffect
// Size: 0x360 (Inherited: 0x350)
struct UHexThrillOfTheHuntStatusEffect : UStatusEffect {
	float _speedPenaltyPercents[0x3]; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)

	float GetSpeedPenaltyPercents(int32_t tierLevel); // Function DBDCompetence.HexThrillOfTheHuntStatusEffect.GetSpeedPenaltyPercents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce8ce0
};

// Class DBDCompetence.HideSurvivorVFXForKillerEffect
// Size: 0x350 (Inherited: 0x350)
struct UHideSurvivorVFXForKillerEffect : UStatusEffect {

	void HideVFX(bool Hide); // Function DBDCompetence.HideSurvivorVFXForKillerEffect.HideVFX // (Final|Native|Private|BlueprintCallable) // @ game+0x4ce8d80
};

// Class DBDCompetence.HighestLevelAndClosestEffectCondition
// Size: 0x118 (Inherited: 0xd0)
struct UHighestLevelAndClosestEffectCondition : UGameplayModifierCondition {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct UStatusEffect*> _effectsLevel1; // 0xd8(0x10)
	struct TArray<struct UStatusEffect*> _effectsLevel2; // 0xe8(0x10)
	struct TArray<struct UStatusEffect*> _effectsLevel3; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)

	void SetCurrentEffectLevel(int32_t Level); // Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce98b0
	void InitEffectArrays(struct FName effectIDLevel1, struct FName effectIDLevel2, struct FName effectIDLevel3); // Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce8ee0
};

// Class DBDCompetence.HookedSurvivorRangeBaseCondition
// Size: 0x1e0 (Inherited: 0xf0)
struct UHookedSurvivorRangeBaseCondition : URangeBasedCondition {
	char pad_F0[0xf0]; // 0xf0(0xf0)
};

// Class DBDCompetence.HopePerk
// Size: 0x3e0 (Inherited: 0x3c8)
struct UHopePerk : UPerk {
	struct UStatusEffect* _hopePerkEffect; // 0x3c8(0x08)
	float _hasteEffect[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)

	float GetHasteEffectAtLevel(); // Function DBDCompetence.HopePerk.GetHasteEffectAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
};

// Class DBDCompetence.ImAllEars
// Size: 0x420 (Inherited: 0x3c8)
struct UImAllEars : UPerk {
	int32_t _cooldownByLevel[0x3]; // 0x3c8(0x0c)
	float _durationByLevel[0x3]; // 0x3d4(0x0c)
	bool _useTerrorRadius; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float _triggerOutsideRadius; // 0x3e4(0x04)
	char pad_3E8[0x38]; // 0x3e8(0x38)

	void Server_OnCamperLoudNoise(struct FGameplayTag GameplayTag, struct FGameEventData GameEventData); // Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x4ce9760
	float GetDurationAtLevel(); // Function DBDCompetence.ImAllEars.GetDurationAtLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x4cdd720
	int32_t GetCooldownAtLevel(); // Function DBDCompetence.ImAllEars.GetCooldownAtLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce8c10
};

// Class DBDCompetence.OnEventBaseAddon
// Size: 0x2c8 (Inherited: 0x2b8)
struct UOnEventBaseAddon : UItemAddon {
	struct FGameplayTag _eventToListenTo; // 0x2b8(0x0c)
	char pad_2C4[0x4]; // 0x2c4(0x04)

	void OnEventFired(struct FGameEventData& GameEventData); // Function DBDCompetence.OnEventBaseAddon.OnEventFired // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDCompetence.ImposeStatusEffectOnEventAddon
// Size: 0x2d8 (Inherited: 0x2c8)
struct UImposeStatusEffectOnEventAddon : UOnEventBaseAddon {
	struct TArray<struct FStatusEffectInfo> _statusEffects; // 0x2c8(0x10)
};

// Class DBDCompetence.InfectiousFright
// Size: 0x410 (Inherited: 0x3c8)
struct UInfectiousFright : UPerk {
	bool _revealPlayerInTerrorRadius; // 0x3c8(0x01)
	char _perkActivationCount; // 0x3c9(0x01)
	char pad_3CA[0x6]; // 0x3ca(0x06)
	struct TArray<struct ACamperPlayer*> _revealedSurvivors; // 0x3d0(0x10)
	struct ACamperPlayer* _targetSurvivor; // 0x3e0(0x08)
	char pad_3E8[0x28]; // 0x3e8(0x28)

	void RevealSurvivorLocation(struct ACamperPlayer* Target); // Function DBDCompetence.InfectiousFright.RevealSurvivorLocation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_PerkActivationCount(); // Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount // (Final|Native|Private) // @ game+0x4ce9420
};

// Class DBDCompetence.InnerStrength
// Size: 0x400 (Inherited: 0x3c8)
struct UInnerStrength : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	float _hideDuration[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x24]; // 0x3dc(0x24)

	float GetHideDuration(); // Function DBDCompetence.InnerStrength.GetHideDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd780
	void Authority_OnPlayerImmobilizeStateChanged(enum class EImmobilizedState oldImmobilizeState, enum class EImmobilizedState newImmobilizeState); // Function DBDCompetence.InnerStrength.Authority_OnPlayerImmobilizeStateChanged // (Final|Native|Private) // @ game+0x4ce8b20
};

// Class DBDCompetence.Insidious
// Size: 0x3e0 (Inherited: 0x3c8)
struct UInsidious : UPerk {
	float _stillnessRequired[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _insidiousEffect; // 0x3d8(0x08)

	float GetStillnessRequiredAtLevel(); // Function DBDCompetence.Insidious.GetStillnessRequiredAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class DBDCompetence.InsidiousEffect
// Size: 0x350 (Inherited: 0x350)
struct UInsidiousEffect : UStatusEffect {
};

// Class DBDCompetence.IsActivationTimerActive
// Size: 0x100 (Inherited: 0xe8)
struct UIsActivationTimerActive : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.IsActivationTimerActiveAndNotPaused
// Size: 0x108 (Inherited: 0xe8)
struct UIsActivationTimerActiveAndNotPaused : UEventDrivenModifierCondition {
	char pad_E8[0x20]; // 0xe8(0x20)
};

// Class DBDCompetence.IsBestProveThyselfEffectInRange
// Size: 0x110 (Inherited: 0xe8)
struct UIsBestProveThyselfEffectInRange : UEventDrivenModifierCondition {
	char pad_E8[0x28]; // 0xe8(0x28)

	void OnInRangeChanged(bool inRange, struct UProveThyselfEffect* ProveThyselfEffect); // Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged // (Final|Native|Private) // @ game+0x4ce9260
};

// Class DBDCompetence.IsBoonBlessed
// Size: 0x100 (Inherited: 0xe8)
struct UIsBoonBlessed : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.IsCooldownTimerActive
// Size: 0x100 (Inherited: 0xe8)
struct UIsCooldownTimerActive : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.IsHexCursed
// Size: 0x100 (Inherited: 0xe8)
struct UIsHexCursed : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
// Size: 0xf8 (Inherited: 0xd0)
struct UIsHighestLevelAndClosestOriginatingEffect : UGameplayModifierCondition {
	struct TArray<struct UStatusEffect*> _applicableEffects; // 0xd0(0x10)
	char pad_E0[0x18]; // 0xe0(0x18)

	void OnStatusEffectAddedOrRemoved(struct UStatusEffect* effect, bool Valid); // Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved // (Final|Native|Private) // @ game+0x4ce9460
};

// Class DBDCompetence.IsHighestTierOriginatingPerk
// Size: 0x100 (Inherited: 0xe8)
struct UIsHighestTierOriginatingPerk : UEventDrivenModifierCondition {
	struct TArray<struct UStatusEffect*> _applicableEffects; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)

	void OnStatusEffectApplicableChanged(struct UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable); // Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged // (Final|Native|Private) // @ game+0x4ce9600
	void OnStatusEffectAddedOrRemoved(struct UStatusEffect* effect, bool Valid); // Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved // (Final|Native|Private) // @ game+0x4ce9530
};

// Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
// Size: 0x1a0 (Inherited: 0xf0)
struct UIsInAnyHookedSurvivorOriginatorAuraReadingRange : URangeBasedCondition {
	char pad_F0[0xb0]; // 0xf0(0xb0)
};

// Class DBDCompetence.IsInRangeOfHookedSurvivor
// Size: 0x1e0 (Inherited: 0x1e0)
struct UIsInRangeOfHookedSurvivor : UHookedSurvivorRangeBaseCondition {
};

// Class DBDCompetence.IsInRangeOfOriginatingPlayer
// Size: 0x118 (Inherited: 0xf0)
struct UIsInRangeOfOriginatingPlayer : URangeBasedCondition {
	char pad_F0[0x28]; // 0xf0(0x28)

	void OnInRangeChanged(bool inRange); // Function DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged // (Final|Native|Private) // @ game+0x4ce2950
};

// Class DBDCompetence.IsLifetimeActive
// Size: 0xf8 (Inherited: 0xe8)
struct UIsLifetimeActive : UEventDrivenModifierCondition {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class DBDCompetence.IsOnHitSprintEffectActive
// Size: 0xe8 (Inherited: 0xe8)
struct UIsOnHitSprintEffectActive : UEventDrivenModifierCondition {
};

// Class DBDCompetence.IsOriginatingPerkBoundToTotems
// Size: 0xf8 (Inherited: 0xe8)
struct UIsOriginatingPerkBoundToTotems : UEventDrivenModifierCondition {
	enum class EComparisonOperation _comparisonOperator; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	int32_t _totemCount; // 0xec(0x04)
	char pad_F0[0x8]; // 0xf0(0x08)

	void OnRep_TotemCount(); // Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount // (Final|Native|Private) // @ game+0x4ce9440
	void Init(enum class EComparisonOperation comparisonOperator, int32_t totemCount); // Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce8e10
};

// Class DBDCompetence.IsOriginatingPerkUsableCondition
// Size: 0xf0 (Inherited: 0xf0)
struct UIsOriginatingPerkUsableCondition : UBaseIsPerkUsableCondition {
};

// Class DBDCompetence.IsOutsideOfAnyHookedSurvivorRange
// Size: 0x1e0 (Inherited: 0x1e0)
struct UIsOutsideOfAnyHookedSurvivorRange : UHookedSurvivorRangeBaseCondition {
};

// Class DBDCompetence.IsOwningPlayerInRangeFromHook
// Size: 0x150 (Inherited: 0x100)
struct UIsOwningPlayerInRangeFromHook : UAnyActorPairQueryRangeIsTrue {
	struct FGameplayTagQuery _tagQueryFromHook; // 0x100(0x48)
	char pad_148[0x8]; // 0x148(0x08)

	void OnLevelReadyToPlay(); // Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay // (Final|Native|Protected) // @ game+0x4ce9330
};

// Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
// Size: 0x168 (Inherited: 0x150)
struct UIsOwningPlayerInHookRangeWhenKillerCarry : UIsOwningPlayerInRangeFromHook {
	char pad_150[0x18]; // 0x150(0x18)
};

// Class DBDCompetence.IsOwningPlayerLastSurvivor
// Size: 0xf0 (Inherited: 0xe8)
struct UIsOwningPlayerLastSurvivor : UEventDrivenModifierCondition {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller
// Size: 0xd0 (Inherited: 0xd0)
struct UIsOwningSurvivorAuraRevealedToKiller : UGameplayModifierCondition {
};

// Class DBDCompetence.IsPawnType
// Size: 0xf0 (Inherited: 0xe8)
struct UIsPawnType : UEventDrivenModifierCondition {
	enum class EPawnType _pawnType; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class DBDCompetence.IsPerkUsableCondition
// Size: 0xf0 (Inherited: 0xf0)
struct UIsPerkUsableCondition : UBaseIsPerkUsableCondition {
};

// Class DBDCompetence.IsPlayerLookingAtKillerCondition
// Size: 0x100 (Inherited: 0xe8)
struct UIsPlayerLookingAtKillerCondition : UEventDrivenModifierCondition {
	char pad_E8[0x10]; // 0xe8(0x10)
	float _precisionAngleDegrees; // 0xf8(0x04)
	bool _isLookingTowards; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)

	void OnRep_IsLookingTowards(bool IsLookingTowards); // Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnRep_IsLookingTowards // (Final|Native|Private) // @ game+0x4ce2950
	void OnPawnControllerChanged(struct APawn* Pawn, struct AController* Controller); // Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnPawnControllerChanged // (Final|Native|Private) // @ game+0x4ce9350
};

// Class DBDCompetence.IsPlayerPerfInteractionWithNoItem
// Size: 0x158 (Inherited: 0x118)
struct UIsPlayerPerfInteractionWithNoItem : UBaseIsPlayerPerformingInteraction {
	char pad_118[0x10]; // 0x118(0x10)
	struct FGameplayTagContainer _useItemInteractionSemantics; // 0x128(0x20)
	char pad_148[0x8]; // 0x148(0x08)
	enum class ELoadoutItemType _itemType; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)

	void OnCollectableChargeStateChange(bool Empty); // Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange // (Final|Native|Private) // @ game+0x4ce9030
};

// Class DBDCompetence.IsPlayerPerformingItemInteraction
// Size: 0x138 (Inherited: 0x118)
struct UIsPlayerPerformingItemInteraction : UBaseIsPlayerPerformingInteraction {
	char pad_118[0x20]; // 0x118(0x20)

	void OnCollectablePickedUp(struct ADBDPlayer* Player); // Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp // (Final|Native|Private) // @ game+0x4ce91d0
	void OnCollectableDropped(enum class EItemDropType dropType); // Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped // (Final|Native|Private) // @ game+0x4ce9150
	void OnCollectableChargeStateChange(bool Empty); // Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange // (Final|Native|Private) // @ game+0x4ce90c0
};

// Class DBDCompetence.IsPlayerPerformingInteraction
// Size: 0x128 (Inherited: 0xe8)
struct UIsPlayerPerformingInteraction : UEventDrivenModifierCondition {
	struct FGameplayTagContainer _interactionSemantics; // 0xe8(0x20)
	char pad_108[0x20]; // 0x108(0x20)

	void UpdateIsTrue(struct UInteractionDefinition* InteractionDefinition); // Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue // (Final|Native|Private) // @ game+0x4ce9940
	void SetInteractionSemantics(struct FGameplayTagContainer& interactionSemantics); // Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4cddef0
};

// Class DBDCompetence.IsSubjectInteractingWithOriginatingPlayer
// Size: 0x100 (Inherited: 0xe8)
struct UIsSubjectInteractingWithOriginatingPlayer : UEventDrivenModifierCondition {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class DBDCompetence.KillerConditionalSpeedCurveEffect
// Size: 0x358 (Inherited: 0x350)
struct UKillerConditionalSpeedCurveEffect : UStatusEffect {
	struct UCurveFloat* _speedCurve; // 0x350(0x08)
};

// Class DBDCompetence.KillerIsLowOnAmmo
// Size: 0x100 (Inherited: 0xe8)
struct UKillerIsLowOnAmmo : UEventDrivenModifierCondition {
	int32_t _ammoThreshold; // 0xe8(0x04)
	char pad_EC[0x14]; // 0xec(0x14)
};

// Class DBDCompetence.KillerSubjectProvider
// Size: 0x50 (Inherited: 0x48)
struct UKillerSubjectProvider : UModifierSubjectProvider {
	char pad_48[0x8]; // 0x48(0x08)

	void RegisterWhenKillerSet(struct ASlasherPlayer* killer); // Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet // (Final|Native|Private) // @ game+0x4ce96d0
};

// Class DBDCompetence.KindredPerk
// Size: 0x3f8 (Inherited: 0x3c8)
struct UKindredPerk : UPerk {
	struct TArray<float> _killerAuraRevealRange; // 0x3c8(0x10)
	struct UStatusEffect* _kindredRevealKillerOther; // 0x3d8(0x08)
	struct UStatusEffect* _kindredRevealKillerOwner; // 0x3e0(0x08)
	struct UStatusEffect* _kindredRevealSurvivors; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	float GetKillerAuraRevealRangeAtLevel(); // Function DBDCompetence.KindredPerk.GetKillerAuraRevealRangeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2590
};

// Class DBDCompetence.Leader
// Size: 0x3e0 (Inherited: 0x3c8)
struct ULeader : UPerk {
	float _actionSpeedModifier[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct ULeaderEffect* _leaderStatusEffect; // 0x3d8(0x08)
};

// Class DBDCompetence.LeaderEffect
// Size: 0x350 (Inherited: 0x350)
struct ULeaderEffect : UStatusEffect {
};

// Class DBDCompetence.LingeringBlessedStatusEffect
// Size: 0x388 (Inherited: 0x360)
struct ULingeringBlessedStatusEffect : UBlessedStatusEffect {
	char pad_360[0x4]; // 0x360(0x04)
	float _lingerDuration; // 0x364(0x04)
	char pad_368[0x20]; // 0x368(0x20)

	void SetLingerDuration(float lingerDuration); // Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration // (Final|Native|Protected|BlueprintCallable) // @ game+0x4cef160
	void Authority_OnInRangeChanged(bool inRange); // Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x4ceeb20
};

// Class DBDCompetence.LingeringBlindnessEffect
// Size: 0x3c0 (Inherited: 0x360)
struct ULingeringBlindnessEffect : UAdjustableCooldownStatusEffect {
	struct FGameplayTag startBlindnessEventTag; // 0x360(0x0c)
	struct FGameplayTag endBlindnessEventTag; // 0x36c(0x0c)
	struct FGameplayTag _state; // 0x378(0x0c)
	char pad_384[0x3c]; // 0x384(0x3c)
};

// Class DBDCompetence.LingeringExhaustedEffect
// Size: 0x3c8 (Inherited: 0x368)
struct ULingeringExhaustedEffect : UExhaustedEffect {
	struct FGameplayTag startExhaustedEventTag; // 0x368(0x0c)
	struct FGameplayTag endExhaustedEventTag; // 0x374(0x0c)
	struct FGameplayTag _state; // 0x380(0x0c)
	char pad_38C[0x3c]; // 0x38c(0x3c)
};

// Class DBDCompetence.LingeringMultiStateTagStatusEffect
// Size: 0x430 (Inherited: 0x3b8)
struct ULingeringMultiStateTagStatusEffect : UBaseLingeringStatusEffect {
	struct TArray<struct FGameplayTag> _ownerStateTag; // 0x3b8(0x10)
	enum class EMultiLingeringStateTagStrategy _strategy; // 0x3c8(0x01)
	char pad_3C9[0x67]; // 0x3c9(0x67)
};

// Class DBDCompetence.LingeringStateTagStatusEffect
// Size: 0x3f0 (Inherited: 0x3b8)
struct ULingeringStateTagStatusEffect : UBaseLingeringStatusEffect {
	struct FGameplayTag _ownerStateTag; // 0x3b8(0x0c)
	char pad_3C4[0x2c]; // 0x3c4(0x2c)
};

// Class DBDCompetence.LocallyObservedPlayerSubjectProvider
// Size: 0x48 (Inherited: 0x48)
struct ULocallyObservedPlayerSubjectProvider : UModifierSubjectProvider {
};

// Class DBDCompetence.LuckyBreak
// Size: 0x420 (Inherited: 0x3c8)
struct ULuckyBreak : UPerk {
	float _maxActivationTime[0x3]; // 0x3c8(0x0c)
	float _minActivationTime; // 0x3d4(0x04)
	float _healingTimeToActivationTimeRatio; // 0x3d8(0x04)
	bool _isRecharging; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct FSpeedBasedNetSyncedValue _activationTime; // 0x3e0(0x38)
	char pad_418[0x8]; // 0x418(0x08)

	float GetMinActivationTime(); // Function DBDCompetence.LuckyBreak.GetMinActivationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6c0
	float GetMaxActivationTimeAtLevel(); // Function DBDCompetence.LuckyBreak.GetMaxActivationTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetHealingTimeToActivationTimeRatio(); // Function DBDCompetence.LuckyBreak.GetHealingTimeToActivationTimeRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2770
	void Authority_TryActivatePerk(); // Function DBDCompetence.LuckyBreak.Authority_TryActivatePerk // (Final|Native|Private) // @ game+0x4ceedc0
	void Authority_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function DBDCompetence.LuckyBreak.Authority_OnDamageStateChanged // (Final|Native|Private) // @ game+0x4cee7d0
	void ActivationTimerEnded(); // Function DBDCompetence.LuckyBreak.ActivationTimerEnded // (Final|Native|Private) // @ game+0x4cee6e0
};

// Class DBDCompetence.MakeYourChoice
// Size: 0x3e0 (Inherited: 0x3c8)
struct UMakeYourChoice : UPerk {
	float _minimumHookedSurvivorDistance; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UStatusEffect* _exposedEffect; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)

	void Multicast_TriggerEffectAppliedVFX(struct ACamperPlayer* Player); // Function DBDCompetence.MakeYourChoice.Multicast_TriggerEffectAppliedVFX // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceef10
	float GetMinimumHookedSurvivorDistance(); // Function DBDCompetence.MakeYourChoice.GetMinimumHookedSurvivorDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
	void Cosmetic_OnTriggerEffectVFX(struct ACamperPlayer* Player); // Function DBDCompetence.MakeYourChoice.Cosmetic_OnTriggerEffectVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDCompetence.MindBreaker
// Size: 0x3f0 (Inherited: 0x3c8)
struct UMindBreaker : UPerk {
	float _effectDurationAfterRepair[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _blindessEffect; // 0x3d8(0x08)
	struct UStatusEffect* _exhaustedEffect; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)

	float GetEffectDurationAfterRepairAtLevel(); // Function DBDCompetence.MindBreaker.GetEffectDurationAfterRepairAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class DBDCompetence.MonstrousShrine
// Size: 0x3f8 (Inherited: 0x3c8)
struct UMonstrousShrine : UPerk {
	char pad_3C8[0x18]; // 0x3c8(0x18)
	float _fasterDrainPercentage[0x3]; // 0x3e0(0x0c)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UStatusEffect* _fasterDrainOnScourgeHookEffect; // 0x3f0(0x08)

	float GetFasterDrainPercentageAtLevel(); // Function DBDCompetence.MonstrousShrine.GetFasterDrainPercentageAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd7e0
	void Authority_OnSurvivorUnhookedOnScourgeHook(struct FGameEventData& GameEventData); // Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorUnhookedOnScourgeHook // (Final|Native|Private|HasOutParms) // @ game+0x4ceed10
	void Authority_OnSurvivorHookedOnScourgeHook(struct FGameEventData& GameEventData); // Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorHookedOnScourgeHook // (Final|Native|Private|HasOutParms) // @ game+0x4ceebd0
};

// Class DBDCompetence.Nemesis
// Size: 0x3f8 (Inherited: 0x3c8)
struct UNemesis : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	float _revealToKillerTime[0x3]; // 0x3d0(0x0c)
	float _obliviousTime[0x3]; // 0x3dc(0x0c)
	struct UStatusEffect* _timedObliviousEffectClass; // 0x3e8(0x08)
	struct UStatusEffect* _obliviousStatusEffect; // 0x3f0(0x08)
};

// Class DBDCompetence.NoOneLeftBehind
// Size: 0x400 (Inherited: 0x3c8)
struct UNoOneLeftBehind : UPerk {
	float _movementSpeedPercentage; // 0x3c8(0x04)
	float _movementSpeedDuration; // 0x3cc(0x04)
	struct UStatusEffect* _modifyHealOtherSpeedEffect; // 0x3d0(0x08)
	struct UStatusEffect* _modifyUnhookOtherSpeedEffect; // 0x3d8(0x08)
	struct UStatusEffect* _movementSpeedEffect; // 0x3e0(0x08)
	float _actionSpeedModifierValuePerLevel[0x3]; // 0x3e8(0x0c)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UStatusEffect* _alertKillerRevealEffect; // 0x3f8(0x08)

	float GetMovementSpeedPercentage(); // Function DBDCompetence.NoOneLeftBehind.GetMovementSpeedPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840b20
	float GetMovementSpeedDuration(); // Function DBDCompetence.NoOneLeftBehind.GetMovementSpeedDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee70
	float GetActionSpeedModifierValueAtLevel(); // Function DBDCompetence.NoOneLeftBehind.GetActionSpeedModifierValueAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd750
	void Authority_OnExitGatePoweredApplicableChanged(struct UGameplayModifierContainer* Container, bool Active); // Function DBDCompetence.NoOneLeftBehind.Authority_OnExitGatePoweredApplicableChanged // (Final|Native|Private) // @ game+0x4cee8a0
};

// Class DBDCompetence.ObliviousEffect
// Size: 0x360 (Inherited: 0x360)
struct UObliviousEffect : UAdjustableCooldownStatusEffect {
};

// Class DBDCompetence.ObsessionTargetSubjectProvider
// Size: 0x58 (Inherited: 0x48)
struct UObsessionTargetSubjectProvider : UModifierSubjectProvider {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class DBDCompetence.OnEventSetTimerAddon
// Size: 0x2d0 (Inherited: 0x2c8)
struct UOnEventSetTimerAddon : UOnEventBaseAddon {
	float _addonEffectTime; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class DBDCompetence.OriginatingEffectIsApplicable
// Size: 0xf0 (Inherited: 0xe8)
struct UOriginatingEffectIsApplicable : UEventDrivenModifierCondition {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class DBDCompetence.OwningPlayerInBoonBlessingRange
// Size: 0x108 (Inherited: 0x100)
struct UOwningPlayerInBoonBlessingRange : UAnyActorPairQueryRangeIsTrue {
	struct ATotem* _boundTotem; // 0x100(0x08)
};

// Class DBDCompetence.OwningPlayerInTotemRange
// Size: 0x128 (Inherited: 0x100)
struct UOwningPlayerInTotemRange : UAnyActorPairQueryRangeIsTrue {
	char pad_100[0x28]; // 0x100(0x28)

	void OnLevelReadyToPlay(); // Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay // (Final|Native|Protected) // @ game+0x4cef070
};

// Class DBDCompetence.OwningPlayerInDullTotemRange
// Size: 0x128 (Inherited: 0x128)
struct UOwningPlayerInDullTotemRange : UOwningPlayerInTotemRange {
};

// Class DBDCompetence.PharmacyPerk
// Size: 0x3e0 (Inherited: 0x3c8)
struct UPharmacyPerk : UPerk {
	struct UStatusEffect* _pharmacyEffectClass; // 0x3c8(0x08)
	float _searchSpeeds[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
};

// Class DBDCompetence.PlayerIsInExitArea
// Size: 0xd8 (Inherited: 0xd0)
struct UPlayerIsInExitArea : UGameplayModifierCondition {
	char pad_D0[0x8]; // 0xd0(0x08)

	void PlayerExitExitArea(); // Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea // (Final|Native|Private) // @ game+0x4cef140
	void PlayerEnterExitArea(); // Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea // (Final|Native|Private) // @ game+0x4cef120
};

// Class DBDCompetence.PlayWithYourFood
// Size: 0x3f0 (Inherited: 0x3c8)
struct UPlayWithYourFood : UPerk {
	float _movementSpeedPercentBuff[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct FGameplayTag> _basicAndSpecialAttackTags; // 0x3d8(0x10)
	float _chargeGainedCooldown; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)

	float GetMovementSpeedPercentBuffAtLevel(); // Function DBDCompetence.PlayWithYourFood.GetMovementSpeedPercentBuffAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetChargeGainedCooldown(); // Function DBDCompetence.PlayWithYourFood.GetChargeGainedCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceede0
	void Authority_OnChaseEnded(struct ADBDPlayer* Player, float chaseTime); // Function DBDCompetence.PlayWithYourFood.Authority_OnChaseEnded // (Final|Native|Private) // @ game+0x4cee700
};

// Class DBDCompetence.Poised
// Size: 0x3f0 (Inherited: 0x3c8)
struct UPoised : UPerk {
	float _activationTime[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x1c]; // 0x3d4(0x1c)

	float GetActivationTime(); // Function DBDCompetence.Poised.GetActivationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class DBDCompetence.Premonition
// Size: 0x400 (Inherited: 0x3c8)
struct UPremonition : UPerk {
	float _perkFrequency[0x3]; // 0x3c8(0x0c)
	float _perkEffectRange; // 0x3d4(0x04)
	char pad_3D8[0x28]; // 0x3d8(0x28)

	void Multicast_OnPerkActivate(); // Function DBDCompetence.Premonition.Multicast_OnPerkActivate // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4ceeef0
	float GetPerkFrequencyAtLevel(); // Function DBDCompetence.Premonition.GetPerkFrequencyAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetPerkEffectRange(); // Function DBDCompetence.Premonition.GetPerkEffectRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee90
	void Cosmetic_OnPerkActivate(); // Function DBDCompetence.Premonition.Cosmetic_OnPerkActivate // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDCompetence.ProveThyself
// Size: 0x480 (Inherited: 0x3c8)
struct UProveThyself : UPerk {
	struct FDBDTunableRowHandle _proveThyselfRange; // 0x3c8(0x28)
	float _speedPercentageAddedPerSurvivorRepairingInRange[0x3]; // 0x3f0(0x0c)
	char pad_3FC[0x64]; // 0x3fc(0x64)
	struct FForAllSurvivorsStatusEffectImposer _proveThyselfEffectImposer; // 0x460(0x18)
	char pad_478[0x8]; // 0x478(0x08)

	void OnSurvivorInOwnerRangeChanged(bool inRange); // Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged // (Final|Native|Private) // @ game+0x4cef090
};

// Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect
// Size: 0x358 (Inherited: 0x350)
struct URemoveOnOriginatingSurvivorGoneStatusEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)

	void Authority_OnSurvivorRemoved(struct ACamperPlayer* Survivor); // Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved // (Final|Native|Protected) // @ game+0x4ceec80
};

// Class DBDCompetence.ProveThyselfEffect
// Size: 0x410 (Inherited: 0x358)
struct UProveThyselfEffect : URemoveOnOriginatingSurvivorGoneStatusEffect {
	char pad_358[0x20]; // 0x358(0x20)
	struct FDBDTunableRowHandle _proveThyselfRange; // 0x378(0x28)
	char pad_3A0[0x70]; // 0x3a0(0x70)

	void OnInRangeOfOriginatorChanged(bool inRange, struct ACamperPlayer* Survivor); // Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged // (Native|Protected) // @ game+0x4ceefa0
};

// Class DBDCompetence.QuickAndQuiet
// Size: 0x400 (Inherited: 0x3c8)
struct UQuickAndQuiet : UPerk {
	struct FGameplayTagContainer _rushedActions; // 0x3c8(0x20)
	struct UStatusEffect* _silentRushedActionStatusEffect; // 0x3e8(0x08)
	float _cooldownDurationSeconds[0x3]; // 0x3f0(0x0c)
	char pad_3FC[0x4]; // 0x3fc(0x04)

	float GetCooldownDurationSecondsAtLevel(); // Function DBDCompetence.QuickAndQuiet.GetCooldownDurationSecondsAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee10
	void Authority_OnPlayerRushedActionFinished(); // Function DBDCompetence.QuickAndQuiet.Authority_OnPlayerRushedActionFinished // (Final|Native|Private) // @ game+0x4ceebb0
};

// Class DBDCompetence.ResiliencePerk
// Size: 0x3d8 (Inherited: 0x3c8)
struct UResiliencePerk : UPerk {
	float _actionSpeed[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

// Class DBDCompetence.Saboteur
// Size: 0x420 (Inherited: 0x3c8)
struct USaboteur : UPerk {
	float _cooldownDuration[0x3]; // 0x3c8(0x0c)
	float _revealHookDistance[0x3]; // 0x3d4(0x0c)
	struct FLinearColor _scourgeHooksAuraColour; // 0x3e0(0x10)
	struct UStatusEffect* _saboteurEffect; // 0x3f0(0x08)
	struct TArray<struct UMeatHookOutlineUpdateStrategy*> _revealedMeatHooksOultineStrategy; // 0x3f8(0x10)
	char pad_408[0x18]; // 0x408(0x18)

	struct FLinearColor GetScourgeHooksAuraColour(); // Function DBDCompetence.Saboteur.GetScourgeHooksAuraColour // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceeeb0
	float GetRevealHookDistanceAtLevel(); // Function DBDCompetence.Saboteur.GetRevealHookDistanceAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetCooldownDurationAtLevel(); // Function DBDCompetence.Saboteur.GetCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class DBDCompetence.SecondsToRateModifierBaseAddon
// Size: 0x3c8 (Inherited: 0x2b8)
struct USecondsToRateModifierBaseAddon : UItemAddon {
	struct FTunableStat _chargeRate; // 0x2b8(0x80)
	struct FTunableStat _maxCharge; // 0x338(0x80)
	float _secondsToAdd; // 0x3b8(0x04)
	struct FGameplayTag _rateModifierTagToCompute; // 0x3bc(0x0c)
};

// Class DBDCompetence.SecondWind
// Size: 0x418 (Inherited: 0x3c8)
struct USecondWind : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	enum class ESecondWindState _currentState; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float _amountHealed; // 0x3d4(0x04)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	float _numberOfHealStateToHealToActivate[0x3]; // 0x3e0(0x0c)
	float _durationOfHeal[0x3]; // 0x3ec(0x0c)
	struct UStatusEffect* _brokenStatusEffectClass; // 0x3f8(0x08)
	bool _applyBrokenEffect; // 0x400(0x01)
	char pad_401[0xf]; // 0x401(0x0f)
	struct UStatusEffect* _brokenStatusEffect; // 0x410(0x08)

	float GetNumberOfHealStateToHealToActivateAtLevel(); // Function DBDCompetence.SecondWind.GetNumberOfHealStateToHealToActivateAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd7e0
	float GetDurationOfHealAtLevel(); // Function DBDCompetence.SecondWind.GetDurationOfHealAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd690
	void Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, struct AActor* chargeInstigator, bool wasCoop, float DeltaTime); // Function DBDCompetence.SecondWind.Authority_OnHealProgress // (Final|Native|Private) // @ game+0x4cee970
};

// Class DBDCompetence.SelfCare
// Size: 0x3e0 (Inherited: 0x3c8)
struct USelfCare : UPerk {
	struct UStatusEffect* _selfHealNoMedkitSpeedPenaltyEffectClass; // 0x3c8(0x08)
	float _selfHealSpeedPenalty[0x3]; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
};

// Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
// Size: 0x2c8 (Inherited: 0x2b8)
struct USpawnEffectsOnAllSurvivorsBaseAddon : UItemAddon {
	bool _canCreateMultipleInstances; // 0x2b8(0x01)
	char pad_2B9[0xf]; // 0x2b9(0x0f)
};

// Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
// Size: 0x2d8 (Inherited: 0x2c8)
struct USimpleSpawnEffectsOnAllSurvivorsAddon : USpawnEffectsOnAllSurvivorsBaseAddon {
	struct TArray<struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams; // 0x2c8(0x10)
};

// Class DBDCompetence.SingleGateBlockerEffect
// Size: 0x3d8 (Inherited: 0x388)
struct USingleGateBlockerEffect : UGateBlockerEffect {
	float _distanceThreshold; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct AEscapeDoor* _gate; // 0x390(0x08)
	bool _isInRange; // 0x398(0x01)
	char pad_399[0x3f]; // 0x399(0x3f)
};

// Class DBDCompetence.SmallGame
// Size: 0x3f0 (Inherited: 0x3c8)
struct USmallGame : UPerk {
	float _detectionConeAngle[0x3]; // 0x3c8(0x0c)
	float _detectionConeAngleReductionRate[0x3]; // 0x3d4(0x0c)
	bool _totemDetected; // 0x3e0(0x01)
	char pad_3E1[0xf]; // 0x3e1(0x0f)

	void VFXTotemFound(); // Function DBDCompetence.SmallGame.VFXTotemFound // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SearchForTotems(); // Function DBDCompetence.SmallGame.SearchForTotems // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Multicast_TotemFound(); // Function DBDCompetence.SmallGame.Multicast_TotemFound // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x4ceeef0
	float GetDetectionConeAngle(); // Function DBDCompetence.SmallGame.GetDetectionConeAngle // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4110
	void Authority_SetTotemDetected(bool value); // Function DBDCompetence.SmallGame.Authority_SetTotemDetected // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x4cf3fb0
};

// Class DBDCompetence.SoleSurvivor
// Size: 0x428 (Inherited: 0x3c8)
struct USoleSurvivor : UPerk {
	struct UStatusEffect* _modifyActionSpeedWhenRepairingEffect; // 0x3c8(0x08)
	struct UStatusEffect* _modifyActionSpeedWhenOpeningGateOrHatchEffect; // 0x3d0(0x08)
	float _actionSpeedsRepairing[0x3]; // 0x3d8(0x0c)
	float _actionSpeedsOpeningGateOrHatch[0x3]; // 0x3e4(0x0c)
	float _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3]; // 0x3f0(0x0c)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<struct ACamperPlayer*> _otherSurvivors; // 0x400(0x10)
	char pad_410[0x18]; // 0x410(0x18)

	void Authority_OnSurvivorAdded(struct ACamperPlayer* Survivor); // Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded // (Final|Native|Private) // @ game+0x4cf3f20
};

// Class DBDCompetence.Solidarity
// Size: 0x400 (Inherited: 0x3c8)
struct USolidarity : UPerk {
	bool _allowMedkit; // 0x3c8(0x01)
	char pad_3C9[0xf]; // 0x3c9(0x0f)
	struct UChargeableComponent* _healerHPSlot; // 0x3d8(0x08)
	struct UChargeableComponent* _targetHPSlot; // 0x3e0(0x08)
	struct UChargeableInteractionDefinition* _healOtherInteraction; // 0x3e8(0x08)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void Authority_OnSkillCheckResponse(bool success, bool Bonus, struct ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, enum class ESkillCheckCustomType Type, float ChargeChange); // Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse // (Final|Native|Private) // @ game+0x4cf3ce0
	void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, struct AActor* chargeInstigator, bool wasCoop, float DeltaTime); // Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied // (Final|Native|Private) // @ game+0x4cf37e0
};

// Class DBDCompetence.SpawnStatusEffectsOnKillerAddon
// Size: 0x2d8 (Inherited: 0x2b8)
struct USpawnStatusEffectsOnKillerAddon : UItemAddon {
	struct TArray<struct FStatusEffectsProperties> _statusEffectsToSpawn; // 0x2b8(0x10)
	struct TArray<struct TWeakObjectPtr<struct UStatusEffect>> _imposedStatusEffects; // 0x2c8(0x10)
};

// Class DBDCompetence.SpiesFromTheShadows
// Size: 0x3d0 (Inherited: 0x3c8)
struct USpiesFromTheShadows : UPerk {
	float _cooldownDurationSecs; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)

	float GetCooldownDuration(); // Function DBDCompetence.SpiesFromTheShadows.GetCooldownDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
};

// Class DBDCompetence.SpineChillPerk
// Size: 0x448 (Inherited: 0x3c8)
struct USpineChillPerk : UPerk {
	struct UStatusEffect* _spineChillEffectClass; // 0x3c8(0x08)
	float _actionSpeed[0x3]; // 0x3d0(0x0c)
	float _lingerDuration; // 0x3dc(0x04)
	float _range; // 0x3e0(0x04)
	float _precisionAngleDegrees; // 0x3e4(0x04)
	bool _isInRange; // 0x3e8(0x01)
	char pad_3E9[0x5f]; // 0x3e9(0x5f)

	bool IsLookingTowards(); // Function DBDCompetence.SpineChillPerk.IsLookingTowards // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4570
	bool IsInRange(); // Function DBDCompetence.SpineChillPerk.IsInRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4540
	bool HasLineOfSight(); // Function DBDCompetence.SpineChillPerk.HasLineOfSight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf43a0
	float GetRange(); // Function DBDCompetence.SpineChillPerk.GetRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf41d0
	float GetLingerDuration(); // Function DBDCompetence.SpineChillPerk.GetLingerDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4170
	void Authority_OnIsLookingTowardsChanged(bool IsLookingTowards); // Function DBDCompetence.SpineChillPerk.Authority_OnIsLookingTowardsChanged // (Final|Native|Private) // @ game+0x4cf3ab0
	void Authority_OnIsInLineOfSightChanged(bool isInLineOfSight); // Function DBDCompetence.SpineChillPerk.Authority_OnIsInLineOfSightChanged // (Final|Native|Private) // @ game+0x4cf3a20
	void Authority_OnInRangeChanged(bool inRange); // Function DBDCompetence.SpineChillPerk.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x4cf3990
};

// Class DBDCompetence.SprintBurst
// Size: 0x3e8 (Inherited: 0x3c8)
struct USprintBurst : UPerk {
	float _exhaustionDuration[0x3]; // 0x3c8(0x0c)
	float _sprintDuration; // 0x3d4(0x04)
	struct UActivatableExhaustedEffect* _exhaustedEffect; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)

	float GetSprintDuration(); // Function DBDCompetence.SprintBurst.GetSprintDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6c0
	float GetExhaustedDuration(); // Function DBDCompetence.SprintBurst.GetExhaustedDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	void Authority_OnPerkFlagsChanged(struct FGameplayTag GameplayTag, bool isAdded); // Function DBDCompetence.SprintBurst.Authority_OnPerkFlagsChanged // (Final|Native|Private) // @ game+0x4cf3bf0
	void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving); // Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged // (Final|Native|Private) // @ game+0x4cf3b40
};

// Class DBDCompetence.StakeOutPerk
// Size: 0x400 (Inherited: 0x3c8)
struct UStakeOutPerk : UPerk {
	char pad_3C8[0x18]; // 0x3c8(0x18)
	struct UStatusEffect* _stakeOutStatusEffectClass; // 0x3e0(0x08)
	struct UStatusEffect* _stakeOutStatusEffect; // 0x3e8(0x08)
	int32_t _maxTokensByLevel[0x3]; // 0x3f0(0x0c)
	float _tokenChargeTime; // 0x3fc(0x04)

	void Server_ConsumeToken(); // Function DBDCompetence.StakeOutPerk.Server_ConsumeToken // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x4cf4600
	void Local_BroadcastConsumeToken(); // Function DBDCompetence.StakeOutPerk.Local_BroadcastConsumeToken // (Final|Native|Public|BlueprintCallable) // @ game+0x4cf45a0
	float GetTokenChargeTime(); // Function DBDCompetence.StakeOutPerk.GetTokenChargeTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4310
	float GetMaxTokensAtLevel(); // Function DBDCompetence.StakeOutPerk.GetMaxTokensAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf41a0
};

// Class DBDCompetence.StatsSystemUtilities
// Size: 0x30 (Inherited: 0x30)
struct UStatsSystemUtilities : UBlueprintFunctionLibrary {

	void InitStatBP(struct FTunableStat& theStat, struct TScriptInterface<IModifierProvider> ModifierProvider); // Function DBDCompetence.StatsSystemUtilities.InitStatBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4cf43d0
	float GetStatValueBP(struct FTunableStat& theStat); // Function DBDCompetence.StatsSystemUtilities.GetStatValueBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4cf4200
};

// Class DBDCompetence.StatusEffectOriginatorSubjectProvider
// Size: 0x48 (Inherited: 0x48)
struct UStatusEffectOriginatorSubjectProvider : UModifierSubjectProvider {
};

// Class DBDCompetence.Surge
// Size: 0x408 (Inherited: 0x3c8)
struct USurge : UPerk {
	float _zoneRadius[0x3]; // 0x3c8(0x0c)
	float _instantRegression[0x3]; // 0x3d4(0x0c)
	float _cooldownDuration[0x3]; // 0x3e0(0x0c)
	bool _hasCooldown; // 0x3ec(0x01)
	bool _useTerrorRadiusInsteadOfFixedDistance; // 0x3ed(0x01)
	char pad_3EE[0x1a]; // 0x3ee(0x1a)

	float GetZoneRadius(); // Function DBDCompetence.Surge.GetZoneRadius // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4370
	float GetInstantRegressionAtLevel(); // Function DBDCompetence.Surge.GetInstantRegressionAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	bool GetHasCooldown(); // Function DBDCompetence.Surge.GetHasCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4140
	float GetCooldownDurationAtLevel(); // Function DBDCompetence.Surge.GetCooldownDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd7e0
	void Client_TriggerEffects(struct TArray<struct AGenerator*> generators); // Function DBDCompetence.Surge.Client_TriggerEffects // (Final|Net|Native|Event|Private|NetClient) // @ game+0x4cf4040
};

// Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect
// Size: 0x378 (Inherited: 0x350)
struct USurvivorWasRecentlyUnhookedEffect : UStatusEffect {
	struct FDBDTunableRowHandle _survivorWasRecentlyUnhookedDuration; // 0x350(0x28)
};

// Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue
// Size: 0x108 (Inherited: 0x100)
struct UTestAnyActorPairQueryRangeIsTrue : UAnyActorPairQueryRangeIsTrue {
	struct UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent; // 0x100(0x08)
};

// Class DBDCompetence.TestCollectable
// Size: 0x4c8 (Inherited: 0x4c8)
struct ATestCollectable : ACollectable {
};

// Class DBDCompetence.TestDBDGameState
// Size: 0x8e0 (Inherited: 0x8e0)
struct ATestDBDGameState : ADBDGameState {
};

// Class DBDCompetence.TheMettleOfMan
// Size: 0x418 (Inherited: 0x3c8)
struct UTheMettleOfMan : UPerk {
	int32_t _tokenNeededToActivate[0x3]; // 0x3c8(0x0c)
	float _revealOutsideRange[0x3]; // 0x3d4(0x0c)
	bool _mustBeInjured; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UStatusEffect* _enduranceHighlightEffectClass; // 0x3e8(0x08)
	int32_t _numTokenSoFar; // 0x3f0(0x04)
	enum class ETheMettleOfManPhase _currentPhase; // 0x3f4(0x01)
	char pad_3F5[0xb]; // 0x3f5(0x0b)
	struct UStatusEffect* _revealToKillerEffect; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)

	void OnRep_NumTokenSoFar(); // Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar // (Final|Native|Private) // @ game+0x4cf45e0
	void OnRep_CurrentPhase(); // Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase // (Final|Native|Private) // @ game+0x4cf45e0
};

// Class DBDCompetence.ThrillingTremors
// Size: 0x428 (Inherited: 0x3c8)
struct UThrillingTremors : UPerk {
	int32_t _cooldownByLevel[0x3]; // 0x3c8(0x0c)
	float _durationByLevel[0x3]; // 0x3d4(0x0c)
	bool _disableWhenSurvivorPutDownOrUnhooked; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FLinearColor _generatorAuraColorForKiller; // 0x3e4(0x10)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct AGenerator*> _blockedGenerators; // 0x3f8(0x10)
	struct TArray<struct AGenerator*> _revealedGenerators; // 0x408(0x10)
	char pad_418[0x10]; // 0x418(0x10)

	void OnRep_BlockedGenerators(); // Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators // (Final|Native|Private) // @ game+0x4cf45c0
	float GetDurationAtLevel(); // Function DBDCompetence.ThrillingTremors.GetDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	int32_t GetCooldownAtLevel(); // Function DBDCompetence.ThrillingTremors.GetCooldownAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce8c10
};

// Class DBDCompetence.TimedObliviousEffect
// Size: 0x360 (Inherited: 0x360)
struct UTimedObliviousEffect : UObliviousEffect {
};

// Class DBDCompetence.TimedStatusEffect
// Size: 0x350 (Inherited: 0x350)
struct UTimedStatusEffect : UStatusEffect {
};

// Class DBDCompetence.TimerElapsedCondition
// Size: 0x110 (Inherited: 0xf8)
struct UTimerElapsedCondition : USingleModifierCondition {
	struct UTimerObject* _timer; // 0xf8(0x08)
	char pad_100[0x10]; // 0x100(0x10)
};

// Class DBDCompetence.Tinkerer
// Size: 0x440 (Inherited: 0x3c8)
struct UTinkerer : UPerk {
	struct UStatusEffect* _undetectableEffectClass; // 0x3c8(0x08)
	float _triggerThreshold; // 0x3d0(0x04)
	float _distanceThreshold; // 0x3d4(0x04)
	float _activationTime[0x3]; // 0x3d8(0x0c)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TMap<struct AActor*, float> _generatorActivationTimes; // 0x3e8(0x50)
	char pad_438[0x8]; // 0x438(0x08)

	float GetTriggerThreshold(); // Function DBDCompetence.Tinkerer.GetTriggerThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf4340
	float GetActivationTimeAtLevel(); // Function DBDCompetence.Tinkerer.GetActivationTimeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf40e0
	void Authority_OnUndetectableGeneratorInterrupt(struct ADBDPlayer* Instigator, struct ADBDPlayer* Target); // Function DBDCompetence.Tinkerer.Authority_OnUndetectableGeneratorInterrupt // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnUndetectableAttackSuccessNearActiveGenerator(struct ADBDPlayer* Instigator, struct ADBDPlayer* Target); // Function DBDCompetence.Tinkerer.Authority_OnUndetectableAttackSuccessNearActiveGenerator // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnLevelReadyToPlay(); // Function DBDCompetence.Tinkerer.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x4cf3bd0
	void Authority_OnGeneratorReachedThreshold(struct AGenerator* Generator); // Function DBDCompetence.Tinkerer.Authority_OnGeneratorReachedThreshold // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnGeneratorChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function DBDCompetence.Tinkerer.Authority_OnGeneratorChargePercentChanged // (Final|Native|Private) // @ game+0x4cf36d0
};

// Class DBDCompetence.UndetectableEffect
// Size: 0x350 (Inherited: 0x350)
struct UUndetectableEffect : UStatusEffect {
};

// Class DBDCompetence.UndetectableTimedEffect
// Size: 0x350 (Inherited: 0x350)
struct UUndetectableTimedEffect : UTimedStatusEffect {
};

// Class DBDCompetence.UnhookedMovementSpeedBonusEffect
// Size: 0x380 (Inherited: 0x350)
struct UUnhookedMovementSpeedBonusEffect : UStatusEffect {
	struct FDBDTunableRowHandle _movementSpeedBonusPercent; // 0x350(0x28)
	char pad_378[0x8]; // 0x378(0x08)
};

// Class DBDCompetence.WakeUpPerk
// Size: 0x3f0 (Inherited: 0x3c8)
struct UWakeUpPerk : UPerk {
	float _gateOpenSpeed[0x3]; // 0x3c8(0x0c)
	float _revealDistance; // 0x3d4(0x04)
	struct UStatusEffect* _wakeUpShowExitGateAuraEffectClass; // 0x3d8(0x08)
	struct UStatusEffect* _wakeUpShowPlayerOnGateAuraEffectClass; // 0x3e0(0x08)
	struct UStatusEffect* _wakeUpOpenGateEffectClass; // 0x3e8(0x08)
};

// Class DBDCompetence.WeddingRing
// Size: 0x2c8 (Inherited: 0x2b8)
struct UWeddingRing : UItemAddon {
	struct UStatusEffect* _increaseObsessionChanceStatusEffect; // 0x2b8(0x08)
	char pad_2C0[0x8]; // 0x2c0(0x08)
};

// Class DBDCompetence.WellMakeIt
// Size: 0x3e8 (Inherited: 0x3c8)
struct UWellMakeIt : UPerk {
	struct UStatusEffect* _wellMakeItNotificationEffectClass; // 0x3c8(0x08)
	struct UStatusEffect* _wellMakeItEffectClass; // 0x3d0(0x08)
	float _healingSpeed; // 0x3d8(0x04)
	float _perkDuration[0x3]; // 0x3dc(0x0c)

	float GetPerkDurationAtLevel(); // Function DBDCompetence.WellMakeIt.GetPerkDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf5600
	float GetHealingSpeed(); // Function DBDCompetence.WellMakeIt.GetHealingSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce2770
	void Authority_OnUnHook(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function DBDCompetence.WellMakeIt.Authority_OnUnHook // (Final|Native|Private|HasOutParms) // @ game+0x4cf54f0
};

// Class DBDCompetence.WereGonnaLiveForever
// Size: 0x3f0 (Inherited: 0x3c8)
struct UWereGonnaLiveForever : UPerk {
	float _healSpeedIncrease; // 0x3c8(0x04)
	float _enduranceEffectLevels[0x3]; // 0x3cc(0x0c)
	struct UStatusEffect* _healSpeedFromDyingStatusEffect; // 0x3d8(0x08)
	struct UStatusEffect* _enduranceEffect; // 0x3e0(0x08)
	bool _isPerkEnabled; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)

	void OnRep_PerkEnabled(); // Function DBDCompetence.WereGonnaLiveForever.OnRep_PerkEnabled // (Final|Native|Private) // @ game+0x4cf56e0
};

// Class DBDCompetence.Whispers
// Size: 0x458 (Inherited: 0x3c8)
struct UWhispers : UPerk {
	float _timeBetweenAudio; // 0x3c8(0x04)
	char pad_3CC[0x34]; // 0x3cc(0x34)
	int32_t _survivorsInRange; // 0x400(0x04)
	char pad_404[0x54]; // 0x404(0x54)

	void OnWhispersAudio(); // Function DBDCompetence.Whispers.OnWhispersAudio // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_SurvivorsInRange(); // Function DBDCompetence.Whispers.OnRep_SurvivorsInRange // (Final|Native|Private) // @ game+0x4cf5700
	void Multicast_FireAudioEvent(int32_t survivorsInRange); // Function DBDCompetence.Whispers.Multicast_FireAudioEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4cf5630
};

// Class DBDCompetence.YamaokaFamilyCrest
// Size: 0x2f8 (Inherited: 0x2b8)
struct UYamaokaFamilyCrest : UItemAddon {
	float _revealDuration; // 0x2b8(0x04)
	float _revealRange; // 0x2bc(0x04)
	struct UStatusEffect* _revealAuraToKillerEffectClass; // 0x2c0(0x08)
	struct TArray<struct ACamperPlayer*> _survivorsToReveal; // 0x2c8(0x10)
	char _addonActivationCount; // 0x2d8(0x01)
	char pad_2D9[0x1f]; // 0x2d9(0x1f)

	void RevealSurvivor(struct ACamperPlayer* survivorToReveal); // Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_AddonActivationCount(); // Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount // (Final|Native|Private) // @ game+0x4cf56c0
};

// Class DBDCompetence.ZanshinTactics
// Size: 0x3d8 (Inherited: 0x3c8)
struct UZanshinTactics : UPerk {
	float _cooldownDuration[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

