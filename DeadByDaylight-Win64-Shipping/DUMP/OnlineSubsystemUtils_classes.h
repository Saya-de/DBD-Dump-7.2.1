// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x268 (Inherited: 0x230)
struct AOnlineBeacon : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	float BeaconConnectionInitialTimeout; // 0x238(0x04)
	float BeaconConnectionTimeout; // 0x23c(0x04)
	struct UNetDriver* NetDriver; // 0x240(0x08)
	char pad_248[0x20]; // 0x248(0x20)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x2c8 (Inherited: 0x268)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x268(0x08)
	struct UNetConnection* BeaconConnection; // 0x270(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x278(0x01)
	char pad_279[0x4f]; // 0x279(0x4f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x3dad230
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x258 (Inherited: 0x230)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x230(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x240(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x248(0x10)
};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da8ba0
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da8830
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da75a0
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da74d0
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da9610
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da7670
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0xa0 (Inherited: 0x38)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da7ea0
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da7ff0
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x88 (Inherited: 0x38)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da80c0
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da82f0
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x98 (Inherited: 0x38)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x40]; // 0x58(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3da93b0
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3da9190
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3da8f70
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3da8d50
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da84b0
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da8600
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da7830
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da7e10
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3da7b40
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da7740
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da7a30
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x70 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da7920
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da7cf0
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3da7bd0
};

// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1c68 (Inherited: 0x1bc8)
struct UIpConnection : UNetConnection {
	char pad_1BC8[0x50]; // 0x1bc8(0x50)
	float SocketErrorDisconnectDelay; // 0x1c18(0x04)
	char pad_1C1C[0x4c]; // 0x1c1c(0x4c)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x7f0 (Inherited: 0x780)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x780(0x01)
	char AllowPlayerPortUnreach : 1; // 0x780(0x01)
	char pad_780_2 : 6; // 0x780(0x01)
	char pad_781[0x3]; // 0x781(0x03)
	uint32_t MaxPortCountToTry; // 0x784(0x04)
	char pad_788[0xc]; // 0x788(0x0c)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x794(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x798(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x79c(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x7a0(0x04)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	double MaxSecondsInReceive; // 0x7a8(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x7b0(0x04)
	float ResolutionConnectionTimeout; // 0x7b4(0x04)
	char pad_7B8[0x38]; // 0x7b8(0x38)
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x188 (Inherited: 0x38)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x130]; // 0x58(0x130)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3dad690
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3dae8a0
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3dad4b0
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3dad5a0
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3dad7e0
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x320 (Inherited: 0x268)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x270(0x10)
	char pad_280[0xa0]; // 0x280(0xa0)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x198 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct TMap<struct FName, struct FName> MappedUniqueNetIdTypes; // 0x30(0x50)
	struct TArray<struct FName> CompatibleUniqueNetIdTypes; // 0x80(0x10)
	struct FName VoiceSubsystemNameOverride; // 0x90(0x0c)
	char pad_9C[0xfc]; // 0x9c(0xfc)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x60 (Inherited: 0x48)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x50(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x200 (Inherited: 0x30)
struct UOnlineSessionClient : UOnlineSession {
	char pad_30[0x1c8]; // 0x30(0x1c8)
	bool bIsFromInvite; // 0x1f8(0x01)
	bool bHandlingDisconnect; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x388 (Inherited: 0x2c8)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_2C8[0x30]; // 0x2c8(0x30)
	struct FString DestSessionId; // 0x2f8(0x10)
	struct FPartyReservation PendingReservation; // 0x308(0x50)
	enum class EClientRequestType RequestType; // 0x358(0x01)
	bool bPendingReservationSent; // 0x359(0x01)
	bool bCancelReservation; // 0x35a(0x01)
	char pad_35B[0x2d]; // 0x35b(0x2d)

	void ServerUpdateReservationRequest(struct FString SESSIONID, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dae540
	void ServerReservationRequest(struct FString SESSIONID, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dae0b0
	void ServerRemoveMemberFromReservationRequest(struct FString SESSIONID, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dade20
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dadd10
	void ServerAddOrUpdateReservationRequest(struct FString SESSIONID, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dada80
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad390
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad350
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad250
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad130
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x2d0 (Inherited: 0x258)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x258(0x08)
	char pad_260[0x60]; // 0x260(0x60)
	bool bLogoutOnSessionTimeout; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float SessionTimeoutSecs; // 0x2c4(0x04)
	float TravelSessionTimeoutSecs; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0xb0 (Inherited: 0x30)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	int32_t NumTeams; // 0x44(0x04)
	int32_t NumPlayersPerTeam; // 0x48(0x04)
	struct FName TeamAssignmentMethod; // 0x4c(0x0c)
	int32_t ReservedHostTeamNum; // 0x58(0x04)
	int32_t ForceTeamNum; // 0x5c(0x04)
	bool bRestrictCrossConsole; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FString> PlatformCrossplayRestrictions; // 0x68(0x10)
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x78(0x10)
	bool bEnableRemovalRequests; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FPartyReservation> Reservations; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3dad8b0
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x68 (Inherited: 0x38)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3dae7d0
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x3b0 (Inherited: 0x2c8)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	char pad_2C8[0x30]; // 0x2c8(0x30)
	struct FString DestSessionId; // 0x2f8(0x10)
	struct FSpectatorReservation PendingReservation; // 0x308(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x380(0x01)
	bool bPendingReservationSent; // 0x381(0x01)
	bool bCancelReservation; // 0x382(0x01)
	char pad_383[0x2d]; // 0x383(0x2d)

	void ServerReservationRequest(struct FString SESSIONID, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dae340
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3dadd10
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad420
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad370
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad2d0
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3dad1b0
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x2d0 (Inherited: 0x258)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x258(0x08)
	char pad_260[0x60]; // 0x260(0x60)
	bool bLogoutOnSessionTimeout; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float SessionTimeoutSecs; // 0x2c4(0x04)
	float TravelSessionTimeoutSecs; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x68 (Inherited: 0x30)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	bool bRestrictCrossConsole; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x2c8 (Inherited: 0x2c8)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3daf7d0
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3daf120
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x258 (Inherited: 0x258)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3daf6d0
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3daf4a0
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3daf2f0
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3daf140
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x740 (Inherited: 0x6e0)
struct UVoipListenerSynthComponent : USynthComponent {
	char pad_6E0[0x60]; // 0x6e0(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // @ game+0x3daf6a0
};

