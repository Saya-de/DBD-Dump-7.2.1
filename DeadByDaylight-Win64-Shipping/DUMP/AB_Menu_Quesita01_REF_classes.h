// AnimBlueprintGeneratedClass AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C
// Size: 0x659 (Inherited: 0x2c0)
struct UAB_Menu_Quesita01_REF_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x300(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x328(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3d0(0x38)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x408(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x428(0x110)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x538(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x558(0x18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x570(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5a8(0xb0)
	enum class Enum_CamperMenuAnimationState CamperMenuAnimationState; // 0x658(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Quesita_MenuDissolve_Out(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_Quesita_MenuDissolve_Out // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Quesita_MenuDissolve_In(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_Quesita_MenuDissolve_In // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_29CAF8FC40571879471B8C9E6B29B59A(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_29CAF8FC40571879471B8C9E6B29B59A // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_0D6B54F141E620F76F829D9F6FDE3069(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_0D6B54F141E620F76F829D9F6FDE3069 // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintBeginPlay(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnCamperAnimationMenuStateChanged(enum class Enum_CamperMenuAnimationState State); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.OnCamperAnimationMenuStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_QuesitaDissolve_In(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_FX_QuesitaDissolve_In // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_QuesitaDissolve_Out(); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_FX_QuesitaDissolve_Out // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Quesita01_REF(int32_t EntryPoint); // Function AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.ExecuteUbergraph_AB_Menu_Quesita01_REF // (Final|UbergraphFunction) // @ game+0x5e02c90
};

