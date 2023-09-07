// AnimBlueprintGeneratedClass AB_Menu_Slasher25.AB_Menu_Slasher25_C
// Size: 0xb86 (Inherited: 0x300)
struct UAB_Menu_Slasher25_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x368(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x390(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x408(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x430(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4b0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x568(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5a0(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x620(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x760(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x798(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x848(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8c8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x948(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9e8(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa88(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xac0(0xb0)
	bool Role Selected; // 0xb70(0x01)
	bool Is Online; // 0xb71(0x01)
	bool _interrupt02; // 0xb72(0x01)
	char pad_B73[0x5]; // 0xb73(0x05)
	struct ABP_Menu_Slasher25_C* KillerBP; // 0xb78(0x08)
	int32_t RandomInterupt; // 0xb80(0x04)
	bool _IsLegendary; // 0xb84(0x01)
	bool CancelInterrupt; // 0xb85(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_D845EE60491051D138D7E69B859DEC98(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnInterrupted_D845EE60491051D138D7E69B859DEC98 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_D845EE60491051D138D7E69B859DEC98(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnBlendOut_D845EE60491051D138D7E69B859DEC98 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_D845EE60491051D138D7E69B859DEC98(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnCompleted_D845EE60491051D138D7E69B859DEC98 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_22E050B7467A5A507B9A4EB97AFB3C7A(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyEnd_22E050B7467A5A507B9A4EB97AFB3C7A // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_22E050B7467A5A507B9A4EB97AFB3C7A(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyBegin_22E050B7467A5A507B9A4EB97AFB3C7A // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_22E050B7467A5A507B9A4EB97AFB3C7A(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnInterrupted_22E050B7467A5A507B9A4EB97AFB3C7A // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_22E050B7467A5A507B9A4EB97AFB3C7A(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnBlendOut_22E050B7467A5A507B9A4EB97AFB3C7A // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_22E050B7467A5A507B9A4EB97AFB3C7A(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnCompleted_22E050B7467A5A507B9A4EB97AFB3C7A // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_1C411FA44F6B6E7B537275A481080575(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyEnd_1C411FA44F6B6E7B537275A481080575 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_1C411FA44F6B6E7B537275A481080575(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyBegin_1C411FA44F6B6E7B537275A481080575 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_1C411FA44F6B6E7B537275A481080575(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnInterrupted_1C411FA44F6B6E7B537275A481080575 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_1C411FA44F6B6E7B537275A481080575(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnBlendOut_1C411FA44F6B6E7B537275A481080575 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_1C411FA44F6B6E7B537275A481080575(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnCompleted_1C411FA44F6B6E7B537275A481080575 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_0E98A85F4EB644014D42909522C7C474(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyEnd_0E98A85F4EB644014D42909522C7C474 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_0E98A85F4EB644014D42909522C7C474(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyBegin_0E98A85F4EB644014D42909522C7C474 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_0E98A85F4EB644014D42909522C7C474(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnInterrupted_0E98A85F4EB644014D42909522C7C474 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_0E98A85F4EB644014D42909522C7C474(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnBlendOut_0E98A85F4EB644014D42909522C7C474 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_0E98A85F4EB644014D42909522C7C474(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnCompleted_0E98A85F4EB644014D42909522C7C474 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_D845EE60491051D138D7E69B859DEC98(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyBegin_D845EE60491051D138D7E69B859DEC98 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_D845EE60491051D138D7E69B859DEC98(struct FName NotifyName); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyEnd_D845EE60491051D138D7E69B859DEC98 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_LayeredBoneBlend_634B60C44CBBE54A99205A9667B45B41(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_LayeredBoneBlend_634B60C44CBBE54A99205A9667B45B41 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_TransitionResult_F4FE0D2D4C45163D1651928AAD4B8ED4(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_TransitionResult_F4FE0D2D4C45163D1651928AAD4B8ED4 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_TransitionResult_3432C8EB4229B4949B98409C2AC734CF(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_TransitionResult_3432C8EB4229B4949B98409C2AC734CF // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Interupt02Start(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_Interupt02Start // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Interupt01Start(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_Interupt01Start // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Idle(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_Idle // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K25_Menu_AppearBox(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_FX_K25_Menu_AppearBox // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K25_Menu_DisappearBox(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_FX_K25_Menu_DisappearBox // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideAccessories(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.HideAccessories // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HideChainsAndLament(); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.HideChainsAndLament // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher25(int32_t EntryPoint); // Function AB_Menu_Slasher25.AB_Menu_Slasher25_C.ExecuteUbergraph_AB_Menu_Slasher25 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

