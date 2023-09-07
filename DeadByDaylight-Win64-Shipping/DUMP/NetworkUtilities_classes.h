// Class NetworkUtilities.NetSynchedClock
// Size: 0xd8 (Inherited: 0xb8)
struct UNetSynchedClock : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	float _serverTimeUpdateDelay; // 0xc0(0x04)
	char pad_C4[0x14]; // 0xc4(0x14)

	void Server_RequestServerTime(); // Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x82330c0
	void Client_ReportServerTime(float serverTime); // Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x5481e10
};

// Class NetworkUtilities.NetUtils
// Size: 0x30 (Inherited: 0x30)
struct UNetUtils : UBlueprintFunctionLibrary {

	bool IsDedicatedServerInstance(struct UObject* WorldContextObject); // Function NetworkUtilities.NetUtils.IsDedicatedServerInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8233270
};

// Class NetworkUtilities.NetworkFenceActor
// Size: 0x2a8 (Inherited: 0x230)
struct ANetworkFenceActor : AActor {
	char pad_230[0x78]; // 0x230(0x78)

	void Server_ClientPassedFence(struct TArray<struct FGuid> Fences); // Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x82336f0
	void Client_AllPassedFence(struct TArray<struct FGuid> Fences); // Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence // (Final|Net|NetReliableNative|Event|Private|NetClient|NetValidate) // @ game+0x8233630
};

// Class NetworkUtilities.ServerCorrectionDisablerComponent
// Size: 0x108 (Inherited: 0xb8)
struct UServerCorrectionDisablerComponent : UActorComponent {
	char pad_B8[0x50]; // 0xb8(0x50)

	void SetServerCorrectionEnabled(bool Enabled, struct FGameplayTag Channel); // Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x8236bc0
	void Multicast_SetServerCorrectionEnabled(bool Enabled, struct FGameplayTag Channel); // Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x8236ac0
	bool GetServerCorrectionEnabled(); // Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8236a90
};

// Class NetworkUtilities.ServerTimeProviderComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UServerTimeProviderComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class NetworkUtilities.TimerObject
// Size: 0x138 (Inherited: 0xb8)
struct UTimerObject : UActorComponent {
	char pad_B8[0x60]; // 0xb8(0x60)
	struct FReplicationTimerData _replicationData; // 0x118(0x14)
	char pad_12C[0xc]; // 0x12c(0x0c)

	void OnRep_TimerDataUpdated(struct FReplicationTimerData OldData); // Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated // (Final|Native|Private) // @ game+0x8237b10
	bool IsTimerActive(); // Function NetworkUtilities.TimerObject.IsTimerActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8237ae0
	bool IsPaused(); // Function NetworkUtilities.TimerObject.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8237ab0
	bool IsDone(); // Function NetworkUtilities.TimerObject.IsDone // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8237a80
	float GetRemainingTimePercent(); // Function NetworkUtilities.TimerObject.GetRemainingTimePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8237a50
	float GetRemainingTime(); // Function NetworkUtilities.TimerObject.GetRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8237a20
	float GetElapsedTimePercent(); // Function NetworkUtilities.TimerObject.GetElapsedTimePercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x82379f0
	float GetElapsedTime(); // Function NetworkUtilities.TimerObject.GetElapsedTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x82379c0
	float GetDuration(); // Function NetworkUtilities.TimerObject.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8237990
	struct UTimerObject* CreateTimer(struct AActor* Owner); // Function NetworkUtilities.TimerObject.CreateTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8237900
	void Authority_Unpause(); // Function NetworkUtilities.TimerObject.Authority_Unpause // (Final|Native|Public|BlueprintCallable) // @ game+0x82378e0
	void Authority_Start(float Duration); // Function NetworkUtilities.TimerObject.Authority_Start // (Final|Native|Public|BlueprintCallable) // @ game+0x8237860
	void Authority_SetPaused(bool paused); // Function NetworkUtilities.TimerObject.Authority_SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x82377d0
	void Authority_Pause(); // Function NetworkUtilities.TimerObject.Authority_Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x82377b0
	void Authority_Clear(); // Function NetworkUtilities.TimerObject.Authority_Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x8237790
};

