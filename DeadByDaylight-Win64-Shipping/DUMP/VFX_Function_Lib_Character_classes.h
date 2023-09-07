// BlueprintGeneratedClass VFX_Function_Lib_Character.VFX_Function_Lib_Character_C
// Size: 0x30 (Inherited: 0x30)
struct UVFX_Function_Lib_Character_C : UBlueprintFunctionLibrary {

	void Spawn Niagara Particles Character Dissolve(bool Killer, struct AActor* Actor, struct UCustomizedSkeletalMesh* CustomizedSkeletalMesh, bool Out, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.Spawn Niagara Particles Character Dissolve // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnFootstepKillerVFX(bool Run, bool Left, struct ASlasherPlayer* SlasherPlayer, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepKillerVFX // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SpawnFootstepVFX(bool Run, bool Left, struct ACamperPlayer* CamperCharacter, struct UObject* __WorldContext, bool& Bloody Footprints, struct FName& Footprint Socket, int32_t& Surface Type); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepVFX // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ManageInteractiveMist(struct APawn* Pawn, struct UActorComponent* MistActor, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.ManageInteractiveMist // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void MakeCharacter_Visible(struct ADBDPlayer* Character, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Visible // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void MakeCharacter_Invisible(struct ADBDPlayer* Character, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Invisible // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void MaskFPV_Visible(struct ADBDPlayer* Character, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Visible // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void MaskFPV_Hidden(struct ADBDPlayer* Character, struct UObject* __WorldContext); // Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Hidden // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

