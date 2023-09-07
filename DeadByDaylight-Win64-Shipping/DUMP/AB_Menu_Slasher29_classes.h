// AnimBlueprintGeneratedClass AB_Menu_Slasher29.AB_Menu_Slasher29_C
// Size: 0xd80 (Inherited: 0x300)
struct UAB_Menu_Slasher29_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x368(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x390(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x3b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3e0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x408(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x488(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x4c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x540(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x578(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x628(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x660(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x6e0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x718(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x798(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x7d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x7f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x820(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x848(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x870(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x898(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x8c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x940(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x978(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x9f8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa30(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xab0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xae8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xb68(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xba0(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xc50(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc88(0xb0)
	bool Role Selected; // 0xd38(0x01)
	bool Is Online; // 0xd39(0x01)
	char pad_D3A[0x2]; // 0xd3a(0x02)
	int32_t RandomInterupt; // 0xd3c(0x04)
	struct FRotator StartRot; // 0xd40(0x0c)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct ABP_Menu_Slasher27_C* KillerBP; // 0xd50(0x08)
	struct FRotator CharacterRotationBeforeJumpScare; // 0xd58(0x0c)
	char pad_D64[0x4]; // 0xd64(0x04)
	struct ABP_Menu_Slasher29_C* As BP Menu Slasher 29; // 0xd68(0x08)
	bool _isAboutToPlayCameraInterrupt; // 0xd70(0x01)
	char pad_D71[0x7]; // 0xd71(0x07)
	struct ADBDMenuPlayer* As DBDMenu Player; // 0xd78(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_707E28DC47ACE390FE617EB7FC2B8C2D(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_707E28DC47ACE390FE617EB7FC2B8C2D // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_E78BBE4441702E793C6476A83981FEA0(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_E78BBE4441702E793C6476A83981FEA0 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_4E65A5A7443D73F2DCB461B382A86454(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_4E65A5A7443D73F2DCB461B382A86454 // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GenerateRandom(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_GenerateRandom // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_933F777D4FDB588172B385AEE6364472(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_933F777D4FDB588172B385AEE6364472 // (BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GrabAnimationStarted(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_GrabAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GrabAnimationEnded(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_GrabAnimationEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_EnableCloth(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_EnableCloth // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_InterruptStart(); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_InterruptStart // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher29(int32_t EntryPoint); // Function AB_Menu_Slasher29.AB_Menu_Slasher29_C.ExecuteUbergraph_AB_Menu_Slasher29 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

