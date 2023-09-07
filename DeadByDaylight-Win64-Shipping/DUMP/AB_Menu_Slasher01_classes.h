// AnimBlueprintGeneratedClass AB_Menu_Slasher01.AB_Menu_Slasher01_C
// Size: 0x1d02 (Inherited: 0x300)
struct UAB_Menu_Slasher01_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x340(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x360(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x380(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x7e0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0xc40(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x10a0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1500(0x460)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1960(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x1a00(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1a78(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1b18(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1b98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1c18(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1c50(0xb0)
	bool Role Selected; // 0x1d00(0x01)
	bool Is Online; // 0x1d01(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher01.AB_Menu_Slasher01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher01.AB_Menu_Slasher01_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher01(int32_t EntryPoint); // Function AB_Menu_Slasher01.AB_Menu_Slasher01_C.ExecuteUbergraph_AB_Menu_Slasher01 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

