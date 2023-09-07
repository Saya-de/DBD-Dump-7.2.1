// BlueprintGeneratedClass LobbyDialogueComponent.LobbyDialogueComponent_C
// Size: 0x2b8 (Inherited: 0xb8)
struct ULobbyDialogueComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct TArray<struct FAkEventWithSubtitle> C1_OnSpawnFallback; // 0xc0(0x10)
	int32_t C1_PlayProbability; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FSpecificReactionDialogue> C2_OnSpawnReactToSpecificCharacter; // 0xd8(0x10)
	int32_t C2_PlayProbability; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FAkEventWithSubtitle> C3_OnSpawnReactToCharacterGroup; // 0xf0(0x10)
	struct TArray<struct FString> C3_CharacterGroup; // 0x100(0x10)
	int32_t C3_PlayProbability; // 0x110(0x04)
	struct FFloatRange C1_C2_C3_Delay; // 0x114(0x10)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FSpecificReactionDialogue> C4_OnGuestJoinedReactToSpecificCharacter; // 0x128(0x10)
	int32_t C4_PlayProbability; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FAkEventWithSubtitle> C5_OnGuestJoinedReactToCharacterGroup; // 0x140(0x10)
	struct TArray<struct FString> C5_CharacterGroup; // 0x150(0x10)
	int32_t C5_PlayProbability; // 0x160(0x04)
	struct FFloatRange C4_C5_Delay; // 0x164(0x10)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FAkEventWithSubtitle> C6_OnReadiedButOthersNotReady; // 0x178(0x10)
	int32_t C6_PlayProbability; // 0x188(0x04)
	struct FFloatRange C6_Delay; // 0x18c(0x10)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct TArray<struct FAkEventWithSubtitle> C7_OnPartyFilledWithCharacterGroup; // 0x1a0(0x10)
	struct TArray<struct FString> C7_CharacterGroup; // 0x1b0(0x10)
	int32_t C7_PlayProbability; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct TArray<struct FAkEventWithSubtitle> C8_OnStayInLobby; // 0x1c8(0x10)
	int32_t C8_PlayProbability; // 0x1d8(0x04)
	struct FFloatRange C8_Delay; // 0x1dc(0x10)
	bool C8_ShouldPlaySecondVoiceLine; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	int32_t C9_10_PlayProbability; // 0x1f0(0x04)
	struct FFloatRange C9_10_Delay; // 0x1f4(0x10)
	char pad_204[0x4]; // 0x204(0x04)
	struct TMap<struct UAkAudioEvent*, struct FAkEventWithSubtitle> C9_10_DialogueMap; // 0x208(0x50)
	struct FString C9_10_RespondingCharacterName; // 0x258(0x10)
	struct TArray<struct FAkEventWithSubtitle> C11_OnMaxPrestige; // 0x268(0x10)
	int32_t C11_PlayProbability; // 0x278(0x04)
	struct FFloatRange C11_Delay; // 0x27c(0x10)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UAkAudioEvent* AudioStopEvent; // 0x290(0x08)
	bool IsPlayingDialogue; // 0x298(0x01)
	bool IsPlayingC9_11; // 0x299(0x01)
	bool IsMuted; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct UAkAudioEvent* LastPlayedAkEvent; // 0x2a0(0x08)
	struct UAkComponent* LocalAudioTarget; // 0x2a8(0x08)
	struct ABP_Menu_Base_Camper_C* Player; // 0x2b0(0x08)

	void IsSpecificCharacterInLobby(struct FString& Character, bool& success); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.IsSpecificCharacterInLobby // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetPlayableEvents(struct TArray<struct FAkEventWithSubtitle>& AudioEvents, bool& ShouldPlay, struct TArray<struct FAkEventWithSubtitle>& PlayableEvents); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetPlayableEvents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void GetLocalCharacterName(struct FString& characterName); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetLocalCharacterName // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void FindSpecificDialogueForCharacter(struct TArray<struct FSpecificReactionDialogue>& ReactionDialogues, struct FString Character, struct TArray<struct FAkEventWithSubtitle>& Dialogue, bool& success); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.FindSpecificDialogueForCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC11(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC11 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC10(struct TMap<struct UAkAudioEvent*, struct FAkEventWithSubtitle>& ResponseDialogue, bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC10 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC9(struct TMap<struct UAkAudioEvent*, struct FAkEventWithSubtitle>& ResponseDialogue, bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC9 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC8(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC8 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC7(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC7 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC6(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC6 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC5(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC5 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC4(struct TArray<struct FAkEventWithSubtitle>& FoundDialogue, bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC4 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC3(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC3 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC2(struct TArray<struct FAkEventWithSubtitle>& FoundDialogue, bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC2 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void ShouldPlayC1(bool& ShouldPlay); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC1 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void OnPlayerMaxPrestige(struct UAkGameObject* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnPlayerMaxPrestige // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCharacterRespond(struct UAkComponent* AudioTarget, struct FString PreviousContext); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnCharacterRespond // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLobbyWait(struct UAkComponent* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLobbyWait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLocalReady(struct UAkComponent* AudioTarget, bool IsReady); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalReady // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnGuestSpawn(struct ADBDMenuPlayer* Guest, struct UAkComponent* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestSpawn // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLocalSpawn(struct UAkComponent* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalSpawn // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnGuestPlayerSpawn(struct ADBDMenuPlayer* Player, struct UAkComponent* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLocalPlayerReadyChanged(struct ADBDMenuPlayer* Player, struct UAkComponent* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerReadyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLocalPlayerSpawn(struct UAkComponent* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnDialogueFinished(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnAllPlayersReadyInOnlineLobby(); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnAllPlayersReadyInOnlineLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnGuestPlayerDespawned(struct ADBDMenuPlayer* Player); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBeginPlay(struct UAkComponent* AudioTarget, struct ABP_Menu_Base_Camper_C* Player); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnDialogueFinishedC2(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC2 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnDialogueFinishedC4(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC4 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnMaxPrestige(struct UAkGameObject* AudioTarget); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnMaxPrestige // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_LobbyDialogueComponent(int32_t EntryPoint); // Function LobbyDialogueComponent.LobbyDialogueComponent_C.ExecuteUbergraph_LobbyDialogueComponent // (Final|UbergraphFunction) // @ game+0x5e02c90
};

