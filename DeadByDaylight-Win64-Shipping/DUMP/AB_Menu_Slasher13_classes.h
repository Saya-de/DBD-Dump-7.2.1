// AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C
// Size: 0x3e12 (Inherited: 0x300)
struct UAB_Menu_Slasher13_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x340(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c0(0x80)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x440(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x8a0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xd00(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1160(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x15c0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1a20(0x460)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x1e80(0x138)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x1fb8(0x138)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x20f0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2550(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x29b0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2e10(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3270(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x36d0(0x460)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3b30(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3b50(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3b70(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x3c10(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3c88(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3d28(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3d60(0xb0)
	bool Role Selected; // 0x3e10(0x01)
	bool Is Online; // 0x3e11(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear(); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear(); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_HK_MenuBack_MakeSwordVisible(); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_HK_Menu_MakeSwordInvisible(); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher13(int32_t EntryPoint); // Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

