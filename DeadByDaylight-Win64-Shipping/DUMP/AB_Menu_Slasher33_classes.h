// AnimBlueprintGeneratedClass AB_Menu_Slasher33.AB_Menu_Slasher33_C
// Size: 0x5e8 (Inherited: 0x300)
struct UAB_Menu_Slasher33_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x340(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x368(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3e8(0x38)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x420(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4c8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x500(0xb0)
	enum class EGameFlowStep CurrentMenu; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FAset_Slasher_Menu MenuAnimSet; // 0x5b8(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher33.AB_Menu_Slasher33_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher33_AnimGraphNode_TransitionResult_456783104290BB752F2228A23435EA10(); // Function AB_Menu_Slasher33.AB_Menu_Slasher33_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher33_AnimGraphNode_TransitionResult_456783104290BB752F2228A23435EA10 // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintLinkedAnimationLayersInitialized(); // Function AB_Menu_Slasher33.AB_Menu_Slasher33_C.BlueprintLinkedAnimationLayersInitialized // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher33.AB_Menu_Slasher33_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher33(int32_t EntryPoint); // Function AB_Menu_Slasher33.AB_Menu_Slasher33_C.ExecuteUbergraph_AB_Menu_Slasher33 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

