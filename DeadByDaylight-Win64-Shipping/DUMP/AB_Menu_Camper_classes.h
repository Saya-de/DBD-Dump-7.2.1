// AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C
// Size: 0x1b18 (Inherited: 0x2c0)
struct UAB_Menu_Camper_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x300(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x328(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x350(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x378(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x3a8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x3e0(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x460(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x500(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x580(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x638(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x670(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x720(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x7a0(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x7d8(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x888(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x928(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x9a8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa28(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xaa8(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xb28(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xc80(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xca8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xcd0(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xd00(0x38)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xd38(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xd58(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xd88(0x20)
	char pad_DA8[0x8]; // 0xda8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xdb0(0x460)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x1210(0x138)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1348(0x38)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1380(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x13b0(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x13e8(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1498(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1538(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1568(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x16c0(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x16f0(0x110)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1800(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1820(0x20)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1840(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1900(0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x19c0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1a60(0xa0)
	enum class EItemHandPosition Hand Position; // 0x1b00(0x01)
	char pad_1B01[0x3]; // 0x1b01(0x03)
	int32_t SelectedIdleIndex; // 0x1b04(0x04)
	bool Role Selected; // 0x1b08(0x01)
	bool Dynamic_Override; // 0x1b09(0x01)
	bool Override_nea; // 0x1b0a(0x01)
	bool Override_Jane; // 0x1b0b(0x01)
	bool _weaponRT_adjustment; // 0x1b0c(0x01)
	bool MenuInterrupt; // 0x1b0d(0x01)
	char pad_1B0E[0x2]; // 0x1b0e(0x02)
	struct ADBDMenuPlayer* DBDMenuPlayer; // 0x1b10(0x08)

	void Get_BP_MenuBaseCamper(struct ABP_Menu_Base_Camper_C*& BP_MenuBaseCamper); // Function AB_Menu_Camper.AB_Menu_Camper_C.Get_BP_MenuBaseCamper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Camper.AB_Menu_Camper_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_144CBC12420AC4B1AEB6C483367DB5D1(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_144CBC12420AC4B1AEB6C483367DB5D1 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_D31FAC3144F53773EC44BF83B1E4C609(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_D31FAC3144F53773EC44BF83B1E4C609 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_942BFBC04EC5441670A131B2CBD7B90D(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_942BFBC04EC5441670A131B2CBD7B90D // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_31D12DEB4EEE47CA5AFD35BA4FF29D01(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_31D12DEB4EEE47CA5AFD35BA4FF29D01 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA(); // Function AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Camper.AB_Menu_Camper_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Camper.AB_Menu_Camper_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetCamperMenuAnimationState(enum class Enum_CamperMenuAnimationState State); // Function AB_Menu_Camper.AB_Menu_Camper_C.SetCamperMenuAnimationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IsPlayingMenuInterruptFromTransition(); // Function AB_Menu_Camper.AB_Menu_Camper_C.AnimNotify_IsPlayingMenuInterruptFromTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IsLeavingMenuInterruptFromTransition(); // Function AB_Menu_Camper.AB_Menu_Camper_C.AnimNotify_IsLeavingMenuInterruptFromTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RandomTimer(); // Function AB_Menu_Camper.AB_Menu_Camper_C.RandomTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void IsPlayingMenuInterrupt(bool IsPlayingAnimation); // Function AB_Menu_Camper.AB_Menu_Camper_C.IsPlayingMenuInterrupt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Camper(int32_t EntryPoint); // Function AB_Menu_Camper.AB_Menu_Camper_C.ExecuteUbergraph_AB_Menu_Camper // (Final|UbergraphFunction) // @ game+0x5e02c90
};

