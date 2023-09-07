// AnimBlueprintGeneratedClass AB_Menu_Slasher22.AB_Menu_Slasher22_C
// Size: 0x6e8 (Inherited: 0x300)
struct UAB_Menu_Slasher22_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x340(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c0(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x440(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x4e0(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x558(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5f8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x630(0xb0)
	bool Role Selected; // 0x6e0(0x01)
	bool Is Online; // 0x6e1(0x01)
	char pad_6E2[0x2]; // 0x6e2(0x02)
	int32_t _anim_switch; // 0x6e4(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Idle(); // Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Idle // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Release(); // Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Release // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Pickup(); // Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher22(int32_t EntryPoint); // Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.ExecuteUbergraph_AB_Menu_Slasher22 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

