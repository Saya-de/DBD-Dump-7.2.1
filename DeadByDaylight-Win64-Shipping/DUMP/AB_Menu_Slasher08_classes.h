// AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C
// Size: 0x6f0 (Inherited: 0x300)
struct UAB_Menu_Slasher08_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x340(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x438(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4d8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x578(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5f8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x630(0xb0)
	bool Role Selected; // 0x6e0(0x01)
	bool Is Online; // 0x6e1(0x01)
	char pad_6E2[0x6]; // 0x6e2(0x06)
	struct UStaticMesh* Hatchet; // 0x6e8(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetKiller(struct TScriptInterface<IBPI_Effect_K08_C>& Menu Slasher 08); // Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_MakeHatchetAppear(); // Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_MakeHatchetDisappear(); // Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher08(int32_t EntryPoint); // Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

