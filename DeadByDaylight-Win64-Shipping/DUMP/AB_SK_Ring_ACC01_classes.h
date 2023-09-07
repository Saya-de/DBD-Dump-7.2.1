// AnimBlueprintGeneratedClass AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C
// Size: 0xdf0 (Inherited: 0x2c0)
struct UAB_SK_Ring_ACC01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x300(0x1d8)
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x4e0(0x460)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x940(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x960(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x980(0x460)
	bool Initialized; // 0xde0(0x01)
	char pad_DE1[0x7]; // 0xde1(0x07)
	struct USkeletalMeshComponent* OwningCharacterSkeletalMesh; // 0xde8(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_SK_Ring_ACC01(int32_t EntryPoint); // Function AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C.ExecuteUbergraph_AB_SK_Ring_ACC01 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

