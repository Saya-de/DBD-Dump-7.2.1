// AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C
// Size: 0x428 (Inherited: 0x300)
struct UAB_Menu_Slasher26_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x340(0xa8)
	struct ABP_Menu_Slasher26_C* KillerBP; // 0x3e8(0x08)
	struct FAset_Slasher_Menu MenuAnimSet; // 0x3f0(0x30)
	struct ABP_Menu_Slasher26_C* BP Menu Base Slasher; // 0x420(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintLinkedAnimationLayersInitialized(); // Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintLinkedAnimationLayersInitialized // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher26(int32_t EntryPoint); // Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.ExecuteUbergraph_AB_Menu_Slasher26 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

