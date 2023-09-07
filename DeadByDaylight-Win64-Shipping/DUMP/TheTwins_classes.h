// Class TheTwins.Addon_K22Power_11
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_K22Power_11 : UOnEventBaseAddon {
	struct UStatusEffect* _hemorrhageStatusEffectClass; // 0x2c8(0x08)
};

// Class TheTwins.Addon_K22Power_12
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_K22Power_12 : USpawnEffectsOnAllSurvivorsBaseAddon {
	float _increaseRemoveTwinTime; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheTwins.Addon_K22Power_15
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K22Power_15 : UOnEventBaseAddon {
	struct UStatusEffect* _brokenStatusEffectClass; // 0x2c8(0x08)
	float _brokenDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
};

// Class TheTwins.Addon_K22Power_17
// Size: 0x2c8 (Inherited: 0x2c8)
struct UAddon_K22Power_17 : UOnEventBaseAddon {
};

// Class TheTwins.Addon_K22Power_18
// Size: 0x2f8 (Inherited: 0x2c8)
struct UAddon_K22Power_18 : USpawnEffectsOnAllSurvivorsBaseAddon {
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FDBDTunableRowHandle _lingerDuration; // 0x2d0(0x28)

	void Authority_OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet // (Final|Native|Private) // @ game+0x5a8d600
};

// Class TheTwins.Addon_K22Power_19
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K22Power_19 : UOnEventBaseAddon {
	struct UStatusEffect* _timedRevealToKillerStatusEffectClass; // 0x2c8(0x08)
	float _auraRevealedDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
};

// Class TheTwins.Addon_K22Power_20
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K22Power_20 : UOnEventBaseAddon {
	float _undetectableDuration; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UStatusEffect* _undetectableEffectClass; // 0x2d0(0x08)
};

// Class TheTwins.Addon_K22Power_21
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K22Power_21 : UOnEventBaseAddon {
	float _exposedDuration; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UStatusEffect* _exposedEffect; // 0x2d0(0x08)
};

// Class TheTwins.Addon_K22Power_9
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAddon_K22Power_9 : USpawnEffectsOnAllSurvivorsBaseAddon {
	float _increaseDestroyTwinTime; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class TheTwins.Addon_K22Power_10
// Size: 0x2d8 (Inherited: 0x2c8)
struct UAddon_K22Power_10 : UOnEventBaseAddon {
	struct UStatusEffect* _blindnessStatusEffectClass; // 0x2c8(0x08)
	float _blindnessDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
};

// Class TheTwins.AISkill_FindInteractable_CrushTwin
// Size: 0x200 (Inherited: 0x198)
struct UAISkill_FindInteractable_CrushTwin : UAISkill_FindInteractable {
	char pad_198[0xc]; // 0x198(0x0c)
	struct FAITunableParameter _crushVictorGoalWeight; // 0x1a4(0x10)
	struct FAITunableParameter _recoveringTimeEstimationErrorMin; // 0x1b4(0x10)
	struct FAITunableParameter _recoveringTimeEstimationErrorMax; // 0x1c4(0x10)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FDBDTunableRowHandle _destroyTwinMaxCharge; // 0x1d8(0x28)
};

// Class TheTwins.AISkill_Interaction_RemoveTwin
// Size: 0x1b8 (Inherited: 0x190)
struct UAISkill_Interaction_RemoveTwin : UAISkill_Interaction {
	struct FDBDTunableRowHandle _removeTwinMaxCharge; // 0x190(0x28)
};

// Class TheTwins.Appraisal
// Size: 0x3e0 (Inherited: 0x3c8)
struct UAppraisal : UPerk {
	float _chestSearchSpeedMultiplier[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0xc]; // 0x3d4(0x0c)
};

// Class TheTwins.PossessPlayer
// Size: 0x790 (Inherited: 0x760)
struct UPossessPlayer : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _possessThePlayerMaxCharge; // 0x758(0x28)
	char pad_788[0x8]; // 0x788(0x08)

	void Cosmetic_OnPossessStart(struct ADBDPlayer* Player); // Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnPossessCancelled(struct ADBDPlayer* Player); // Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheTwins.PossessTheConjoinedTwin
// Size: 0x800 (Inherited: 0x790)
struct UPossessTheConjoinedTwin : UPossessPlayer {
	char pad_790[0x70]; // 0x790(0x70)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.PossessTheConjoinedTwin.OnTwinSet // (Final|Native|Private) // @ game+0x5a93a30
	void OnPowerCollected(struct ADBDPlayer* collector); // Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected // (Final|Native|Private) // @ game+0x5a936a0
};

// Class TheTwins.AutoPossessTheConjoinedTwin
// Size: 0x800 (Inherited: 0x800)
struct UAutoPossessTheConjoinedTwin : UPossessTheConjoinedTwin {
};

// Class TheTwins.BaseTwinInspectLocker
// Size: 0x690 (Inherited: 0x660)
struct UBaseTwinInspectLocker : UBaseLockerInteraction {
	struct FDBDTunableRowHandle _inspectInteractionTime; // 0x660(0x28)
	char pad_688[0x8]; // 0x688(0x08)
};

// Class TheTwins.BeingPossessedInteraction
// Size: 0x7e0 (Inherited: 0x760)
struct UBeingPossessedInteraction : UChargeableInteractionDefinition {
	struct FTunableStat _beingPossessedMaxCharge; // 0x758(0x80)

	void OnLevelReadyToPlay(); // Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a8da90
};

// Class TheTwins.BrotherBlindFlashlightableLightingStrategy
// Size: 0x68 (Inherited: 0x50)
struct UBrotherBlindFlashlightableLightingStrategy : UBlindFlashlightableLightingStrategy {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TheTwins.ChargeTwinJumpInteraction
// Size: 0x8b0 (Inherited: 0x760)
struct UChargeTwinJumpInteraction : UChargeableInteractionDefinition {
	char pad_760[0x40]; // 0x760(0x40)
	struct FDBDTunableRowHandle _chargeJumpMaxCharge; // 0x7a0(0x28)
	struct FDBDTunableRowHandle _interactionViewPitchMax; // 0x7c8(0x28)
	struct FDBDTunableRowHandle _interactionViewPitchMin; // 0x7f0(0x28)
	char pad_818[0x30]; // 0x818(0x30)
	struct FDBDTunableRowHandle _cancelCooldownTime; // 0x848(0x28)
	char pad_870[0x40]; // 0x870(0x40)

	void Cosmetic_OnJumpReadyChanged(struct ADBDPlayer* twin, bool Ready); // Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheTwins.ConjoinedTwin
// Size: 0x13a0 (Inherited: 0x11a0)
struct AConjoinedTwin : ADBDPlayer {
	struct URangeToActorsTrackerComponent* _restrictedPossessionAreaTracker; // 0x1198(0x08)
	struct UTwinOutlineUpdateStrategy* _twinOutlineUpdateStrategy; // 0x11a0(0x08)
	struct UAkComponent* _twinLullabyAudioComponent; // 0x11a8(0x08)
	struct UKillerBlindingFXComponent* _twinBlindingFX; // 0x11b0(0x08)
	float TwinNoiseRange; // 0x11b8(0x04)
	struct UCustomizedAudioComponent* _customizedAudio; // 0x11c0(0x08)
	struct UDBDAttackerComponent* _attackerComponent; // 0x11c8(0x08)
	struct FDBDTunableRowHandle _maxWalkSpeed; // 0x11d0(0x28)
	struct UHitValidatorComponent* _hitValidator; // 0x11f8(0x08)
	struct UHitValidatorConfigurator* _hitValidationConfigurator; // 0x1200(0x08)
	struct FDBDTunableRowHandle _gravityScale; // 0x1208(0x28)
	struct UAnimationMontageSlave* _animationFollower; // 0x1230(0x08)
	char pad_123C[0x1c]; // 0x123c(0x1c)
	struct FDBDTunableRowHandle _revealDurationOnAttached; // 0x1258(0x28)
	struct UTwinFirstPersonViewComponent* _firstPersonViewComponent; // 0x1280(0x08)
	struct UFlashlightableComponent* _eyesFlashlightable; // 0x1288(0x08)
	struct UBlindFlashlightTargetFXComponent* _blindFlashlightTargetFXComponent; // 0x1290(0x08)
	struct UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent; // 0x1298(0x08)
	char pad_12A0[0x8]; // 0x12a0(0x08)
	struct FFastTimer _flashlightBlindEvasionScoreTimer; // 0x12a8(0x30)
	struct FDBDTunableRowHandle _flashlightEvasionScoreCooldown; // 0x12d8(0x28)
	struct UStatusEffect* _hideFootstepsEffect; // 0x1300(0x08)
	struct UStatusEffect* _twinsBloodhoundEffect; // 0x1308(0x08)
	struct UStatusEffect* _twinsRevealKillerAuraEffect; // 0x1310(0x08)
	struct UStatusEffect* _twinsDormantKillerInstinctEffect; // 0x1318(0x08)
	struct UStatusEffect* _twinsRevealAuraOnAttachedToSurvivorEffect; // 0x1320(0x08)
	struct UStatusEffect* _twinsRevealAuraOnRecallReadyEffect; // 0x1328(0x08)
	struct UStatusEffect* _timeDeafenedOnTriggerEffect; // 0x1330(0x08)
	struct UTwinPossessNegationEffectComponent* _twinPossessNegationEffectComponent; // 0x1338(0x08)
	char pad_1340[0x60]; // 0x1340(0x60)

	void Server_SendAttackInput(bool Pressed); // Function TheTwins.ConjoinedTwin.Server_SendAttackInput // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5a8dc50
	void OnFinishedPlayingEvent(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent // (Final|Native|Private|HasOutParms) // @ game+0x5a8d780
	void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled); // Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnFirecrackerInRangeBegin(struct FFirecrackerEffectData& effectData); // Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin // (Final|Native|Protected|HasOutParms) // @ game+0x5a8d450
};

// Class TheTwins.ConjoinedTwinAnimInstance
// Size: 0x600 (Inherited: 0x540)
struct UConjoinedTwinAnimInstance : UPlayerAnimInstance {
	struct AConjoinedTwin* _owningConjoinedTwin; // 0x540(0x08)
	bool _firstPersonView; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	float _forwardVelocity; // 0x54c(0x04)
	float _lateralVelocity; // 0x550(0x04)
	enum class EInteractionAnimation _interactionType; // 0x554(0x01)
	bool _isInAir; // 0x555(0x01)
	bool _isIdle; // 0x556(0x01)
	char pad_557[0x1]; // 0x557(0x01)
	float _idleTime; // 0x558(0x04)
	bool _isAttacking; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UDBDAttackerComponent* _attackerComponent; // 0x560(0x08)
	struct UTwinAttachmentComponent* _twinAttachmentComponent; // 0x568(0x08)
	struct UTwinLockerBlockerComponent* _twinLockerBlockerComponent; // 0x570(0x08)
	float _animYaw; // 0x578(0x04)
	float _animPitch; // 0x57c(0x04)
	bool _isSpectator; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float _animDirection; // 0x584(0x04)
	float _animSpeed; // 0x588(0x04)
	bool _isAttachedToSister; // 0x58c(0x01)
	bool _isAttachedToSurvivor; // 0x58d(0x01)
	bool _isAttachedToFemaleSurvivor; // 0x58e(0x01)
	bool _isChargingTwinJump; // 0x58f(0x01)
	bool _isPossessing; // 0x590(0x01)
	bool _isWakingUpFromPossess; // 0x591(0x01)
	bool _isDormant; // 0x592(0x01)
	bool _isBeingAutoPossessedAfterRelease; // 0x593(0x01)
	bool _isAttachedToLocker; // 0x594(0x01)
	enum class EAttackSubstate _attackState; // 0x595(0x01)
	char pad_596[0x6a]; // 0x596(0x6a)

	struct AConjoinedTwin* GetOwningConjoinedTwin(); // Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a8d720
};

// Class TheTwins.ConjoinedTwinInteractable
// Size: 0x398 (Inherited: 0x370)
struct AConjoinedTwinInteractable : APlayerInteractable {
	struct UChargeableComponent* _possessKillerChargeable; // 0x370(0x08)
	struct UChargeableComponent* _twinBeingPossessedChargeable; // 0x378(0x08)
	struct UChargeableComponent* _chargeTwinJumpChargeable; // 0x380(0x08)
	struct UChargeableComponent* _removeTwinChargeable; // 0x388(0x08)
	struct UChargeableComponent* _destroyTwinChargeable; // 0x390(0x08)
};

// Class TheTwins.ConjoinedTwinStateMachine
// Size: 0x130 (Inherited: 0x130)
struct UConjoinedTwinStateMachine : UPlayerStateMachine {
};

// Class TheTwins.CoupDeGrace
// Size: 0x3e8 (Inherited: 0x3c8)
struct UCoupDeGrace : UPerk {
	char _tokenGainOnRepair; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float _lungeAttackAddDurationMultiplier[0x3]; // 0x3cc(0x0c)
	struct TArray<struct AGenerator*> _completedGenerators; // 0x3d8(0x10)
};

// Class TheTwins.Deception
// Size: 0x408 (Inherited: 0x3c8)
struct UDeception : UPerk {
	float _noScratchMarksDuration[0x3]; // 0x3c8(0x0c)
	float _perkCooldownDuration[0x3]; // 0x3d4(0x0c)
	struct UStatusEffect* _deceptionStatusEffectClass; // 0x3e0(0x08)
	struct UStatusEffect* _statusEffect; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)
	struct UManualIconStrategy* _iconStrategy; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)

	void OnOwningPlayerFakedEnteringLockerCosmetic(); // Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheTwins.DestroyTwin
// Size: 0x7e0 (Inherited: 0x760)
struct UDestroyTwin : UChargeableInteractionDefinition {
	char pad_760[0x48]; // 0x760(0x48)
	struct FDBDTunableRowHandle _destroyTwinMaxCharge; // 0x7a8(0x28)
	char pad_7D0[0x10]; // 0x7d0(0x10)
};

// Class TheTwins.Hoarder
// Size: 0x418 (Inherited: 0x3c8)
struct UHoarder : UPerk {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct ASearchable*> _chests; // 0x3d0(0x10)
	float _camperInteractItemPickupRevealRange[0x3]; // 0x3e0(0x0c)
	int32_t _extraChestsSpawned[0x3]; // 0x3ec(0x0c)
	float _bubbleIndicatorLifetime[0x3]; // 0x3f8(0x0c)
	bool _showUniqueChestVisualPerState; // 0x404(0x01)
	char pad_405[0x13]; // 0x405(0x13)

	void OnItemRemovedFromPlayer(struct ACollectable* Item, enum class EInventoryType inventoryType); // Function TheTwins.Hoarder.OnItemRemovedFromPlayer // (Final|Native|Private) // @ game+0x5a8d9c0
	void OnItemAddedToPlayer(struct ACollectable* Item, enum class EInventoryType inventoryType, struct ACamperPlayer* Player); // Function TheTwins.Hoarder.OnItemAddedToPlayer // (Final|Native|Private) // @ game+0x5a8d8b0
	void Local_ThrowBubbleIndicator(enum class EPerkInteractionObjectType camperInteractionType, struct AActor* objectActor, struct ACamperPlayer* interactingCamperPlayer); // Function TheTwins.Hoarder.Local_ThrowBubbleIndicator // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetBubbleIndicatorLifetime(); // Function TheTwins.Hoarder.GetBubbleIndicatorLifetime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a8d690
};

// Class TheTwins.IsTwinRecallReady
// Size: 0xf0 (Inherited: 0xe8)
struct UIsTwinRecallReady : UEventDrivenModifierCondition {
	char pad_E8[0x8]; // 0xe8(0x08)

	void OnLevelReadyToPlay(); // Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a8dab0
};

// Class TheTwins.K22AchievementTagTeam
// Size: 0xd0 (Inherited: 0xb8)
struct UK22AchievementTagTeam : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheTwins.K22Power
// Size: 0x638 (Inherited: 0x4c8)
struct AK22Power : ACollectable {
	char pad_4C8[0x18]; // 0x4c8(0x18)
	struct UChargeableComponent* _releaseConjoinedTwinChargeable; // 0x4e0(0x08)
	struct UChargeableComponent* _possessConjoinedTwinChargeable; // 0x4e8(0x08)
	char pad_4F0[0x18]; // 0x4f0(0x18)
	struct AConjoinedTwin* _conjoinedTwin; // 0x508(0x08)
	struct AConjoinedTwin* _conjoinedTwinParadise; // 0x510(0x08)
	struct UPowerChargeComponent* _powerCharge; // 0x518(0x08)
	struct UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress; // 0x520(0x08)
	struct FDBDTunableRowHandle _powerMaxCharge; // 0x528(0x28)
	struct AConjoinedTwin* _conjoinedTwinClass; // 0x550(0x08)
	char pad_558[0x18]; // 0x558(0x18)
	struct FDBDTunableRowHandle _powerRechargeRate; // 0x570(0x28)
	struct FDBDTunableRowHandle _timeBeforeAutoDestroy; // 0x598(0x28)
	struct FDBDTunableRowHandle _timeBeforeRecallAvailable; // 0x5c0(0x28)
	char pad_5E8[0x50]; // 0x5e8(0x50)

	void OnRep_ConjoinedTwin(); // Function TheTwins.K22Power.OnRep_ConjoinedTwin // (Final|Native|Private) // @ game+0x5a8daf0
	void OnPowerChargeEmpty(); // Function TheTwins.K22Power.OnPowerChargeEmpty // (Final|Native|Private) // @ game+0x5a8dad0
	void OnFirstAttachmentToSister(); // Function TheTwins.K22Power.OnFirstAttachmentToSister // (Final|Native|Private) // @ game+0x5a8d890
	struct AConjoinedTwin* GetConjoinedTwin(); // Function TheTwins.K22Power.GetConjoinedTwin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a8d6c0
	void Authority_OnPossessTwinChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged // (Final|Native|Private) // @ game+0x5a8d4f0
	void Authority_OnDestroyTwinChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged // (Final|Native|Private) // @ game+0x5a8d340
};

// Class TheTwins.K22PowerChargePresentationItemProgressComponent
// Size: 0xe0 (Inherited: 0xc0)
struct UK22PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UPowerChargeComponent* _powerChargeComponent; // 0xc0(0x08)
	char pad_C8[0x18]; // 0xc8(0x18)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet // (Final|Native|Private) // @ game+0x5a8db30
};

// Class TheTwins.K22ScoreComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UK22ScoreComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TheTwins.KillerBeingPossessedInteraction
// Size: 0x7f0 (Inherited: 0x7e0)
struct UKillerBeingPossessedInteraction : UBeingPossessedInteraction {
	struct UCurveFloat* _wakeUpSpeedCurve; // 0x7e0(0x08)
	char pad_7E8[0x8]; // 0x7e8(0x08)
};

// Class TheTwins.PossessionComponent
// Size: 0x148 (Inherited: 0xb8)
struct UPossessionComponent : UActorComponent {
	char pad_B8[0x61]; // 0xb8(0x61)
	bool _startPossessed; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct AAIController* _emptyController; // 0x120(0x08)
	char pad_128[0x20]; // 0x128(0x20)

	void Server_StartPossessionOf(struct ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction); // Function TheTwins.PossessionComponent.Server_StartPossessionOf // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x5a93d10
	void Server_NotifyPossessionDone(); // Function TheTwins.PossessionComponent.Server_NotifyPossessionDone // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x5a93c70
	void Server_NotifyBeingPossessedInteractionStarted(); // Function TheTwins.PossessionComponent.Server_NotifyBeingPossessedInteractionStarted // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x4af1ac0
	void OnLevelReadyToPlay(); // Function TheTwins.PossessionComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a93510
	void Multicast_StartPossessionOf(struct ADBDPlayer* playerToPossess); // Function TheTwins.PossessionComponent.Multicast_StartPossessionOf // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x581dc20
	void Multicast_NotifyPossessionDone(); // Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ae0
	bool IsPossessed(); // Function TheTwins.PossessionComponent.IsPossessed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a92d20
	bool IsDormant(); // Function TheTwins.PossessionComponent.IsDormant // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a92cf0
	void CosmeticLocal_OnUncontrolled(struct ADBDPlayer* Player); // Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void CosmeticLocal_OnControlled(struct ADBDPlayer* Player); // Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnControlledChanged(struct ADBDPlayer* Player, bool IsControlled); // Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Client_WaitForBeingPossessedInteractionToStart(); // Function TheTwins.PossessionComponent.Client_WaitForBeingPossessedInteractionToStart // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x4aa7040
	void Client_StartStateMachineDriverChangeProcess(); // Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x552b110
};

// Class TheTwins.KillerPossessionComponent
// Size: 0x1a8 (Inherited: 0x148)
struct UKillerPossessionComponent : UPossessionComponent {
	bool _shouldDeactivateCollisionsWithSurvivors; // 0x148(0x01)
	char pad_149[0x37]; // 0x149(0x37)
	struct FDBDTunableRowHandle _timeBeforeCollisionsDeactivation; // 0x180(0x28)

	void OnRep_ShouldDeactivateCollisionsWithSurvivors(); // Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors // (Final|Native|Private) // @ game+0x5a8db10
};

// Class TheTwins.PossessNegationEffectComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UPossessNegationEffectComponent : UActorComponent {
	struct FMulticastInlineDelegate PlayCantPossessSound; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)

	void PlayCantPossessSound__DelegateSignature(); // DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnLevelReadyToPlay(); // Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay // (Native|Protected) // @ game+0x4af1ac0
};

// Class TheTwins.KillerPossessNegationEffectComponent
// Size: 0xf8 (Inherited: 0xd0)
struct UKillerPossessNegationEffectComponent : UPossessNegationEffectComponent {
	char pad_D0[0x28]; // 0xd0(0x28)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet // (Final|Native|Private) // @ game+0x5a8dbc0
};

// Class TheTwins.Oppression
// Size: 0x3e0 (Inherited: 0x3c8)
struct UOppression : UPerk {
	int32_t _nbGeneratorsAffectedByPerk[0x3]; // 0x3c8(0x0c)
	int32_t _perkCooldown[0x3]; // 0x3d4(0x0c)

	float GetPerkCooldownAtLevel(); // Function TheTwins.Oppression.GetPerkCooldownAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a8d750
	float GetNumberGensAffectedByPerkAtLevel(); // Function TheTwins.Oppression.GetNumberGensAffectedByPerkAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a8d6f0
};

// Class TheTwins.PossessTheKiller
// Size: 0x7d0 (Inherited: 0x790)
struct UPossessTheKiller : UPossessPlayer {
	char pad_790[0x40]; // 0x790(0x40)
};

// Class TheTwins.PowerStruggle
// Size: 0x3d8 (Inherited: 0x3c8)
struct UPowerStruggle : UPerk {
	float _wigglePercentToActivatePerk[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
};

// Class TheTwins.PushTwinOnLockerInteraction
// Size: 0x7c0 (Inherited: 0x760)
struct UPushTwinOnLockerInteraction : UChargeableInteractionDefinition {
	struct UChargeableComponent* _pushTwinOnLockerChargeable; // 0x758(0x08)
	struct FDBDTunableRowHandle _pushTwinOnLockerMaxCharge; // 0x760(0x28)
	char pad_790[0x30]; // 0x790(0x30)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet // (Final|Native|Private) // @ game+0x5a93ac0
	void OnRep_PushTwinOnLockerChargeable(); // Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable // (Final|Native|Private) // @ game+0x5a939d0
	void Authority_OnPlayerInLockerChanged(struct ADBDPlayer* previousPlayerInLocker, struct ADBDPlayer* newPlayerInLocker); // Function TheTwins.PushTwinOnLockerInteraction.Authority_OnPlayerInLockerChanged // (Final|Native|Private) // @ game+0x5a92970
};

// Class TheTwins.RecallTwin
// Size: 0x660 (Inherited: 0x630)
struct URecallTwin : UInteractionDefinition {
	char pad_630[0x30]; // 0x630(0x30)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.RecallTwin.OnTwinSet // (Final|Native|Private) // @ game+0x5a075e0
};

// Class TheTwins.ReleaseConjoinedTwin
// Size: 0x8d0 (Inherited: 0x760)
struct UReleaseConjoinedTwin : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _releaseMaxCharge; // 0x758(0x28)
	struct FTunableStat _releaseExitTime; // 0x780(0x80)
	char pad_808[0x38]; // 0x808(0x38)
	bool _releaseAnimationWentToTheEnd; // 0x840(0x01)
	char pad_841[0x8f]; // 0x841(0x8f)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.ReleaseConjoinedTwin.OnTwinSet // (Final|Native|Private) // @ game+0x5a93b50
	void OnRep_ReleaseAnimationWentToTheEnd(); // Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd // (Final|Native|Private) // @ game+0x5a939f0
	void OnPowerCollected(struct ADBDPlayer* collector); // Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected // (Final|Native|Private) // @ game+0x5a93730
	void OnKillerStunned(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned // (Final|Native|Private|HasOutParms) // @ game+0x5a93400
	void Cosmetic_OnReleaseTwinInteractionUpdateStart(struct ADBDPlayer* sister, struct AConjoinedTwin* brother); // Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnReleaseTwinInteractionUpdate(struct ADBDPlayer* sister, struct AConjoinedTwin* brother, float DeltaTime); // Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnReleaseChargeComplete(struct ADBDPlayer* sister, struct AConjoinedTwin* brother); // Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnReleaseCancelled(struct ADBDPlayer* sister, struct AConjoinedTwin* brother); // Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheTwins.RemoveTwin
// Size: 0x800 (Inherited: 0x760)
struct URemoveTwin : UChargeableInteractionDefinition {
	char pad_760[0x38]; // 0x760(0x38)
	struct FDBDTunableRowHandle _removeTwinMaxCharge; // 0x798(0x28)
	struct FDBDTunableRowHandle _removeTwinExitTime; // 0x7c0(0x28)
	float _brotherRemoveDistanceFromSurvivor; // 0x7e8(0x04)
	char pad_7EC[0x14]; // 0x7ec(0x14)

	void OnRemoveMontageEnd(struct FAnimationMontageDescriptor Montage, bool interrupted, struct ADBDPlayer* destroyingPlayer); // Function TheTwins.RemoveTwin.OnRemoveMontageEnd // (Final|Native|Private) // @ game+0x5a937c0
};

// Class TheTwins.SisterBlindFlashlightableLightingStrategy
// Size: 0x88 (Inherited: 0x50)
struct USisterBlindFlashlightableLightingStrategy : UBlindFlashlightableLightingStrategy {
	char pad_50[0x38]; // 0x50(0x38)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet // (Final|Native|Private) // @ game+0x5a93be0
};

// Class TheTwins.TheTwinsCheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UTheTwinsCheatComponent : UActorComponent {

	void Multicast_TrySendThePlayerBackInKiller(struct UTwinPossessionComponent* TwinPossessionComponent); // Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55700e0
	void DBD_TwinDestroyTheTwin(); // Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin // (Final|Exec|Native|Public) // @ game+0x4032ad0
};

// Class TheTwins.TwinAOELingeringStatusEffect
// Size: 0x458 (Inherited: 0x3b8)
struct UTwinAOELingeringStatusEffect : UBaseLingeringStatusEffect {
	struct FTunableStat _shriekingRange; // 0x3b8(0x80)
	char pad_438[0x20]; // 0x438(0x20)

	void Authority_OnInRangeChanged(bool inRange); // Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x59ea2c0
};

// Class TheTwins.TwinAttachmentComponent
// Size: 0x248 (Inherited: 0xb8)
struct UTwinAttachmentComponent : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct ADBDPlayer* _attachedPlayer; // 0x100(0x08)
	char pad_108[0x60]; // 0x108(0x60)
	struct UStatusEffect* _gateBlockerEffectClass; // 0x168(0x08)
	struct UStatusEffect* _graspBrokenEffectClass; // 0x170(0x08)
	struct UStatusEffect* _graspIncapacitatedEffectClass; // 0x178(0x08)
	struct UStatusEffect* _graspObliviousEffectClass; // 0x180(0x08)
	struct UStatusEffect* _graspKillerInstinctEffectClass; // 0x188(0x08)
	struct UStatusEffect* _gateBlockerStatusEffect; // 0x190(0x08)
	char pad_198[0x12]; // 0x198(0x12)
	bool _hasBeenDetachedBySurvivorDamageChanged; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
	struct FDBDTunableRowHandle _cantEscapeByGateLingerDuration; // 0x1b0(0x28)
	struct TMap<struct ADBDPlayer*, struct FFastTimer> _escapeBlockerLingerTimers; // 0x1d8(0x50)
	struct FGameplayTagContainer _notCancelableInteractionTags; // 0x228(0x20)

	void OnRep_AttachedPlayer(struct ADBDPlayer* oldAttachedPlayer); // Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer // (Final|Native|Private) // @ game+0x5a93940
	void OnMoriMontageEnd(struct FAnimationMontageDescriptor Montage, bool interrupted); // Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd // (Final|Native|Private) // @ game+0x5a93550
	void OnLevelReadyToPlay(); // Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a93530
	void OnAttachedSurvivorDamageStateChanged(enum class ECamperDamageState oldState, enum class ECamperDamageState NewState); // Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged // (Final|Native|Private) // @ game+0x5a931e0
	void Multicast_QuickDestroyTwin(); // Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4af1ac0
	bool IsAttachedToSurvivor(); // Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a92cc0
	bool IsAttachedToSister(); // Function TheTwins.TwinAttachmentComponent.IsAttachedToSister // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a92c90
	void Cosmetic_OnTwinDetachedFromSurvivor(struct ADBDPlayer* Survivor, struct ADBDPlayer* brother); // Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTwinDetachedFromSister(struct ADBDPlayer* sister, struct ADBDPlayer* brother); // Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTwinAttachedToSurvivor(struct ADBDPlayer* Survivor, struct ADBDPlayer* brother); // Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTwinAttachedToSister(struct ADBDPlayer* sister, struct ADBDPlayer* brother, bool isFirstAttachment); // Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnRemoveTwinChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged // (Final|Native|Private) // @ game+0x5a92a40
};

// Class TheTwins.TwinBaseAddon
// Size: 0x2c8 (Inherited: 0x2b8)
struct UTwinBaseAddon : UItemAddon {
	struct FName _statusEffectId; // 0x2b8(0x0c)
	float _customParam; // 0x2c4(0x04)

	void Authority_OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.TwinBaseAddon.Authority_OnTwinSet // (Final|Native|Private) // @ game+0x5a92b70
};

// Class TheTwins.TwinBaseKillerInstinctEffect
// Size: 0x498 (Inherited: 0x350)
struct UTwinBaseKillerInstinctEffect : UStatusEffect {
	struct FTunableStat _lullabyRange; // 0x350(0x80)
	struct FDBDTunableRowHandle _lingerDuration; // 0x3d0(0x28)
	char pad_3F8[0xa0]; // 0x3f8(0xa0)

	void Authority_OnInRangeChanged(bool inRange); // Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged // (Final|Native|Private) // @ game+0x5a928e0
};

// Class TheTwins.TwinBeingPossessedInteraction
// Size: 0x7e0 (Inherited: 0x7e0)
struct UTwinBeingPossessedInteraction : UBeingPossessedInteraction {
};

// Class TheTwins.TwinCharacterMovementComponent
// Size: 0xe50 (Inherited: 0xe30)
struct UTwinCharacterMovementComponent : UDBDCharacterMovementComponent {
	char pad_E30[0x20]; // 0xe30(0x20)
};

// Class TheTwins.TwinDestructionComponent
// Size: 0x1c0 (Inherited: 0xb8)
struct UTwinDestructionComponent : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)
	struct AActor* _huskClass; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
	struct FTransform _dyingTransform; // 0x110(0x30)
	char pad_140[0x78]; // 0x140(0x78)
	float _dyingFromSurvivorTranslation; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)

	void OnTwinQuickDestroy(struct AConjoinedTwin* owningTwin); // Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDyingMontageEnd(struct FAnimationMontageDescriptor Montage, bool interrupted); // Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd // (Final|Native|Private) // @ game+0x5a932b0
	void Cosmetic_OnTwinDestroyedFromSurvivorRemove(struct AConjoinedTwin* owningTwin); // Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTwinDestroyedFromKick(struct AConjoinedTwin* owningTwin); // Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnTwinQuickDestroyOver(); // Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x5a92b50
};

// Class TheTwins.TwinFirstPersonViewComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UTwinFirstPersonViewComponent : UFirstPersonViewComponent {
	char pad_C8[0x30]; // 0xc8(0x30)
};

// Class TheTwins.TwinHuskAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UTwinHuskAnimInstance : UAnimInstance {
	bool _isDeadFromSurvivorBack; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct APawn* _owningPawn; // 0x2c8(0x08)
	struct UTwinHuskStateComponent* _twinHuskStateComponent; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class TheTwins.TwinHuskStateComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UTwinHuskStateComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)

	bool IsDeadFromSurvivorBack(); // Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x550d570
};

// Class TheTwins.TwinInspectEmptyLocker
// Size: 0x690 (Inherited: 0x690)
struct UTwinInspectEmptyLocker : UBaseTwinInspectLocker {
};

// Class TheTwins.TwinInspectOccupiedLocker
// Size: 0x690 (Inherited: 0x690)
struct UTwinInspectOccupiedLocker : UBaseTwinInspectLocker {
};

// Class TheTwins.TwinJumpAttack
// Size: 0x480 (Inherited: 0x390)
struct UTwinJumpAttack : UPounceAttack {
	struct FDBDTunableRowHandle _jumpVelocity; // 0x390(0x28)
	struct UCurveFloat* _jumpAngleCurve; // 0x3b8(0x08)
	char pad_3C0[0x30]; // 0x3c0(0x30)
	struct FDBDTunableRowHandle _upDownObstructionAnglePrecision; // 0x3f0(0x28)
	struct FDBDTunableRowHandle _leftRightObstructionAnglePrecision; // 0x418(0x28)
	struct FDBDTunableRowHandle _authorizedLandingHeight; // 0x440(0x28)
	char pad_468[0x9]; // 0x468(0x09)
	bool _shouldTwinHaveJumpObjectType; // 0x471(0x01)
	char pad_472[0xe]; // 0x472(0x0e)

	void Server_StopJump(); // Function TheTwins.TwinJumpAttack.Server_StopJump // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5a93e10
	void Server_OnJumpStartTwin(); // Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5a93cc0
	void OnRep_ShouldTwinHaveJumpObjectType(); // Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType // (Final|Native|Private) // @ game+0x5a93a10
	void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation); // Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5a93150
	void Multicast_DestroyTwinOnWrongLanding(); // Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55bf2d0
	void Multicast_AttachToSurvivor(struct ADBDPlayer* survivorToAttachTo); // Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56de920
	void Cosmetic_OnJumpStarted(struct AConjoinedTwin* owningTwin); // Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnJumpObstructed(struct AConjoinedTwin* owningTwin, struct UPhysicalMaterial* PhysicalMaterial, struct FVector position, struct FVector Normal); // Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed // (BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnJumpLanded(struct AConjoinedTwin* owningTwin); // Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, struct AConjoinedTwin* owningTwin); // Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, struct AConjoinedTwin* twin); // Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath); // Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x5a92c00
};

// Class TheTwins.TwinJumpAttackOpenSubstate
// Size: 0x1d0 (Inherited: 0x130)
struct UTwinJumpAttackOpenSubstate : UPounceAttackOpenSubstate {
	char pad_130[0xa0]; // 0x130(0xa0)

	void Local_OnTwinOverlapEnter(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& Hit); // Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter // (Final|Native|Private|HasOutParms) // @ game+0x5a92f30
	void Local_OnTwinCapsuleHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x5a92d50
};

// Class TheTwins.TwinJumpAttackSuccessSubstate
// Size: 0x168 (Inherited: 0x118)
struct UTwinJumpAttackSuccessSubstate : UPounceAttackSuccessSubstate {
	struct FDBDTunableRowHandle _jumpSucceedAttachedCooldownTime; // 0x118(0x28)
	struct FDBDTunableRowHandle _jumpSucceedNotAttachedCooldownTime; // 0x140(0x28)
};

// Class TheTwins.TwinJumpAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UTwinJumpAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class TheTwins.TwinJumpAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UTwinJumpAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class TheTwins.TwinJumpAudioMutedEffect
// Size: 0x350 (Inherited: 0x350)
struct UTwinJumpAudioMutedEffect : UStatusEffect {

	void Cosmetic_OnTwinUnmuted(); // Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnTwinMuted(); // Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheTwins.TwinJumpTargetVisibleEffect
// Size: 0x368 (Inherited: 0x350)
struct UTwinJumpTargetVisibleEffect : UStatusEffect {
	struct AActor* _twinJumpTargetObject; // 0x350(0x08)
	struct AActor* _twinJumpTarget; // 0x358(0x08)
	struct USelectiveVisibilityComponent* _jumpTargetVisibility; // 0x360(0x08)

	void OnJumpTargetTick(struct FVector Location); // Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick // (Final|Native|Private|HasDefaults) // @ game+0x5a95840
	void OnHideTargetPosition(); // Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition // (Final|Native|Private) // @ game+0x5a95820
};

// Class TheTwins.TwinLockerBlockerComponent
// Size: 0x138 (Inherited: 0xb8)
struct UTwinLockerBlockerComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct UInteractionDefinition*> _interactionClasses; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
	struct TArray<struct UInteractionDefinition*> _interactionsToDisableOnLockerClasses; // 0xf0(0x10)
	char pad_100[0x38]; // 0x100(0x38)

	void OnPushedMontageStopped(struct FAnimationMontageDescriptor montageDescriptor); // Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped // (Final|Native|Private) // @ game+0x5a95c30
	void OnPushedMontageStarted(struct FAnimationMontageDescriptor montageDescriptor, float Rate); // Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted // (Final|Native|Private) // @ game+0x5a95af0
	void OnPushedMontageEnded(struct FAnimationMontageDescriptor montageDescriptor, bool interrupted); // Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded // (Final|Native|Private) // @ game+0x5a959a0
	void OnPlayerInLockerChanged(struct ADBDPlayer* previousPlayerInLocker, struct ADBDPlayer* newPlayerInLocker); // Function TheTwins.TwinLockerBlockerComponent.OnPlayerInLockerChanged // (Final|Native|Private) // @ game+0x5a958d0
	bool IsTwinAttachedToLocker(); // Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4696e90
	void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker); // Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnLevelReadyToPlay(); // Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a95770
};

// Class TheTwins.TwinLullabyRangeAdditiveEffect
// Size: 0x4a0 (Inherited: 0x350)
struct UTwinLullabyRangeAdditiveEffect : UStatusEffect {
	struct FDBDTunableRowHandle _defaultTwinLullabyDormantRange; // 0x350(0x28)
	struct FTunableStat _twinLullabyDormantRange; // 0x378(0x80)
	struct FTunableStat _twinLullabyAttachedRange; // 0x3f8(0x80)
	char pad_478[0x28]; // 0x478(0x28)
};

// Class TheTwins.TwinOutlineUpdateStrategy
// Size: 0x118 (Inherited: 0xc0)
struct UTwinOutlineUpdateStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _visibleColorForKiller; // 0xc0(0x10)
	char pad_D0[0x48]; // 0xd0(0x48)
};

// Class TheTwins.TwinPlacerComponent
// Size: 0x280 (Inherited: 0x270)
struct UTwinPlacerComponent : UObjectPlacerComponent {
	char pad_270[0x10]; // 0x270(0x10)
};

// Class TheTwins.TwinPossessionComponent
// Size: 0x168 (Inherited: 0x148)
struct UTwinPossessionComponent : UPossessionComponent {
	char pad_148[0x20]; // 0x148(0x20)
};

// Class TheTwins.TwinPossessNegationEffectComponent
// Size: 0xf8 (Inherited: 0xd0)
struct UTwinPossessNegationEffectComponent : UPossessNegationEffectComponent {
	char pad_D0[0x28]; // 0xd0(0x28)
};

// Class TheTwins.TwinRevealAuraOnAttachedToSurvivorStatusEffect
// Size: 0x380 (Inherited: 0x380)
struct UTwinRevealAuraOnAttachedToSurvivorStatusEffect : UActivateOnEventTimedStatusEffect {
};

// Class TheTwins.TwinsAnimInstance
// Size: 0x6b0 (Inherited: 0x610)
struct UTwinsAnimInstance : UKillerAnimInstance {
	bool _isDormant; // 0x610(0x01)
	bool _hasBrotherAttached; // 0x611(0x01)
	bool _isPossessing; // 0x612(0x01)
	bool _isWakingUpFromPossess; // 0x613(0x01)
	bool _isAutoPossessingAfterRelease; // 0x614(0x01)
	char pad_615[0x9b]; // 0x615(0x9b)
};

// Class TheTwins.TwinsSurvivorSubAnimInstance
// Size: 0x590 (Inherited: 0x550)
struct UTwinsSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	bool _isRemovingTwin; // 0x550(0x01)
	bool _isIdle; // 0x551(0x01)
	bool _isCrouching; // 0x552(0x01)
	char pad_553[0x3d]; // 0x553(0x3d)
};

// Class TheTwins.TwinStateHelperComponent
// Size: 0x110 (Inherited: 0xb8)
struct UTwinStateHelperComponent : UActorComponent {
	char pad_B8[0x58]; // 0xb8(0x58)
};

// Class TheTwins.TwinStunnableComponent
// Size: 0xe8 (Inherited: 0xb8)
struct UTwinStunnableComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
};

// Class TheTwins.TwinSubjectProvider
// Size: 0x50 (Inherited: 0x48)
struct UTwinSubjectProvider : UModifierSubjectProvider {
	char pad_48[0x8]; // 0x48(0x08)

	void OnTwinSet(struct AConjoinedTwin* twin); // Function TheTwins.TwinSubjectProvider.OnTwinSet // (Final|Native|Private) // @ game+0x4ce96d0
	void ListenToTwinSet(struct ASlasherPlayer* killer); // Function TheTwins.TwinSubjectProvider.ListenToTwinSet // (Final|Native|Private) // @ game+0x5a95790
};

