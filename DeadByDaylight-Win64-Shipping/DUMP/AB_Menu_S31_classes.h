// AnimBlueprintGeneratedClass AB_Menu_S31.AB_Menu_S31_C
// Size: 0x1b21 (Inherited: 0x1b18)
struct UAB_Menu_S31_C : UAB_Menu_Camper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b18(0x08)
	bool radioInterruptTransition; // 0x1b20(0x01)

	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_S31.AB_Menu_S31_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IsPlayingMenuInterruptFromTransition(); // Function AB_Menu_S31.AB_Menu_S31_C.AnimNotify_IsPlayingMenuInterruptFromTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IsLeavingMenuInterruptFromTransition(); // Function AB_Menu_S31.AB_Menu_S31_C.AnimNotify_IsLeavingMenuInterruptFromTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_S31(int32_t EntryPoint); // Function AB_Menu_S31.AB_Menu_S31_C.ExecuteUbergraph_AB_Menu_S31 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

