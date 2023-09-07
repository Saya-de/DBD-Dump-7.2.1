// AnimBlueprintGeneratedClass AB_S28_Book.AB_S28_Book_C
// Size: 0x50a (Inherited: 0x2c0)
struct UAB_S28_Book_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x300(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x328(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3d0(0x38)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x408(0x18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x420(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x458(0xb0)
	enum class EItemHandPosition Hand Position; // 0x508(0x01)
	bool MenuInterrupt; // 0x509(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_S28_Book.AB_S28_Book_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_S28_Book(int32_t EntryPoint); // Function AB_S28_Book.AB_S28_Book_C.ExecuteUbergraph_AB_S28_Book // (Final|UbergraphFunction) // @ game+0x5e02c90
};

