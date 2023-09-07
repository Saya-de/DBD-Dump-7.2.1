// AnimBlueprintGeneratedClass AB_LamentBox_REF.AB_LamentBox_REF_C
// Size: 0x4b8 (Inherited: 0x2c0)
struct UAB_LamentBox_REF_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x300(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x380(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3b8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x468(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_LamentBox_REF.AB_LamentBox_REF_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_LamentBox_REF(int32_t EntryPoint); // Function AB_LamentBox_REF.AB_LamentBox_REF_C.ExecuteUbergraph_AB_LamentBox_REF // (Final|UbergraphFunction) // @ game+0x5e02c90
};

