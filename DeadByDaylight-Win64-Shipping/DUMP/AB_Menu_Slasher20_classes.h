// AnimBlueprintGeneratedClass AB_Menu_Slasher20.AB_Menu_Slasher20_C
// Size: 0x5fa (Inherited: 0x300)
struct UAB_Menu_Slasher20_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x340(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x3e0(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x458(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x578(0x80)
	bool Role Selected; // 0x5f8(0x01)
	bool Is Online; // 0x5f9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_SK_SwitchClub_DemonMode(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_SwitchClub_DemonMode // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_SK_SwitchClub_NormalMode(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_SwitchClub_NormalMode // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FK_SK_ShowKatana(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FK_SK_ShowKatana // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_SK_HideKatana(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideKatana // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_SK_ShowDemonCosmetic(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_ShowDemonCosmetic // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_SK_HideDemonCosmetic(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideDemonCosmetic // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_SK_HideKatana_TPV(); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideKatana_TPV // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher20(int32_t EntryPoint); // Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.ExecuteUbergraph_AB_Menu_Slasher20 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

