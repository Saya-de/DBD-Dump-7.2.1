// AnimBlueprintGeneratedClass AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C
// Size: 0x14e0 (Inherited: 0x2c0)
struct UAB_Survivor_Subgraph_Menu_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x300(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x328(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x350(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x378(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x3a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x3c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x3f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x418(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x440(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x468(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x490(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x4b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x4e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x508(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x530(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x558(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x5d8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x610(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x690(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x6c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x748(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x780(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x7a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x7d0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7f8(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x828(0x38)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x860(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x890(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x8c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x948(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x980(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xa30(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xa68(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xae8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xb20(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xbd0(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xc50(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xd10(0x158)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xe68(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xee8(0x158)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1040(0xc0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1100(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1128(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1150(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1178(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x11f8(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1230(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x12b0(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x12e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1368(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x13a0(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1450(0x30)
	enum class EItemHandPosition HandPosition; // 0x1480(0x01)
	bool RoleSelected; // 0x1481(0x01)
	char pad_1482[0x6]; // 0x1482(0x06)
	struct UAnimSequence* ItemHandSmallLayer; // 0x1488(0x08)
	struct UAnimSequence* ItemHandFirecrackerLayer; // 0x1490(0x08)
	struct UAnimSequence* ItemHandAimLayer; // 0x1498(0x08)
	struct UAnimSequence* ItemFullRightArmLayer; // 0x14a0(0x08)
	struct UAnimSequence* MenuInterrupt_03; // 0x14a8(0x08)
	struct UAnimSequence* MenuInterrupt_02; // 0x14b0(0x08)
	struct UAnimSequence* MenuInterrupt_01; // 0x14b8(0x08)
	struct UAnimSequence* MenuIdle; // 0x14c0(0x08)
	struct UAnimSequence* StartIdle; // 0x14c8(0x08)
	bool DebugPassToNextAnimation; // 0x14d0(0x01)
	char pad_14D1[0x3]; // 0x14d1(0x03)
	int32_t RandomInterrupt; // 0x14d4(0x04)
	struct ABP_Menu_Base_Camper_C* BP Menu Base Camper; // 0x14d8(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9970088E4C3C16B3EF740BBB5E47984C(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9970088E4C3C16B3EF740BBB5E47984C // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_F122598A4F9D1B011D1292A21F7B2570(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_F122598A4F9D1B011D1292A21F7B2570 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D631873242E9BA4894F42D8A6DE57856(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D631873242E9BA4894F42D8A6DE57856 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_929FD4D64CE4C1FB23C95EAC2CE28466(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_929FD4D64CE4C1FB23C95EAC2CE28466 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D0809FA24DDDBCE57480B48E02687B56(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D0809FA24DDDBCE57480B48E02687B56 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_62FBA6FA40D956801D6086B3678EB300(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_62FBA6FA40D956801D6086B3678EB300 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_8365519248439F8DE8823E912B9141F3(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_8365519248439F8DE8823E912B9141F3 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9959C8A14951F994497B23952F91A698(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9959C8A14951F994497B23952F91A698 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B2F4E5834CB5C1FE277202B944B08500(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B2F4E5834CB5C1FE277202B944B08500 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_3AF2AA01450E0841069B67BB41D7E3E2(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_3AF2AA01450E0841069B67BB41D7E3E2 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7F5CEE0941539403E81BDAB7B1729FEE(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7F5CEE0941539403E81BDAB7B1729FEE // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_C2986FD641D24D0FA3FBBF836793044E(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_C2986FD641D24D0FA3FBBF836793044E // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7556CA2A4F3EE0B0BA6BE9859FA3B1E7(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7556CA2A4F3EE0B0BA6BE9859FA3B1E7 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B03BDF754723D25A84B2D58617EBD460(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B03BDF754723D25A84B2D58617EBD460 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_CA04D8104F686BF3EC329499FF32CC69(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_CA04D8104F686BF3EC329499FF32CC69 // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintInitializeAnimation(); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ChangeMenuInterrupt(int32_t MenuInterrupt, bool DebugPassCurrentAnimation); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.ChangeMenuInterrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Survivor_Subgraph_Menu(int32_t EntryPoint); // Function AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.ExecuteUbergraph_AB_Survivor_Subgraph_Menu // (Final|UbergraphFunction) // @ game+0x5e02c90
};

