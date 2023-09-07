// AnimBlueprintGeneratedClass AB_Slasher_28.AB_Slasher_27_C
// Size: 0x2235 (Inherited: 0x640)
struct UAB_Slasher_27_C : UOnryoAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x648(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x680(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x6d0(0x50)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph_4; // 0x720(0xa8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x7c8(0x50)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph_3; // 0x818(0xa8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8c0(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xa18(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa40(0x80)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0xac0(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xad8(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xb78(0x38)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xbb0(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xbe0(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xc18(0xb0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xcc8(0xc0)
	char pad_D88[0x8]; // 0xd88(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0xd90(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x11f0(0x460)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1650(0x460)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ab0(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1ad0(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1af0(0x460)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1f50(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1f80(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1fb8(0xb0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph_2; // 0x2068(0xa8)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x2110(0xa8)
	bool __CustomProperty__newLocomotion_FFEFA6284F8F2CC59493A397CAD13299; // 0x21b8(0x01)
	char pad_21B9[0x3]; // 0x21b9(0x03)
	float __CustomProperty__forwardVelocity_FFEFA6284F8F2CC59493A397CAD13299; // 0x21bc(0x04)
	float __CustomProperty__lateralVelocity_FFEFA6284F8F2CC59493A397CAD13299; // 0x21c0(0x04)
	bool __CustomProperty__isAttacking_FFEFA6284F8F2CC59493A397CAD13299; // 0x21c4(0x01)
	bool __CustomProperty__isIdle_FFEFA6284F8F2CC59493A397CAD13299; // 0x21c5(0x01)
	bool __CustomProperty__isInAir_FFEFA6284F8F2CC59493A397CAD13299; // 0x21c6(0x01)
	enum class EInteractionAnimation __CustomProperty__interactionType_FFEFA6284F8F2CC59493A397CAD13299; // 0x21c7(0x01)
	bool __CustomProperty__isCarrying_FFEFA6284F8F2CC59493A397CAD13299; // 0x21c8(0x01)
	char pad_21C9[0x3]; // 0x21c9(0x03)
	float __CustomProperty__turnInPlaceThresholdAngle_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21cc(0x04)
	bool __CustomProperty__enableTurnInPlace_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21d0(0x01)
	bool __CustomProperty_isAttacking_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21d1(0x01)
	bool __CustomProperty_IsCarrying_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21d2(0x01)
	bool __CustomProperty__FirstPersonView_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21d3(0x01)
	float __CustomProperty__animPitch_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21d4(0x04)
	bool __CustomProperty_isMoving_05C674654E31B1BDC4AD979988D88A45; // 0x21d8(0x01)
	bool __CustomProperty_IsInOtherWorld_05C674654E31B1BDC4AD979988D88A45; // 0x21d9(0x01)
	bool __CustomProperty_IsExitingManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21da(0x01)
	bool __CustomProperty_IsEnteringManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21db(0x01)
	bool __CustomProperty_IsTeleporting_05C674654E31B1BDC4AD979988D88A45; // 0x21dc(0x01)
	bool __CustomProperty_IsTeleportCancelled_05C674654E31B1BDC4AD979988D88A45; // 0x21dd(0x01)
	bool __CustomProperty_IsStartingUpTeleport_05C674654E31B1BDC4AD979988D88A45; // 0x21de(0x01)
	bool __CustomProperty_IsCrawlingOutOfTV_05C674654E31B1BDC4AD979988D88A45; // 0x21df(0x01)
	bool __CustomProperty__idle_05C674654E31B1BDC4AD979988D88A45; // 0x21e0(0x01)
	bool __CustomProperty_isFPV_05C674654E31B1BDC4AD979988D88A45; // 0x21e1(0x01)
	bool __CustomProperty__firstPersonView_C7B5989F49CD280AECC70E98AB545B32; // 0x21e2(0x01)
	char pad_21E3[0x1]; // 0x21e3(0x01)
	float __CustomProperty__direction_C7B5989F49CD280AECC70E98AB545B32; // 0x21e4(0x04)
	bool __CustomProperty__isAttack_C7B5989F49CD280AECC70E98AB545B32; // 0x21e8(0x01)
	bool __CustomProperty__isIdle_C7B5989F49CD280AECC70E98AB545B32; // 0x21e9(0x01)
	char pad_21EA[0x6]; // 0x21ea(0x06)
	struct UAnimSequenceBase* _Intro; // 0x21f0(0x08)
	struct FAset_Slasher_LookAT LookAtAnimSet; // 0x21f8(0x38)
	float CameraFOV; // 0x2230(0x04)
	bool IsLegendary; // 0x2234(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Slasher_28.AB_Slasher_27_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FX_K27_InteractionStart_Vignette(); // Function AB_Slasher_28.AB_Slasher_27_C.FX_K27_InteractionStart_Vignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CosmeticOnUnmanifestChargeChanged(float Charge Percent); // Function AB_Slasher_28.AB_Slasher_27_C.CosmeticOnUnmanifestChargeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CosmeticOnManifestChargeChanged(float Charge Percent); // Function AB_Slasher_28.AB_Slasher_27_C.CosmeticOnManifestChargeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766(); // Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45(); // Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45 // (BlueprintEvent) // @ game+0x5e02c90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D(); // Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D // (BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Slasher_28.AB_Slasher_27_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_FX_K27_InteractionStart_Vignette(); // Function AB_Slasher_28.AB_Slasher_27_C.AnimNotify_FX_K27_InteractionStart_Vignette // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintLinkedAnimationLayersInitialized(); // Function AB_Slasher_28.AB_Slasher_27_C.BlueprintLinkedAnimationLayersInitialized // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Slasher_28(int32_t EntryPoint); // Function AB_Slasher_28.AB_Slasher_27_C.ExecuteUbergraph_AB_Slasher_28 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

