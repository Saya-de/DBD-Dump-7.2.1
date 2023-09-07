// AnimBlueprintGeneratedClass AB_Menu_Slasher32.AB_Menu_Slasher32_C
// Size: 0x8a0 (Inherited: 0x300)
struct UAB_Menu_Slasher32_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x340(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x368(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x388(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3a8(0x110)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x538(0x38)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x570(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x590(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5b0(0x110)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x6c0(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x768(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a0(0xb0)
	bool Role Selected; // 0x850(0x01)
	bool Is Online; // 0x851(0x01)
	char pad_852[0x2]; // 0x852(0x02)
	int32_t RandomInterupt; // 0x854(0x04)
	enum class EGameFlowStep CurrentMenu; // 0x858(0x01)
	char pad_859[0x7]; // 0x859(0x07)
	struct FString CurrentMenuString; // 0x860(0x10)
	struct FAset_Slasher_Menu MenuAnimSet; // 0x870(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher32.AB_Menu_Slasher32_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher32_AnimGraphNode_TransitionResult_13FC268E47D12B172B1C768D9D6C59EC(); // Function AB_Menu_Slasher32.AB_Menu_Slasher32_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher32_AnimGraphNode_TransitionResult_13FC268E47D12B172B1C768D9D6C59EC // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintLinkedAnimationLayersInitialized(); // Function AB_Menu_Slasher32.AB_Menu_Slasher32_C.BlueprintLinkedAnimationLayersInitialized // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher32.AB_Menu_Slasher32_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher32(int32_t EntryPoint); // Function AB_Menu_Slasher32.AB_Menu_Slasher32_C.ExecuteUbergraph_AB_Menu_Slasher32 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

