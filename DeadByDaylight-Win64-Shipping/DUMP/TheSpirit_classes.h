// Class TheSpirit.ActivePhaseWalkInteraction
// Size: 0x8d0 (Inherited: 0x760)
struct UActivePhaseWalkInteraction : UChargeableInteractionDefinition {
	struct FTunableStat _fullyChargedSpeed; // 0x758(0x80)
	float _accelerationMultiplier; // 0x7d8(0x04)
	struct UCurveFloat* _chargingSpeedCurve; // 0x7e0(0x08)
	struct FDBDTunableRowHandle _phaseWalkPenaltyThreshold; // 0x7e8(0x28)
	struct FDBDTunableRowHandle _phaseWalkPenaltyValue; // 0x810(0x28)
	char pad_83C[0x4]; // 0x83c(0x04)
	struct FTunableStat _activePhaseWalkChargeDuration; // 0x840(0x80)
	struct UAnimMontage* _activePhaseWalkChargingMontage; // 0x8c0(0x08)
	char pad_8C8[0x8]; // 0x8c8(0x08)

	void OnPowerCollected(struct ADBDPlayer* collector); // Function TheSpirit.ActivePhaseWalkInteraction.OnPowerCollected // (Final|Native|Private) // @ game+0x5a455b0
	void OnPlayerLocallyObservedChanged(struct ADBDPlayer* Player); // Function TheSpirit.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged // (Final|Native|Private) // @ game+0x5a45520
	float GetChargeTime(); // Function TheSpirit.ActivePhaseWalkInteraction.GetChargeTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a454f0
	void Cosmetic_ResetChargeVFX(struct ADBDPlayer* Player); // Function TheSpirit.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheSpirit.Autodidact
// Size: 0x3e8 (Inherited: 0x3c8)
struct UAutodidact : UPerk {
	int32_t _maxTokenCountPerLevel[0x3]; // 0x3c8(0x0c)
	float _progressionBonusPerToken; // 0x3d4(0x04)
	float _initialSkillCheckProgressionPenalty; // 0x3d8(0x04)
	char pad_3DC[0xc]; // 0x3dc(0x0c)
};

// Class TheSpirit.Deliverance
// Size: 0x3e8 (Inherited: 0x3c8)
struct UDeliverance : UPerk {
	float _brokenEffectDurationPerLevel[0x3]; // 0x3c8(0x0c)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UStatusEffect* _selfUnhookAlwaysSucceedEffectClass; // 0x3d8(0x08)
	struct UStatusEffect* _selfUnhookAlwaysSucceedEffect; // 0x3e0(0x08)

	float GetBrokenEffectDurationAtLevel(); // Function TheSpirit.Deliverance.GetBrokenEffectDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd5d0
};

// Class TheSpirit.Diversion
// Size: 0x438 (Inherited: 0x3c8)
struct UDiversion : UPerk {
	char pad_3C8[0x60]; // 0x3c8(0x60)
	float _diversionActivationTimePerLevel[0x3]; // 0x428(0x0c)
	float _throwPebbleDistance; // 0x434(0x04)

	void Authority_OnOwningSurvivorDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged // (Final|Native|Private) // @ game+0x5a45a30
};

// Class TheSpirit.DriedCherryBlossom
// Size: 0x2e0 (Inherited: 0x2d8)
struct UDriedCherryBlossom : USimpleSpawnEffectsOnAllSurvivorsAddon {
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class TheSpirit.KatsumoriTalisman
// Size: 0x2d8 (Inherited: 0x2b8)
struct UKatsumoriTalisman : UItemAddon {
	struct TArray<struct AActor*> _blockableWindows; // 0x2b8(0x10)
	float _explosionRadius; // 0x2c8(0x04)
	float _blockDuration; // 0x2cc(0x04)
	char pad_2D0[0x8]; // 0x2d0(0x08)
};

// Class TheSpirit.MotherDaughterRing
// Size: 0x2c0 (Inherited: 0x2b8)
struct UMotherDaughterRing : UItemAddon {
	struct UStatusEffect* _hideFootstepsEffect; // 0x2b8(0x08)
};

// Class TheSpirit.OwningPlayerInSpiritHuskRange
// Size: 0x110 (Inherited: 0x100)
struct UOwningPlayerInSpiritHuskRange : UAnyActorPairQueryRangeIsTrue {
	char pad_100[0x10]; // 0x100(0x10)

	void OnKillerSet(struct ASlasherPlayer* killer); // Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet // (Final|Native|Public) // @ game+0x5a46160
};

// Class TheSpirit.PhaseWalkingComponent
// Size: 0x650 (Inherited: 0xb8)
struct UPhaseWalkingComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnPhaseWalkInfoReceived; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnGameEndedVFX; // 0xd0(0x10)
	struct FMulticastInlineDelegate TriggerSurvivorVisibilityVFX; // 0xe0(0x10)
	struct FMulticastInlineDelegate TriggerKillerVisibilityVFX; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnMaxActivePhaseWalkCharges; // 0x100(0x10)
	struct AActor* _huskClass; // 0x110(0x08)
	struct FTagStateBool _isActivePhaseWalking; // 0x118(0x30)
	struct FTagStateBool _isPassivePhaseWalking; // 0x148(0x30)
	struct FTagStateBool _isInPostActivePhaseWalk; // 0x178(0x30)
	bool _isInteractionPhaseWalking; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct AActor* _husk; // 0x1b0(0x08)
	struct FDBDBidirectionalTimer _activePhaseWalkCharges; // 0x1b8(0x28)
	char pad_1E0[0x28]; // 0x1e0(0x28)
	bool _survivorsAreVisible; // 0x208(0x01)
	char pad_209[0x3f]; // 0x209(0x3f)
	int32_t _passivePhaseWalkHusksCount; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<struct FGameplayTag> _isVisibleDuringPhaseWalkTags; // 0x250(0x10)
	struct FTunableStat _activePhaseWalkChargeGainRate; // 0x260(0x80)
	struct FTunableStat _passivePhaseWalkDuration; // 0x2e0(0x80)
	struct FDBDTunableRowHandle _passivePhaseWalkFirstCooldownDuration; // 0x360(0x28)
	struct FTunableStat _passivePhaseWalkCooldownDurationMin; // 0x388(0x80)
	struct FTunableStat _passivePhaseWalkCooldownDurationMax; // 0x408(0x80)
	struct FTunableStat _activePhaseWalkMaxCharge; // 0x488(0x80)
	struct FTunableStat _postActivePhaseWalkDuration; // 0x508(0x80)
	struct FDBDTunableRowHandle _activePhaseWalkMaxAcceleration; // 0x588(0x28)
	struct FDBDTunableRowHandle _defaultMaxAcceleration; // 0x5b0(0x28)
	struct UCurveFloat* _postPhaseWalkSpeedCurve; // 0x5d8(0x08)
	char pad_5E0[0x70]; // 0x5e0(0x70)

	void UpdateSurvivorVisibility(bool visible); // Function TheSpirit.PhaseWalkingComponent.UpdateSurvivorVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x5a47290
	void UpdateKillerVisibility(); // Function TheSpirit.PhaseWalkingComponent.UpdateKillerVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x5a47270
	void SpawnPassivePhaseWalkHusks(); // Function TheSpirit.PhaseWalkingComponent.SpawnPassivePhaseWalkHusks // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Server_Broadcast_PhaseWalk(struct FPhaseWalkInfo PhaseWalkInfo); // Function TheSpirit.PhaseWalkingComponent.Server_Broadcast_PhaseWalk // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x5a47180
	void RefillActivePhaseWalkCharges(); // Function TheSpirit.PhaseWalkingComponent.RefillActivePhaseWalkCharges // (Final|Native|Protected|BlueprintCallable) // @ game+0x5a47160
	void OnLevelReadyToPlay(); // Function TheSpirit.PhaseWalkingComponent.OnLevelReadyToPlay // (Final|Native|Private) // @ game+0x5a47140
	void Multicast_Broadcast_PhaseWalk(struct FPhaseWalkInfo PhaseWalkInfo); // Function TheSpirit.PhaseWalkingComponent.Multicast_Broadcast_PhaseWalk // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0x5a47050
	void ModifyActivePhaseWalkCharges(float Delta); // Function TheSpirit.PhaseWalkingComponent.ModifyActivePhaseWalkCharges // (Final|Native|Public|BlueprintCallable) // @ game+0x5a46fd0
	void MakePassivePhaseWalkHusksVisible(struct FTransform& huskTransform, float opacityValue, float speedValue); // Function TheSpirit.PhaseWalkingComponent.MakePassivePhaseWalkHusksVisible // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Local_PhaseWalk(struct FPhaseWalkInfo& PhaseWalkInfo); // Function TheSpirit.PhaseWalkingComponent.Local_PhaseWalk // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5a46f00
	void Local_EndPhaseWalks(); // Function TheSpirit.PhaseWalkingComponent.Local_EndPhaseWalks // (Final|Native|Public|BlueprintCallable) // @ game+0x5a46ee0
	bool IsPhaseWalking(); // Function TheSpirit.PhaseWalkingComponent.IsPhaseWalking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46eb0
	bool IsPassivePhaseWalking(); // Function TheSpirit.PhaseWalkingComponent.IsPassivePhaseWalking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46e80
	bool IsDecoyActive(); // Function TheSpirit.PhaseWalkingComponent.IsDecoyActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46e50
	bool IsActivePhaseWalking(); // Function TheSpirit.PhaseWalkingComponent.IsActivePhaseWalking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46e10
	int32_t GetSpiritPassivePhaseWalkHusksCountToSpawn(); // Function TheSpirit.PhaseWalkingComponent.GetSpiritPassivePhaseWalkHusksCountToSpawn // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46de0
	struct FDBDTimer GetPassivePhaseWalkTimer(); // Function TheSpirit.PhaseWalkingComponent.GetPassivePhaseWalkTimer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46d80
	struct AActor* GetHusk(); // Function TheSpirit.PhaseWalkingComponent.GetHusk // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46d50
	struct UDecoySlasherComponent* GetDecoySlasherComponent(); // Function TheSpirit.PhaseWalkingComponent.GetDecoySlasherComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46d20
	float GetActivePhaseWalkCharges(); // Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkCharges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46cf0
	float GetActivePhaseWalkChargePercentage(); // Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkChargePercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46cb0
	void DBD_RefillActivePhaseWalkCharges(); // Function TheSpirit.PhaseWalkingComponent.DBD_RefillActivePhaseWalkCharges // (Final|Exec|Native|Private) // @ game+0x4032ad0
	bool CanStartActivePhaseWalk(); // Function TheSpirit.PhaseWalkingComponent.CanStartActivePhaseWalk // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a46c70
	void Authority_SetIsInPostActivePhaseWalk(bool value); // Function TheSpirit.PhaseWalkingComponent.Authority_SetIsInPostActivePhaseWalk // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5a46be0
};

// Class TheSpirit.Rancor
// Size: 0x3e8 (Inherited: 0x3c8)
struct URancor : UPerk {
	float _survivorRevealDuration; // 0x3c8(0x04)
	float _killerRevealToObsessionDuration[0x3]; // 0x3cc(0x0c)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct UStatusEffect* _exposedStatusEffect; // 0x3e0(0x08)

	void SpawnBubbleAtSurvivorsLocation(); // Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	float GetSurvivorRevealDuration(); // Function TheSpirit.Rancor.GetSurvivorRevealDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ceee40
	float GetKillerRevealToObsessionDurationAtLevel(); // Function TheSpirit.Rancor.GetKillerRevealToObsessionDurationAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cdd6f0
};

// Class TheSpirit.SpiritFury
// Size: 0x3d8 (Inherited: 0x3c8)
struct USpiritFury : UPerk {
	char pad_3C8[0x4]; // 0x3c8(0x04)
	int32_t _palletToBreakCountPerLevel[0x3]; // 0x3cc(0x0c)

	int32_t GetPalletToBreakCountAtLevel(); // Function TheSpirit.SpiritFury.GetPalletToBreakCountAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a47700
};

// Class TheSpirit.SpiritHuskAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct USpiritHuskAnimInstance : UAnimInstance {
	struct USkeletalMeshComponent* _killerMesh; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance
// Size: 0x300 (Inherited: 0x2d0)
struct USpiritHuskActivePhaseWalkAnimInstance : USpiritHuskAnimInstance {
	float _elapsedTimeSinceFakingRealKillerPose; // 0x2d0(0x04)
	float _idleAnimationExplicitTime; // 0x2d4(0x04)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct UAnimSequence* _idleAnimationSequence; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class TheSpirit.SpiritHuskOutlineUpdateStrategy
// Size: 0xe8 (Inherited: 0xc0)
struct USpiritHuskOutlineUpdateStrategy : UOutlineUpdateStrategy {
	char pad_C0[0x28]; // 0xc0(0x28)

	void OnSlasherSet(struct ASlasherPlayer* Slasher); // Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet // (Final|Native|Private) // @ game+0x5a47bc0
};

// Class TheSpirit.ThrowRockInteraction
// Size: 0x6a0 (Inherited: 0x630)
struct UThrowRockInteraction : UInteractionDefinition {
	struct FDBDTunableRowHandle _loudNoiseAudioRange; // 0x630(0x28)
	float _scratchMarksApplicationDelay; // 0x658(0x04)
	int32_t _scratchMarksCountToSpawn; // 0x65c(0x04)
	char pad_660[0x4]; // 0x660(0x04)
	float _diversionHeightOffset; // 0x664(0x04)
	char pad_668[0x38]; // 0x668(0x38)
};

