// AnimBlueprintGeneratedClass AB_Menu_Slasher31.AB_Menu_Slasher31_C
// Size: 0x698 (Inherited: 0x310)
struct UAB_Menu_Slasher31_C : UK31MenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x318(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x350(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x378(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3f8(0x38)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x430(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4d8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510(0xb0)
	bool Role Selected; // 0x5c0(0x01)
	bool Is Online; // 0x5c1(0x01)
	char pad_5C2[0x2]; // 0x5c2(0x02)
	int32_t RandomInterupt; // 0x5c4(0x04)
	enum class EGameFlowStep CurrentMenu; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct ABP_Menu_Slasher31_C* KillerBP; // 0x5d0(0x08)
	struct FAset_Slasher_Menu MenuAnimSet_01; // 0x5d8(0x30)
	struct FAset_Slasher_Menu MenuAnimSet_02; // 0x608(0x30)
	struct FAset_Slasher_Menu MenuAnimSet_03; // 0x638(0x30)
	struct FAset_Slasher_Menu MenuAnimSet; // 0x668(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_FF79019945E856B21A4DD7B9040097DE(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_FF79019945E856B21A4DD7B9040097DE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_FF79019945E856B21A4DD7B9040097DE(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_FF79019945E856B21A4DD7B9040097DE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_FF79019945E856B21A4DD7B9040097DE(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_FF79019945E856B21A4DD7B9040097DE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8(struct FName NotifyName); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A(); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnCustoChange(int32_t animationMappingIndex); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustoChange // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintLinkedAnimationLayersInitialized(); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintLinkedAnimationLayersInitialized // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnMenuAnimationStateChange_Event(enum class Enum_MenuAnimationState State); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnMenuAnimationStateChange_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustomizationAnimationMappingIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_Slasher31(int32_t EntryPoint); // Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.ExecuteUbergraph_AB_Menu_Slasher31 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

