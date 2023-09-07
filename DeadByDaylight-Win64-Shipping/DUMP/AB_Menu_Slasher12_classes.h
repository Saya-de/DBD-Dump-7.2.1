// AnimBlueprintGeneratedClass AB_Menu_Slasher12.AB_Menu_Slasher12_C
// Size: 0x85a (Inherited: 0x300)
struct UAB_Menu_Slasher12_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x340(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x360(0x20)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x380(0x138)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4b8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x538(0xa0)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x5d8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x650(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x770(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a8(0xb0)
	bool Role Selected; // 0x858(0x01)
	bool Is Online; // 0x859(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher12.AB_Menu_Slasher12_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher12.AB_Menu_Slasher12_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher12(int32_t EntryPoint); // Function AB_Menu_Slasher12.AB_Menu_Slasher12_C.ExecuteUbergraph_AB_Menu_Slasher12 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

