// AnimBlueprintGeneratedClass AB_K24_SW00_Menu.AB_K24_SW00_Menu_C
// Size: 0x368 (Inherited: 0x2c0)
struct UAB_K24_SW00_Menu_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x300(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x318(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_K24_SW00_Menu(int32_t EntryPoint); // Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.ExecuteUbergraph_AB_K24_SW00_Menu // (Final|UbergraphFunction) // @ game+0x5e02c90
};

