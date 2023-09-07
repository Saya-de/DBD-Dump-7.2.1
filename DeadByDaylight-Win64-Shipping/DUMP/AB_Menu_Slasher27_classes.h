// AnimBlueprintGeneratedClass AB_Menu_Slasher27.AB_Menu_Slasher27_C
// Size: 0x1f88 (Inherited: 0x300)
struct UAB_Menu_Slasher27_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x340(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x368(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x3e8(0x38)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x420(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x880(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xce0(0x460)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1140(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1160(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1180(0x460)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x15e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x1608(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x1630(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1658(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1680(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x16a8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x16d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x1750(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1788(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x1808(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1840(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x18c0(0x80)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x1940(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x19e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1a60(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1a98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1b18(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1b50(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1c00(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1c80(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1d00(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1da0(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1e40(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1e78(0xb0)
	bool Role Selected; // 0x1f28(0x01)
	bool Is Online; // 0x1f29(0x01)
	bool _interrupt02; // 0x1f2a(0x01)
	char pad_1F2B[0x5]; // 0x1f2b(0x05)
	struct ABP_Menu_Slasher27_C* KillerBP; // 0x1f30(0x08)
	int32_t RandomInterupt; // 0x1f38(0x04)
	bool IsLegendary; // 0x1f3c(0x01)
	char pad_1F3D[0x3]; // 0x1f3d(0x03)
	struct FRotator StartRot; // 0x1f40(0x0c)
	enum class EGameFlowStep CurrentMenu; // 0x1f4c(0x01)
	char pad_1F4D[0x3]; // 0x1f4d(0x03)
	struct FString CurrentMenuString; // 0x1f50(0x10)
	struct FName WeaponName; // 0x1f60(0x0c)
	int32_t WeaponID; // 0x1f6c(0x04)
	struct FRotator CharacterRotationBeforeJumpScare; // 0x1f70(0x0c)
	char pad_1F7C[0x4]; // 0x1f7c(0x04)
	struct UAB_K27_Menu_W01_C* WeaponAnimInstance; // 0x1f80(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_F521E66243F7D658ECD60EABD1FD6098(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_F521E66243F7D658ECD60EABD1FD6098 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_3A26F1734FC9DE8BBD6B39895C1BA90F(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_3A26F1734FC9DE8BBD6B39895C1BA90F // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_388D65DB4FF539B276F58B9B40396116(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_388D65DB4FF539B276F58B9B40396116 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_AFBF06C142D14A80305DC69BD20DAE36(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_AFBF06C142D14A80305DC69BD20DAE36 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_6EF9BF254B3C640B6710C0BB5707683E(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_6EF9BF254B3C640B6710C0BB5707683E // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_943CB0FE470D01362FE2FDBD2417F2B2(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_943CB0FE470D01362FE2FDBD2417F2B2 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_12DEC89A4BE201613574DA826ADAE117(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_12DEC89A4BE201613574DA826ADAE117 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_4CF4DAD64CEDF5C78EA13380714C48FD(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_4CF4DAD64CEDF5C78EA13380714C48FD // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void LockRotation(bool lock); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.LockRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K27_PostprocessInterrupt_02(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_PostprocessInterrupt_02 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K27_IdleInterrupt_01(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_IdleInterrupt_01 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K27_IdleInterrupt_01_Destroy(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_IdleInterrupt_01_Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K27_IdleInterrupt_02_Destroy(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_IdleInterrupt_02_Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GenerateRandom(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_GenerateRandom // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_OnJumpScareAnimStarted(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_OnJumpScareAnimStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_OnJumpScareAnimEnded(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_OnJumpScareAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCustomizationChanged(struct TArray<struct FName>& customizationArray); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.OnCustomizationChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IntroStart(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_IntroStart // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IntroEnd(); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_IntroEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher27(int32_t EntryPoint); // Function AB_Menu_Slasher27.AB_Menu_Slasher27_C.ExecuteUbergraph_AB_Menu_Slasher27 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

