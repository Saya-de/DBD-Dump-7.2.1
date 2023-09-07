// AnimBlueprintGeneratedClass AB_K27_Menu_W01.AB_K27_Menu_W01_C
// Size: 0x6f0 (Inherited: 0x300)
struct UAB_K27_Menu_W01_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x368(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x390(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x410(0x80)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x490(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x530(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5b0(0x38)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x5e8(0x18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x600(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x638(0xb0)
	bool PlayInterrupt; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	int32_t WeaponID; // 0x6ec(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_ResetPlayInterrupt(); // Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_ResetPlayInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayWeaponInterrupt(int32_t WeaponID); // Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.PlayWeaponInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Test_prestige(); // Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_Test_prestige // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_K27_Menu_W01(int32_t EntryPoint); // Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.ExecuteUbergraph_AB_K27_Menu_W01 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

