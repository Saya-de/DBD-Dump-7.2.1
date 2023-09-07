// BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C
// Size: 0x48 (Inherited: 0x48)
struct UActionSpeedProficiency_C : UInteractionProficiency {

	struct TArray<struct ADBDPlayer*> FetchInteractingPlayers(struct UInteractionDefinition* Chargeable Interaction, struct ADBDPlayer* Interacting Player); // Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	float Compute Overall speed including multiple interactors(struct UChargeableInteractionDefinition* Chargeable Interaction, struct ADBDPlayer* Interacting Player); // Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	bool ShouldAndCanShowMultipleActorsSpeedProficiency(struct UChargeableInteractionDefinition* Chargeable Interaction); // Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	float GetValue(struct UChargeableInteractionDefinition* chargeableInteraction, struct ADBDPlayer* Player); // Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
};

