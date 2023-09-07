// AnimBlueprintGeneratedClass AB_Menu_Slasher28.AB_Menu_Slasher28_C
// Size: 0xd40 (Inherited: 0x310)
struct UAB_Menu_Slasher28_C : UK28MenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x318(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x350(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x378(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x3f8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x430(0x80)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x578(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x5a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x620(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x658(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6d8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x710(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x790(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x848(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x880(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x930(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x9b0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xa50(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xaf0(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xb28(0xb0)
	bool Role Selected; // 0xbd8(0x01)
	bool Is Online; // 0xbd9(0x01)
	char pad_BDA[0x6]; // 0xbda(0x06)
	struct ABP_Menu_Slasher28_C* KillerBP; // 0xbe0(0x08)
	int32_t RandomInterupt; // 0xbe8(0x04)
	bool IsLegendary; // 0xbec(0x01)
	enum class EGameFlowStep CurrentMenu; // 0xbed(0x01)
	char pad_BEE[0x2]; // 0xbee(0x02)
	struct FString CurrentMenuString; // 0xbf0(0x10)
	struct UAnimSequenceBase* Anim_IdleMenuSpawn; // 0xc00(0x08)
	struct UAnimSequenceBase* Anim_IdleMenuLobby; // 0xc08(0x08)
	struct UAnimSequenceBase* Anim_IdleMenuBack; // 0xc10(0x08)
	struct UAnimSequenceBase* Anim_MenuInterupt01; // 0xc18(0x08)
	struct UAnimSequenceBase* Anim_MenuInterupt02; // 0xc20(0x08)
	struct UAnimSequenceBase* Anim_MenuInterupt03; // 0xc28(0x08)
	struct UAnimSequenceBase* Anim_IdleMenu; // 0xc30(0x08)
	int32_t Animation Mapping Index; // 0xc38(0x04)
	char pad_C3C[0x4]; // 0xc3c(0x04)
	struct FASet_Slasher_28_Menu ASet_Menu_AA; // 0xc40(0x38)
	struct FASet_Slasher_28_Menu ASet_Menu_AB; // 0xc78(0x38)
	struct FASet_Slasher_28_Menu ASet_Menu_BA; // 0xcb0(0x38)
	struct FASet_Slasher_28_Menu ASet_Menu_BB; // 0xce8(0x38)
	struct FMulticastInlineDelegate K28_IntroStart_Menu_EventDispatcher; // 0xd20(0x10)
	struct FMulticastInlineDelegate K28_IntroEnd_Menu_EventDispatcher; // 0xd30(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_FBF20A854C25DF62FA1C7FA581795689(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_FBF20A854C25DF62FA1C7FA581795689 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_FBF20A854C25DF62FA1C7FA581795689(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_FBF20A854C25DF62FA1C7FA581795689 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_FBF20A854C25DF62FA1C7FA581795689(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_FBF20A854C25DF62FA1C7FA581795689 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_67A4A0524204789067E9DB964585A407(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_67A4A0524204789067E9DB964585A407 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_67A4A0524204789067E9DB964585A407(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_67A4A0524204789067E9DB964585A407 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_67A4A0524204789067E9DB964585A407(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_67A4A0524204789067E9DB964585A407 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_67A4A0524204789067E9DB964585A407(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_67A4A0524204789067E9DB964585A407 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_67A4A0524204789067E9DB964585A407(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_67A4A0524204789067E9DB964585A407 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_4C173F2D43F0E1440D9CA18391F8991B(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_4C173F2D43F0E1440D9CA18391F8991B // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689(struct FName NotifyName); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_GenerateRandom(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_GenerateRandom // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BP_OnCustomizationAnimationMappingIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void UpdateAnimationSet(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.UpdateAnimationSet // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Idle(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Idle // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Interupt01Start(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt01Start // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Interupt02Start(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt02Start // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_K24_Menu_Interrupt01(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_K24_Menu_Interrupt01 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Hand_Start(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Hand_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_IntroEnd(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_IntroEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher28(int32_t EntryPoint); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.ExecuteUbergraph_AB_Menu_Slasher28 // (Final|UbergraphFunction) // @ game+0x5e02c90
	void K28_IntroEnd_Menu_EventDispatcher__DelegateSignature(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroEnd_Menu_EventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K28_IntroStart_Menu_EventDispatcher__DelegateSignature(); // Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroStart_Menu_EventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

