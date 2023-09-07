// AnimBlueprintGeneratedClass AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C
// Size: 0x650 (Inherited: 0x300)
struct UAB_Menu_Slasher22_Twin_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x340(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3c0(0x80)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x440(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x560(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x598(0xb0)
	bool Role Selected; // 0x648(0x01)
	bool Is Online; // 0x649(0x01)
	char pad_64A[0x2]; // 0x64a(0x02)
	int32_t Swap; // 0x64c(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void _get_bp_menu_slasher_23(); // Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C._get_bp_menu_slasher_23 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher22_Twin(int32_t EntryPoint); // Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.ExecuteUbergraph_AB_Menu_Slasher22_Twin // (Final|UbergraphFunction) // @ game+0x5e02c90
};

