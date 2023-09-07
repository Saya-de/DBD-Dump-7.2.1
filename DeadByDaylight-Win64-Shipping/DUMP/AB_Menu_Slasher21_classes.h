// AnimBlueprintGeneratedClass AB_Menu_Slasher21.AB_Menu_Slasher21_C
// Size: 0x1379 (Inherited: 0x300)
struct UAB_Menu_Slasher21_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x368(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x390(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x3b8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x3e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x460(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x498(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x518(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x550(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x5d0(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x608(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x630(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x658(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x680(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x6a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x6d0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x6f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x778(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x7b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x830(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x868(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x8e8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x920(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x9a0(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x9d8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xa88(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xac0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xb40(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xb78(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xbf8(0x80)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0xc78(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0xca0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xcc8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xcf0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xd18(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xd40(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xd68(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xde8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xe20(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xea0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xed8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xf58(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xf90(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1010(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1048(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x10f8(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1198(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1238(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1270(0xb0)
	bool Role Selected; // 0x1320(0x01)
	bool Is Online; // 0x1321(0x01)
	char pad_1322[0x6]; // 0x1322(0x06)
	struct UAnimSequenceBase* IdleMenu; // 0x1328(0x08)
	struct UAnimSequenceBase* IdleMenu_Intro; // 0x1330(0x08)
	struct UAnimSequenceBase* IdleMenu_Lobby; // 0x1338(0x08)
	struct UAnimSequenceBase* IdleMenu_ Back; // 0x1340(0x08)
	struct UAnimSequenceBase* idleMenu_Interrupt01; // 0x1348(0x08)
	struct UAnimSequenceBase* idleMenu_Interrupt02; // 0x1350(0x08)
	struct UAnimSequenceBase* idleMenu_Interrupt03; // 0x1358(0x08)
	int32_t RandomInterupt; // 0x1360(0x04)
	char pad_1364[0x4]; // 0x1364(0x04)
	struct FString CurrentMenuString; // 0x1368(0x10)
	enum class EGameFlowStep CurrentMenu; // 0x1378(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_65E3A51A4E4A32F3EB4E6084B6C2051B(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_65E3A51A4E4A32F3EB4E6084B6C2051B // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_0308113A4692318ED9C00FA18D1BAE8F(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_0308113A4692318ED9C00FA18D1BAE8F // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_8B8BA99E43DCB2CD83B2A1A5049D28B0(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_8B8BA99E43DCB2CD83B2A1A5049D28B0 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_6836D95B44C934D53C9EA686EC26F524(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_6836D95B44C934D53C9EA686EC26F524 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_31788C2048D69F83B9A4D4A3DB16BDB7(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_31788C2048D69F83B9A4D4A3DB16BDB7 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_460FAC434547763AE5D8ABAEEA2332A9(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_460FAC434547763AE5D8ABAEEA2332A9 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_7E106FCE45C1E61B87C563AA3F91739B(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_7E106FCE45C1E61B87C563AA3F91739B // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GenerateRandom(); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.AnimNotify_GenerateRandom // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher21(int32_t EntryPoint); // Function AB_Menu_Slasher21.AB_Menu_Slasher21_C.ExecuteUbergraph_AB_Menu_Slasher21 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

