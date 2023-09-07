// BlueprintGeneratedClass SlasherInteractable.SlasherInteractable_C
// Size: 0x3c0 (Inherited: 0x370)
struct ASlasherInteractable_C : APlayerInteractable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UGeneratorTrapStun_C* GeneratorTrapStun; // 0x378(0x08)
	struct UPalletStun_C* PalletStun; // 0x380(0x08)
	struct UClosetStun_C* ClosetStun; // 0x388(0x08)
	struct UStunBySkillCheck_C* StunBySkillCheck; // 0x390(0x08)
	struct UGenericStun_C* GenericStun; // 0x398(0x08)
	struct UGenericStun_C* KickStun; // 0x3a0(0x08)
	struct UGenericStun_C* EvilWithinStun; // 0x3a8(0x08)
	struct UInteractor* GenericStunInteractor; // 0x3b0(0x08)
	struct USceneComponent* Root; // 0x3b8(0x08)

	void GetSlasher(struct ASlasherPlayer*& Slasher); // Function SlasherInteractable.SlasherInteractable_C.GetSlasher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool IsInteractionPossibleInternal(struct ADBDPlayer* Player, struct UInteractor* Interactor, struct UInteractionDefinition* definition, enum class EInputInteractionType interactionType); // Function SlasherInteractable.SlasherInteractable_C.IsInteractionPossibleInternal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x5e02c90
	void InitInteractable(struct ADBDPlayer* Player); // Function SlasherInteractable.SlasherInteractable_C.InitInteractable // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_SlasherInteractable(int32_t EntryPoint); // Function SlasherInteractable.SlasherInteractable_C.ExecuteUbergraph_SlasherInteractable // (Final|UbergraphFunction) // @ game+0x5e02c90
};

