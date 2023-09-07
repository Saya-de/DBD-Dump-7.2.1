// BlueprintGeneratedClass EndGameEffectsComponent.EndGameEffectsComponent_C
// Size: 0x178 (Inherited: 0xb8)
struct UEndGameEffectsComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct FGameEventDispatcherHandleBP updateTimerHandler; // 0xc0(0x20)
	struct FGameEventDispatcherHandleBP ReminderHandler; // 0xe0(0x20)
	struct FGameEventDispatcherHandleBP endGameOverHandler; // 0x100(0x20)
	struct UCurveFloat* EndGameGroundPulsing; // 0x120(0x08)
	struct UCurveFloat* EndGameGroundIntensity; // 0x128(0x08)
	bool PlayCameraShakeOnce; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UParticleSystemComponent* P_EndGame_Embers; // 0x138(0x08)
	struct UCurveFloat* EndGameEmberRate; // 0x140(0x08)
	struct FGameEventDispatcherHandleBP timeDilationChangedHandler; // 0x148(0x20)
	bool HasEndGameBegun; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UCameraShakeBase* CurrentCameraShakeRef; // 0x170(0x08)

	void StopCameraShake(); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.StopCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayCameraShake(struct UMatineeCameraShake* CameraShake); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.PlayCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetDBDPlayer(struct ADBDPlayer*& Player); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.GetDBDPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnTimeDilationChanged(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnTimeDilationChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveTick(float DeltaSeconds); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ReminderEffect(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReminderEffect // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void StartUpdateTimer(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartUpdateTimer // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLocallyObservedChanged(struct ADBDPlayer* Player); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnLocallyObservedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void StartEndGameEffects(bool JustStarted); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartEndGameEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RegisterLocallyObservedEvents(); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.RegisterLocallyObservedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UnregisterLocallyObservedEvents(); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.UnregisterLocallyObservedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EndGameOver(struct FGameplayTag gameEventType, struct FGameEventData& GameEventData); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.EndGameOver // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_EndGameEffectsComponent(int32_t EntryPoint); // Function EndGameEffectsComponent.EndGameEffectsComponent_C.ExecuteUbergraph_EndGameEffectsComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

