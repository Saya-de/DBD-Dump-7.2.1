// AnimBlueprintGeneratedClass AB_K25_SW00_REF.AB_K25_SW00_REF_C
// Size: 0x5c1 (Inherited: 0x2c0)
struct UAB_K25_SW00_REF_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x300(0x50)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x350(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x378(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x420(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x458(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4d8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510(0xb0)
	bool _interupt; // 0x5c0(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_K25_SW00_REF(int32_t EntryPoint); // Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.ExecuteUbergraph_AB_K25_SW00_REF // (Final|UbergraphFunction) // @ game+0x5e02c90
};

