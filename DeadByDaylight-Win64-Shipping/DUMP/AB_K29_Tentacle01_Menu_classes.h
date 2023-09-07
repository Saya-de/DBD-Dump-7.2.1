// AnimBlueprintGeneratedClass AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C
// Size: 0x5c9 (Inherited: 0x300)
struct UAB_K29_Tentacle01_Menu_C : UBaseMenuAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x368(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x390(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x410(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4c8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x500(0xb0)
	bool Role Selected; // 0x5b0(0x01)
	bool Is Online; // 0x5b1(0x01)
	char pad_5B2[0x2]; // 0x5b2(0x02)
	int32_t RandomInterupt; // 0x5b4(0x04)
	struct UAB_Menu_Slasher29_C* As AB Menu Slasher 29; // 0x5b8(0x08)
	struct ADBDMenuPlayer* As DBDMenu Player; // 0x5c0(0x08)
	bool _IsPlayingInterrupt; // 0x5c8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayInterrupt(); // Function AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C.PlayInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_K29_Tentacle01_Menu(int32_t EntryPoint); // Function AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C.ExecuteUbergraph_AB_K29_Tentacle01_Menu // (Final|UbergraphFunction) // @ game+0x5e02c90
};

