// AnimBlueprintGeneratedClass AB_Menu_S39.AB_Menu_S39_C
// Size: 0x588 (Inherited: 0x2c0)
struct UAB_Menu_S39_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x38)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x300(0xa8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3a8(0x110)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4b8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4d8(0x20)
	struct UAnimSequence* __CustomProperty_StartIdle_DFB8A5C5457E0B846365A79ADF150865; // 0x4f8(0x08)
	struct UAnimSequence* __CustomProperty_MenuIdle_DFB8A5C5457E0B846365A79ADF150865; // 0x500(0x08)
	struct UAnimSequence* __CustomProperty_MenuInterrupt_01_DFB8A5C5457E0B846365A79ADF150865; // 0x508(0x08)
	struct UAnimSequence* __CustomProperty_MenuInterrupt_02_DFB8A5C5457E0B846365A79ADF150865; // 0x510(0x08)
	struct UAnimSequence* __CustomProperty_MenuInterrupt_03_DFB8A5C5457E0B846365A79ADF150865; // 0x518(0x08)
	struct UAnimSequence* __CustomProperty_ItemFullRightArmLayer_DFB8A5C5457E0B846365A79ADF150865; // 0x520(0x08)
	struct UAnimSequence* __CustomProperty_ItemHandAimLayer_DFB8A5C5457E0B846365A79ADF150865; // 0x528(0x08)
	struct UAnimSequence* __CustomProperty_ItemHandFirecrackerLayer_DFB8A5C5457E0B846365A79ADF150865; // 0x530(0x08)
	struct UAnimSequence* __CustomProperty_ItemHandSmallLayer_DFB8A5C5457E0B846365A79ADF150865; // 0x538(0x08)
	struct UAnimSequence* Start Idle; // 0x540(0x08)
	struct UAnimSequence* Item Hand Small Layer; // 0x548(0x08)
	struct UAnimSequence* Menu Interrupt_03; // 0x550(0x08)
	struct UAnimSequence* Item Full Right Arm Layer; // 0x558(0x08)
	struct UAnimSequence* Item Hand Aim Layer; // 0x560(0x08)
	struct UAnimSequence* Item Hand Firecracker Layer; // 0x568(0x08)
	struct UAnimSequence* Menu Idle; // 0x570(0x08)
	struct UAnimSequence* Menu Interrupt_02; // 0x578(0x08)
	struct UAnimSequence* Menu Interrupt_01; // 0x580(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Menu_S39.AB_Menu_S39_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_AB_Menu_S39(int32_t EntryPoint); // Function AB_Menu_S39.AB_Menu_S39_C.ExecuteUbergraph_AB_Menu_S39 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

