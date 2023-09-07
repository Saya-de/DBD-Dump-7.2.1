// AnimBlueprintGeneratedClass AB_Menu_Slasher03.AB_Menu_Slasher03_C
// Size: 0xaf0 (Inherited: 0x300)
struct UAB_Menu_Slasher03_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x368(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x390(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x408(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x430(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4b0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x568(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x620(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x658(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6d8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x710(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7c0(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x840(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8e0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x980(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa00(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa38(0xb0)
	bool Role Selected; // 0xae8(0x01)
	bool Is Online; // 0xae9(0x01)
	char pad_AEA[0x2]; // 0xaea(0x02)
	int32_t RandomInterrupt; // 0xaec(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_852AD5DF4C110C43063C99863C38223D(); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_852AD5DF4C110C43063C99863C38223D // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_B7B79B1A4B70E0C63A6DDEB087F67E51(); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_B7B79B1A4B70E0C63A6DDEB087F67E51 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_AB26E59B45612CE51DFE8AB2137B05F0(); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_AB26E59B45612CE51DFE8AB2137B05F0 // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher03(int32_t EntryPoint); // Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.ExecuteUbergraph_AB_Menu_Slasher03 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

