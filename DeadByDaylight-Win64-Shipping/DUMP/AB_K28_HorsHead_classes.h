// AnimBlueprintGeneratedClass AB_K28_HorsHead.AB_K28_HorsHead_C
// Size: 0x438 (Inherited: 0x2c0)
struct UAB_K28_HorsHead_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x300(0x50)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x350(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x388(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_K28_HorsHead.AB_K28_HorsHead_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_K28_HorsHead(int32_t EntryPoint); // Function AB_K28_HorsHead.AB_K28_HorsHead_C.ExecuteUbergraph_AB_K28_HorsHead // (Final|UbergraphFunction) // @ game+0x5e02c90
};

