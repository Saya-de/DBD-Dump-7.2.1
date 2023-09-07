// AnimBlueprintGeneratedClass AB_S31_Radio.AB_S31_Radio_C
// Size: 0x6ac (Inherited: 0x2c0)
struct UAB_S31_Radio_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x300(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x328(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x350(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x378(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3a0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x448(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x480(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x500(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x538(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5b8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5f0(0xb0)
	struct UAB_Menu_S31_C* As AB Menu S31; // 0x6a0(0x08)
	bool Role Selected; // 0x6a8(0x01)
	bool Menu Interrupt; // 0x6a9(0x01)
	enum class EItemHandPosition Hand Position; // 0x6aa(0x01)
	bool radioInterruptTransition; // 0x6ab(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_S31_Radio.AB_S31_Radio_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_S31_Radio.AB_S31_Radio_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintBeginPlay(); // Function AB_S31_Radio.AB_S31_Radio_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_S31_Radio(int32_t EntryPoint); // Function AB_S31_Radio.AB_S31_Radio_C.ExecuteUbergraph_AB_S31_Radio // (Final|UbergraphFunction) // @ game+0x5e02c90
};

