// Class TheK25.Addon_K25Power_17
// Size: 0x2d0 (Inherited: 0x2b8)
struct UAddon_K25Power_17 : UItemAddon {
	char pad_2B8[0x18]; // 0x2b8(0x18)
};

// Class TheK25.AISkill_FindCollectable_LamentConfiguration
// Size: 0x1c0 (Inherited: 0x1a0)
struct UAISkill_FindCollectable_LamentConfiguration : UAISkill_FindCollectable {
	struct FAITunableParameter StopChainHuntGoalWeight; // 0x1a0(0x10)
	struct FAITunableParameter PreemptiveFindLamentGoalWeight; // 0x1b0(0x10)
};

// Class TheK25.AISkill_InteractionBreakFreeFromChains
// Size: 0x1b8 (Inherited: 0x190)
struct UAISkill_InteractionBreakFreeFromChains : UAISkill_Interaction {
	struct FDBDTunableRowHandle _breakFreeFromChainsMaxCharge; // 0x190(0x28)
};

// Class TheK25.AISkill_InteractionUseItem_LamentConfiguration
// Size: 0x1d8 (Inherited: 0x1a0)
struct UAISkill_InteractionUseItem_LamentConfiguration : UAISkill_InteractionUseItem {
	struct FAITunableParameter SolveLamentThreshold; // 0x1a0(0x10)
	struct FDBDTunableRowHandle _solveLamentMaxCharge; // 0x1b0(0x28)
};

// Class TheK25.ChainAttachedGateBlockerEffect
// Size: 0x3b0 (Inherited: 0x388)
struct UChainAttachedGateBlockerEffect : UGateBlockerEffect {
	struct FDBDTunableRowHandle _blockGateLingeringTimeDyingState; // 0x388(0x28)

	void OnSurvivorDamageStateChanged(enum class ECamperDamageState oldState, enum class ECamperDamageState NewState); // Function TheK25.ChainAttachedGateBlockerEffect.OnSurvivorDamageStateChanged // (Final|Native|Private) // @ game+0x57e8690
};

// Class TheK25.IsChainHuntActive
// Size: 0x118 (Inherited: 0xe8)
struct UIsChainHuntActive : UEventDrivenModifierCondition {
	char pad_E8[0x30]; // 0xe8(0x30)
};

// Class TheK25.K25AnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UK25AnimInstance : UKillerAnimInstance {
	bool _isTeleporting; // 0x610(0x01)
	bool _isPossessingGateway; // 0x611(0x01)
	bool _isSelectingGatewayLocation; // 0x612(0x01)
	char pad_613[0xd]; // 0x613(0x0d)
};

// Class TheK25.K25AttackSubAnimInstance
// Size: 0x640 (Inherited: 0x620)
struct UK25AttackSubAnimInstance : UKillerAttackSubAnimInstance {
	bool _hasDownedTargetHoldingLamentConfiguration; // 0x620(0x01)
	char pad_621[0x1f]; // 0x621(0x1f)

	void OnAttackStart(enum class EAttackType attackType); // Function TheK25.K25AttackSubAnimInstance.OnAttackStart // (Final|Native|Protected) // @ game+0x57e83f0
};

// Class TheK25.K25Chain
// Size: 0x430 (Inherited: 0x230)
struct AK25Chain : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x238(0x10)
	struct UCurveFloat* _attachedToProjectileInfluenceCurve; // 0x248(0x08)
	struct UCurveFloat* _reelbackInfluenceCurve; // 0x250(0x08)
	struct UCurveFloat* _offsetMultiplierInfluenceCurve; // 0x258(0x08)
	char pad_260[0x50]; // 0x260(0x50)
	struct FDBDTunableRowHandle _reelingBackSpeed; // 0x2b0(0x28)
	float _chainOffsetMinValue; // 0x2d8(0x04)
	float _chainOffsetMaxValue; // 0x2dc(0x04)
	float _reelbackChainOffsetMinValue; // 0x2e0(0x04)
	float _reelbackChainOffsetMaxValue; // 0x2e4(0x04)
	float _chainInstanceSpacing; // 0x2e8(0x04)
	float _quickChainOffsetTimerLength; // 0x2ec(0x04)
	float _reachingSurvivorAnchorTime; // 0x2f0(0x04)
	struct FVector _chainScale; // 0x2f4(0x0c)
	float _chainOffsetTimerLength; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct TArray<struct FVector> _currentChainPoints; // 0x308(0x10)
	bool _isAcquiredFromPool; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float _sphereTraceRadius; // 0x31c(0x04)
	struct FVector _chainStartPosition; // 0x320(0x0c)
	struct FVector _reelBackPosition; // 0x32c(0x0c)
	struct FVector _reelbackStartPosition; // 0x338(0x0c)
	char pad_344[0x4]; // 0x344(0x04)
	struct AK25Projectile* _projectileAttachedTo; // 0x348(0x08)
	struct TWeakObjectPtr<struct AK25SurvivorChainAttachmentAnchor> _survivorAnchorAttachedTo; // 0x350(0x08)
	struct TWeakObjectPtr<struct AK25SurvivorChainAttachmentAnchor> _targetAnchorToReach; // 0x358(0x08)
	struct USplineComponent* _chainSplineComponent; // 0x360(0x08)
	struct UInstancedStaticMeshComponent* _chainInstancedMesh; // 0x368(0x08)
	struct UCurveFloat* _currentInfluenceCurve; // 0x370(0x08)
	struct FVector _chainCurveOffset; // 0x378(0x0c)
	enum class EK25ChainState _chainState; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct FFastTimer _curveOffsetStrengthTimer; // 0x388(0x30)
	struct FFastTimer _reelbackTimer; // 0x3b8(0x30)
	struct FFastTimer _reachSurvivorAnchorPositionTimer; // 0x3e8(0x30)
	struct TArray<struct FVector> _forcedPositions; // 0x418(0x10)
	enum class EK25ChainCreationStrategy _chainCreationStrategy; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)

	void SetSplineComponent(struct USplineComponent* Component); // Function TheK25.K25Chain.SetSplineComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x57e8b60
	void SetInstancedMeshComponent(struct UInstancedStaticMeshComponent* InstancedMesh); // Function TheK25.K25Chain.SetInstancedMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x57e8ad0
	bool IsAttachedToControlledProjectile(); // Function TheK25.K25Chain.IsAttachedToControlledProjectile // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7e30
	struct AK25SurvivorChainAttachmentAnchor* GetSurvivorChainAttachmentAnchor(); // Function TheK25.K25Chain.GetSurvivorChainAttachmentAnchor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7e00
	struct FVector GetChainStartLocation(); // Function TheK25.K25Chain.GetChainStartLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7d00
	struct FVector GetChainEndLocation(); // Function TheK25.K25Chain.GetChainEndLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7cc0
	void Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction); // Function TheK25.K25Chain.Cosmetic_OnSurvivorStoppedRemovingChainSFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnSurvivorStartedRemovingChainSFX(); // Function TheK25.K25Chain.Cosmetic_OnSurvivorStartedRemovingChainSFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX(); // Function TheK25.K25Chain.Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainUnleashedWithProjectile(); // Function TheK25.K25Chain.Cosmetic_OnChainUnleashedWithProjectile // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainStartedToReelback(); // Function TheK25.K25Chain.Cosmetic_OnChainStartedToReelback // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainDisappears(); // Function TheK25.K25Chain.Cosmetic_OnChainDisappears // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainDetachedFromSurvivor(enum class EK25ChainDetachmentReason detachmentReason); // Function TheK25.K25Chain.Cosmetic_OnChainDetachedFromSurvivor // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint); // Function TheK25.K25Chain.Cosmetic_OnChainAttachedToSurvivor // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainAppears(); // Function TheK25.K25Chain.Cosmetic_OnChainAppears // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25ChainAttachedStatusEffect
// Size: 0x368 (Inherited: 0x350)
struct UK25ChainAttachedStatusEffect : UStatusEffect {
	struct UCurveFloat* _percentageReductionSpeedPerChainCurve; // 0x350(0x08)
	struct UK25SurvivorChainAttachmentComponent* _chainAttachmentComponent; // 0x358(0x08)
	int32_t _cachedNumberOfChainsAttached; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)

	void OnRep_ChainAttachementComponent(); // Function TheK25.K25ChainAttachedStatusEffect.OnRep_ChainAttachementComponent // (Final|Native|Private) // @ game+0x57e8650
};

// Class TheK25.K25ChainAttachmentReplicationComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK25ChainAttachmentReplicationComponent : UActorComponent {

	void Multicast_StartChainReelback(struct AK25Chain* chainToAttach); // Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_StartChainReelback // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55700e0
	void Multicast_LaunchInstantHitChainTowardsSurvivor(struct AK25Chain* newChainToAttach, struct AK25SurvivorChainAttachmentAnchor* targetAnchor, struct FVector StartPosition); // Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_LaunchInstantHitChainTowardsSurvivor // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x57e81b0
	void Multicast_DetachChains(struct UK25SurvivorChainAttachmentComponent* chainAttachementComponent, struct TArray<struct AK25Chain*> chainsToDetach, enum class EK25ChainDetachmentReason detachmentReason, struct TArray<struct AK25Chain*> chainsAttached); // Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_DetachChains // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57e8020
	void Multicast_AttachChainToAnchor(struct UK25SurvivorChainAttachmentComponent* chainAttachementComponent, struct AK25Chain* chainToAttach, struct AK25SurvivorChainAttachmentAnchor* anchorPoint); // Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_AttachChainToAnchor // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57e7f10
};

// Class TheK25.K25ChainHuntEffectsComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UK25ChainHuntEffectsComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)

	struct ADBDPlayer* GetOwningPlayer(); // Function TheK25.K25ChainHuntEffectsComponent.GetOwningPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7da0
	void Cosmetic_TriggerChainHuntActivationSFX(); // Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_TriggerChainHuntActivationSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_DeactivateChainHuntEffects(); // Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_DeactivateChainHuntEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ActivateChainHuntEffects(bool hasChainHuntStarted); // Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_ActivateChainHuntEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25ChainLocomotionSurvivorAnimInstance
// Size: 0x6d0 (Inherited: 0x550)
struct UK25ChainLocomotionSurvivorAnimInstance : UBaseSurvivorAnimInstance {
	bool _hasChainsAttached; // 0x550(0x01)
	bool _isPerformingBreakChainInteraction; // 0x551(0x01)
	char pad_552[0x2]; // 0x552(0x02)
	float _forwardDirectionDotProductResult; // 0x554(0x04)
	float _lateralDirectionDotProductResult; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct AK25Chain* _currentChainBeingDetached; // 0x560(0x08)
	struct FK25ChainAnchorAnimationData _leftHandAttachmentData; // 0x568(0x18)
	struct FK25ChainAnchorAnimationData _rightHandAttachmentData; // 0x580(0x18)
	struct FK25ChainAnchorAnimationData _leftShoulderAttachmentData; // 0x598(0x18)
	struct FK25ChainAnchorAnimationData _rightShoulderAttachmentData; // 0x5b0(0x18)
	struct FK25ChainAnchorAnimationData _stomachAttachmentData; // 0x5c8(0x18)
	struct FK25ChainAnchorAnimationData _backAttachmentData; // 0x5e0(0x18)
	enum class EK25ChainAnchorPointDirection _chainDirection; // 0x5f8(0x01)
	bool _hasBrokenFreeFromChain; // 0x5f9(0x01)
	char pad_5FA[0x2]; // 0x5fa(0x02)
	float _hasBrokenFreeTime; // 0x5fc(0x04)
	bool _hasBeenHitByChain; // 0x600(0x01)
	bool _isIdle; // 0x601(0x01)
	bool _isCrouched; // 0x602(0x01)
	bool _isMale; // 0x603(0x01)
	bool _isBeingCarried; // 0x604(0x01)
	char pad_605[0x3]; // 0x605(0x03)
	float _hasBeenHitByChainTime; // 0x608(0x04)
	struct FName _hitChainName; // 0x60c(0x0c)
	struct FName _detachedChainAnchorName; // 0x618(0x0c)
	char pad_624[0xac]; // 0x624(0xac)

	void OnChainDetached(struct AK25Chain* chain, struct AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, enum class EK25ChainDetachmentReason detachmentReason); // Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainDetached // (Final|Native|Protected) // @ game+0x57e8540
	void OnChainAttached(struct AK25Chain* chain, struct AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor); // Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainAttached // (Final|Native|Protected) // @ game+0x57e8470
};

// Class TheK25.K25ChainPool
// Size: 0x118 (Inherited: 0x118)
struct UK25ChainPool : UAuthoritativeActorPoolComponent {
};

// Class TheK25.K25ChainStrike_IsGatewayOrientationTimerExpired
// Size: 0x38 (Inherited: 0x38)
struct UK25ChainStrike_IsGatewayOrientationTimerExpired : UFSM_Condition {
};

// Class TheK25.K25ChainStrike_IsGatewayPlacementValidCondition
// Size: 0x38 (Inherited: 0x38)
struct UK25ChainStrike_IsGatewayPlacementValidCondition : UFSM_Condition {
};

// Class TheK25.K25ChainStrike_IsPlayerPressingInputCondition
// Size: 0x40 (Inherited: 0x38)
struct UK25ChainStrike_IsPlayerPressingInputCondition : UFSM_Condition {
	enum class EInputInteractionType _inputType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class TheK25.K25ChainStrikeBaseState
// Size: 0xc8 (Inherited: 0x78)
struct UK25ChainStrikeBaseState : UFSM_State {
	struct TSet<struct FName> _secondaryInteractionIDs; // 0x78(0x50)

	struct ADBDPlayer* GetPlayerOwner(); // Function TheK25.K25ChainStrikeBaseState.GetPlayerOwner // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7dd0
	struct AK25Power* GetK25Power(); // Function TheK25.K25ChainStrikeBaseState.GetK25Power // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7d70
	struct AK25Gateway* GetK25Gateway(); // Function TheK25.K25ChainStrikeBaseState.GetK25Gateway // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57e7d40
};

// Class TheK25.K25ChainStrikeImmunityEffect
// Size: 0x3a8 (Inherited: 0x380)
struct UK25ChainStrikeImmunityEffect : UActivateOnEventTimedStatusEffect {
	struct FDBDTunableRowHandle _chainStrikeImmunityDuration; // 0x380(0x28)
};

// Class TheK25.K25ChainStrikeInteraction
// Size: 0x990 (Inherited: 0x760)
struct UK25ChainStrikeInteraction : UChargeableInteractionDefinition {
	struct UFiniteStateMachine* _chainStrikeStateMachineclass; // 0x758(0x08)
	float _repossessFadeOutTime; // 0x760(0x04)
	struct FDBDTunableRowHandle _repossessFadeInTime; // 0x768(0x28)
	struct UCurveFloat* _gatewayPossessionFovModifierCurve; // 0x790(0x08)
	struct UCurveFloat* _controlledProjectilePossessionFovModifierCurve; // 0x798(0x08)
	struct FDBDTunableRowHandle _chargeTimeAfterGatewayPlacementCancelled; // 0x7a0(0x28)
	struct FDBDTunableRowHandle _chargeTimeAfterGatewayPossessionCancelled; // 0x7c8(0x28)
	struct FDBDTunableRowHandle _chargeTimeAfterControlledChainShot; // 0x7f0(0x28)
	struct FDBDTunableRowHandle _gatewayPossessionFovChangeDuration; // 0x818(0x28)
	struct FDBDTunableRowHandle _gatewayPossessionCameraPanTime; // 0x840(0x28)
	struct FDBDTunableRowHandle _controlledProjectilePossessionCameraPanTime; // 0x868(0x28)
	struct FDBDTunableRowHandle _controlledProjectilePossessionFovTimeChangeDuration; // 0x890(0x28)
	struct UFiniteStateMachine* _stateMachine; // 0x8b8(0x08)
	bool _authority_shouldIncrementChargeableComponent; // 0x8c0(0x01)
	char pad_8C5[0x64]; // 0x8c5(0x64)
	enum class EChainStrikeCameraViewTarget _chainStrikeCameraViewTarget; // 0x929(0x01)
	bool _hasHitSurvivor; // 0x92a(0x01)
	char pad_92B[0x65]; // 0x92b(0x65)

	void Server_UpdateCameraViewTargetForObservers(enum class EChainStrikeCameraViewTarget NewViewTarget); // Function TheK25.K25ChainStrikeInteraction.Server_UpdateCameraViewTargetForObservers // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x57e8a50
	void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement); // Function TheK25.K25ChainStrikeInteraction.Server_SetShouldIncrementChargeableComponent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57e89c0
	void Server_SetFallbackEndReason(enum class EChainStrikeEndReason chainStrikeEndReason); // Function TheK25.K25ChainStrikeInteraction.Server_SetFallbackEndReason // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57e8940
	void Server_RemoveStateTagFromPlayer(struct FGameplayTag Tag); // Function TheK25.K25ChainStrikeInteraction.Server_RemoveStateTagFromPlayer // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x57e8850
	void Server_AddStateTagToPlayer(struct FGameplayTag Tag); // Function TheK25.K25ChainStrikeInteraction.Server_AddStateTagToPlayer // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x57e8760
	void OnRep_ChainStrikeCameraViewTarget(); // Function TheK25.K25ChainStrikeInteraction.OnRep_ChainStrikeCameraViewTarget // (Final|Native|Private) // @ game+0x57e8670
	void Multicast_SetFallbackEndReason(enum class EChainStrikeEndReason chainStrikeEndReason); // Function TheK25.K25ChainStrikeInteraction.Multicast_SetFallbackEndReason // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x57e8370
	void Multicast_RemoveStateTagFromPlayer(struct FGameplayTag Tag); // Function TheK25.K25ChainStrikeInteraction.Multicast_RemoveStateTagFromPlayer // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57e82c0
	void Multicast_AddStateTagToPlayer(struct FGameplayTag Tag); // Function TheK25.K25ChainStrikeInteraction.Multicast_AddStateTagToPlayer // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57e7e60
	void Cosmetic_TriggerKillerRepossessionFadeOutEffects(struct ASlasherPlayer* killer, bool preventAudioTriggers); // Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeOutEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerKillerRepossessionFadeInEffects(struct ASlasherPlayer* killer, bool hasHitSurvivor, bool preventAudioTriggers); // Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeInEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayPossessionEffects(float TransitionTime); // Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerGatewayPossessionEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_ResetAllVignetteValues(struct ASlasherPlayer* killer); // Function TheK25.K25ChainStrikeInteraction.Cosmetic_ResetAllVignetteValues // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25ChainStrikeReplicationComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK25ChainStrikeReplicationComponent : UActorComponent {

	void Server_EndChainStrike(struct UK25ChainStrikeInteraction* Interaction, enum class EChainStrikeEndReason endReason); // Function TheK25.K25ChainStrikeReplicationComponent.Server_EndChainStrike // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x54a1a20
	void Multicast_EndChainStrike(struct UK25ChainStrikeInteraction* Interaction, enum class EChainStrikeEndReason endReason); // Function TheK25.K25ChainStrikeReplicationComponent.Multicast_EndChainStrike // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55194b0
};

// Class TheK25.K25ChainStrikeState_EndChainStrike
// Size: 0xd0 (Inherited: 0xc8)
struct UK25ChainStrikeState_EndChainStrike : UK25ChainStrikeBaseState {
	enum class EChainStrikeEndReason _chainStrikeEndReason; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class TheK25.K25ChainStrikeState_GatewayPlacement
// Size: 0xc8 (Inherited: 0xc8)
struct UK25ChainStrikeState_GatewayPlacement : UK25ChainStrikeBaseState {
};

// Class TheK25.K25ChainStrikeState_OutOfBodyState
// Size: 0xf0 (Inherited: 0xc8)
struct UK25ChainStrikeState_OutOfBodyState : UK25ChainStrikeBaseState {
	struct FDBDTunableRowHandle _fovTimeChangeDuration; // 0xc8(0x28)
};

// Class TheK25.K25ChainStrikeState_PossessGateway
// Size: 0xd8 (Inherited: 0xc8)
struct UK25ChainStrikeState_PossessGateway : UK25ChainStrikeBaseState {
	char pad_C8[0x10]; // 0xc8(0x10)
};

// Class TheK25.K25ChainStrikeState_SelectGatewayOrientation
// Size: 0xe0 (Inherited: 0xc8)
struct UK25ChainStrikeState_SelectGatewayOrientation : UK25ChainStrikeBaseState {
	char pad_C8[0x18]; // 0xc8(0x18)
};

// Class TheK25.K25ChainStrikeState_ShootControlledProjectile
// Size: 0x108 (Inherited: 0xc8)
struct UK25ChainStrikeState_ShootControlledProjectile : UK25ChainStrikeBaseState {
	float _minimumThrottleTimeForInputServerCall; // 0xc8(0x04)
	float _inputResetSpeed; // 0xcc(0x04)
	char pad_D0[0x38]; // 0xd0(0x38)
};

// Class TheK25.K25CheatComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK25CheatComponent : UActorComponent {

	void DBD_K25TriggerUncontrolledChainsOnLocalSurvivor(int32_t numbChains); // Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnLocalSurvivor // (Final|Exec|Native|Public) // @ game+0x46a25e0
	void DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition(float X, float Y, float Z, int32_t numbChains); // Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition // (Final|Exec|Native|Public) // @ game+0x57ec1e0
	void DBD_K25TriggerUncontrolledChainsOnAllSurvivors(int32_t numbChains); // Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnAllSurvivors // (Final|Exec|Native|Public) // @ game+0x46a25e0
	void DBD_K25ShowAllLamentConfigurationSpawnPoints(float timeDisplayed); // Function TheK25.K25CheatComponent.DBD_K25ShowAllLamentConfigurationSpawnPoints // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_K25SetPowerNoCooldown(bool noCooldown); // Function TheK25.K25CheatComponent.DBD_K25SetPowerNoCooldown // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_K25RevealLamentConfigurationLocation(float timeDisplayed); // Function TheK25.K25CheatComponent.DBD_K25RevealLamentConfigurationLocation // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_K25ForceRespawnLamentConfiguration(); // Function TheK25.K25CheatComponent.DBD_K25ForceRespawnLamentConfiguration // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_K25ForceRemoveAllChainsOnLocalSurvivor(); // Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnLocalSurvivor // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition(float X, float Y, float Z); // Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition // (Final|Exec|Native|Public) // @ game+0x54c7b10
	void DBD_K25ForceRemoveAllChainsOnAllSurvivors(); // Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnAllSurvivors // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_K25ComeToPositionLamentConfiguration(float X, float Y, float Z); // Function TheK25.K25CheatComponent.DBD_K25ComeToPositionLamentConfiguration // (Final|Exec|Native|Public) // @ game+0x54c7b10
	void DBD_K25ComeToMeLamentConfiguration(); // Function TheK25.K25CheatComponent.DBD_K25ComeToMeLamentConfiguration // (Final|Exec|Native|Public) // @ game+0x4032ad0
};

// Class TheK25.K25CollectLamentConfigurationInteraction
// Size: 0x660 (Inherited: 0x660)
struct UK25CollectLamentConfigurationInteraction : UCollectItemInteraction {
};

// Class TheK25.K25Projectile
// Size: 0x430 (Inherited: 0x338)
struct AK25Projectile : AKillerProjectile {
	char pad_338[0x48]; // 0x338(0x48)
	struct UStaticMeshComponent* _staticMesh; // 0x380(0x08)
	struct UPrimitiveComponent* _characterCollider; // 0x388(0x08)
	struct UPrimitiveComponent* _environmentCollider; // 0x390(0x08)
	struct UKillerProjectileDodgeComponent* _projectileDodgeComponent; // 0x398(0x08)
	struct FLaunchInfo _launchInfo; // 0x3a0(0x1c)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct AK25Chain* _attachedChain; // 0x3c0(0x08)
	float _timeIgnoreSlasherCollision; // 0x3c8(0x04)
	bool _isActive; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct FK25ProjectileDeactivationData _lastDeactivationData; // 0x3d0(0x20)
	char pad_3F0[0x40]; // 0x3f0(0x40)

	void Server_RequestDisableProjectile(enum class EK25ProjectileDeactivateReason deactivateReason); // Function TheK25.K25Projectile.Server_RequestDisableProjectile // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57f0b10
	void OnProjectileStopped(struct FHitResult& Result); // Function TheK25.K25Projectile.OnProjectileStopped // (Final|Native|Protected|HasOutParms) // @ game+0x57f08d0
	struct UDBDProjectileMovementComponent* GetMovementComponent(); // Function TheK25.K25Projectile.GetMovementComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f0120
	struct FVector GetChainAttachmentLocation(); // Function TheK25.K25Projectile.GetChainAttachmentLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x57effc0
	void Cosmetic_OnProjectileDeactivated(struct FK25ProjectileDeactivationData& deactivationData); // Function TheK25.K25Projectile.Cosmetic_OnProjectileDeactivated // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnProjectileActivated(); // Function TheK25.K25Projectile.Cosmetic_OnProjectileActivated // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25ControlledProjectile
// Size: 0x6a0 (Inherited: 0x430)
struct AK25ControlledProjectile : AK25Projectile {
	char pad_430[0x8]; // 0x430(0x08)
	struct UStaticMeshComponent* _killerViewProjectileStaticMesh; // 0x438(0x08)
	struct USpringArmComponent* _killerSpringArm; // 0x440(0x08)
	struct UCameraComponent* _killerCameraPlacement; // 0x448(0x08)
	float _pitchClampAngle; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct FTunableStat _maximumYawTurnRate; // 0x458(0x80)
	struct FTunableStat _maximumPitchTurnRate; // 0x4d8(0x80)
	struct FDBDTunableRowHandle _cameraRollSpeedMultiplier; // 0x558(0x28)
	struct FDBDTunableRowHandle _cameraRollGoBackSpeedMultiplier; // 0x580(0x28)
	struct FDBDTunableRowHandle _cameraMaximumRollDegree; // 0x5a8(0x28)
	struct FTunableStat _numbExtraChainsOnControlledProjectileHit; // 0x5d0(0x80)
	struct UK25ControlledProjectileMovementComponent* _controlledProjectileMovementComponent; // 0x650(0x08)
	float _currentRoll; // 0x658(0x04)
	float _targetRoll; // 0x65c(0x04)
	char pad_660[0x30]; // 0x660(0x30)
	struct FVector_NetQuantize _lastAppliedAngularVelocity; // 0x690(0x0c)
	char pad_69C[0x4]; // 0x69c(0x04)

	void Server_ProcessYawInput(float DeltaTime, float scaledInput); // Function TheK25.K25ControlledProjectile.Server_ProcessYawInput // (Net|Native|Event|Public|NetServer) // @ game+0x57ec970
	void Server_ProcessPitchInput(float DeltaTime, float scaledInput); // Function TheK25.K25ControlledProjectile.Server_ProcessPitchInput // (Net|Native|Event|Public|NetServer) // @ game+0x57ec8a0
	void OnRep_AngularVelocity(); // Function TheK25.K25ControlledProjectile.OnRep_AngularVelocity // (Final|Native|Private) // @ game+0x4032ad0
	void Cosmetic_OnKillerPossessProjectileEffects(); // Function TheK25.K25ControlledProjectile.Cosmetic_OnKillerPossessProjectileEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25ControlledProjectileMovementComponent
// Size: 0x3a0 (Inherited: 0x260)
struct UK25ControlledProjectileMovementComponent : UPhysicsBasedProjectileMovementComponent {
	struct FDBDTunableRowHandle _projectileBaseSpeed; // 0x260(0x28)
	struct FDBDTunableRowHandle _baseProjectileMaximumDistance; // 0x288(0x28)
	struct FDBDTunableRowHandle _projectileSpeedIncreaseTime; // 0x2b0(0x28)
	struct FTunableStat _maximumTravelDistanceStat; // 0x2d8(0x80)
	struct UCurveFloat* _projectileSpeedIncreaseMultiplier; // 0x358(0x08)
	float _totalDistanceTravelled; // 0x360(0x04)
	char pad_364[0x3c]; // 0x364(0x3c)
};

// Class TheK25.K25EscapeLamentConfigurationGrasp
// Size: 0x760 (Inherited: 0x760)
struct UK25EscapeLamentConfigurationGrasp : UChargeableInteractionDefinition {
};

// Class TheK25.K25Gateway
// Size: 0x4d0 (Inherited: 0x230)
struct AK25Gateway : AActor {
	char pad_230[0x20]; // 0x230(0x20)
	float _rayCastZOffet; // 0x250(0x04)
	float _rayCastLength; // 0x254(0x04)
	struct TArray<float> _distancePercentLocations; // 0x258(0x10)
	float _survivorGatewayRotationSpeed; // 0x268(0x04)
	float _minimumIndicatorVelocity; // 0x26c(0x04)
	float _indicatorVelocityEasingFactor; // 0x270(0x04)
	float _minimumTimeBeforeTargetLocationMulticast; // 0x274(0x04)
	char pad_278[0x8]; // 0x278(0x08)
	float _gatewayNoiseEventTimeInterval; // 0x280(0x04)
	float _gatewayNoiseEventRange; // 0x284(0x04)
	struct FDBDTunableRowHandle _minDistanceFromPlayer; // 0x288(0x28)
	struct FTunableStat _maxDistanceFromPlayer; // 0x2b0(0x80)
	struct FDBDTunableRowHandle _gatewayPlacementSpeed; // 0x330(0x28)
	struct FDBDTunableRowHandle _pitchLevelChangeAngleThreshold; // 0x358(0x28)
	struct FDBDTunableRowHandle _pitchLevelChangeZoneThreshold; // 0x380(0x28)
	struct FDBDTunableRowHandle _maximumCameraPitchOrientationAngle; // 0x3a8(0x28)
	struct FDBDTunableRowHandle _minimumCameraPitchOrientationAngle; // 0x3d0(0x28)
	struct FDBDTunableRowHandle _maxGatewayPossessionDuration; // 0x3f8(0x28)
	struct UActorComponent* _visualComponent; // 0x420(0x08)
	struct FVector _targetLocation; // 0x428(0x0c)
	char pad_434[0x14]; // 0x434(0x14)
	struct UCameraComponent* _cameraPlacementComponent; // 0x448(0x08)
	bool _isGatewayPossessed; // 0x450(0x01)
	char pad_451[0x1b]; // 0x451(0x1b)
	bool _isBeingPositionned; // 0x46c(0x01)
	char pad_46D[0x1b]; // 0x46d(0x1b)
	struct FFastTimer _possessionTimer; // 0x488(0x30)
	char pad_4B8[0x10]; // 0x4b8(0x10)
	struct UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x4c8(0x08)

	void Server_StartGatewayPossession(struct FVector possessionLocation, struct FRotator gatewayRotation); // Function TheK25.K25Gateway.Server_StartGatewayPossession // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults) // @ game+0x57ecbb0
	void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned); // Function TheK25.K25Gateway.Server_SetIsGatewayBeingPositionned // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x570e490
	void Server_SetGatewayTargetLocation(struct FVector targetLocation, bool isValidLocation); // Function TheK25.K25Gateway.Server_SetGatewayTargetLocation // (Final|Net|Native|Event|Private|NetServer|HasDefaults) // @ game+0x57ecad0
	void Server_SetGatewayOrientation(struct FRotator Rotation); // Function TheK25.K25Gateway.Server_SetGatewayOrientation // (Final|Net|Native|Event|Private|NetServer|HasDefaults) // @ game+0x57eca40
	void Server_EndGatewayPossession(); // Function TheK25.K25Gateway.Server_EndGatewayPossession // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x57ec880
	void OnRep_IsGatewayPossessed(); // Function TheK25.K25Gateway.OnRep_IsGatewayPossessed // (Final|Native|Private) // @ game+0x57ec7d0
	void OnRep_IsBeingPositionned(); // Function TheK25.K25Gateway.OnRep_IsBeingPositionned // (Final|Native|Private) // @ game+0x57ec7b0
	void Multicast_SetGatewayTargetLocation(struct FVector targetLocation, bool isValidLocation); // Function TheK25.K25Gateway.Multicast_SetGatewayTargetLocation // (Final|Net|Native|Event|NetMulticast|Private|HasDefaults) // @ game+0x57ec4d0
	void Multicast_SetGatewayOrientation(struct FRotator Rotation); // Function TheK25.K25Gateway.Multicast_SetGatewayOrientation // (Final|Net|Native|Event|NetMulticast|Private|HasDefaults) // @ game+0x57ec440
	void Multicast_SetGatewayLocation(struct FVector possessionLocation); // Function TheK25.K25Gateway.Multicast_SetGatewayLocation // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x57ec3b0
	bool IsGatewayPossessed(); // Function TheK25.K25Gateway.IsGatewayPossessed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x552ff10
	struct UCameraComponent* GetCameraComponent(); // Function TheK25.K25Gateway.GetCameraComponent // (Event|Protected|BlueprintEvent|Const) // @ game+0x5e02c90
	void Cosmetic_TriggerInvalidGatewayPlacementSFX(); // Function TheK25.K25Gateway.Cosmetic_TriggerInvalidGatewayPlacementSFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayUnpossessedEffects(); // Function TheK25.K25Gateway.Cosmetic_TriggerGatewayUnpossessedEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayPossessionCancel(); // Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessionCancel // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayPossessedEffects(float TransitionTime); // Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessedEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayPlacementStop(); // Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayPlacementStart(); // Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerGatewayPlacementCancel(); // Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementCancel // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetKillerVisualVisibility(bool IsVisible); // Function TheK25.K25Gateway.Cosmetic_SetKillerVisualVisibility // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid); // Function TheK25.K25Gateway.Cosmetic_SetIsGatewayPositionValid // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25Husk
// Size: 0x5b0 (Inherited: 0x580)
struct AK25Husk : ADBDBasePlayer {
	struct UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent; // 0x578(0x08)
	struct UAnimationMontageSlave* _montageFollower; // 0x580(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x588(0x08)
	int32_t _k25CharacterOverrideID; // 0x590(0x04)
	char pad_59C[0x14]; // 0x59c(0x14)

	void Cosmetic_StartDisappearing(); // Function TheK25.K25Husk.Cosmetic_StartDisappearing // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_StartAppearing(); // Function TheK25.K25Husk.Cosmetic_StartAppearing // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_HideHusk(); // Function TheK25.K25Husk.Cosmetic_HideHusk // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25KillerChainHuntEffectsComponent
// Size: 0xf0 (Inherited: 0xf0)
struct UK25KillerChainHuntEffectsComponent : UK25ChainHuntEffectsComponent {
};

// Class TheK25.K25KillerTeleportationPositionFinderComponent
// Size: 0x1d8 (Inherited: 0xb8)
struct UK25KillerTeleportationPositionFinderComponent : UActorComponent {
	float _rayCastZOffet; // 0xb8(0x04)
	float _rayCastLength; // 0xbc(0x04)
	float _killerInRangeMinimumDistanceCheck; // 0xc0(0x04)
	float _killerInRangeMaxRangePercentage; // 0xc4(0x04)
	float _deltaHeightThreshold; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FDBDTunableRowHandle _minDistanceFromLamentConfiguration; // 0xd0(0x28)
	struct FDBDTunableRowHandle _maxDistanceFromLamentConfiguration; // 0xf8(0x28)
	char pad_120[0x20]; // 0x120(0x20)
	float _timeBetweenFailsafeChecks; // 0x140(0x04)
	char pad_144[0x44]; // 0x144(0x44)
	enum class EK25TeleportLocationStatus _teleportLocationStatus; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	struct FVector _bestTeleportLocation; // 0x18c(0x0c)
	struct TArray<struct AEscapeDoor*> _escapeDoors; // 0x198(0x10)
	char pad_1A8[0x30]; // 0x1a8(0x30)
};

// Class TheK25.K25LamentConfigurationPossessionChainAttacksEffect
// Size: 0x3e8 (Inherited: 0x350)
struct UK25LamentConfigurationPossessionChainAttacksEffect : UStatusEffect {
	struct FDBDTunableRowHandle _timeBetweenChainTargettingAttempt; // 0x350(0x28)
	struct FDBDTunableRowHandle _numberOfChainsToTriggerTowardsSurvivor; // 0x378(0x28)
	char pad_3A0[0x48]; // 0x3a0(0x48)
};

// Class TheK25.K25LamentConfigurationTeleportIndicator
// Size: 0x238 (Inherited: 0x230)
struct AK25LamentConfigurationTeleportIndicator : AActor {
	char pad_230[0x8]; // 0x230(0x08)

	void Cosmetic_UpdateIndicatorVisibility(bool IsVisible); // Function TheK25.K25LamentConfigurationTeleportIndicator.Cosmetic_UpdateIndicatorVisibility // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25P01
// Size: 0x428 (Inherited: 0x3c8)
struct UK25P01 : UPerk {
	float _generatorBlockDuration[0x3]; // 0x3c8(0x0c)
	float _auraRevealDuration[0x3]; // 0x3d4(0x0c)
	bool _allowPerkToBlockZeroProgressionGenerators; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FLinearColor _generatorAuraColorForKiller; // 0x3e4(0x10)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct FFastTimer> _generatorBlockingTimers; // 0x3f8(0x10)
	struct TArray<struct AGenerator*> _generatorsBlocked; // 0x408(0x10)
	struct TArray<struct AGenerator*> _local_generatorsBlocked; // 0x418(0x10)

	void OnRep_GeneratorsBlocked(); // Function TheK25.K25P01.OnRep_GeneratorsBlocked // (Final|Native|Private) // @ game+0x57ec790
	float GetGeneratorBlockDuration(); // Function TheK25.K25P01.GetGeneratorBlockDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
	float GetAuraRevealDuration(); // Function TheK25.K25P01.GetAuraRevealDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	void Authority_OnBlockTimerDone(struct AGenerator* Generator); // Function TheK25.K25P01.Authority_OnBlockTimerDone // (Final|Native|Private) // @ game+0x57ec150
};

// Class TheK25.K25P02
// Size: 0x4d8 (Inherited: 0x448)
struct UK25P02 : UHexPerk {
	float _totemAuraRevealRadius[0x3]; // 0x448(0x0c)
	bool _totemBlockerHasLifetime; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float _totemBlockerDuration[0x3]; // 0x458(0x0c)
	char pad_464[0x4]; // 0x464(0x04)
	struct UStatusEffect* _obliviousStatusEffectClass; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)
	struct TArray<struct FDBDPlayerTotemPair> _cursedSurvivors; // 0x478(0x10)
	char pad_488[0x10]; // 0x488(0x10)
	struct TArray<struct ADBDPlayer*> _hookedSurvivors; // 0x498(0x10)
	struct TArray<struct ATotem*> _previouslyBoundTotems; // 0x4a8(0x10)
	struct FDBDPlayerTotemPair _lastPlayerTotemPair; // 0x4b8(0x10)
	struct TArray<struct UStatusEffect*> _obliviousStatusEffects; // 0x4c8(0x10)

	void OnRep_CursedSurvivors(); // Function TheK25.K25P02.OnRep_CursedSurvivors // (Final|Native|Private) // @ game+0x57ec770
	bool GetTotemBlockerHasLifetime(); // Function TheK25.K25P02.GetTotemBlockerHasLifetime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57ec380
	float GetTotemBlockerDuration(); // Function TheK25.K25P02.GetTotemBlockerDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57ec350
	float GetTotemAuraRevealRadius(); // Function TheK25.K25P02.GetTotemAuraRevealRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce25c0
};

// Class TheK25.K25P03
// Size: 0x400 (Inherited: 0x3c8)
struct UK25P03 : UPerk {
	struct UStatusEffect* _hemorrhageEffect; // 0x3c8(0x08)
	struct UStatusEffect* _mangledEffect; // 0x3d0(0x08)
	struct UStatusEffect* _K25P03SurvivorStateTwoEffect; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	int32_t _numberOfSurvivorsWaitingForDamageStateChange; // 0x3e8(0x04)
	float _state2ActionSpeedDebuffPercentage[0x3]; // 0x3ec(0x0c)
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void OnSurvivorRemoved(struct ACamperPlayer* Survivor); // Function TheK25.K25P03.OnSurvivorRemoved // (Final|Native|Private) // @ game+0x57ec7f0
	void OnDamageStateChanged(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheK25.K25P03.OnDamageStateChanged // (Final|Native|Private|HasOutParms) // @ game+0x57ec660
	void OnCamperUnhookedFromScourgeHook(struct FGameEventData& GameEventData); // Function TheK25.K25P03.OnCamperUnhookedFromScourgeHook // (Final|Native|Private|HasOutParms) // @ game+0x57ec5b0
	float GetActionSpeedDebuffPercentageAtLevel(); // Function TheK25.K25P03.GetActionSpeedDebuffPercentageAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd690
};

// Class TheK25.K25PounceAttack
// Size: 0x3d0 (Inherited: 0x390)
struct UK25PounceAttack : UPounceAttack {
	char pad_390[0x40]; // 0x390(0x40)

	void Multicast_DownedTargetHoldingLamentConfiguration(); // Function TheK25.K25PounceAttack.Multicast_DownedTargetHoldingLamentConfiguration // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55b3f90
	void Client_InvalidateDownedTargetHoldingLamentConfiguration(); // Function TheK25.K25PounceAttack.Client_InvalidateDownedTargetHoldingLamentConfiguration // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x57eff50
};

// Class TheK25.K25PounceAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UK25PounceAttackHittingSubstate : UPounceAttackHittingSubstate {
};

// Class TheK25.K25Power
// Size: 0x620 (Inherited: 0x4c8)
struct AK25Power : ACollectable {
	char pad_4C8[0x18]; // 0x4c8(0x18)
	struct UChargeableComponent* _k25ChainStrikeInteractionChargeableComponent; // 0x4e0(0x08)
	struct UChargeableComponent* _k25TeleportChargeableComponent; // 0x4e8(0x08)
	struct TArray<struct FCustomKillerInstinctData> _customKillerInstinctDatas; // 0x4f0(0x10)
	struct TArray<struct UStatusEffect*> _survivorStatusEffectClasses; // 0x500(0x10)
	struct TArray<struct UStatusEffect*> _killerStatusEffectClasses; // 0x510(0x10)
	struct UK25SurvivorChainAttachmentComponent* _survivorChainAttachmentComponentClass; // 0x520(0x08)
	struct UK25SurvivorChainTargetterComponent* _survivorChainTargetterComponentClass; // 0x528(0x08)
	struct AK25Gateway* _k25GatewayClass; // 0x530(0x08)
	struct AK25ControlledProjectile* _controlledProjectileClass; // 0x538(0x08)
	struct ALamentConfiguration* _lamentConfigurationClass; // 0x540(0x08)
	struct AK25Husk* _k25HuskClass; // 0x548(0x08)
	struct UK25KillerTeleportationPositionFinderComponent* _killerTeleportFinderComponentClass; // 0x550(0x08)
	struct AAnimationFollowerActor* _chainAnimationActorClass; // 0x558(0x08)
	struct TArray<struct UDataTable*> _chainAnimationMappingsTables; // 0x560(0x10)
	struct AAnimationFollowerActor* _pillarAnimationActorClass; // 0x570(0x08)
	struct UK25ProjectileLauncher* _k25ProjectileLauncher; // 0x578(0x08)
	struct UAuthoritativeActorPoolComponent* _k25ProjectilePool; // 0x580(0x08)
	struct UAuthoritativeActorPoolComponent* _k25ChainPool; // 0x588(0x08)
	struct UPowerChargeComponent* _k25PowerChargeComponent; // 0x590(0x08)
	struct UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider; // 0x598(0x08)
	struct UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent; // 0x5a0(0x08)
	struct AK25Gateway* _gateway; // 0x5a8(0x08)
	struct AK25ControlledProjectile* _controlledProjectileInstance; // 0x5b0(0x08)
	struct ALamentConfiguration* _lamentConfiguration; // 0x5b8(0x08)
	struct AK25Husk* _k25Husk; // 0x5c0(0x08)
	struct UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent; // 0x5c8(0x08)
	char pad_5D0[0x48]; // 0x5d0(0x48)
	bool _isPowerCharged; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)

	void OnSurvivorAdded(struct ACamperPlayer* Survivor, struct ASlasherPlayer* killer); // Function TheK25.K25Power.OnSurvivorAdded // (Final|Native|Private) // @ game+0x57f0a40
	void OnRep_LamentConfiguration(); // Function TheK25.K25Power.OnRep_LamentConfiguration // (Final|Native|Private) // @ game+0x57f0a00
	void OnRep_K25Gateway(); // Function TheK25.K25Power.OnRep_K25Gateway // (Final|Native|Private) // @ game+0x57f09e0
	void OnRep_K25ControlledProjectile(); // Function TheK25.K25Power.OnRep_K25ControlledProjectile // (Final|Native|Private) // @ game+0x57f09c0
	void OnKillerAdded(struct ASlasherPlayer* killer); // Function TheK25.K25Power.OnKillerAdded // (Final|Native|Private) // @ game+0x57f0840
	void Cosmetic_OnKillerInterruptSFX(struct ASlasherPlayer* killer); // Function TheK25.K25Power.Cosmetic_OnKillerInterruptSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerInterruptOpenHatchSFX(struct ASlasherPlayer* killer); // Function TheK25.K25Power.Cosmetic_OnKillerInterruptOpenHatchSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25PowerChargePresentationItemProgressComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UK25PowerChargePresentationItemProgressComponent : UPresentationItemProgressComponent {
	struct UPowerChargeComponent* _powerChargeComponent; // 0xc0(0x08)
	struct AK25Power* _k25Power; // 0xc8(0x08)
};

// Class TheK25.K25ProjectileLauncher
// Size: 0x1b8 (Inherited: 0x180)
struct UK25ProjectileLauncher : UBaseProjectileLauncher {
	struct FDBDTunableRowHandle _controlledProjectileInitialSpeed; // 0x180(0x28)
	bool _isControlledProjectileRequested; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct AK25ControlledProjectile* _controlledProjectile; // 0x1b0(0x08)
};

// Class TheK25.K25ProjectilePool
// Size: 0x118 (Inherited: 0x118)
struct UK25ProjectilePool : UAuthoritativeActorPoolComponent {
};

// Class TheK25.K25ProjectileReplicationComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK25ProjectileReplicationComponent : UBaseProjectileReplicationComponent {

	void Multicast_SetAttachedChain(struct AK25Projectile* Projectile, struct AK25Chain* chainToAttach, struct FLaunchInfo LaunchInfo); // Function TheK25.K25ProjectileReplicationComponent.Multicast_SetAttachedChain // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57f05a0
	void Multicast_DeactivateProjectile(struct AK25Projectile* Projectile, struct FK25ProjectileDeactivationData deactivationData); // Function TheK25.K25ProjectileReplicationComponent.Multicast_DeactivateProjectile // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57f01b0
};

// Class TheK25.K25RemoveChainInteraction
// Size: 0x7b0 (Inherited: 0x760)
struct UK25RemoveChainInteraction : UChargeableInteractionDefinition {
	char pad_760[0x10]; // 0x760(0x10)
	struct FDBDTunableRowHandle _interactionTimePerChainsAttached; // 0x770(0x28)
	struct UK25SurvivorChainAttachmentComponent* _cachedSurvivorChainAttachmentComponent; // 0x798(0x08)
	struct TWeakObjectPtr<struct AK25Chain> _chainBeingRemoved; // 0x7a0(0x08)
	struct TWeakObjectPtr<struct UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent; // 0x7a8(0x08)
};

// Class TheK25.K25SolveLamentConfigurationInteraction
// Size: 0x840 (Inherited: 0x760)
struct UK25SolveLamentConfigurationInteraction : UChargeableInteractionDefinition {
	float _timeBufferBeforeAllowedToUseInteractionAgain; // 0x758(0x04)
	struct FDBDTunableRowHandle _failSkillCheckTimePenalty; // 0x760(0x28)
	struct FAnimationMontageDescriptor _failMontage; // 0x788(0x20)
	char pad_7AC[0x94]; // 0x7ac(0x94)

	void Multicast_TriggerKillerStoppedInteractionViaAttackSFX(struct ASlasherPlayer* killer); // Function TheK25.K25SolveLamentConfigurationInteraction.Multicast_TriggerKillerStoppedInteractionViaAttackSFX // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x4d80390
	void Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX(struct ASlasherPlayer* killer); // Function TheK25.K25SolveLamentConfigurationInteraction.Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, struct ADBDPlayer* Player, bool TriggerLoudNoise, enum class ESkillCheckCustomType Type); // Function TheK25.K25SolveLamentConfigurationInteraction.Authority_OnSkillCheckResponseAuthority // (Final|Native|Private) // @ game+0x57efcc0
};

// Class TheK25.K25SurvivorChainAttachmentAnchor
// Size: 0x2f8 (Inherited: 0x230)
struct AK25SurvivorChainAttachmentAnchor : AActor {
	char pad_230[0x18]; // 0x230(0x18)
	struct FDBDTunableRowHandle _chainMaxBreakingLength; // 0x248(0x28)
	float _timeBetweenTrace; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FK25SurvivorChainAttachmentData _attachmentData; // 0x278(0x28)
	struct TWeakObjectPtr<struct ACamperPlayer> _owningSurvivor; // 0x2a0(0x08)
	struct TWeakObjectPtr<struct AK25Chain> _attachedChain; // 0x2a8(0x08)
	char pad_2B0[0x30]; // 0x2b0(0x30)
	struct FVector _cachedPullDirection; // 0x2e0(0x0c)
	char pad_2EC[0xc]; // 0x2ec(0x0c)

	void OnRep_AttachmentData(); // Function TheK25.K25SurvivorChainAttachmentAnchor.OnRep_AttachmentData // (Final|Native|Private) // @ game+0x57f09a0
	int32_t GetNumberOfChainsAttached(); // Function TheK25.K25SurvivorChainAttachmentAnchor.GetNumberOfChainsAttached // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f0150
	struct FVector GetChainsPullLocation(); // Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f00b0
	struct FVector GetChainsPullDirection(); // Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f0070
	float GetChainPullDirectionAngle(); // Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainPullDirectionAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f0040
	struct FVector GetChainAttachmentLocation(); // Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x57f0000
	struct FK25SurvivorChainAttachmentData GetChainAttachmentData(); // Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57eff70
	void Cosmetic_OnChainDetached(struct AK25Chain* chainToDetach); // Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainDetached // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainAttached(struct AK25Chain* chainToAttach); // Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainAttached // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25SurvivorChainAttachmentComponent
// Size: 0x198 (Inherited: 0xb8)
struct UK25SurvivorChainAttachmentComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct AK25SurvivorChainAttachmentAnchor* _attachmentAnchorClass; // 0xe8(0x08)
	struct TArray<struct FK25SurvivorChainAttachmentData> _survivorAnchorData; // 0xf0(0x10)
	struct UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategyClass; // 0x100(0x08)
	struct TArray<struct UInteractionDefinition*> _interruptableInteractionClasses; // 0x108(0x10)
	struct FDBDTunableRowHandle _maximumNumberOfChainsAttached; // 0x118(0x28)
	struct TArray<struct AK25SurvivorChainAttachmentAnchor*> _chainAttachmentAnchors; // 0x140(0x10)
	struct TArray<struct TWeakObjectPtr<struct AK25Chain>> _chainsAttached; // 0x150(0x10)
	struct UChargeableComponent* _removeChainChargeableComponent; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)
	struct UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategy; // 0x170(0x08)
	struct UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent; // 0x178(0x08)
	char pad_180[0x18]; // 0x180(0x18)

	void OnRep_RemoveChainChargeableComponent(); // Function TheK25.K25SurvivorChainAttachmentComponent.OnRep_RemoveChainChargeableComponent // (Final|Native|Private) // @ game+0x57f0a20
	void Multicast_TriggerHitSurvivorInExitAreaSFX(struct ASlasherPlayer* killer); // Function TheK25.K25SurvivorChainAttachmentComponent.Multicast_TriggerHitSurvivorInExitAreaSFX // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x55700e0
	struct AK25Chain* GetFirstChainToRelease(); // Function TheK25.K25SurvivorChainAttachmentComponent.GetFirstChainToRelease // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f00f0
	void Cosmetic_TriggerHitSurvivorInExitAreaSFX(struct ASlasherPlayer* killer); // Function TheK25.K25SurvivorChainAttachmentComponent.Cosmetic_TriggerHitSurvivorInExitAreaSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25SurvivorChainHuntEffectsComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UK25SurvivorChainHuntEffectsComponent : UK25ChainHuntEffectsComponent {
	char pad_F0[0x8]; // 0xf0(0x08)

	struct ACamperPlayer* GetOwningSurvivor(); // Function TheK25.K25SurvivorChainHuntEffectsComponent.GetOwningSurvivor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f0180
};

// Class TheK25.K25SurvivorChainRotationStrategy
// Size: 0xc8 (Inherited: 0xb8)
struct UK25SurvivorChainRotationStrategy : UBaseCharacterRotationStrategy {
	struct TWeakObjectPtr<struct ACamperPlayer> _cachedSurvivor; // 0xb8(0x08)
	struct UK25SurvivorChainAttachmentComponent* _cachedChainAttachmentComponent; // 0xc0(0x08)
};

// Class TheK25.K25SurvivorChainTargetterComponent
// Size: 0x1d0 (Inherited: 0xb8)
struct UK25SurvivorChainTargetterComponent : UActorComponent {
	struct FDBDTunableRowHandle _timeBetweenQueuedChainsLaunch; // 0xb8(0x28)
	float _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FDBDTunableRowHandle _minimumSpawnDistance; // 0xe8(0x28)
	struct FDBDTunableRowHandle _maximumSpawnDistance; // 0x110(0x28)
	float _sphereCastRadius; // 0x138(0x04)
	int32_t _numberOfPositionFindingTries; // 0x13c(0x04)
	char pad_140[0x4]; // 0x140(0x04)
	int32_t _maxNumberOfChainRetries; // 0x144(0x04)
	char pad_148[0x88]; // 0x148(0x88)

	void Multicast_DebugPositionFind(struct FVector startSweepPosition, struct FVector endSweepPosition, bool hasFoundPosition, struct FVector foundPosition, bool hasFoundCollision, struct FVector collisionPosition); // Function TheK25.K25SurvivorChainTargetterComponent.Multicast_DebugPositionFind // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults|Const) // @ game+0x57f02a0
	void Authority_OnSurvivorHealthStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function TheK25.K25SurvivorChainTargetterComponent.Authority_OnSurvivorHealthStateChanged // (Final|Native|Private) // @ game+0x57efe80
};

// Class TheK25.K25TeleportInteraction
// Size: 0x810 (Inherited: 0x760)
struct UK25TeleportInteraction : UChargeableInteractionDefinition {
	int32_t _maxNumberLocationQueriesPerTick; // 0x758(0x04)
	float _timeSensingLamentConfigurationAfterInteractionEnded; // 0x75c(0x04)
	char pad_768[0x18]; // 0x768(0x18)
	struct FDBDTunableRowHandle _slowdownAfterTeleportDuration; // 0x780(0x28)
	struct UStatusEffect* _slowdownAfterTeleportStatusEffectClass; // 0x7a8(0x08)
	char pad_7B0[0x60]; // 0x7b0(0x60)

	void Multicast_TeleportKillerToTargetPosition(struct ASlasherPlayer* killer, struct FVector Location, struct FRotator Rotation); // Function TheK25.K25TeleportInteraction.Multicast_TeleportKillerToTargetPosition // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x57f0700
	void Multicast_InitializeHusk(struct FVector Location, struct FRotator Rotation); // Function TheK25.K25TeleportInteraction.Multicast_InitializeHusk // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x57f04b0
	void Cosmetic_TeleportStartEffects(struct ASlasherPlayer* killer); // Function TheK25.K25TeleportInteraction.Cosmetic_TeleportStartEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TeleportEndEffects(struct ASlasherPlayer* killer); // Function TheK25.K25TeleportInteraction.Cosmetic_TeleportEndEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TeleportAbortedEffects(struct ASlasherPlayer* killer); // Function TheK25.K25TeleportInteraction.Cosmetic_TeleportAbortedEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25UncontrolledProjectile
// Size: 0x528 (Inherited: 0x430)
struct AK25UncontrolledProjectile : AK25Projectile {
	char pad_430[0x8]; // 0x430(0x08)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0x438(0x10)
	struct FDBDTunableRowHandle _minimumTimeBeforeProjectileLaunch; // 0x448(0x28)
	struct FDBDTunableRowHandle _maximumTimeBeforeProjectileLaunch; // 0x470(0x28)
	struct FDBDTunableRowHandle _projectileSpeed; // 0x498(0x28)
	struct FDBDTunableRowHandle _projectileMaximumTravelDistance; // 0x4c0(0x28)
	bool _isAcquiredFromPool; // 0x4e8(0x01)
	char pad_4E9[0x37]; // 0x4e9(0x37)
	struct ACamperPlayer* _targetSurvivor; // 0x520(0x08)

	void OnRep_TargetSurvivor(); // Function TheK25.K25UncontrolledProjectile.OnRep_TargetSurvivor // (Final|Native|Private) // @ game+0x57f4c40
	void Cosmetic_TriggerUncontrolledProjectileSpawnSFX(); // Function TheK25.K25UncontrolledProjectile.Cosmetic_TriggerUncontrolledProjectileSpawnSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheK25.K25UncontrolledProjectileReplicationComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UK25UncontrolledProjectileReplicationComponent : UK25ProjectileReplicationComponent {

	void Multicast_LaunchProjectile(struct AK25UncontrolledProjectile* Projectile, struct FLaunchInfo LaunchInfo); // Function TheK25.K25UncontrolledProjectileReplicationComponent.Multicast_LaunchProjectile // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57f46f0
};

// Class TheK25.K25Utilities
// Size: 0x30 (Inherited: 0x30)
struct UK25Utilities : UBlueprintFunctionLibrary {

	struct ALamentConfiguration* GetLamentConfiguration(struct UObject* WorldContextObject); // Function TheK25.K25Utilities.GetLamentConfiguration // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57f45e0
	struct AK25Power* GetK25Power(struct UObject* WorldContextObject); // Function TheK25.K25Utilities.GetK25Power // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57f4550
	struct AK25Husk* GetK25Husk(struct UObject* WorldContextObject); // Function TheK25.K25Utilities.GetK25Husk // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57f44c0
	struct AK25Gateway* GetK25Gateway(struct UObject* WorldContextObject); // Function TheK25.K25Utilities.GetK25Gateway // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57f4430
	struct AK25ControlledProjectile* GetK25ControlledProjectile(struct UObject* WorldContextObject); // Function TheK25.K25Utilities.GetK25ControlledProjectile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57f43a0
};

// Class TheK25.K25WeaponAnimInstance
// Size: 0x380 (Inherited: 0x380)
struct UK25WeaponAnimInstance : UBaseKillerWeaponAnimInstance {
	bool _hasDownedTargetHoldingLamentConfiguration; // 0x378(0x01)

	void OnAttackStart(enum class EAttackType attackType); // Function TheK25.K25WeaponAnimInstance.OnAttackStart // (Final|Native|Protected) // @ game+0x57f48b0
};

// Class TheK25.LamentConfiguration
// Size: 0x7b0 (Inherited: 0x4c8)
struct ALamentConfiguration : ACollectable {
	char pad_4C8[0x30]; // 0x4c8(0x30)
	struct USpherePlayerOverlapComponent* _interactable; // 0x4f8(0x08)
	struct UInteractor* _collectableInteractor; // 0x500(0x08)
	struct UK25CollectLamentConfigurationInteraction* _survivorCollectItemInteraction; // 0x508(0x08)
	struct UK25CollectLamentConfigurationInteraction* _killerCollectItemInteraction; // 0x510(0x08)
	struct UDBDOutlineComponent* _outlineComponent; // 0x518(0x08)
	struct UMaterialHelper* _materialHelper; // 0x520(0x08)
	struct ULamentConfigurationOutlineStrategy* _outlineStrategy; // 0x528(0x08)
	struct ULamentConfigurationSpawnStrategy* _spawnStrategy; // 0x530(0x08)
	struct ULamentConfigurationChainHuntComponent* _chainHuntComponent; // 0x538(0x08)
	float _dotProductMinValue; // 0x540(0x04)
	enum class EAttachToSocketNameEnum _survivorAttachmentSocket; // 0x544(0x01)
	enum class EAttachToSocketNameEnum _killerAttachmentSocket; // 0x545(0x01)
	char pad_546[0x2]; // 0x546(0x02)
	struct UAnimationMontageSlave* _montageFollower; // 0x548(0x08)
	struct UMontagePlayer* _montagePlayer; // 0x550(0x08)
	struct AAnimationFollowerActor* _chainAnimationActorClass; // 0x558(0x08)
	struct AK25LamentConfigurationTeleportIndicator* _lamentConfigurationTeleportIndicatorClass; // 0x560(0x08)
	struct FName _chainAnimationFollowerAttachmentSocketName; // 0x568(0x0c)
	char pad_574[0x4]; // 0x574(0x04)
	struct FAkObservedPlayerSoundLoop _possessionSoundLoop; // 0x578(0x40)
	struct FDBDTunableRowHandle _respawnTimeAfterLamentConfigurationSolved; // 0x5b8(0x28)
	struct FDBDTunableRowHandle _respawnTimeAfterKillerPickUp; // 0x5e0(0x28)
	struct FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeBySelf; // 0x608(0x28)
	struct FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeByAttack; // 0x630(0x28)
	struct FDBDTunableRowHandle _numberChainsToLaunchUponKillerPickUpLamentConfiguration; // 0x658(0x28)
	struct FDBDTunableRowHandle _hostageInteractionTime; // 0x680(0x28)
	enum class ELamentConfigurationState _localLamentConfigurationState; // 0x6a8(0x01)
	enum class ELamentConfigurationState _lamentconfigurationState; // 0x6a9(0x01)
	char pad_6AA[0x6]; // 0x6aa(0x06)
	struct AAnimationFollowerActor* _chainAnimationActor; // 0x6b0(0x08)
	char pad_6B8[0x48]; // 0x6b8(0x48)
	struct ACamperPlayer* _survivorHeldHostage; // 0x700(0x08)
	char pad_708[0x88]; // 0x708(0x88)
	struct UBoxComponent* _standingOnLamentConfigurationCollisionChecker; // 0x790(0x08)
	float _timeAllowedToStandOnCubeBeforeTeleport; // 0x798(0x04)
	float _solvedLamentConfigurationDropDistanceToCollectorCentimeters; // 0x79c(0x04)
	float _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters; // 0x7a0(0x04)
	bool _solved; // 0x7a4(0x01)
	bool _releasedByAttack; // 0x7a5(0x01)
	char pad_7A6[0x2]; // 0x7a6(0x02)
	struct AK25LamentConfigurationTeleportIndicator* _lamentConfigurationTeleportIndicator; // 0x7a8(0x08)

	void TriggerKillerPickUpSFX(struct TArray<struct ACamperPlayer*>& affectedSurvivors); // Function TheK25.LamentConfiguration.TriggerKillerPickUpSFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_SurvivorHeldHostage(struct ACamperPlayer* oldSurvivorHeldHostage); // Function TheK25.LamentConfiguration.OnRep_SurvivorHeldHostage // (Final|Native|Private) // @ game+0x57f4bb0
	void OnRep_LamentConfigurationState(); // Function TheK25.LamentConfiguration.OnRep_LamentConfigurationState // (Final|Native|Private) // @ game+0x57f4b70
	void OnCamperEscaped(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK25.LamentConfiguration.OnCamperEscaped // (Final|Native|Private|HasOutParms) // @ game+0x57f4930
	void Multicast_TriggerSolvedSFX(); // Function TheK25.LamentConfiguration.Multicast_TriggerSolvedSFX // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5500600
	void Multicast_TriggerKillerPickUpSFX(struct TArray<struct ACamperPlayer*> affectedSurvivors); // Function TheK25.LamentConfiguration.Multicast_TriggerKillerPickUpSFX // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57f4810
	void Multicast_DownedSurvivorHoldingLamentConfiguration(struct ACamperPlayer* Survivor); // Function TheK25.LamentConfiguration.Multicast_DownedSurvivorHoldingLamentConfiguration // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x57a31d0
	void Multicast_CorrectLamentConfigurationPosition(struct FVector NewPosition); // Function TheK25.LamentConfiguration.Multicast_CorrectLamentConfigurationPosition // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x57f4670
	float GetChainHuntProgressPercentage(); // Function TheK25.LamentConfiguration.GetChainHuntProgressPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f4340
	void Cosmetic_TriggerSurvivorPickUpSFX(); // Function TheK25.LamentConfiguration.Cosmetic_TriggerSurvivorPickUpSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerSpawnedSFX(); // Function TheK25.LamentConfiguration.Cosmetic_TriggerSpawnedSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerSolvedSFX(); // Function TheK25.LamentConfiguration.Cosmetic_TriggerSolvedSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerRespawnDuringChainHuntSFX(); // Function TheK25.LamentConfiguration.Cosmetic_TriggerRespawnDuringChainHuntSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX(); // Function TheK25.LamentConfiguration.Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_TriggerDisappearsSFX(); // Function TheK25.LamentConfiguration.Cosmetic_TriggerDisappearsSFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(struct ASlasherPlayer* killer, struct ACamperPlayer* survivorDowned); // Function TheK25.LamentConfiguration.Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration); // Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack); // Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainHuntStartedEffects(); // Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntStartedEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainHuntEndedEffects(); // Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntEndedEffects // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainHuntChargeStart(float chargeTime); // Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeStart // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnChainHuntChargeEnd(); // Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeEnd // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_EndSolvingCubeSFX(bool hasBeenSolved); // Function TheK25.LamentConfiguration.Cosmetic_EndSolvingCubeSFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_BeginSolvingCubeSFX(); // Function TheK25.LamentConfiguration.Cosmetic_BeginSolvingCubeSFX // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning); // Function TheK25.LamentConfiguration.Authority_RespawnLamentConfiguration // (Final|Native|Public) // @ game+0x57f42b0
	void Authority_OnSurvivorHitByControlledProjectile(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK25.LamentConfiguration.Authority_OnSurvivorHitByControlledProjectile // (Final|Native|Private|HasOutParms) // @ game+0x57f41a0
	void Authority_OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TheK25.LamentConfiguration.Authority_OnOverlapEnd // (Final|Native|Private) // @ game+0x57f4040
	void Authority_OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TheK25.LamentConfiguration.Authority_OnOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x57f3e20
	void Authority_OnIntroCompletedOrLevelReadyToPlay(); // Function TheK25.LamentConfiguration.Authority_OnIntroCompletedOrLevelReadyToPlay // (Final|Native|Private) // @ game+0x57f3e00
	void Authority_OnGameEnded(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK25.LamentConfiguration.Authority_OnGameEnded // (Final|Native|Private|HasOutParms) // @ game+0x57f3cf0
	void Authority_OnEndGameOver(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function TheK25.LamentConfiguration.Authority_OnEndGameOver // (Final|Native|Private|HasOutParms) // @ game+0x57f3be0
};

// Class TheK25.LamentConfigurationAnalyticsComponent
// Size: 0xf0 (Inherited: 0xb8)
struct ULamentConfigurationAnalyticsComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)
};

// Class TheK25.LamentConfigurationChainHuntComponent
// Size: 0x288 (Inherited: 0xb8)
struct ULamentConfigurationChainHuntComponent : UActorComponent {
	char pad_B8[0x78]; // 0xb8(0x78)
	float _floorChainHuntTimeBetweenChainStrikes; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FTunableStat _chainHuntChargeTime; // 0x138(0x80)
	struct UCurveFloat* _chainNumberPerChainHuntCluster; // 0x1b8(0x08)
	struct UCurveFloat* _timeBetweenChainHuntClusterStrikes; // 0x1c0(0x08)
	struct UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponentClass; // 0x1c8(0x08)
	struct UK25SurvivorChainHuntEffectsComponent* _survivorChainHuntEffectsComponentClass; // 0x1d0(0x08)
	struct UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponent; // 0x1d8(0x08)
	struct TArray<struct UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents; // 0x1e0(0x10)
	char pad_1F0[0x30]; // 0x1f0(0x30)
	float _cachedAdditiveChainStrikeDelayTime; // 0x220(0x04)
	char pad_224[0x34]; // 0x224(0x34)
	struct FChainHuntStateData _chainHuntStateData; // 0x258(0x10)
	enum class EChainHuntState _oldChainHuntState; // 0x268(0x01)
	char pad_269[0x1f]; // 0x269(0x1f)

	void OnRep_ChainHuntStateData(); // Function TheK25.LamentConfigurationChainHuntComponent.OnRep_ChainHuntStateData // (Final|Native|Private) // @ game+0x57f4b30
	float GetChainHuntProgressPercentage(); // Function TheK25.LamentConfigurationChainHuntComponent.GetChainHuntProgressPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f4370
};

// Class TheK25.LamentConfigurationOutlineStrategy
// Size: 0x128 (Inherited: 0xc0)
struct ULamentConfigurationOutlineStrategy : UOutlineUpdateStrategy {
	struct FLinearColor _noChainHuntProgressColor; // 0xc0(0x10)
	struct FLinearColor _chainHuntActiveColor; // 0xd0(0x10)
	struct FLinearColor _killerColor; // 0xe0(0x10)
	char pad_F0[0x38]; // 0xf0(0x38)
};

// Class TheK25.LamentConfigurationPlayerAnalyticsComponent
// Size: 0xd8 (Inherited: 0xb8)
struct ULamentConfigurationPlayerAnalyticsComponent : UActorComponent {
	int32_t _analyticsCount; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FLamentConfigurationPlayerPossessionData _possessionAnalytics; // 0xc0(0x18)

	void OnRep_AnalyticsCount(); // Function TheK25.LamentConfigurationPlayerAnalyticsComponent.OnRep_AnalyticsCount // (Final|Native|Private) // @ game+0x57f4b10
};

// Class TheK25.LamentConfigurationSpawnStrategy
// Size: 0x130 (Inherited: 0xb8)
struct ULamentConfigurationSpawnStrategy : UActorComponent {
	float _killerPointDistanceMultiplier; // 0xb8(0x04)
	float _survivorPointDistanceMultiplier; // 0xbc(0x04)
	float _maxDistancePointAllowed; // 0xc0(0x04)
	float _minSurvivorDistance; // 0xc4(0x04)
	float _minSurvivorDistancePointPenalty; // 0xc8(0x04)
	float _minKillerDistance; // 0xcc(0x04)
	float _minHatchDistance; // 0xd0(0x04)
	float _minDistanceFromOtherSpawns; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)
	float _minKillerDistancePointPenalty; // 0xe0(0x04)
	int32_t _numberOfSpawnPointInLottery; // 0xe4(0x04)
	float _pointPenaltyPerUsedLocationTime; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<enum class ETileSpawnPointType> _spawnPointsTypes; // 0xf0(0x10)
	float _downRaycastLength; // 0x100(0x04)
	float _rayCastZOffet; // 0x104(0x04)
	float _navmeshCheckRadius; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FLamentConfigurationSpawnInfo> _cached_spawnsInfo; // 0x110(0x10)
	struct TArray<struct AHatch*> _hatches; // 0x120(0x10)
};

// Class TheK25.OwningPlayerInLamentConfigurationRange
// Size: 0x120 (Inherited: 0x100)
struct UOwningPlayerInLamentConfigurationRange : UAnyActorPairQueryRangeIsTrue {
	char pad_100[0x20]; // 0x100(0x20)
};

// Class TheK25.S28P01
// Size: 0x3f8 (Inherited: 0x3c8)
struct US28P01 : UPerk {
	float _auraRevealDuration[0x3]; // 0x3c8(0x0c)
	float _auraRevealRange[0x3]; // 0x3d4(0x0c)
	struct UChargeableComponent* _S28P01ChargeableComponent; // 0x3e0(0x08)
	bool _isPerkActive; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct ADBDPlayer* _playerOwner; // 0x3f0(0x08)

	void OnRep_S28P01ChargeableComponent(); // Function TheK25.S28P01.OnRep_S28P01ChargeableComponent // (Final|Native|Private) // @ game+0x57f4b90
	void OnRep_IsPerkActive(); // Function TheK25.S28P01.OnRep_IsPerkActive // (Final|Native|Private|Const) // @ game+0x57f4b50
	void OnInteractionChargeChanged(struct UChargeableComponent* ChargeableComponent, float TotalPercentComplete); // Function TheK25.S28P01.OnInteractionChargeChanged // (Final|Native|Private) // @ game+0x57f4a40
	float GetAuraRevealRange(); // Function TheK25.S28P01.GetAuraRevealRange // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd720
	float GetAuraRevealDuration(); // Function TheK25.S28P01.GetAuraRevealDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheK25.S28P01AuraReveal
// Size: 0x7c0 (Inherited: 0x760)
struct US28P01AuraReveal : UChargeableInteractionDefinition {
	char pad_760[0x60]; // 0x760(0x60)
};

// Class TheK25.S28P02
// Size: 0x4c0 (Inherited: 0x480)
struct US28P02 : UBoonPerk {
	float _healingSpeedGainPercentage[0x3]; // 0x480(0x0c)
	bool _canSelfHeal; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	float _selfHealSpeedPenalty[0x3]; // 0x490(0x0c)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UStatusEffect* _healingSpeedIncreaseEffect; // 0x4a0(0x08)
	struct UStatusEffect* _allowSelfHealEffectClass; // 0x4a8(0x08)
	struct UStatusEffect* _selfHealSpeedPenaltyEffectClass; // 0x4b0(0x08)
	struct UStatusEffect* _revealInjuredPlayersInBoonRangeEffectClass; // 0x4b8(0x08)

	float GetSelfHealSpeedPenaltyAtLevel(); // Function TheK25.S28P02.GetSelfHealSpeedPenaltyAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f5210
	float GetHealingSpeedGainPercentageAtLevel(); // Function TheK25.S28P02.GetHealingSpeedGainPercentageAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f51e0
	bool CanSelfHeal(); // Function TheK25.S28P02.CanSelfHeal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f51b0
};

// Class TheK25.S28P03
// Size: 0x490 (Inherited: 0x480)
struct US28P03 : UBoonPerk {
	float _lingerDuration[0x3]; // 0x480(0x0c)
	char pad_48C[0x4]; // 0x48c(0x04)

	float GetLingerDurationAtLevel(); // Function TheK25.S28P03.GetLingerDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57f51e0
};

