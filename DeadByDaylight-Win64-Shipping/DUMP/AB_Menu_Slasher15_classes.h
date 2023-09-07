// AnimBlueprintGeneratedClass AB_Menu_Slasher15.AB_Menu_Slasher15_C
// Size: 0x1d02 (Inherited: 0x300)
struct UAB_Menu_Slasher15_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x340(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c0(0x80)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x440(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x460(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x480(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x8e0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0xd40(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x11a0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1600(0x460)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1a60(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x1b00(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1b78(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1c18(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1c50(0xb0)
	bool Role Selected; // 0x1d00(0x01)
	bool Is Online; // 0x1d01(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher15(int32_t EntryPoint); // Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.ExecuteUbergraph_AB_Menu_Slasher15 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

