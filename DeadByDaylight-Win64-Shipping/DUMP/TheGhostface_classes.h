// Class TheGhostface.Addon_Ghost_DriversLicense
// Size: 0x320 (Inherited: 0x2b8)
struct UAddon_Ghost_DriversLicense : UItemAddon {
	struct FDBDTunableRowHandle _progressLoss; // 0x2b8(0x28)
	struct FDBDTunableRowHandle _blockedTime; // 0x2e0(0x28)
	char pad_308[0x18]; // 0x308(0x18)
};

// Class TheGhostface.Addon_Ghost_OlsensAddressBook
// Size: 0x2d8 (Inherited: 0x2d8)
struct UAddon_Ghost_OlsensAddressBook : UImposeStatusEffectOnEventAddon {
};

// Class TheGhostface.GhostChargeStalkModeInteraction
// Size: 0x650 (Inherited: 0x640)
struct UGhostChargeStalkModeInteraction : UBaseStalkModeInteraction {
	char pad_640[0x10]; // 0x640(0x10)

	struct UGhostStealthComponent* GetStealthComponent(); // Function TheGhostface.GhostChargeStalkModeInteraction.GetStealthComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x573d5c0
};

// Class TheGhostface.GhostfaceCrouchAttack
// Size: 0x390 (Inherited: 0x390)
struct UGhostfaceCrouchAttack : UPounceAttack {
};

// Class TheGhostface.GhostKillerAnalyticsComponent
// Size: 0x208 (Inherited: 0xb8)
struct UGhostKillerAnalyticsComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)
	struct FGhostKillerAnalytics _ghostKillerAnalytics; // 0xf0(0xf0)
	char pad_1E0[0x28]; // 0x1e0(0x28)

	void Local_OnStalkModeChanged(bool IsInStalkMode); // Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged // (Final|Native|Private) // @ game+0x573dcd0
	void Local_OnLeanStateChanged(enum class ELeanState leanState); // Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged // (Final|Native|Private) // @ game+0x573dc50
	void Local_OnIsStealthChanged(bool IsStealth); // Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged // (Final|Native|Private) // @ game+0x573dbc0
	void Authority_OnStalkChargePercentChanged(struct UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged // (Final|Native|Private) // @ game+0x573dab0
	void Authority_OnPreAttackSuccess(struct FGameplayTag GameplayTag, struct FGameEventData& GameEventData); // Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess // (Final|Native|Private|HasOutParms) // @ game+0x573d9a0
};

// Class TheGhostface.GhostStalkedComponent
// Size: 0x320 (Inherited: 0xb8)
struct UGhostStalkedComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnIsMarkedChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnIsSpottingKillerChanged; // 0xd0(0x10)
	struct UStatusEffect* _ghostMarkedEffectClass; // 0xe0(0x08)
	struct UStatusEffect* _ghostKillerInstinctClass; // 0xe8(0x08)
	struct FTagStateBool _isMarked; // 0xf0(0x30)
	char pad_120[0x8]; // 0x120(0x08)
	struct UStatusEffect* _ghostKillerInstinctEffect; // 0x128(0x08)
	char pad_130[0x30]; // 0x130(0x30)
	struct UTimerObject* _markTimer; // 0x160(0x08)
	struct FTunableStat _killerInstinctDuration; // 0x168(0x80)
	struct FTunableStat _markDuration; // 0x1e8(0x80)
	struct FDBDTunableRowHandle _stalkPointsDepleteDelay; // 0x268(0x28)
	struct ASlasherPlayer* _killer; // 0x290(0x08)
	struct UStalkedComponent* _stalkedComponent; // 0x298(0x08)
	char pad_2A0[0x80]; // 0x2a0(0x80)

	void OnKillerSpottedChanged(struct ADBDPlayer* spotter, bool spotted); // Function TheGhostface.GhostStalkedComponent.OnKillerSpottedChanged // (Final|Native|Private) // @ game+0x573e340
	void OnIsSpottingKiller__DelegateSignature(bool isSpotting); // DelegateFunction TheGhostface.GhostStalkedComponent.OnIsSpottingKiller__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnIsMarkedChanged__DelegateSignature(bool IsMarked); // DelegateFunction TheGhostface.GhostStalkedComponent.OnIsMarkedChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void Local_OnSpotKiller(); // Function TheGhostface.GhostStalkedComponent.Local_OnSpotKiller // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsMarked(); // Function TheGhostface.GhostStalkedComponent.IsMarked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x573e310
	void Initialize(struct ASlasherPlayer* killer); // Function TheGhostface.GhostStalkedComponent.Initialize // (Native|Event|Protected|BlueprintEvent) // @ game+0x55700e0
	void DBD_DebugGhost(bool debug); // Function TheGhostface.GhostStalkedComponent.DBD_DebugGhost // (Final|Exec|Native|Private) // @ game+0x46a2400
	void Client_OnSpotKiller(); // Function TheGhostface.GhostStalkedComponent.Client_OnSpotKiller // (Net|Native|Event|Public|NetClient) // @ game+0x4aa7040
	void Authority_OnStalkedChargeFull(bool COMPLETED, struct TArray<struct AActor*>& instigatorsForCompletion); // Function TheGhostface.GhostStalkedComponent.Authority_OnStalkedChargeFull // (Final|Native|Private|HasOutParms) // @ game+0x573e210
};

// Class TheGhostface.GhostStalkPowerComponent
// Size: 0x210 (Inherited: 0xb8)
struct UGhostStalkPowerComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct UStalkerComponent* _stalkerComponent; // 0xe8(0x08)
	struct TSoftClassPtr<UObject> _ghostStalkedComponentClassPtr; // 0xf0(0x30)
	float _crouchAttackRequiredTimeSeconds; // 0x120(0x04)
	char pad_124[0xc]; // 0x124(0x0c)
	bool _debugMode; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FDBDTunableRowHandle _maxStalkPointsPerSurvivor; // 0x138(0x28)
	struct FTunableStat _survivorMaximumSightDistance; // 0x160(0x80)
	char pad_1E0[0x30]; // 0x1e0(0x30)

	void RefreshSurvivorMaximumSightDistance(); // Function TheGhostface.GhostStalkPowerComponent.RefreshSurvivorMaximumSightDistance // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x573e7b0
	void OnLeanStateChanged(enum class ELeanState leanState); // Function TheGhostface.GhostStalkPowerComponent.OnLeanStateChanged // (Final|Native|Private) // @ game+0x573e730
	void OnIsCrouchedChanged(bool isCrouched); // Function TheGhostface.GhostStalkPowerComponent.OnIsCrouchedChanged // (Final|Native|Private) // @ game+0x573e6a0
	void Authority_OnStalkModeChanged(bool IsInStalkMode); // Function TheGhostface.GhostStalkPowerComponent.Authority_OnStalkModeChanged // (Final|Native|Private) // @ game+0x573e610
};

// Class TheGhostface.GhostStealthComponent
// Size: 0x368 (Inherited: 0xb8)
struct UGhostStealthComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnSuccessfulAttackInStealth; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnStealthStateChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnIsStealthChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnIsBeingSpotChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate Local_OnStealthCancelledByPlayer; // 0x100(0x10)
	enum class EGhostStealthState _stealthState; // 0x110(0x01)
	char pad_111[0x4f]; // 0x111(0x4f)
	struct UTimerObject* _cooldownTimer; // 0x160(0x08)
	struct TMap<struct ACharacter*, struct TWeakObjectPtr<struct UScreenIndicatorWorldMarkerComponent>> _markers; // 0x168(0x50)
	struct FTunableStat _cooldownDuration; // 0x1b8(0x80)
	struct FNonTunableStat _keepStealthOnAttackMiss; // 0x238(0x60)
	struct FDBDTunableRowHandle _markerMinVisibleDistance; // 0x298(0x28)
	struct FDBDTunableRowHandle _markerLifetime; // 0x2c0(0x28)
	struct FDBDTunableRowHandle _stealthTerrorRadius; // 0x2e8(0x28)
	float _markerMaxAngleOffset; // 0x310(0x04)
	bool _useKillerInstinctWhenSpotted; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct USightRevealableComponent* _sightRevealableComponent; // 0x318(0x08)
	struct UStalkerComponent* _stalkerComponent; // 0x320(0x08)
	char pad_328[0x40]; // 0x328(0x40)

	void SetRedStainVisibility(bool visible); // Function TheGhostface.GhostStealthComponent.SetRedStainVisibility // (Final|Native|Private|Const) // @ game+0x573f140
	void OnSuccessfulAttackInStealth__DelegateSignature(struct ADBDPlayer* Target); // DelegateFunction TheGhostface.GhostStealthComponent.OnSuccessfulAttackInStealth__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnStealthStateChanged__DelegateSignature(enum class EGhostStealthState stealthState); // DelegateFunction TheGhostface.GhostStealthComponent.OnStealthStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnStealthCancelledByPlayer__DelegateSignature(struct ADBDPlayer* Player); // DelegateFunction TheGhostface.GhostStealthComponent.OnStealthCancelledByPlayer__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnRep_StealthState(enum class EGhostStealthState previousState); // Function TheGhostface.GhostStealthComponent.OnRep_StealthState // (Final|Native|Private) // @ game+0x573f0c0
	void OnIsStealthChanged__DelegateSignature(bool IsStealth); // DelegateFunction TheGhostface.GhostStealthComponent.OnIsStealthChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnIsBeingSpotChanged__DelegateSignature(struct ADBDPlayer* spotter, bool isBeingSpot); // DelegateFunction TheGhostface.GhostStealthComponent.OnIsBeingSpotChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void Multicast_OnPlayerSpottedKiller(struct ADBDPlayer* spotter); // Function TheGhostface.GhostStealthComponent.Multicast_OnPlayerSpottedKiller // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d51430
	void Multicast_OnIsBeingSpottedChanged(struct ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor); // Function TheGhostface.GhostStealthComponent.Multicast_OnIsBeingSpottedChanged // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x573efa0
	void Multicast_BroadcastOnSuccessfulAttackInStealth(struct ADBDPlayer* Target); // Function TheGhostface.GhostStealthComponent.Multicast_BroadcastOnSuccessfulAttackInStealth // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x566baf0
	bool IsStealthReadyToActivate(); // Function TheGhostface.GhostStealthComponent.IsStealthReadyToActivate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x573ef70
	bool IsStealth(); // Function TheGhostface.GhostStealthComponent.IsStealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x573ef40
	enum class EGhostStealthState GetStealthState(); // Function TheGhostface.GhostStealthComponent.GetStealthState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x573ef20
	float GetStealthChargePercent(); // Function TheGhostface.GhostStealthComponent.GetStealthChargePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x573eef0
	void DBD_ResetGhostStealth(); // Function TheGhostface.GhostStealthComponent.DBD_ResetGhostStealth // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void Client_SpawnMarkerOnCharacter(struct ACharacter* revealer); // Function TheGhostface.GhostStealthComponent.Client_SpawnMarkerOnCharacter // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x5490b20
	void Authority_TryActivateStealth(); // Function TheGhostface.GhostStealthComponent.Authority_TryActivateStealth // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x573eed0
	void Authority_ResetGhostStealth(); // Function TheGhostface.GhostStealthComponent.Authority_ResetGhostStealth // (Final|Native|Public|BlueprintCallable) // @ game+0x4032ad0
};

// Class TheGhostface.K16AnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UK16AnimInstance : UKillerAnimInstance {
	bool _isInStalkMode; // 0x610(0x01)
	bool _isGhostStealth; // 0x611(0x01)
	bool _isInChase; // 0x612(0x01)
	bool _isStalking; // 0x613(0x01)
	float _distanceFromCamera; // 0x614(0x04)
	float _leanOffset; // 0x618(0x04)
	bool _isCrouched; // 0x61c(0x01)
	bool _isCrouchPressed; // 0x61d(0x01)
	char pad_61E[0x2]; // 0x61e(0x02)
};

// Class TheGhostface.TheGhostUtilities
// Size: 0x30 (Inherited: 0x30)
struct UTheGhostUtilities : UBlueprintFunctionLibrary {

	bool IsKillerStealth(struct AActor* killer); // Function TheGhostface.TheGhostUtilities.IsKillerStealth // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x573f6c0
};

