// AnimBlueprintGeneratedClass AB_Menu_Slasher05.AB_Menu_Slasher05_C
// Size: 0x6e2 (Inherited: 0x300)
struct UAB_Menu_Slasher05_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x340(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x438(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x4b8(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x558(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5f8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x630(0xb0)
	bool Role Selected; // 0x6e0(0x01)
	bool Is Online; // 0x6e1(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher05.AB_Menu_Slasher05_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher05.AB_Menu_Slasher05_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher05(int32_t EntryPoint); // Function AB_Menu_Slasher05.AB_Menu_Slasher05_C.ExecuteUbergraph_AB_Menu_Slasher05 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

