// AnimBlueprintGeneratedClass AB_Menu_Slasher30.AB_Menu_Slasher30_C
// Size: 0xbe8 (Inherited: 0x300)
struct UAB_Menu_Slasher30_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x340(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x368(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x3e8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x420(0x80)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x4c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x4f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x518(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x540(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x568(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x590(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x610(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x648(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6c8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x700(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x780(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x838(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x870(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x920(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x9a0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xa40(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xae0(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xb18(0xb0)
	bool Role Selected; // 0xbc8(0x01)
	bool Is Online; // 0xbc9(0x01)
	char pad_BCA[0x2]; // 0xbca(0x02)
	int32_t RandomInterupt; // 0xbcc(0x04)
	enum class EGameFlowStep CurrentMenu; // 0xbd0(0x01)
	char pad_BD1[0x7]; // 0xbd1(0x07)
	struct FString CurrentMenuString; // 0xbd8(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_956F39ED48CD98A09FE24DAA729BAA00(); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_956F39ED48CD98A09FE24DAA729BAA00 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_49B0FA774C2EF6200E273FA5D3754906(); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_49B0FA774C2EF6200E273FA5D3754906 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_1352FA0845D1127F5A5445AF45F2DCCA(); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_1352FA0845D1127F5A5445AF45F2DCCA // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_715BB76B4EF6E3FAA4367198980C8551(); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_715BB76B4EF6E3FAA4367198980C8551 // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GenerateRandom(); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.AnimNotify_GenerateRandom // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher30(int32_t EntryPoint); // Function AB_Menu_Slasher30.AB_Menu_Slasher30_C.ExecuteUbergraph_AB_Menu_Slasher30 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

