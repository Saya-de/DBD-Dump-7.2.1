// AnimBlueprintGeneratedClass AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C
// Size: 0xca9 (Inherited: 0x300)
struct UAB_Slasher_SubGraph_Menu_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x340(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3e0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x480(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x500(0x80)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x580(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x5a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x5d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x5f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x620(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x648(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x670(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x698(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x6c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x6e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x710(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x738(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x760(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x788(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x808(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x840(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x8c0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x978(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa30(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa68(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xb18(0x110)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc28(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc48(0x20)
	bool Role Selected; // 0xc68(0x01)
	bool Is Online; // 0xc69(0x01)
	char pad_C6A[0x2]; // 0xc6a(0x02)
	int32_t RandomInterupt; // 0xc6c(0x04)
	struct ABP_Menu_BaseSlasher_C* BP Menu Base Slasher; // 0xc70(0x08)
	struct UAnimSequenceBase* MenuLobby; // 0xc78(0x08)
	struct UAnimSequenceBase* MenuIdle; // 0xc80(0x08)
	struct UAnimSequenceBase* MenuIdleInterrupt01; // 0xc88(0x08)
	struct UAnimSequenceBase* MenuIdleInterrupt02; // 0xc90(0x08)
	struct UAnimSequenceBase* MenuIdleBack; // 0xc98(0x08)
	struct UAnimSequenceBase* MenuIdleInterrupt03; // 0xca0(0x08)
	bool DebugPassToNextAnimation; // 0xca8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_5E15DFE240AEAD5F916B15B2D5014F50(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_5E15DFE240AEAD5F916B15B2D5014F50 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_3E3ABF8E4F276B5FBBFA5697451292CF(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_3E3ABF8E4F276B5FBBFA5697451292CF // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_13069AA346A598DDCD65FEB86788577B(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_13069AA346A598DDCD65FEB86788577B // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_EE90647340D120A12EF9CD9BF02FCFA5(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_EE90647340D120A12EF9CD9BF02FCFA5 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_6D2F7FB540BF4660E4584AB0B255221D(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_6D2F7FB540BF4660E4584AB0B255221D // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_342F73ED4DFC794BEF5B00B8DC5E510A(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_342F73ED4DFC794BEF5B00B8DC5E510A // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_315C8E6444B60C3D4699AC863DECF763(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_315C8E6444B60C3D4699AC863DECF763 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_04C4447E4876DF7C16F670AC9A94544D(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_04C4447E4876DF7C16F670AC9A94544D // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_42AEC6A94D9FEBC8B69A338767976D8B(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_42AEC6A94D9FEBC8B69A338767976D8B // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ChangeMenuInterrupt(int32_t MenuInterrupt, bool DebugPassCurrentAnimation); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.ChangeMenuInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetMenuAnimationFromMainAB(struct FAset_Slasher_Menu& MenuAnimSet); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.SetMenuAnimationFromMainAB // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Slasher_SubGraph_Menu(int32_t EntryPoint); // Function AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.ExecuteUbergraph_AB_Slasher_SubGraph_Menu // (Final|UbergraphFunction) // @ game+0x5e02c90
};

