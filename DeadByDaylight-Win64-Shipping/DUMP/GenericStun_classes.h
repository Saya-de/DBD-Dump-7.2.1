// BlueprintGeneratedClass GenericStun.GenericStun_C
// Size: 0x648 (Inherited: 0x630)
struct UGenericStun_C : UInteractionDefinition {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct TArray<struct FString> ForceOverrideableInteractions; // 0x638(0x10)

	void DispatchStunEvent(struct ADBDPlayer* Player); // Function GenericStun.GenericStun_C.DispatchStunEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool CanOverrideInteraction(struct UInteractionDefinition* Interaction); // Function GenericStun.GenericStun_C.CanOverrideInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	bool IsInteractionPossibleBP(struct ADBDPlayer* Player, enum class EInputInteractionType interactionType); // Function GenericStun.GenericStun_C.IsInteractionPossibleBP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	void OnInteractionUpdateStart(struct ADBDPlayer* Player); // Function GenericStun.GenericStun_C.OnInteractionUpdateStart // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnInteractionFinished(struct ADBDPlayer* Player, bool hasInteractionStarted); // Function GenericStun.GenericStun_C.OnInteractionFinished // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_GenericStun(int32_t EntryPoint); // Function GenericStun.GenericStun_C.ExecuteUbergraph_GenericStun // (Final|UbergraphFunction) // @ game+0x5e02c90
};

