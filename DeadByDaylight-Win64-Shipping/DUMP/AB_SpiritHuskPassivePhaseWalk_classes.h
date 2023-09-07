// AnimBlueprintGeneratedClass AB_SpiritHuskPassivePhaseWalk.AB_SpiritHuskPassivePhaseWalk_C
// Size: 0x4e8 (Inherited: 0x2d0)
struct UAB_SpiritHuskPassivePhaseWalk_C : USpiritHuskAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x38)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x310(0x1d8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_SpiritHuskPassivePhaseWalk.AB_SpiritHuskPassivePhaseWalk_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_SpiritHuskPassivePhaseWalk(int32_t EntryPoint); // Function AB_SpiritHuskPassivePhaseWalk.AB_SpiritHuskPassivePhaseWalk_C.ExecuteUbergraph_AB_SpiritHuskPassivePhaseWalk // (Final|UbergraphFunction) // @ game+0x5e02c90
};

