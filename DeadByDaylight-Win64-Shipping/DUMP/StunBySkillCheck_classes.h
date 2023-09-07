// BlueprintGeneratedClass StunBySkillCheck.StunBySkillCheck_C
// Size: 0x638 (Inherited: 0x630)
struct UStunBySkillCheck_C : UInteractionDefinition {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)

	bool CanOverrideInteraction(struct UInteractionDefinition* Interaction); // Function StunBySkillCheck.StunBySkillCheck_C.CanOverrideInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void GetCarriedCamper(struct ACamperPlayer*& camper); // Function StunBySkillCheck.StunBySkillCheck_C.GetCarriedCamper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	void GetSlasher(struct ASlasherPlayer*& Slasher); // Function StunBySkillCheck.StunBySkillCheck_C.GetSlasher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	bool IsInteractionPossibleBP(struct ADBDPlayer* Player, enum class EInputInteractionType interactionType); // Function StunBySkillCheck.StunBySkillCheck_C.IsInteractionPossibleBP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function StunBySkillCheck.StunBySkillCheck_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnInteractionEnterStart(struct ADBDPlayer* Player, float actualSnapTime); // Function StunBySkillCheck.StunBySkillCheck_C.OnInteractionEnterStart // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_StunBySkillCheck(int32_t EntryPoint); // Function StunBySkillCheck.StunBySkillCheck_C.ExecuteUbergraph_StunBySkillCheck // (Final|UbergraphFunction) // @ game+0x5e02c90
};

