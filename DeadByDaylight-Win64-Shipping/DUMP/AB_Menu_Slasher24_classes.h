// AnimBlueprintGeneratedClass AB_Menu_Slasher24.AB_Menu_Slasher24_C
// Size: 0x6f8 (Inherited: 0x300)
struct UAB_Menu_Slasher24_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x340(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c0(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x440(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x4e0(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x558(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5f8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x630(0xb0)
	bool Role Selected; // 0x6e0(0x01)
	bool Is Online; // 0x6e1(0x01)
	char pad_6E2[0x6]; // 0x6e2(0x06)
	struct TScriptInterface<IBPI_Effect_K24_Menu_C> Slasher; // 0x6e8(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_K24_Inter_Start(); // Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_K24_Inter_Stop(); // Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher24(int32_t EntryPoint); // Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.ExecuteUbergraph_AB_Menu_Slasher24 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

